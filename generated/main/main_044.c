#include "cpu.h"
#include "neon_rt.h"
void f_38192c(Cpu *c);
void f_382374(Cpu *c);
void f_3831cc(Cpu *c);
void f_4329b8(Cpu *c);
void f_432f84(Cpu *c);
void f_4793a4(Cpu *c);
void f_47bcd0(Cpu *c);
void f_47c6f8(Cpu *c);
void f_47c7ec(Cpu *c);
void f_47e608(Cpu *c);
void f_47f678(Cpu *c);
void f_48015c(Cpu *c);
void f_480e4c(Cpu *c);
void f_481998(Cpu *c);
void f_481b4c(Cpu *c);
void f_481c30(Cpu *c);
void f_481d08(Cpu *c);
void f_481ed4(Cpu *c);
void f_482434(Cpu *c);
void f_4824a8(Cpu *c);
void f_4827b4(Cpu *c);
void f_482808(Cpu *c);
void f_482f58(Cpu *c);
void f_482f7c(Cpu *c);
void f_482fd8(Cpu *c);
void f_483060(Cpu *c);
void f_4831e0(Cpu *c);
void f_48321c(Cpu *c);
void f_483238(Cpu *c);
void f_485e2c(Cpu *c);
void f_485f1c(Cpu *c);
void f_485f68(Cpu *c);
void f_4864c4(Cpu *c);
void f_4864d4(Cpu *c);
void f_487fec(Cpu *c);
void f_49cc40(Cpu *c);
void f_4a00cc(Cpu *c);
void f_4a0124(Cpu *c);
void f_4a017c(Cpu *c);
void f_4a01d8(Cpu *c);
void f_4a05b8(Cpu *c);
void f_4a07a8(Cpu *c);
void f_4a25a8(Cpu *c);
void f_4a25f0(Cpu *c);
void f_4a2db4(Cpu *c);
void f_4a3fdc(Cpu *c);
void f_4a42f0(Cpu *c);
void f_4a5cbc(Cpu *c);
void f_4a5ce4(Cpu *c);
void f_4a6294(Cpu *c);
void f_4a9098(Cpu *c);
void f_4a9858(Cpu *c);
void f_4a9abc(Cpu *c);
void f_4ad288(Cpu *c);
void f_4b2618(Cpu *c);
void f_4b6e94(Cpu *c);
void f_4c63e0(Cpu *c);
void f_4c7e28(Cpu *c);
void f_4e16bc(Cpu *c);
void f_4e181c(Cpu *c);
void f_4e59dc(Cpu *c);
void f_4e5e74(Cpu *c);
void f_4e625c(Cpu *c);
void f_4e6654(Cpu *c);
void f_4e6764(Cpu *c);
void f_4e6834(Cpu *c);
void f_4e6bd8(Cpu *c);
void f_4e6e8c(Cpu *c);
void f_4e7064(Cpu *c);
void f_4e7160(Cpu *c);
void f_4e7294(Cpu *c);
void f_4e7460(Cpu *c);
void f_4e76e8(Cpu *c);
void f_4e778c(Cpu *c);
void f_4e9b7c(Cpu *c);
void f_4f1c50(Cpu *c);
void f_4f4788(Cpu *c);
void f_4f4e08(Cpu *c);
void f_4f52fc(Cpu *c);
void f_4f5478(Cpu *c);
void f_4f5490(Cpu *c);
void f_4f54e0(Cpu *c);
void f_4f54f8(Cpu *c);
void f_4f5508(Cpu *c);
void f_4f5760(Cpu *c);
void f_4f5864(Cpu *c);
void f_4f7ad8(Cpu *c);
void f_4ff984(Cpu *c);
void f_4ffba0(Cpu *c);
void f_4ffca0(Cpu *c);
void f_4ffd50(Cpu *c);
void f_5a5ed0(Cpu *c);
void f_701024(Cpu *c);
void f_701e00(Cpu *c);
void f_701e60(Cpu *c);
void f_704c4c(Cpu *c);
void f_73a058(Cpu *c);
void f_73a444(Cpu *c);
void f_73a454(Cpu *c);
void f_73aa84(Cpu *c);
void f_9c6914(Cpu *c);
void f_b50bcc(Cpu *c);
void f_15efd70(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_4e491c(Cpu *restrict c) {
    FN_ENTER(0x4e491cu);
L_4e491c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[1] = 0x0u;
    c->r[4] = c->r[0];
    c->r[14] = 0x4e492cu; f_47c7ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e4a14; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e493cu; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e4ab4; }
    c->r[0] = 0x2b80u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = ea; c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e4958u; f_4ffba0(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e496cu; rt_dispatch(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_4e49c0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e4988u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e499cu; rt_dispatch(c);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_4e49c0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[2] = 0x55u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x390u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[7]; c->r[14] = 0x4e49c0u; rt_dispatch(c);
L_4e49c0:;
    c->r[0] = 0x329au;
    c->r[1] = 0x0u;
    c->r[7] = c->r[4];
    c->r[2] = c->r[8];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x2b7cu;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[5]; c->r[14] = 0x4e49f0u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    { uint32_t ea = c->r[6] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e4a0cu; f_4ff984(c);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_4e4a14:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x4e4a20u; f_47c7ec(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x4e4a2cu; f_47bcd0(c);
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_4e4ab8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e4ab4; }
    c->r[0] = 0x2b80u;
    c->r[6] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = ea; c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e4a54u; f_487fec(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_4e4ab4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xceu); }
    if (COND_EQ) { goto L_4e4ab4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e4a80u; rt_dispatch(c);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4e4ab4; }
    c->r[0] = 0x15542e4u;
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x4e4a9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4e4aa0u; f_4793a4(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x4e4aacu; f_4ff984(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_4e4af4; }
L_4e4ab4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_4e4ab8:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e4ad0; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x0u;
    c->r[14] = 0x4e4ad0u; f_4ad288(c);
L_4e4ad0:;
    c->r[0] = 0x2550u;
    c->r[2] = c->r[4];
    c->r[1] = 0x81u;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x394u; uint32_t v = LD32(ea); c->r[12] = v; }
L_4e4ae4:;
    c->r[0] = c->r[4];
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
L_4e4af4:;
    c->r[0] = 0x329au;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e4b08u; f_4ffca0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    { uint32_t ea = c->r[6] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e4b24u; f_4ff984(c);
    c->r[1] = 0x2b7cu;
    c->r[2] = 0x55u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x390u; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_4e4ae4;
}
void f_4e4b44(Cpu *restrict c) {
    FN_ENTER(0x4e4b44u);
L_4e4b44:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x4e4b50u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e4b90; }
    c->r[1] = 0x0u;
    c->r[0] = 0x27c4u;
    c->r[5] = c->r[4];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x44e10000u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x4e4b78u; f_4a2db4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->v.s[0] = 0x3f99999au;
    c->v.s[2] = LD32(c->r[5]);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[5], c->v.s[0]);
L_4e4b90:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_4e4b98(Cpu *restrict c) {
    FN_ENTER(0x4e4b98u);
L_4e4b98:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[1] = 0x18u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5c0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4bc0u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e4bc8u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e56cc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4be4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e4c08; }
    c->r[0] = 0x2800u;
    c->r[1] = 0x2802u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_4e56f8; }
L_4e4c08:;
    c->r[7] = 0x1u;
L_4e4c0c:;
    c->r[0] = 0x2820u;
    c->r[8] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[8]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4e4c2c; }
    c->r[7] = c->r[7] + 0x1u;
    goto L_4e4c58;
L_4e4c2c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x4e4c38u; f_47c7ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e4c58; }
    c->r[0] = 0x277cu;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = c->r[7] + 0x1u; }
L_4e4c58:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4c6cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e4ca0; }
    c->r[0] = 0x2801u;
    c->r[1] = 0x2804u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4e4ca8; }
L_4e4ca0:;
    c->r[7] = c->r[7] + 0x1u;
    goto L_4e4cc0;
L_4e4ca8:;
    c->r[0] = 0x2818u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = c->r[7] + 0x1u; }
L_4e4cc0:;
    c->r[0] = 0x28ccu;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4e4ce0; }
    c->r[7] = c->r[7] + 0x1u;
    goto L_4e4cf8;
L_4e4ce0:;
    c->r[0] = 0x28c8u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = c->r[7] + 0x1u; }
L_4e4cf8:;
    c->r[0] = 0x28c4u;
    c->r[11] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[11]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4e4d18; }
    c->r[7] = c->r[7] + 0x1u;
    goto L_4e4d2c;
L_4e4d18:;
    c->r[0] = c->r[4] + 0x28c0u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = c->r[7] + 0x1u; }
L_4e4d2c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4d40u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e4d50; }
    c->r[7] = c->r[7] + 0x1u;
    goto L_4e4d68;
L_4e4d50:;
    c->r[0] = 0x287cu;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = c->r[7] + 0x1u; }
L_4e4d68:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x80u;
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4d7cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e4d8c; }
    c->r[7] = c->r[7] + 0x1u;
    goto L_4e4da0;
L_4e4d8c:;
    c->r[0] = c->r[4] + 0x2880u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = c->r[7] + 0x1u; }
L_4e4da0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x20u;
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4db4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e4dc4; }
    c->r[7] = c->r[7] + 0x1u;
    goto L_4e4ddc;
L_4e4dc4:;
    c->r[0] = 0x13ecu;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = c->r[7] + 0x1u; }
L_4e4ddc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x80000u;
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4df0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e4e10; }
    c->r[0] = 0x2834u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4e4e18; }
L_4e4e10:;
    c->r[7] = c->r[7] + 0x1u;
    goto L_4e4e30;
L_4e4e18:;
    c->r[0] = 0x27d0u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = c->r[7] + 0x1u; }
L_4e4e30:;
    c->r[0] = 0x288cu;
    c->r[5] = c->r[4];
    c->r[1] = 0x800000u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4e4cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4e4e94; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10000000u;
    { uint32_t ea = c->r[0] + 0x25cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4e74u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4e4e90; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10000u;
    { uint32_t ea = c->r[0] + 0x25cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4e90u; rt_dispatch(c);
L_4e4e90:;
    c->r[7] = c->r[7] + 0x1u;
L_4e4e94:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e4e9cu; f_4f5508(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    c->pc = c->r[2]; c->r[14] = 0x4e4ec0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4edcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4ef8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4f14u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4f30u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x80u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4f4cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4f68u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x20u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4f84u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4fa0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4fbcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4fd8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x400u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e4ff4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e5004; }
    c->r[7] = c->r[7] + 0x1u;
    goto L_4e501c;
L_4e5004:;
    c->r[0] = 0x2b3cu;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = c->r[7] + 0x1u; }
L_4e501c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x800u;
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e5030u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1000u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e504cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x200u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e5068u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2000u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e5084u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e50a0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4000u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e50bcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8000u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e50d8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10000u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e50f4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x20000u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e5110u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40000u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e512cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e5148u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x200u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e5164u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100000u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e5180u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e51ec; }
    c->r[0] = 0x2990u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_4e51ec; }
    c->r[0] = 0x282cu;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_4e51ec; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x840u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e51c8u; rt_dispatch(c);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_4e51ec; }
    c->r[0] = 0x281cu;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4e5718; }
L_4e51ec:;
    c->r[7] = c->r[7] + 0x1u;
L_4e51f0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2000000u;
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e5204u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x200000u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e5220u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1000000u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e523cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x2988u;
    c->r[5] = c->r[4];
    c->r[1] = 0x400000u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + c->r[0]; c->r[0] = v; }
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e5260u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[5]);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x1u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_4e5290; }
    c->r[0] = 0x2984u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GT) { c->r[0] = 0x1u; }
L_4e5290:;
    c->r[9] = c->r[7] + c->r[0];
    c->r[0] = 0x29d4u;
    c->r[5] = c->r[4];
    c->r[1] = 0xe0000000u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e52b0u; rt_dispatch(c);
    c->r[1] = 0x2964u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x29c4u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[4] + c->r[0];
    if (COND_NE) { c->r[9] = c->r[9] + 0x1u; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x29b8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[9] = c->r[9] + 0x1u; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[4];
    if (COND_GT) { c->r[9] = c->r[9] + 0x1u; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[9] = c->r[9] + 0x1u; }
    c->r[14] = 0x4e5304u; f_4f5478(c);
    c->v.s[0] = LD32(c->r[5]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[9] = c->r[9] + 0x1u; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4e5324; }
    c->r[9] = c->r[9] + 0x1u;
    goto L_4e533c;
L_4e5324:;
    c->r[0] = 0x29d8u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[9] = c->r[9] + 0x1u; }
