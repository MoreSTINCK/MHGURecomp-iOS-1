#include "cpu.h"
#include "neon_rt.h"
void f_27e3894(Cpu *c);
void f_283b27c(Cpu *c);
void f_283b288(Cpu *c);
void f_284f5c8(Cpu *c);
void f_27e4d28(Cpu *restrict c) {
    FN_ENTER(0x27e4d28u);
L_27e4d28:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x24u;
    c->r[9] = c->r[0];
    c->r[10] = c->r[2];
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_EQ) { goto L_27e5aec; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x44u;
    (void)f_subs(c, c->r[0], 0x36u);
    if (COND_HI) { goto L_27e5aec; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x27e4d60u + 0x1cu;
    c->r[6] = 0x3231u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x5555u;
    c->r[7] = 0xaaaau;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x380000u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x5550000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaa0000u;
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x27e4e58u: goto L_27e4e58; case 0x27e4f7cu: goto L_27e4f7c; case 0x27e5024u: goto L_27e5024; case 0x27e5084u: goto L_27e5084; case 0x27e5108u: goto L_27e5108; case 0x27e517cu: goto L_27e517c; case 0x27e5224u: goto L_27e5224; case 0x27e52a0u: goto L_27e52a0; case 0x27e5354u: goto L_27e5354; case 0x27e5424u: goto L_27e5424; case 0x27e54a8u: goto L_27e54a8; case 0x27e5580u: goto L_27e5580; case 0x27e5628u: goto L_27e5628; case 0x27e56c4u: goto L_27e56c4; case 0x27e5728u: goto L_27e5728; case 0x27e57d8u: goto L_27e57d8; case 0x27e585cu: goto L_27e585c; case 0x27e58b4u: goto L_27e58b4; case 0x27e5930u: goto L_27e5930; case 0x27e59b8u: goto L_27e59b8; case 0x27e5a14u: goto L_27e5a14; case 0x27e5a30u: goto L_27e5a30; case 0x27e5aecu: goto L_27e5aec; case 0x27e5af8u: goto L_27e5af8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27e4e58:;
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27e5aec; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x61u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_HI) { goto L_27e5aec; }
    c->r[0] = (c->r[0] << 2);
    c->r[3] = 0x27e4e80u + 0x14u;
    c->r[2] = 0x3233u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6863u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x745f0000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x72610000u;
    c->pc = c->r[0] + c->r[3]; switch (c->pc) { case 0x27e4ee0u: goto L_27e4ee0; case 0x27e5aecu: goto L_27e5aec; case 0x27e8714u: goto L_27e8714; case 0x27e8798u: goto L_27e8798; case 0x27e881cu: goto L_27e881c; case 0x27e88ecu: goto L_27e88ec; case 0x27e89a4u: goto L_27e89a4; case 0x27e8a54u: goto L_27e8a54; case 0x27e8ad8u: goto L_27e8ad8; case 0x27e8b68u: goto L_27e8b68; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27e4ee0:;
    c->r[0] = 0x0u;
    c->r[6] = 0x7561u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x6f740000u;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e8d40; }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[6] >> 24);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[6]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[6] >> 16);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[6] >> 8);
    c->r[6] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x5u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x7u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xbu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x10u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0xdu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x13u; ST32(ea, c->r[0]); }
    goto L_27e8a44;
L_27e4f7c:;
    c->r[0] = 0x0u;
    c->r[6] = 0x6f76u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x64690000u;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27e564c; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e9fa4; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e4ff0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e6408; }
L_27e4ff0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e6304; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5020u; f_283b27c(c);
    goto L_27e6410;
L_27e5024:;
    c->r[0] = 0x20u;
    c->r[14] = 0x27e502cu; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3d34b0u;
    c->r[1] = 0x67u;
    c->r[0] = 0x27e5040u + c->r[0];
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    c->r[1] = 0x6eu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e5bdc; }
    c->r[2] = 0x21u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x12u;
    goto L_27e5a88;
L_27e5084:;
    c->r[1] = 0x3174u;
    c->r[0] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x38320000u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x5f5fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x6e690000u;
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e5c60; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[13] + 8u);
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x9u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0xbu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xau; ST8(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    goto L_27e5b84;
L_27e5108:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27e5110u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3d339cu;
    c->r[1] = 0x69u;
    c->r[0] = 0x27e5124u + c->r[0];
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = 0x6920u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x746e0000u;
    { uint32_t ea = c->r[1] + 0x8u; ST8(ea, c->r[0]); c->r[1] = ea; }
    c->r[0] = 0x74u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6eu;
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e5ce0; }
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xcu;
    goto L_27e5a88;
L_27e517c:;
    c->r[0] = 0x0u;
    c->r[6] = 0x6f62u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x6c6f0000u;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27e564c; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e9fc4; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e51f0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e6a90; }
L_27e51f0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e6334; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5220u; f_283b27c(c);
    goto L_27e6a98;
