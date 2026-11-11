#include "cpu.h"
#include "neon_rt.h"
void f_9aa47c(Cpu *c);
void f_9d9734(Cpu *c);
void f_c03cb0(Cpu *c);
void f_d85a14(Cpu *c);
void f_e8d128(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15efddc(Cpu *c);
void f_c06460(Cpu *restrict c) {
    FN_ENTER(0xc06460u);
L_c06460:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x128u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[9] = c->r[0];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c064bc; }
    c->r[4] = 0x0u;
L_c06490:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c064b0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc064acu; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c064b0:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c06490; }
L_c064bc:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c064e4; }
    c->r[0] = 0xe32688u;
    { uint32_t ea = 0xc064d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc064d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc064e4u; rt_dispatch(c);
L_c064e4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x154u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_c06520; }
    c->r[0] = 0xe366b4u;
    c->r[1] = 0xe3cc48u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xc06514u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc06518u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc0651cu; f_d85a14(c);
    c->r[6] = c->r[0];
L_c06520:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_c08728; }
    c->r[0] = 0xe32f10u;
    { uint32_t ea = c->r[9] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = 0xc0653cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (c->r[7] << 5);
    c->pc = c->r[3]; c->r[14] = 0xc0654cu; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (c->r[7] << 2);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    c->pc = c->r[3]; c->r[14] = 0xc0656cu; rt_dispatch(c);
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[10], 0x0u); }
    if (COND_NE) { goto L_c065b8; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_c065a0; }
    c->r[0] = 0xe32ebcu;
    { uint32_t ea = 0xc06590u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xc065a0u; rt_dispatch(c);
L_c065a0:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_c08728; }
    c->r[0] = 0xe32e98u;
    { uint32_t ea = 0xc065b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c06674;
L_c065b8:;
    c->r[0] = 0xe3cb60u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xc065c8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xc065ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc065e4u; rt_dispatch(c);
    c->r[6] = c->r[0];
    c->r[0] = 0xe3cb34u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = 0xc065f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe32544u;
    { uint32_t ea = 0xc06608u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_c06654; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c06694; }
    { uint32_t ea = c->r[7] + 0x4eu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c066ac; }
    { uint32_t ea = c->r[7] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c066b4;
L_c06654:;
    c->r[0] = 0xe32decu;
    { uint32_t ea = 0xc06660u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xc06670u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_c06674:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10];
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_c06694:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c06784;
L_c066ac:;
    c->r[0] = 0xe33518u;
    { uint32_t ea = 0xc066b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_c066b4:;
    c->v.s[0] = 0x0u;
    c->v.s[12] = LD32(c->r[8] + 4u);
    c->v.s[4] = LD32(c->r[8]);
    c->v.s[2] = LD32(c->r[8] + 8u);
    c->v.s[7] = LD32(c->r[0] + 52u);
    c->v.s[1] = LD32(c->r[0] + 36u);
    c->v.s[11] = LD32(c->r[0] + 4u);
    c->v.s[13] = LD32(c->r[0] + 20u);
    c->v.s[5] = LD32(c->r[0] + 16u);
    c->v.s[16] = LD32(c->r[0] + 48u);
    c->v.s[3] = LD32(c->r[0] + 32u);
    c->v.s[15] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[0] + 24u);
    c->v.s[20] = LD32(c->r[0] + 56u);
    c->v.f[18] = c->v.f[12] * c->v.f[0];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.f[8] = c->v.f[1] * c->v.f[7];
    c->v.f[14] = c->v.f[13] * c->v.f[7];
    c->v.f[9] = c->v.f[11] * c->v.f[7];
    c->v.s[7] = LD32(c->r[0] + 40u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[16]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[16]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[15] * c->v.f[16]);
    c->v.s[16] = 0x3f800000u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[6] * c->v.f[20]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[10] * c->v.f[20]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[7] * c->v.f[20]);
    c->v.f[18] = c->v.f[18] + c->v.f[16];
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_c0673c; }
    c->v.f[0] = c->v.f[16] / c->v.f[18];
L_c0673c:;
    c->v.f[11] = c->v.f[11] * c->v.f[12];
    c->v.f[13] = c->v.f[13] * c->v.f[12];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[15] * c->v.f[4]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[5] * c->v.f[4]);
    c->v.f[12] = c->v.f[1] * c->v.f[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[7] * c->v.f[2]);
    c->v.f[4] = c->v.f[11] - c->v.f[9];
    c->v.f[2] = c->v.f[13] - c->v.f[14];
    c->v.f[6] = c->v.f[12] - c->v.f[8];
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    ST32(c->r[6] + 16u, c->v.s[4]);
    ST32(c->r[6] + 20u, c->v.s[2]);
    c->r[0] = c->v.s[0];
L_c06784:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c067bc; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c0683c;
L_c067bc:;
    c->r[0] = 0xe32394u;
    { uint32_t ea = 0xc067c8u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xc067ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc067e8u; rt_dispatch(c);
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[0];
    c->r[14] = 0xc067f8u; f_15efd7c(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[5];
    c->r[14] = 0xc0680cu; f_15efdd0(c);
    c->r[0] = c->r[8];
    c->r[14] = 0xc06814u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc06824u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x110u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
L_c0683c:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { goto L_c06878; }
    c->r[0] = 0xe322e4u;
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[9]); }
    c->v.s[16] = 0x358637beu;
    c->r[8] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0xc06868u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0xe322dcu;
    { uint32_t ea = 0xc06870u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    goto L_c068bc;
L_c06878:;
    c->r[0] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    goto L_c080ec;
L_c06884:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7] + (c->r[12] << 5); ST32(ea, c->r[2]); c->r[7] = ea; }
    c->r[12] = c->r[12] + 0x1u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[12]); }
    goto L_c06a48;
