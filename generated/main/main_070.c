#include "cpu.h"
#include "neon_rt.h"
void f_21a6c8(Cpu *c);
void f_21a714(Cpu *c);
void f_444f14(Cpu *c);
void f_44515c(Cpu *c);
void f_5b1964(Cpu *c);
void f_5b1d70(Cpu *c);
void f_5d0ec0(Cpu *c);
void f_5d0fd4(Cpu *c);
void f_5d15a4(Cpu *c);
void f_5d66ac(Cpu *c);
void f_5f8690(Cpu *c);
void f_72308c(Cpu *c);
void f_723150(Cpu *c);
void f_723da4(Cpu *c);
void f_723f30(Cpu *c);
void f_8cfb8c(Cpu *c);
void f_8cfd8c(Cpu *c);
void f_dc831c(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_15efef0(Cpu *c);
void f_15f00a0(Cpu *c);
void f_5d17f8(Cpu *restrict c) {
    FN_ENTER(0x5d17f8u);
L_5d17f8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x98u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[1];
    c->r[1] = ~0x0u;
    c->r[7] = 0x2710u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[0] + 0x20u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x18u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x98u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1467314u;
    { uint32_t ea = 0x5d1874u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_5d55c0;
L_5d187c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] - 0x5u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d18a4; }
L_5d1890:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1890; }
L_5d18a4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d18b4u; f_5d0fd4(c);
    c->r[0] = c->r[4] + (c->r[5] << 4);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 28u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d5c0c; }
L_5d18d4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d18d4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2238; }
    c->r[0] = 0x146728cu;
    { uint32_t ea = 0x5d18fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d2224;
L_5d18fc:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d1920; }
L_5d190c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d190c; }
L_5d1920:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d1930u; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1980; }
L_5d1940:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d1940; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d1978; }
    c->r[0] = 0x1467220u;
    { uint32_t ea = 0x5d1968u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d1978u; rt_dispatch(c);
L_5d1978:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d1980:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d19a4; }
L_5d1990:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1990; }
L_5d19a4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[8] = c->v.s[16];
    c->r[14] = 0x5d19b8u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d1a0c; }
L_5d19cc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d19cc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d1a04; }
    c->r[0] = 0x1467194u;
    { uint32_t ea = 0x5d19f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d1a04u; rt_dispatch(c);
L_5d1a04:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d1a0c:;
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_NE) { goto L_5d2570; }
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0xdeu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5] - 0xbu;
    goto L_5d25b4;
L_5d1a24:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d1a48; }
L_5d1a34:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1a34; }
L_5d1a48:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d1a58u; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1aa8; }
L_5d1a68:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d1a68; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d1aa0; }
    c->r[0] = 0x14670f8u;
    { uint32_t ea = 0x5d1a90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d1aa0u; rt_dispatch(c);
L_5d1aa0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d1aa8:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d1acc; }
L_5d1ab8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1ab8; }
L_5d1acc:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[8] = c->v.s[16];
    c->r[14] = 0x5d1ae0u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d1b34; }
L_5d1af4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d1af4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d1b2c; }
    c->r[0] = 0x146706cu;
    { uint32_t ea = 0x5d1b1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d1b2cu; rt_dispatch(c);
L_5d1b2c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d1b34:;
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_NE) { goto L_5d2578; }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d1b44:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d1b68; }
L_5d1b54:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1b54; }
L_5d1b68:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d1b78u; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1bc8; }
L_5d1b88:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d1b88; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d1bc0; }
    c->r[0] = 0x1466fd8u;
    { uint32_t ea = 0x5d1bb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d1bc0u; rt_dispatch(c);
L_5d1bc0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d1bc8:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d1bec; }
L_5d1bd8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1bd8; }
L_5d1bec:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[8] = c->v.s[16];
    c->r[14] = 0x5d1c00u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d1c54; }
L_5d1c14:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d1c14; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d1c4c; }
    c->r[0] = 0x1466f4cu;
    { uint32_t ea = 0x5d1c3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d1c4cu; rt_dispatch(c);
L_5d1c4c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d1c54:;
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_GE) { goto L_5d2588; }
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0xdeu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5] - 0x13u;
    goto L_5d25b4;
L_5d1c6c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d1c90; }
L_5d1c7c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1c7c; }
L_5d1c90:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d1ca0u; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1cf0; }
L_5d1cb0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d1cb0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d1ce8; }
    c->r[0] = 0x1466eb0u;
    { uint32_t ea = 0x5d1cd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d1ce8u; rt_dispatch(c);
L_5d1ce8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d1cf0:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d1d14; }
L_5d1d00:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1d00; }
L_5d1d14:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[8] = c->v.s[16];
    c->r[14] = 0x5d1d28u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d1d7c; }
L_5d1d3c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d1d3c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d1d74; }
    c->r[0] = 0x1466e24u;
    { uint32_t ea = 0x5d1d64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d1d74u; rt_dispatch(c);
L_5d1d74:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d1d7c:;
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_LE) { goto L_5d2590; }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d1d8c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d1db0; }
L_5d1d9c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1d9c; }
L_5d1db0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d1dc0u; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1e10; }
L_5d1dd0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d1dd0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d1e08; }
    c->r[0] = 0x1466d90u;
    { uint32_t ea = 0x5d1df8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d1e08u; rt_dispatch(c);
L_5d1e08:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d1e10:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d1e34; }
L_5d1e20:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1e20; }
L_5d1e34:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[8] = c->v.s[16];
    c->r[14] = 0x5d1e48u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d1e9c; }
L_5d1e5c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d1e5c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d1e94; }
    c->r[0] = 0x1466d04u;
    { uint32_t ea = 0x5d1e84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d1e94u; rt_dispatch(c);
L_5d1e94:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d1e9c:;
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_LE) { goto L_5d25a0; }
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0xdeu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5] - 0x1bu;
    goto L_5d25b4;
L_5d1eb4:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d1ed8; }
L_5d1ec4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1ec4; }
L_5d1ed8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d1ee8u; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1f38; }
L_5d1ef8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d1ef8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d1f30; }
    c->r[0] = 0x1466c68u;
    { uint32_t ea = 0x5d1f20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d1f30u; rt_dispatch(c);
L_5d1f30:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d1f38:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d1f5c; }
L_5d1f48:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1f48; }
L_5d1f5c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[8] = c->v.s[16];
    c->r[14] = 0x5d1f70u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d1fc4; }
L_5d1f84:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d1f84; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d1fbc; }
    c->r[0] = 0x1466bdcu;
    { uint32_t ea = 0x5d1facu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d1fbcu; rt_dispatch(c);
L_5d1fbc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d1fc4:;
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_GE) { goto L_5d25a8; }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d1fd4:;
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0xdeu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5] - 0x27u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    goto L_5d5c0c;
L_5d1fe8:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d200c; }
L_5d1ff8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d1ff8; }
L_5d200c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[5] = c->r[5] - 0x40u;
    c->r[14] = 0x5d2020u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d2074; }
L_5d2034:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2034; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d206c; }
    c->r[0] = 0x1466b2cu;
    { uint32_t ea = 0x5d205cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d206cu; rt_dispatch(c);
L_5d206c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2074:;
    c->r[0] = 0x1467058u;
    c->r[1] = 0x1u;
    c->r[3] = c->r[7] & 0x7u;
    { uint32_t ea = 0x5d2088u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[7] >> 3);
    c->r[7] = 0x2710u;
    { uint32_t ea = c->r[0] + 0x500u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + (c->r[5] << 4);
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x1cu;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
L_5d20a4:;
    if (COND_EQ) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    goto L_5d5c0c;
L_5d20b0:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] - 0x44u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d20d8; }
L_5d20c4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d20c4; }
L_5d20d8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d20e8u; f_5d0fd4(c);
    c->r[0] = c->r[4] + (c->r[5] << 4);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 28u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d5c0c; }
