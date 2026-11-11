#include "cpu.h"
#include "neon_rt.h"
void f_27bab48(Cpu *c);
void f_27c73c8(Cpu *c);
void f_27e3894(Cpu *c);
void f_283b27c(Cpu *c);
void f_283b288(Cpu *c);
void f_284f5c8(Cpu *c);
void f_27dac98(Cpu *restrict c) {
    FN_ENTER(0x27dac98u);
L_27dac98:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[10] = c->r[0];
    c->r[4] = c->r[2];
    c->r[0] = c->r[1] - c->r[10];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_27dd054; }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x61u;
    (void)f_subs(c, c->r[0], 0x15u);
    if (COND_HI) { goto L_27dd054; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x27dacd4u + 0x24u;
    c->r[9] = 0x3c72u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x3d72u;
    c->r[8] = 0x5555u;
    c->r[7] = 0xaaaau;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x3c0000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x3d0000u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x5550000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaa0000u;
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x27dad50u: goto L_27dad50; case 0x27dae78u: goto L_27dae78; case 0x27daec8u: goto L_27daec8; case 0x27db010u: goto L_27db010; case 0x27db0a8u: goto L_27db0a8; case 0x27db1e8u: goto L_27db1e8; case 0x27db2b4u: goto L_27db2b4; case 0x27db344u: goto L_27db344; case 0x27db3e4u: goto L_27db3e4; case 0x27db50cu: goto L_27db50c; case 0x27db618u: goto L_27db618; case 0x27db790u: goto L_27db790; case 0x27db8c8u: goto L_27db8c8; case 0x27db9a4u: goto L_27db9a4; case 0x27dd054u: goto L_27dd054; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27dad50:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x4eu;
    (void)f_subs(c, c->r[0], 0x20u);
    if (COND_HI) { goto L_27dd054; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27dad6cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27dadf4u: goto L_27dadf4; case 0x27dc450u: goto L_27dc450; case 0x27dc6f8u: goto L_27dc6f8; case 0x27dc77cu: goto L_27dc77c; case 0x27dd054u: goto L_27dd054; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27dadf4:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dc114; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2672u;
    goto L_27dcfe4;
L_27dae78:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_27dd054; }
    c->r[7] = c->r[10] + 0x2u;
    c->r[2] = c->r[4];
    c->r[0] = c->r[7];
    c->r[14] = 0x27dae98u; f_27e3894(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27dd054; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27dd054; }
    c->r[1] = 0x366b31u;
    c->r[0] = c->r[0] - 0x18u;
    c->r[3] = 0x9u;
    c->r[2] = 0x27daec8u + c->r[1];
    goto L_27dc388;
L_27daec8:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x4cu;
    (void)f_subs(c, c->r[0], 0x28u);
    if (COND_HI) { goto L_27dd054; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27daee4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27daf8cu: goto L_27daf8c; case 0x27dcce0u: goto L_27dcce0; case 0x27dcd98u: goto L_27dcd98; case 0x27dce20u: goto L_27dce20; case 0x27dced8u: goto L_27dced8; case 0x27dcf64u: goto L_27dcf64; case 0x27dd054u: goto L_27dd054; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27daf8c:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27de19c; }
    c->r[2] = 0x14u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xef00u;
    goto L_27dcfe4;
L_27db010:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_EQ) { goto L_27dba7c; }
    (void)f_subs(c, c->r[0], 0x65u);
    if (COND_NE) { goto L_27dd054; }
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dc194; }
    c->r[2] = 0x14u;
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[6] + 0x100u;
    goto L_27dcfe4;
L_27db0a8:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x4du;
    (void)f_subs(c, c->r[0], 0x26u);
    if (COND_HI) { goto L_27dd054; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27db0c4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27db164u: goto L_27db164; case 0x27dbd90u: goto L_27dbd90; case 0x27dbe18u: goto L_27dbe18; case 0x27dbf6cu: goto L_27dbf6c; case 0x27dd054u: goto L_27dd054; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27db164:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd5c8; }
    c->r[2] = 0x14u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xe900u;
    goto L_27dcfe4;
L_27db1e8:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x78u);
    if (COND_NE) { goto L_27dd054; }
    c->r[0] = 0x6fu;
    c->r[9] = 0x5b72u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x5d0000u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27dcf18; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3450; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27db280; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27df044; }
L_27db280:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27dd2e8; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27db2b0u; f_283b27c(c);
    goto L_27dd2f0;
L_27db2b4:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x75u);
    if (COND_NE) { goto L_27dd054; }
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dbb84; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x3f72u;
    goto L_27dcfe4;
L_27db344:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4fu);
    if (COND_EQ) { goto L_27dbc04; }
    (void)f_subs(c, c->r[0], 0x71u);
    if (COND_EQ) { goto L_27dbb00; }
    (void)f_subs(c, c->r[0], 0x6fu);
    if (COND_NE) { goto L_27dd054; }
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd164; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x5e72u;
    goto L_27dcfe4;
L_27db3e4:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x56u;
    (void)f_subs(c, c->r[0], 0x20u);
    if (COND_HI) { goto L_27dd054; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27db400u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27db488u: goto L_27db488; case 0x27dc294u: goto L_27dc294; case 0x27dc510u: goto L_27dc510; case 0x27dc800u: goto L_27dc800; case 0x27dc998u: goto L_27dc998; case 0x27dd054u: goto L_27dd054; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27db488:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd874; }
    c->r[2] = 0x14u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xf300u;
    goto L_27dcfe4;
L_27db50c:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x6cu;
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27dd054; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x27db528u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x27db558u: goto L_27db558; case 0x27dbee8u: goto L_27dbee8; case 0x27dc02cu: goto L_27dc02c; case 0x27dc0b0u: goto L_27dc0b0; case 0x27dd054u: goto L_27dd054; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27db558:;
    c->r[0] = 0x6fu;
    c->r[9] = 0x2872u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x290000u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27dcf18; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e34a8; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27db5e4; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e30b0; }
L_27db5e4:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27df8ec; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27db614u; f_283b27c(c);
    goto L_27df8f4;
L_27db618:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x53u;
    (void)f_subs(c, c->r[0], 0x21u);
    if (COND_HI) { goto L_27dd054; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x27db634u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x27db6c0u: goto L_27db6c0; case 0x27dc34cu: goto L_27dc34c; case 0x27dc568u: goto L_27dc568; case 0x27dc85cu: goto L_27dc85c; case 0x27dca20u: goto L_27dca20; case 0x27dd054u: goto L_27dd054; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27db6c0:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27db6c8u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3dcba4u;
    c->r[1] = 0x3cu;
    c->r[0] = 0x27db6dcu + c->r[0];
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[1]); }
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = 0x3du;
    { uint32_t ea = c->r[6] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xau; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xbu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27dcd34; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e34e0; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27db75c; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e32d0; }
L_27db75c:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e0350; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27db78cu; f_283b27c(c);
    goto L_27e0358;