L_c068bc:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    c->r[0] = c->r[4];
    c->r[14] = 0xc068d0u; f_e8d128(c);
    c->r[5] = c->r[5] + 0x1u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[1] = c->r[5];
    c->r[14] = 0xc068e8u; f_e8d128(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_c06a48; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x82u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x5u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    c->r[1] = 0x0u;
    if (COND_CC) { goto L_c06918; }
    { uint32_t ea = c->r[7] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 4);
L_c06918:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_c0695c; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
L_c0692c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_EQ) { goto L_c06950; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[6] = c->r[6] + 0x1cu;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CC) { goto L_c0692c; }
    c->r[4] = 0x0u;
    goto L_c06958;
L_c06950:;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = v; }
L_c06958:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[7] = v; }
L_c0695c:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[2] | (c->r[4] << 16);
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[7] + 0x80u; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[0] = 0x0u; }
    c->r[2] = c->r[1] + (c->r[4] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CS) { goto L_c069a4; }
    c->r[4] = c->r[9] + 0x8u;
    c->r[6] = c->r[9] + 0x4u;
    c->r[2] = c->r[9];
    goto L_c069b4;
L_c069a4:;
    { uint32_t ea = c->r[7] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[7] + (c->r[2] << 4);
    c->r[4] = c->r[2] + 0x8u;
    c->r[6] = c->r[2] + 0x4u;
L_c069b4:;
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_CS) { goto L_c069e8; }
    c->r[3] = c->r[10] + 0x8u;
    c->r[6] = c->r[10] + 0x4u;
    c->r[7] = c->r[10];
    goto L_c069fc;
L_c069e8:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] + (c->r[7] << 4);
    c->r[3] = c->r[7] + 0x8u;
    c->r[6] = c->r[7] + 0x4u;
L_c069fc:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->r[2];
    c->v.s[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[2] = c->r[4];
    c->v.s[6] = c->r[6];
    c->v.s[8] = c->r[3];
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.f[4] = c->v.f[4] - c->v.f[6];
    c->v.s[2] = c->r[0];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c06884; }