L_5d2104:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2104; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2238; }
    c->r[0] = 0x1466a5cu;
    { uint32_t ea = 0x5d212cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d2224;
L_5d212c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] - 0x44u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2154; }
L_5d2140:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2140; }
L_5d2154:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d2164u; f_5d0fd4(c);
    c->r[0] = c->r[4] + (c->r[5] << 4);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 28u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d5c0c; }
L_5d2184:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2184; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2238; }
    c->r[0] = 0x14669dcu;
    { uint32_t ea = 0x5d21acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d2224;
L_5d21ac:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] - 0x48u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d21d4; }
L_5d21c0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d21c0; }
L_5d21d4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d21e4u; f_5d0fd4(c);
    c->r[0] = c->r[4] + (c->r[5] << 4);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 28u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d5c0c; }
L_5d2200:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2200; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2238; }
    c->r[0] = 0x1466960u;
    { uint32_t ea = 0x5d2228u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5d2224:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2238u; rt_dispatch(c);
L_5d2238:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_5d5c0c;
L_5d2244:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d226c; }
L_5d2258:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2258; }
L_5d226c:;
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[8] = c->r[5] - 0x75u;
    c->r[14] = 0x5d227cu; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d22d0; }
L_5d2290:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2290; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d22c8; }
    c->r[0] = 0x14668d0u;
    { uint32_t ea = 0x5d22b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d22c8u; rt_dispatch(c);
L_5d22c8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d22d0:;
    c->r[0] = 0x1466aa8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5d22e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[5];
    c->r[14] = 0x5d22ecu; f_723da4(c);
    c->r[1] = c->r[4] + (c->r[8] << 4);
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + 0x1cu;
    if (COND_NE) { goto L_5d25c0; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d2310:;
    c->r[0] = 0x1466c9cu;
    c->r[1] = 0x3e0u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5d2324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + (c->r[5] << 4);
    { uint32_t ea = c->r[1] - 0x778u; ST32(ea, c->r[2]); }
    c->r[2] = 0x774u;
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[2], 0x9u);
    if (COND_HI) { goto L_5d4cf0; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_5d5c0c;
L_5d234c:;
    c->r[0] = 0x1466c60u;
    c->r[1] = 0x3e2u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5d2360u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + (c->r[5] << 4);
    { uint32_t ea = c->r[1] - 0x7b8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x7b4u;
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[2], 0xcu);
    if (COND_HI) { goto L_5d4cf0; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_5d5c0c;
L_5d2388:;
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0xdeu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5] - 0x86u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    goto L_5d5c0c;
L_5d23a4:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d23c8; }
L_5d23b4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d23b4; }
L_5d23c8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[8] = c->r[5] - 0x99u;
    c->r[14] = 0x5d23dcu; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = c->v.s[0];
    if (COND_EQ) { goto L_5d2430; }
L_5d23f0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d23f0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2428; }
    c->r[0] = 0x1466770u;
    { uint32_t ea = 0x5d2418u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2428u; rt_dispatch(c);
L_5d2428:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2430:;
    c->r[0] = 0x14668d4u;
    c->r[7] = 0x0u;
    c->r[1] = c->r[13] + 0x30u;
    c->r[2] = c->r[13] + 0x2cu;
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x5d2454u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d2458u; f_5b1964(c);
    goto L_5d2510;
L_5d245c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2480; }
L_5d246c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d246c; }
L_5d2480:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[8] = c->r[5] - 0x9du;
    c->r[14] = 0x5d2494u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = c->v.s[0];
    if (COND_EQ) { goto L_5d24e8; }
L_5d24a8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d24a8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d24e0; }
    c->r[0] = 0x14666b8u;
    { uint32_t ea = 0x5d24d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d24e0u; rt_dispatch(c);
L_5d24e0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d24e8:;
    c->r[0] = 0x146681cu;
    c->r[7] = 0x0u;
    c->r[1] = c->r[13] + 0x30u;
    c->r[2] = c->r[13] + 0x2cu;
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x5d250cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d2510u; f_5b1d70(c);
L_5d2510:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + (c->r[8] << 4);
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { c->r[7] = 0x1u; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[7]); }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d2538:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d254cu; f_5d15a4(c);
L_5d254c:;
    c->r[0] = c->r[4] + (c->r[8] << 4);
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5d256c:;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
L_5d2570:;
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d2578:;
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0xdeu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5] - 0xfu;
    goto L_5d25b4;
L_5d2588:;
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d2590:;
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0xdeu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5] - 0x17u;
    goto L_5d25b4;
L_5d25a0:;
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d25a8:;
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0xdeu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5] - 0x1fu;
L_5d25b4:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d25c0:;
    c->r[0] = 0x0u;
    goto L_5d2ccc;
L_5d25c8:;
    c->r[0] = 0x1u;
    goto L_5d25d4;
L_5d25d0:;
    c->r[0] = 0x0u;
L_5d25d4:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_5d5c0c;
L_5d25e0:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2604; }
L_5d25f0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d25f0; }
L_5d2604:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d2614u; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d2664; }
L_5d2624:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2624; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d265c; }
    c->r[0] = 0x146653cu;
    { uint32_t ea = 0x5d264cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d265cu; rt_dispatch(c);
L_5d265c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2664:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2688; }
L_5d2674:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2674; }
L_5d2688:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[5] = c->v.s[16];
    c->r[14] = 0x5d269cu; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d26f0; }
L_5d26b0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d26b0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d26e8; }
    c->r[0] = 0x14664b0u;
    { uint32_t ea = 0x5d26d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d26e8u; rt_dispatch(c);
L_5d26e8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d26f0:;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { goto L_5d2cc4; }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d2700:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2724; }
L_5d2710:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2710; }
L_5d2724:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d2734u; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d2784; }
L_5d2744:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2744; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d277c; }
    c->r[0] = 0x146641cu;
    { uint32_t ea = 0x5d276cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d277cu; rt_dispatch(c);
L_5d277c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2784:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d27a8; }
L_5d2794:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2794; }
L_5d27a8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[5] = c->v.s[16];
    c->r[14] = 0x5d27bcu; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d2810; }
L_5d27d0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d27d0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2808; }
    c->r[0] = 0x1466390u;
    { uint32_t ea = 0x5d27f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2808u; rt_dispatch(c);
L_5d2808:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2810:;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_5d2cc4; }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d2828:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d284c; }
L_5d2838:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2838; }
L_5d284c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d285cu; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d28ac; }
L_5d286c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d286c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d28a4; }
    c->r[0] = 0x14662f4u;
    { uint32_t ea = 0x5d2894u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d28a4u; rt_dispatch(c);
L_5d28a4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d28ac:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d28d0; }
L_5d28bc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d28bc; }
L_5d28d0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[5] = c->v.s[16];
    c->r[14] = 0x5d28e4u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d2938; }
L_5d28f8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d28f8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2930; }
    c->r[0] = 0x1466268u;
    { uint32_t ea = 0x5d2920u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2930u; rt_dispatch(c);
L_5d2930:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2938:;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_LT) { goto L_5d2cc4; }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d2950:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2974; }
L_5d2960:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2960; }
L_5d2974:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d2984u; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d29d4; }
L_5d2994:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2994; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d29cc; }
    c->r[0] = 0x14661ccu;
    { uint32_t ea = 0x5d29bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d29ccu; rt_dispatch(c);
L_5d29cc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d29d4:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d29f8; }
L_5d29e4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d29e4; }
L_5d29f8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[5] = c->v.s[16];
    c->r[14] = 0x5d2a0cu; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d2a60; }