L_27db790:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x49u;
    (void)f_subs(c, c->r[0], 0x24u);
    if (COND_HI) { goto L_27dd054; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27db7acu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27db844u: goto L_27db844; case 0x27dc398u: goto L_27dc398; case 0x27dc5ecu: goto L_27dc5ec; case 0x27dc914u: goto L_27dc914; case 0x27dcaa4u: goto L_27dcaa4; case 0x27dd054u: goto L_27dd054; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27db844:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd8f4; }
    c->r[2] = 0x14u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xf100u;
    goto L_27dcfe4;
L_27db8c8:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x52u);
    if (COND_EQ) { goto L_27dbd0c; }
    (void)f_subs(c, c->r[0], 0x72u);
    if (COND_EQ) { goto L_27dbc88; }
    (void)f_subs(c, c->r[0], 0x6fu);
    if (COND_NE) { goto L_27dd054; }
    c->r[0] = 0x6fu;
    c->r[9] = 0x7c72u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x7c0000u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27dcf18; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3478; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27db970; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e2ff0; }
L_27db970:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27dee84; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27db9a0u; f_283b27c(c);
    goto L_27dee8c;
L_27db9a4:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x61u;
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_HI) { goto L_27dd054; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27db9c0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27dba20u: goto L_27dba20; case 0x27dc674u: goto L_27dc674; case 0x27dcb64u: goto L_27dcb64; case 0x27dcbe8u: goto L_27dcbe8; case 0x27dcc6cu: goto L_27dcc6c; case 0x27dd054u: goto L_27dd054; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27dba20:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27dba28u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3dc8a8u;
    c->r[0] = 0x27dba38u + c->r[0];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = c->r[0] + 0x6u;
    { uint32_t ea = c->r[0]; c->v.d[17] = LD64(ea + 0u); }
    c->r[0] = c->r[6] + 0x6u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dde7c; }
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xeu;
    goto L_27dcd40;
L_27dba7c:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dc214; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x3e72u;
    goto L_27dcfe4;
L_27dbb00:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd060; }
    c->r[2] = 0x14u;
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[6]); }
    goto L_27dcfe8;
L_27dbb84:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3458; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dbbd0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27df054; }
L_27dbbd0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27dd418; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dbc00u; f_283b27c(c);
    goto L_27dd420;
L_27dbc04:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd0e4; }
    c->r[2] = 0x14u;
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[6] + 0x2100u;
    goto L_27dcfe4;
L_27dbc88:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd1e4; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x7c72u;
    goto L_27dcfe4;
L_27dbd0c:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd264; }
    c->r[2] = 0x14u;
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[6] + 0x3f00u;
    goto L_27dcfe4;
L_27dbd90:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd548; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2572u;
    goto L_27dcfe4;
L_27dbe18:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27dbe20u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3dc5acu;
    c->r[1] = 0x3eu;
    c->r[0] = 0x27dbe34u + c->r[0];
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[1]); }
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = 0x3du;
    { uint32_t ea = c->r[6] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xau; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xbu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27dcd34; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e34b0; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dbeb4; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3080; }
L_27dbeb4:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27df5a8; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dbee4u; f_283b27c(c);
    goto L_27df5b0;
L_27dbee8:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd648; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x7e72u;
    goto L_27dcfe4;
L_27dbf6c:;
    c->r[0] = 0x6fu;
    c->r[9] = 0x3e72u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x3e0000u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27dcf18; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e34b8; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dbff8; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e30a0; }
L_27dbff8:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27df7c0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dc028u; f_283b27c(c);
    goto L_27df7c8;
L_27dc02c:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd6c8; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2c72u;
    goto L_27dcfe4;
L_27dc0b0:;
    c->r[5] = c->r[4];
    c->r[0] = 0x0u;
    c->r[7] = c->r[10] + 0x2u;
    { uint32_t ea = c->r[5] + 0x3fu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[5] + 0x3fu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x27dc0d0u; f_27bab48(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[5] + 0x3fu; ST8(ea, c->r[4]); }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27dd054; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27dd054; }
    c->r[1] = 0x3658f5u;
    c->r[0] = c->r[0] - 0x18u;
    c->r[3] = 0x9u;
    c->r[2] = 0x27dc104u + c->r[1];
    c->r[1] = 0x0u;
    c->r[14] = 0x27dc108u; f_27c73c8(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x3cu; ST8(ea, c->r[0]); }
    goto L_27dc390;
L_27dc114:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3460; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dc160; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e1760; }
L_27dc160:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27de31c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dc190u; f_283b27c(c);
    goto L_27de324;
L_27dc194:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3468; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dc1e0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e1780; }
L_27dc1e0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27de44c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dc210u; f_283b27c(c);
    goto L_27de454;
L_27dc214:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3470; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dc260; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e1790; }
L_27dc260:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27de57c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dc290u; f_283b27c(c);
    goto L_27de584;
L_27dc294:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27dc94c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e34e8; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dc318; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e30d0; }
L_27dc318:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27dffb4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dc348u; f_283b27c(c);
    goto L_27dffbc;
L_27dc34c:;
    c->r[7] = c->r[10] + 0x2u;
    c->r[2] = c->r[4];
    c->r[0] = c->r[7];
    c->r[14] = 0x27dc35cu; f_27e3894(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27dd054; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27dd054; }
    c->r[1] = 0x365677u;
    c->r[0] = c->r[0] - 0x18u;
    c->r[3] = 0xbu;
    c->r[2] = 0x27dc38cu + c->r[1];
L_27dc388:;
    c->r[1] = 0x0u;
    c->r[14] = 0x27dc390u; f_27c73c8(c);
L_27dc390:;
    c->r[10] = c->r[6];
    goto L_27dd054;
L_27dc398:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27dc6ac; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e34f0; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dc41c; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e30e0; }
L_27dc41c:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e00e4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dc44cu; f_283b27c(c);
    goto L_27e00ec;
L_27dc450:;
    c->r[0] = 0x6fu;
    c->r[9] = 0x2672u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x260000u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27dcf18; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e34f8; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dc4dc; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e30f0; }
L_27dc4dc:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e0214; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dc50cu; f_283b27c(c);
    goto L_27e30f8;
L_27dc510:;
    c->r[0] = 0x20u;
    c->r[14] = 0x27dc518u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3dbc7cu;
    c->r[1] = 0x5du;
    c->r[0] = 0x27dc52cu + c->r[0];
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x11u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd974; }
    c->r[2] = 0x21u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x11u;
    goto L_27dcd40;
L_27dc568:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dd9f4; }
    c->r[2] = 0x14u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0x10000u;
    goto L_27dcfe4;
L_27dc5ec:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dda74; }
    c->r[2] = 0x14u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xee00u;
    goto L_27dcfe4;
L_27dc674:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27ddaf4; }
L_27dc6ac:;
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2d72u;
    goto L_27dcfe4;
L_27dc6f8:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27ddb74; }
    c->r[2] = 0x14u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xea00u;
    goto L_27dcfe4;