L_c06a48:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LT) { goto L_c068bc; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_c080e8; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->v.s[0] = 0x42b40000u;
    c->v.s[4] = 0x3c8efa36u;
    c->v.s[22] = 0x0u;
    c->v.s[26] = 0x3a83126fu;
    c->v.s[28] = 0x34000000u;
    c->v.s[20] = 0x3f000000u;
    c->v.s[24] = 0x3f800000u;
    { uint32_t ea = c->r[9] + 0x130u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[2] = LD32(c->r[9] + 452u);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x134u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x138u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[18] = c->v.f[0] * c->v.f[4];
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[0] << 5);
    c->r[0] = c->r[2] + 0x18u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + 0x10u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe330e4u;
    { uint32_t ea = 0xc06aecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3c630u;
    { uint32_t ea = 0xc06af8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3c628u;
    { uint32_t ea = 0xc06b04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe32038u;
    { uint32_t ea = 0xc06b14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3203cu;
    { uint32_t ea = 0xc06b20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3c5fcu;
    { uint32_t ea = 0xc06b2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3c5f4u;
    { uint32_t ea = 0xc06b38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe32004u;
    { uint32_t ea = 0xc06b48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe32008u;
    { uint32_t ea = 0xc06b54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3c5c8u;
    { uint32_t ea = 0xc06b60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3c5c0u;
    { uint32_t ea = 0xc06b6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe31fd0u;
    { uint32_t ea = 0xc06b7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe31fd4u;
    { uint32_t ea = 0xc06b88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3c594u;
    { uint32_t ea = 0xc06b94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3c58cu;
    { uint32_t ea = 0xc06ba0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe31f9cu;
    { uint32_t ea = 0xc06bb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe31fa0u;
    { uint32_t ea = 0xc06bbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3c560u;
    { uint32_t ea = 0xc06bc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3c558u;
    { uint32_t ea = 0xc06bd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe31f68u;
    { uint32_t ea = 0xc06be4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe31f6cu;
    { uint32_t ea = 0xc06bf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_c06bf0:;
    c->r[0] = c->r[2] + 0x1u;
    c->r[8] = c->r[2];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_c080d4; }
L_c06c00:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 5);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[2] << 5);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[19] = c->r[1];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[30] = c->r[1];
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[2]); }
    c->v.s[21] = c->r[1];
L_c06c38:;
    c->r[1] = c->r[8];
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_GE) { goto L_c06c9c; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[8] << 5);
    c->v.s[0] = LD32(c->r[0] + 16u);
    c->v.s[10] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.s[6] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 24u);
    c->v.s[8] = LD32(c->r[0] + 8u);
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    c->v.f[0] = c->v.f[10] + c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[20];
    c->v.f[2] = c->v.f[2] * c->v.f[20];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->r[6] = c->v.s[4];
    c->r[9] = c->v.s[2];
    c->r[7] = c->v.s[0];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LE) { goto L_c06cb4; }
    goto L_c06ec0;
L_c06c9c:;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x140u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x144u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0x148u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_GT) { goto L_c06ec0; }
L_c06cb4:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_c06de0; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = 0x0u;
    c->r[10] = 0x0u;
L_c06cd8:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + c->r[10];
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[2] + 4u);
    c->v.s[6] = LD32(c->r[2] + 16u);
    c->v.s[8] = LD32(c->r[2] + 20u);
    c->v.s[10] = LD32(c->r[2] + 24u);
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[8] - c->v.f[30];
    c->v.f[0] = c->v.f[0] - c->v.f[21];
    c->v.f[6] = c->v.f[6] - c->v.f[21];
    c->v.f[2] = c->v.f[2] - c->v.f[19];
    c->v.f[10] = c->v.f[10] - c->v.f[19];
    c->v.f[4] = c->v.f[4] - c->v.f[30];
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[2] * c->v.f[6];
    c->v.f[1] = c->v.f[4] * c->v.f[10];
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[0] * c->v.f[10]);
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    c->v.f[12] = c->v.f[0] * c->v.f[8];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[4] * c->v.f[6]);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[5]); }
    c->v.f[0] = fabsf(c->v.f[14]);
    c->v.f[2] = fabsf(c->v.f[1]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    c->v.f[4] = fabsf(c->v.f[12]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c06d7c; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    c->r[3] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_c06d9c; }
L_c06d7c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    c->r[3] = 0x2u;
    c->r[0] = 0x2u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_GT) { c->r[3] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_LE) { c->r[3] = c->r[0]; }
L_c06d9c:;
    c->r[1] = c->r[13] + 0x100u;
    c->r[14] = 0xc06da4u; f_c03cb0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c06ee4; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_c07020; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    c->r[10] = c->r[10] + 0x20u;
    c->r[4] = c->r[0];
    if (COND_LT) { goto L_c06cd8; }
    goto L_c06ec0;
L_c06de0:;
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[2] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[5] + 24u);
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5]);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] - c->v.f[30];
    c->v.f[10] = c->v.f[10] - c->v.f[21];
    c->v.f[0] = c->v.f[0] - c->v.f[21];
    c->v.f[8] = c->v.f[8] - c->v.f[19];
    c->v.f[4] = c->v.f[4] - c->v.f[19];
    c->v.f[6] = c->v.f[6] - c->v.f[30];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[8] * c->v.f[0];
    c->v.f[1] = c->v.f[6] * c->v.f[4];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[8] * c->v.f[2]);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[12] = c->v.f[10] * c->v.f[2];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[6] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[3]); }
    c->v.f[0] = fabsf(c->v.f[14]);
    c->v.f[2] = fabsf(c->v.f[1]);
    c->v.f[4] = fabsf(c->v.f[12]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GT) { vfp_cmp_f(c, c->v.f[2], c->v.f[4]); }
    if (COND_GT) { vfp_mrs_flags(c); }
    if (COND_GT) { goto L_c06e98; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    c->r[3] = 0x2u;
    c->r[0] = 0x2u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_GT) { c->r[3] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_LE) { c->r[3] = c->r[0]; }
L_c06e98:;
    c->r[1] = c->r[13] + 0x100u;
    c->r[2] = c->r[5];
    c->r[14] = 0xc06ea4u; f_c03cb0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_c06edc; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[5] = c->r[5] + 0x20u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { goto L_c06de0; }
L_c06ec0:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_c06c38; }
    goto L_c080d4;
L_c06edc:;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[8]); }
    goto L_c06eec;
L_c06ee4:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
L_c06eec:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x0u;
    c->r[0] = c->r[0] + (c->r[3] << 5);
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[6] = LD32(c->r[0] + 16u);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[0] + 24u);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 20u);
    c->v.f[12] = c->v.f[4] + c->v.f[6];
    c->v.f[14] = c->v.f[2] + c->v.f[8];
    c->v.f[10] = c->v.f[0] + c->v.f[10];
    c->v.s[0] = c->v.s[22];
    c->v.f[30] = c->v.f[12] * c->v.f[20];
    c->v.f[17] = c->v.f[14] * c->v.f[20];
    c->v.f[21] = c->v.f[30] - c->v.f[21];
    c->v.f[23] = c->v.f[17] - c->v.f[19];
    c->v.f[19] = c->v.f[10] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[23]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c06fa4; }
    c->v.f[23] = c->v.f[4] - c->v.f[6];
    c->v.f[21] = c->v.f[2] - c->v.f[8];
    c->v.s[2] = c->v.s[22];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c06f84; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc06f80u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
L_c06f84:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c06fdc; }
    c->v.f[0] = c->v.f[24] / c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
    c->v.f[23] = c->v.f[23] * c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    goto L_c06fe0;
L_c06fa4:;
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c06fc0; }
    c->r[14] = 0xc06fb8u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[2] = c->v.s[0];
L_c06fc0:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c06fd8; }
    c->v.f[0] = c->v.f[24] / c->v.f[2];
    c->v.f[23] = c->v.f[23] * c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
L_c06fd8:;
    c->v.s[23] = c->v.s[23] ^ 0x80000000u;
L_c06fdc:;
    c->v.s[0] = c->v.s[22];
