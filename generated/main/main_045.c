#include "cpu.h"
#include "neon_rt.h"
void f_266f5c(Cpu *c);
void f_2e8458(Cpu *c);
void f_427a98(Cpu *c);
void f_427ba8(Cpu *c);
void f_46d42c(Cpu *c);
void f_47bcd0(Cpu *c);
void f_47c6f8(Cpu *c);
void f_47c7ec(Cpu *c);
void f_47e608(Cpu *c);
void f_47f678(Cpu *c);
void f_47f728(Cpu *c);
void f_480c1c(Cpu *c);
void f_4811d0(Cpu *c);
void f_481388(Cpu *c);
void f_481948(Cpu *c);
void f_482f58(Cpu *c);
void f_483060(Cpu *c);
void f_485e2c(Cpu *c);
void f_4864c4(Cpu *c);
void f_487fec(Cpu *c);
void f_48802c(Cpu *c);
void f_49cc40(Cpu *c);
void f_4a00cc(Cpu *c);
void f_4a0124(Cpu *c);
void f_4a017c(Cpu *c);
void f_4a0740(Cpu *c);
void f_4a1bc0(Cpu *c);
void f_4a1be0(Cpu *c);
void f_4a2fc4(Cpu *c);
void f_4a5cbc(Cpu *c);
void f_4a80e8(Cpu *c);
void f_4a8384(Cpu *c);
void f_4a98ac(Cpu *c);
void f_4a9a24(Cpu *c);
void f_4aa508(Cpu *c);
void f_4aaaa0(Cpu *c);
void f_4aaeac(Cpu *c);
void f_4ac4bc(Cpu *c);
void f_4ad534(Cpu *c);
void f_4ad670(Cpu *c);
void f_4af8d8(Cpu *c);
void f_4b6e94(Cpu *c);
void f_4b98dc(Cpu *c);
void f_4cb620(Cpu *c);
void f_4e1348(Cpu *c);
void f_4e14b4(Cpu *c);
void f_4e4b44(Cpu *c);
void f_4ecefc(Cpu *c);
void f_4ed1c4(Cpu *c);
void f_4f1900(Cpu *c);
void f_4fac84(Cpu *c);
void f_4fad3c(Cpu *c);
void f_4ff984(Cpu *c);
void f_4ffd38(Cpu *c);
void f_5000c8(Cpu *c);
void f_5000f4(Cpu *c);
void f_501890(Cpu *c);
void f_5a5ed0(Cpu *c);
void f_5aee54(Cpu *c);
void f_704218(Cpu *c);
void f_75fdcc(Cpu *c);
void f_b50bcc(Cpu *c);
void f_15efd70(Cpu *c);
void f_15efdac(Cpu *c);
void f_4e9d54(Cpu *restrict c) {
    FN_ENTER(0x4e9d54u);
L_4e9d54:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x128u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x24a8u;
    c->r[5] = 0x0u;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ececc; }
    c->r[0] = 0x24e0u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_4ececc; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4e9da8u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ececc; }
    c->r[0] = 0x13d6u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_4e9fe8; }
    c->r[0] = 0x504u;
    c->r[2] = c->r[4];
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[24] = LD32(c->r[0]);
    c->r[0] = 0x14a0u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_4ecebc; }
    c->r[1] = 0x24b0u;
    c->v.s[0] = 0xbf800000u;
    c->v.s[30] = 0x0u;
    c->v.s[17] = 0x4622f983u;
    c->v.s[16] = 0x42b40000u;
    c->v.s[18] = 0x42a00000u;
    c->v.s[28] = 0x3f800000u;
    c->v.s[19] = 0x3f000000u;
    c->r[5] = c->r[13] + 0xdcu;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    c->r[10] = c->r[4] + c->r[1];
    c->r[1] = 0x32acu;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1054u;
    c->v.f[26] = c->v.f[24] + c->v.f[0];
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x329cu;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = 0x32b0u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    c->r[1] = 0x32aeu;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3298u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x253cu;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2520u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2754u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2505u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x24e8u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x28a4u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    c->r[1] = 0x28acu;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2b74u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x32e4u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = 0x32e5u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2716u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x28a0u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x2b04u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x2544u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2548u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x26d8u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    c->r[1] = 0x13c4u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    c->r[1] = 0x250au;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2506u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x24e4u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x2500u;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x2b80u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x4b0u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x154ececu;
    { uint32_t ea = 0x4e9f84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x154edecu;
    { uint32_t ea = 0x4e9f90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x154ede0u;
    { uint32_t ea = 0x4e9f9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x154edd4u;
    { uint32_t ea = 0x4e9fa8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x154edc8u;
    { uint32_t ea = 0x4e9fb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = 0x154ec18u;
    { uint32_t ea = 0x4e9fc0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x154ed5cu;
    { uint32_t ea = 0x4e9fccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x154ed50u;
    { uint32_t ea = 0x4e9fd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x154ed44u;
    { uint32_t ea = 0x4e9fe4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    goto L_4ea84c;
L_4e9fe8:;
    c->r[0] = 0x24b0u;
    c->r[1] = 0x30u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x4e9ff8u; f_15efdac(c);
    goto L_4ececc;
L_4e9ffc:;
    { uint32_t ea = c->r[10] + c->r[8]; ST8(ea, c->r[6]); }
    goto L_4ecea8;
L_4ea004:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x270u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea014u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4ea0ac; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x310u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x4ea034u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4ea080; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4ea048:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x270u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea058u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4ea0ac; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x310u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x4ea078u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea404; }
L_4ea080:;
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    c->r[0] = 0x13u;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4ea094:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x270u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea0a4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea370; }
L_4ea0ac:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    c->r[0] = 0xbau;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4ea0c0:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_NE) { goto L_4ea9d8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea0e4u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea0f8u; rt_dispatch(c);
    (void)f_subs(c, c->r[6], c->r[0]);
    goto L_4ecd70;
L_4ea100:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_4ea220; }
    (void)f_subs(c, c->r[0], 0x34u);
    if (COND_HI) { goto L_4ea220; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x4ea11cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x4ea204u: goto L_4ea204; case 0x4ea220u: goto L_4ea220; case 0x4ea6c4u: goto L_4ea6c4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_4ea204:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4ea210u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4ea220; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ea220u; f_47f678(c);
L_4ea220:;
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_4ea254; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = c->v.s[18];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ea254u; f_4a9a24(c);
L_4ea254:;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1000u);
    if (COND_EQ) { goto L_4ea3e4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea4c8; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x68u);
    if (COND_GT) { goto L_4ea480; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_EQ) { goto L_4ea490; }
    (void)f_subs(c, c->r[0], 0x26u);
    if (COND_EQ) { goto L_4ea490; }
    goto L_4ea4c8;
L_4ea294:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ea29cu; f_49cc40(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea3c8; }
    c->r[0] = 0x66u;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4ea2b0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    c->r[0] = 0xadu;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4ea2c4:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_NE) { goto L_4ea304; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea2e8u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea2fcu; rt_dispatch(c);
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_4ecea0; }
L_4ea304:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea314u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ecea0; }
    goto L_4ea9d8;
L_4ea320:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea344u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea358u; rt_dispatch(c);
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_4ea9dc; }
    goto L_4ecea0;
L_4ea368:;
    { uint32_t ea = c->r[10] + c->r[8]; ST8(ea, c->r[6]); }
    goto L_4ecea8;
L_4ea370:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x310u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x4ea388u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x9u; }
    if (COND_EQ) { c->r[0] = 0xau; }
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4ea39c:;
    c->r[1] = 0xcu;
L_4ea3a0:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd2u; ST16(ea, c->r[0]); }
L_4ea3ac:;
    { uint32_t ea = c->r[6] + 0x4cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    goto L_4eaa20;
L_4ea3c8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ea3d0u; f_4f1900(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0x1au;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4ea3e4:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x11u);
    if (COND_EQ) { goto L_4ea490; }
    (void)f_subs(c, c->r[0], 0x17u);
    if (COND_EQ) { goto L_4ea4dc; }
    (void)f_subs(c, c->r[0], 0x1bu);
    if (COND_EQ) { goto L_4ea490; }
    goto L_4ea4c8;
L_4ea404:;
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4ea410:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x18u;
L_4ea41c:;
    c->r[14] = 0x4ea420u; f_483060(c);
    c->r[2] = c->r[0] ^ 0x1u;
    goto L_4ea9dc;
L_4ea428:;
    c->r[0] = c->r[0] - 0x4du;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_4ebdc0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x4ea440u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x4ea464u: goto L_4ea464; case 0x4ea790u: goto L_4ea790; case 0x4ea7a4u: goto L_4ea7a4; case 0x4ea7b8u: goto L_4ea7b8; case 0x4ea7ccu: goto L_4ea7cc; case 0x4ea7e0u: goto L_4ea7e0; case 0x4ebdc0u: goto L_4ebdc0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_4ea464:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4du);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0xd1u;
    goto L_4ea7f0;
L_4ea478:;
    c->r[2] = 0x1u;
    goto L_4ea9dc;
L_4ea480:;
    (void)f_subs(c, c->r[0], 0x69u);
    if (COND_EQ) { goto L_4ea4dc; }
    (void)f_subs(c, c->r[0], 0x6bu);
    if (COND_NE) { goto L_4ea4c8; }
L_4ea490:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x288u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea4a0u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[30] - c->v.f[0];
    c->v.f[1] = c->v.f[30] - c->v.f[2];
    c->r[14] = 0x4ea4b4u; f_15efd70(c);
    c->v.s[2] = c->v.s[19];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[17]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[0];
    goto L_4ea520;
L_4ea4c8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x288u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea4d8u; rt_dispatch(c);
    goto L_4ea530;
L_4ea4dc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x288u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea4ecu; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[30] - c->v.f[0];
    c->v.f[1] = c->v.f[30] - c->v.f[2];
    c->r[14] = 0x4ea500u; f_15efd70(c);
    c->v.s[2] = c->v.s[19];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[17]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[0];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0xfecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8000u;
    c->r[0] = c->r[1] + (uint32_t)(uint16_t)(c->r[0]);
L_4ea520:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0xfecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_4ea530:;
    { uint32_t ea = c->r[13] + 0xe2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4ea554; }
    { uint32_t ea = c->r[13] + 0xd6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x20u);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_4ea55c; }
    goto L_4ea5c8;