L_27dc77c:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27ddbf4; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x3d72u;
    goto L_27dcfe4;
L_27dc800:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27dc808u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3db9b8u;
    c->r[0] = 0x27dc818u + c->r[0];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = c->r[0] + 0x7u;
    { uint32_t ea = c->r[0]; c->v.d[17] = LD64(ea + 0u); }
    c->r[0] = c->r[6] + 0x7u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xfu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27ddc7c; }
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xfu;
    goto L_27dcd40;
L_27dc85c:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27dcf18; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3500; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dc8e0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3360; }
L_27dc8e0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e0d28; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dc910u; f_283b27c(c);
    goto L_27e0d30;
L_27dc914:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27ddcfc; }
L_27dc94c:;
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2a72u;
    goto L_27dcfe4;
L_27dc998:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27ddd7c; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2f72u;
    goto L_27dcfe4;
L_27dca20:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27dddfc; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x3c72u;
    goto L_27dcfe4;
L_27dcaa4:;
    c->r[0] = 0x6fu;
    c->r[9] = 0x2d72u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27dcf18; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3508; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dcb30; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e33a0; }
L_27dcb30:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e11e4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dcb60u; f_283b27c(c);
    goto L_27e11ec;
L_27dcb64:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27ddefc; }
    c->r[2] = 0x14u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xe500u;
    goto L_27dcfe4;
L_27dcbe8:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27ddf7c; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2172u;
    goto L_27dcfe4;
L_27dcc6c:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27dcc74u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3db688u;
    c->r[1] = 0x6eu;
    c->r[0] = 0x27dcc88u + c->r[0];
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = 0x6e20u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x77650000u;
    { uint32_t ea = c->r[1] + 0x8u; ST8(ea, c->r[0]); c->r[1] = ea; }
    c->r[0] = 0x77u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x65u;
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27ddffc; }
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xcu;
    goto L_27dcd40;
L_27dcce0:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27dcce8u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3db654u;
    c->r[1] = 0x3eu;
    c->r[0] = 0x27dccfcu + c->r[0];
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[1]); }
    c->r[1] = 0x2du;
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = 0x2au;
    { uint32_t ea = c->r[6] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xau; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xbu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27de09c; }
L_27dcd34:;
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xbu;
L_27dcd40:;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    goto L_27dd044;
L_27dcd98:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27de11c; }
    c->r[2] = 0x14u;
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[6] + 0xf000u;
    goto L_27dcfe4;
L_27dce20:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27dcf9c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3590; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dcea4; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3420; }
L_27dcea4:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e274c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dced4u; f_283b27c(c);
    goto L_27e2754;
L_27dced8:;
    c->r[0] = 0x6fu;
    c->r[9] = 0x2b72u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x2b0000u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27de21c; }
L_27dcf18:;
    c->r[2] = 0x14u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    goto L_27dcfe8;
L_27dcf64:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7461u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x706fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72650000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27de29c; }
L_27dcf9c:;
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2b72u;
L_27dcfe4:;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
L_27dcfe8:;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_27dd044:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[10] + 0x2u;
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_27dd054:;
    c->r[0] = c->r[10];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27dd060:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3480; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dd0ac; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e2fa0; }
L_27dd0ac:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27de898; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dd0dcu; f_283b27c(c);
    goto L_27de8a0;
L_27dd0e4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3488; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dd130; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e2fb0; }
L_27dd130:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27de9c4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dd160u; f_283b27c(c);
    goto L_27de9cc;
L_27dd164:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3490; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dd1b0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e2fc0; }
L_27dd1b0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27deaf4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dd1e0u; f_283b27c(c);
    goto L_27deafc;
L_27dd1e4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3498; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dd230; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e2fd0; }
L_27dd230:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27dec24; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dd260u; f_283b27c(c);
    goto L_27dec2c;
L_27dd264:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e34a0; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dd2b0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e2fe0; }
L_27dd2b0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27ded54; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dd2e0u; f_283b27c(c);
    goto L_27ded5c;
L_27dd2e8:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27dd2f0:;
    c->r[12] = c->r[4];
L_27dd2f4:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27dd748; }
L_27dd3c4:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27dd3c4; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27dd74c;
L_27dd418:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27dd420:;
    c->r[12] = c->r[4];
L_27dd424:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x3f72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27dd7e0; }
L_27dd4f8:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27dd4f8; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27dd7e4;
L_27dd548:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e34c0; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dd594; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3060; }
L_27dd594:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27df348; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dd5c4u; f_283b27c(c);
    goto L_27df350;
L_27dd5c8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e34c8; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dd614; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3070; }
L_27dd614:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27df478; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dd644u; f_283b27c(c);
    goto L_27df480;
L_27dd648:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e34d0; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dd694; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3090; }
L_27dd694:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27df690; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dd6c4u; f_283b27c(c);
    goto L_27df698;
L_27dd6c8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e34d8; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dd714; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e30c0; }
L_27dd714:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27dfa18; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dd744u; f_283b27c(c);
    goto L_27dfa20;
L_27dd748:;
    c->r[6] = c->r[7];
L_27dd74c:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27dd798; }
L_27dd760:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dd774; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dd774u; f_283b288(c);
L_27dd774:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dd78c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dd78cu; f_283b288(c);
L_27dd78c:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27dd760; }
L_27dd798:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27de084; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27de07c; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27de07c; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27de084; }
    goto L_27e32a4;
L_27dd7e0:;
    c->r[6] = c->r[7];
L_27dd7e4:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27dd830; }
L_27dd7f8:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dd80c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dd80cu; f_283b288(c);
L_27dd80c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dd824; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dd824u; f_283b288(c);
L_27dd824:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27dd7f8; }
L_27dd830:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27de094; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27de08c; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27de08c; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27de094; }
    goto L_27e32a4;
L_27dd874:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3510; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dd8c0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e32c0; }
L_27dd8c0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e0220; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dd8f0u; f_283b27c(c);
    goto L_27e0228;
L_27dd8f4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3518; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dd940; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e32e0; }
L_27dd940:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e0438; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dd970u; f_283b27c(c);
    goto L_27e0440;
L_27dd974:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3520; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dd9c0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e32f0; }
L_27dd9c0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e0568; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dd9f0u; f_283b27c(c);
    goto L_27e0570;
L_27dd9f4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3528; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dda40; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3300; }
L_27dda40:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e0650; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dda70u; f_283b27c(c);
    goto L_27e0658;
L_27dda74:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3530; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27ddac0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3310; }
L_27ddac0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e0780; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27ddaf0u; f_283b27c(c);
    goto L_27e0788;
L_27ddaf4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3538; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27ddb40; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3320; }
L_27ddb40:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e08b0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27ddb70u; f_283b27c(c);
    goto L_27e08b8;
L_27ddb74:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3540; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27ddbc0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3330; }
L_27ddbc0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e09e0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27ddbf0u; f_283b27c(c);
    goto L_27e09e8;