L_5d2a20:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2a20; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2a58; }
    c->r[0] = 0x1466140u;
    { uint32_t ea = 0x5d2a48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2a58u; rt_dispatch(c);
L_5d2a58:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2a60:;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_LE) { goto L_5d2cc4; }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d2a78:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2a9c; }
L_5d2a88:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2a88; }
L_5d2a9c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d2aacu; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d2afc; }
L_5d2abc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2abc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2af4; }
    c->r[0] = 0x14660a4u;
    { uint32_t ea = 0x5d2ae4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2af4u; rt_dispatch(c);
L_5d2af4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2afc:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2b20; }
L_5d2b0c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2b0c; }
L_5d2b20:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[5] = c->v.s[16];
    c->r[14] = 0x5d2b34u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d2b88; }
L_5d2b48:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2b48; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2b80; }
    c->r[0] = 0x1466018u;
    { uint32_t ea = 0x5d2b70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2b80u; rt_dispatch(c);
L_5d2b80:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2b88:;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_GT) { goto L_5d2cc4; }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d2ba0:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2bc4; }
L_5d2bb0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2bb0; }
L_5d2bc4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d2bd4u; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d2c24; }
L_5d2be4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2be4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2c1c; }
    c->r[0] = 0x1465f7cu;
    { uint32_t ea = 0x5d2c0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2c1cu; rt_dispatch(c);
L_5d2c1c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2c24:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2c48; }
L_5d2c34:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2c34; }
L_5d2c48:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[5] = c->v.s[16];
    c->r[14] = 0x5d2c5cu; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d2cb0; }
L_5d2c70:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2c70; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2ca8; }
    c->r[0] = 0x1465ef0u;
    { uint32_t ea = 0x5d2c98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2ca8u; rt_dispatch(c);
L_5d2ca8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2cb0:;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_GE) { goto L_5d2cc4; }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d2cc4:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
L_5d2ccc:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d2cdc:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2d00; }
L_5d2cec:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2cec; }
L_5d2d00:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d2d10u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d2d64; }
L_5d2d24:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2d24; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2d5c; }
    c->r[0] = 0x1465e3cu;
    { uint32_t ea = 0x5d2d4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2d5cu; rt_dispatch(c);
L_5d2d5c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2d64:;
    c->r[0] = 0x1466368u;
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5d2d78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d2e14;
L_5d2d7c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2da0; }
L_5d2d8c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2d8c; }
L_5d2da0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d2db0u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d2e04; }
L_5d2dc4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2dc4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2dfc; }
    c->r[0] = 0x1465d9cu;
    { uint32_t ea = 0x5d2decu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2dfcu; rt_dispatch(c);
L_5d2dfc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2e04:;
    c->r[0] = 0x14662c8u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5d2e18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5d2e14:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x500u;
    c->r[14] = 0x5d2e20u; f_444f14(c);
    goto L_5d5c0c;
L_5d2e28:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2e4c; }
L_5d2e38:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2e38; }
L_5d2e4c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d2e5cu; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d2eb0; }
L_5d2e70:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2e70; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2ea8; }
    c->r[0] = 0x1465cf0u;
    { uint32_t ea = 0x5d2e98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2ea8u; rt_dispatch(c);
L_5d2ea8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2eb0:;
    c->r[0] = 0x1465ec4u;
    c->r[1] = 0x42cu;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5d2ec4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d2f60;
L_5d2ec8:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2eec; }
L_5d2ed8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2ed8; }
L_5d2eec:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d2efcu; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d2f50; }
L_5d2f10:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2f10; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2f48; }
    c->r[0] = 0x1465c50u;
    { uint32_t ea = 0x5d2f38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2f48u; rt_dispatch(c);
L_5d2f48:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d2f50:;
    c->r[0] = 0x1465e24u;
    c->r[1] = 0x42cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5d2f64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5d2f60:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[5];
    c->r[14] = 0x5d2f70u; f_723f30(c);
    goto L_5d5c0c;
L_5d2f78:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2f9c; }
L_5d2f88:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d2f88; }
L_5d2f9c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d2facu; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d3000; }
L_5d2fc0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d2fc0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2ff8; }
    c->r[0] = 0x1465ba0u;
    { uint32_t ea = 0x5d2fe8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d2ff8u; rt_dispatch(c);
L_5d2ff8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d3000:;
    c->r[0] = 0x1465d7cu;
    { uint32_t ea = 0x5d300cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[5]); }
    goto L_5d5c0c;
L_5d301c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d3040; }
L_5d302c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d302c; }
L_5d3040:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3050u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d30a4; }
L_5d3064:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d3064; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d309c; }
    c->r[0] = 0x1465afcu;
    { uint32_t ea = 0x5d308cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d309cu; rt_dispatch(c);
L_5d309c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d30a4:;
    c->r[0] = 0x1465cd4u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x5d30b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d30b8u; f_723150(c);
    goto L_5d5c0c;
L_5d30bc:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d30e0; }
L_5d30cc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d30cc; }
L_5d30e0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d30f0u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d5c0c; }
L_5d30fc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d30fc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d2238; }
    c->r[0] = 0x1465a64u;
    { uint32_t ea = 0x5d3124u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d2224;
L_5d312c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d3150; }
L_5d313c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d313c; }
L_5d3150:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3160u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d31b4; }
L_5d3174:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d3174; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d31ac; }
    c->r[0] = 0x14659ecu;
    { uint32_t ea = 0x5d319cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d31acu; rt_dispatch(c);
L_5d31ac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d31b4:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_5d5c0c; }
    c->r[0] = 0x1465df4u;
    c->r[1] = 0x3e0u;
    { uint32_t ea = 0x5d31ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d326c;
L_5d31d0:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d31f4; }
L_5d31e0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d31e0; }
L_5d31f4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3204u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d3258; }
L_5d3218:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d3218; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d3250; }
    c->r[0] = 0x1465948u;
    { uint32_t ea = 0x5d3240u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3250u; rt_dispatch(c);
L_5d3250:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d3258:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_5d5c0c; }
    c->r[0] = 0x1465d50u;
    c->r[1] = 0x3e2u;
    { uint32_t ea = 0x5d3270u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5d326c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_LT) { { uint32_t ea = c->r[0]; ST16(ea, c->r[5]); } }
    goto L_5d5c0c;
L_5d3290:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d32b4; }
L_5d32a0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d32a0; }
L_5d32b4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d32c4u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d3318; }
L_5d32d8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d32d8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d3310; }
    c->r[0] = 0x1465888u;
    { uint32_t ea = 0x5d3300u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3310u; rt_dispatch(c);
L_5d3310:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d3318:;
    (void)f_subs(c, c->r[5], 0x7u);
    if (COND_HI) { goto L_5d5c0c; }
    c->r[0] = c->r[4] + (c->r[5] << 4);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_5d5c0c; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_5d55b8; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d335c; }
L_5d3348:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = strex32(c, c->r[5], c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5d3348; }
L_5d335c:;
    c->r[1] = 0x117d9fau;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[2] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x8u;
    if (COND_EQ) { c->r[0] = 0x5d337cu + c->r[1]; }
    c->r[1] = 0x1190a8eu;
    c->r[1] = 0x5d3384u + c->r[1];
    c->r[14] = 0x5d3384u; f_15efef0(c);
    c->v.s[16] = LD32(c->r[13] + 48u);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d33c8; }
L_5d3390:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3390; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d33c8; }
    c->r[0] = 0x14657d0u;
    { uint32_t ea = 0x5d33b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5d33c8u; rt_dispatch(c);
L_5d33c8:;
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_5d33dc; }
    c->v.s[0] = LD32(c->r[8]);
    c->v.f[16] = c->v.f[16] + c->v.f[0];