L_4ea554:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4ea57c; }
L_4ea55c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4ea568u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4ea5c8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ea578u; f_47f678(c);
    goto L_4ea5c8;
L_4ea57c:;
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD16(ea); c->r[9] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x40000u;
    c->r[14] = 0x4ea58cu; f_47f728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea5a4; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[9];
    goto L_4ea5c4;
L_4ea5a4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x80000u;
    c->r[14] = 0x4ea5b0u; f_47f728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea5c8; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[9];
L_4ea5c4:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_4ea5c8:;
    { uint32_t ea = c->r[13] + 0xd2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4ea5fc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea5e4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea5fc; }
    { uint32_t ea = c->r[13] + 0xd2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0xff7fu;
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[13] + 0xd2u; ST16(ea, c->r[0]); }
L_4ea5fc:;
    { uint32_t ea = c->r[13] + 0xe2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xfffu;
    (void)f_subs(c, c->r[1], 0x13u);
    if (COND_NE) { goto L_4ea630; }
    { uint32_t ea = c->r[13] + 0xd2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[13] + 0xd2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x358u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ea62cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xe2u; uint32_t v = LD16(ea); c->r[0] = v; }
L_4ea630:;
    c->r[1] = 0xffeu;
    c->r[0] = c->r[0] & c->r[1];
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x4bu); }
    if (COND_NE) { goto L_4ea654; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[14] = 0x4ea654u; f_4a2fc4(c);
L_4ea654:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xd6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2f8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[12]; c->r[14] = 0x4ea670u; rt_dispatch(c);
    (void)f_subs(c, c->r[6], 0x7u);
    if (COND_EQ) { goto L_4ecea8; }
    goto L_4ecec0;
L_4ea67c:;
    c->r[1] = 0x2bu;
L_4ea680:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd2u; ST16(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 64u);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[2] = LD32(c->r[4] + 72u);
    c->v.s[6] = LD32(c->r[6] + 12u);
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->v.f[1] = c->v.f[6] - c->v.f[2];
    c->r[14] = 0x4ea6a8u; f_15efd70(c);
    c->v.s[2] = c->v.s[19];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[17]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    goto L_4ea3ac;
L_4ea6c4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4ea6d0u; f_47e608(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_4ea220; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ea6e0u; f_47f678(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4ea6e8u; f_47c6f8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ea220; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x4ea700u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ea720; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x9u;
    c->r[14] = 0x4ea718u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea220; }
L_4ea720:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = 0xa000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = c->r[1] + (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x4000u);
    if (COND_HI) { goto L_4ea220; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xd2u; ST16(ea, c->r[0]); }
    goto L_4ea220;
L_4ea760:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xf2u);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0xf4u;
    goto L_4ea7f0;
L_4ea774:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x131u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x12cu); }
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0x133u;
    goto L_4ea7f0;
L_4ea790:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4eu);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0xd2u;
    goto L_4ea7f0;
L_4ea7a4:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x51u);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0xd3u;
    goto L_4ea7f0;
L_4ea7b8:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x52u);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0xd4u;
    goto L_4ea7f0;
L_4ea7cc:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x53u);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0xd5u;
    goto L_4ea7f0;