L_4e533c:;
    c->r[0] = 0x27c4u;
    c->r[1] = 0x2b34u;
    c->r[10] = c->r[4] + 0x27c0u;
    c->r[6] = 0x0u;
    c->r[2] = c->r[4] + c->r[0];
    c->r[0] = 0x27ccu;
    c->r[1] = c->r[4] + c->r[1];
    c->r[7] = c->r[4] + c->r[0];
    c->r[0] = 0x27d4u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[3] = c->r[4] + c->r[0];
    c->r[0] = 0x2b14u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = 0x1u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[0] = 0x2800u;
    c->v.s[4] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[7]);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->v.s[10] = LD32(c->r[10]);
    c->v.s[8] = LD32(c->r[2]);
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2802u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2808u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[6]); }
    vfp_cmp_f(c, c->v.f[10], 0.0f);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    if (COND_GT) { c->r[9] = c->r[9] + 0x1u; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    if (COND_GT) { c->r[9] = c->r[9] + 0x1u; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    if (COND_GT) { c->r[9] = c->r[9] + 0x1u; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    if (COND_GT) { c->r[9] = c->r[9] + 0x1u; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    if (COND_GT) { c->r[9] = c->r[9] + 0x1u; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[9] = c->r[9] + 0x1u; }
    c->r[14] = 0x4e5400u; f_47c7ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = 0x277cu; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); } }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5414u; f_4f4788(c);
    c->r[0] = 0x28c0u;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5428u; f_4f54e0(c);
    c->v.s[0] = 0x0u;
    c->r[0] = 0x287cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x2880u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x13ecu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e544cu; f_4b2618(c);
    c->r[0] = 0x28ecu;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5a0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5464u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e546cu; f_4f54f8(c);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[2] = 0x3f800000u;
    c->r[11] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = 0x3f800000u; }
    if (COND_GT) { { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); } }
    c->r[0] = 0x282cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = 0x2990u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = 0x2900u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = 0x28fcu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = 0x28f8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = 0x28f4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e54c0u; f_4f5864(c);
    c->r[0] = 0x13dau;
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[8] = c->r[8] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x844u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e54d8u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e54e0u; f_4f5760(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e54f0u; f_4f52fc(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e54f8u; f_4f1c50(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5500u; f_4f5490(c);
    c->r[0] = 0x29d8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = 0x27d0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5534u; f_4a42f0(c);
    c->r[0] = 0x2810u;
    c->r[1] = 0x13d8u;
    c->r[3] = 0xfffbu;
    c->r[5] = 0x29fcu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[11]); }
    c->r[0] = 0x2814u;
    c->r[12] = c->r[4] + c->r[1];
    c->r[1] = 0x13deu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = 0x2811u;
    c->r[14] = c->r[4] + c->r[1];
    c->r[1] = 0x29dcu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[11]); }
    c->r[0] = 0x2818u;
    c->r[7] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = 0x2812u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[11]); }
    c->r[0] = 0x281cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = 0x2b38u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = 0x2b3cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = 0x13d6u;
    c->r[0] = c->r[4] + c->r[0];
    goto L_4e55d0;
L_4e55ac:;
    { uint32_t ea = c->r[14]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[12]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_GT) { { uint32_t ea = c->r[0]; ST16(ea, c->r[6]); } }
    { uint32_t ea = c->r[8]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_GT) { { uint32_t ea = c->r[8]; ST16(ea, c->r[6]); } }
L_4e55d0:;
    c->r[6] = c->r[2] + c->r[3];
    c->r[6] = (uint32_t)(uint16_t)(c->r[6]);
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_CC) { goto L_4e5618; }
    c->r[6] = c->r[4] + (c->r[2] << 2);
    c->r[6] = c->r[6] + c->r[5];
    c->v.s[0] = LD32(c->r[6]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4e5618; }
    c->r[1] = c->r[7];
    (void)f_subs(c, c->r[2], 0x3u);
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[11]); c->r[1] = ea; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[11]); }
    c->r[6] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x108u; ST8(ea, c->r[11]); }
    if (COND_EQ) { goto L_4e55ac; }
L_4e5618:;
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], 0x1du);
    if (COND_NE) { goto L_4e55d0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e562cu; f_4a3fdc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x4e5638u; f_482808(c);
    { uint32_t r = c->r[0] * c->r[9]; c->r[0] = r; }
    c->v.s[18] = 0x41200000u;
    c->r[1] = 0xau;
    c->v.s[0] = c->r[0];
    c->r[0] = c->r[4];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[16] = c->v.f[0] + c->v.f[18];
    c->r[14] = 0x4e5658u; f_4a2db4(c);
    c->v.f[0] = c->v.f[16] + c->v.f[16];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->v.s[16] = COND_EQ ? c->v.s[16] : c->v.s[0];
    c->r[14] = 0x4e5670u; f_4864d4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e5680; }
    c->v.f[0] = c->v.f[16] / c->v.f[18];
    c->v.f[16] = c->v.f[16] + c->v.f[0];
L_4e5680:;
    c->r[0] = c->r[4];
    c->r[1] = 0xd3u;
    c->r[14] = 0x4e568cu; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e56a8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x133u;
    c->r[14] = 0x4e56a0u; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e56dc; }
L_4e56a8:;
    c->v.s[0] = 0x3e800000u;
L_4e56ac:;
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[16] * c->v.f[0]);
L_4e56b0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[16]);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4f0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->v.s[0];
    c->pc = c->r[3]; c->r[14] = 0x4e56ccu; rt_dispatch(c);
L_4e56cc:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_4e56dc:;
    c->r[0] = c->r[4];
    c->r[1] = 0xd4u;
    c->r[14] = 0x4e56e8u; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e56b0; }
    c->v.s[0] = 0xbe800000u;
    goto L_4e56ac;
L_4e56f8:;
    c->r[0] = 0x2814u;
    c->r[7] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = 0x1u; }
    goto L_4e4c0c;
L_4e5718:;
    c->r[0] = 0x2b38u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = c->r[7] + 0x1u; }
    goto L_4e51f0;
}
void f_4e5738(Cpu *restrict c) {
    FN_ENTER(0x4e5738u);
L_4e5738:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x15a20a0u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x4e5760u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x4e57bcu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x4e57d4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e57ecu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4e5810(Cpu *restrict c) {
    FN_ENTER(0x4e5810u);
L_4e5810:;
    c->r[1] = 0x250au;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x32u);
    if (COND_HI) { goto L_4e5940; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x4e582cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x4e58fcu: goto L_4e58fc; case 0x4e5904u: goto L_4e5904; case 0x4e590cu: goto L_4e590c; case 0x4e5914u: goto L_4e5914; case 0x4e591cu: goto L_4e591c; case 0x4e5920u: goto L_4e5920; case 0x4e5928u: goto L_4e5928; case 0x4e5930u: goto L_4e5930; case 0x4e5938u: goto L_4e5938; case 0x4e593cu: goto L_4e593c; case 0x4e5940u: goto L_4e5940; case 0x4e5944u: goto L_4e5944; case 0x4e594cu: goto L_4e594c; case 0x4e5954u: goto L_4e5954; case 0x4e595cu: goto L_4e595c; case 0x4e5964u: goto L_4e5964; case 0x4e596cu: goto L_4e596c; case 0x4e5974u: goto L_4e5974; case 0x4e597cu: goto L_4e597c; case 0x4e5984u: goto L_4e5984; case 0x4e598cu: goto L_4e598c; case 0x4e5994u: goto L_4e5994; case 0x4e599cu: goto L_4e599c; case 0x4e59a4u: goto L_4e59a4; case 0x4e59acu: goto L_4e59ac; case 0x4e59b4u: goto L_4e59b4; case 0x4e59bcu: goto L_4e59bc; case 0x4e59c4u: goto L_4e59c4; case 0x4e59ccu: goto L_4e59cc; case 0x4e59d4u: goto L_4e59d4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_4e58fc:;
    c->r[1] = 0x0u;
    __attribute__((musttail)) return f_4e59dc(c);
L_4e5904:;
    c->r[1] = 0x0u;
    __attribute__((musttail)) return f_4e5e74(c);
L_4e590c:;
    c->r[1] = 0x0u;
    __attribute__((musttail)) return f_4e625c(c);
L_4e5914:;
    c->r[1] = 0x0u;
    __attribute__((musttail)) return f_4e6654(c);
L_4e591c:;
    __attribute__((musttail)) return f_4e6764(c);
L_4e5920:;
    c->r[1] = 0x1u;
    __attribute__((musttail)) return f_4e5e74(c);
L_4e5928:;
    c->r[1] = 0x0u;
    __attribute__((musttail)) return f_4e6e8c(c);
L_4e5930:;
    c->r[1] = 0x1u;
    __attribute__((musttail)) return f_4e6e8c(c);
L_4e5938:;
    __attribute__((musttail)) return f_4e7064(c);
L_4e593c:;
    __attribute__((musttail)) return f_4e7160(c);
L_4e5940:;
    __attribute__((musttail)) return f_482f7c(c);
L_4e5944:;
    c->r[1] = 0x0u;
    __attribute__((musttail)) return f_4e7294(c);
L_4e594c:;
    c->r[1] = 0x2u;
    __attribute__((musttail)) return f_4e5e74(c);
L_4e5954:;
    c->r[1] = 0x0u;
    __attribute__((musttail)) return f_4e6834(c);
L_4e595c:;
    c->r[1] = 0x1u;
    __attribute__((musttail)) return f_4e7460(c);
L_4e5964:;
    c->r[1] = 0x2u;
    __attribute__((musttail)) return f_4e625c(c);
L_4e596c:;
    c->r[1] = 0x1u;
    __attribute__((musttail)) return f_4e59dc(c);
L_4e5974:;
    c->r[1] = 0x3u;
    __attribute__((musttail)) return f_4e5e74(c);
L_4e597c:;
    c->r[1] = 0x5u;
    __attribute__((musttail)) return f_4e5e74(c);
L_4e5984:;
    c->r[1] = 0x0u;
    __attribute__((musttail)) return f_4e6bd8(c);
L_4e598c:;
    c->r[1] = 0x6u;
    __attribute__((musttail)) return f_4e5e74(c);
L_4e5994:;
    c->r[1] = 0x1u;
    __attribute__((musttail)) return f_4e6bd8(c);
L_4e599c:;
    c->r[1] = 0x7u;
    __attribute__((musttail)) return f_4e5e74(c);
L_4e59a4:;
    c->r[1] = 0x2u;
    __attribute__((musttail)) return f_4e59dc(c);
L_4e59ac:;
    c->r[1] = 0x2u;
    __attribute__((musttail)) return f_4e6bd8(c);
L_4e59b4:;
    c->r[1] = 0x3u;
    __attribute__((musttail)) return f_4e6bd8(c);
L_4e59bc:;
    c->r[1] = 0x8u;
    __attribute__((musttail)) return f_4e5e74(c);
L_4e59c4:;
    c->r[1] = 0x9u;
    __attribute__((musttail)) return f_4e5e74(c);
L_4e59cc:;
    c->r[1] = 0xau;
    __attribute__((musttail)) return f_4e5e74(c);
L_4e59d4:;
    c->r[1] = 0xbu;
    __attribute__((musttail)) return f_4e5e74(c);
}
void f_4e59dc(Cpu *restrict c) {
    FN_ENTER(0x4e59dcu);
L_4e59dc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e5abc; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4e5e64; }
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5a30u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e5b3c; }
    c->r[0] = 0x13c4u;
    c->v.s[0] = 0x40800000u;
    c->v.s[2] = 0x41b00000u;
    (void)f_subs(c, c->r[5], 0x2u);
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = COND_EQ ? c->v.s[2] : c->v.s[0];
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x4u;
    c->r[0] = ROR32(c->r[0], 1);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_4e5c20; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x4e5a70u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x4e5a8cu: goto L_4e5a8c; case 0x4e5bdcu: goto L_4e5bdc; case 0x4e5bf8u: goto L_4e5bf8; case 0x4e5c20u: goto L_4e5c20; case 0x4e5c40u: goto L_4e5c40; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_4e5a8c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x80u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5aa4u; rt_dispatch(c);
    c->v.s[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e5c78; }
    c->r[0] = c->r[4];
    c->r[1] = 0x13b3u;
    goto L_4e5c2c;
L_4e5abc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5ac4u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e5e64; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e5ad8u; f_47c7ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e5b54; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5af0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e5b54; }
    c->r[0] = 0x2716u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e5b54; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x68cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_4e5b24:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0xau;
    c->r[3] = 0x0u;
    c->pc = c->r[5]; c->r[14] = 0x4e5b38u; rt_dispatch(c);
    goto L_4e5e64;