L_27e5224:;
    c->r[0] = 0x656cu;
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    c->r[0] = 0x6f64u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x62750000u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e5d64; }
    c->r[2] = 0xcu;
    c->r[7] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); c->r[7] = c->r[7] + 0x2u; }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    goto L_27e5928;
L_27e52a0:;
    c->r[1] = 0x2eu;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[1]); }
    c->r[1] = 0x2e2eu;
    { uint32_t ea = c->r[13] + 0x1au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27e5964; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e9fcc; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e5320; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e6e00; }
L_27e5320:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e634c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5350u; f_283b27c(c);
    goto L_27e6e08;
L_27e5354:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27e535cu; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3d3164u;
    c->r[0] = 0x27e536cu + c->r[0];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = c->r[0] + 0x5u;
    { uint32_t ea = c->r[0]; c->v.d[17] = LD64(ea + 0u); }
    c->r[0] = c->r[6] + 0x5u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xdu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27e5a04; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e9fd4; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e53f0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e6fc4; }
L_27e53f0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e6358; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5420u; f_283b27c(c);
    goto L_27e6fcc;
L_27e5424:;
    c->r[0] = 0x74u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = 0x5f72u;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = 0x6377u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x61680000u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e5de4; }
    c->r[2] = 0xeu;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27e5b7c;
L_27e54a8:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27e54b0u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3d3044u;
    c->r[1] = 0x6cu;
    c->r[0] = 0x27e54c4u + c->r[0];
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[1]); }
    c->r[1] = 0x62u;
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = 0x65u;
    { uint32_t ea = c->r[6] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xau; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xbu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27e5718; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e9fdc; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e554c; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e7318; }
L_27e554c:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e6374; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e557cu; f_283b27c(c);
    goto L_27e7320;
L_27e5580:;
    c->r[0] = 0x0u;
    c->r[6] = 0x6f6cu;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x676e0000u;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27e564c; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e9fe4; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e55f4; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e74a4; }
L_27e55f4:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e6380; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5624u; f_283b27c(c);
    goto L_27e74ac;
L_27e5628:;
    c->r[0] = 0x0u;
    c->r[6] = 0x6863u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x72610000u;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e5e64; }
L_27e564c:;
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[6] >> 24);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[6]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[6] >> 16);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[6] >> 8);
    c->r[6] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x5u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x7u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xbu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x10u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0xdu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x13u; ST32(ea, c->r[0]); }
    goto L_27e5ad0;
L_27e56c4:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27e56ccu; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3d2a10u;
    c->r[1] = 0x61u;
    c->r[0] = 0x27e56e0u + c->r[0];
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[1]); }
    c->r[1] = 0x68u;
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = 0x72u;
    { uint32_t ea = c->r[6] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xau; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xbu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e5ee8; }
L_27e5718:;
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xbu;
    goto L_27e5a88;
L_27e5728:;
    c->r[0] = 0x74u;
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6c66u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x616f0000u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27e58e4; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e9fec; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e57a4; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e7990; }
L_27e57a4:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e63a4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e57d4u; f_283b27c(c);
    goto L_27e7998;
L_27e57d8:;
    c->r[0] = 0x74u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = 0x616fu;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = 0x5f5fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x6c660000u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e5f6c; }
    c->r[2] = 0x14u;
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    goto L_27e5b7c;
L_27e585c:;
    c->r[0] = 0x20u;
    c->r[14] = 0x27e5864u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3d28a8u;
    c->r[1] = 0x38u;
    c->r[0] = 0x27e5878u + c->r[0];
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x11u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e5ff4; }
    c->r[2] = 0x21u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x11u;
    goto L_27e5a88;
L_27e58b4:;
    c->r[0] = 0x74u;
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6873u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x726f0000u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e6078; }
L_27e58e4:;
    c->r[2] = 0xau;
    c->r[7] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); c->r[7] = c->r[7] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[0]); }
L_27e5928:;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_27e5a8c;
L_27e5930:;
    c->r[1] = 0x74u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[1]); }
    c->r[1] = 0x6e69u;
    { uint32_t ea = c->r[13] + 0x1au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e60fc; }
L_27e5964:;
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1eu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1au; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST16(ea, c->r[0]); }
    goto L_27e5a8c;
L_27e59b8:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27e59c0u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3d2730u;
    c->r[0] = 0x27e59d0u + c->r[0];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = c->r[0] + 0x5u;
    { uint32_t ea = c->r[0]; c->v.d[17] = LD64(ea + 0u); }
    c->r[0] = c->r[6] + 0x5u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xdu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e617c; }
L_27e5a04:;
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xdu;
    goto L_27e5a88;
L_27e5a14:;
    c->r[6] = c->r[9] + 0x1u;
    c->r[2] = c->r[10];
    c->r[0] = c->r[6];
    c->r[14] = 0x27e5a24u; f_27e3894(c);
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { c->r[9] = c->r[0]; }
    goto L_27e5aec;