L_4ea7e0:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0xd6u;
L_4ea7f0:;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
L_4ea7f4:;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[13] + 0xd8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdau; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_4ea818; }
    { uint32_t ea = c->r[13] + 0xd2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x20u;
    { uint32_t ea = c->r[13] + 0xd2u; ST16(ea, c->r[0]); }
L_4ea818:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_4eaa20;
L_4ea82c:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0xdu;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x508u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ea84c:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_4ecea8; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[8];
    c->r[14] = 0x4ea868u; f_46d42c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea8; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea8; }
    c->r[0] = 0x0u;
    c->r[1] = 0x3e7u;
    { uint32_t ea = c->r[13] + 0xdau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_4ea8b0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ea89cu; f_481948(c);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[1]); }
    c->v.s[20] = COND_EQ ? c->v.s[26] : c->v.s[24];
    goto L_4ea8cc;
L_4ea8b0:;
    c->v.s[0] = c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x0u;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[1]); }
    c->v.f[2] = c->v.f[24] + c->v.f[0];
    c->v.s[20] = COND_GE ? c->v.s[0] : c->v.s[2];
L_4ea8cc:;
    { uint32_t ea = c->r[13] + 0xf6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = v; }
    c->r[0] = 0x3e7u;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_LT) { goto L_4ea8f4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ea8e4u; f_481948(c);
    { uint32_t ea = c->r[13] + 0xf6u; uint32_t v = LD16(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[22] = COND_EQ ? c->v.s[26] : c->v.s[24];
    goto L_4ea908;
L_4ea8f4:;
    c->v.s[0] = c->r[9];
    (void)f_subs(c, c->r[9], 0x0u);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[2] = c->v.f[24] + c->v.f[0];
    c->v.s[22] = COND_GE ? c->v.s[0] : c->v.s[2];
L_4ea908:;
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[0] = 0x3e7u;
    c->v.s[0] = c->r[6];
    (void)f_subs(c, c->r[6], c->r[0]);
    c->v.f[21] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    if (COND_GE) { goto L_4ea968; }
    vfp_cmp_f(c, c->v.f[22], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_4ea974; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea950; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4ea948u; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ea98c; }
L_4ea950:;
    c->v.f[0] = c->v.f[20] - c->v.f[21];
    c->r[0] = c->r[4];
    c->r[14] = 0x4ea95cu; f_4811d0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ea98c; }
    goto L_4ecea8;
L_4ea968:;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[13] + 0xd8u; ST16(ea, c->r[0]); }
    goto L_4ea9a0;
L_4ea974:;
    c->v.f[0] = c->v.f[20] - c->v.f[21];
    c->v.s[1] = c->v.s[22];
    c->r[0] = c->r[4];
    c->r[14] = 0x4ea984u; f_481388(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea8; }
L_4ea98c:;
    c->r[0] = 0xffffu;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0xd8u; ST16(ea, c->r[0]); }
    if (COND_LE) { c->r[0] = 0x0u; }
    if (COND_LE) { { uint32_t ea = c->r[10] + c->r[8]; ST8(ea, c->r[0]); } }
L_4ea9a0:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x4ea9acu; f_4ecefc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea9c0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10] + c->r[8]; ST8(ea, c->r[0]); }
    goto L_4ea9cc;
L_4ea9c0:;
    { uint32_t ea = c->r[10] + c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea8; }
L_4ea9cc:;
    { uint32_t ea = c->r[13] + 0xe2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_4eaa40; }
L_4ea9d8:;
    c->r[2] = 0x0u;
L_4ea9dc:;
    { uint32_t ea = c->r[10] + c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea8; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4eacfc; }
    c->r[0] = c->r[0] & 0x7fffu;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdeu; uint32_t v = LD16(ea); c->r[0] = v; }
L_4eaa14:;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD16(ea); c->r[0] = v; }
L_4eaa1c:;
    { uint32_t ea = c->r[13] + 0xd2u; ST16(ea, c->r[0]); }
L_4eaa20:;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4eb1f8; }
L_4eaa30:;
    c->r[6] = 0x7u;
    (void)f_subs(c, c->r[6], 0x7u);
    if (COND_EQ) { goto L_4ecea8; }
    goto L_4ecec0;
L_4eaa40:;
    { uint32_t ea = c->r[13] + 0xf1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4eb1a4; }