L_c06fe0:;
    c->v.f[2] = c->v.f[19] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[23]);
    ST32(c->r[13] + 240u, c->v.s[23]);
    ST32(c->r[13] + 244u, c->v.s[0]);
    (void)f_subs(c, c->r[4], c->r[3]);
    ST32(c->r[13] + 248u, c->v.s[21]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[21]);
    c->v.s[0] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 252u, c->v.s[0]);
    if (COND_HI) { goto L_c0782c; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0x0u;
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    goto L_c070c0;
L_c07020:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4eu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c07840; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c07844;
L_c07038:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0xc07044u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[4] = (c->r[10] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xc07060u; rt_dispatch(c);
    c->r[1] = c->r[4];
    c->r[6] = c->r[0];
    c->r[14] = 0xc0706cu; f_15efd7c(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xc07080u; f_15efdd0(c);
    c->r[0] = c->r[7];
    c->r[7] = 0x0u;
    c->r[14] = 0xc0708cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc0709cu; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x110u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
L_c070b4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_c07614;
L_c070c0:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] - c->v.f[19];
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] - c->v.f[30];
    c->v.s[4] = c->r[0];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[4] = c->v.f[4] - c->v.f[17];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c0781c; }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[13] + 0x124u;
    c->r[3] = c->r[13] + 0x120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + c->r[8];
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[5];
    c->r[14] = 0xc07144u; f_9d9734(c);
    { uint32_t ea = c->r[9] + 0x1b8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c07234; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_NE) { goto L_c07514; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[4]); }
    c->r[9] = c->r[6];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc07180u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc07198u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_c084f0; }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c07788; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[13] + 0xb4u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    goto L_c07814;
L_c07234:;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc0724cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc07264u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_c0846c; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x175u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x174u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_c074ec; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = (c->r[0] >> 16) & 0xffu;
    { uint32_t ea = c->r[2] + 0x82u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_c07300; }
    { uint32_t ea = c->r[2] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[1] + (c->r[0] << 4);
L_c07300:;
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    { uint32_t ea = c->r[14] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_EQ) { c->r[9] = 0x0u; }
    c->v.f[23] = c->v.f[8] - c->v.f[4];
    c->v.f[21] = c->v.f[6] - c->v.f[0];
    c->v.f[25] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[23] * c->v.f[23];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c07368; }
    c->r[7] = c->r[14];
    c->r[14] = 0xc07358u; f_15efddc(c);
    c->r[14] = c->r[7];
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[2] = c->v.s[0];
L_c07368:;
    c->v.f[4] = c->v.f[24] / c->v.f[2];
    { uint32_t ea = c->r[14] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    c->v.f[0] = c->v.f[25] * c->v.f[4];
    c->v.f[2] = c->v.f[23] * c->v.f[4];
    c->v.f[4] = c->v.f[21] * c->v.f[4];
    if (COND_CC) { goto L_c0743c; }
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_c0743c; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->v.s[6] = LD32(c->r[3] + 376u);
    c->v.s[8] = c->r[2];
    c->v.f[8] = (float)c->v.s[8];
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c0743c; }
    c->v.s[8] = LD32(c->r[5]);
    c->v.s[10] = LD32(c->r[5] + 4u);
    c->v.s[14] = c->r[7];
    c->v.s[1] = c->r[12];
    c->v.s[12] = LD32(c->r[5] + 8u);
    c->v.s[3] = c->r[10];
    c->v.f[14] = c->v.f[10] - c->v.f[14];
    c->v.f[1] = c->v.f[8] - c->v.f[1];
    c->v.f[3] = c->v.f[12] - c->v.f[3];
    c->v.f[14] = c->v.f[14] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[1] = c->v.f[6] * c->v.f[6];
    vfp_cmp_f(c, c->v.f[14], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c0743c; }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[6] + 16u, c->v.s[8]);
    ST32(c->r[6] + 20u, c->v.s[10]);
    ST32(c->r[6] + 24u, c->v.s[12]);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_c0743c:;
    c->r[0] = c->r[0] + (c->r[9] << 1);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_c074ec; }
    { uint32_t ea = c->r[2] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c074ec; }
    { uint32_t ea = c->r[2] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[6] = LD32(c->r[9] + 376u);
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[8] = c->r[0];
    c->v.f[8] = (float)c->v.s[8];
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c074ec; }
    c->v.s[8] = LD32(c->r[5] + 16u);
    c->v.s[10] = LD32(c->r[5] + 20u);
    c->v.s[14] = c->r[7];
    c->v.s[1] = c->r[12];
    c->v.s[12] = LD32(c->r[5] + 24u);
    c->v.s[3] = c->r[10];
    c->v.f[14] = c->v.f[10] - c->v.f[14];
    c->v.f[1] = c->v.f[8] - c->v.f[1];
    c->v.f[3] = c->v.f[12] - c->v.f[3];
    c->v.f[14] = c->v.f[14] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[1] = c->v.f[6] * c->v.f[6];
    vfp_cmp_f(c, c->v.f[14], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c074ec; }
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[0] * c->v.f[6]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[6] + 16u, c->v.s[8]);
    ST32(c->r[6] + 20u, c->v.s[10]);
    ST32(c->r[6] + 24u, c->v.s[12]);
L_c074ec:;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c07574; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c075fc;
L_c07514:;
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[6] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[5] + 20u);
    c->v.s[8] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5] + 24u);
    c->v.s[10] = LD32(c->r[5] + 8u);
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    c->v.f[8] = c->v.f[8] + c->v.f[2];
    c->v.f[2] = c->v.f[4] * c->v.f[20];
    c->v.f[4] = c->v.f[8] * c->v.f[20];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    if (COND_NE) { goto L_c07624; }
    c->v.s[8] = LD32(c->r[9] + 320u);
    c->v.s[10] = LD32(c->r[9] + 324u);
    c->v.s[6] = LD32(c->r[9] + 328u);
    goto L_c07654;