L_5d33dc:;
    ST32(c->r[8], c->v.s[16]);
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d33f8:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d341c; }
L_5d3408:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3408; }
L_5d341c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d342cu; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d3480; }
L_5d3440:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d3440; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d3478; }
    c->r[0] = 0x1465720u;
    { uint32_t ea = 0x5d3468u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3478u; rt_dispatch(c);
L_5d3478:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d3480:;
    (void)f_subs(c, c->r[5], 0x7u);
    if (COND_HI) { goto L_5d5c0c; }
    c->r[0] = c->r[4] + (c->r[5] << 4);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_5d5c0c; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5d5c0c; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d556c; }
L_5d34b8:;
    c->r[2] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d34b8; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d34e0u; f_5d15a4(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d5c0c; }
L_5d34e8:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d34e8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d2238; }
    c->r[0] = 0x1465678u;
    { uint32_t ea = 0x5d3510u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d2224;
L_5d3510:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d3534; }
L_5d3520:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3520; }
L_5d3534:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3544u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d3598; }
L_5d3558:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d3558; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d3590; }
    c->r[0] = 0x1465608u;
    { uint32_t ea = 0x5d3580u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3590u; rt_dispatch(c);
L_5d3590:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d3598:;
    (void)f_subs(c, c->r[5], 0x7u);
    if (COND_HI) { goto L_5d5c0c; }
    c->r[0] = c->r[4] + (c->r[5] << 4);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_5d5c0c; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5d5c0c; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x20u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d556c; }
L_5d35d0:;
    c->r[2] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d35d0; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d35f8u; f_5d15a4(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d5c0c; }
L_5d3600:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3600; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d2238; }
    c->r[0] = 0x1465560u;
    { uint32_t ea = 0x5d3628u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d2224;
L_5d3630:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d3654; }
L_5d3640:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3640; }
L_5d3654:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3664u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d36b8; }
L_5d3678:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d3678; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d36b0; }
    c->r[0] = 0x14654e8u;
    { uint32_t ea = 0x5d36a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d36b0u; rt_dispatch(c);
L_5d36b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d36b8:;
    (void)f_subs(c, c->r[5], 0x7u);
    if (COND_HI) { goto L_5d5c0c; }
    c->r[0] = c->r[4] + (c->r[5] << 4);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_5d5c0c; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5d5c0c; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x30u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d556c; }
L_5d36f0:;
    c->r[2] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d36f0; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3718u; f_5d15a4(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d5c0c; }
L_5d3720:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3720; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d2238; }
    c->r[0] = 0x1465440u;
    { uint32_t ea = 0x5d3748u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d2224;
L_5d3750:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d3774; }
L_5d3760:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3760; }
L_5d3774:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3784u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = c->v.s[0];
    if (COND_EQ) { goto L_5d37d8; }
L_5d3798:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d3798; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d37d0; }
    c->r[0] = 0x14653c8u;
    { uint32_t ea = 0x5d37c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d37d0u; rt_dispatch(c);
L_5d37d0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d37d8:;
    (void)f_subs(c, c->r[8], 0x7u);
    if (COND_HI) { goto L_5d5050; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d3800; }
L_5d37ec:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = strex32(c, c->r[5], c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5d37ec; }
L_5d3800:;
    c->r[1] = 0x117d556u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[2] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x8u;
    if (COND_EQ) { c->r[0] = 0x5d3820u + c->r[1]; }
    c->r[1] = 0x11905eau;
    c->r[1] = 0x5d3828u + c->r[1];
    c->r[14] = 0x5d3828u; f_15efef0(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + (c->r[8] << 4);
    c->r[2] = 0x2u;
    c->r[7] = 0x2710u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_5d5c0c; }
L_5d3848:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3848; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d5c0c; }
    c->r[0] = 0x1465318u;
    { uint32_t ea = 0x5d3870u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5d3880u; rt_dispatch(c);
    goto L_5d5c0c;
L_5d3890:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d38bc; }
L_5d38a8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d38a8; }
L_5d38bc:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d38ccu; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d391c; }
L_5d38dc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d38dc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d3914; }
    c->r[0] = 0x1465284u;
    { uint32_t ea = 0x5d3904u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3914u; rt_dispatch(c);
L_5d3914:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d391c:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_5d5c0c; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d394c; }
L_5d3938:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3938; }
L_5d394c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d395cu; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d39ac; }
L_5d396c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d396c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d39a4; }
    c->r[0] = 0x14651f4u;
    { uint32_t ea = 0x5d3994u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d39a4u; rt_dispatch(c);
L_5d39a4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d39ac:;
    c->v.f[0] = c->v.f[16] + c->v.f[18];
    c->r[0] = c->r[4] + (c->r[5] << 4);
    c->r[1] = 0x2u;
    goto L_5d3aec;
L_5d39c4:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d39f0; }
L_5d39dc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d39dc; }
L_5d39f0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3a00u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d3a50; }
L_5d3a10:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d3a10; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d3a48; }
    c->r[0] = 0x1465150u;
    { uint32_t ea = 0x5d3a38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3a48u; rt_dispatch(c);
L_5d3a48:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d3a50:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_5d5c0c; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d3a80; }
L_5d3a6c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3a6c; }
L_5d3a80:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3a90u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d3ae0; }
L_5d3aa0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d3aa0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d3ad8; }
    c->r[0] = 0x14650c0u;
    { uint32_t ea = 0x5d3ac8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3ad8u; rt_dispatch(c);
L_5d3ad8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d3ae0:;
    c->r[0] = c->r[4] + (c->r[5] << 4);
    c->r[1] = 0x2u;
    c->v.f[0] = c->v.f[16] - c->v.f[18];
L_5d3aec:;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 28u, c->v.s[0]);
    goto L_5d5c0c;
L_5d3b00:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d3b2c; }
L_5d3b18:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3b18; }
L_5d3b2c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3b3cu; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d3b88; }
L_5d3b48:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d3b48; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d3b80; }
    c->r[0] = 0x1465018u;
    { uint32_t ea = 0x5d3b70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3b80u; rt_dispatch(c);
L_5d3b80:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d3b88:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_5d5c0c; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d3bb8; }
L_5d3ba4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3ba4; }
L_5d3bb8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3bc8u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d3c18; }
L_5d3bd8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d3bd8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d3c10; }
    c->r[0] = 0x1464f88u;
    { uint32_t ea = 0x5d3c00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3c10u; rt_dispatch(c);
L_5d3c10:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d3c18:;
    c->r[0] = c->r[4] + (c->r[5] << 4);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 28u, c->v.s[16]);
    goto L_5d5c0c;