L_4e5b3c:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x40800000u;
    c->r[0] = c->r[4];
    c->r[1] = 0xbbau;
    c->r[14] = 0x4e5b50u; f_481998(c);
    goto L_4e5d40;
L_4e5b54:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e5b60u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4e5b9c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5b70u; f_47f678(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5b80u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e5de4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7c0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5b98u; rt_dispatch(c);
    goto L_4e5de4;
L_4e5b9c:;
    c->r[0] = 0x2798u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4e5de4; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_4e5cc4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x30u;
    c->r[3] = 0x1u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4831e0(c);
L_4e5bdc:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = 0x13aau;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_EQ) { goto L_4e5ca8; }
    goto L_4e5cb0;
L_4e5bf8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5c08u; rt_dispatch(c);
    c->v.s[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e5c94; }
    c->r[0] = c->r[4];
    c->r[1] = 0x13a0u;
    goto L_4e5c2c;
L_4e5c20:;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x138cu;
L_4e5c2c:;
    c->v.s[0] = c->v.s[16];
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_4e5c70; }
    c->r[14] = 0x4e5c3cu; f_481d08(c);
    goto L_4e5d40;
L_4e5c40:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5c50u; rt_dispatch(c);
    c->v.s[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->v.s[0] = 0x40800000u;
    c->r[0] = c->r[4];
    if (COND_NE) { c->r[1] = 0x13a0u; }
    if (COND_EQ) { c->r[1] = 0x138cu; }
    c->r[14] = 0x4e5c6cu; f_481c30(c);
    goto L_4e5d40;
L_4e5c70:;
    c->r[14] = 0x4e5c74u; f_481b4c(c);
    goto L_4e5d40;
L_4e5c78:;
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = 0x13b2u;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_4e5d2c; }
    c->r[14] = 0x4e5c90u; f_481d08(c);
    goto L_4e5d30;
L_4e5c94:;
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = 0x138cu;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_4e5cb0; }
L_4e5ca8:;
    c->r[14] = 0x4e5cacu; f_481d08(c);
    goto L_4e5cb4;
L_4e5cb0:;
    c->r[14] = 0x4e5cb4u; f_481b4c(c);
L_4e5cb4:;
    c->r[1] = 0x6666u;
    c->r[0] = 0x14b0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3f660000u;
    goto L_4e5d3c;
L_4e5cc4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5cd4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e5d0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x4e5cecu; f_47c7ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e5d0c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    goto L_4e5b24;
L_4e5d0c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0xau;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5d28u; f_4b6e94(c);
    goto L_4e5e64;
L_4e5d2c:;
    c->r[14] = 0x4e5d30u; f_481b4c(c);
L_4e5d30:;
    c->r[1] = 0x3333u;
    c->r[0] = 0x14b0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3f730000u;
L_4e5d3c:;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
L_4e5d40:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e5d54u; f_482fd8(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x40u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e5d64u; f_483238(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x200u;
    c->r[14] = 0x4e5d74u; f_483238(c);
    c->r[1] = 0x0u;
    c->r[0] = 0x2798u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5d94u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = 0x14a4u; }
    if (COND_EQ) { c->r[1] = 0xeu; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5db4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e5dd4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x620u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e5dd0u; rt_dispatch(c);
    goto L_4e5de4;
L_4e5dd4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3e8u;
    c->r[2] = 0x0u;
    c->r[14] = 0x4e5de4u; f_4e9b7c(c);
L_4e5de4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5df4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e5e64; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e5e08u; f_47c7ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e5e28; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5e18u; f_73a058(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    goto L_4e5e50;
L_4e5e28:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x4e5e34u; f_47c7ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e5e64; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5e44u; f_73a058(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x3u;
L_4e5e50:;
    c->r[3] = 0x1u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4a07a8(c);
L_4e5e64:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_4e5e74(Cpu *restrict c) {
    FN_ENTER(0x4e5e74u);
L_4e5e74:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_4e5f9c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e5fac; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4e61dc; }
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5ed0u; f_482fd8(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x80u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e5ee0u; f_483238(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x200u;
    c->r[14] = 0x4e5ef0u; f_483238(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3e8u;
    c->r[2] = 0x0u;
    c->r[14] = 0x4e5f00u; f_4e9b7c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e5f10u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0xau;
    c->r[0] = 0x14a4u;
    if (COND_NE) { c->r[1] = 0xeu; }
    (void)f_subs(c, c->r[5], 0xbu);
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    if (COND_HI) { goto L_4e6198; }
    c->r[0] = (c->r[5] << 2);
    c->r[1] = 0x4e5f38u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x4e5f6cu: goto L_4e5f6c; case 0x4e5ff8u: goto L_4e5ff8; case 0x4e6010u: goto L_4e6010; case 0x4e602cu: goto L_4e602c; case 0x4e604cu: goto L_4e604c; case 0x4e606cu: goto L_4e606c; case 0x4e60a0u: goto L_4e60a0; case 0x4e60bcu: goto L_4e60bc; case 0x4e60d0u: goto L_4e60d0; case 0x4e613cu: goto L_4e613c; case 0x4e6150u: goto L_4e6150; case 0x4e6198u: goto L_4e6198; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_4e5f6c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5f74u; f_73a058(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_4e615c; }
    c->v.s[0] = 0x0u;
    c->r[0] = 0x2u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->v.s[1] = c->v.s[0];
    c->r[14] = 0x4e5f98u; f_481b4c(c);
    goto L_4e6198;
L_4e5f9c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5fa4u; f_4e76e8(c);
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e5fac:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e5fb4u; f_4e76e8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e61dc; }
    c->r[0] = c->r[4] + 0x4b0u;
    c->r[14] = 0x4e5fc4u; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e61dc; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[0] = c->r[0] + 0x100u;
    c->r[0] = (c->r[0] >> 8);
    c->v.s[1] = c->v.s[0];
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_481998(c);
L_4e5ff8:;
    c->v.s[0] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x810u;
    c->v.s[1] = c->v.s[0];
    c->r[14] = 0x4e600cu; f_481998(c);
    goto L_4e6198;
L_4e6010:;
    c->v.s[0] = 0x0u;
    c->r[0] = 0x2u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->v.s[1] = c->v.s[0];
    goto L_4e6194;
L_4e602c:;
    c->r[0] = 0x13c4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xeu);
    if (COND_EQ) { goto L_4e6184; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_EQ) { goto L_4e6130; }
    goto L_4e6198;
L_4e604c:;
    c->v.s[0] = 0x0u;
    c->v.s[1] = 0x41000000u;
    c->r[0] = 0x2u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6068u; f_481b4c(c);
    goto L_4e6198;
L_4e606c:;
    c->r[0] = 0x2u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6080u; f_482808(c);
    c->v.s[16] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x4e6090u; f_482808(c);
    c->v.s[2] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[16];
    c->v.f[1] = (float)(int32_t)c->v.s[2];
    goto L_4e60b0;
L_4e60a0:;
    c->r[0] = 0x2u;
    c->v.s[0] = 0x41b00000u;
    c->v.s[1] = 0x41400000u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
L_4e60b0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    goto L_4e6194;
L_4e60bc:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e60ccu; f_4ffd50(c);
    goto L_4e6198;
L_4e60d0:;
    c->r[0] = 0x13c4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xeu);
    if (COND_HI) { goto L_4e61e4; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x4e60f0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x4e6130u: goto L_4e6130; case 0x4e61e4u: goto L_4e61e4; case 0x4e61fcu: goto L_4e61fc; case 0x4e6208u: goto L_4e6208; case 0x4e6214u: goto L_4e6214; case 0x4e621cu: goto L_4e621c; case 0x4e6228u: goto L_4e6228; case 0x4e6234u: goto L_4e6234; case 0x4e6240u: goto L_4e6240; case 0x4e624cu: goto L_4e624c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_4e6130:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x41200000u;
    goto L_4e618c;
L_4e613c:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x40800000u;
    c->r[0] = c->r[4];
    c->r[1] = 0xaau;
    goto L_4e6194;
L_4e6150:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x40800000u;
    goto L_4e618c;
L_4e615c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6164u; f_73a058(c);
    (void)f_subs(c, c->r[0], 0x50u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x810u); }
    if (COND_EQ) { goto L_4e6178; }
    (void)f_subs(c, c->r[0], 0xaau);
    if (COND_NE) { goto L_4e61e4; }
L_4e6178:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    goto L_4e6198;
L_4e6184:;
    c->v.s[0] = 0x41400000u;
L_4e6188:;
    c->v.s[1] = 0x40c00000u;
L_4e618c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
L_4e6194:;
    c->r[14] = 0x4e6198u; f_481d08(c);
L_4e6198:;
    c->r[1] = 0x0u;
    c->r[0] = 0x2798u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e61b0u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e61dc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e61c4u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4e61dc; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_47f678(c);
L_4e61dc:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e61e4:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x40c00000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x4e61f8u; f_481b4c(c);
    goto L_4e6198;
L_4e61fc:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x41400000u;
    goto L_4e60b0;
L_4e6208:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x40c00000u;
    goto L_4e618c;
L_4e6214:;
    c->v.s[0] = 0x41200000u;
    goto L_4e6188;
L_4e621c:;
    c->v.s[0] = 0x41200000u;
    c->v.s[1] = 0x41900000u;
    goto L_4e618c;
L_4e6228:;
    c->v.s[0] = 0x40c00000u;
    c->v.s[1] = 0x41400000u;
    goto L_4e618c;
L_4e6234:;
    c->v.s[0] = 0x41800000u;
    c->v.s[1] = 0x41200000u;
    goto L_4e618c;
L_4e6240:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x41400000u;
    goto L_4e618c;
L_4e624c:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x41a00000u;
    goto L_4e618c;
}
void f_4e625c(Cpu *restrict c) {
    FN_ENTER(0x4e625cu);
L_4e625c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_4e63c0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e635c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4e6420; }
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e62b8u; f_482fd8(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x180u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e62c8u; f_483238(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x4e62d4u; f_4a25a8(c);
    c->r[9] = 0x0u;
    c->r[0] = 0x14b0u;
    c->r[8] = c->r[4];
    c->r[7] = c->r[4];
    c->r[1] = 0x8u;
    c->r[6] = c->r[4];
    (void)f_subs(c, c->r[5], 0x3u);
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x3fa00000u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[9]); c->r[8] = ea; }
    c->r[0] = 0x14b4u;
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[9]); c->r[7] = ea; }
    c->r[0] = 0x14a4u;
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[1]); c->r[6] = ea; }
    if (COND_HI) { goto L_4e65ec; }
    c->r[0] = (c->r[5] << 2);
    c->r[1] = 0x4e6318u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x4e632cu: goto L_4e632c; case 0x4e633cu: goto L_4e633c; case 0x4e6428u: goto L_4e6428; case 0x4e64c8u: goto L_4e64c8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_4e632c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6334u; f_73a058(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_4e6510; }
L_4e633c:;
    c->v.s[0] = 0x0u;
    c->r[0] = 0x2u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->v.s[1] = c->v.s[0];
    c->r[14] = 0x4e6358u; f_481b4c(c);
    goto L_4e65ec;