L_27e5a30:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27e5a38u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3d26c8u;
    c->r[0] = 0x27e5a48u + c->r[0];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = c->r[0] + 0x6u;
    { uint32_t ea = c->r[0]; c->v.d[17] = LD64(ea + 0u); }
    c->r[0] = c->r[6] + 0x6u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e6200; }
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xeu;
L_27e5a88:;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
L_27e5a8c:;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
L_27e5ad0:;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_27e5adc:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x1u;
L_27e5ae4:;
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
L_27e5aec:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27e5af8:;
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = 0x6c20u;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = 0x6f6cu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x676e0000u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e6284; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[2] = 0x676eu;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
L_27e5b7c:;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
L_27e5b84:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_27e5adc;
L_27e5bdc:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e9fac; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e5c2c; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e65b8; }
L_27e5c2c:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e6310; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5c5cu; f_283b27c(c);
    goto L_27e65c0;
L_27e5c60:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e9fb4; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e5cac; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e6748; }
L_27e5cac:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e631c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5cdcu; f_283b27c(c);
    goto L_27e6750;
L_27e5ce0:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e9fbc; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e5d30; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e6900; }
L_27e5d30:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e6328; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5d60u; f_283b27c(c);
    goto L_27e6908;
L_27e5d64:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e9ff4; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e5db0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e6c40; }
L_27e5db0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e6340; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5de0u; f_283b27c(c);
    goto L_27e6c48;
L_27e5de4:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e9ffc; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e5e30; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e7150; }
L_27e5e30:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e6368; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5e60u; f_283b27c(c);
    goto L_27e7158;
L_27e5e64:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea004; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e5eb4; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e7654; }
L_27e5eb4:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e638c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5ee4u; f_283b27c(c);
    goto L_27e765c;
L_27e5ee8:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea00c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e5f38; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e7804; }
L_27e5f38:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e6398; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5f68u; f_283b27c(c);
    goto L_27e780c;
L_27e5f6c:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea014; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e5fbc; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e7b4c; }
L_27e5fbc:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e63b0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e5fecu; f_283b27c(c);
    goto L_27e7b54;
L_27e5ff4:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea01c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e6044; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e7d1c; }
L_27e6044:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e63bc; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e6074u; f_283b27c(c);
    goto L_27e7d24;
L_27e6078:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea024; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e60c4; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e7ea8; }
L_27e60c4:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e63c8; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e60f4u; f_283b27c(c);
    goto L_27e7eb0;
L_27e60fc:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea02c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e6148; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e8064; }
L_27e6148:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e63d4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e6178u; f_283b27c(c);
    goto L_27e806c;
L_27e617c:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea034; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e61cc; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e8228; }
L_27e61cc:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e63e0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e61fcu; f_283b27c(c);
    goto L_27e8230;
L_27e6200:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea03c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e6250; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e83b4; }
L_27e6250:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e63ec; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e6280u; f_283b27c(c);
    goto L_27e83bc;
L_27e6284:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea044; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e62d0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e8540; }
L_27e62d0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e63f8; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e6300u; f_283b27c(c);
    goto L_27e8548;
L_27e6304:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e6410;
L_27e6310:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e65c0;
L_27e631c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e6750;
L_27e6328:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e6908;
L_27e6334:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e6a98;
L_27e6340:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e6c48;
L_27e634c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e6e08;
L_27e6358:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e6fcc;
L_27e6368:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e7158;
L_27e6374:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e7320;
L_27e6380:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e74ac;
L_27e638c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e765c;
L_27e6398:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e780c;
L_27e63a4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e7998;
L_27e63b0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e7b54;
L_27e63bc:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e7d24;
L_27e63c8:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e7eb0;
L_27e63d4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e806c;
L_27e63e0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e8230;
L_27e63ec:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e83bc;
L_27e63f8:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e8548;
L_27e6408:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e6410:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x8u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = (c->r[6] >> 8);
    c->r[3] = (c->r[6] >> 24);
    c->r[0] = c->r[0] + (c->r[7] << 3);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[6]); c->r[2] = ea; }
    c->r[5] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[6] >> 16);
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[3]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[4] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_27e6510; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e64bc:;
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
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_NE) { goto L_27e64bc; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27e6518;
L_27e6510:;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e6518:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[4], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e6564; }
L_27e652c:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e6540; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e6540u; f_283b288(c);
L_27e6540:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e6558; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e6558u; f_283b288(c);
L_27e6558:;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_27e652c; }
L_27e6564:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e65b0; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e65a8; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e65a8; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e65b0; }
    goto L_27e86f8;