L_27ddbf4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3548; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27ddc40; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3340; }
L_27ddc40:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e0b10; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27ddc70u; f_283b27c(c);
    goto L_27e0b18;
L_27ddc7c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3550; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27ddcc8; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3350; }
L_27ddcc8:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e0c40; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27ddcf8u; f_283b27c(c);
    goto L_27e0c48;
L_27ddcfc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3558; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27ddd48; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3370; }
L_27ddd48:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e0e54; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27ddd78u; f_283b27c(c);
    goto L_27e0e5c;
L_27ddd7c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3560; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dddc8; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3380; }
L_27dddc8:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e0f84; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dddf8u; f_283b27c(c);
    goto L_27e0f8c;
L_27dddfc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3568; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27dde48; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3390; }
L_27dde48:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e10b4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27dde78u; f_283b27c(c);
    goto L_27e10bc;
L_27dde7c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3570; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27ddec8; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e33b0; }
L_27ddec8:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e1310; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27ddef8u; f_283b27c(c);
    goto L_27e1318;
L_27ddefc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3578; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27ddf48; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e33c0; }
L_27ddf48:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e13f8; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27ddf78u; f_283b27c(c);
    goto L_27e1400;
L_27ddf7c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3580; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27ddfc8; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e33d0; }
L_27ddfc8:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e1528; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27ddff8u; f_283b27c(c);
    goto L_27e1530;
L_27ddffc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3588; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27de048; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e33e0; }
L_27de048:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e1658; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27de078u; f_283b27c(c);
    goto L_27e1660;
L_27de07c:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27de084u; f_283b288(c);
L_27de084:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27de08c:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27de094u; f_283b288(c);
L_27de094:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27de09c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3598; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27de0e8; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e33f0; }
L_27de0e8:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e2404; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27de118u; f_283b27c(c);
    goto L_27e240c;
L_27de11c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e35a0; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27de168; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3400; }
L_27de168:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e24ec; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27de198u; f_283b27c(c);
    goto L_27e24f4;
L_27de19c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e35a8; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27de1e8; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3410; }
L_27de1e8:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e261c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27de218u; f_283b27c(c);
    goto L_27e2624;
L_27de21c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e35b0; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27de268; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3430; }
L_27de268:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e287c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27de298u; f_283b27c(c);
    goto L_27e2884;
L_27de29c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e35b8; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27de2e8; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3440; }
L_27de2e8:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e29a8; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27de318u; f_283b27c(c);
    goto L_27e29b0;
L_27de31c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27de324:;
    c->r[12] = c->r[4];
L_27de328:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2672u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27de6ac; }
L_27de3fc:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27de3fc; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27de6b0;
L_27de44c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27de454:;
    c->r[12] = c->r[4];
L_27de458:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[6] + 0x100u;
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27de740; }
L_27de52c:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27de52c; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27de744;
L_27de57c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27de584:;
    c->r[12] = c->r[4];
L_27de588:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x3e72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27de7d4; }
L_27de65c:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27de65c; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27de7d8;
L_27de6ac:;
    c->r[6] = c->r[7];
L_27de6b0:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27de6fc; }
L_27de6c4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27de6d8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27de6d8u; f_283b288(c);
L_27de6d8:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27de6f0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27de6f0u; f_283b288(c);
L_27de6f0:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27de6c4; }
L_27de6fc:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27de870; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27de868; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27de868; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27de870; }
    goto L_27e32a4;
L_27de740:;
    c->r[6] = c->r[7];
L_27de744:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27de790; }
L_27de758:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27de76c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27de76cu; f_283b288(c);
L_27de76c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27de784; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27de784u; f_283b288(c);
L_27de784:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27de758; }
L_27de790:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27de880; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27de878; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27de878; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27de880; }
    goto L_27e32a4;
L_27de7d4:;
    c->r[6] = c->r[7];
L_27de7d8:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27de824; }
L_27de7ec:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27de800; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27de800u; f_283b288(c);
L_27de800:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27de818; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27de818u; f_283b288(c);
L_27de818:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27de7ec; }
L_27de824:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27de890; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27de888; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27de888; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27de890; }
    goto L_27e32a4;
L_27de868:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27de870u; f_283b288(c);
L_27de870:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27de878:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27de880u; f_283b288(c);
L_27de880:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27de888:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27de890u; f_283b288(c);
L_27de890:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27de898:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27de8a0:;
    c->r[12] = c->r[4];
L_27de8a4:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27defb0; }
L_27de974:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27de974; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27defb4;
L_27de9c4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27de9cc:;
    c->r[12] = c->r[4];
L_27de9d0:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[6] + 0x2100u;
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27df064; }
L_27deaa4:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27deaa4; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27df068;
L_27deaf4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27deafc:;
    c->r[12] = c->r[4];
L_27deb00:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x5e72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27df0f8; }
L_27debd4:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27debd4; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27df0fc;
L_27dec24:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27dec2c:;
    c->r[12] = c->r[4];
L_27dec30:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x7c72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27df18c; }
L_27ded04:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27ded04; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27df190;
L_27ded54:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27ded5c:;
    c->r[12] = c->r[4];
L_27ded60:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[6] + 0x3f00u;
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27df220; }
L_27dee34:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27dee34; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27df224;
L_27dee84:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27dee8c:;
    c->r[12] = c->r[4];
L_27dee90:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27df2b4; }
L_27def60:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27def60; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27df2b8;
L_27defb0:;
    c->r[6] = c->r[7];
L_27defb4:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27df000; }
L_27defc8:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27defdc; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27defdcu; f_283b288(c);
L_27defdc:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27deff4; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27deff4u; f_283b288(c);
L_27deff4:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27defc8; }
L_27df000:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27dfb50; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27dfb48; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27dfb48; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27dfb50; }
    goto L_27e32a4;
L_27df044:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27dd2f4;
L_27df054:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27dd424;
L_27df064:;
    c->r[6] = c->r[7];
L_27df068:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27df0b4; }
L_27df07c:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27df090; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27df090u; f_283b288(c);
L_27df090:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27df0a8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27df0a8u; f_283b288(c);
L_27df0a8:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27df07c; }
L_27df0b4:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27dfb60; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27dfb58; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27dfb58; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27dfb60; }
    goto L_27e32a4;
L_27df0f8:;
    c->r[6] = c->r[7];
L_27df0fc:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27df148; }
L_27df110:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27df124; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27df124u; f_283b288(c);
L_27df124:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27df13c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27df13cu; f_283b288(c);
L_27df13c:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27df110; }
L_27df148:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27dfb70; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27dfb68; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27dfb68; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27dfb70; }
    goto L_27e32a4;
L_27df18c:;
    c->r[6] = c->r[7];
L_27df190:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27df1dc; }
L_27df1a4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27df1b8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27df1b8u; f_283b288(c);
L_27df1b8:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27df1d0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27df1d0u; f_283b288(c);
L_27df1d0:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27df1a4; }
L_27df1dc:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27dfb80; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27dfb78; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27dfb78; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27dfb80; }
    goto L_27e32a4;