L_c07574:;
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xc07584u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc075a0u; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[5] = c->r[0];
    c->r[14] = 0xc075acu; f_15efd7c(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[5];
    c->r[14] = 0xc075c0u; f_15efdd0(c);
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[14] = 0xc075ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc075dcu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x110u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
L_c075fc:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[10]); }
L_c07614:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_c0781c;
L_c07624:;
    c->v.s[6] = LD32(c->r[5] + 48u);
    c->v.s[12] = LD32(c->r[5] + 32u);
    c->v.s[8] = LD32(c->r[5] + 52u);
    c->v.s[14] = LD32(c->r[5] + 36u);
    c->v.s[10] = LD32(c->r[5] + 56u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->v.f[10] = c->v.f[1] + c->v.f[10];
    c->v.f[12] = c->v.f[12] + c->v.f[6];
    c->v.f[8] = c->v.f[14] + c->v.f[8];
    c->v.f[6] = c->v.f[10] * c->v.f[20];
    c->v.f[10] = c->v.f[8] * c->v.f[20];
    c->v.f[8] = c->v.f[12] * c->v.f[20];
L_c07654:;
    c->v.f[21] = c->v.f[10] - c->v.f[4];
    c->v.f[23] = c->v.f[8] - c->v.f[0];
    c->v.f[25] = c->v.f[6] - c->v.f[2];
    c->v.f[0] = c->v.f[21] * c->v.f[21];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c0781c; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c0769c; }
    c->r[5] = c->r[1];
    c->r[14] = 0xc07690u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[2] = c->v.s[0];
    c->r[1] = c->r[5];
L_c0769c:;
    c->v.f[0] = c->v.f[24] / c->v.f[2];
    c->v.f[2] = c->v.f[23] * c->v.f[0];
    c->v.f[4] = c->v.f[21] * c->v.f[0];
    c->v.f[0] = c->v.f[25] * c->v.f[0];
    c->v.f[2] = fabsf(c->v.f[2]);
    c->v.f[4] = fabsf(c->v.f[4]);
    c->v.f[0] = fabsf(c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[22]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[22]);
    c->v.f[0] = fabsf(c->v.f[4]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[24] : c->v.s[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c0781c; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[4]); }
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc076f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[5]; c->r[14] = 0xc07708u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_c08684; }
    c->r[1] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c07038; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c070b4;
L_c07788:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[1]); }
    c->r[14] = 0xc07798u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc077b4u; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[6] = c->r[0];
    c->r[14] = 0xc077c0u; f_15efd7c(c);
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xc077d4u; f_15efdd0(c);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc077dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc077ecu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x110u; ST32(ea, c->r[4]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[9]); }
L_c07814:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[9] = c->r[10];
L_c0781c:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[8] = c->r[8] + 0x20u;
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_LS) { goto L_c070c0; }
L_c0782c:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c080c4;
L_c07840:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_c07844:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->v.s[5] = LD32(c->r[0] + 52u);
    c->v.s[3] = LD32(c->r[0] + 36u);
    c->v.s[14] = LD32(c->r[0] + 20u);
    c->v.s[7] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 16u);
    c->v.s[15] = LD32(c->r[0] + 48u);
    c->v.s[9] = LD32(c->r[0] + 32u);
    c->v.s[13] = LD32(c->r[0]);
    c->v.s[12] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[0] + 24u);
    c->v.s[23] = LD32(c->r[0] + 56u);
    c->v.s[11] = LD32(c->r[0] + 40u);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->v.s[6] = LD32(c->r[9] + 324u);
    c->v.s[2] = LD32(c->r[9] + 320u);
    c->v.s[0] = LD32(c->r[9] + 328u);
    c->v.f[1] = c->v.f[3] * c->v.f[5];
    c->v.f[8] = c->v.f[14] * c->v.f[5];
    c->v.f[5] = c->v.f[7] * c->v.f[5];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[9] * c->v.f[15]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[15]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[13] * c->v.f[15]);
    c->v.s[15] = c->v.s[22];
    c->v.f[17] = c->v.f[6] * c->v.f[22];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[2] * c->v.f[22]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[11] * c->v.f[23]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[23]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[12] * c->v.f[23]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[0] * c->v.f[22]);
    c->v.f[17] = c->v.f[17] + c->v.f[24];
    vfp_cmp_f(c, c->v.f[17], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_c078d4; }
    c->v.f[15] = c->v.f[24] / c->v.f[17];
L_c078d4:;
    c->v.f[7] = c->v.f[7] * c->v.f[6];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[13] * c->v.f[2]);
    c->v.f[3] = c->v.f[3] * c->v.f[6];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[9] * c->v.f[2]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[12] = c->v.f[7] - c->v.f[5];
    c->v.f[2] = c->v.f[3] - c->v.f[1];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.s[0] = c->v.s[22];
    c->v.f[23] = c->v.f[12] * c->v.f[15];
    c->v.f[17] = c->v.f[2] * c->v.f[15];
    c->v.f[2] = c->v.f[6] - c->v.f[8];
    c->v.f[25] = c->v.f[23] - c->v.f[21];
    c->v.f[29] = c->v.f[17] - c->v.f[19];
    c->v.f[27] = c->v.f[2] * c->v.f[15];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[29]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c0799c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[29] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = c->v.s[22];
    c->v.s[6] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[25] = c->v.f[6] - c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c0797c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc0797cu; f_15efddc(c);