L_27e65a8:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e65b0u; f_283b288(c);
L_27e65b0:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e65b8:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e65c0:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x21u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0x12u;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e66a0; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e664c:;
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
    if (COND_NE) { goto L_27e664c; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e66a8;
L_27e66a0:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e66a8:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e66f4; }
L_27e66bc:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e66d0; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e66d0u; f_283b288(c);
L_27e66d0:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e66e8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e66e8u; f_283b288(c);
L_27e66e8:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e66bc; }
L_27e66f4:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e6740; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e6738; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e6738; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e6740; }
    goto L_27e86f8;
L_27e6738:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e6740u; f_283b288(c);
L_27e6740:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e6748:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e6750:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x10u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->v.d[16] = LD64(c->r[13] + 8u);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x9u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0xbu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xau; ST8(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e6858; }
L_27e6804:;
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
    if (COND_NE) { goto L_27e6804; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e685c;
L_27e6858:;
    c->r[6] = c->r[7];
L_27e685c:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e68a8; }
L_27e6870:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e6884; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e6884u; f_283b288(c);
L_27e6884:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e689c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e689cu; f_283b288(c);
L_27e689c:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e6870; }
L_27e68a8:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e68f4; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e68ec; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e68ec; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e68f4; }
    goto L_27e86f8;
L_27e68ec:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e68f4u; f_283b288(c);
L_27e68f4:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e6900:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e6908:;
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
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e69e8; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e6994:;
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
    if (COND_NE) { goto L_27e6994; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e69f0;
L_27e69e8:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e69f0:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e6a3c; }
L_27e6a04:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e6a18; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e6a18u; f_283b288(c);
L_27e6a18:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e6a30; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e6a30u; f_283b288(c);
L_27e6a30:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e6a04; }
L_27e6a3c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e6a88; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e6a80; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e6a80; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e6a88; }
    goto L_27e86f8;
L_27e6a80:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e6a88u; f_283b288(c);
L_27e6a88:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e6a90:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e6a98:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x8u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = (c->r[6] >> 8);
    c->r[3] = (c->r[6] >> 24);
    c->r[0] = c->r[0] + (c->r[7] << 3);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[6]); c->r[2] = ea; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[6] >> 16);
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e6b98; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e6b48:;
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
    if (COND_NE) { goto L_27e6b48; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e6ba0;
L_27e6b98:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e6ba0:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e6bec; }
L_27e6bb4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e6bc8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e6bc8u; f_283b288(c);
L_27e6bc8:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e6be0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e6be0u; f_283b288(c);
L_27e6be0:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e6bb4; }
L_27e6bec:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e6c38; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e6c30; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e6c30; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e6c38; }
    goto L_27e86f8;
L_27e6c30:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e6c38u; f_283b288(c);
L_27e6c38:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e6c40:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e6c48:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0xcu;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    c->r[5] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e6d5c; }
L_27e6d0c:;
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
    if (COND_NE) { goto L_27e6d0c; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e6d60;
L_27e6d5c:;
    c->r[6] = c->r[7];
L_27e6d60:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e6dac; }
L_27e6d74:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e6d88; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e6d88u; f_283b288(c);
L_27e6d88:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e6da0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e6da0u; f_283b288(c);
L_27e6da0:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e6d74; }
L_27e6dac:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e6df8; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e6df0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e6df0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e6df8; }
    goto L_27e86f8;
L_27e6df0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e6df8u; f_283b288(c);
L_27e6df8:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e6e00:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e6e08:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x6u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x1eu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1au; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e6f20; }
L_27e6ed0:;
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
    if (COND_NE) { goto L_27e6ed0; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e6f24;
L_27e6f20:;
    c->r[6] = c->r[7];
L_27e6f24:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e6f70; }
L_27e6f38:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e6f4c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e6f4cu; f_283b288(c);
L_27e6f4c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e6f64; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e6f64u; f_283b288(c);
L_27e6f64:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e6f38; }
L_27e6f70:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e6fbc; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e6fb4; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e6fb4; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e6fbc; }
    goto L_27e86f8;
L_27e6fb4:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e6fbcu; f_283b288(c);
L_27e6fbc:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e6fc4:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e6fcc:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xdu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e70a8; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e7058:;
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
    if (COND_NE) { goto L_27e7058; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e70b0;
L_27e70a8:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e70b0:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e70fc; }
L_27e70c4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e70d8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e70d8u; f_283b288(c);
L_27e70d8:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e70f0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e70f0u; f_283b288(c);
L_27e70f0:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e70c4; }
L_27e70fc:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e7148; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e7140; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e7140; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e7148; }
    goto L_27e86f8;
L_27e7140:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e7148u; f_283b288(c);
L_27e7148:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e7150:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e7158:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0xeu;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e7274; }
L_27e7224:;
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
    if (COND_NE) { goto L_27e7224; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e7278;
L_27e7274:;
    c->r[6] = c->r[7];
L_27e7278:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e72c4; }
L_27e728c:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e72a0; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e72a0u; f_283b288(c);
L_27e72a0:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e72b8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e72b8u; f_283b288(c);
L_27e72b8:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e728c; }
L_27e72c4:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e7310; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e7308; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e7308; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e7310; }
    goto L_27e86f8;