L_4eaa4c:;
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4eaa6c; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_4ecea0; }
L_4eaa6c:;
    c->r[0] = c->r[0] & 0xfffu;
    (void)f_subs(c, c->r[0], 0x98u);
    if (COND_HI) { goto L_4ecea0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x4eaa84u + 0x8u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x4ea9dcu: goto L_4ea9dc; case 0x4eacf0u: goto L_4eacf0; case 0x4ebd44u: goto L_4ebd44; case 0x4ebdd8u: goto L_4ebdd8; case 0x4ebe04u: goto L_4ebe04; case 0x4ebe28u: goto L_4ebe28; case 0x4ebe3cu: goto L_4ebe3c; case 0x4ebe48u: goto L_4ebe48; case 0x4ebe54u: goto L_4ebe54; case 0x4ebe78u: goto L_4ebe78; case 0x4ebf48u: goto L_4ebf48; case 0x4ebf60u: goto L_4ebf60; case 0x4ebf98u: goto L_4ebf98; case 0x4ebfa4u: goto L_4ebfa4; case 0x4ebfb0u: goto L_4ebfb0; case 0x4ebfccu: goto L_4ebfcc; case 0x4ec034u: goto L_4ec034; case 0x4ec098u: goto L_4ec098; case 0x4ec0a8u: goto L_4ec0a8; case 0x4ec0dcu: goto L_4ec0dc; case 0x4ec0e8u: goto L_4ec0e8; case 0x4ec1e0u: goto L_4ec1e0; case 0x4ec218u: goto L_4ec218; case 0x4ec240u: goto L_4ec240; case 0x4ec250u: goto L_4ec250; case 0x4ec25cu: goto L_4ec25c; case 0x4ec268u: goto L_4ec268; case 0x4ec274u: goto L_4ec274; case 0x4ec280u: goto L_4ec280; case 0x4ec294u: goto L_4ec294; case 0x4ec2a4u: goto L_4ec2a4; case 0x4ec2b8u: goto L_4ec2b8; case 0x4ec2c4u: goto L_4ec2c4; case 0x4ec2ecu: goto L_4ec2ec; case 0x4ec324u: goto L_4ec324; case 0x4ec334u: goto L_4ec334; case 0x4ec3a4u: goto L_4ec3a4; case 0x4ec3ccu: goto L_4ec3cc; case 0x4ec3f0u: goto L_4ec3f0; case 0x4ec428u: goto L_4ec428; case 0x4ec444u: goto L_4ec444; case 0x4ec478u: goto L_4ec478; case 0x4ec484u: goto L_4ec484; case 0x4ec4a4u: goto L_4ec4a4; case 0x4ec4ccu: goto L_4ec4cc; case 0x4ec4f0u: goto L_4ec4f0; case 0x4ec524u: goto L_4ec524; case 0x4ec530u: goto L_4ec530; case 0x4ec578u: goto L_4ec578; case 0x4ec5b0u: goto L_4ec5b0; case 0x4ec5d0u: goto L_4ec5d0; case 0x4ec5dcu: goto L_4ec5dc; case 0x4ec5ecu: goto L_4ec5ec; case 0x4ec608u: goto L_4ec608; case 0x4ec620u: goto L_4ec620; case 0x4ec698u: goto L_4ec698; case 0x4ec6a4u: goto L_4ec6a4; case 0x4ec6b4u: goto L_4ec6b4; case 0x4ec6d4u: goto L_4ec6d4; case 0x4ec6e0u: goto L_4ec6e0; case 0x4ec6ecu: goto L_4ec6ec; case 0x4ec704u: goto L_4ec704; case 0x4ec714u: goto L_4ec714; case 0x4ec720u: goto L_4ec720; case 0x4ec748u: goto L_4ec748; case 0x4ec758u: goto L_4ec758; case 0x4ec774u: goto L_4ec774; case 0x4ec794u: goto L_4ec794; case 0x4ec7d8u: goto L_4ec7d8; case 0x4ec7e4u: goto L_4ec7e4; case 0x4ec7f0u: goto L_4ec7f0; case 0x4ec7fcu: goto L_4ec7fc; case 0x4ec808u: goto L_4ec808; case 0x4ec814u: goto L_4ec814; case 0x4ec824u: goto L_4ec824; case 0x4ec838u: goto L_4ec838; case 0x4ec850u: goto L_4ec850; case 0x4ec85cu: goto L_4ec85c; case 0x4ec874u: goto L_4ec874; case 0x4ec88cu: goto L_4ec88c; case 0x4ec8a4u: goto L_4ec8a4; case 0x4ec8c0u: goto L_4ec8c0; case 0x4ec8f4u: goto L_4ec8f4; case 0x4ec914u: goto L_4ec914; case 0x4ec980u: goto L_4ec980; case 0x4ec9b4u: goto L_4ec9b4; case 0x4ec9c0u: goto L_4ec9c0; case 0x4ec9f4u: goto L_4ec9f4; case 0x4eca30u: goto L_4eca30; case 0x4eca40u: goto L_4eca40; case 0x4eca70u: goto L_4eca70; case 0x4ecadcu: goto L_4ecadc; case 0x4ecaf8u: goto L_4ecaf8; case 0x4ecb04u: goto L_4ecb04; case 0x4ecb28u: goto L_4ecb28; case 0x4ecb70u: goto L_4ecb70; case 0x4ecb7cu: goto L_4ecb7c; case 0x4ecba8u: goto L_4ecba8; case 0x4ecbd8u: goto L_4ecbd8; case 0x4ecc04u: goto L_4ecc04; case 0x4ecc40u: goto L_4ecc40; case 0x4ecc58u: goto L_4ecc58; case 0x4ecc7cu: goto L_4ecc7c; case 0x4ecc9cu: goto L_4ecc9c; case 0x4eccd0u: goto L_4eccd0; case 0x4ecd48u: goto L_4ecd48; case 0x4ecd5cu: goto L_4ecd5c; case 0x4ecd7cu: goto L_4ecd7c; case 0x4ecd9cu: goto L_4ecd9c; case 0x4ecdb8u: goto L_4ecdb8; case 0x4ecde0u: goto L_4ecde0; case 0x4ece44u: goto L_4ece44; case 0x4ece60u: goto L_4ece60; case 0x4ece7cu: goto L_4ece7c; case 0x4ecea0u: goto L_4ecea0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_4eacf0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4eacfc:;
    { uint32_t ea = c->r[13] + 0xdeu; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_HI) { goto L_4ebdc0; }
    c->r[0] = (c->r[1] << 2);
    c->r[2] = 0x4ead14u + 0x28u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x4eb13cu: goto L_4eb13c; case 0x4eb3e4u: goto L_4eb3e4; case 0x4eb42cu: goto L_4eb42c; case 0x4eb504u: goto L_4eb504; case 0x4eb538u: goto L_4eb538; case 0x4eb55cu: goto L_4eb55c; case 0x4eb5d0u: goto L_4eb5d0; case 0x4eb600u: goto L_4eb600; case 0x4eb630u: goto L_4eb630; case 0x4eb660u: goto L_4eb660; case 0x4eb6d8u: goto L_4eb6d8; case 0x4eb6f4u: goto L_4eb6f4; case 0x4eb734u: goto L_4eb734; case 0x4eb768u: goto L_4eb768; case 0x4eb79cu: goto L_4eb79c; case 0x4eb7b4u: goto L_4eb7b4; case 0x4eb7e0u: goto L_4eb7e0; case 0x4eb838u: goto L_4eb838; case 0x4eb86cu: goto L_4eb86c; case 0x4eb8a0u: goto L_4eb8a0; case 0x4eb934u: goto L_4eb934; case 0x4eb958u: goto L_4eb958; case 0x4eb98cu: goto L_4eb98c; case 0x4ebdc0u: goto L_4ebdc0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_4eb13c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2ecu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4eb14cu; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_4ebdc0; }
    { uint32_t ea = c->r[13] + 0xdeu; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_NE) { goto L_4eb18c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4eb180u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ebdc0; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
L_4eb18c:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    goto L_4eaa1c;
L_4eb1a4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb1acu; f_4f1900(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ecea0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb1bcu; f_4a98ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GT) { goto L_4ecea0; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GE) { goto L_4ecea0; }
    { uint32_t ea = c->r[13] + 0xe2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_4eaa4c; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_4eaa6c;
L_4eb1f8:;
    { uint32_t ea = c->r[10] + c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    vfp_cmp_f(c, c->v.f[22], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_4eb230; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4eb260; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4eaa30; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4eb224u; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4eaa30; }
    goto L_4eb2a0;
L_4eb230:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[9]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_4eb280; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4eaa30; }
    c->v.s[0] = c->v.s[20];
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb254u; f_480c1c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4eaa30; }
    goto L_4eb2a0;
L_4eb260:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4eaa30; }
    c->v.s[0] = c->v.s[20];
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb274u; f_4811d0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4eaa30; }
    goto L_4eb2a0;
L_4eb280:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4eaa30; }
    c->v.s[0] = c->v.s[20];
    c->v.s[1] = c->v.s[22];
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb298u; f_481388(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4eaa30; }
L_4eb2a0:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ebdcc; }
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x40000u;
    c->r[14] = 0x4eb2c0u; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4eb2d8; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4eaa30; }
L_4eb2d8:;
    { uint32_t ea = c->r[13] + 0xe2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_4ebcfc; }