L_4e635c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6364u; f_4e778c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e6420; }
    c->r[0] = c->r[4] + 0x4b0u;
    c->r[14] = 0x4e6374u; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6420; }
    c->r[1] = 0x0u;
    c->r[0] = 0x14b0u;
    c->v.s[0] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3fa00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x14b4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = c->v.s[0];
    c->r[0] = c->r[0] + 0x100u;
    c->r[0] = (c->r[0] >> 8);
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_481998(c);
L_4e63c0:;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_4e6418; }
    c->r[0] = 0x2528u;
    c->v.s[0] = 0x3f800000u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x4e63e0u; f_73aa84(c);
    c->r[0] = 0x15561c8u;
    c->v.s[1] = LD32(c->r[5]);
    { uint32_t ea = 0x4e63f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e63f8u; f_482434(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6400u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6418; }
    c->v.s[0] = LD32(c->r[5]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_4e64e0; }
L_4e6418:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6420u; f_4e778c(c);
L_4e6420:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_4e6428:;
    c->r[0] = 0x2u;
    c->r[2] = 0x8000u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6440u; f_483238(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6448u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6490; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e645cu; f_485e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e6490; }
    c->r[0] = c->r[4];
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e6474u; f_48321c(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x80u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e6484u; f_483238(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x4e6490u; f_4a25f0(c);
L_4e6490:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6498u; f_73a058(c);
    c->v.s[16] = 0x0u;
    (void)f_subs(c, c->r[0], 0x26u);
    if (COND_NE) { goto L_4e6544; }
    c->v.s[0] = c->v.s[16];
    c->v.s[1] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x4e64b8u; f_481998(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x26u;
    c->v.s[0] = c->v.s[16];
    goto L_4e6568;
L_4e64c8:;
    c->v.s[0] = 0x41700000u;
    c->v.s[1] = 0x41f00000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x50u;
    c->r[14] = 0x4e64dcu; f_481998(c);
    goto L_4e65ec;
L_4e64e0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e64ecu; f_485e2c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[3] = 0x0u;
    if (COND_EQ) { c->r[2] = 0x2u; }
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_4831e0(c);
L_4e6510:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6518u; f_73a058(c);
    (void)f_subs(c, c->r[0], 0x50u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x810u); }
    if (COND_EQ) { goto L_4e652c; }
    (void)f_subs(c, c->r[0], 0xaau);
    if (COND_NE) { goto L_4e6630; }
L_4e652c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    goto L_4e65ec;
L_4e6544:;
    c->v.s[18] = 0x40800000u;
    c->v.s[1] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x4e655cu; f_481998(c);
    c->v.s[0] = c->v.s[18];
    c->r[0] = c->r[4];
    c->r[1] = 0x26u;
L_4e6568:;
    c->v.s[1] = c->v.s[16];
    c->r[14] = 0x4e6570u; f_481ed4(c);
    c->r[0] = 0x504u;
    c->v.s[4] = 0x3fa00000u;
    c->r[1] = 0x644u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[1] = c->r[4] + c->r[1];
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->r[0] = 0x14c0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = 0x14c4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = 0x14c8u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.f[2] = c->v.f[2] / c->v.f[4];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x14ccu;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[9]); }
    ST32(c->r[7], c->v.s[0]);
    c->v.s[0] = 0x3f800000u;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e65d0u; f_73a454(c);
    c->r[0] = 0x1555fd8u;
    c->r[1] = 0x2528u;
    { uint32_t ea = 0x4e65e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xau;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_4e65ec:;
    c->r[1] = 0x0u;
    c->r[0] = 0x2798u;
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x3e8u;
    c->r[14] = 0x4e660cu; f_4e9b7c(c);
    c->r[1] = 0x0u;
    c->r[0] = 0x24e4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41f00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14a0u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_4e6630:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x40800000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x4e6644u; f_481b4c(c);
    goto L_4e65ec;
}
void f_4e6654(Cpu *restrict c) {
    FN_ENTER(0x4e6654u);
L_4e6654:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e672c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4e6758; }
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e66a8u; f_482fd8(c);
    c->r[0] = c->r[4];
    c->r[2] = 0xc0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e66b8u; f_483238(c);
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x14a0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x200u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e66d4u; f_483238(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_4e6758; }
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x40800000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1eu;
    c->r[14] = 0x4e66f0u; f_481998(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3e9u;
    c->r[2] = 0x0u;
    c->r[14] = 0x4e6700u; f_4e9b7c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e6710u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e6758; }
    c->r[0] = 0x14a4u;
    c->r[1] = 0xau;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e672c:;
    c->r[0] = c->r[4] + 0x4b0u;
    c->r[14] = 0x4e6734u; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6758; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6758u; f_4b6e94(c);
L_4e6758:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_4e6764(Cpu *restrict c) {
    FN_ENTER(0x4e6764u);
L_4e6764:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e6804; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e67b0u; f_482fd8(c);
    c->r[0] = c->r[4];
    c->r[2] = 0xc0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e67c0u; f_483238(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x200u;
    c->r[14] = 0x4e67d0u; f_483238(c);
    c->v.s[0] = 0x0u;
    c->r[0] = 0x14a0u;
    c->r[1] = 0x2au;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = c->v.s[0];
    { uint32_t ea = c->r[4] + 0xfecu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e67f0u; f_481998(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3e9u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_4e9b7c(c);
L_4e6804:;
    c->r[0] = c->r[4] + 0x4b0u;
    c->r[14] = 0x4e680cu; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e682c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x5u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_4831e0(c);
L_4e682c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_4e6834(Cpu *restrict c) {
    FN_ENTER(0x4e6834u);
L_4e6834:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e68e4; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4e6b38; }
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6888u; f_482fd8(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x8180u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e6898u; f_483238(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_4e6ad4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e68a8u; f_73a058(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_4e6a2c; }
    c->r[0] = 0x14d0u;
    c->v.s[0] = 0x3f59999au;
    c->v.s[2] = 0x42080000u;
    c->v.s[18] = 0x0u;
    c->r[1] = 0x26u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[16] = LD32(c->r[0]);
    c->r[0] = c->r[4];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[2] = t0; c->v.f[3] = t1; }
    c->v.s[0] = c->v.s[18];
    c->v.s[1] = c->v.s[2];
    goto L_4e6a44;
L_4e68e4:;
    c->r[0] = 0x2528u;
    c->v.s[0] = 0x3f800000u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x4e68fcu; f_73aa84(c);
    c->r[0] = 0x1555cb0u;
    c->v.s[1] = LD32(c->r[5]);
    { uint32_t ea = 0x4e690cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6914u; f_482434(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e691cu; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6b38; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e6930u; f_485e2c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6944; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6940u; f_4a6294(c);
    goto L_4e695c;
L_4e6944:;
    c->r[0] = 0x1555c1cu;
    { uint32_t ea = 0x4e6950u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[4];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x4e695cu; f_4a5ce4(c);
L_4e695c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x96u;
    c->r[14] = 0x4e6968u; f_4a5cbc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e6984; }
    c->r[0] = c->r[4];
    c->r[1] = 0xa2u;
    c->r[14] = 0x4e697cu; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e6b40; }
L_4e6984:;
    c->r[0] = c->r[4] + 0x4b0u;
    c->r[14] = 0x4e698cu; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e69d8; }
    c->r[0] = 0x2798u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4e69d8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x508u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e69bcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6b98; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e69d0u; f_485e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e6b98; }
L_4e69d8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e69e4u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4e6b50; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e69f4u; f_47f678(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x568u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e6a04u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6b84; }
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x14a0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    goto L_4e6b78;
L_4e6a2c:;
    c->v.s[16] = 0x0u;
    c->v.s[18] = 0x40800000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x26u;
    c->v.s[0] = c->v.s[18];
    c->v.s[1] = c->v.s[16];
L_4e6a44:;
    c->r[14] = 0x4e6a48u; f_481998(c);
    c->v.s[0] = c->v.s[18];
    c->v.s[1] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x4e6a5cu; f_481ed4(c);
    c->r[0] = 0x644u;
    c->v.s[2] = 0x3fa00000u;
    c->r[1] = 0x504u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3fa00000u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[0]);
    c->r[0] = c->r[4] + 0x14c0u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[2] = c->v.f[4] / c->v.f[0];
    c->v.f[0] = c->v.f[0] / c->v.f[4];
    ST32(c->r[0], c->v.s[2]);
    c->r[0] = 0x14c4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x14ccu;
    c->r[1] = 0x14c8u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x14b0u;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[2]);
    c->r[0] = 0x14b4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6ad4u; f_73a454(c);
L_4e6ad4:;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x14a0u;
    c->r[5] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[0] = 0x2798u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[0] = c->r[4];
    c->r[1] = 0x3e8u;
    c->r[14] = 0x4e6b04u; f_4e9b7c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x24e4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x4e6b1cu; f_4a25a8(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6b24u; f_4a6294(c);
    c->r[0] = 0x1555a88u;
    c->r[1] = 0x2528u;
    { uint32_t ea = 0x4e6b34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
L_4e6b38:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e6b40:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0xbu;
    goto L_4e6b74;
L_4e6b50:;
    c->r[0] = 0x2798u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4e6b38; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x3u;
L_4e6b74:;
    c->r[3] = 0x0u;
L_4e6b78:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4831e0(c);
L_4e6b84:;
    c->v.s[0] = 0x40200000u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_48015c(c);
L_4e6b98:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0xfu;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e6bacu; f_4831e0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4a25a8(c);
}
void f_4e6bd8(Cpu *restrict c) {
    FN_ENTER(0x4e6bd8u);
L_4e6bd8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e6c98; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4e6e64; }
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6c2cu; f_482fd8(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x80u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e6c3cu; f_483238(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x200u;
    c->r[14] = 0x4e6c4cu; f_483238(c);
    c->r[0] = 0x14a4u;
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[5] | 0x2u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_4e6d1c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e6c74u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6dd8; }
    c->v.s[0] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x2bu;
    c->v.s[1] = c->v.s[0];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_481998(c);
L_4e6c98:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6ca0u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6da0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e6cb4u; f_47c7ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6d64; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e6cccu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6d64; }
    c->r[0] = 0x2716u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e6d64; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xau;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x68cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->pc = c->r[5]; c->r[14] = 0x4e6d14u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e6d1c:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x40800000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[14] = 0x4e6d30u; f_481c30(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e6d40u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6e08; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x620u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_4e6d64:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e6d70u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4e6da0; }
    c->r[0] = 0x12b0598u;
    c->r[0] = 0x4e6d84u + c->r[0];
    c->r[0] = c->r[0] + (c->r[5] << 2);
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6d90u; f_480e4c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6da0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6da0u; f_47f678(c);
L_4e6da0:;
    c->r[0] = c->r[4] + 0x4b0u;
    c->r[14] = 0x4e6da8u; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6e64; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e6dc0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e6e20; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    goto L_4e6e38;
L_4e6dd8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6de0u; f_73a058(c);
    (void)f_subs(c, c->r[0], 0x55u);
    if (COND_NE) { goto L_4e6e48; }
    c->v.s[0] = 0x40000000u;
    c->v.s[1] = 0x40800000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x50u;
    c->r[14] = 0x4e6dfcu; f_481c30(c);
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_EQ) { goto L_4e6e64; }
    goto L_4e6e6c;
L_4e6e08:;
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_EQ) { goto L_4e6e64; }
    c->r[0] = c->r[4];
    c->r[1] = 0x3e8u;
    c->r[2] = 0x0u;
    goto L_4e6e78;
L_4e6e20:;
    c->r[0] = c->r[5] | 0x1u;
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[0], 0x3u);
    c->r[0] = c->r[4];
    if (COND_NE) { c->r[2] = 0x16u; }
    if (COND_EQ) { c->r[2] = 0x18u; }
L_4e6e38:;
    c->r[3] = 0x0u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4831e0(c);
L_4e6e48:;
    c->v.s[0] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x50u;
    c->v.s[1] = c->v.s[0];
    c->r[14] = 0x4e6e5cu; f_481998(c);
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_4e6e6c; }
L_4e6e64:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e6e6c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3e8u;
    c->r[2] = 0x10u;