L_27e7308:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e7310u; f_283b288(c);
L_27e7310:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e7318:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e7320:;
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
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e73fc; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e73ac:;
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
    if (COND_NE) { goto L_27e73ac; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e7404;
L_27e73fc:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e7404:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e7450; }
L_27e7418:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e742c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e742cu; f_283b288(c);
L_27e742c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e7444; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e7444u; f_283b288(c);
L_27e7444:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e7418; }
L_27e7450:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e749c; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e7494; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e7494; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e749c; }
    goto L_27e86f8;
L_27e7494:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e749cu; f_283b288(c);
L_27e749c:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e74a4:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e74ac:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x8u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = (c->r[6] >> 8);
    c->r[3] = (c->r[6] >> 24);
    c->r[0] = c->r[0] + (c->r[7] << 3);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[6]); c->r[2] = ea; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[6] >> 16);
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e75ac; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e755c:;
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
    if (COND_NE) { goto L_27e755c; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e75b4;
L_27e75ac:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e75b4:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e7600; }
L_27e75c8:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e75dc; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e75dcu; f_283b288(c);
L_27e75dc:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e75f4; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e75f4u; f_283b288(c);
L_27e75f4:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e75c8; }
L_27e7600:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e764c; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e7644; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e7644; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e764c; }
    goto L_27e86f8;
L_27e7644:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e764cu; f_283b288(c);
L_27e764c:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e7654:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e765c:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x8u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = (c->r[6] >> 8);
    c->r[3] = (c->r[6] >> 24);
    c->r[0] = c->r[0] + (c->r[7] << 3);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[6]); c->r[2] = ea; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[6] >> 16);
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e775c; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e770c:;
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
    if (COND_NE) { goto L_27e770c; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e7764;
L_27e775c:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e7764:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e77b0; }
L_27e7778:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e778c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e778cu; f_283b288(c);
L_27e778c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e77a4; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e77a4u; f_283b288(c);
L_27e77a4:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e7778; }
L_27e77b0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e77fc; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e77f4; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e77f4; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e77fc; }
    goto L_27e86f8;
L_27e77f4:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e77fcu; f_283b288(c);
L_27e77fc:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e7804:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e780c:;
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
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e78e8; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e7898:;
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
    if (COND_NE) { goto L_27e7898; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e78f0;
L_27e78e8:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e78f0:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e793c; }
L_27e7904:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e7918; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e7918u; f_283b288(c);
L_27e7918:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e7930; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e7930u; f_283b288(c);
L_27e7930:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e7904; }
L_27e793c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e7988; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e7980; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e7980; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e7988; }
    goto L_27e86f8;
L_27e7980:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e7988u; f_283b288(c);
L_27e7988:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e7990:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e7998:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0xau;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e7aa8; }
L_27e7a58:;
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
    if (COND_NE) { goto L_27e7a58; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e7aac;
L_27e7aa8:;
    c->r[6] = c->r[7];
L_27e7aac:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e7af8; }
L_27e7ac0:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e7ad4; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e7ad4u; f_283b288(c);
L_27e7ad4:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e7aec; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e7aecu; f_283b288(c);
L_27e7aec:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e7ac0; }
L_27e7af8:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e7b44; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e7b3c; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e7b3c; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e7b44; }
    goto L_27e86f8;
L_27e7b3c:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e7b44u; f_283b288(c);
L_27e7b44:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e7b4c:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e7b54:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e7c74; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e7c24:;
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
    if (COND_NE) { goto L_27e7c24; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e7c7c;
L_27e7c74:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e7c7c:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e7cc8; }
L_27e7c90:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e7ca4; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e7ca4u; f_283b288(c);
L_27e7ca4:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e7cbc; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e7cbcu; f_283b288(c);
L_27e7cbc:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e7c90; }
L_27e7cc8:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e7d14; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e7d0c; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e7d0c; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e7d14; }
    goto L_27e86f8;
L_27e7d0c:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e7d14u; f_283b288(c);
L_27e7d14:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e7d1c:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e7d24:;
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
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e7e00; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e7db0:;
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
    if (COND_NE) { goto L_27e7db0; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e7e08;
L_27e7e00:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e7e08:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e7e54; }
L_27e7e1c:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e7e30; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e7e30u; f_283b288(c);
L_27e7e30:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e7e48; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e7e48u; f_283b288(c);
L_27e7e48:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e7e1c; }
L_27e7e54:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e7ea0; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e7e98; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e7e98; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e7ea0; }
    goto L_27e86f8;
L_27e7e98:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e7ea0u; f_283b288(c);
L_27e7ea0:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e7ea8:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e7eb0:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0xau;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e7fc0; }
L_27e7f70:;
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
    if (COND_NE) { goto L_27e7f70; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e7fc4;
L_27e7fc0:;
    c->r[6] = c->r[7];
L_27e7fc4:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e8010; }
L_27e7fd8:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e7fec; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e7fecu; f_283b288(c);
L_27e7fec:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e8004; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e8004u; f_283b288(c);
L_27e8004:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e7fd8; }
L_27e8010:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e805c; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e8054; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e8054; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e805c; }
    goto L_27e86f8;