L_27df220:;
    c->r[6] = c->r[7];
L_27df224:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27df270; }
L_27df238:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27df24c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27df24cu; f_283b288(c);
L_27df24c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27df264; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27df264u; f_283b288(c);
L_27df264:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27df238; }
L_27df270:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27dfb90; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27dfb88; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27dfb88; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27dfb90; }
    goto L_27e32a4;
L_27df2b4:;
    c->r[6] = c->r[7];
L_27df2b8:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27df304; }
L_27df2cc:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27df2e0; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27df2e0u; f_283b288(c);
L_27df2e0:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27df2f8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27df2f8u; f_283b288(c);
L_27df2f8:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27df2cc; }
L_27df304:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27dfba0; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27dfb98; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27dfb98; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27dfba0; }
    goto L_27e32a4;
L_27df348:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27df350:;
    c->r[12] = c->r[4];
L_27df354:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2572u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27dfba8; }
L_27df428:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27df428; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27dfbac;
L_27df478:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27df480:;
    c->r[12] = c->r[4];
L_27df484:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xe900u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27dfc3c; }
L_27df558:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27df558; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27dfc40;
L_27df5a8:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27df5b0:;
    c->r[12] = c->r[4];
L_27df5b4:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xbu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27dfcd0; }
L_27df640:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27df640; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27dfcd4;
L_27df690:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27df698:;
    c->r[12] = c->r[4];
L_27df69c:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x7e72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27dfd64; }
L_27df770:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27df770; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27dfd68;
L_27df7c0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27df7c8:;
    c->r[12] = c->r[4];
L_27df7cc:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27dfdf8; }
L_27df89c:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27df89c; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27dfdfc;
L_27df8ec:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27df8f4:;
    c->r[12] = c->r[4];
L_27df8f8:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27dfe8c; }
L_27df9c8:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27df9c8; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27dfe90;
L_27dfa18:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27dfa20:;
    c->r[12] = c->r[4];
L_27dfa24:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2c72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27dff20; }
L_27dfaf8:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27dfaf8; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27dff24;
L_27dfb48:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27dfb50u; f_283b288(c);
L_27dfb50:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27dfb58:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27dfb60u; f_283b288(c);
L_27dfb60:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27dfb68:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27dfb70u; f_283b288(c);
L_27dfb70:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27dfb78:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27dfb80u; f_283b288(c);
L_27dfb80:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27dfb88:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27dfb90u; f_283b288(c);
L_27dfb90:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27dfb98:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27dfba0u; f_283b288(c);
L_27dfba0:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27dfba8:;
    c->r[6] = c->r[7];
L_27dfbac:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27dfbf8; }
L_27dfbc0:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dfbd4; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dfbd4u; f_283b288(c);
L_27dfbd4:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dfbec; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dfbecu; f_283b288(c);
L_27dfbec:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27dfbc0; }
L_27dfbf8:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e1748; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e1740; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e1740; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e1748; }
    goto L_27e32a4;
L_27dfc3c:;
    c->r[6] = c->r[7];
L_27dfc40:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27dfc8c; }
L_27dfc54:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dfc68; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dfc68u; f_283b288(c);
L_27dfc68:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dfc80; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dfc80u; f_283b288(c);
L_27dfc80:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27dfc54; }
L_27dfc8c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e1758; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e1750; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e1750; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e1758; }
    goto L_27e32a4;
L_27dfcd0:;
    c->r[6] = c->r[7];
L_27dfcd4:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27dfd20; }
L_27dfce8:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dfcfc; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dfcfcu; f_283b288(c);
L_27dfcfc:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dfd14; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dfd14u; f_283b288(c);
L_27dfd14:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27dfce8; }
L_27dfd20:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e1778; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e1770; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e1770; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e1778; }
    goto L_27e32a4;
L_27dfd64:;
    c->r[6] = c->r[7];
L_27dfd68:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27dfdb4; }
L_27dfd7c:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dfd90; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dfd90u; f_283b288(c);
L_27dfd90:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dfda8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dfda8u; f_283b288(c);
L_27dfda8:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27dfd7c; }
L_27dfdb4:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e17a8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e17a0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e17a0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e17a8; }
    goto L_27e32a4;
L_27dfdf8:;
    c->r[6] = c->r[7];
L_27dfdfc:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27dfe48; }
L_27dfe10:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dfe24; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dfe24u; f_283b288(c);
L_27dfe24:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dfe3c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dfe3cu; f_283b288(c);
L_27dfe3c:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27dfe10; }
L_27dfe48:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e17b8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e17b0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e17b0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e17b8; }
    goto L_27e32a4;
L_27dfe8c:;
    c->r[6] = c->r[7];
L_27dfe90:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27dfedc; }
L_27dfea4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dfeb8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dfeb8u; f_283b288(c);
L_27dfeb8:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dfed0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dfed0u; f_283b288(c);
L_27dfed0:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27dfea4; }
L_27dfedc:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e17c8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e17c0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e17c0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e17c8; }
    goto L_27e32a4;
L_27dff20:;
    c->r[6] = c->r[7];
L_27dff24:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27dff70; }
L_27dff38:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dff4c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dff4cu; f_283b288(c);
L_27dff4c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27dff64; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27dff64u; f_283b288(c);
L_27dff64:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27dff38; }
L_27dff70:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e186c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e1864; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e1864; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e186c; }
    goto L_27e32a4;
L_27dffb4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27dffbc:;
    c->r[12] = c->r[4];
L_27dffc0:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2a72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e17d0; }
L_27e0094:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e0094; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e17d4;
L_27e00e4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e00ec:;
    c->r[12] = c->r[4];
L_27e00f0:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2d72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1874; }
L_27e01c4:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e01c4; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e1878;
L_27e0214:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e30f8;
L_27e0220:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e0228:;
    c->r[12] = c->r[4];
L_27e022c:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xf300u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1908; }
L_27e0300:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e0300; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e190c;
L_27e0350:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e0358:;
    c->r[12] = c->r[4];
L_27e035c:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xbu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e199c; }
L_27e03e8:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e03e8; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e19a0;
L_27e0438:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e0440:;
    c->r[12] = c->r[4];
L_27e0444:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xf100u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1a30; }
L_27e0518:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e0518; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e1a34;
L_27e0568:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e0570:;
    c->r[12] = c->r[4];
L_27e0574:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x21u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1ac4; }
L_27e0600:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e0600; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e1ac8;
L_27e0650:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e0658:;
    c->r[12] = c->r[4];
L_27e065c:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0x10000u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1b58; }
L_27e0730:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e0730; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e1b5c;
L_27e0780:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e0788:;
    c->r[12] = c->r[4];
L_27e078c:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xee00u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1bec; }
L_27e0860:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e0860; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e1bf0;
L_27e08b0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e08b8:;
    c->r[12] = c->r[4];
L_27e08bc:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2d72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1c80; }
L_27e0990:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e0990; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e1c84;
L_27e09e0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e09e8:;
    c->r[12] = c->r[4];