L_4e6e78:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4e9b7c(c);
}
void f_4e6e8c(Cpu *restrict c) {
    FN_ENTER(0x4e6e8cu);
L_4e6e8c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[1] = 0x200u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x260u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e6eb0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e6f60; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4e703c; }
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6ef4u; f_482fd8(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x40u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e6f04u; f_483238(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x200u;
    c->r[14] = 0x4e6f14u; f_483238(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x46cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e6f28u; rt_dispatch(c);
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_EQ) { goto L_4e6f94; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_4e6fc0; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_4e703c; }
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x40c00000u;
    c->r[0] = 0x2798u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x25u;
    goto L_4e6fe0;
L_4e6f60:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e6f68u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e703c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e6f7cu; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4e6ffc; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_47f678(c);
L_4e6f94:;
    c->v.s[1] = 0x0u;
    c->r[1] = 0x0u;
    c->r[0] = 0x2798u;
    c->v.s[0] = 0x40c00000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_481998(c);
L_4e6fc0:;
    c->v.s[1] = 0x0u;
    c->r[1] = 0x0u;
    c->r[0] = 0x2798u;
    c->v.s[0] = 0x40c00000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
L_4e6fe0:;
    c->r[14] = 0x4e6fe4u; f_481998(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3eau;
    c->r[2] = 0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4e9b7c(c);
L_4e6ffc:;
    c->r[0] = c->r[5] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { goto L_4e7044; }
    c->r[0] = 0x2798u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4e703c; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e703cu; f_4b6e94(c);
L_4e703c:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e7044:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4831e0(c);
}
void f_4e7064(Cpu *restrict c) {
    FN_ENTER(0x4e7064u);
L_4e7064:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e7100; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4e7154; }
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41600000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2528u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x4e70c4u; f_482fd8(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x40u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e70d4u; f_483238(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x200u;
    c->r[14] = 0x4e70e4u; f_483238(c);
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x41200000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x8u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_481998(c);
L_4e7100:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7108u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e7154; }
    c->r[0] = 0x2528u;
    c->v.s[0] = 0x3f800000u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x4e7128u; f_73aa84(c);
    c->v.s[0] = LD32(c->r[5]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4e7154; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7154u; f_4b6e94(c);
L_4e7154:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_4e7160(Cpu *restrict c) {
    FN_ENTER(0x4e7160u);
L_4e7160:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[1] = 0x200u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x260u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e7180u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e7220; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4e7288; }
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e71c4u; f_482fd8(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x40u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e71d4u; f_483238(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x200u;
    c->r[14] = 0x4e71e4u; f_483238(c);
    c->v.s[1] = 0x0u;
    c->r[1] = 0x0u;
    c->v.s[0] = 0x40c00000u;
    c->r[0] = 0x2798u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x31u;
    c->r[14] = 0x4e7208u; f_481998(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3e8u;
    c->r[2] = 0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_4e9b7c(c);
L_4e7220:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7228u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e7288; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e723cu; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4e7254; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_47f678(c);
L_4e7254:;
    c->r[0] = 0x2798u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4e7288; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7288u; f_4b6e94(c);
L_4e7288:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_4e7294(Cpu *restrict c) {
    FN_ENTER(0x4e7294u);
L_4e7294:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e7344; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4e7424; }
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e72e4u; f_482fd8(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x180u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e72f4u; f_483238(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x4e7300u; f_4a25a8(c);
    c->v.s[0] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x27u;
    c->v.s[1] = c->v.s[0];
    c->r[14] = 0x4e7314u; f_481998(c);
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x14a0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[0] = 0x2798u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x3e8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4e9b7c(c);
L_4e7344:;
    c->r[0] = 0x155521cu;
    { uint32_t ea = 0x4e7350u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[4];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x4e735cu; f_4a5ce4(c);
    c->v.s[0] = 0x3f400000u;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7368u; f_48015c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7370u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e7424; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e7384u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_4e73d0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7394u; f_47f678(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x568u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e73a4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e73e0; }
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x14a0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4831e0(c);
L_4e73d0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e73dcu; f_485e2c(c);
    goto L_4e73f4;
L_4e73e0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e73ecu; f_485e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
L_4e73f4:;
    c->r[0] = 0x13e0u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_4e7428; }
    c->r[0] = 0x2798u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_4e7438; }
L_4e7424:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e7428:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    goto L_4e744c;
L_4e7438:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    if (COND_NE) { c->r[2] = 0x19u; }
    if (COND_EQ) { c->r[2] = 0x3u; }
L_4e744c:;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4831e0(c);
}
void f_4e7460(Cpu *restrict c) {
    FN_ENTER(0x4e7460u);
L_4e7460:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e74e4; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4e7514; }
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e74b0u; f_482fd8(c);
    c->r[0] = c->r[4];
    c->r[2] = 0x180u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e74c0u; f_483238(c);
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_4e7518; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_4e752c; }
    c->v.s[0] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x26u;
    c->v.s[1] = c->v.s[0];
    goto L_4e7528;
L_4e74e4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e74ecu; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e7514; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e7500u; f_485e2c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e7580; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7510u; f_4a6294(c);
    goto L_4e7598;
L_4e7514:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e7518:;
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x40800000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x26u;
L_4e7528:;
    c->r[14] = 0x4e752cu; f_481998(c);
L_4e752c:;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x14a0u;
    c->r[5] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[0] = 0x2798u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[0] = c->r[4];
    c->r[1] = 0x3e8u;
    c->r[14] = 0x4e755cu; f_4e9b7c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x24e4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x4e7574u; f_4a25a8(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4a6294(c);
L_4e7580:;
    c->r[0] = 0x1554fe0u;
    { uint32_t ea = 0x4e758cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[4];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x4e7598u; f_4a5ce4(c);
L_4e7598:;
    c->r[0] = c->r[4];
    c->r[1] = 0x96u;
    c->r[14] = 0x4e75a4u; f_4a5cbc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e75c0; }
    c->r[0] = c->r[4];
    c->r[1] = 0xa2u;
    c->r[14] = 0x4e75b8u; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e766c; }
L_4e75c0:;
    c->r[0] = c->r[4] + 0x4b0u;
    c->r[14] = 0x4e75c8u; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e7614; }
    c->r[0] = 0x2798u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4e7614; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x508u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e75f8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e76bc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e760cu; f_485e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e76bc; }
L_4e7614:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e7620u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4e767c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7630u; f_47f678(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x568u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e7640u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e76ac; }
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x14a0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4831e0(c);
L_4e766c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0xbu;
    goto L_4e76a0;
L_4e767c:;
    c->r[0] = 0x2798u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x3u;
L_4e76a0:;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4831e0(c);
L_4e76ac:;
    c->v.s[0] = 0x40200000u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_48015c(c);
L_4e76bc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0xfu;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e76d0u; f_4831e0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4a25a8(c);
}
void f_4e76e8(Cpu *restrict c) {
    FN_ENTER(0x4e76e8u);
L_4e76e8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x4e76f4u; f_47bcd0(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e7764; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x4e7710u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GE) { goto L_4e775c; }
    c->r[0] = 0x2798u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4e7744; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e773cu; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_4e776c; }
L_4e7744:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x4e7754u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4e7764; }
L_4e775c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7764u; f_47f678(c);
L_4e7764:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e776c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e7780u; f_4831e0(c);
    c->r[5] = 0x1u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_4e778c(Cpu *restrict c) {
    FN_ENTER(0x4e778cu);
L_4e778c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[4] = c->r[0];
    c->r[14] = 0x4e77a0u; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e77c0; }
    c->r[0] = 0x1554db8u;
    { uint32_t ea = 0x4e77b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[4];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x4e77c0u; f_4a5ce4(c);
L_4e77c0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e77c8u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e785c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e77dcu; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4e7874; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e77f0u; f_485e2c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e7874; }
    c->r[0] = c->r[4];
    c->r[2] = 0x100u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e7808u; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e7874; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7818u; f_47f678(c);
    c->v.s[0] = 0x40200000u;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7824u; f_48015c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x568u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e7834u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e792c; }
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x14a0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    goto L_4e791c;
L_4e785c:;
    c->v.s[0] = 0x40200000u;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7868u; f_48015c(c);
    c->r[5] = 0x0u;
L_4e786c:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e7874:;
    c->r[0] = 0x2798u;
    c->r[5] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[5]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4e78c4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e7898u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e78c0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[5] = 0x1u;
    c->r[14] = 0x4e78b8u; f_4831e0(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e78c0:;
    c->v.s[0] = LD32(c->r[5]);
L_4e78c4:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4e78e4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4e78dcu; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_4e790c; }
L_4e78e4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x4e78f4u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4e786c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7904u; f_47f678(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e790c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x3u;
L_4e7918:;
    c->r[3] = 0x0u;
L_4e791c:;
    c->r[14] = 0x4e7920u; f_4831e0(c);
    c->r[5] = 0x1u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e792c:;
    c->r[0] = c->r[4];
    c->r[1] = 0xa2u;
    c->r[14] = 0x4e7938u; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e7954; }
    c->r[0] = c->r[4];
    c->r[1] = 0x96u;
    c->r[14] = 0x4e794cu; f_4a5cbc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e79b4; }
L_4e7954:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x508u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e7964u; rt_dispatch(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e786c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x4e7980u; f_485e2c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e786c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0xdu;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e799cu; f_4831e0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[5] = 0x1u;
    c->r[14] = 0x4e79acu; f_4a25a8(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e79b4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0xbu;
    goto L_4e7918;
}
void f_4e79c8(Cpu *restrict c) {
    FN_ENTER(0x4e79c8u);
L_4e79c8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x159fe70u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x4e79f0u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x4e7a4cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x4e7a64u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e7a7cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4e7aa0(Cpu *restrict c) {
    FN_ENTER(0x4e7aa0u);
L_4e7aa0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[13] = c->r[13] - 0x90u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x2bf4u;
    c->r[6] = 0x0u;
    c->r[1] = c->r[4];
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x2e80u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x2e84u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x2ed2u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x40u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x264u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e7b04u; rt_dispatch(c);
    c->r[0] = 0x2ed1u;
    c->r[1] = c->r[4];
    c->r[2] = 0x2749u;
    c->r[9] = c->r[4];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x274au;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD8(ea); c->r[9] = ea; c->r[2] = v; }
    c->r[0] = c->r[2] | (c->r[0] << 8);
    { uint32_t ea = c->r[9] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0xfdffu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xff0000u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = (c->r[0] >> 8);
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    c->r[2] = 0x4000u;
    { uint32_t ea = c->r[9] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e7b6cu; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e7e48; }
    c->r[8] = 0xfecu;
    c->v.s[20] = 0x38c90fdbu;
    { uint32_t ea = c->r[4] + c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x4e7b94u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x4e7ba0u; f_15efdf4(c);
    c->r[0] = c->r[4];
    c->v.s[2] = 0xc2c80000u;
    c->v.s[22] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x69u;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[10]); }
    c->v.f[24] = c->v.f[18] * c->v.f[2];
    c->v.f[16] = c->v.f[0] * c->v.f[2];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[0] * c->v.f[22]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[18] * c->v.f[22]);
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x4e7bfcu; f_483060(c);
    c->v.s[28] = c->r[10];
    c->v.s[26] = c->r[5];
    c->v.s[18] = c->r[7];
    c->v.s[0] = c->v.s[22];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e7c3c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1000u;
    c->r[2] = 0x17u;
    c->r[14] = 0x4e7c24u; f_483060(c);
    c->r[1] = 0x15547e4u;
    c->v.s[0] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = 0x4e7c38u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
L_4e7c3c:;
    c->v.f[0] = c->v.f[0] + c->v.f[26];
    c->v.f[24] = c->v.f[24] + c->v.f[28];
    c->v.f[28] = c->v.f[16] + c->v.f[18];
    c->v.f[26] = c->v.f[0] + c->v.f[22];
    ST32(c->r[13] + 128u, c->v.s[24]);
    ST32(c->r[13] + 132u, c->v.s[26]);
    ST32(c->r[13] + 136u, c->v.s[28]);
    { uint32_t ea = c->r[4] + c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x4e7c70u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x4e7c7cu; f_15efdf4(c);
    c->r[1] = 0x1551548u;
    c->v.s[2] = 0x43c80000u;
    c->v.f[4] = c->v.f[0] * c->v.f[22];
    c->r[0] = 0x0u;
    c->r[6] = c->r[4];
    c->r[7] = c->r[13] + 0x30u;
    c->r[5] = c->r[13] + 0x60u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x4e7cbcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[18] * c->v.f[22]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[2] = c->v.f[24] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[28];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x5000u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[2] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc7c30000u;
    ST32(c->r[13] + 112u, c->v.s[2]);
    ST32(c->r[13] + 116u, c->v.s[26]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x36u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = ea; c->r[1] = v; }
    c->r[0] = 0x15515fcu;
    { uint32_t ea = 0x4e7d24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x80u;
    c->r[1] = c->r[4];
    c->r[14] = 0x4e7d38u; f_3831cc(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e7f68; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[2] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[0] + 0x284u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x4e7d5cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4e7d7c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    { uint32_t ea = c->r[0] + 0x260u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e7d7cu; rt_dispatch(c);
L_4e7d7c:;
    c->r[0] = 0x1550ee0u;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x33u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = 0x4e7d90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4e7d94u; f_701024(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e7dc4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[0] | (c->r[1] << 8);
    { uint32_t ea = c->r[9] + 0x2u; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[0] = c->r[0] | 0x200u;
    c->r[0] = (c->r[0] >> 8);
    { uint32_t ea = c->r[9] + 0x1u; ST8(ea, c->r[0]); }
L_4e7dc4:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2e90u;
    c->r[2] = 0x2e94u;
    c->v.s[22] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[22] - c->v.f[0];
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2e98u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = c->r[1];
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2e9cu;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[3]); }
    c->v.f[1] = c->v.f[22] - c->v.f[2];
    c->r[14] = 0x4e7e0cu; f_15efd70(c);
    c->v.s[2] = 0x4622f983u;
    c->v.s[4] = 0x3f000000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x27u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->v.s[0];
    c->r[5] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[14] = 0x4e7e38u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e7e5c; }
    c->r[1] = 0x3u;
    goto L_4e7e78;
L_4e7e48:;
    c->r[0] = c->r[4] + 0x48u;
    c->r[9] = c->r[4] + 0x44u;
    c->r[10] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    goto L_4e7f6c;
L_4e7e5c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x28u;
    c->r[14] = 0x4e7e6cu; f_483060(c);
    c->r[1] = 0x6u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[1] = 0x3u; }
L_4e7e78:;
    c->r[0] = c->r[6] - c->r[7];
    c->r[2] = ~0x7fu;
    c->r[2] = c->r[2] + (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = (c->r[2] >> 8);
    (void)f_subs(c, c->r[2], 0xfeu);
    if (COND_HI) { goto L_4e7f04; }
    c->v.s[0] = LD32(c->r[4] + 28u);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x8000u);
    if (COND_LS) { goto L_4e7ee0; }
    c->r[0] = c->r[7] - c->r[6];
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = udiv32(c->r[0], c->r[1]);
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->r[5] = c->r[1] - c->r[0];
    goto L_4e7f04;
L_4e7ee0:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[0] = udiv32(c->r[0], c->r[1]);
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->r[5] = c->r[0] + c->r[1];
L_4e7f04:;
    c->r[1] = c->r[5] + 0x8000u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[2] = 0x14a0u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[4] + 0xfecu; ST32(ea, c->r[0]); }
    c->v.s[0] = c->r[1];
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->v.f[16] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x4e7f30u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x4e7f3cu; f_15efdf4(c);
    c->v.s[2] = 0x42480000u;
    c->v.f[6] = c->v.f[0] * c->v.f[22];
    c->v.s[4] = LD32(c->r[13] + 112u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[18] * c->v.f[22]);
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    ST32(c->r[4] + 64u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[13] + 120u);
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    ST32(c->r[4] + 72u, c->v.s[0]);
L_4e7f68:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
L_4e7f6c:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x155448cu;
    c->r[1] = 0x1000u;
    c->r[2] = 0x1004u;
    c->r[8] = 0x400u;
    c->r[2] = c->r[4] + c->r[2];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x4e7f90u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 68u);
    c->v.s[16] = LD32(c->r[3]);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[16] + c->v.f[0];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1008u;
    c->v.s[2] = LD32(c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    ST32(c->r[13] + 52u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2505u;
    c->r[1] = c->r[4];
    c->v.f[2] = c->v.f[16] + c->v.f[2];
    ST32(c->r[13] + 132u, c->v.s[2]);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_4e8058; }
    c->r[0] = c->r[4];
    c->r[2] = 0x40u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e7ff8u; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = 0x0u;
    if (COND_NE) { goto L_4e8058; }
    c->r[0] = c->r[4];
    c->r[2] = 0x80u;
    c->r[3] = 0x0u;
    c->r[8] = 0x0u;
    c->r[14] = 0x4e8018u; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e8058; }
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[8] = 0x0u;
    c->r[14] = 0x4e8034u; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8058; }
    c->r[0] = c->r[4];
    c->r[2] = 0x80000000u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e804cu; f_482f58(c);
    c->r[8] = 0x400u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[8] = 0x0u; }