L_27e8054:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e805cu; f_283b288(c);
L_27e805c:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e8064:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e806c:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x6u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x1eu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1au; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e8184; }
L_27e8134:;
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
    if (COND_NE) { goto L_27e8134; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e8188;
L_27e8184:;
    c->r[6] = c->r[7];
L_27e8188:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e81d4; }
L_27e819c:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e81b0; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e81b0u; f_283b288(c);
L_27e81b0:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e81c8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e81c8u; f_283b288(c);
L_27e81c8:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e819c; }
L_27e81d4:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e8220; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e8218; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e8218; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e8220; }
    goto L_27e86f8;
L_27e8218:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e8220u; f_283b288(c);
L_27e8220:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e8228:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e8230:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xdu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e830c; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e82bc:;
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
    if (COND_NE) { goto L_27e82bc; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e8314;
L_27e830c:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e8314:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e8360; }
L_27e8328:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e833c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e833cu; f_283b288(c);
L_27e833c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e8354; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e8354u; f_283b288(c);
L_27e8354:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e8328; }
L_27e8360:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e83ac; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e83a4; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e83a4; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e83ac; }
    goto L_27e86f8;
L_27e83a4:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e83acu; f_283b288(c);
L_27e83ac:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e83b4:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e83bc:;
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
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e8498; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e8448:;
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
    if (COND_NE) { goto L_27e8448; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e84a0;
L_27e8498:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e84a0:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e84ec; }
L_27e84b4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e84c8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e84c8u; f_283b288(c);
L_27e84c8:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e84e0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e84e0u; f_283b288(c);
L_27e84e0:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e84b4; }
L_27e84ec:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e8538; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e8530; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e8530; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e8538; }
    goto L_27e86f8;
L_27e8530:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e8538u; f_283b288(c);
L_27e8538:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e8540:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e8548:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[2] = 0x676eu;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e8668; }
L_27e8618:;
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
    if (COND_NE) { goto L_27e8618; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e866c;
L_27e8668:;
    c->r[6] = c->r[7];
L_27e866c:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e86b8; }
L_27e8680:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e8694; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e8694u; f_283b288(c);
L_27e8694:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e86ac; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e86acu; f_283b288(c);
L_27e86ac:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e8680; }
L_27e86b8:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e870c; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e8704; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e8704; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e870c; }
L_27e86f8:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e8704:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e870cu; f_283b288(c);
L_27e870c:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_27e5aec;
L_27e8714:;
    c->r[0] = 0x6cu;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = 0x616du;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = 0x6564u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x69630000u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e8c40; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[2] = 0x3436u;
    goto L_27e8b58;
L_27e8798:;
    c->r[0] = 0x6cu;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = 0x616du;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = 0x6564u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x69630000u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e8cc0; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[2] = 0x3631u;
    goto L_27e8b58;
L_27e881c:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27e8824u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3cfd34u;
    c->r[0] = 0x27e8834u + c->r[0];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = c->r[0] + 0x6u;
    { uint32_t ea = c->r[0]; c->v.d[17] = LD64(ea + 0u); }
    c->r[0] = c->r[6] + 0x6u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27e89f0; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea04c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e88b8; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e9580; }
L_27e88b8:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e8ff0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e88e8u; f_283b27c(c);
    goto L_27e9588;
L_27e88ec:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27e8ba8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea054; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e8970; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e970c; }
L_27e8970:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e8ffc; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e89a0u; f_283b27c(c);
    goto L_27e9714;
L_27e89a4:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27e89acu; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3cfbbcu;
    c->r[0] = 0x27e89bcu + c->r[0];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = c->r[0] + 0x6u;
    { uint32_t ea = c->r[0]; c->v.d[17] = LD64(ea + 0u); }
    c->r[0] = c->r[6] + 0x6u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e8dc4; }
L_27e89f0:;
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xeu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
L_27e8a44:;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27e8c34;
L_27e8a54:;
    c->r[0] = 0x6cu;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = 0x616du;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = 0x6564u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x69630000u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e8e48; }
    c->r[2] = 0x14u;
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    goto L_27e8b5c;
L_27e8ad8:;
    c->r[0] = 0x6cu;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = 0x616du;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = 0x6564u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x69630000u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e8ecc; }
    c->r[2] = 0x12u;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[2] = 0x3233u;
L_27e8b58:;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
L_27e8b5c:;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    goto L_27e8be0;
L_27e8b68:;
    c->r[3] = 0x3feu;
    c->r[0] = 0x0u;
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e8f4c; }
L_27e8ba8:;
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[13] + 8u);
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x9u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0xbu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xau; ST8(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_27e8be0:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_27e8c34:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x2u;
    goto L_27e5ae4;
L_27e8c40:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea05c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e8c8c; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e9038; }
L_27e8c8c:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e8fcc; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e8cbcu; f_283b27c(c);
    goto L_27e9040;