L_27e09ec:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xea00u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1d14; }
L_27e0ac0:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e0ac0; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e1d18;
L_27e0b10:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e0b18:;
    c->r[12] = c->r[4];
L_27e0b1c:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x3d72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1da8; }
L_27e0bf0:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e0bf0; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e1dac;
L_27e0c40:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e0c48:;
    c->r[12] = c->r[4];
L_27e0c4c:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1e3c; }
L_27e0cd8:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e0cd8; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e1e40;
L_27e0d28:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e0d30:;
    c->r[12] = c->r[4];
L_27e0d34:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1ed0; }
L_27e0e04:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e0e04; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e1ed4;
L_27e0e54:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e0e5c:;
    c->r[12] = c->r[4];
L_27e0e60:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2a72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1f64; }
L_27e0f34:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e0f34; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e1f68;
L_27e0f84:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e0f8c:;
    c->r[12] = c->r[4];
L_27e0f90:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2f72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e1ff8; }
L_27e1064:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e1064; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e1ffc;
L_27e10b4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e10bc:;
    c->r[12] = c->r[4];
L_27e10c0:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x3c72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e208c; }
L_27e1194:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e1194; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e2090;
L_27e11e4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e11ec:;
    c->r[12] = c->r[4];
L_27e11f0:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e2120; }
L_27e12c0:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e12c0; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e2124;
L_27e1310:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e1318:;
    c->r[12] = c->r[4];
L_27e131c:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xeu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e21b4; }
L_27e13a8:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e13a8; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e21b8;
L_27e13f8:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e1400:;
    c->r[12] = c->r[4];
L_27e1404:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xe500u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e2248; }
L_27e14d8:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e14d8; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e224c;
L_27e1528:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e1530:;
    c->r[12] = c->r[4];
L_27e1534:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2172u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e22dc; }
L_27e1608:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e1608; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e22e0;
L_27e1658:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e1660:;
    c->r[12] = c->r[4];
L_27e1664:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xcu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e2370; }
L_27e16f0:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e16f0; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e2374;
L_27e1740:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e1748u; f_283b288(c);
L_27e1748:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e1750:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e1758u; f_283b288(c);
L_27e1758:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e1760:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27de328;
L_27e1770:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e1778u; f_283b288(c);
L_27e1778:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e1780:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27de458;
L_27e1790:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27de588;
L_27e17a0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e17a8u; f_283b288(c);
L_27e17a8:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e17b0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e17b8u; f_283b288(c);
L_27e17b8:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e17c0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e17c8u; f_283b288(c);
L_27e17c8:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e17d0:;
    c->r[6] = c->r[7];
L_27e17d4:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e1820; }
L_27e17e8:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e17fc; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e17fcu; f_283b288(c);
L_27e17fc:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1814; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1814u; f_283b288(c);
L_27e1814:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e17e8; }
L_27e1820:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2e58; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2e50; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2e50; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2e58; }
    goto L_27e32a4;
L_27e1864:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e186cu; f_283b288(c);
L_27e186c:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e1874:;
    c->r[6] = c->r[7];
L_27e1878:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e18c4; }
L_27e188c:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e18a0; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e18a0u; f_283b288(c);
L_27e18a0:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e18b8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e18b8u; f_283b288(c);
L_27e18b8:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e188c; }
L_27e18c4:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2e68; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2e60; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2e60; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2e68; }
    goto L_27e32a4;
L_27e1908:;
    c->r[6] = c->r[7];
L_27e190c:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e1958; }
L_27e1920:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1934; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1934u; f_283b288(c);
L_27e1934:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e194c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e194cu; f_283b288(c);
L_27e194c:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e1920; }
L_27e1958:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2e78; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2e70; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2e70; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2e78; }
    goto L_27e32a4;
L_27e199c:;
    c->r[6] = c->r[7];
L_27e19a0:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e19ec; }
L_27e19b4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e19c8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e19c8u; f_283b288(c);
L_27e19c8:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e19e0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e19e0u; f_283b288(c);
L_27e19e0:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e19b4; }
L_27e19ec:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2e88; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2e80; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2e80; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2e88; }
    goto L_27e32a4;
L_27e1a30:;
    c->r[6] = c->r[7];
L_27e1a34:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e1a80; }
L_27e1a48:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1a5c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1a5cu; f_283b288(c);
L_27e1a5c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1a74; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1a74u; f_283b288(c);
L_27e1a74:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e1a48; }
L_27e1a80:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2e98; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2e90; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2e90; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2e98; }
    goto L_27e32a4;
L_27e1ac4:;
    c->r[6] = c->r[7];
L_27e1ac8:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e1b14; }
L_27e1adc:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1af0; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1af0u; f_283b288(c);
L_27e1af0:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1b08; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1b08u; f_283b288(c);
L_27e1b08:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e1adc; }
L_27e1b14:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2ea8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2ea0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2ea0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2ea8; }
    goto L_27e32a4;
L_27e1b58:;
    c->r[6] = c->r[7];
L_27e1b5c:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e1ba8; }
L_27e1b70:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1b84; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1b84u; f_283b288(c);
L_27e1b84:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1b9c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1b9cu; f_283b288(c);
L_27e1b9c:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e1b70; }
L_27e1ba8:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2eb8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2eb0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2eb0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2eb8; }
    goto L_27e32a4;
L_27e1bec:;
    c->r[6] = c->r[7];
L_27e1bf0:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e1c3c; }
L_27e1c04:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1c18; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1c18u; f_283b288(c);
L_27e1c18:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1c30; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1c30u; f_283b288(c);
L_27e1c30:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e1c04; }
L_27e1c3c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2ec8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2ec0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2ec0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2ec8; }
    goto L_27e32a4;
L_27e1c80:;
    c->r[6] = c->r[7];
L_27e1c84:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e1cd0; }
L_27e1c98:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1cac; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1cacu; f_283b288(c);
L_27e1cac:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1cc4; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1cc4u; f_283b288(c);
L_27e1cc4:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e1c98; }
L_27e1cd0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2ed8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2ed0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2ed0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2ed8; }
    goto L_27e32a4;
L_27e1d14:;
    c->r[6] = c->r[7];
L_27e1d18:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e1d64; }
L_27e1d2c:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1d40; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1d40u; f_283b288(c);
L_27e1d40:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1d58; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1d58u; f_283b288(c);
L_27e1d58:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e1d2c; }
L_27e1d64:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2ee8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2ee0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2ee0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2ee8; }
    goto L_27e32a4;
L_27e1da8:;
    c->r[6] = c->r[7];
L_27e1dac:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e1df8; }
L_27e1dc0:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1dd4; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1dd4u; f_283b288(c);
L_27e1dd4:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1dec; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1decu; f_283b288(c);
L_27e1dec:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e1dc0; }
L_27e1df8:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2ef8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2ef0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2ef0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2ef8; }
    goto L_27e32a4;
L_27e1e3c:;
    c->r[6] = c->r[7];