L_4eb2e4:;
    { uint32_t ea = c->r[13] + 0xd6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4000u);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_NE) { goto L_4ebc48; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1000u);
    if (COND_EQ) { goto L_4eb328; }
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_4eb32c; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xdu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x2u); }
    if (COND_NE) { goto L_4eb32c; }
L_4eb328:;
    c->r[9] = 0x1u;
L_4eb32c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x4eb33cu; f_4e1348(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4eb360; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x4eb354u; f_4e14b4(c);
    c->r[0] = c->r[9] | c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebc48; }
L_4eb360:;
    c->r[1] = 0x0u;
    c->r[2] = 0x2768u;
    { uint32_t ea = c->r[10] + c->r[8]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0xb8u;
    c->r[14] = 0x4eb388u; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4eb3c8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1000u;
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4eb3a8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4eb3c8; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x2768u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
L_4eb3c8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb3d0u; f_4ac4bc(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb3d8u; f_4e4b44(c);
    (void)f_subs(c, c->r[6], 0x7u);
    if (COND_EQ) { goto L_4ecea8; }
    goto L_4ecec0;
L_4eb3e4:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd2u; ST16(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[13] + 0xdau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4eb9cc; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb428u; f_487fec(c);
    goto L_4eb9e0;
L_4eb42c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4eb438u; f_4fac84(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_4eb484; }
    c->r[0] = c->r[13] + 0xd4u;
    c->r[1] = c->r[5];
    c->r[3] = c->r[13] + 0xd6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd2u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xfcu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd8u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xdau;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb47cu; f_4ed1c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4eaa20; }
L_4eb484:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4eb490u; f_75fdcc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[13] + 0x100u;
    c->r[2] = c->r[13] + 0x11cu;
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4eb4c4u; f_5aee54(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebdc0; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x16b0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    c->r[0] = 0x97u;
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 8u);
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 64u);
    c->v.s[2] = LD32(c->r[4] + 72u);
    goto L_4eb5a8;
L_4eb504:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3f8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb51cu; f_4ff984(c);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->pc = c->r[6]; c->r[14] = 0x4eb528u; rt_dispatch(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x8u;
    goto L_4eb9bc;
L_4eb538:;
    c->r[0] = 0x40u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb548u; f_4a00cc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebd60; }
    c->r[0] = 0x79u;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4eb55c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x20u;
    c->r[14] = 0x4eb568u; f_4fad3c(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x20u;
    c->r[14] = 0x4eb578u; f_4fad3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ebdc0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    c->r[0] = 0x151u;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd2u; ST16(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 64u);
    c->v.s[2] = LD32(c->r[4] + 72u);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 12u);
L_4eb5a8:;
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->v.f[1] = c->v.f[6] - c->v.f[2];
    c->r[14] = 0x4eb5b4u; f_15efd70(c);
    c->v.s[2] = c->v.s[19];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[17]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    goto L_4eaa20;
L_4eb5d0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4eb5e8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[1] = 0x1u;
    if (COND_NE) { c->r[0] = 0xb0u; }
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[1]); }
    if (COND_EQ) { c->r[0] = 0x13du; }
    goto L_4eaa14;
L_4eb600:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4eb618u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[1] = 0x1u;
    if (COND_NE) { c->r[0] = 0xb1u; }
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[1]); }
    if (COND_EQ) { c->r[0] = 0x13eu; }
    goto L_4eaa14;
L_4eb630:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4eb648u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[1] = 0x1u;
    if (COND_NE) { c->r[0] = 0xafu; }
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[1]); }
    if (COND_EQ) { c->r[0] = 0x13cu; }
    goto L_4eaa14;
L_4eb660:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb668u; f_5000c8(c);
    c->r[1] = 0x843u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[14] = 0x4eb680u; f_4fad3c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_4ebec4; }
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb698u; f_4aaaa0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4eb6b4u; f_427ba8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea39c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4eb6c8u; f_427a98(c);
    c->r[1] = 0x2du;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = 0xcu; }
    goto L_4ea3a0;
L_4eb6d8:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x764u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4eb6f0u; rt_dispatch(c);
    goto L_4eaa14;