L_4e8058:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e806cu; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x1054u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = c->r[1] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1551290u;
    { uint32_t ea = 0x4e8090u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e8098u; rt_dispatch(c);
    c->r[1] = 0x155436cu;
    c->r[2] = c->r[13] + 0x80u;
    c->r[3] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[6];
    { uint32_t ea = 0x4e80b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[5] | c->r[8];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[14] = 0x4e80ccu; f_382374(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8134; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_4e8134; }
    c->r[0] = c->r[4];
    c->r[2] = 0x4000000u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e8108u; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e8134; }
    c->r[0] = c->r[4];
    c->r[2] = 0x4000u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e8120u; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e8134; }
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->v.f[0] = c->v.f[0] - c->v.f[16];
    ST32(c->r[9], c->v.s[0]);
L_4e8134:;
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[2] = 0x9u;
    c->r[14] = 0x4e8144u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e8164; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[2] = 0x15u;
    c->r[14] = 0x4e815cu; f_483060(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8170; }
L_4e8164:;
    c->v.s[16] = 0x0u;
    goto L_4e8174;
L_4e8170:;
    c->v.s[16] = 0x41a00000u;
L_4e8174:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e82fc; }
    c->r[0] = 0x2e9cu;
    c->r[5] = 0x1fu;
    c->r[9] = 0x2c28u;
    c->r[8] = 0x2de4u;
    c->r[6] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xf8000000u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2e98u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2e94u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2e90u;
    c->r[10] = c->r[4] + c->r[0];
L_4e81c4:;
    c->r[7] = c->r[4] + c->r[9];
    { uint32_t ea = c->r[7] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4e81f4; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4e81f4; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_4e8254; }
L_4e81f4:;
    c->r[0] = c->r[0] & 0x30000u;
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_NE) { goto L_4e82e4; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4e82e4; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x264u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_4e82d4;
L_4e8254:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    { uint32_t ea = c->r[0] + 0x25cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e8268u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e829c; }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_4e829c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_4e82cc; }
    c->v.s[0] = LD32(c->r[4] + 68u);
    c->r[0] = c->r[4] + c->r[8];
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[16] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4e82e4; }
L_4e82cc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x260u; uint32_t v = LD32(ea); c->r[2] = v; }
L_4e82d4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x40u;
    c->pc = c->r[2]; c->r[14] = 0x4e82e0u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
L_4e82e4:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[8] = c->r[8] + 0x10u;
    c->r[9] = c->r[9] + 0x30u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_4e81c4; }
L_4e82fc:;
    c->r[13] = c->r[11] - 0x58u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_4e8330(Cpu *restrict c) {
    FN_ENTER(0x4e8330u);
L_4e8330:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[10] = c->r[0];
    c->r[0] = 0x2bf4u;
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_4e8450; }
    c->r[3] = c->r[1];
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[8] = c->r[10] + 0x2c00u;
    { uint32_t ea = c->r[3]; c->r[3] = c->r[3] + 12u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    c->r[12] = c->r[8] + (c->r[0] << 4);
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); c->r[0] = c->r[0] + 12u; }
    { uint32_t ea = c->r[3]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[6] = 0x2de0u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[12] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[10] + (c->r[3] << 4);
    { uint32_t ea = c->r[3] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x2de4u;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[7] = 0x2de8u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + c->r[7]; ST32(ea, c->r[2]); }
    c->r[2] = 0x2decu;
    { uint32_t ea = c->r[3] + c->r[2]; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[1] + 32u);
    c->v.s[1] = LD32(c->r[1] + 40u);
    c->r[14] = 0x4e83d0u; f_15efd70(c);
    c->v.s[2] = 0x4622f983u;
    c->v.s[4] = 0x3f000000u;
    c->r[1] = 0x2e80u;
    c->r[3] = c->r[10];
    c->r[2] = 0x1u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    c->r[1] = 0xe16cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->r[1] = 0x8000u - c->r[1];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = (c->r[0] >> 11) & 0x1fu;
    c->r[0] = c->r[7] | sh_lsl(c->r[2], c->r[1]);
    c->r[7] = 0x8u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] + (c->r[0] << 1);
    c->r[3] = c->r[8] + (c->r[3] << 4);
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & c->r[7]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4e8448; }
    c->r[1] = sh_lsl(c->r[2], c->r[1]);
    c->r[2] = 0x2e84u;
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD32(ea); c->r[10] = ea; c->r[2] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
L_4e8448:;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
L_4e8450:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_4e8458(Cpu *restrict c) {
    FN_ENTER(0x4e8458u);
L_4e8458:;
    c->r[1] = 0x2bf4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    return;
}
void f_4e846c(Cpu *restrict c) {
    FN_ENTER(0x4e846cu);
L_4e846c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2ed0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e8508; }
    c->r[0] = 0x2ea0u;
    c->v.s[0] = LD32(c->r[4] + 64u);
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = c->v.s[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_4e850c; }
    c->r[1] = 0x2ea4u;
    c->v.s[0] = LD32(c->r[4] + 68u);
    c->r[1] = c->r[4] + c->r[1];
    c->v.s[2] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_4e850c; }
    c->r[1] = 0x2ea8u;
    c->v.s[0] = LD32(c->r[4] + 72u);
    c->r[1] = c->r[4] + c->r[1];
    c->v.s[2] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_4e850c; }
    c->r[0] = 0x10f0u;
    c->r[6] = c->r[4];
    c->r[5] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    goto L_4e85bc;
L_4e8508:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
L_4e850c:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[4];
    c->r[3] = 0x0u;
    c->r[1] = 0x10a0u;
    c->r[2] = 0x1060u;
    c->r[5] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[1] = c->r[4] + c->r[1];
    c->r[2] = c->r[4] + c->r[2];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[3]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1004u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1008u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = 0x1550da4u;
    { uint32_t ea = 0x4e857cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    c->r[2] = c->r[13] + 0x30u;
    c->r[3] = c->r[13] + 0x20u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4e85a4u; f_38192c(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10f0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[6] = c->r[4] + c->r[2];
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_4e86c4; }
L_4e85bc:;
    c->r[0] = 0x2505u;
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_4e86d0; }
    c->r[0] = 0x2ed2u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = 0x10a4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x10b8u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_4e861c; }
    c->r[0] = 0x10e0u;
    c->v.s[2] = 0xc38c0000u;
    c->v.s[6] = LD32(c->r[4] + 68u);
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { ST32(c->r[4] + 68u, c->v.s[2]); }
L_4e861c:;
    c->r[0] = 0x3274u;
    c->v.s[2] = LD32(c->r[4] + 68u);
    c->r[7] = c->r[4] + 0x44u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e8644; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->v.s[2] = c->v.s[0]; }
    if (COND_MI) { { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); } }
L_4e8644:;
    c->v.s[4] = 0xc4fa0000u;
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4e8670; }
    c->r[0] = 0x1014u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); } }
L_4e8670:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8678u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e88e4; }
    c->r[0] = 0x2ed3u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e88e4; }
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[7]);
    c->v.s[4] = 0x43af0000u;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4e88e4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x40u;
    c->r[2] = 0x21u;
    c->r[3] = 0xcu;
    c->r[14] = 0x4e86c0u; f_4831e0(c);
    goto L_4e88e4;
L_4e86c4:;
    c->r[5] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    goto L_4e88e4;
L_4e86d0:;
    c->v.s[2] = LD32(c->r[4] + 68u);
    c->v.s[4] = 0x41f00000u;
    c->r[7] = c->r[4] + 0x44u;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_4e8768; }
    c->r[0] = 0x13d6u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4e8770; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x300u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e8710u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8718u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e87d0; }
    c->r[0] = 0x296cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e8818; }
    c->r[0] = 0x2972u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x4000u;
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = 0x4u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x8000u);
    c->r[0] = c->r[4];
    if (COND_HI) { c->r[2] = 0x1eu; }
    if (COND_LS) { c->r[2] = 0x1du; }
L_4e8760:;
    c->r[14] = 0x4e8764u; f_4831e0(c);
    goto L_4e88d4;
L_4e8768:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    goto L_4e88e4;
L_4e8770:;
    c->r[0] = 0x2506u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x100u);
    if (COND_EQ) { goto L_4e87dc; }
    (void)f_subs(c, c->r[0], 0x40u);
    if (COND_NE) { goto L_4e88e4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8790u; f_4f4e08(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e87b0; }
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x14a0u;
    c->r[0] = c->r[0] + 0x8000u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfecu; ST32(ea, c->r[0]); }
L_4e87b0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    c->r[2] = 0x4u;
L_4e87bc:;
    { uint32_t ea = c->r[0] + 0x2f8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[4];
    c->r[3] = 0xcu;
    c->pc = c->r[12]; c->r[14] = 0x4e87ccu; rt_dispatch(c);
    goto L_4e88e4;
L_4e87d0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e87d8u; f_4a01d8(c);
    goto L_4e88e4;
L_4e87dc:;
    c->r[0] = 0x250au;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_4e88e4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e87f4u; f_47c6f8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8858; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[2] = 0xcu;
    { uint32_t ea = c->r[0] + 0x518u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x4e8814u; rt_dispatch(c);
    goto L_4e88e4;
L_4e8818:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8820u; f_49cc40(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8838; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    c->r[2] = 0x6cu;
    goto L_4e88c4;
L_4e8838:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8840u; f_4a0124(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8868; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    c->r[2] = 0x2du;
    goto L_4e88c4;
L_4e8858:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    c->r[2] = 0x3u;
    goto L_4e87bc;
L_4e8868:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8870u; f_4a017c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8888; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    c->r[2] = 0x3bu;
    goto L_4e88c4;
L_4e8888:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8890u; f_4a00cc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e88a8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    c->r[2] = 0x7fu;
    goto L_4e88c4;
L_4e88a8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e88b0u; f_4a9858(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8964; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    c->r[2] = 0x48u;
L_4e88c4:;
    { uint32_t ea = c->r[0] + 0x2f8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[4];
    c->r[3] = 0x0u;
    c->pc = c->r[12]; c->r[14] = 0x4e88d4u; rt_dispatch(c);
L_4e88d4:;
    c->r[0] = c->r[4];
    c->r[2] = 0x8000000u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e88e4u; f_483238(c);
L_4e88e4:;
    c->v.s[0] = LD32(c->r[13] + 28u);
    c->v.s[2] = LD32(c->r[7]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_4e8914; }
    c->r[0] = 0x1068u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4e895c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_4e8914:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e891cu; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e895c; }
    c->r[0] = 0x2ed2u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e895c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x698u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e8948u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e895c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x4e895cu; f_4a9098(c);
L_4e895c:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_4e8964:;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e8974u; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8998; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8984u; f_4f4e08(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4e89dc; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e89a8; }
    goto L_4e88d4;
L_4e8998:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e89a0u; f_4c63e0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e89bc; }
L_4e89a8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x40u;
    c->r[2] = 0x21u;
    c->r[3] = 0xcu;
    goto L_4e8760;
L_4e89bc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e89c4u; f_4a9abc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e89f4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1000u;
    c->r[2] = 0x6u;
    goto L_4e8a30;
L_4e89dc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x40u;
    c->r[2] = 0x22u;
    c->r[3] = 0xcu;
    goto L_4e8760;
L_4e89f4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e89fcu; f_4e16bc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8a14; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x14eu;
    goto L_4e8a30;
L_4e8a14:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8a1cu; f_4e181c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8a3c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x160u;
L_4e8a30:;
    c->r[3] = 0x0u;
    goto L_4e8760;
L_4e8a3c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[0] + 0x698u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4e8a54u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4e8a74; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[8] = 0x0u;
    c->r[14] = 0x4e8a6cu; f_4a9098(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8a84; }
L_4e8a74:;
    c->r[0] = 0x2ed2u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[8]); }
    goto L_4e88e4;
L_4e8a84:;
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x18u;
    c->r[14] = 0x4e8a94u; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e8ab8; }
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[7]);
    c->v.s[4] = 0x43960000u;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_4e8af0; }