L_27e1e40:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e1e8c; }
L_27e1e54:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1e68; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1e68u; f_283b288(c);
L_27e1e68:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1e80; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1e80u; f_283b288(c);
L_27e1e80:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e1e54; }
L_27e1e8c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2f08; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2f00; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2f00; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2f08; }
    goto L_27e32a4;
L_27e1ed0:;
    c->r[6] = c->r[7];
L_27e1ed4:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e1f20; }
L_27e1ee8:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1efc; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1efcu; f_283b288(c);
L_27e1efc:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1f14; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1f14u; f_283b288(c);
L_27e1f14:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e1ee8; }
L_27e1f20:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2f18; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2f10; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2f10; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2f18; }
    goto L_27e32a4;
L_27e1f64:;
    c->r[6] = c->r[7];
L_27e1f68:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e1fb4; }
L_27e1f7c:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1f90; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1f90u; f_283b288(c);
L_27e1f90:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e1fa8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e1fa8u; f_283b288(c);
L_27e1fa8:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e1f7c; }
L_27e1fb4:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2f28; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2f20; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2f20; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2f28; }
    goto L_27e32a4;
L_27e1ff8:;
    c->r[6] = c->r[7];
L_27e1ffc:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e2048; }
L_27e2010:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2024; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2024u; f_283b288(c);
L_27e2024:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e203c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e203cu; f_283b288(c);
L_27e203c:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e2010; }
L_27e2048:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2f38; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2f30; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2f30; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2f38; }
    goto L_27e32a4;
L_27e208c:;
    c->r[6] = c->r[7];
L_27e2090:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e20dc; }
L_27e20a4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e20b8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e20b8u; f_283b288(c);
L_27e20b8:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e20d0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e20d0u; f_283b288(c);
L_27e20d0:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e20a4; }
L_27e20dc:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2f48; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2f40; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2f40; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2f48; }
    goto L_27e32a4;
L_27e2120:;
    c->r[6] = c->r[7];
L_27e2124:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e2170; }
L_27e2138:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e214c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e214cu; f_283b288(c);
L_27e214c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2164; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2164u; f_283b288(c);
L_27e2164:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e2138; }
L_27e2170:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2f58; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2f50; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2f50; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2f58; }
    goto L_27e32a4;
L_27e21b4:;
    c->r[6] = c->r[7];
L_27e21b8:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e2204; }
L_27e21cc:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e21e0; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e21e0u; f_283b288(c);
L_27e21e0:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e21f8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e21f8u; f_283b288(c);
L_27e21f8:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e21cc; }
L_27e2204:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2f68; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2f60; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2f60; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2f68; }
    goto L_27e32a4;
L_27e2248:;
    c->r[6] = c->r[7];
L_27e224c:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e2298; }
L_27e2260:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2274; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2274u; f_283b288(c);
L_27e2274:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e228c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e228cu; f_283b288(c);
L_27e228c:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e2260; }
L_27e2298:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2f78; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2f70; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2f70; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2f78; }
    goto L_27e32a4;
L_27e22dc:;
    c->r[6] = c->r[7];
L_27e22e0:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e232c; }
L_27e22f4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2308; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2308u; f_283b288(c);
L_27e2308:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2320; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2320u; f_283b288(c);
L_27e2320:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e22f4; }
L_27e232c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2f88; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2f80; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2f80; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2f88; }
    goto L_27e32a4;
L_27e2370:;
    c->r[6] = c->r[7];
L_27e2374:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e23c0; }
L_27e2388:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e239c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e239cu; f_283b288(c);
L_27e239c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e23b4; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e23b4u; f_283b288(c);
L_27e23b4:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e2388; }
L_27e23c0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e2f98; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e2f90; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e2f90; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e2f98; }
    goto L_27e32a4;
L_27e2404:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e240c:;
    c->r[12] = c->r[4];
L_27e2410:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xbu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e2ad8; }
L_27e249c:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e249c; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e2adc;
L_27e24ec:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e24f4:;
    c->r[12] = c->r[4];
L_27e24f8:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[6] + 0xf000u;
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e2b6c; }
L_27e25cc:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e25cc; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e2b70;
L_27e261c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e2624:;
    c->r[12] = c->r[4];
L_27e2628:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[9] + 0xef00u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e2c00; }
L_27e26fc:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e26fc; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e2c04;
L_27e274c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e2754:;
    c->r[12] = c->r[4];
L_27e2758:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2b72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e2c94; }
L_27e282c:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e282c; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e2c98;
L_27e287c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e2884:;
    c->r[12] = c->r[4];
L_27e2888:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e2d28; }
L_27e2958:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e2958; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e2d2c;
L_27e29a8:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27e29b0:;
    c->r[12] = c->r[4];
L_27e29b4:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2b72u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[4] = c->r[12];
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e2dbc; }
L_27e2a88:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e2a88; }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e2dc0;
L_27e2ad8:;
    c->r[6] = c->r[7];
L_27e2adc:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e2b28; }
L_27e2af0:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2b04; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2b04u; f_283b288(c);
L_27e2b04:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2b1c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2b1cu; f_283b288(c);
L_27e2b1c:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e2af0; }
L_27e2b28:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e3008; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e3000; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e3000; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e3008; }
    goto L_27e32a4;
L_27e2b6c:;
    c->r[6] = c->r[7];
L_27e2b70:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e2bbc; }
L_27e2b84:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2b98; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2b98u; f_283b288(c);
L_27e2b98:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2bb0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2bb0u; f_283b288(c);
L_27e2bb0:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e2b84; }
L_27e2bbc:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e3018; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e3010; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e3010; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e3018; }
    goto L_27e32a4;
L_27e2c00:;
    c->r[6] = c->r[7];
L_27e2c04:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e2c50; }
L_27e2c18:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2c2c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2c2cu; f_283b288(c);
L_27e2c2c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2c44; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2c44u; f_283b288(c);
L_27e2c44:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e2c18; }
L_27e2c50:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e3028; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e3020; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e3020; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e3028; }
    goto L_27e32a4;
L_27e2c94:;
    c->r[6] = c->r[7];
L_27e2c98:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e2ce4; }
L_27e2cac:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2cc0; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2cc0u; f_283b288(c);
L_27e2cc0:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2cd8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2cd8u; f_283b288(c);
L_27e2cd8:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e2cac; }
L_27e2ce4:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e3038; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e3030; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e3030; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e3038; }
    goto L_27e32a4;
L_27e2d28:;
    c->r[6] = c->r[7];
L_27e2d2c:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e2d78; }
L_27e2d40:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2d54; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2d54u; f_283b288(c);
L_27e2d54:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2d6c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2d6cu; f_283b288(c);
L_27e2d6c:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e2d40; }
L_27e2d78:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e3048; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e3040; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e3040; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e3048; }
    goto L_27e32a4;
L_27e2dbc:;
    c->r[6] = c->r[7];