L_c0797c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c079d0; }
    c->v.f[0] = c->v.f[24] / c->v.f[0];
    c->v.f[25] = c->v.f[25] * c->v.f[0];
    c->v.f[29] = c->v.f[29] * c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    goto L_c079d4;
L_c0799c:;
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c079b4; }
    c->r[14] = 0xc079b0u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c079b4:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c079cc; }
    c->v.f[0] = c->v.f[24] / c->v.f[2];
    c->v.f[29] = c->v.f[29] * c->v.f[0];
    c->v.f[25] = c->v.f[25] * c->v.f[0];
L_c079cc:;
    c->v.s[29] = c->v.s[29] ^ 0x80000000u;
L_c079d0:;
    c->v.s[0] = c->v.s[22];
L_c079d4:;
    c->v.f[4] = c->v.f[30] - c->v.f[27];
    c->v.f[6] = c->v.f[21] - c->v.f[23];
    c->v.f[2] = c->v.f[27] * c->v.f[0];
    ST32(c->r[13] + 240u, c->v.s[29]);
    ST32(c->r[13] + 244u, c->v.s[0]);
    c->v.f[0] = c->v.f[19] - c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[23] * c->v.f[29]);
    ST32(c->r[13] + 248u, c->v.s[25]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[25]);
    c->v.f[4] = c->v.f[4] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[0]);
    ST32(c->r[13] + 252u, c->v.s[2]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c080bc; }
L_c07a18:;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[6]); }
    c->r[8] = c->r[4];
    c->r[2] = c->r[13] + 0x124u;
    c->r[3] = c->r[13] + 0x120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + (c->r[8] << 5);
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[5];
    c->r[14] = 0xc07a64u; f_9d9734(c);
    { uint32_t ea = c->r[9] + 0x1b8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c07b20; }
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[6] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[5] + 24u);
    c->v.s[8] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 4u);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    c->v.f[8] = c->v.f[10] + c->v.f[2];
    c->v.f[2] = c->v.f[4] * c->v.f[20];
    c->v.f[4] = c->v.f[8] * c->v.f[20];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    if (COND_NE) { goto L_c07e04; }
    c->v.s[8] = LD32(c->r[9] + 320u);
    c->v.s[10] = LD32(c->r[9] + 324u);
    c->v.s[6] = LD32(c->r[9] + 328u);
    goto L_c07e3c;
L_c07b20:;
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc07b38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc07b50u; rt_dispatch(c);
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_c08578; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x175u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x174u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_c07de0; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = (c->r[0] >> 16) & 0xffu;
    { uint32_t ea = c->r[2] + 0x82u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_c07be8; }
    { uint32_t ea = c->r[2] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + (c->r[0] << 4);
L_c07be8:;
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { c->r[7] = 0x0u; }
    c->v.f[17] = c->v.f[8] - c->v.f[4];
    c->v.f[30] = c->v.f[6] - c->v.f[0];
    c->v.f[19] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[17] * c->v.f[17];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c07c48; }
    c->r[14] = 0xc07c3cu; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[2] = c->v.s[0];
L_c07c48:;
    c->v.f[4] = c->v.f[24] / c->v.f[2];
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    c->v.f[0] = c->v.f[19] * c->v.f[4];
    c->v.f[2] = c->v.f[17] * c->v.f[4];
    c->v.f[4] = c->v.f[30] * c->v.f[4];
    if (COND_CC) { goto L_c07d24; }
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_c07d24; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[6] = LD32(c->r[9] + 376u);
    c->r[2] = c->r[3] + (c->r[2] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->v.s[8] = c->r[2];
    c->v.f[8] = (float)c->v.s[8];
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c07d24; }
    c->r[3] = c->r[5] + 0x4u;
    c->v.s[10] = LD32(c->r[5]);
    c->r[2] = c->r[5] + 0x8u;
    c->v.s[1] = c->r[14];
    c->v.s[14] = c->r[12];
    c->v.s[8] = LD32(c->r[3]);
    c->v.s[12] = LD32(c->r[2]);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[1] = c->v.f[10] - c->v.f[1];
    c->v.s[3] = c->r[2];
    c->v.f[14] = c->v.f[8] - c->v.f[14];
    c->v.f[3] = c->v.f[12] - c->v.f[3];
    c->v.f[14] = c->v.f[14] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[1] = c->v.f[6] * c->v.f[6];
    vfp_cmp_f(c, c->v.f[14], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c07d24; }
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[10] + 16u, c->v.s[10]);
    ST32(c->r[10] + 20u, c->v.s[8]);
    ST32(c->r[10] + 24u, c->v.s[12]);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_c07d24:;
    c->r[0] = c->r[0] + (c->r[7] << 1);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_c07de0; }
    { uint32_t ea = c->r[2] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c07de0; }
    { uint32_t ea = c->r[2] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[6] = LD32(c->r[9] + 376u);
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[8] = c->r[0];
    c->v.f[8] = (float)c->v.s[8];
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c07de0; }
    c->r[1] = c->r[5] + 0x14u;
    c->r[2] = c->r[5] + 0x10u;
    c->v.s[14] = c->r[12];
    c->v.s[1] = c->r[14];
    c->r[0] = c->r[5] + 0x18u;
    c->v.s[3] = c->r[7];
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[2]);
    c->v.s[12] = LD32(c->r[0]);
    c->v.f[14] = c->v.f[8] - c->v.f[14];
    c->v.f[1] = c->v.f[10] - c->v.f[1];
    c->v.f[3] = c->v.f[12] - c->v.f[3];
    c->v.f[14] = c->v.f[14] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[1] = c->v.f[6] * c->v.f[6];
    vfp_cmp_f(c, c->v.f[14], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c07de0; }
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[0] * c->v.f[6]);
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[6]); }
    ST32(c->r[10] + 16u, c->v.s[10]);
    ST32(c->r[10] + 20u, c->v.s[8]);
    ST32(c->r[10] + 24u, c->v.s[12]);