L_4eb6f4:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebdc0; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xafu);
    if (COND_GT) { goto L_4ebe84; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xafu); }
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    c->r[0] = 0xabu;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4eb734:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3f8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb74cu; f_4ff984(c);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->pc = c->r[6]; c->r[14] = 0x4eb758u; rt_dispatch(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x5u;
    goto L_4eb9bc;
L_4eb768:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3f8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb780u; f_4ff984(c);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->pc = c->r[6]; c->r[14] = 0x4eb78cu; rt_dispatch(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    goto L_4eb9bc;
L_4eb79c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0xd6u;
    c->r[2] = c->r[13] + 0xd4u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x628u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_4ebdb0;
L_4eb7b4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0xd6u;
    c->r[2] = c->r[13] + 0xd4u;
    c->r[3] = c->r[13] + 0xd2u;
    { uint32_t ea = c->r[0] + 0x354u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[6]; c->r[14] = 0x4eb7d0u; rt_dispatch(c);
    c->r[6] = 0x7u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4eaa20; }
    goto L_4ebdcc;
L_4eb7e0:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd2u; ST16(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[13] + 0xdau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4eb804u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4ebd7c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5ecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5fcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4eb828u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->pc = c->r[6]; c->r[14] = 0x4eb834u; rt_dispatch(c);
    goto L_4ebd84;
L_4eb838:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3f8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb850u; f_4ff984(c);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->pc = c->r[6]; c->r[14] = 0x4eb85cu; rt_dispatch(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2u;
    goto L_4eb9bc;
L_4eb86c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb874u; f_4cb620(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[14] = 0x4eb888u; f_4fad3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ebdc0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    c->r[0] = 0x72u;
    goto L_4eaa14;
L_4eb8a0:;
    c->r[0] = 0x200u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x4u;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_4ebdc0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x4eb8d4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x4ea004u: goto L_4ea004; case 0x4ea048u: goto L_4ea048; case 0x4ea094u: goto L_4ea094; case 0x4eb8f0u: goto L_4eb8f0; case 0x4ebdc0u: goto L_4ebdc0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_4eb8f0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x270u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4eb900u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4ea0ac; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x310u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x4eb920u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x2u; }
    if (COND_EQ) { c->r[0] = 0x3u; }
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4eb934:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ebdc0; }
    c->r[0] = 0x800u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb954u; f_4b98dc(c);
    goto L_4eaa14;
L_4eb958:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3f8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb970u; f_4ff984(c);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->pc = c->r[6]; c->r[14] = 0x4eb97cu; rt_dispatch(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    goto L_4eb9bc;
L_4eb98c:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3f8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb9a4u; f_4ff984(c);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->pc = c->r[6]; c->r[14] = 0x4eb9b0u; rt_dispatch(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
L_4eb9bc:;
    { uint32_t ea = c->r[0] + 0x3fcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x4eb9c8u; rt_dispatch(c);
    goto L_4eaa14;
L_4eb9cc:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4eb9e0u; f_48802c(c);
L_4eb9e0:;
    c->r[6] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_4ebdc0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0xfcu;
    c->r[2] = c->r[13] + 0xd4u;
    c->r[3] = c->r[13] + 0xd2u;
    { uint32_t ea = c->r[0] + 0x5b8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xd6u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xdau;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->pc = c->r[12]; c->r[14] = 0x4eba30u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebdc0; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4eba5c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
L_4eba5c:;
    { uint32_t ea = c->r[13] + 0xdeu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xeeu);
    if (COND_NE) { goto L_4ea7f4; }
    { uint32_t ea = c->r[13] + 0xd6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebdc0; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebdc0; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0xd1u;
    (void)f_subs(c, c->r[1], 0x62u);
    if (COND_HI) { goto L_4ea428; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x4ebaa4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x4ea464u: goto L_4ea464; case 0x4ea760u: goto L_4ea760; case 0x4ea774u: goto L_4ea774; case 0x4ea790u: goto L_4ea790; case 0x4ea7a4u: goto L_4ea7a4; case 0x4ea7b8u: goto L_4ea7b8; case 0x4ea7ccu: goto L_4ea7cc; case 0x4ea7e0u: goto L_4ea7e0; case 0x4ebc34u: goto L_4ebc34; case 0x4ebdc0u: goto L_4ebdc0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_4ebc34:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xf1u);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0xf3u;
    goto L_4ea7f0;
L_4ebc48:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x40u;
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ebc60u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebc80; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xd6u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ebc78u; f_4aaeac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4ebdc0; }
L_4ebc80:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x80u;
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ebc98u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebcc0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xd6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6f0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x4ebcb8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4ebdc0; }
L_4ebcc0:;
    { uint32_t ea = c->r[13] + 0xd6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_4ea100; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0xau;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ebcf0u; f_4b6e94(c);
    (void)f_subs(c, c->r[6], 0x7u);
    if (COND_EQ) { goto L_4ecea8; }
    goto L_4ecec0;
L_4ebcfc:;
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[0] - 0x46u;
    (void)f_subs(c, c->r[1], 0x19u);
    if (COND_HI) { goto L_4ebd24; }
    c->r[3] = 0x8001u;
    c->r[2] = 0x1u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x2000000u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4ebd30; }
L_4ebd24:;
    (void)f_subs(c, c->r[0], 0x98u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x96u); }
    if (COND_NE) { goto L_4eb2e4; }
L_4ebd30:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4eaa30; }
    goto L_4eb2e4;
L_4ebd44:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_4ebd48:;
    c->v.s[0] = LD32(c->r[0]);
    c->r[2] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_4ea9dc; }
    goto L_4ecea0;
L_4ebd60:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ebd68u; f_4a0124(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebea8; }
    c->r[0] = 0x27u;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4ebd7c:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
L_4ebd84:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = c->r[13] + 0xd4u;
    c->r[3] = c->r[13] + 0xd2u;
    { uint32_t ea = c->r[1] + 0x5f0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[13] + 0xfcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xdau;
    c->r[1] = c->r[13] + 0xd6u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_4ebdb0:;
    c->r[0] = c->r[4];
    c->pc = c->r[6]; c->r[14] = 0x4ebdb8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4eaa20; }
L_4ebdc0:;
    c->r[0] = 0x0u;
    c->r[6] = 0x7u;
    { uint32_t ea = c->r[10] + c->r[8]; ST8(ea, c->r[0]); }
L_4ebdcc:;
    (void)f_subs(c, c->r[6], 0x7u);
    if (COND_EQ) { goto L_4ecea8; }
    goto L_4ecec0;
L_4ebdd8:;
    c->r[0] = c->r[4];
    c->r[2] = 0x180u;
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x4ebdecu; f_482f58(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4e9ffc; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x18u);
    if (COND_NE) { goto L_4ea9dc; }
L_4ebe04:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4ebe10u; f_47c7ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea0c0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4ebe24u; f_4ad534(c);
    goto L_4ece94;
L_4ebe28:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ebe38u; rt_dispatch(c);
    goto L_4ecbc8;
L_4ebe3c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfu;
    goto L_4ec6f4;
L_4ebe48:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x824u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecc48;
L_4ebe54:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x828u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ebe64u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x838u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecc48;
L_4ebe78:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfu;
    goto L_4ecd84;
L_4ebe84:;
    (void)f_subs(c, c->r[0], 0xb0u);
    if (COND_EQ) { goto L_4ea2b0; }
    (void)f_subs(c, c->r[0], 0xb1u);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    c->r[0] = 0xacu;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4ebea8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ebeb0u; f_4a017c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea294; }
    c->r[0] = 0x35u;
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    goto L_4eaa20;
L_4ebec4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x19u;
    c->r[14] = 0x4ebed0u; f_4fad3c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_4ebdc0; }
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ebee8u; f_4aa508(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ebdc0; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x19u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4ebf08u; f_704218(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ebdc0; }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[13] + 0xd6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4ebf24u; f_427ba8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea67c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4ebf38u; f_427a98(c);
    c->r[1] = 0x2cu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = 0x2bu; }
    goto L_4ea680;
L_4ebf48:;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_4ecea8; }
    { uint32_t ea = c->r[13] + 0xdeu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    goto L_4ebf88;
L_4ebf60:;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_4ecea0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x96u;
    c->r[14] = 0x4ebf78u; f_4a5cbc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea0; }
    { uint32_t ea = c->r[13] + 0xdeu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD16(ea); c->r[1] = v; }
L_4ebf88:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ebf90u; f_483060(c);
    c->r[2] = c->r[0];
    goto L_4ea9dc;
L_4ebf98:;
    c->v.s[0] = 0x42700000u;
    c->v.s[1] = 0x42f00000u;
    goto L_4ebfb8;
L_4ebfa4:;
    c->v.s[0] = 0x43340000u;
    c->v.s[1] = 0x42c80000u;
    goto L_4ebfb8;
L_4ebfb0:;
    c->v.s[0] = 0x438c0000u;
    c->v.s[1] = 0x41a00000u;
L_4ebfb8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x4ebfc8u; f_4a8384(c);
    goto L_4ece94;
L_4ebfcc:;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_4ecea8; }
    { uint32_t ea = c->r[13] + 0xdeu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0x4ebfe8u; f_483060(c);
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ea9dc; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_4ea9d8; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x32u);
    if (COND_CS) { goto L_4ea9dc; }
    c->r[1] = 0x133d930u;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[1] = 0x4ec030u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_4ea9dc;
L_4ec034:;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_4ecea8; }
    { uint32_t ea = c->r[13] + 0xdeu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec050u; f_483060(c);
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ea9dc; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_4ea9d8; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1du);
    if (COND_HI) { goto L_4ea9d8; }
    c->r[2] = 0xec0cu;
    c->r[1] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x24a00000u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = 0x0u;
    if (COND_NE) { c->r[2] = 0x1u; }
    goto L_4ea9dc;