L_27e8cc0:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea064; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e8d0c; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e9204; }
L_27e8d0c:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e8fd8; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e8d3cu; f_283b27c(c);
    goto L_27e920c;
L_27e8d40:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea06c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e8d90; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e93d0; }
L_27e8d90:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e8fe4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e8dc0u; f_283b27c(c);
    goto L_27e93d8;
L_27e8dc4:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea074; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e8e14; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e98c0; }
L_27e8e14:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e9008; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e8e44u; f_283b27c(c);
    goto L_27e98c8;
L_27e8e48:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea07c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e8e98; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e9a50; }
L_27e8e98:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e9014; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e8ec8u; f_283b27c(c);
    goto L_27e9a58;
L_27e8ecc:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea084; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e8f18; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e9c20; }
L_27e8f18:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e9020; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e8f48u; f_283b27c(c);
    goto L_27e9c28;
L_27e8f4c:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ea08c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27e8f98; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e9dec; }
L_27e8f98:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e902c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e8fc8u; f_283b27c(c);
    goto L_27e9df4;
L_27e8fcc:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e9040;
L_27e8fd8:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e920c;
L_27e8fe4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e93d8;
L_27e8ff0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e9588;
L_27e8ffc:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e9714;
L_27e9008:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e98c8;
L_27e9014:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e9a58;
L_27e9020:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e9c28;
L_27e902c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e9df4;
L_27e9038:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e9040:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[2] = 0x3436u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e9160; }
L_27e9110:;
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
    if (COND_NE) { goto L_27e9110; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e9164;
L_27e9160:;
    c->r[6] = c->r[7];
L_27e9164:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e91b0; }
L_27e9178:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e918c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e918cu; f_283b288(c);
L_27e918c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e91a4; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e91a4u; f_283b288(c);
L_27e91a4:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e9178; }
L_27e91b0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e91fc; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e91f4; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e91f4; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e91fc; }
    goto L_27e9f88;
L_27e91f4:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e91fcu; f_283b288(c);
L_27e91fc:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27e5aec;
L_27e9204:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e920c:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[2] = 0x3631u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e932c; }
L_27e92dc:;
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
    if (COND_NE) { goto L_27e92dc; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e9330;
L_27e932c:;
    c->r[6] = c->r[7];
L_27e9330:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e937c; }
L_27e9344:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9358; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9358u; f_283b288(c);
L_27e9358:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9370; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9370u; f_283b288(c);
L_27e9370:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e9344; }
L_27e937c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e93c8; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e93c0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e93c0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e93c8; }
    goto L_27e9f88;
L_27e93c0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e93c8u; f_283b288(c);
L_27e93c8:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27e5aec;
L_27e93d0:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e93d8:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x8u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = (c->r[6] >> 8);
    c->r[3] = (c->r[6] >> 24);
    c->r[0] = c->r[0] + (c->r[7] << 3);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[6]); c->r[2] = ea; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[6] >> 16);
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e94d8; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e9488:;
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
    if (COND_NE) { goto L_27e9488; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e94e0;
L_27e94d8:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e94e0:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e952c; }
L_27e94f4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9508; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9508u; f_283b288(c);
L_27e9508:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9520; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9520u; f_283b288(c);
L_27e9520:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e94f4; }
L_27e952c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e9578; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e9570; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e9570; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e9578; }
    goto L_27e9f88;
L_27e9570:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e9578u; f_283b288(c);
L_27e9578:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27e5aec;
L_27e9580:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e9588:;
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
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e9664; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e9614:;
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
    if (COND_NE) { goto L_27e9614; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e966c;
L_27e9664:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e966c:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e96b8; }
L_27e9680:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9694; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9694u; f_283b288(c);
L_27e9694:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e96ac; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e96acu; f_283b288(c);
L_27e96ac:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e9680; }
L_27e96b8:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e9704; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e96fc; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e96fc; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e9704; }
    goto L_27e9f88;
L_27e96fc:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e9704u; f_283b288(c);
L_27e9704:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27e5aec;
L_27e970c:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e9714:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x10u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->v.d[16] = LD64(c->r[13] + 8u);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x9u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0xbu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xau; ST8(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e981c; }
L_27e97c8:;
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
    if (COND_NE) { goto L_27e97c8; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e9820;
L_27e981c:;
    c->r[6] = c->r[7];
L_27e9820:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e986c; }
L_27e9834:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9848; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9848u; f_283b288(c);
L_27e9848:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9860; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9860u; f_283b288(c);
L_27e9860:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e9834; }
L_27e986c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e98b8; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e98b0; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e98b0; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e98b8; }
    goto L_27e9f88;