L_c07de0:;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c07f80; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c08008;
L_c07e04:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 5);
    c->v.s[6] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 20u);
    c->v.s[12] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 24u);
    c->v.s[14] = LD32(c->r[0] + 8u);
    c->v.s[1] = LD32(c->r[0]);
    c->v.f[8] = c->v.f[12] + c->v.f[8];
    c->v.f[10] = c->v.f[14] + c->v.f[10];
    c->v.f[12] = c->v.f[1] + c->v.f[6];
    c->v.f[6] = c->v.f[10] * c->v.f[20];
    c->v.f[10] = c->v.f[8] * c->v.f[20];
    c->v.f[8] = c->v.f[12] * c->v.f[20];
L_c07e3c:;
    c->v.f[30] = c->v.f[10] - c->v.f[4];
    c->v.f[17] = c->v.f[8] - c->v.f[0];
    c->v.f[19] = c->v.f[6] - c->v.f[2];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[30] * c->v.f[30];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[19]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c080b4; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c07e98; }
    c->r[5] = c->r[10];
    c->r[10] = c->r[8];
    c->r[8] = c->r[3];
    c->r[14] = 0xc07e84u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = c->v.s[0];
    c->r[3] = c->r[8];
    c->r[8] = c->r[10];
    c->r[10] = c->r[5];
L_c07e98:;
    c->v.f[0] = c->v.f[24] / c->v.f[2];
    c->v.f[2] = c->v.f[17] * c->v.f[0];
    c->v.f[4] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = c->v.f[19] * c->v.f[0];
    c->v.f[2] = fabsf(c->v.f[2]);
    c->v.f[4] = fabsf(c->v.f[4]);
    c->v.f[0] = fabsf(c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[22]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[22]);
    c->v.f[0] = fabsf(c->v.f[4]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[24] : c->v.s[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c080b4; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[4]); }
    c->r[8] = c->r[3];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc07ef0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[5]; c->r[14] = 0xc07f08u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_c08600; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c08028; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c080a8;
L_c07f80:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0xc07f8cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[6] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xc07fa8u; rt_dispatch(c);
    c->r[1] = c->r[6];
    c->r[5] = c->r[0];
    c->r[6] = 0x0u;
    c->r[14] = 0xc07fb8u; f_15efd7c(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[5];
    c->r[14] = 0xc07fccu; f_15efdd0(c);
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0xc07fd8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc07fe8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x110u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
L_c08008:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[10]); }
    c->r[4] = c->r[8] + 0x1u;
    c->r[0] = c->r[13] + 0xb4u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_LT) { goto L_c07a18; }
    goto L_c080bc;
L_c08028:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0xc08034u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0x10u;
    c->r[10] = (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10];
    c->pc = c->r[3]; c->r[14] = 0xc08054u; rt_dispatch(c);
    c->r[1] = c->r[10];
    c->r[4] = c->r[0];
    c->r[14] = 0xc08060u; f_15efd7c(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[4];
    c->r[14] = 0xc08074u; f_15efdd0(c);
    c->r[0] = c->r[7];
    c->r[14] = 0xc0807cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc0808cu; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
L_c080a8:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[4] = v; }
L_c080b4:;
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_LT) { goto L_c07a18; }
L_c080bc:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[8] = v; }
L_c080c4:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_c06c00; }
L_c080d4:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LT) { goto L_c06bf0; }
    goto L_c080ec;