L_4ec098:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    { uint32_t ea = c->r[0] + 0x25cu; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_4ec6f8;
L_4ec0a8:;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_4ea9dc; }
    { uint32_t ea = c->r[13] + 0xdeu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_EQ) { goto L_4ea410; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_NE) { goto L_4ea9dc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    goto L_4ea41c;
L_4ec0dc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec0e4u; f_4a0740(c);
    goto L_4ecd6c;
L_4ec0e8:;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_4ecea0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x96u;
    c->r[14] = 0x4ec100u; f_4a5cbc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x278u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec118u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4ecea0; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_4ecea0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x9du;
    c->r[14] = 0x4ec13cu; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ec1a8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x9cu;
    c->r[14] = 0x4ec150u; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ec1a8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x11eu;
    c->r[14] = 0x4ec164u; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ec1a8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x113u;
    c->r[14] = 0x4ec178u; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ec1a8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x125u;
    c->r[14] = 0x4ec18cu; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ec1a8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x139u;
    c->r[14] = 0x4ec1a0u; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea82c; }
L_4ec1a8:;
    c->r[0] = 0x154ca08u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x4ec1b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4ec1bcu; f_266f5c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea82c; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xeu);
    if (COND_HI) { goto L_4ecea0; }
    c->r[1] = 0x1u;
    c->r[2] = 0x6404u;
    goto L_4ec3c4;
L_4ec1e0:;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_4ecea8; }
    { uint32_t ea = c->r[13] + 0xdeu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec1fcu; f_483060(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec208u; f_4a1be0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea0; }
    c->r[2] = c->r[6];
    goto L_4ea9dc;
L_4ec218:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[0] + 0x2ecu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ec22cu; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4ea9d8; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    goto L_4ecd6c;
L_4ec240:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4ec24cu; f_5000f4(c);
    goto L_4ecdd0;
L_4ec250:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x14u;
    goto L_4ec6f4;
L_4ec25c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x19u;
    goto L_4ec6f4;
L_4ec268:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xau;
    goto L_4ec6f4;
L_4ec274:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec27cu; f_4a80e8(c);
    goto L_4ecd6c;
L_4ec280:;
    c->r[0] = c->r[4];
    c->r[2] = 0x180u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4ec290u; f_482f58(c);
    goto L_4ecdd0;
L_4ec294:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    goto L_4ecd70;
L_4ec2a4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec2acu; f_501890(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    goto L_4ecee0;
L_4ec2b8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x824u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec2c4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec2ccu; f_4a80e8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4ecea0; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_4ecd6c;
L_4ec2ec:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x25cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ec300u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ecea0; }
    c->r[0] = 0x154ca0cu;
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x4ec31cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4ec320u; f_5a5ed0(c);
    goto L_4ecd6c;
L_4ec324:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec32cu; f_4a80e8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    goto L_4ecd70;
L_4ec334:;
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x4ec340u; f_4fad3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea0; }
    c->r[0] = 0x154c884u;
    { uint32_t ea = 0x4ec354u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4ec358u; f_75fdcc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ecea0; }
    c->r[0] = 0x154c9b4u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x4ec374u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4ec378u; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ecea0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4ec38cu; f_5000f4(c);
    goto L_4ece94;
L_4ec3a4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x26cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec3b4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_4ecea0; }
    c->r[1] = 0x1u;
    c->r[2] = 0x23u;
L_4ec3c4:;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    goto L_4ecd70;
L_4ec3cc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec3dcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec3f0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec400u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ea9d8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec418u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_GE) { goto L_4ecea0; }
    goto L_4ea9dc;
L_4ec428:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec438u; rt_dispatch(c);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    goto L_4ec498;
L_4ec444:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec454u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ec748; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec46cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ec748; }
    goto L_4ecea0;
L_4ec478:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec484:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec494u; f_4af8d8(c);
    (void)f_subs(c, c->r[0], 0x2u);
L_4ec498:;
    c->r[2] = 0x0u;
    if (COND_HI) { goto L_4ea9dc; }
    goto L_4ecea0;
L_4ec4a4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    { uint32_t ea = c->r[0] + 0x25cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ec4b8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecc48;
L_4ec4cc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec4d4u; f_4a1bc0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x10u;
    c->r[14] = 0x4ec4ecu; f_483060(c);
    goto L_4ecd6c;
L_4ec4f0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec500u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec518u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ec748; }
    goto L_4ecea0;
L_4ec524:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x570u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec530:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec538u; f_4a1bc0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec550u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ecea8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec568u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_4ea9dc; }
    goto L_4ecea8;
L_4ec578:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x740u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec588u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x744u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ec5a0u; rt_dispatch(c);
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_GE) { goto L_4ea9dc; }
    goto L_4ecea0;
L_4ec5b0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x740u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec5c0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0x0u;
    if (COND_GT) { goto L_4ea9dc; }
    goto L_4ecea0;
L_4ec5d0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    goto L_4ec5e4;
L_4ec5dc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
L_4ec5e4:;
    { uint32_t ea = c->r[0] + 0x218u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_4ec6f8;
L_4ec5ec:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x218u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ec600u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
L_4ec608:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x218u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ec61cu; rt_dispatch(c);
    goto L_4ece94;
L_4ec620:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec638u; f_487fec(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xceu);
    if (COND_EQ) { goto L_4ec690; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec64cu; f_4ffd38(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ec690; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec664u; rt_dispatch(c);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_4ec690; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x25cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ec684u; rt_dispatch(c);
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea9dc; }
L_4ec690:;
    { uint32_t ea = c->r[10] + c->r[8]; ST8(ea, c->r[6]); }
    goto L_4ecea8;
L_4ec698:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x408u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec6a4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x800u;
    { uint32_t ea = c->r[0] + 0x25cu; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_4ec8b0;
L_4ec6b4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x218u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ec6c8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ec748; }
    goto L_4ecea0;
L_4ec6d4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec6e0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1eu;
    goto L_4ec6f4;
L_4ec6ec:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2eu;
L_4ec6f4:;
    { uint32_t ea = c->r[0] + 0x470u; uint32_t v = LD32(ea); c->r[2] = v; }
L_4ec6f8:;
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ec700u; rt_dispatch(c);
    goto L_4ecd6c;
L_4ec704:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1eu;
    { uint32_t ea = c->r[0] + 0x470u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_4ec8b0;
L_4ec714:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecc48;
L_4ec720:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec730u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea0; }
L_4ec748:;
    c->r[0] = c->r[4];
    c->r[1] = 0x96u;
    c->r[14] = 0x4ec754u; f_4a5cbc(c);
    goto L_4ecd6c;
L_4ec758:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_4ea9d8; }
    (void)f_subs(c, c->r[0], 0x9u);
    goto L_4ecbcc;
L_4ec774:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec794:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec7b8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec7d0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ea9d8; }
L_4ec7d8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec7e4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec7f0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec7fc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x6b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec808:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec810u; f_4ad670(c);
    goto L_4ecd6c;
