#include "cpu.h"
#include "neon_rt.h"
void f_3630c4(Cpu *c);
void f_394c80(Cpu *c);
void f_394cbc(Cpu *c);
void f_5f1b1c(Cpu *c);
void f_5f1da4(Cpu *c);
void f_5f3518(Cpu *c);
void f_5f3624(Cpu *c);
void f_5f3824(Cpu *c);
void f_723da4(Cpu *c);
void f_7244c8(Cpu *c);
void f_726348(Cpu *c);
void f_726dd4(Cpu *c);
void f_760418(Cpu *c);
void f_5ec018(Cpu *restrict c) {
    FN_ENTER(0x5ec018u);
L_5ec018:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x144cd54u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[8] + 0x1du; ST8(ea, c->r[5]); }
    { uint32_t ea = 0x5ec034u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0x6000u;
    (void)f_subs(c, c->r[2], 0x6000u);
    if (COND_NE) { goto L_5ec09c; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec09c; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e868u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x5ec080u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec084u; f_3630c4(c);
    c->r[0] = 0x144ccf4u;
    c->r[6] = 0x1u;
    { uint32_t ea = 0x5ec094u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc70u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5ec0a0;
L_5ec09c:;
    c->r[6] = 0x0u;
L_5ec0a0:;
    c->r[2] = c->r[1] & 0x18000u;
    (void)f_subs(c, c->r[2], 0x18000u);
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5ec0fc; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x1u;
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e800u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x5ec0e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec0ecu; f_3630c4(c);
    c->r[0] = 0x144cc90u;
    { uint32_t ea = 0x5ec0f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc70u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ec0fc:;
    c->r[2] = c->r[1] & 0x60000u;
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[2], 0x60000u);
    if (COND_NE) { goto L_5ec168; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec168; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e79cu;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x5ec14cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec150u; f_3630c4(c);
    c->r[0] = 0x144cc28u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5ec160u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc70u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5ec16c;
L_5ec168:;
    c->r[2] = 0x0u;
L_5ec16c:;
    c->r[6] = c->r[6] | c->r[2];
    c->r[2] = c->r[1] & 0x380000u;
    (void)f_subs(c, c->r[2], 0x380000u);
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5ec1cc; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e734u;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x5ec1b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec1b8u; f_3630c4(c);
    c->r[0] = 0x144cbc0u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x5ec1c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc70u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ec1cc:;
    c->r[2] = c->r[1] & 0xc00000u;
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[2], 0xc00000u);
    if (COND_NE) { goto L_5ec238; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec238; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e6ccu;
    c->r[1] = 0x4u;
    { uint32_t ea = 0x5ec21cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec220u; f_3630c4(c);
    c->r[0] = 0x144cb58u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5ec230u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc70u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5ec23c;
L_5ec238:;
    c->r[2] = 0x0u;
L_5ec23c:;
    c->r[1] = c->r[1] & 0x3000000u;
    c->r[6] = c->r[6] | c->r[2];
    (void)f_subs(c, c->r[1], 0x3000000u);
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5ec298; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x20u;
    c->r[2] = c->r[2] | 0x20u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e664u;
    c->r[1] = 0x5u;
    { uint32_t ea = 0x5ec284u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec288u; f_3630c4(c);
    c->r[0] = 0x144caf0u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x5ec298u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ec298:;
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    c->r[2] = c->r[1] & 0x7fu;
    (void)f_subs(c, c->r[2], 0x3fu);
    if (COND_NE) { goto L_5ec2fc; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x40u;
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e608u;
    c->r[1] = 0x6u;
    { uint32_t ea = 0x5ec2e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec2e4u; f_3630c4(c);
    c->r[0] = 0x144ca98u;
    { uint32_t ea = 0x5ec2f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    goto L_5ec300;
L_5ec2fc:;
    c->r[0] = 0x0u;
L_5ec300:;
    c->r[6] = c->r[6] | c->r[0];
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec36c; }
    c->r[0] = 0x42u;
    c->r[14] = 0x5ec314u; f_5f3624(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ec36c; }
    c->r[0] = 0x144ca60u;
    { uint32_t ea = 0x5ec328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec34c; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
L_5ec34c:;
    c->r[1] = c->r[1] | 0x80u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e584u;
    c->r[1] = 0x7u;
    { uint32_t ea = 0x5ec364u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec368u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ec36c:;
    c->r[0] = 0x144ca08u;
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5ec380u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc29u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5ec3f4; }
    c->r[0] = 0x42u;
    c->r[14] = 0x5ec398u; f_5f3824(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5ec3f4; }
    c->r[0] = 0x144c9d8u;
    { uint32_t ea = 0x5ec3b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec3d4; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
L_5ec3d4:;
    c->r[1] = c->r[1] | 0x100u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e4fcu;
    c->r[1] = 0x8u;
    { uint32_t ea = 0x5ec3ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec3f0u; f_3630c4(c);
    c->r[0] = 0x1u;
L_5ec3f4:;
    c->r[6] = c->r[6] | c->r[0];
    c->r[0] = 0x144c984u;
    { uint32_t ea = 0x5ec404u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc29u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec46c; }
    c->r[14] = 0x5ec414u; f_5f1b1c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ec46c; }
    c->r[0] = 0x144c960u;
    { uint32_t ea = 0x5ec428u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec44c; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
L_5ec44c:;
    c->r[1] = c->r[1] | 0x200u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e484u;
    c->r[1] = 0x9u;
    { uint32_t ea = 0x5ec464u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec468u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ec46c:;
    c->r[0] = 0x144c908u;
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5ec480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5ec4e4; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec4e4; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x400u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e420u;
    c->r[1] = 0xau;
    { uint32_t ea = 0x5ec4c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec4ccu; f_3630c4(c);
    c->r[0] = 0x144c8acu;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5ec4dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc74u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5ec4e8;
L_5ec4e4:;
    c->r[2] = 0x0u;
L_5ec4e8:;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5ec548; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec548; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x800u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x800u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e3b8u;
    c->r[1] = 0xbu;
    { uint32_t ea = 0x5ec530u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec534u; f_3630c4(c);
    c->r[0] = 0x144c844u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x5ec544u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc74u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ec548:;
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5ec5ac; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec5ac; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1000u;
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e354u;
    c->r[1] = 0xcu;
    { uint32_t ea = 0x5ec594u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec598u; f_3630c4(c);
    c->r[0] = 0x144c7e0u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x5ec5a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ec5b0;
L_5ec5ac:;
    c->r[1] = 0x0u;
L_5ec5b0:;
    { uint32_t ea = c->r[0] + 0xc29u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[6] | c->r[1];
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec624; }
    c->r[0] = 0xdu;
    c->r[1] = 0x8u;
    c->r[14] = 0x5ec5ccu; f_5f3518(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ec624; }
    c->r[0] = 0x144c7a8u;
    { uint32_t ea = 0x5ec5e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec604; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
L_5ec604:;
    c->r[1] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e2ccu;
    c->r[1] = 0xdu;
    { uint32_t ea = 0x5ec61cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec620u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ec624:;
    c->r[0] = 0x144c750u;
    c->r[1] = 0x72cu;
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5ec638u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x54u;
    c->r[14] = 0x5ec644u; f_726dd4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_5ec6a8; }
    c->r[0] = 0x144c724u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ec664u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec6a8; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    c->r[2] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e248u;
    c->r[1] = 0xeu;
    { uint32_t ea = 0x5ec6a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec6a4u; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ec6a8:;
    c->r[0] = 0x144c6c8u;
    c->r[7] = 0x42cu;
    c->r[1] = 0x9caeu;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t ea = 0x5ec6c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ec6c8u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ec720; }
    c->r[0] = 0x144c6acu;
    { uint32_t ea = 0x5ec6dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec720; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x8000u;
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e1d0u;
    c->r[1] = 0xfu;
    { uint32_t ea = 0x5ec718u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec71cu; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ec720:;
    c->r[0] = 0x144c654u;
    c->r[1] = 0x9d12u;
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5ec734u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ec73cu; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5ec7a0; }
    c->r[0] = 0x144c62cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ec75cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec7a0; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    c->r[2] = c->r[2] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e150u;
    c->r[1] = 0x10u;
    { uint32_t ea = 0x5ec798u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec79cu; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ec7a0:;
    c->r[0] = 0x144c5d0u;
    c->r[7] = 0x42cu;
    c->r[1] = 0x9f06u;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t ea = 0x5ec7b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ec7c0u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ec818; }
    c->r[0] = 0x144c5b4u;
    { uint32_t ea = 0x5ec7d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec818; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x20000u;
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e0d8u;
    c->r[1] = 0x11u;
    { uint32_t ea = 0x5ec810u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec814u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ec818:;
    c->r[0] = 0x144c55cu;
    c->r[1] = 0x9d76u;
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5ec82cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ec834u; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5ec898; }
    c->r[0] = 0x144c534u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ec854u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec898; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x40000u;
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144e058u;
    c->r[1] = 0x12u;
    { uint32_t ea = 0x5ec890u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec894u; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ec898:;
    c->r[0] = 0x144c4d8u;
    c->r[7] = 0x42cu;
    c->r[1] = 0x9e3eu;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t ea = 0x5ec8b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ec8b8u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ec910; }
    c->r[0] = 0x144c4bcu;
    { uint32_t ea = 0x5ec8ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec910; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x80000u;
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144dfe0u;
    c->r[1] = 0x13u;
    { uint32_t ea = 0x5ec908u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec90cu; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ec910:;
    c->r[0] = 0x144c464u;
    c->r[1] = 0x9fceu;
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5ec924u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ec92cu; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5ec990; }
    c->r[0] = 0x144c43cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ec94cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ec990; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x100000u;
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144df60u;
    c->r[1] = 0x14u;
    { uint32_t ea = 0x5ec988u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ec98cu; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ec990:;
    c->r[0] = 0x144c3e0u;
    c->r[7] = 0x42cu;
    c->r[1] = 0x9ddau;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t ea = 0x5ec9a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ec9b0u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5eca08; }
    c->r[0] = 0x144c3c4u;
    { uint32_t ea = 0x5ec9c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eca08; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x200000u;
    c->r[2] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144dee8u;
    c->r[1] = 0x15u;
    { uint32_t ea = 0x5eca00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eca04u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5eca08:;
    c->r[0] = 0x144c36cu;
    c->r[1] = 0x9f6au;
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5eca1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5eca24u; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5eca88; }
    c->r[0] = 0x144c344u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5eca44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eca88; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x400000u;
    c->r[2] = c->r[2] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144de68u;
    c->r[1] = 0x16u;
    { uint32_t ea = 0x5eca80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eca84u; f_3630c4(c);
    c->r[2] = 0x1u;
L_5eca88:;
    c->r[0] = 0x144c2e8u;
    c->r[7] = 0x42cu;
    c->r[1] = 0x9ea2u;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t ea = 0x5ecaa0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ecaa8u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ecb00; }
    c->r[0] = 0x144c2ccu;
    { uint32_t ea = 0x5ecabcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ecb00; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x800000u;
    c->r[2] = c->r[2] | 0x800000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144ddf0u;
    c->r[1] = 0x17u;
    { uint32_t ea = 0x5ecaf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ecafcu; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ecb00:;
    c->r[0] = 0x144c274u;
    c->r[1] = 0xa032u;
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5ecb14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ecb1cu; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5ecb80; }
    c->r[0] = 0x144c24cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ecb3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ecb80; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1000000u;
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144dd70u;
    c->r[1] = 0x18u;
    { uint32_t ea = 0x5ecb78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ecb7cu; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ecb80:;
    c->r[0] = 0x144c1f0u;
    c->r[7] = 0x42cu;
    c->r[1] = 0xa096u;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t ea = 0x5ecb98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ecba0u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ecbf8; }
    c->r[0] = 0x144c1d4u;
    { uint32_t ea = 0x5ecbb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ecbf8; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x2000000u;
    c->r[2] = c->r[2] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144dcf8u;
    c->r[1] = 0x19u;
    { uint32_t ea = 0x5ecbf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ecbf4u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ecbf8:;
    c->r[0] = 0x144c17cu;
    c->r[1] = 0xa0fau;
    c->r[5] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5ecc0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ecc14u; f_723da4(c);
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5ecc78; }
    c->r[0] = 0x144c154u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ecc34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ecc78; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x4000000u;
    c->r[2] = c->r[2] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144dc78u;
    c->r[1] = 0x1au;
    { uint32_t ea = 0x5ecc70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ecc74u; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ecc78:;
    c->r[0] = 0x144c100u;
    c->r[9] = c->r[5] | c->r[2];
    { uint32_t ea = 0x5ecc88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2bu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ecd3c; }
    c->r[0] = 0x144bf30u;
    { uint32_t ea = 0x5ecca0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ecca4u; f_394c80(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5ecd3c; }
    c->r[0] = 0x144bf0cu;
    c->r[6] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5eccc4u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_5eccc0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x5eccccu; f_394cbc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = c->r[6] + 0x1u;
    if (COND_NE) { c->r[4] = c->r[4] + 0x1u; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_5eccc0; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[4], 0x82u);
    if (COND_CC) { goto L_5ecd3c; }
    c->r[0] = 0x144c090u;
    { uint32_t ea = 0x5eccf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ecd1c; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
L_5ecd1c:;
    c->r[1] = c->r[1] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144dbb4u;
    c->r[1] = 0x1bu;
    { uint32_t ea = 0x5ecd34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ecd38u; f_3630c4(c);
    c->r[6] = 0x1u;
L_5ecd3c:;
    c->r[0] = 0x144c038u;
    c->r[1] = 0x42cu;
    c->r[6] = c->r[9] | c->r[6];
    { uint32_t ea = 0x5ecd50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x259u;
    c->r[14] = 0x5ecd5cu; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5ecdc0; }
    c->r[0] = 0x144c00cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ecd7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_5ecdc0; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x80000000u;
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144db30u;
    c->r[1] = 0x1fu;
    { uint32_t ea = 0x5ecdb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ecdbcu; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ecdc0:;
    c->r[0] = 0x144bfb0u;
    c->r[7] = c->r[6] | c->r[2];
    c->r[6] = 0x200u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x20000u;
    { uint32_t ea = 0x5ecdd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ece48; }
    c->r[1] = 0x1u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5ecdf0u; f_726348(c);
    (void)f_subs(c, c->r[0], 0x14u);
    if (COND_LT) { goto L_5ece48; }
    c->r[0] = 0x144bf84u;
    { uint32_t ea = 0x5ece04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ece28; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5ece28:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144daa8u;
    c->r[1] = 0x20u;
    { uint32_t ea = 0x5ece40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ece44u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ece48:;
    c->r[0] = 0x144bf2cu;
    c->r[7] = c->r[7] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5ece5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[6];
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_NE) { goto L_5eced0; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eced0; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x2u;
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144da40u;
    c->r[1] = 0x21u;
    { uint32_t ea = 0x5ecea8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eceacu; f_3630c4(c);
    c->r[0] = 0x144beccu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x5ecebcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5eced4;
L_5eced0:;
    c->r[1] = 0x0u;
L_5eced4:;
    c->r[6] = c->r[7] | c->r[1];
    c->r[1] = 0x42cu;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x26du;
    c->r[14] = 0x5ecee8u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ecf40; }
    c->r[0] = 0x144be8cu;
    { uint32_t ea = 0x5ecefcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ecf40; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x4u;
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d9b0u;
    c->r[1] = 0x22u;
    { uint32_t ea = 0x5ecf38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ecf3cu; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ecf40:;
    c->r[0] = 0x144be34u;
    c->r[5] = c->r[6] | c->r[5];
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5ecf54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5ecfcc; }
    c->r[0] = 0xau;
    c->r[1] = 0x7u;
    c->r[14] = 0x5ecf70u; f_5f3518(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5ecfcc; }
    c->r[0] = 0x144be00u;
    { uint32_t ea = 0x5ecf88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ecfac; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5ecfac:;
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d924u;
    c->r[1] = 0x23u;
    { uint32_t ea = 0x5ecfc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ecfc8u; f_3630c4(c);
    c->r[0] = 0x1u;
L_5ecfcc:;
    c->r[7] = c->r[5] | c->r[0];
    c->r[0] = 0x144bdacu;
    { uint32_t ea = 0x5ecfdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed070; }
    c->r[1] = 0x0u;
    c->r[2] = 0x4u;
    c->r[6] = 0x0u;
    c->r[14] = 0x5ecff8u; f_7244c8(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x144bd78u;
    c->r[1] = 0x19u;
    c->r[2] = 0x19u;
    { uint32_t ea = 0x5ed010u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed014u; f_7244c8(c);
    c->r[0] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_CC) { goto L_5ed070; }
    c->r[0] = 0x144bd5cu;
    { uint32_t ea = 0x5ed02cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed050; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5ed050:;
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d880u;
    c->r[1] = 0x24u;
    { uint32_t ea = 0x5ed068u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed06cu; f_3630c4(c);
    c->r[6] = 0x1u;
L_5ed070:;
    c->r[0] = 0x144bd04u;
    c->r[6] = c->r[7] | c->r[6];
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5ed084u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x958u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5ed0fc; }
    { uint32_t ea = c->r[1] + 0xc2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed0fc; }
    { uint32_t ea = c->r[1] + 0xc40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[1] + 0xc40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xc54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[1] + 0xc54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[1] + 0xc2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x144d81cu;
    c->r[1] = 0x2du;
    { uint32_t ea = 0x5ed0ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed0d0u; f_3630c4(c);
    c->r[0] = 0x144bca8u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5ed0e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x958u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ed100;
L_5ed0fc:;
    c->r[2] = 0x0u;
L_5ed100:;
    c->r[0] = c->r[0] & 0x700u;
    c->r[6] = c->r[6] | c->r[2];
    (void)f_subs(c, c->r[0], 0x700u);
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xc2cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5ed15c; }
    { uint32_t ea = c->r[1] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    c->r[2] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[1] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[1] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xc2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x144d7a0u;
    c->r[1] = 0x2eu;
    { uint32_t ea = 0x5ed148u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed14cu; f_3630c4(c);
    c->r[0] = 0x144bc2cu;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x5ed15cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ed15c:;
    { uint32_t ea = c->r[1] + 0xc2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed208; }
    c->r[0] = 0x144ba38u;
    c->r[3] = 0x384bu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x5ed184u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x32u);
    if (COND_CC) { goto L_5ed208; }
    { uint32_t ea = c->r[1] + 0xc40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x200000u;
    { uint32_t ea = c->r[1] + 0xc40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xc54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x200000u;
    { uint32_t ea = c->r[1] + 0xc54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[1] + 0xc2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x144d728u;
    c->r[1] = 0x35u;
    { uint32_t ea = 0x5ed1c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed1c4u; f_3630c4(c);
    c->r[0] = 0x144bbb8u;
    { uint32_t ea = 0x5ed1d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_5ed20c;
L_5ed208:;
    c->r[0] = 0x0u;
L_5ed20c:;
    c->r[6] = c->r[6] | c->r[0];
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed284; }
    c->r[0] = 0x144d6bcu;
    c->r[3] = 0x8f6u;
    c->r[7] = 0x914u;
    { uint32_t ea = 0x5ed22cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + c->r[3];
    c->r[7] = 0x932u;
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + c->r[7];
    (void)f_subs(c, c->r[3], 0x64u);
    if (COND_CC) { goto L_5ed284; }
    { uint32_t ea = c->r[1] + 0xc40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x400000u;
    c->r[3] = c->r[3] | 0x400000u;
    { uint32_t ea = c->r[1] + 0xc40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xc54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x400000u;
    { uint32_t ea = c->r[1] + 0xc54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xc2cu; ST32(ea, c->r[2]); }
    c->r[1] = 0x36u;
    c->r[14] = 0x5ed274u; f_3630c4(c);
    c->r[0] = 0x144bb04u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x5ed284u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ed284:;
    c->r[0] = 0x42cu;
    c->r[6] = c->r[6] | c->r[5];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x1f8u;
    c->r[14] = 0x5ed298u; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5ed2fc; }
    c->r[0] = 0x144bad0u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ed2b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed2fc; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x800000u;
    c->r[2] = c->r[2] | 0x800000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d5f4u;
    c->r[1] = 0x37u;
    { uint32_t ea = 0x5ed2f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed2f8u; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ed2fc:;
    c->r[0] = 0x144ba74u;
    c->r[7] = c->r[6] | c->r[2];
    c->r[6] = 0x400u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x40000u;
    { uint32_t ea = 0x5ed314u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2fu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed384; }
    c->r[1] = 0x2u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5ed32cu; f_726348(c);
    (void)f_subs(c, c->r[0], 0x14u);
    if (COND_LT) { goto L_5ed384; }
    c->r[0] = 0x144ba48u;
    { uint32_t ea = 0x5ed340u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed364; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5ed364:;
    c->r[1] = c->r[1] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d56cu;
    c->r[1] = 0x38u;
    { uint32_t ea = 0x5ed37cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed380u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ed384:;
    c->r[0] = 0x144b9f0u;
    c->r[7] = c->r[7] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5ed398u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[6];
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_NE) { goto L_5ed44c; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed44c; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x2000000u;
    c->r[2] = c->r[2] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d504u;
    c->r[1] = 0x39u;
    { uint32_t ea = 0x5ed3e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed3e8u; f_3630c4(c);
    c->r[0] = 0x144b990u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x5ed3f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ed450;
L_5ed44c:;
    c->r[1] = 0x0u;
L_5ed450:;
    c->r[6] = c->r[7] | c->r[1];
    c->r[1] = 0x42cu;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x27fu;
    c->r[14] = 0x5ed464u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ed4bc; }
    c->r[0] = 0x144b910u;
    { uint32_t ea = 0x5ed478u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed4bc; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x8000000u;
    c->r[2] = c->r[2] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d434u;
    c->r[1] = 0x3bu;
    { uint32_t ea = 0x5ed4b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed4b8u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ed4bc:;
    c->r[0] = 0x144b8b8u;
    c->r[5] = c->r[6] | c->r[5];
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5ed4d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2fu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5ed548; }
    c->r[0] = 0xbu;
    c->r[1] = 0xfu;
    c->r[14] = 0x5ed4ecu; f_5f3518(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5ed548; }
    c->r[0] = 0x144b884u;
    { uint32_t ea = 0x5ed504u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed528; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5ed528:;
    c->r[1] = c->r[1] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d3a8u;
    c->r[1] = 0x3cu;
    { uint32_t ea = 0x5ed540u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed544u; f_3630c4(c);
    c->r[0] = 0x1u;
L_5ed548:;
    c->r[7] = c->r[5] | c->r[0];
    c->r[0] = 0x144b830u;
    { uint32_t ea = 0x5ed558u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2fu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed5e8; }
    c->r[1] = 0x5u;
    c->r[2] = 0xeu;
    c->r[14] = 0x5ed570u; f_7244c8(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x144b800u;
    c->r[1] = 0x1au;
    c->r[2] = 0x1du;
    { uint32_t ea = 0x5ed588u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed58cu; f_7244c8(c);
    c->r[0] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_CC) { goto L_5ed5e8; }
    c->r[0] = 0x144b7e4u;
    { uint32_t ea = 0x5ed5a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed5c8; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5ed5c8:;
    c->r[1] = c->r[1] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d308u;
    c->r[1] = 0x3du;
    { uint32_t ea = 0x5ed5e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed5e4u; f_3630c4(c);
    c->r[6] = 0x1u;
L_5ed5e8:;
    c->r[0] = 0x144b78cu;
    c->r[1] = 0x42cu;
    c->r[6] = c->r[7] | c->r[6];
    { uint32_t ea = 0x5ed5fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x1fcu;
    c->r[14] = 0x5ed608u; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5ed66c; }
    c->r[0] = 0x144b760u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ed628u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed66c; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x40u;
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d284u;
    c->r[1] = 0x46u;
    { uint32_t ea = 0x5ed664u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed668u; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ed66c:;
    c->r[0] = 0x144b704u;
    c->r[7] = c->r[6] | c->r[2];
    c->r[6] = 0x800u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x80000u;
    { uint32_t ea = 0x5ed684u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed6f4; }
    c->r[1] = 0x3u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5ed69cu; f_726348(c);
    (void)f_subs(c, c->r[0], 0x14u);
    if (COND_LT) { goto L_5ed6f4; }
    c->r[0] = 0x144b6d8u;
    { uint32_t ea = 0x5ed6b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed6d4; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5ed6d4:;
    c->r[1] = c->r[1] | 0x80u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d1fcu;
    c->r[1] = 0x47u;
    { uint32_t ea = 0x5ed6ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed6f0u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ed6f4:;
    c->r[0] = 0x144b680u;
    c->r[7] = c->r[7] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5ed708u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[6];
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_NE) { goto L_5ed7c0; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed7c0; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x100u;
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d194u;
    c->r[1] = 0x48u;
    { uint32_t ea = 0x5ed754u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed758u; f_3630c4(c);
    c->r[0] = 0x144b620u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x5ed768u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ed7c4;
L_5ed7c0:;
    c->r[1] = 0x0u;
L_5ed7c4:;
    c->r[6] = c->r[7] | c->r[1];
    c->r[1] = 0x42cu;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x280u;
    c->r[14] = 0x5ed7d8u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ed830; }
    c->r[0] = 0x144b59cu;
    { uint32_t ea = 0x5ed7ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed830; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x400u;
    c->r[2] = c->r[2] | 0x400u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d0c0u;
    c->r[1] = 0x4au;
    { uint32_t ea = 0x5ed828u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed82cu; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ed830:;
    c->r[0] = 0x144b544u;
    c->r[5] = c->r[6] | c->r[5];
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5ed844u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc31u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5ed8bc; }
    c->r[0] = 0x5u;
    c->r[1] = 0xau;
    c->r[14] = 0x5ed860u; f_5f3518(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5ed8bc; }
    c->r[0] = 0x144b510u;
    { uint32_t ea = 0x5ed878u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed89c; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5ed89c:;
    c->r[1] = c->r[1] | 0x800u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144d034u;
    c->r[1] = 0x4bu;
    { uint32_t ea = 0x5ed8b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed8b8u; f_3630c4(c);
    c->r[0] = 0x1u;
L_5ed8bc:;
    c->r[7] = c->r[5] | c->r[0];
    c->r[0] = 0x144b4bcu;
    { uint32_t ea = 0x5ed8ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc31u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed95c; }
    c->r[1] = 0xfu;
    c->r[2] = 0x13u;
    c->r[14] = 0x5ed8e4u; f_7244c8(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x144b48cu;
    c->r[1] = 0x1eu;
    c->r[2] = 0x1eu;
    { uint32_t ea = 0x5ed8fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed900u; f_7244c8(c);
    c->r[0] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_CC) { goto L_5ed95c; }
    c->r[0] = 0x144b470u;
    { uint32_t ea = 0x5ed918u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed93c; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5ed93c:;
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144cf94u;
    c->r[1] = 0x4cu;
    { uint32_t ea = 0x5ed954u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed958u; f_3630c4(c);
    c->r[6] = 0x1u;
L_5ed95c:;
    c->r[0] = 0x144b418u;
    c->r[1] = 0x42cu;
    c->r[6] = c->r[7] | c->r[6];
    { uint32_t ea = 0x5ed970u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x1feu;
    c->r[14] = 0x5ed97cu; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5ed9e0; }
    c->r[0] = 0x144b3ecu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ed99cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ed9e0; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x200000u;
    c->r[2] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144cf10u;
    c->r[1] = 0x55u;
    { uint32_t ea = 0x5ed9d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ed9dcu; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ed9e0:;
    c->r[0] = 0x144b390u;
    c->r[7] = c->r[6] | c->r[2];
    c->r[6] = 0x1000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = 0x5ed9f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc32u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eda68; }
    c->r[1] = 0x4u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5eda10u; f_726348(c);
    (void)f_subs(c, c->r[0], 0x14u);
    if (COND_LT) { goto L_5eda68; }
    c->r[0] = 0x144b364u;
    { uint32_t ea = 0x5eda24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eda48; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5eda48:;
    c->r[1] = c->r[1] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144ce88u;
    c->r[1] = 0x56u;
    { uint32_t ea = 0x5eda60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eda64u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5eda68:;
    c->r[0] = 0x144b30cu;
    c->r[7] = c->r[7] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5eda7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[6];
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_NE) { goto L_5edbd8; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5edbd8; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x800000u;
    c->r[2] = c->r[2] | 0x800000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144ce20u;
    c->r[1] = 0x57u;
    { uint32_t ea = 0x5edac8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5edaccu; f_3630c4(c);
    c->r[0] = 0x144b2acu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x5edadcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5edbdc;
L_5edbd8:;
    c->r[1] = 0x0u;
L_5edbdc:;
    c->r[6] = c->r[7] | c->r[1];
    c->r[1] = 0x42cu;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x281u;
    c->r[14] = 0x5edbf0u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5edc48; }
    c->r[0] = 0x144b184u;
    { uint32_t ea = 0x5edc04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5edc48; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x2000000u;
    c->r[2] = c->r[2] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144cca8u;
    c->r[1] = 0x59u;
    { uint32_t ea = 0x5edc40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5edc44u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5edc48:;
    c->r[0] = 0x144b12cu;
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5edc5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc33u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5edcd4; }
    c->r[0] = 0x8u;
    c->r[1] = 0x5u;
    c->r[14] = 0x5edc78u; f_5f3518(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5edcd4; }
    c->r[0] = 0x144b0f8u;
    { uint32_t ea = 0x5edc90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5edcb4; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5edcb4:;
    c->r[1] = c->r[1] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144cc1cu;
    c->r[1] = 0x5au;
    { uint32_t ea = 0x5edcccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5edcd0u; f_3630c4(c);
    c->r[0] = 0x1u;
L_5edcd4:;
    c->r[6] = c->r[6] | c->r[0];
    c->r[0] = 0x144b0a4u;
    { uint32_t ea = 0x5edce4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc33u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5edd54; }
    c->r[1] = 0x14u;
    c->r[2] = 0x18u;
    c->r[14] = 0x5edcfcu; f_7244c8(c);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_CC) { goto L_5edd54; }
    c->r[0] = 0x144b078u;
    { uint32_t ea = 0x5edd10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5edd34; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5edd34:;
    c->r[1] = c->r[1] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144cb9cu;
    c->r[1] = 0x5bu;
    { uint32_t ea = 0x5edd4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5edd50u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5edd54:;
    c->r[0] = 0x144b01cu;
    c->r[7] = 0x42cu;
    c->r[1] = 0x3edu;
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5edd6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5edd74u; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5eddd8; }
    c->r[0] = 0x144aff4u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5edd94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eddd8; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x40u;
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144cb18u;
    c->r[1] = 0x66u;
    { uint32_t ea = 0x5eddd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eddd4u; f_3630c4(c);
    c->r[2] = 0x1u;
L_5eddd8:;
    c->r[0] = 0x144af9cu;
    c->r[1] = 0x40fu;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t ea = 0x5eddecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5eddf4u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ede4c; }
    c->r[0] = 0x144af80u;
    { uint32_t ea = 0x5ede08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ede4c; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x80u;
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144caa4u;
    c->r[1] = 0x67u;
    { uint32_t ea = 0x5ede44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ede48u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ede4c:;
    c->r[0] = 0x144af28u;
    c->r[1] = 0x42cu;
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5ede60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2c37u;
    c->r[14] = 0x5ede6cu; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5eded0; }
    c->r[0] = 0x144aefcu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ede8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eded0; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x200u;
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144ca20u;
    c->r[1] = 0x69u;
    { uint32_t ea = 0x5edec8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5edeccu; f_3630c4(c);
    c->r[2] = 0x1u;
L_5eded0:;
    c->r[0] = 0x144aea4u;
    c->r[1] = 0x72cu;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t ea = 0x5edee4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x58u;
    c->r[14] = 0x5edef0u; f_726dd4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5edf48; }
    c->r[0] = 0x144ae84u;
    { uint32_t ea = 0x5edf04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5edf48; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x400u;
    c->r[2] = c->r[2] | 0x400u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c9a8u;
    c->r[1] = 0x6au;
    { uint32_t ea = 0x5edf40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5edf44u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5edf48:;
    c->r[0] = 0x144ae28u;
    c->r[7] = 0x42cu;
    c->r[1] = 0xa353u;
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5edf60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5edf68u; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5edfcc; }
    c->r[0] = 0x144ae00u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5edf88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5edfcc; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x800u;
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c924u;
    c->r[1] = 0x6bu;
    { uint32_t ea = 0x5edfc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5edfc8u; f_3630c4(c);
    c->r[2] = 0x1u;
L_5edfcc:;
    c->r[0] = 0x144ada8u;
    c->r[1] = 0xa163u;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t ea = 0x5edfe0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5edfe8u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee040; }
    c->r[0] = 0x144ad8cu;
    { uint32_t ea = 0x5edffcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee040; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x800000u;
    c->r[2] = c->r[2] | 0x800000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c8b0u;
    c->r[1] = 0x77u;
    { uint32_t ea = 0x5ee038u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee03cu; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ee040:;
    c->r[0] = 0x144ad30u;
    c->r[7] = 0x42cu;
    c->r[1] = 0xa1c7u;
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5ee058u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ee060u; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5ee0c4; }
    c->r[0] = 0x144ad08u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ee080u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee0c4; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1000000u;
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c82cu;
    c->r[1] = 0x78u;
    { uint32_t ea = 0x5ee0bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee0c0u; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ee0c4:;
    c->r[0] = 0x144acb0u;
    c->r[1] = 0xa22bu;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t ea = 0x5ee0d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ee0e0u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee138; }
    c->r[0] = 0x144ac94u;
    { uint32_t ea = 0x5ee0f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee138; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x2000000u;
    c->r[2] = c->r[2] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c7b8u;
    c->r[1] = 0x79u;
    { uint32_t ea = 0x5ee130u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee134u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ee138:;
    c->r[0] = 0x144ac38u;
    c->r[7] = 0x42cu;
    c->r[1] = 0xa28fu;
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5ee150u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ee158u; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5ee1bc; }
    c->r[0] = 0x144ac10u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ee178u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee1bc; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x4000000u;
    c->r[2] = c->r[2] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c734u;
    c->r[1] = 0x7au;
    { uint32_t ea = 0x5ee1b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee1b8u; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ee1bc:;
    c->r[0] = 0x144abb8u;
    c->r[1] = 0xa2f3u;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t ea = 0x5ee1d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ee1d8u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee230; }
    c->r[0] = 0x144ab9cu;
    { uint32_t ea = 0x5ee1ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee230; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x8000000u;
    c->r[2] = c->r[2] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c6c0u;
    c->r[1] = 0x7bu;
    { uint32_t ea = 0x5ee228u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee22cu; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ee230:;
    c->r[0] = 0x144ab40u;
    c->r[7] = 0x42cu;
    c->r[1] = 0xa357u;
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t ea = 0x5ee248u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ee250u; f_723da4(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_5ee2b4; }
    c->r[0] = 0x144ab18u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ee270u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee2b4; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x10000000u;
    c->r[2] = c->r[2] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c63cu;
    c->r[1] = 0x7cu;
    { uint32_t ea = 0x5ee2acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee2b0u; f_3630c4(c);
    c->r[2] = 0x1u;
L_5ee2b4:;
    c->r[0] = 0x144aac0u;
    c->r[1] = 0x9cb3u;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t ea = 0x5ee2c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5ee2d0u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee4a4; }
    c->r[0] = 0x144aa9cu;
    c->r[4] = 0x42cu;
    c->r[1] = 0x9d17u;
    { uint32_t ea = 0x5ee2ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5ee2f4u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee4a4; }
    c->r[0] = 0x144aa7cu;
    c->r[1] = 0x9f0bu;
    { uint32_t ea = 0x5ee30cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5ee314u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee4a4; }
    c->r[0] = 0x144aa58u;
    c->r[4] = 0x42cu;
    c->r[1] = 0x9d7bu;
    { uint32_t ea = 0x5ee330u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5ee338u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee4a4; }
    c->r[0] = 0x144aa38u;
    c->r[1] = 0x9e43u;
    { uint32_t ea = 0x5ee350u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5ee358u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee4a4; }
    c->r[0] = 0x144aa14u;
    c->r[4] = 0x42cu;
    c->r[1] = 0x9fd3u;
    { uint32_t ea = 0x5ee374u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5ee37cu; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee4a4; }
    c->r[0] = 0x144a9f4u;
    c->r[1] = 0x9ddfu;
    { uint32_t ea = 0x5ee394u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5ee39cu; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee4a4; }
    c->r[0] = 0x144a9d0u;
    c->r[4] = 0x42cu;
    c->r[1] = 0x9f6fu;
    { uint32_t ea = 0x5ee3b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5ee3c0u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee4a4; }
    c->r[0] = 0x144a9b0u;
    c->r[1] = 0x9ea7u;
    { uint32_t ea = 0x5ee3d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5ee3e0u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee4a4; }
    c->r[0] = 0x144a98cu;
    c->r[4] = 0x42cu;
    c->r[1] = 0xa037u;
    { uint32_t ea = 0x5ee3fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5ee404u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee4a4; }
    c->r[0] = 0x144a96cu;
    c->r[1] = 0xa09bu;
    { uint32_t ea = 0x5ee41cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5ee424u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee4a4; }
    c->r[0] = 0x144a94cu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5ee43cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0xa0ffu;
    c->r[14] = 0x5ee448u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee4a4; }
    c->r[0] = 0x144a92cu;
    { uint32_t ea = 0x5ee45cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0x3f800000u;
    (void)f_subs(c, c->r[2], 0x1f800000u);
    if (COND_NE) { goto L_5ee4a4; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x20000000u;
    c->r[2] = c->r[2] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c44cu;
    c->r[1] = 0x7du;
    { uint32_t ea = 0x5ee49cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee4a0u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ee4a4:;
    c->r[0] = 0x144a8d0u;
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5ee4b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc37u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x0u;
    if (COND_NE) { goto L_5ee530; }
    c->r[1] = 0x18u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5ee4d4u; f_726348(c);
    (void)f_subs(c, c->r[0], 0x14u);
    c->r[1] = 0x0u;
    if (COND_LT) { goto L_5ee530; }
    c->r[0] = 0x144a89cu;
    { uint32_t ea = 0x5ee4ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee510; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
L_5ee510:;
    c->r[1] = c->r[1] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c3c0u;
    c->r[1] = 0x7eu;
    { uint32_t ea = 0x5ee528u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee52cu; f_3630c4(c);
    c->r[1] = 0x1u;
L_5ee530:;
    c->r[0] = 0x144a848u;
    c->r[6] = c->r[6] | c->r[1];
    { uint32_t ea = 0x5ee540u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc35u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee5b8; }
    c->r[0] = 0x144a67cu;
    c->r[1] = 0xdu;
    { uint32_t ea = 0x5ee55cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee560u; f_760418(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ee5b8; }
    c->r[0] = 0x144a814u;
    { uint32_t ea = 0x5ee574u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee598; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
L_5ee598:;
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c338u;
    c->r[1] = 0x6cu;
    { uint32_t ea = 0x5ee5b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee5b4u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ee5b8:;
    c->r[0] = 0x144a7bcu;
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5ee5ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5ee644; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee644; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c2d4u;
    c->r[1] = 0x6du;
    { uint32_t ea = 0x5ee614u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee618u; f_3630c4(c);
    c->r[0] = 0x144a760u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5ee628u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc74u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5ee648;
L_5ee644:;
    c->r[2] = 0x0u;
L_5ee648:;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5ee6a8; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee6a8; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c258u;
    c->r[1] = 0x6eu;
    { uint32_t ea = 0x5ee690u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee694u; f_3630c4(c);
    c->r[0] = 0x144a6e4u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x5ee6a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc74u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ee6a8:;
    c->r[1] = c->r[1] & 0x30000000u;
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[1], 0x30000000u);
    if (COND_NE) { goto L_5ee71c; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee71c; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x8000u;
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c1f0u;
    c->r[1] = 0x6fu;
    { uint32_t ea = 0x5ee6f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee6fcu; f_3630c4(c);
    c->r[0] = 0x144a67cu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x5ee70cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ee720;
L_5ee71c:;
    c->r[1] = 0x0u;
L_5ee720:;
    c->r[6] = c->r[6] | c->r[1];
    { uint32_t ea = c->r[0] + 0xc78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0xcu;
    (void)f_subs(c, c->r[2], 0xcu);
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5ee784; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c17cu;
    c->r[1] = 0x70u;
    { uint32_t ea = 0x5ee76cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee770u; f_3630c4(c);
    c->r[0] = 0x144a608u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x5ee780u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc78u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ee784:;
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5ee81c; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee81c; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c118u;
    c->r[1] = 0x71u;
    { uint32_t ea = 0x5ee7d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee7d4u; f_3630c4(c);
    c->r[0] = 0x144a5a4u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5ee7e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc78u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5ee820;
L_5ee81c:;
    c->r[2] = 0x0u;
L_5ee820:;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5ee87c; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee87c; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x40000u;
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144c080u;
    c->r[1] = 0x72u;
    { uint32_t ea = 0x5ee868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee86cu; f_3630c4(c);
    c->r[0] = 0x144a50cu;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x5ee87cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ee87c:;
    { uint32_t ea = c->r[0] + 0xc36u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5ee8f8; }
    c->r[0] = 0x4fu;
    c->r[14] = 0x5ee89cu; f_5f3624(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5ee8f8; }
    c->r[0] = 0x144a4d4u;
    { uint32_t ea = 0x5ee8b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee8d8; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
L_5ee8d8:;
    c->r[1] = c->r[1] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144bff8u;
    c->r[1] = 0x73u;
    { uint32_t ea = 0x5ee8f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee8f4u; f_3630c4(c);
    c->r[0] = 0x1u;
L_5ee8f8:;
    c->r[6] = c->r[6] | c->r[0];
    c->r[0] = 0x144a480u;
    { uint32_t ea = 0x5ee908u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc36u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee974; }
    c->r[0] = 0x4fu;
    c->r[14] = 0x5ee91cu; f_5f3824(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ee974; }
    c->r[0] = 0x144a458u;
    { uint32_t ea = 0x5ee930u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee954; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
L_5ee954:;
    c->r[1] = c->r[1] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144bf7cu;
    c->r[1] = 0x74u;
    { uint32_t ea = 0x5ee96cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee970u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ee974:;
    c->r[0] = 0x144a400u;
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5ee988u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5ee9f4; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ee9f4; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144bf18u;
    c->r[1] = 0x75u;
    { uint32_t ea = 0x5ee9d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ee9d4u; f_3630c4(c);
    c->r[0] = 0x144a3a4u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5ee9e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc78u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5ee9f8;
L_5ee9f4:;
    c->r[2] = 0x0u;
L_5ee9f8:;
    c->r[6] = c->r[6] | c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5eea48; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eea48; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x400000u;
    c->r[2] = c->r[2] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144bea8u;
    c->r[1] = 0x76u;
    { uint32_t ea = 0x5eea40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eea44u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5eea48:;
    c->r[4] = c->r[6] | c->r[5];
    c->r[14] = 0x5eea50u; f_5f1da4(c);
    c->r[0] = c->r[4] | c->r[0];
    { uint32_t ea = c->r[8] + 0x1du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