L_5d3c30:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d505c; }
L_5d3c48:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3c48; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3c74u; f_5d15a4(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d5070; }
L_5d3c7c:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3c7c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d3cb4; }
    c->r[0] = 0x1464ee4u;
    { uint32_t ea = 0x5d3ca4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3cb4u; rt_dispatch(c);
L_5d3cb4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_5d5070;
L_5d3cc4:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d5110; }
L_5d3cdc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3cdc; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3d08u; f_5d15a4(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d5124; }
L_5d3d10:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3d10; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d3d48; }
    c->r[0] = 0x1464e50u;
    { uint32_t ea = 0x5d3d38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3d48u; rt_dispatch(c);
L_5d3d48:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_5d5124;
L_5d3d5c:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d51c4; }
L_5d3d74:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3d74; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3da0u; f_5d15a4(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d51d8; }
L_5d3da8:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3da8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d3de0; }
    c->r[0] = 0x1464db8u;
    { uint32_t ea = 0x5d3dd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3de0u; rt_dispatch(c);
L_5d3de0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_5d51d8;
L_5d3df0:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d5280; }
L_5d3e08:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3e08; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3e34u; f_5d15a4(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d5294; }
L_5d3e3c:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3e3c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d3e74; }
    c->r[0] = 0x1464d24u;
    { uint32_t ea = 0x5d3e64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3e74u; rt_dispatch(c);
L_5d3e74:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_5d5294;
L_5d3e8c:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_5d5c0c; }
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d5c0c; }
    c->r[14] = 0x5d3ea8u; f_8cfb8c(c);
    c->r[8] = c->r[0];
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d5580; }
L_5d3ec4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3ec4; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3ef0u; f_5d15a4(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d5594; }
L_5d3ef8:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3ef8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d3f30; }
    c->r[0] = 0x1464c68u;
    { uint32_t ea = 0x5d3f20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3f30u; rt_dispatch(c);
L_5d3f30:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_5d5594;
L_5d3f4c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d3f70; }
L_5d3f5c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d3f5c; }
L_5d3f70:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d3f80u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d3fd0; }
L_5d3f90:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d3f90; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d3fc8; }
    c->r[0] = 0x1464bd0u;
    { uint32_t ea = 0x5d3fb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d3fc8u; rt_dispatch(c);
L_5d3fc8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d3fd0:;
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_5d5c0c; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[3] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1464d90u;
    { uint32_t ea = 0x5d4000u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[16]);
    c->r[8] = c->v.s[0];
    c->r[1] = c->r[8];
    c->r[14] = 0x5d4010u; f_21a6c8(c);
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d550c; }
L_5d4020:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4020; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[13] + 0x28u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d404cu; f_5d15a4(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d5520; }
L_5d4054:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4054; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d408c; }
    c->r[0] = 0x1464b0cu;
    { uint32_t ea = 0x5d407cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d408cu; rt_dispatch(c);
L_5d408c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    goto L_5d5520;
L_5d40a8:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d40cc; }
L_5d40b8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d40b8; }
L_5d40cc:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d40dcu; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d412c; }
L_5d40ec:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d40ec; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4124; }
    c->r[0] = 0x1464a74u;
    { uint32_t ea = 0x5d4114u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4124u; rt_dispatch(c);
L_5d4124:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d412c:;
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_5d5c0c; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[3] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1464c34u;
    { uint32_t ea = 0x5d415cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[16]);
    c->r[8] = c->v.s[0];
    c->r[1] = c->r[8];
    c->r[14] = 0x5d416cu; f_21a6c8(c);
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d5530; }
L_5d417c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d417c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[13] + 0x28u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d41a8u; f_5d15a4(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d5544; }
L_5d41b0:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d41b0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d41e8; }
    c->r[0] = 0x14649b0u;
    { uint32_t ea = 0x5d41d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d41e8u; rt_dispatch(c);
L_5d41e8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    goto L_5d5544;
L_5d4200:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4224; }
L_5d4210:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4210; }
L_5d4224:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4234u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d4284; }
L_5d4244:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4244; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d427c; }
    c->r[0] = 0x146491cu;
    { uint32_t ea = 0x5d426cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d427cu; rt_dispatch(c);
L_5d427c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d4284:;
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_5d5c0c; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[3] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1464adcu;
    { uint32_t ea = 0x5d42b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[16]);
    c->r[8] = c->v.s[0];
    c->r[1] = c->r[8];
    c->r[14] = 0x5d42c4u; f_21a6c8(c);
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d42e8; }
L_5d42d4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d42d4; }
L_5d42e8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x28u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d42f8u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 44u, c->v.s[0]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d434c; }
L_5d4308:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4308; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4340; }
    c->r[0] = 0x1464858u;
    { uint32_t ea = 0x5d4330u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4340u; rt_dispatch(c);
L_5d4340:;
    c->v.s[0] = LD32(c->r[13] + 44u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_5d434c:;
    c->r[0] = 0x1464a38u;
    { uint32_t ea = 0x5d4358u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d5550;
L_5d4364:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4390; }
L_5d437c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d437c; }
L_5d4390:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d43a0u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d43ec; }
L_5d43ac:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d43ac; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d43e4; }
    c->r[0] = 0x14647b4u;
    { uint32_t ea = 0x5d43d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d43e4u; rt_dispatch(c);
L_5d43e4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d43ec:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_5d5c0c; }
    c->r[0] = 0x1464980u;
    c->r[1] = 0x72cu;
    { uint32_t ea = 0x5d4408u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[14] = 0x5d4410u; f_72308c(c);
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[0], 0x80000001u);
    c->r[2] = 0x1u;
    if (COND_CS) { c->r[0] = ~0x80000000u; }
    c->r[1] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_5d5c0c;
L_5d443c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4460; }
L_5d444c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d444c; }
L_5d4460:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4470u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d44c4; }
L_5d4484:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4484; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d44bc; }
    c->r[0] = 0x14646dcu;
    { uint32_t ea = 0x5d44acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d44bcu; rt_dispatch(c);
L_5d44bc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d44c4:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_5d44dc; }
    c->r[0] = 0x1464c08u;
    { uint32_t ea = 0x5d44d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3au; ST16(ea, c->r[5]); }
L_5d44dc:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4500; }
L_5d44ec:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d44ec; }
L_5d4500:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4510u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d4560; }
L_5d4520:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4520; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4558; }
    c->r[0] = 0x1464640u;
    { uint32_t ea = 0x5d4548u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4558u; rt_dispatch(c);
L_5d4558:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d4560:;
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_5d5c0c; }
    c->r[0] = 0x1464b68u;
    { uint32_t ea = 0x5d4578u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0] + 80u, c->v.s[16]);
    goto L_5d5c0c;
L_5d4580:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d53e8; }
L_5d4590:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4590; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d45bcu; f_5d15a4(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d53fc; }
L_5d45c4:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d45c4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d45fc; }
    c->r[0] = 0x146459cu;
    { uint32_t ea = 0x5d45ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d45fcu; rt_dispatch(c);
L_5d45fc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_5d53fc;
L_5d4614:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_5d5c0c; }
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_5d5560; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4650; }
L_5d463c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d463c; }
L_5d4650:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4660u; f_5d0fd4(c);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->v.s[0];
    if (COND_EQ) { goto L_5d46b4; }
L_5d4674:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4674; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d46ac; }
    c->r[0] = 0x14644ecu;
    { uint32_t ea = 0x5d469cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d46acu; rt_dispatch(c);
L_5d46ac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d46b4:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[0] = c->r[8];
    c->r[14] = 0x5d46c0u; f_8cfd8c(c);
    c->r[8] = c->r[0];
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d46f0; }
L_5d46dc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d46dc; }
L_5d46f0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4700u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d474c; }
L_5d470c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d470c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4744; }
    c->r[0] = 0x1464454u;
    { uint32_t ea = 0x5d4734u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4744u; rt_dispatch(c);
L_5d4744:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d474c:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_5d55a0; }
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d4770:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4794; }
L_5d4780:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4780; }
L_5d4794:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d47a4u; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d47f4; }
L_5d47b4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d47b4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d47ec; }
    c->r[0] = 0x14643acu;
    { uint32_t ea = 0x5d47dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d47ecu; rt_dispatch(c);
L_5d47ec:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d47f4:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4818; }
L_5d4804:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4804; }
L_5d4818:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[8] = c->v.s[16];
    c->r[14] = 0x5d482cu; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d4880; }