L_27e98b0:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e98b8u; f_283b288(c);
L_27e98b8:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27e5aec;
L_27e98c0:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e98c8:;
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
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e99a8; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e9954:;
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
    if (COND_NE) { goto L_27e9954; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e99b0;
L_27e99a8:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e99b0:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e99fc; }
L_27e99c4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e99d8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e99d8u; f_283b288(c);
L_27e99d8:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e99f0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e99f0u; f_283b288(c);
L_27e99f0:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e99c4; }
L_27e99fc:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e9a48; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e9a40; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e9a40; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e9a48; }
    goto L_27e9f88;
L_27e9a40:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e9a48u; f_283b288(c);
L_27e9a48:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27e5aec;
L_27e9a50:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e9a58:;
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[3] = 0x14u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[4] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e9b78; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e9b28:;
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
    if (COND_NE) { goto L_27e9b28; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e9b80;
L_27e9b78:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27e9b80:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e9bcc; }
L_27e9b94:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9ba8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9ba8u; f_283b288(c);
L_27e9ba8:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9bc0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9bc0u; f_283b288(c);
L_27e9bc0:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e9b94; }
L_27e9bcc:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e9c18; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e9c10; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e9c10; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e9c18; }
    goto L_27e9f88;
L_27e9c10:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e9c18u; f_283b288(c);
L_27e9c18:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27e5aec;
L_27e9c20:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e9c28:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[2] = 0x3233u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e9d48; }
L_27e9cf8:;
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
    if (COND_NE) { goto L_27e9cf8; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e9d4c;
L_27e9d48:;
    c->r[6] = c->r[7];
L_27e9d4c:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e9d98; }
L_27e9d60:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9d74; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9d74u; f_283b288(c);
L_27e9d74:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9d8c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9d8cu; f_283b288(c);
L_27e9d8c:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e9d60; }
L_27e9d98:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e9de4; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e9ddc; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e9ddc; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e9de4; }
    goto L_27e9f88;
L_27e9ddc:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e9de4u; f_283b288(c);
L_27e9de4:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27e5aec;
L_27e9dec:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27e9df4:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x10u;
    c->r[1] = c->r[0];
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->v.d[16] = LD64(c->r[13] + 8u);
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x9u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0xbu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xau; ST8(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
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
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e9ef8; }
L_27e9ea8:;
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
    if (COND_NE) { goto L_27e9ea8; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27e9efc;
L_27e9ef8:;
    c->r[6] = c->r[7];
L_27e9efc:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e9f48; }
L_27e9f10:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9f24; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9f24u; f_283b288(c);
L_27e9f24:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e9f3c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e9f3cu; f_283b288(c);
L_27e9f3c:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27e9f10; }
L_27e9f48:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e9f9c; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27e9f94; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27e9f94; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27e9f9c; }
L_27e9f88:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[9] = c->r[9] + 0x2u;
    goto L_27e5aec;
L_27e9f94:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e9f9cu; f_283b288(c);
L_27e9f9c:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27e5aec;
L_27e9fa4:;
    c->r[14] = 0x27e9facu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e9fac:;
    c->r[14] = 0x27e9fb4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e9fb4:;
    c->r[14] = 0x27e9fbcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e9fbc:;
    c->r[14] = 0x27e9fc4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e9fc4:;
    c->r[14] = 0x27e9fccu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e9fcc:;
    c->r[14] = 0x27e9fd4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e9fd4:;
    c->r[14] = 0x27e9fdcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e9fdc:;
    c->r[14] = 0x27e9fe4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e9fe4:;
    c->r[14] = 0x27e9fecu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e9fec:;
    c->r[14] = 0x27e9ff4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e9ff4:;
    c->r[14] = 0x27e9ffcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e9ffc:;
    c->r[14] = 0x27ea004u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea004:;
    c->r[14] = 0x27ea00cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea00c:;
    c->r[14] = 0x27ea014u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea014:;
    c->r[14] = 0x27ea01cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea01c:;
    c->r[14] = 0x27ea024u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea024:;
    c->r[14] = 0x27ea02cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea02c:;
    c->r[14] = 0x27ea034u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea034:;
    c->r[14] = 0x27ea03cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea03c:;
    c->r[14] = 0x27ea044u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea044:;
    c->r[14] = 0x27ea04cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea04c:;
    c->r[14] = 0x27ea054u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea054:;
    c->r[14] = 0x27ea05cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea05c:;
    c->r[14] = 0x27ea064u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea064:;
    c->r[14] = 0x27ea06cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea06c:;
    c->r[14] = 0x27ea074u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea074:;
    c->r[14] = 0x27ea07cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea07c:;
    c->r[14] = 0x27ea084u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea084:;
    c->r[14] = 0x27ea08cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ea08c:;
    c->r[14] = 0x27ea094u;
    __attribute__((musttail)) return f_284f5c8(c);
}