L_c080e8:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_c080ec:;
    c->r[0] = 0xe3b02cu;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = 0xc080fcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xc08100u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc08118u; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0xe3b000u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = 0xc0812cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe30a10u;
    { uint32_t ea = 0xc0813cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_c08188; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c0820c; }
    { uint32_t ea = c->r[1] + 0x4eu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c08224; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c0822c;
L_c08188:;
    c->r[0] = 0xe312b8u;
    { uint32_t ea = 0xc08194u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc081a4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xc081b8u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c081f4; }
    c->r[4] = 0x0u;
L_c081c8:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c081e8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc081e4u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c081e8:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c081c8; }
L_c081f4:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c08718; }
    c->r[0] = 0xe30950u;
    { uint32_t ea = 0xc0820cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c08704;
L_c0820c:;
    { uint32_t ea = c->r[9] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c082fc;
L_c08224:;
    c->r[0] = 0xe319a0u;
    { uint32_t ea = 0xc08230u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_c0822c:;
    c->v.s[0] = 0x0u;
    c->v.s[12] = LD32(c->r[9] + 324u);
    c->v.s[4] = LD32(c->r[9] + 320u);
    c->v.s[2] = LD32(c->r[9] + 328u);
    c->v.s[7] = LD32(c->r[0] + 52u);
    c->v.s[1] = LD32(c->r[0] + 36u);
    c->v.s[11] = LD32(c->r[0] + 4u);
    c->v.s[13] = LD32(c->r[0] + 20u);
    c->v.s[5] = LD32(c->r[0] + 16u);
    c->v.s[16] = LD32(c->r[0] + 48u);
    c->v.s[3] = LD32(c->r[0] + 32u);
    c->v.s[15] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[0] + 24u);
    c->v.s[20] = LD32(c->r[0] + 56u);
    c->v.f[18] = c->v.f[12] * c->v.f[0];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.f[8] = c->v.f[1] * c->v.f[7];
    c->v.f[14] = c->v.f[13] * c->v.f[7];
    c->v.f[9] = c->v.f[11] * c->v.f[7];
    c->v.s[7] = LD32(c->r[0] + 40u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[16]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[16]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[15] * c->v.f[16]);
    c->v.s[16] = 0x3f800000u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[6] * c->v.f[20]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[10] * c->v.f[20]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[7] * c->v.f[20]);
    c->v.f[18] = c->v.f[18] + c->v.f[16];
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_c082b4; }
    c->v.f[0] = c->v.f[16] / c->v.f[18];
L_c082b4:;
    c->v.f[11] = c->v.f[11] * c->v.f[12];
    c->v.f[13] = c->v.f[13] * c->v.f[12];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[15] * c->v.f[4]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[5] * c->v.f[4]);
    c->v.f[12] = c->v.f[1] * c->v.f[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[7] * c->v.f[2]);
    c->v.f[4] = c->v.f[11] - c->v.f[9];
    c->v.f[2] = c->v.f[13] - c->v.f[14];
    c->v.f[6] = c->v.f[12] - c->v.f[8];
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    ST32(c->r[5] + 16u, c->v.s[4]);
    ST32(c->r[5] + 20u, c->v.s[2]);
    c->r[0] = c->v.s[0];
L_c082fc:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c08330; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c083b0;
L_c08330:;
    c->r[0] = 0xe30820u;
    { uint32_t ea = 0xc0833cu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xc08340u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc0835cu; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[6] = c->r[0];
    c->r[14] = 0xc08368u; f_15efd7c(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xc0837cu; f_15efdd0(c);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = 0xc08388u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc08398u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x110u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
L_c083b0:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_c08438; }
    c->r[4] = 0x0u;
L_c083c4:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[1] + 20u);
    c->v.s[0] = LD32(c->r[1] + 16u);
    c->v.s[4] = LD32(c->r[1] + 24u);
    c->v.s[8] = LD32(c->r[0] + 20u);
    c->v.s[6] = LD32(c->r[0] + 16u);
    c->v.s[10] = LD32(c->r[0] + 24u);
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c0841c; }
    c->r[14] = 0xc08418u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c0841c:;
    c->v.s[0] = LD32(c->r[9] + 336u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[9] + 336u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_c083c4; }
L_c08438:;
    c->r[0] = 0xe31008u;
    { uint32_t ea = 0xc08444u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc08454u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xc08468u; rt_dispatch(c);
    goto L_c08728;
L_c0846c:;
    c->r[0] = 0xe30fd4u;
    { uint32_t ea = 0xc08478u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc08488u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc0849cu; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c084d8; }
    c->r[4] = 0x0u;
L_c084ac:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c084cc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc084c8u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c084cc:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c084ac; }
L_c084d8:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c08718; }
    c->r[0] = 0xe3066cu;
    { uint32_t ea = 0xc084f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c08704;
L_c084f0:;
    c->r[0] = 0xe30f50u;
    { uint32_t ea = 0xc084fcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc0850cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc08520u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c08560; }
    c->r[4] = 0x0u;
L_c08534:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c08554; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc08550u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c08554:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c08534; }
L_c08560:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c08718; }
    c->r[0] = 0xe305e4u;
    { uint32_t ea = 0xc08578u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c08704;
L_c08578:;
    c->r[0] = 0xe30ec8u;
    { uint32_t ea = 0xc08584u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc08594u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc085a8u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c085e4; }
    c->r[4] = 0x0u;
L_c085b8:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c085d8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc085d4u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c085d8:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c085b8; }
L_c085e4:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c08718; }
    c->r[0] = 0xe30560u;
    { uint32_t ea = 0xc085fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c08704;
L_c08600:;
    c->r[0] = 0xe30e40u;
    { uint32_t ea = 0xc0860cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc0861cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc08630u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c0866c; }
    c->r[4] = 0x0u;
L_c08640:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c08660; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc0865cu; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c08660:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c08640; }
L_c0866c:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c08718; }
    c->r[0] = 0xe304d8u;
    { uint32_t ea = 0xc08684u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c08704;
L_c08684:;
    c->r[0] = 0xe30dbcu;
    { uint32_t ea = 0xc08690u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc086a0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc086b4u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c086f0; }
    c->r[4] = 0x0u;
L_c086c4:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c086e4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc086e0u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c086e4:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c086c4; }
L_c086f0:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c08718; }
    c->r[0] = 0xe30454u;
    { uint32_t ea = 0xc08708u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_c08704:;
    c->r[14] = 0xc08708u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc08718u; rt_dispatch(c);
L_c08718:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[0]); }
L_c08728:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