L_5d4840:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4840; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4878; }
    c->r[0] = 0x1464320u;
    { uint32_t ea = 0x5d4868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4878u; rt_dispatch(c);
L_5d4878:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d4880:;
    (void)f_subs(c, c->r[8], c->r[7]);
    c->r[7] = 0x2710u;
    if (COND_EQ) { goto L_5d5c0c; }
    goto L_5d5cac;
L_5d4898:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d48bc; }
L_5d48a8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d48a8; }
L_5d48bc:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d48ccu; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d491c; }
L_5d48dc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d48dc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4914; }
    c->r[0] = 0x1464284u;
    { uint32_t ea = 0x5d4904u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4914u; rt_dispatch(c);
L_5d4914:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d491c:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4948; }
L_5d4934:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4934; }
L_5d4948:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4958u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d49a4; }
L_5d4964:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4964; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d499c; }
    c->r[0] = 0x14641fcu;
    { uint32_t ea = 0x5d498cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d499cu; rt_dispatch(c);
L_5d499c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d49a4:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_5d5c0c; }
    c->r[1] = 0x1464720u;
    c->r[0] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = 0x5d49c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[16]);
    c->r[2] = c->v.s[0];
    c->r[1] = c->r[1] + (c->r[2] >> 3);
    c->r[2] = c->r[2] & 0x7u;
    { uint32_t ea = c->r[1] + 0x500u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x1cu;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[1], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    goto L_5d20a4;
L_5d49f0:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4a14; }
L_5d4a00:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4a00; }
L_5d4a14:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4a24u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d4a74; }
L_5d4a34:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4a34; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4a6c; }
    c->r[0] = 0x146412cu;
    { uint32_t ea = 0x5d4a5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4a6cu; rt_dispatch(c);
L_5d4a6c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d4a74:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4aa0; }
L_5d4a8c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4a8c; }
L_5d4aa0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4ab0u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d4afc; }
L_5d4abc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4abc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4af4; }
    c->r[0] = 0x14640a4u;
    { uint32_t ea = 0x5d4ae4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4af4u; rt_dispatch(c);
L_5d4af4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d4afc:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_5d5c0c; }
    c->r[0] = 0x1464270u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5d4b18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[16]);
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->v.s[0];
    c->r[14] = 0x5d4b28u; f_723da4(c);
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[1] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + 0x1cu;
    if (COND_NE) { goto L_5d4cf0; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    goto L_5d5c0c;
L_5d4b54:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4b80; }
L_5d4b6c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4b6c; }
L_5d4b80:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4b90u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d4bdc; }
L_5d4b9c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4b9c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4bd4; }
    c->r[0] = 0x1463fc4u;
    { uint32_t ea = 0x5d4bc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4bd4u; rt_dispatch(c);
L_5d4bd4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d4bdc:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { goto L_5d5c0c; }
    c->r[0] = 0x14643c4u;
    c->r[2] = 0x3e0u;
    c->r[1] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = 0x5d4bfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + 0x1cu;
    c->r[2] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[2], 0x9u);
    if (COND_HI) { goto L_5d4cf0; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_5d5c0c;
L_5d4c24:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4c50; }
L_5d4c3c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4c3c; }
L_5d4c50:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4c60u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d4cac; }
L_5d4c6c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4c6c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4ca4; }
    c->r[0] = 0x1463ef4u;
    { uint32_t ea = 0x5d4c94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4ca4u; rt_dispatch(c);
L_5d4ca4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d4cac:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { goto L_5d5c0c; }
    c->r[0] = 0x14642f4u;
    c->r[2] = 0x3e2u;
    c->r[1] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = 0x5d4cccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + 0x1cu;
    c->r[2] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[2], 0xcu);
    if (COND_HI) { goto L_5d4cf0; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_5d5c0c;
L_5d4cf0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_5d5c0c;
L_5d4d08:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4d2c; }
L_5d4d18:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4d18; }
L_5d4d2c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4d3cu; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d4d8c; }
L_5d4d4c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4d4c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4d84; }
    c->r[0] = 0x1463e14u;
    { uint32_t ea = 0x5d4d74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4d84u; rt_dispatch(c);
L_5d4d84:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d4d8c:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4db8; }
L_5d4da4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4da4; }
L_5d4db8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4dc8u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d4e14; }
L_5d4dd4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4dd4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4e0c; }
    c->r[0] = 0x1463d8cu;
    { uint32_t ea = 0x5d4dfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4e0cu; rt_dispatch(c);
L_5d4e0c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d4e14:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_5d5c0c; }
    c->r[0] = c->r[4] + (c->r[0] << 4);
    c->r[5] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x14642a0u;
    { uint32_t ea = 0x5d4e40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[16]);
    c->r[1] = c->v.s[0];
    c->r[14] = 0x5d4e4cu; f_44515c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d5c0c; }
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[5]); }
    goto L_5d5c0c;
L_5d4e6c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4e90; }
L_5d4e7c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4e7c; }
L_5d4e90:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4ea0u; f_5d0fd4(c);
    c->v.s[16] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d4ef0; }
L_5d4eb0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4eb0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4ee8; }
    c->r[0] = 0x1463cb0u;
    { uint32_t ea = 0x5d4ed8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4ee8u; rt_dispatch(c);
L_5d4ee8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d4ef0:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4f14; }
L_5d4f00:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4f00; }
L_5d4f14:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[8] = c->v.s[16];
    c->r[14] = 0x5d4f28u; f_5d0fd4(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->v.s[0];
    if (COND_EQ) { goto L_5d4f7c; }
L_5d4f3c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4f3c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d4f74; }
    c->r[0] = 0x1463c24u;
    { uint32_t ea = 0x5d4f64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d4f74u; rt_dispatch(c);
L_5d4f74:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d4f7c:;
    (void)f_subs(c, c->r[8], c->r[7]);
    c->r[7] = 0x2710u;
    if (COND_GE) { goto L_5d5c0c; }
    goto L_5d5cac;
L_5d4f94:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d4fc0; }
L_5d4fac:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d4fac; }
L_5d4fc0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d4fd0u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d501c; }
L_5d4fdc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d4fdc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d5014; }
    c->r[0] = 0x1463b84u;
    { uint32_t ea = 0x5d5004u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d5014u; rt_dispatch(c);
L_5d5014:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d501c:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_5d5c0c; }
    c->r[1] = 0x1463d4cu;
    c->r[2] = 0x3682u;
    c->r[0] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = 0x5d503cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    goto L_5d5c0c;
L_5d5050:;
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d505c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d5070u; f_5d15a4(c);
L_5d5070:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_5d5c0c; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d542c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
L_5d5090:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d5090; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[3] = c->r[8];
    c->r[14] = 0x5d50bcu; f_5d15a4(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5d5440; }