L_4e8ab8:;
    c->r[0] = 0x13c4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_NE) { goto L_4e8ae0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    goto L_4e8760;
L_4e8ae0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    goto L_4e8a30;
L_4e8af0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8af8u; f_4a01d8(c);
    goto L_4e88d4;
}
void f_4e8b04(Cpu *restrict c) {
    FN_ENTER(0x4e8b04u);
L_4e8b04:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[12] = c->r[0];
    c->r[0] = 0x2ed0u;
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e8b98; }
    c->r[0] = 0x2ea0u;
    c->v.s[0] = LD32(c->r[12] + 64u);
    c->r[0] = c->r[12] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    c->r[14] = c->v.s[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_4e8b9c; }
    c->r[0] = 0x2ea4u;
    c->v.s[0] = LD32(c->r[12] + 68u);
    c->r[0] = c->r[12] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_4e8b9c; }
    c->r[0] = 0x2ea8u;
    c->v.s[0] = LD32(c->r[12] + 72u);
    c->r[0] = c->r[12] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_4e8b9c; }
    c->r[0] = 0x10f0u;
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e8b98:;
    { uint32_t ea = c->r[12] + 0x40u; uint32_t v = LD32(ea); c->r[14] = v; }
L_4e8b9c:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[14]); }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[12] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[14]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1004u;
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1008u;
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[14]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[0] = 0x155072cu;
    { uint32_t ea = 0x4e8bf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[14]); }
    c->r[2] = c->r[13] + 0x30u;
    c->r[3] = c->r[13] + 0x20u;
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[14]); }
    c->r[14] = 0x4e8c10u; f_38192c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_4e8c24(Cpu *restrict c) {
    FN_ENTER(0x4e8c24u);
L_4e8c24:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x78u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[2] = 0x15505a4u;
    c->r[4] = c->r[1];
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x4e8c60u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    c->r[2] = 0x5000u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc7c30000u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[0]); }
    c->r[0] = 0x2ed0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e8d04; }
    c->r[0] = 0x2ea0u;
    c->v.s[0] = LD32(c->r[1] + 64u);
    c->r[0] = c->r[1] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = c->v.s[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_4e8d08; }
    c->r[2] = 0x2ea4u;
    c->v.s[0] = LD32(c->r[1] + 68u);
    c->r[2] = c->r[1] + c->r[2];
    c->v.s[2] = LD32(c->r[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_4e8d08; }
    c->r[2] = 0x2ea8u;
    c->v.s[0] = LD32(c->r[1] + 72u);
    c->r[2] = c->r[1] + c->r[2];
    c->v.s[2] = LD32(c->r[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_4e8d08; }
    c->r[0] = 0x10f0u;
    c->r[6] = 0x1u;
    c->r[5] = c->r[1] + c->r[0];
    goto L_4e8d98;
L_4e8d04:;
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
L_4e8d08:;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[1];
    c->r[6] = 0x0u;
    c->r[3] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1004u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1008u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = 0x15505b8u;
    { uint32_t ea = 0x4e8d68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    c->r[2] = c->r[13] + 0x60u;
    c->r[3] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    c->r[14] = 0x4e8d88u; f_38192c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_4e8da4; }
L_4e8d98:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
L_4e8da4:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4e8db4(Cpu *restrict c) {
    FN_ENTER(0x4e8db4u);
L_4e8db4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x2505u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { c->r[4] = 0x20000u; }
    c->r[14] = 0x4e8dd0u; f_47bcd0(c);
    c->r[4] = (c->r[4] & 0xfffbffffu) | ((c->r[0] << 18) & 0x40000u);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_4e8ddc(Cpu *restrict c) {
    FN_ENTER(0x4e8ddcu);
L_4e8ddc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1068u;
    c->r[2] = 0x4000u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8dfcu; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x2u;
    c->r[0] = 0x800u;
    if (COND_NE) { c->r[1] = 0x2u; }
    c->r[2] = c->r[0] & (c->r[5] << 8);
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u; }
    c->r[5] = c->r[2] | c->r[1];
    c->r[1] = 0x274au;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t sc = ((c->r[1] >> 24) & 1); uint32_t r = c->r[0] & (c->r[1] << 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4e8e38; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8e30u; f_4f7ad8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e8e40; }
L_4e8e38:;
    c->r[0] = c->r[5] | 0x80u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_4e8e40:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4e8e48u; f_4c7e28(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[5] = c->r[5] | 0x80u; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_4e8e58(Cpu *restrict c) {
    FN_ENTER(0x4e8e58u);
L_4e8e58:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x273cu;
    c->r[1] = 0x3f800000u;
    c->v.s[8] = 0x0u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[0] = 0x1738u;
    c->r[1] = c->r[5] - c->r[0];
    c->r[0] = 0x26f4u;
    c->r[2] = c->r[5] - c->r[0];
    c->r[0] = 0x1734u;
    c->v.s[10] = LD32(c->r[1]);
    c->r[1] = 0x0u;
    c->r[3] = c->r[5] - c->r[0];
    c->r[0] = 0x26fcu;
    c->v.s[6] = LD32(c->r[2]);
    c->r[2] = 0xe944u;
    c->r[6] = c->r[5] - c->r[0];
    c->r[0] = 0x173cu;
    c->v.s[4] = LD32(c->r[3]);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = c->r[5] - c->r[0];
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[0] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.f[2] = c->v.f[6] - c->v.f[4];
    c->v.f[6] = c->v.f[10] + c->v.f[8];
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] + c->v.f[2];
    ST32(c->r[13] + 36u, c->v.s[6]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0xe948u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0xe94cu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x798u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_4e8f38; }
    c->r[2] = 0x1062u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_4e8f54; }
L_4e8f38:;
    c->r[0] = 0x2740u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2744u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
L_4e8f48:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_4e8f54:;
    c->v.s[0] = 0x3e4ccccdu;
    c->v.s[1] = 0x3e99999au;
    c->r[6] = 0x0u;
    c->r[1] = c->r[13] + 0x20u;
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = c->r[13];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->r[14] = 0x4e8f74u; f_432f84(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = 0x3ecccccdu;
    c->v.s[2] = 0x3f000000u;
    c->v.s[4] = 0x3f800000u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8000u;
    c->r[3] = 0x0u;
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    vfp_mrs_flags(c);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = COND_GT ? c->v.s[0] : c->v.s[2];
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    ST32(c->r[5], c->v.s[0]);
    c->r[14] = 0x4e8fb0u; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e8fcc; }
    c->r[0] = 0x2740u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x2744u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    goto L_4e8f48;
L_4e8fcc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = c->r[0] + 0x8a0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e8fe0u; rt_dispatch(c);
    goto L_4e8f48;
}
void f_4e8ff4(Cpu *restrict c) {
    FN_ENTER(0x4e8ff4u);
L_4e8ff4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = 0x3f0ccccdu;
    c->v.s[4] = 0x3f800000u;
    c->r[4] = c->r[0];
    c->v.f[2] = fabsf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    vfp_mrs_flags(c);
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[4]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[5]))); c->v.f[18] = t0; c->v.f[19] = t1; }
    if (COND_LE) { goto L_4e9080; }
    c->v.s[0] = 0x3e4ccccdu;
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4e9140; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e903cu; f_73a058(c);
    c->r[1] = c->r[4] + 0x2740u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_4e90bc; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4e90b0; }
    c->r[0] = 0x1u;
    c->r[5] = c->r[4];
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[0] = 0x2744u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[0] = c->r[4] + 0x500u;
    c->r[1] = 0x5bu;
    goto L_4e90f8;
L_4e9080:;
    c->v.s[0] = 0xbe4ccccdu;
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_4e9140; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e9098u; f_73a058(c);
    c->r[1] = c->r[4] + 0x2740u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_4e90bc; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_4e90d0; }
L_4e90b0:;
    c->r[0] = 0x2744u;
    c->r[5] = c->r[4] + c->r[0];
    goto L_4e9104;
L_4e90bc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2744u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_4e9140;
L_4e90d0:;
    c->r[0] = 0x2u;
    c->r[5] = c->r[4];
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[0] = 0x2744u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[0] = c->r[4] + 0x500u;
    c->r[1] = 0x5au;
L_4e90f8:;
    c->v.s[1] = LD32(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0x4e9104u; f_481ed4(c);
L_4e9104:;
    c->r[0] = 0x14b0u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0x14b4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x4e9124u; f_73aa84(c);
    c->v.s[2] = 0x41a00000u;
    c->v.s[0] = LD32(c->r[5]);
    c->r[0] = c->r[4];
    c->v.f[4] = c->v.f[18] / c->v.f[2];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->r[14] = 0x4e9140u; f_73a454(c);
L_4e9140:;
    c->v.s[0] = 0x3e4ccccdu;
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_4e91e0; }
    c->v.s[0] = 0xbe4ccccdu;
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4e91e0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e9168u; f_73a058(c);
    c->r[1] = c->r[4] + 0x2740u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_4e91d0; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e9198; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[0] = 0x2744u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
L_4e9198:;
    c->r[0] = 0x14b0u;
    c->r[1] = 0x14b4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e91b0u; f_73a444(c);
    c->v.s[2] = 0xbd4ccccdu;
    c->v.s[4] = 0x0u;
    c->r[0] = c->r[4];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[4]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[5]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_73a454(c);
L_4e91d0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2744u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
L_4e91e0:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_4e91fc(Cpu *restrict c) {
    FN_ENTER(0x4e91fcu);
L_4e91fc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x78u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = 0x0u;
    c->r[4] = c->r[0];
    c->r[0] = 0xfecu;
    c->v.s[0] = 0x38c90fdbu;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x4e9240u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x4e924cu; f_15efdf4(c);
    c->r[0] = 0x154f8e0u;
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = 0x0u;
    c->v.s[18] = c->v.s[20];
    c->r[2] = 0x100000u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x4e926cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[20] * c->v.f[0]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 96u, c->v.s[18]);
    ST32(c->r[13] + 104u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x4e929cu; f_482f58(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x2505u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_4e93e8; }
    c->r[0] = 0x1062u;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e93e8; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[14] = 0x4e92d4u; f_4824a8(c);
    c->r[0] = c->r[0] ^ 0x1u;
    { uint32_t r = c->r[5] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4e93e8; }
    c->r[0] = 0x1080u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1000u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1084u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1088u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e931cu; f_482f58(c);
    c->v.s[0] = c->r[5];
    c->v.s[1] = c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x2748u; }
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); } }
    c->r[14] = 0x4e9338u; f_15efd70(c);
    c->v.s[20] = 0x3f000000u;
    c->v.s[22] = 0x4622f983u;
    c->v.s[1] = c->v.s[16];
    c->v.s[24] = c->v.s[20];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[0] * c->v.f[22]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x4e9354u; f_15efd70(c);
    c->v.s[2] = c->v.s[20];
    c->r[5] = c->r[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[22]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[24]);
    c->r[0] = c->v.s[0];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[2]);
    c->r[1] = c->v.s[2];
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = 0x2ed8u;
    { uint32_t ea = c->r[5] + c->r[1]; ST16(ea, c->r[0]); c->r[5] = ea; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4e938cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e9428; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[0] = 0x3e4ccccdu;
    c->r[1] = c->r[0];
    c->r[0] = c->r[0] - 0x4000u;
    c->r[1] = c->r[1] & 0x7fffu;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[1] = c->r[1] - 0x3000u;
    c->r[2] = c->r[1] & 0xe000u;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[2] >> 13));
    if (COND_EQ) { c->r[2] = 0x3f800000u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x2eecu;
    c->v.s[0] = COND_GE ? c->v.s[0] : c->v.s[20];
    c->r[1] = c->r[4] + c->r[1];
    ST32(c->r[1], c->v.s[0]);
    goto L_4e9428;
L_4e93e8:;
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[6]); }
    c->r[1] = 0x2748u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_4e9428; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_4e9428; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e9428u; f_4827b4(c);