L_27e2dc0:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e2e0c; }
L_27e2dd4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2de8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2de8u; f_283b288(c);
L_27e2de8:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e2e00; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e2e00u; f_283b288(c);
L_27e2e00:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_27e2dd4; }
L_27e2e0c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e3058; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e3050; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e3050; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e3058; }
    goto L_27e32a4;
L_27e2e50:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2e58u; f_283b288(c);
L_27e2e58:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2e60:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2e68u; f_283b288(c);
L_27e2e68:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2e70:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2e78u; f_283b288(c);
L_27e2e78:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2e80:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2e88u; f_283b288(c);
L_27e2e88:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2e90:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2e98u; f_283b288(c);
L_27e2e98:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2ea0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2ea8u; f_283b288(c);
L_27e2ea8:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2eb0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2eb8u; f_283b288(c);
L_27e2eb8:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2ec0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2ec8u; f_283b288(c);
L_27e2ec8:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2ed0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2ed8u; f_283b288(c);
L_27e2ed8:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2ee0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2ee8u; f_283b288(c);
L_27e2ee8:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2ef0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2ef8u; f_283b288(c);
L_27e2ef8:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2f00:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2f08u; f_283b288(c);
L_27e2f08:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2f10:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2f18u; f_283b288(c);
L_27e2f18:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2f20:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2f28u; f_283b288(c);
L_27e2f28:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2f30:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2f38u; f_283b288(c);
L_27e2f38:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2f40:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2f48u; f_283b288(c);
L_27e2f48:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2f50:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2f58u; f_283b288(c);
L_27e2f58:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2f60:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2f68u; f_283b288(c);
L_27e2f68:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2f70:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2f78u; f_283b288(c);
L_27e2f78:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2f80:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2f88u; f_283b288(c);
L_27e2f88:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2f90:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e2f98u; f_283b288(c);
L_27e2f98:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e2fa0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27de8a4;
L_27e2fb0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27de9d0;
L_27e2fc0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27deb00;
L_27e2fd0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27dec30;
L_27e2fe0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27ded60;
L_27e2ff0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27dee90;
L_27e3000:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e3008u; f_283b288(c);
L_27e3008:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e3010:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e3018u; f_283b288(c);
L_27e3018:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e3020:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e3028u; f_283b288(c);
L_27e3028:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e3030:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e3038u; f_283b288(c);
L_27e3038:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e3040:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e3048u; f_283b288(c);
L_27e3048:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e3050:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e3058u; f_283b288(c);
L_27e3058:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e3060:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27df354;
L_27e3070:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27df484;
L_27e3080:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27df5b4;
L_27e3090:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27df69c;
L_27e30a0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27df7cc;
L_27e30b0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27df8f8;
L_27e30c0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27dfa24;
L_27e30d0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27dffc0;
L_27e30e0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e00f0;
L_27e30f0:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e30f8:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[3]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_27e3214; }
L_27e31c0:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_27e31c0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_27e3218;
L_27e3214:;
    c->r[6] = c->r[5];
L_27e3218:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[5], c->r[6]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e3264; }
L_27e322c:;
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e3240; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e3240u; f_283b288(c);
L_27e3240:;
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e3258; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e3258u; f_283b288(c);
L_27e3258:;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[5] = c->r[7];
    if (COND_NE) { goto L_27e322c; }
L_27e3264:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e32b8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e32b0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e32b0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e32b8; }
L_27e32a4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e32b0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e32b8u; f_283b288(c);
L_27e32b8:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_27dd054;
L_27e32c0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e022c;
L_27e32d0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e035c;
L_27e32e0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e0444;
L_27e32f0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e0574;
L_27e3300:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e065c;
L_27e3310:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e078c;
L_27e3320:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e08bc;
L_27e3330:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e09ec;
L_27e3340:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e0b1c;
L_27e3350:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e0c4c;
L_27e3360:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e0d34;
L_27e3370:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e0e60;
L_27e3380:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e0f90;
L_27e3390:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e10c0;
L_27e33a0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e11f0;
L_27e33b0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e131c;
L_27e33c0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e1404;
L_27e33d0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e1534;
L_27e33e0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e1664;
L_27e33f0:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e2410;
L_27e3400:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e24f8;
L_27e3410:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e2628;
L_27e3420:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e2758;
L_27e3430:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e2888;
L_27e3440:;
    c->r[12] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27e29b4;
L_27e3450:;
    c->r[14] = 0x27e3458u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3458:;
    c->r[14] = 0x27e3460u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3460:;
    c->r[14] = 0x27e3468u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3468:;
    c->r[14] = 0x27e3470u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3470:;
    c->r[14] = 0x27e3478u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3478:;
    c->r[14] = 0x27e3480u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3480:;
    c->r[14] = 0x27e3488u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3488:;
    c->r[14] = 0x27e3490u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3490:;
    c->r[14] = 0x27e3498u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3498:;
    c->r[14] = 0x27e34a0u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e34a0:;
    c->r[14] = 0x27e34a8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e34a8:;
    c->r[14] = 0x27e34b0u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e34b0:;
    c->r[14] = 0x27e34b8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e34b8:;
    c->r[14] = 0x27e34c0u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e34c0:;
    c->r[14] = 0x27e34c8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e34c8:;
    c->r[14] = 0x27e34d0u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e34d0:;
    c->r[14] = 0x27e34d8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e34d8:;
    c->r[14] = 0x27e34e0u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e34e0:;
    c->r[14] = 0x27e34e8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e34e8:;
    c->r[14] = 0x27e34f0u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e34f0:;
    c->r[14] = 0x27e34f8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e34f8:;
    c->r[14] = 0x27e3500u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3500:;
    c->r[14] = 0x27e3508u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3508:;
    c->r[14] = 0x27e3510u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3510:;
    c->r[14] = 0x27e3518u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3518:;
    c->r[14] = 0x27e3520u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3520:;
    c->r[14] = 0x27e3528u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3528:;
    c->r[14] = 0x27e3530u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3530:;
    c->r[14] = 0x27e3538u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3538:;
    c->r[14] = 0x27e3540u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3540:;
    c->r[14] = 0x27e3548u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3548:;
    c->r[14] = 0x27e3550u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3550:;
    c->r[14] = 0x27e3558u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3558:;
    c->r[14] = 0x27e3560u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3560:;
    c->r[14] = 0x27e3568u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3568:;
    c->r[14] = 0x27e3570u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3570:;
    c->r[14] = 0x27e3578u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3578:;
    c->r[14] = 0x27e3580u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3580:;
    c->r[14] = 0x27e3588u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3588:;
    c->r[14] = 0x27e3590u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3590:;
    c->r[14] = 0x27e3598u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e3598:;
    c->r[14] = 0x27e35a0u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e35a0:;
    c->r[14] = 0x27e35a8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e35a8:;
    c->r[14] = 0x27e35b0u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e35b0:;
    c->r[14] = 0x27e35b8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e35b8:;
    c->r[14] = 0x27e35c0u;
    __attribute__((musttail)) return f_284f5c8(c);
}