L_5d50c4:;
    c->r[0] = ldrex32(c, c->r[7]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[7], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d50c4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d50fc; }
    c->r[0] = 0x1463a9cu;
    { uint32_t ea = 0x5d50ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d50fcu; rt_dispatch(c);
L_5d50fc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_5d5440;
L_5d5110:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d5124u; f_5d15a4(c);
L_5d5124:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_5d5c0c; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d5478; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
L_5d5144:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d5144; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[3] = c->r[8];
    c->r[14] = 0x5d5170u; f_5d15a4(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5d548c; }
L_5d5178:;
    c->r[0] = ldrex32(c, c->r[7]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[7], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d5178; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d51b0; }
    c->r[0] = 0x14639e8u;
    { uint32_t ea = 0x5d51a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d51b0u; rt_dispatch(c);
L_5d51b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_5d548c;
L_5d51c4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d51d8u; f_5d15a4(c);
L_5d51d8:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_5d5c0c; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d54d4; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
L_5d51f8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d51f8; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[3] = c->r[8];
    c->r[14] = 0x5d5224u; f_5d15a4(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5d54e8; }
L_5d522c:;
    c->r[0] = ldrex32(c, c->r[7]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[7], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d522c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d5264; }
    c->r[0] = 0x1463934u;
    { uint32_t ea = 0x5d5254u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d5264u; rt_dispatch(c);
L_5d5264:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_5d54e8;
L_5d5280:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d5294u; f_5d15a4(c);
L_5d5294:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_5d5c0c; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d52c4; }
L_5d52b0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d52b0; }
L_5d52c4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d52d4u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d5324; }
L_5d52e4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d52e4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d531c; }
    c->r[0] = 0x146387cu;
    { uint32_t ea = 0x5d530cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d531cu; rt_dispatch(c);
L_5d531c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d5324:;
    c->v.s[0] = 0x3c8efa36u;
    c->v.f[18] = c->v.f[16] * c->v.f[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x5d5334u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x5d5340u; f_15efdf4(c);
    c->v.s[2] = 0x0u;
    c->v.s[8] = LD32(c->r[13] + 128u);
    c->v.s[14] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.s[3] = 0x3f800000u;
    c->v.f[4] = c->v.f[14] * c->v.f[2];
    c->v.f[1] = c->v.f[8] * c->v.f[2];
    c->v.f[12] = c->v.f[6] * c->v.f[2];
    c->v.f[10] = c->v.f[1] + c->v.f[4];
    c->v.f[10] = c->v.f[10] + c->v.f[12];
    c->v.f[5] = c->v.f[10] + c->v.f[3];
    c->v.s[10] = c->v.s[2];
    vfp_cmp_f(c, c->v.f[5], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_5d5380; }
    c->v.f[10] = c->v.f[3] / c->v.f[5];
L_5d5380:;
    c->v.s[3] = c->v.s[4];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[8]);
    c->r[0] = 0x0u;
    c->v.f[14] = c->v.f[1] + c->v.f[14];
    c->r[1] = 0x5u;
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[8] = c->v.f[14] + c->v.f[12];
    c->v.f[0] = c->v.f[8] + c->v.f[2];
    c->v.f[12] = c->v.f[3] + c->v.f[2];
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    c->v.f[6] = c->v.f[12] * c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[0]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + (c->r[5] << 4);
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 28u, c->v.s[6]);
    ST32(c->r[0] + 32u, c->v.s[0]);
    ST32(c->r[0] + 36u, c->v.s[2]);
    goto L_5d5c0c;
L_5d53e8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d53fcu; f_5d15a4(c);
L_5d53fc:;
    c->r[0] = 0x1463cd4u;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5d540cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    goto L_5d5c0c;
L_5d542c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d5440u; f_5d15a4(c);
L_5d5440:;
    c->v.s[0] = LD32(c->r[13] + 112u);
    c->v.s[6] = LD32(c->r[13] + 128u);
    c->v.s[2] = LD32(c->r[13] + 116u);
    c->v.s[8] = LD32(c->r[13] + 132u);
    c->v.s[4] = LD32(c->r[13] + 120u);
    c->v.s[10] = LD32(c->r[13] + 136u);
    c->r[0] = c->r[4] + (c->r[5] << 4);
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    goto L_5d54bc;
L_5d5478:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d548cu; f_5d15a4(c);
L_5d548c:;
    c->v.s[0] = LD32(c->r[13] + 112u);
    c->v.s[6] = LD32(c->r[13] + 128u);
    c->v.s[2] = LD32(c->r[13] + 116u);
    c->v.s[8] = LD32(c->r[13] + 132u);
    c->v.s[4] = LD32(c->r[13] + 120u);
    c->v.s[10] = LD32(c->r[13] + 136u);
    c->r[0] = c->r[4] + (c->r[5] << 4);
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[4] = c->v.f[10] - c->v.f[4];
L_5d54bc:;
    ST32(c->r[0] + 28u, c->v.s[0]);
    ST32(c->r[0] + 32u, c->v.s[2]);
    ST32(c->r[0] + 36u, c->v.s[4]);
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d54d4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d54e8u; f_5d15a4(c);
L_5d54e8:;
    c->r[0] = c->r[4] + (c->r[5] << 4);
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5d256c;
L_5d550c:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[13] + 0x28u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d5520u; f_5d15a4(c);
L_5d5520:;
    c->r[0] = 0x1463864u;
    { uint32_t ea = 0x5d552cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d554c;
L_5d5530:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[13] + 0x28u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d5544u; f_5d15a4(c);
L_5d5544:;
    c->r[0] = 0x1463840u;
    { uint32_t ea = 0x5d5550u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5d554c:;
    c->v.s[0] = LD32(c->r[13] + 44u);
L_5d5550:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x30u;
    c->r[1] = c->r[8];
    c->r[14] = 0x5d5560u; f_21a714(c);
L_5d5560:;
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d556c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d557cu; f_5d15a4(c);
    goto L_5d5c0c;
L_5d5580:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d5594u; f_5d15a4(c);
L_5d5594:;
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_5d55b8; }
L_5d55a0:;
    c->r[0] = c->r[4] + (c->r[0] << 4);
    c->r[1] = 0x1u;
    c->r[7] = 0x2710u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[8]); }
    goto L_5d5c0c;
L_5d55b8:;
    c->r[7] = 0x2710u;
    goto L_5d5c0c;
L_5d55c0:;
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[4] + 0xdcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x32u);
    if (COND_HI) { goto L_5d5c0c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x5d55dcu + 0xcu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5d56c0u: goto L_5d56c0; case 0x5d57b4u: goto L_5d57b4; case 0x5d5824u: goto L_5d5824; case 0x5d5c0cu: goto L_5d5c0c; case 0x5d5c18u: goto L_5d5c18; case 0x5d5c44u: goto L_5d5c44; case 0x5d5c5cu: goto L_5d5c5c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5d56c0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d5c18; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5d5bf4; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x117b626u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5d5bf4; }
    c->r[8] = 0x0u;
L_5d56f8:;
    c->r[1] = c->r[8];
    c->r[14] = 0x5d5700u; f_5d66ac(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5d5798; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_NE) { goto L_5d5798; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d5738; }
L_5d5724:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = strex32(c, c->r[5], c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5d5724; }
L_5d5738:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[2] = 0x40u;
    if (COND_EQ) { c->r[1] = 0x5d5750u + c->r[7]; }
    c->r[14] = 0x5d5750u; f_15f00a0(c);
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d5790; }
L_5d575c:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d575c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d5790; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5d5790u; rt_dispatch(c);
L_5d5790:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_5d5be8; }
L_5d5798:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_CC) { goto L_5d56f8; }
    goto L_5d5bf4;
L_5d57b4:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5d57e8; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_5d5c18; }
    c->r[2] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[2]); }
    c->r[14] = 0x5d57e0u; f_5d66ac(c);
    c->r[6] = c->r[0];
    goto L_5d5824;
L_5d57e8:;
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5d5c18; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[1]); }
    c->r[14] = 0x5d5804u; f_5d66ac(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5d5820; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_NE) { goto L_5d5824; }
    goto L_5d5c18;
L_5d5820:;
    c->r[6] = 0x0u;