L_4e9428:;
    c->r[5] = c->r[13] + 0x10u;
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = c->r[13] + 0x50u;
    c->r[0] = c->r[5];
    c->r[14] = 0x4e943cu; f_4329b8(c);
    c->r[0] = c->r[13];
    c->r[1] = c->r[5];
    c->r[14] = 0x4e9448u; f_9c6914(c);
    c->r[0] = 0x2eecu;
    c->v.s[2] = LD32(c->r[13]);
    c->v.s[10] = 0x3f000000u;
    c->v.s[8] = 0x4622f983u;
    c->v.s[6] = LD32(c->r[13] + 8u);
    c->v.s[4] = LD32(c->r[13] + 4u);
    c->r[6] = 0x1555u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x2edau;
    c->v.s[14] = c->v.s[10];
    c->v.f[12] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.s[12] = vcvt_s32_f64((double)c->v.f[14]);
    c->v.s[14] = c->v.s[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.s[0] = c->v.s[10];
    c->r[1] = c->v.s[12];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[14]);
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[1] = 0x2edcu;
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[2];
    c->v.s[2] = c->v.s[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[8]);
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = c->v.s[0];
    c->r[1] = 0xeaabu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], c->r[1]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    if (COND_HI) { c->r[1] = c->r[0]; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_CC) { c->r[6] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x8000u);
    c->r[0] = 0x2ee0u;
    if (COND_HI) { c->r[6] = c->r[1]; }
    c->r[1] = 0x2ee4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = c->v.s[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[10]);
    c->r[8] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2ee8u;
    c->r[7] = (uint32_t)(uint16_t)(c->r[8]);
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e9518u; f_47bcd0(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x1000000u;
    c->r[3] = 0x0u;
    c->r[9] = 0x0u;
    c->r[14] = 0x4e9530u; f_482f58(c);
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[1] = 0x3u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e957c; }
    { uint32_t ea = c->r[4] + 0xfe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6] - c->r[0];
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[0] = c->r[0] + sh_lsr(c->r[2], c->r[1]);
    (void)f_subs(c, c->r[9], sh_lsr(c->r[2], c->r[1]));
    if (COND_NE) { c->r[6] = (uint32_t)(uint16_t)(c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfe8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xff0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8] - c->r[0];
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[0] = c->r[0] + sh_lsr(c->r[2], c->r[1]);
    (void)f_subs(c, c->r[9], sh_lsr(c->r[2], c->r[1]));
    if (COND_NE) { c->r[7] = (uint32_t)(uint16_t)(c->r[0]); }
    { uint32_t ea = c->r[4] + 0xff0u; ST32(ea, c->r[7]); }
L_4e957c:;
    c->r[13] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_4e959c(Cpu *restrict c) {
    FN_ENTER(0x4e959cu);
L_4e959c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    c->r[0] = 0x2505u;
    c->r[1] = 0x2ef8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[8] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x7u); }
    if (COND_EQ) { goto L_4e963c; }
    c->r[0] = 0x1063u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_4e963c; }
    c->r[0] = 0x1054u;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[1] = v; }
    c->r[0] = 0x154f67cu;
    { uint32_t ea = 0x4e95f4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4e95f8u; f_701e60(c);
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4e960cu; f_701e00(c);
    c->r[1] = 0x1ea6u;
    { uint32_t ea = c->r[7] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4e9624u; f_701024(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e9658; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x2ef9u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_4e9668;
L_4e963c:;
    c->r[0] = 0x2ef9u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x2ed5u;
    { uint32_t ea = c->r[8]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    goto L_4e9670;
L_4e9658:;
    c->r[0] = 0x2ed5u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
L_4e9668:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e9708; }
L_4e9670:;
    c->r[0] = ~0x0u;
    c->r[6] = 0x0u;
    c->r[3] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    c->r[0] = 0x1065u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x154f5bcu;
    { uint32_t ea = 0x4e96b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4e96b8u; f_704c4c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e9704; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2efau;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + c->r[2]; ST16(ea, c->r[6]); c->r[1] = ea; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_NE) { goto L_4e96ec; }
    c->v.s[0] = LD32(c->r[13] + 16u);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[2] = c->v.s[0];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
L_4e96ec:;
    c->r[1] = 0x2ed5u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x2ef9u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_4e9708;
L_4e9704:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
L_4e9708:;
    c->r[1] = 0x2ef9u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4e9720(Cpu *restrict c) {
    FN_ENTER(0x4e9720u);
L_4e9720:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    c->r[0] = 0x154f5e4u;
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x4e9744u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4e9748u; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e9a80; }
    c->r[0] = 0x2ed5u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e9a80; }
    c->r[0] = 0x106au;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4e9a80; }
    c->r[0] = c->r[4];
    c->r[2] = 0x200000u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e9780u; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e9a80; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x4e9798u; f_4a05b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4e9a80; }
    c->r[0] = 0x2505u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_EQ) { goto L_4e9a80; }
    c->r[0] = 0x2506u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7fu);
    if (COND_GT) { goto L_4e9890; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x20u); }
    if (COND_EQ) { goto L_4e9a80; }
    (void)f_subs(c, c->r[0], 0x40u);
    if (COND_NE) { goto L_4e98a4; }
    c->r[0] = 0x250au;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1bu;
    (void)f_subs(c, c->r[0], 0x24u);
    if (COND_HI) { goto L_4e9a80; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x4e97f8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x4e98a4u: goto L_4e98a4; case 0x4e9a80u: goto L_4e9a80; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_4e9890:;
    (void)f_subs(c, c->r[0], 0x80u);
    if (COND_EQ) { goto L_4e9a80; }
    (void)f_subs(c, c->r[0], 0x100u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x200u); }
    if (COND_EQ) { goto L_4e9a80; }
L_4e98a4:;
    c->r[0] = 0x2ef8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_NE) { goto L_4e9984; }
    c->r[0] = ~0x0u;
    c->r[5] = 0x0u;
    c->r[3] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[0] = 0x1065u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x154f378u;
    { uint32_t ea = 0x4e98f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4e98fcu; f_704c4c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4e99e8; }
    c->v.s[2] = LD32(c->r[13] + 16u);
    c->v.s[8] = LD32(c->r[4] + 64u);
    c->v.s[4] = LD32(c->r[13] + 20u);
    c->v.s[10] = LD32(c->r[4] + 68u);
    c->v.s[6] = LD32(c->r[13] + 24u);
    c->v.s[12] = LD32(c->r[4] + 72u);
    c->v.s[0] = LD32(c->r[13] + 12u);
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    c->v.f[18] = c->v.f[8] - c->v.f[2];
    c->v.f[20] = c->v.f[12] - c->v.f[6];
    c->v.f[16] = (float)(int32_t)c->v.s[0];
    c->v.f[2] = c->v.f[4] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_4e9954; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x4e9954u; f_15efddc(c);
L_4e9954:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_4e9974; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_4e9974:;
    c->v.f[20] = -(float)(c->v.f[16] * c->v.f[20]);
    c->v.f[22] = -(float)(c->v.f[16] * c->v.f[18]);
    c->r[5] = 0x1u;
    goto L_4e99ec;
L_4e9984:;
    c->r[0] = ~0x0u;
    c->r[5] = 0x0u;
    c->r[3] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[0] = 0x1065u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x154f2a8u;
    { uint32_t ea = 0x4e99c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4e99ccu; f_704c4c(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[2] = c->r[1];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[16] = COND_EQ ? c->v.s[0] : c->v.s[2];
    goto L_4e99ec;
L_4e99e8:;
    c->v.s[16] = 0x0u;
L_4e99ec:;
    c->r[0] = c->r[4];
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e99fcu; f_482f58(c);
    c->v.s[0] = 0x3f000000u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.s[24] = COND_EQ ? c->v.s[16] : c->v.s[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_4e9a54; }
    c->r[0] = 0x2efau;
    c->v.s[0] = 0x38c90fdbu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x4e9a34u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x4e9a40u; f_15efdf4(c);
    c->v.s[2] = 0x0u;
    c->v.f[20] = c->v.f[24] * c->v.f[0];
    c->v.f[22] = c->v.f[0] * c->v.f[2];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[24] * c->v.f[18]);
L_4e9a54:;
    c->v.s[0] = LD32(c->r[4] + 28u);
    c->v.s[2] = LD32(c->r[4] + 64u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[0]);
    ST32(c->r[4] + 64u, c->v.s[2]);
    c->v.s[2] = 0x0u;
    c->v.s[4] = LD32(c->r[4] + 68u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    ST32(c->r[4] + 68u, c->v.s[4]);
    c->v.s[2] = LD32(c->r[4] + 72u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[0]);
    ST32(c->r[4] + 72u, c->v.s[2]);
L_4e9a80:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_4e9aa4(Cpu *restrict c) {
    FN_ENTER(0x4e9aa4u);
L_4e9aa4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x159ddf4u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x4e9accu + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x4e9b28u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x4e9b40u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4e9b58u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4e9b7c(Cpu *restrict c) {
    FN_ENTER(0x4e9b7cu);
L_4e9b7c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x4e9b90u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_4e9c08; }
    c->r[0] = 0x270fu;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_4e9c08; }
    c->r[0] = c->r[4];
    (void)f_subs(c, c->r[6], 0x7d0u);
    if (COND_CC) { goto L_4e9bdc; }
    c->r[14] = 0x4e9bc8u; f_485f68(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_4e9c08; }
    c->r[2] = c->r[6] - 0x7d0u;
    goto L_4e9bf0;
L_4e9bdc:;
    c->r[14] = 0x4e9be0u; f_485f1c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_4e9c08; }
    c->r[2] = c->r[6] - 0x3e8u;
L_4e9bf0:;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    c->r[1] = 0x0u;
    if (COND_LS) { goto L_4e9c08; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
L_4e9c08:;
    c->r[0] = 0x2754u;
    c->r[2] = 0x3u;
    c->v.s[0] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x2500u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffff3ffu;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] - 0x18u; ST8(ea, c->r[7]); }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[4] - 0x58u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4] - 0x50u;
    c->r[1] = 0x30u;
    ST32(c->r[4] - 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] - 0x1cu; ST32(ea, c->r[7]); }
    c->r[14] = 0x4e9c4cu; f_15efdac(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4e9c50(Cpu *restrict c) {
    FN_ENTER(0x4e9c50u);
L_4e9c50:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[3];
    c->r[5] = c->r[2];
    c->r[7] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x4e9c68u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[8] = 0x0u;
    if (COND_NE) { c->r[0] = 0x270fu; }
    if (COND_NE) { (void)f_subs(c, c->r[7], c->r[0]); }
    if (COND_EQ) { goto L_4e9cc8; }
    c->r[0] = c->r[4];
    (void)f_subs(c, c->r[7], 0x7d0u);
    if (COND_CC) { goto L_4e9ca4; }
    c->r[14] = 0x4e9c94u; f_485f68(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e9cc8; }
    c->r[1] = c->r[7] - 0x7d0u;
    goto L_4e9cb4;
L_4e9ca4:;
    c->r[14] = 0x4e9ca8u; f_485f1c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e9cc8; }
    c->r[1] = c->r[7] - 0x3e8u;
L_4e9cb4:;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_4e9cc8; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
L_4e9cc8:;
    c->r[0] = 0x24acu;
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x24e8u;
    c->r[0] = c->r[4] + c->r[0];
    if (COND_NE) { goto L_4e9d10; }
    c->v.s[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x24a8u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x24e0u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[8]); }
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x24e4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_4e9d10:;
    c->v.s[0] = c->r[5];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x24e0u;
    c->r[1] = 0x24a8u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[8]); }
    c->r[1] = 0x0u;
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x24e4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x24b0u;
    c->r[1] = 0x30u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x4e9d50u; f_15efdac(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