L_4ec814:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec81cu; f_4ad670(c);
    (void)f_subs(c, c->r[0], 0x1u);
    goto L_4ecd70;
L_4ec824:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec82cu; f_4ff984(c);
    (void)f_subs(c, c->r[0], 0x21u);
    if (COND_NE) { goto L_4ecea0; }
    goto L_4eacf0;
L_4ec838:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x80u;
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4eca08;
L_4ec850:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x85cu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec85c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x868u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec86cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    goto L_4ecbcc;
L_4ec874:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x868u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec884u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x2u);
    goto L_4ecbcc;
L_4ec88c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x868u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec89cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x3u);
    goto L_4ecbcc;
L_4ec8a4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xc0u;
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
L_4ec8b0:;
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ec8b8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    goto L_4ecd70;
L_4ec8c0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec8d0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec8e4u; rt_dispatch(c);
    (void)f_subs(c, c->r[6], c->r[0]);
    c->r[2] = 0x0u;
    if (COND_CS) { goto L_4ea9dc; }
    goto L_4ecea0;
L_4ec8f4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec8fcu; f_4a1bc0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[14] = 0x4ec910u; f_485e2c(c);
    goto L_4ecd6c;
L_4ec914:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec91cu; f_47c6f8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[14] = 0x4ec934u; f_2e8458(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ec958; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec94cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_4ea9dc; }
L_4ec958:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[14] = 0x4ec968u; f_2e8458(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x20000000u;
    c->r[3] = 0x0u;
    goto L_4ecd54;
L_4ec980:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ec988u; f_47c6f8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec9a8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4ecab8; }
    goto L_4ecea0;
L_4ec9b4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x848u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ec9c0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x85cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec9d0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4ece7c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x85cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ec9e8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_4ece7c; }
    goto L_4ecea0;
L_4ec9f4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x40000u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
L_4eca08:;
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4eca10u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecb68; }
    c->r[0] = c->r[4];
    c->r[1] = 0x96u;
    c->r[14] = 0x4eca24u; f_4a5cbc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ea9d8; }
    goto L_4ecb68;
L_4eca30:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x400u;
    goto L_4ecd54;
L_4eca40:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] - 0x1u;
    c->r[0] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { c->r[0] = c->r[2]; }
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4ea9dc; }
    goto L_4ecea0;
L_4eca70:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4eca78u; f_47c6f8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4eca98u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ecab0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
L_4ecab8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x684u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ecac8u; rt_dispatch(c);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->r[2] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_4ea9dc; }
    goto L_4ecea0;
L_4ecadc:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4ecaecu; f_4af8d8(c);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_CS) { goto L_4ece7c; }
    goto L_4ecea0;
L_4ecaf8:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    goto L_4ecd6c;
L_4ecb04:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x828u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ecb14u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x838u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ece4c;
L_4ecb28:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x218u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ecb40u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecb68; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x40000u;
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ecb60u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ea9d8; }
L_4ecb68:;
    { uint32_t ea = c->r[10] + c->r[8]; ST8(ea, c->r[6]); }
    goto L_4ecea8;
L_4ecb70:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x848u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecc48;
L_4ecb7c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4ecb88u; f_47c7ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea2c4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4ecb9cu; f_4ad534(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ea304; }
    goto L_4ecea0;
L_4ecba8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4ecbb4u; f_47c7ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea320; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x4ecbc8u; f_4ad534(c);
L_4ecbc8:;
    (void)f_subs(c, c->r[0], 0x0u);
L_4ecbcc:;
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_4ecea0; }
    goto L_4ea9dc;
L_4ecbd8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ecbe8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ecc00u; rt_dispatch(c);
    goto L_4eccc4;
L_4ecc04:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ecc0cu; f_47c6f8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x684u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ecc24u; rt_dispatch(c);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    goto L_4ecd54;
L_4ecc40:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x408u; uint32_t v = LD32(ea); c->r[1] = v; }
L_4ecc48:;
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ecc50u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    goto L_4ecd70;
L_4ecc58:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x828u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ecc68u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_4ea9d8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x838u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ecd64;
L_4ecc7c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x768u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ecc8cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_4ebd48;
L_4ecc9c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x218u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4eccb0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ecea0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x96u;
    c->r[14] = 0x4eccc4u; f_4a5cbc(c);
L_4eccc4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ece7c; }
    goto L_4ecea0;
L_4eccd0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4eccecu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4ea368; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_4ea478; }
    { uint32_t ea = c->r[13] + 0xdeu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x34u);
    if (COND_NE) { goto L_4ea9dc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x10du;
    c->r[14] = 0x4ecd20u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ea9d8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x139u;
    c->r[14] = 0x4ecd38u; f_483060(c);
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[2] = 0x0u; }
    goto L_4ea9dc;
L_4ecd48:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x20u;
L_4ecd54:;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_4ece8c;
L_4ecd5c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x45cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_4ecd64:;
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ecd6cu; rt_dispatch(c);
L_4ecd6c:;
    (void)f_subs(c, c->r[0], 0x0u);
L_4ecd70:;
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_4ea9dc; }
    goto L_4ecea0;
L_4ecd7c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xau;
L_4ecd84:;
    { uint32_t ea = c->r[0] + 0x470u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ecd90u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4ece7c; }
    goto L_4ecea0;
L_4ecd9c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 0x470u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ecdb0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
L_4ecdb8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x40000u;
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ecdd0u; rt_dispatch(c);
L_4ecdd0:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ea9dc; }
    goto L_4ecea0;
L_4ecde0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x4ecde8u; f_47c6f8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ece08u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x684u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ece20u; rt_dispatch(c);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_4ecea0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xc0u;
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x4ece40u; rt_dispatch(c);
    goto L_4ecdd0;
L_4ece44:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
L_4ece4c:;
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ece54u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ecea0; }
    goto L_4ece7c;
L_4ece60:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ece70u; rt_dispatch(c);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_4ecea0; }
L_4ece7c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x40000u;
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
L_4ece8c:;
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x4ece94u; rt_dispatch(c);
L_4ece94:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4ea9dc; }
L_4ecea0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + c->r[8]; ST8(ea, c->r[0]); }
L_4ecea8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_CC) { goto L_4ea84c; }
L_4ecebc:;
    c->r[6] = 0x5u;
L_4ecec0:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[6], 0x5u);
    if (COND_NE) { c->r[5] = 0x1u; }
L_4ececc:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_4ecee0:;
    c->r[6] = 0x1u;
    goto L_4ecec0;
}