L_5d5824:;
    { uint32_t ea = c->r[4] + 0xdeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_EQ) { goto L_5d5ba8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5d5c0c; }
    c->r[0] = c->r[5] - 0x1u;
    (void)f_subs(c, c->r[0], 0xa7u);
    if (COND_HI) { goto L_5d5c0c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x5d5854u + 0x20u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5d187cu: goto L_5d187c; case 0x5d18fcu: goto L_5d18fc; case 0x5d1a24u: goto L_5d1a24; case 0x5d1b44u: goto L_5d1b44; case 0x5d1c6cu: goto L_5d1c6c; case 0x5d1d8cu: goto L_5d1d8c; case 0x5d1eb4u: goto L_5d1eb4; case 0x5d1fd4u: goto L_5d1fd4; case 0x5d1fe8u: goto L_5d1fe8; case 0x5d20b0u: goto L_5d20b0; case 0x5d212cu: goto L_5d212c; case 0x5d21acu: goto L_5d21ac; case 0x5d2244u: goto L_5d2244; case 0x5d2310u: goto L_5d2310; case 0x5d234cu: goto L_5d234c; case 0x5d2388u: goto L_5d2388; case 0x5d23a4u: goto L_5d23a4; case 0x5d245cu: goto L_5d245c; case 0x5d25c8u: goto L_5d25c8; case 0x5d25d0u: goto L_5d25d0; case 0x5d25e0u: goto L_5d25e0; case 0x5d2700u: goto L_5d2700; case 0x5d2828u: goto L_5d2828; case 0x5d2950u: goto L_5d2950; case 0x5d2a78u: goto L_5d2a78; case 0x5d2ba0u: goto L_5d2ba0; case 0x5d2cdcu: goto L_5d2cdc; case 0x5d2d7cu: goto L_5d2d7c; case 0x5d2e28u: goto L_5d2e28; case 0x5d2ec8u: goto L_5d2ec8; case 0x5d2f78u: goto L_5d2f78; case 0x5d301cu: goto L_5d301c; case 0x5d30bcu: goto L_5d30bc; case 0x5d312cu: goto L_5d312c; case 0x5d31d0u: goto L_5d31d0; case 0x5d3290u: goto L_5d3290; case 0x5d33f8u: goto L_5d33f8; case 0x5d3510u: goto L_5d3510; case 0x5d3630u: goto L_5d3630; case 0x5d3750u: goto L_5d3750; case 0x5d3890u: goto L_5d3890; case 0x5d39c4u: goto L_5d39c4; case 0x5d3b00u: goto L_5d3b00; case 0x5d3c30u: goto L_5d3c30; case 0x5d3cc4u: goto L_5d3cc4; case 0x5d3d5cu: goto L_5d3d5c; case 0x5d3df0u: goto L_5d3df0; case 0x5d3e8cu: goto L_5d3e8c; case 0x5d3f4cu: goto L_5d3f4c; case 0x5d40a8u: goto L_5d40a8; case 0x5d4200u: goto L_5d4200; case 0x5d4364u: goto L_5d4364; case 0x5d443cu: goto L_5d443c; case 0x5d4580u: goto L_5d4580; case 0x5d4614u: goto L_5d4614; case 0x5d4770u: goto L_5d4770; case 0x5d4898u: goto L_5d4898; case 0x5d49f0u: goto L_5d49f0; case 0x5d4b54u: goto L_5d4b54; case 0x5d4c24u: goto L_5d4c24; case 0x5d4d08u: goto L_5d4d08; case 0x5d4e6cu: goto L_5d4e6c; case 0x5d4f94u: goto L_5d4f94; case 0x5d5b14u: goto L_5d5b14; case 0x5d5c0cu: goto L_5d5c0c; case 0x5d5c18u: goto L_5d5c18; case 0x5d5c9cu: goto L_5d5c9c; case 0x5d5cacu: goto L_5d5cac; case 0x5d5cc4u: goto L_5d5cc4; case 0x5d5cd0u: goto L_5d5cd0; case 0x5d5cdcu: goto L_5d5cdc; case 0x5d5cfcu: goto L_5d5cfc; case 0x5d5d98u: goto L_5d5d98; case 0x5d5db0u: goto L_5d5db0; case 0x5d5df4u: goto L_5d5df4; case 0x5d5e04u: goto L_5d5e04; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5d5b14:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[5] - 0x65u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d2538; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
L_5d5b2c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d5b2c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[3] = c->r[5];
    c->r[14] = 0x5d5b58u; f_5d15a4(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5d254c; }
L_5d5b60:;
    c->r[0] = ldrex32(c, c->r[7]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[7], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d5b60; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d5b98; }
    c->r[0] = 0x1463000u;
    { uint32_t ea = 0x5d5b88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d5b98u; rt_dispatch(c);
L_5d5b98:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_5d254c;
L_5d5ba8:;
    c->r[0] = c->r[5] - 0x23u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_5d5bd4; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0xdeu; ST16(ea, c->r[0]); } }
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); } }
    goto L_5d5c0c;
L_5d5bd4:;
    (void)f_subs(c, c->r[5], 0x3fu);
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x1u); }
    if (COND_NE) { goto L_5d5c0c; }
    goto L_5d5c9c;
L_5d5be8:;
    c->r[0] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[8]); }
L_5d5bf4:;
    c->r[0] = 0xau;
    c->r[7] = 0x2710u;
    { uint32_t ea = c->r[4] + 0xdcu; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xdeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[0]); }
L_5d5c0c:;
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_CC) { goto L_5d55c0; }
L_5d5c18:;
    c->r[0] = 0x146315cu;
    c->v.s[0] = LD32(c->r[4] + 216u);
    { uint32_t ea = 0x5d5c28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 216u, c->v.s[0]);
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_5d5c44:;
    c->v.s[0] = LD32(c->r[4] + 216u);
    c->v.s[2] = LD32(c->r[4] + 240u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_5d5c18; }
    goto L_5d5c90;
L_5d5c5c:;
    c->r[0] = 0x14637e8u;
    { uint32_t ea = 0x5d5c68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d5c6cu; f_dc831c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5d5c18; }
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d5c90; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    goto L_5d5c18;
L_5d5c90:;
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[0]); }
    goto L_5d5c18;
L_5d5c9c:;
    c->r[0] = 0x28u;
    { uint32_t ea = c->r[4] + 0xdcu; ST16(ea, c->r[0]); }
    goto L_5d5c18;
L_5d5cac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xdcu; ST16(ea, c->r[0]); }
    goto L_5d5c18;
L_5d5cc4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    goto L_5d5c18;
L_5d5cd0:;
    c->r[0] = 0x0u;
    c->r[1] = ~0x0u;
    goto L_5d5ce4;
L_5d5cdc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
L_5d5ce4:;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xdcu; ST16(ea, c->r[0]); }
    goto L_5d5c18;
L_5d5cfc:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d5d20; }
L_5d5d0c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d5d0c; }
L_5d5d20:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d5d30u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d5d80; }
L_5d5d40:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d5d40; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d5d78; }
    c->r[0] = 0x1462e20u;
    { uint32_t ea = 0x5d5d68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d5d78u; rt_dispatch(c);
L_5d5d78:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d5d80:;
    c->v.s[0] = LD32(c->r[4] + 216u);
    c->r[0] = 0x1eu;
    c->v.f[0] = c->v.f[16] + c->v.f[0];
    ST32(c->r[4] + 240u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xdcu; ST16(ea, c->r[0]); }
    goto L_5d5c18;
L_5d5d98:;
    c->r[14] = 0x5d5d9cu; f_5d0ec0(c);
    c->v.s[2] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_5d5de0; }
    goto L_5d5c18;
L_5d5db0:;
    c->r[0] = 0x1462df8u;
    { uint32_t ea = 0x5d5dbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d5dc0u; f_5f8690(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d5de0; }
    c->r[0] = 0x1462e04u;
    { uint32_t ea = 0x5d5dd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x19bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d5c18; }
L_5d5de0:;
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    goto L_5d5c18;
L_5d5df4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xdcu; ST16(ea, c->r[0]); }
    goto L_5d5c18;
L_5d5e04:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5d5e28; }
L_5d5e14:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5d5e14; }
L_5d5e28:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d5e38u; f_5d0fd4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d5e88; }
L_5d5e48:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d5e48; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d5e80; }
    c->r[0] = 0x1462d18u;
    { uint32_t ea = 0x5d5e70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d5e80u; rt_dispatch(c);
L_5d5e80:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_5d5e88:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[16]);
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[16]);
    c->r[0] = c->v.s[2];
    ST32(c->r[4] + 244u, c->v.s[0]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x32u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xdcu; ST16(ea, c->r[0]); } }
    goto L_5d5c18;
}
