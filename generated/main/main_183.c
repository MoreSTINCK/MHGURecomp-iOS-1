#include "cpu.h"
#include "neon_rt.h"
void f_9aa47c(Cpu *c);
void f_9cc110(Cpu *c);
void f_9d9734(Cpu *c);
void f_c03cb0(Cpu *c);
void f_d85a14(Cpu *c);
void f_e8d128(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15efddc(Cpu *c);
void f_c03ddc(Cpu *restrict c) {
    FN_ENTER(0xc03ddcu);
L_c03ddc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x158u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c03e40; }
    c->r[4] = 0x0u;
L_c03e0c:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03e34; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc03e2cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c03e34:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c03e0c; }
L_c03e40:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03e70; }
    c->r[0] = 0xe34d00u;
    { uint32_t ea = 0xc03e5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc03e5cu; f_9aa47c(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc03e70u; rt_dispatch(c);
L_c03e70:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c03eac; }
    c->r[0] = 0xe38d24u;
    c->r[1] = 0xe3f2b8u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xc03ea4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc03ea8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc03eacu; f_d85a14(c);
L_c03eac:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c063f0; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe35584u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0xc03ec8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x84u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = (c->r[10] << 5);
    c->pc = c->r[3]; c->r[14] = 0xc03ee0u; rt_dispatch(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (c->r[10] << 2);
    c->pc = c->r[3]; c->r[14] = 0xc03efcu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3f21cu;
    { uint32_t ea = 0xc03f0cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xc03f10u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc03f28u; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0xe3f1f0u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = 0xc03f3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe34c00u;
    { uint32_t ea = 0xc03f4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
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
    if (COND_EQ) { goto L_c03f98; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03ff0; }
    { uint32_t ea = c->r[1] + 0x4eu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c04008; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c04010;
L_c03f98:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_c03fbc; }
    c->r[0] = 0xe354a0u;
    { uint32_t ea = 0xc03facu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xc03fbcu; rt_dispatch(c);
L_c03fbc:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c063f0; }
    c->r[0] = 0xe35478u;
    { uint32_t ea = 0xc03fd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_c03ff0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c040e0;
L_c04008:;
    c->r[0] = 0xe35bbcu;
    { uint32_t ea = 0xc04014u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_c04010:;
    c->v.s[0] = 0x0u;
    c->v.s[12] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[6] + 8u);
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
    if (COND_EQ) { goto L_c04098; }
    c->v.f[0] = c->v.f[16] / c->v.f[18];
L_c04098:;
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
L_c040e0:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_CS) { goto L_c0411c; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c0419c;
L_c0411c:;
    c->r[0] = 0xe34a34u;
    { uint32_t ea = 0xc04128u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc0412cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[6] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[8] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc04148u; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[6] = c->r[0];
    c->r[14] = 0xc04154u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xc0416cu; f_15efdd0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xc04174u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc04184u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x110u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + 0x10cu; ST32(ea, c->r[1]); }
L_c0419c:;
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    if (COND_LE) { goto L_c041d4; }
    c->r[0] = 0xe34988u;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[10]); }
    c->v.s[16] = 0x358637beu;
    c->r[9] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0xc041c4u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0xe34980u;
    { uint32_t ea = 0xc041ccu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    goto L_c04210;
L_c041d4:;
    c->r[4] = c->r[10] - 0x1u;
    goto L_c05cb4;
L_c041dc:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + (c->r[12] << 5); ST32(ea, c->r[2]); c->r[4] = ea; }
    c->r[12] = c->r[12] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[12]); }
    goto L_c04390;
L_c04210:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    c->r[0] = c->r[4];
    c->r[14] = 0xc04224u; f_e8d128(c);
    c->r[5] = c->r[5] + 0x1u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[1] = c->r[5];
    c->r[14] = 0xc0423cu; f_e8d128(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_c04390; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x5u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[12] + 0x82u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    c->r[1] = 0x0u;
    if (COND_CC) { goto L_c04270; }
    { uint32_t ea = c->r[12] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 4);
L_c04270:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_c042b0; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
L_c04284:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_c042a8; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[7] = c->r[7] + 0x1cu;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CC) { goto L_c04284; }
    c->r[7] = 0x0u;
    goto L_c042b0;
L_c042a8:;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = v; }
L_c042b0:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[2] | (c->r[7] << 16);
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[12] + 0x80u; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[0] = 0x0u; }
    c->r[2] = c->r[1] + (c->r[7] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CS) { goto L_c042f8; }
    c->r[6] = c->r[10] + 0x8u;
    c->r[7] = c->r[10] + 0x4u;
    c->r[2] = c->r[10];
    goto L_c04308;
L_c042f8:;
    { uint32_t ea = c->r[12] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[7] + (c->r[2] << 4);
    c->r[6] = c->r[2] + 0x8u;
    c->r[7] = c->r[2] + 0x4u;
L_c04308:;
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_CS) { goto L_c04338; }
    c->r[3] = c->r[8] + 0x8u;
    c->r[7] = c->r[8] + 0x4u;
    c->r[4] = c->r[8];
    goto L_c04348;
L_c04338:;
    { uint32_t ea = c->r[12] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[3] + (c->r[4] << 4);
    c->r[3] = c->r[4] + 0x8u;
    c->r[7] = c->r[4] + 0x4u;
L_c04348:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->r[2];
    c->v.s[4] = c->r[1];
    c->v.s[2] = c->r[6];
    c->v.s[6] = c->r[7];
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
    if (COND_PL) { goto L_c041dc; }
L_c04390:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LT) { goto L_c04210; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_c05cb4; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x42b40000u;
    c->v.s[4] = 0x3c8efa36u;
    c->v.s[20] = 0x2f800000u;
    c->v.s[26] = 0x0u;
    c->v.s[28] = 0x3a83126fu;
    c->v.s[30] = 0x34000000u;
    c->v.s[22] = 0x3f800000u;
    c->v.s[24] = 0x3f000000u;
    c->r[8] = 0x0u;
    c->r[1] = c->r[10] + (c->r[4] << 5);
    c->v.s[2] = LD32(c->r[0] + 452u);
    { uint32_t ea = c->r[0] + 0x130u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x134u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x138u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    c->r[0] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x4u;
    c->v.f[18] = c->v.f[0] * c->v.f[4];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x14u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe35774u;
    { uint32_t ea = 0xc04440u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe35784u;
    { uint32_t ea = 0xc0444cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3ecd0u;
    { uint32_t ea = 0xc04458u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3ecc8u;
    { uint32_t ea = 0xc04464u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe346d8u;
    { uint32_t ea = 0xc04474u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe346dcu;
    { uint32_t ea = 0xc04480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3ec9cu;
    { uint32_t ea = 0xc0448cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3ec94u;
    { uint32_t ea = 0xc04498u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe346a4u;
    { uint32_t ea = 0xc044a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe346a8u;
    { uint32_t ea = 0xc044b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe356f4u;
    { uint32_t ea = 0xc044c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3ec5cu;
    { uint32_t ea = 0xc044ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3ec54u;
    { uint32_t ea = 0xc044d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe34664u;
    { uint32_t ea = 0xc044e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe34668u;
    { uint32_t ea = 0xc044f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3ec28u;
    { uint32_t ea = 0xc04500u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3ec20u;
    { uint32_t ea = 0xc0450cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe34630u;
    { uint32_t ea = 0xc0451cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe34634u;
    { uint32_t ea = 0xc04528u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3ebf4u;
    { uint32_t ea = 0xc04534u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3ebecu;
    { uint32_t ea = 0xc04540u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe345fcu;
    { uint32_t ea = 0xc04550u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe34600u;
    { uint32_t ea = 0xc0455cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
L_c0455c:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_GE) { goto L_c05ca0; }
    c->r[6] = c->r[8];
    goto L_c04f48;
L_c04578:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc04580u; f_9cc110(c);
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[6] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_c045ec; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[28] = c->v.s[30];
    c->v.s[3] = c->v.s[26];
    c->v.s[30] = c->v.s[20];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4eu; uint32_t v = LD16(ea); c->r[0] = v; }
    ST32(c->r[13] + 24u, c->v.s[18]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c04648; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c0464c;
L_c045ec:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->v.f[1] = c->v.f[4] - c->v.f[2];
    c->v.s[19] = c->v.s[2];
    c->v.s[27] = c->v.s[6];
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[4] = 0x0u;
    c->v.s[10] = LD32(c->r[0] + 504u);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[21] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[12] = c->v.f[22] - c->v.f[10];
    c->v.s[14] = LD32(c->r[0]);
    c->v.f[12] = c->v.f[12] * c->v.f[24];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[0] = c->v.f[14] - c->v.f[21];
    c->v.f[10] = c->v.f[8] - c->v.f[6];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[12] * c->v.f[1]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[10] * c->v.f[12]);
    goto L_c04724;
L_c04648:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_c0464c:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[1] = LD32(c->r[0] + 52u);
    c->v.s[13] = LD32(c->r[0] + 36u);
    c->v.s[19] = LD32(c->r[0] + 20u);
    c->v.s[11] = LD32(c->r[0] + 4u);
    c->v.s[9] = LD32(c->r[0] + 16u);
    c->v.s[29] = LD32(c->r[0] + 48u);
    c->v.s[21] = LD32(c->r[0] + 32u);
    c->v.s[15] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.s[14] = LD32(c->r[0] + 24u);
    c->v.s[20] = LD32(c->r[0] + 56u);
    c->v.s[27] = LD32(c->r[0] + 40u);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.s[26] = c->v.s[3];
    c->v.s[7] = LD32(c->r[1] + 324u);
    c->v.s[12] = LD32(c->r[1] + 320u);
    c->v.s[0] = LD32(c->r[1] + 328u);
    c->v.f[5] = c->v.f[13] * c->v.f[1];
    c->v.f[18] = c->v.f[19] * c->v.f[1];
    c->v.f[1] = c->v.f[11] * c->v.f[1];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[21] * c->v.f[29]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[9] * c->v.f[29]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[15] * c->v.f[29]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[27] * c->v.f[20]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[14] * c->v.f[20]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[20]);
    c->v.f[31] = c->v.f[7] * c->v.f[3];
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[12] * c->v.f[3]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[0] * c->v.f[3]);
    c->v.f[31] = c->v.f[31] + c->v.f[22];
    vfp_cmp_f(c, c->v.f[31], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_c046d8; }
    c->v.f[3] = c->v.f[22] / c->v.f[31];
L_c046d8:;
    c->v.f[13] = c->v.f[13] * c->v.f[7];
    c->v.f[20] = c->v.f[19] * c->v.f[7];
    c->v.f[7] = c->v.f[11] * c->v.f[7];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[21] * c->v.f[12]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[9] * c->v.f[12]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[15] * c->v.f[12]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[27] * c->v.f[0]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[14] * c->v.f[0]);
    c->v.f[10] = c->v.f[20] - c->v.f[18];
    c->v.f[0] = c->v.f[13] - c->v.f[5];
    c->v.f[12] = c->v.f[7] - c->v.f[1];
    c->v.s[20] = c->v.s[30];
    c->v.s[30] = c->v.s[28];
    c->v.s[28] = 0x3a83126fu;
    c->v.s[18] = LD32(c->r[13] + 24u);
    c->v.f[19] = c->v.f[0] * c->v.f[3];
    c->v.f[21] = c->v.f[10] * c->v.f[3];
    c->v.f[27] = c->v.f[12] * c->v.f[3];
L_c04724:;
    c->v.f[29] = c->v.f[27] - c->v.f[25];
    c->v.s[0] = c->v.s[26];
    c->v.f[31] = c->v.f[19] - c->v.f[23];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[31] * c->v.f[31]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c047b0; }
    c->v.f[31] = c->v.f[6] - c->v.f[8];
    c->v.f[29] = c->v.f[2] - c->v.f[4];
    c->v.s[2] = c->v.s[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[31] * c->v.f[31]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c0477c; }
    c->v.s[0] = c->v.s[2];
    c->r[7] = c->r[12];
    c->r[14] = 0xc04774u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[7];
L_c0477c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[30]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c047f0; }
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.f[29] = c->v.f[29] * c->v.f[0];
    c->v.f[31] = c->v.f[31] * c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[26];
    goto L_c047f4;
L_c047b0:;
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c047d4; }
    c->r[7] = c->r[12];
    c->r[14] = 0xc047c8u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.s[2] = c->v.s[0];
    c->r[12] = c->r[7];
L_c047d4:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[30]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c047ec; }
    c->v.f[0] = c->v.f[22] / c->v.f[2];
    c->v.f[31] = c->v.f[31] * c->v.f[0];
    c->v.f[29] = c->v.f[29] * c->v.f[0];
L_c047ec:;
    c->v.s[31] = c->v.s[31] ^ 0x80000000u;
L_c047f0:;
    c->v.s[0] = c->v.s[26];
L_c047f4:;
    c->v.f[4] = c->v.f[17] - c->v.f[21];
    c->v.f[6] = c->v.f[25] - c->v.f[27];
    c->v.f[2] = c->v.f[21] * c->v.f[0];
    ST32(c->r[13] + 256u, c->v.s[31]);
    ST32(c->r[13] + 260u, c->v.s[0]);
    c->v.f[0] = c->v.f[23] - c->v.f[19];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[27] * c->v.f[31]);
    ST32(c->r[13] + 264u, c->v.s[29]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[29]);
    c->v.f[4] = c->v.f[4] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[0]);
    ST32(c->r[13] + 268u, c->v.s[2]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_c04844; }
L_c04838:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_c05c8c;
L_c04844:;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[4]); }
    c->r[2] = c->r[13] + 0x154u;
    c->r[3] = c->r[13] + 0x150u;
    c->r[10] = c->r[12];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + (c->r[8] << 5);
    c->r[0] = c->r[13] + 0x100u;
    c->r[1] = c->r[5];
    c->r[14] = 0xc04898u; f_9d9734(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[9] = LD32(ea + 8u); }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_c04aa8; }
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[6] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[5] + 24u);
    c->v.s[8] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 4u);
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[8]); }
    c->r[8] = c->r[8] + 0x1u;
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    c->v.f[8] = c->v.f[10] + c->v.f[2];
    (void)f_subs(c, c->r[8], c->r[0]);
    c->r[0] = c->r[9];
    c->v.f[2] = c->v.f[4] * c->v.f[24];
    c->v.f[4] = c->v.f[8] * c->v.f[24];
    c->v.f[0] = c->v.f[0] * c->v.f[24];
    if (COND_EQ) { goto L_c04944; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[8] << 5);
    c->v.s[6] = LD32(c->r[0] + 16u);
    c->v.s[1] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 20u);
    c->v.s[12] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 24u);
    c->v.s[14] = LD32(c->r[0] + 8u);
    c->v.f[10] = c->v.f[14] + c->v.f[10];
    c->v.f[8] = c->v.f[12] + c->v.f[8];
    c->v.f[6] = c->v.f[1] + c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[24];
    c->v.f[8] = c->v.f[8] * c->v.f[24];
    c->v.f[6] = c->v.f[6] * c->v.f[24];
    c->r[0] = c->v.s[10];
    c->r[2] = c->v.s[8];
    c->r[1] = c->v.s[6];
L_c04944:;
    c->v.s[6] = c->r[2];
    c->v.s[8] = c->r[1];
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[10];
    c->v.f[17] = c->v.f[6] - c->v.f[4];
    c->v.f[19] = c->v.f[8] - c->v.f[0];
    c->v.s[4] = c->r[0];
    c->v.f[21] = c->v.f[4] - c->v.f[2];
    c->v.f[0] = c->v.f[17] * c->v.f[17];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c04c08; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c049a0; }
    c->r[14] = 0xc04994u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.s[2] = c->v.s[0];
    c->r[12] = c->r[10];
L_c049a0:;
    c->v.f[0] = c->v.f[22] / c->v.f[2];
    c->v.f[2] = c->v.f[19] * c->v.f[0];
    c->v.f[4] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[21] * c->v.f[0];
    c->v.f[2] = fabsf(c->v.f[2]);
    c->v.f[4] = fabsf(c->v.f[4]);
    c->v.f[0] = fabsf(c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[26]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[26]);
    c->v.f[0] = fabsf(c->v.f[4]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[22] : c->v.s[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c04c18; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xc049ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[6]; c->r[14] = 0xc04a04u; rt_dispatch(c);
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
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_c06324; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c04c28; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] + 0x1u;
    c->r[4] = 0x0u;
    c->r[12] = c->r[10];
    { uint32_t ea = c->r[3] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LT) { goto L_c04844; }
    goto L_c04838;
L_c04aa8:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xc04ab4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[6]; c->r[14] = 0xc04accu; rt_dispatch(c);
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_c061d0; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x175u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c04e4c; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x174u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c04e4c; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[8];
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = (c->r[0] >> 16) & 0xffu;
    { uint32_t ea = c->r[4] + 0x82u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_c04b70; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[1] + (c->r[0] << 4);
L_c04b70:;
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    { uint32_t ea = c->r[14] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { c->r[6] = 0x0u; }
    c->v.f[19] = c->v.f[8] - c->v.f[4];
    c->v.f[17] = c->v.f[6] - c->v.f[0];
    c->v.f[21] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[19] * c->v.f[19];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c04bd8; }
    c->r[4] = c->r[14];
    c->r[14] = 0xc04bc8u; f_15efddc(c);
    c->r[14] = c->r[4];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[2] = c->v.s[0];
L_c04bd8:;
    c->v.f[4] = c->v.f[22] / c->v.f[2];
    { uint32_t ea = c->r[14] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[8] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    c->v.f[0] = c->v.f[21] * c->v.f[4];
    c->v.f[2] = c->v.f[19] * c->v.f[4];
    c->v.f[4] = c->v.f[17] * c->v.f[4];
    if (COND_CS) { goto L_c04cd4; }
    c->r[8] = c->r[7];
    goto L_c04d90;
L_c04c08:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LT) { goto L_c04844; }
    goto L_c04838;
L_c04c18:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LT) { goto L_c04844; }
    goto L_c04838;
L_c04c28:;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0xc04c38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[6] = (c->r[10] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xc04c54u; rt_dispatch(c);
    c->r[1] = c->r[6];
    c->r[4] = c->r[0];
    c->r[14] = 0xc04c60u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[4];
    c->r[14] = 0xc04c78u; f_15efdd0(c);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0xc04c84u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc04c94u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x118u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x110u; ST32(ea, c->r[10]); }
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[7] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LT) { goto L_c04844; }
    goto L_c04838;
L_c04cd4:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[8] = c->r[7];
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_c04d90; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->v.s[6] = LD32(c->r[3] + 376u);
    c->v.s[8] = c->r[2];
    c->v.f[8] = (float)c->v.s[8];
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c04d90; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[5] + 0x4u;
    c->v.s[10] = LD32(c->r[5]);
    c->v.s[1] = c->r[12];
    c->r[2] = c->r[5] + 0x8u;
    c->v.s[3] = c->r[9];
    c->v.s[8] = LD32(c->r[3]);
    c->v.s[12] = LD32(c->r[2]);
    c->v.s[14] = c->r[7];
    c->v.f[1] = c->v.f[10] - c->v.f[1];
    c->v.f[3] = c->v.f[12] - c->v.f[3];
    c->v.f[14] = c->v.f[8] - c->v.f[14];
    c->v.f[14] = c->v.f[14] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[1] = c->v.f[6] * c->v.f[6];
    vfp_cmp_f(c, c->v.f[14], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c04d94; }
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[10] + 16u, c->v.s[10]);
    ST32(c->r[10] + 20u, c->v.s[8]);
    ST32(c->r[10] + 24u, c->v.s[12]);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c04d94;
L_c04d90:;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[7] = v; }
L_c04d94:;
    c->r[0] = c->r[0] + (c->r[6] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_c04e4c; }
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c04e4c; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[1] + 376u);
    c->v.s[8] = c->r[0];
    c->v.f[8] = (float)c->v.s[8];
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c04e4c; }
    c->r[1] = c->r[5] + 0x14u;
    c->r[2] = c->r[5] + 0x10u;
    c->v.s[14] = c->r[7];
    c->v.s[1] = c->r[12];
    c->r[0] = c->r[5] + 0x18u;
    c->v.s[3] = c->r[9];
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
    if (COND_PL) { goto L_c04e4c; }
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[0] * c->v.f[6]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[10] + 16u, c->v.s[10]);
    ST32(c->r[10] + 20u, c->v.s[8]);
    ST32(c->r[10] + 24u, c->v.s[12]);
L_c04e4c:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c04e8c; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c04f1c;
L_c04e8c:;
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[9]); }
    c->r[9] = c->r[7];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0xc04ea0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[6] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xc04ebcu; rt_dispatch(c);
    c->r[1] = c->r[6];
    c->r[5] = c->r[0];
    c->r[14] = 0xc04ec8u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[5];
    c->r[14] = 0xc04ee0u; f_15efdd0(c);
    c->r[0] = c->r[7];
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[14] = 0xc04ef0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc04f00u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0x118u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x110u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[6] + 0x10cu; ST32(ea, c->r[1]); }
L_c04f1c:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[10]); }
    c->r[0] = c->r[8];
    c->r[4] = 0x0u;
    c->r[5] = c->r[7];
    c->r[14] = c->r[9];
    c->r[8] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LT) { goto L_c04844; }
    goto L_c04838;
L_c04f48:;
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_c04fb0; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[13] + 0x140u;
    c->r[2] = c->r[2] + 0x140u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[4]); }
    c->r[7] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    goto L_c05048;
L_c04fb0:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + (c->r[3] << 5);
    c->v.s[2] = LD32(c->r[0] + 16u);
    c->v.s[12] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 20u);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 24u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.s[0] = LD32(c->r[1] + 504u);
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[4]); }
    c->v.f[14] = c->v.f[2] - c->v.f[12];
    c->v.f[1] = c->v.f[4] - c->v.f[8];
    c->v.f[3] = c->v.f[6] - c->v.f[10];
    c->v.f[0] = c->v.f[22] - c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[24];
    c->v.f[14] = c->v.f[14] * c->v.f[0];
    c->v.f[1] = c->v.f[1] * c->v.f[0];
    c->v.f[0] = c->v.f[3] * c->v.f[0];
    c->v.f[12] = c->v.f[12] + c->v.f[14];
    c->v.f[10] = c->v.f[10] + c->v.f[0];
    c->v.f[2] = c->v.f[2] - c->v.f[14];
    c->v.f[8] = c->v.f[8] + c->v.f[1];
    c->v.f[4] = c->v.f[4] - c->v.f[1];
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    ST32(c->r[13] + 320u, c->v.s[12]);
    ST32(c->r[13] + 324u, c->v.s[8]);
    ST32(c->r[13] + 328u, c->v.s[10]);
    ST32(c->r[13] + 288u, c->v.s[2]);
    ST32(c->r[13] + 292u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 296u, c->v.s[0]);
L_c05048:;
    (void)f_subs(c, c->r[8], c->r[6]);
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    if (COND_LE) { goto L_c05060; }
    c->r[6] = c->r[3];
    goto L_c05c90;
L_c05060:;
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[12]); }
    c->v.s[23] = c->r[14];
    c->v.s[17] = c->r[5];
    c->v.s[25] = c->r[12];
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_c0518c; }
    c->r[10] = c->r[10] + (c->r[8] << 5);
    c->r[4] = 0x0u;
    c->r[7] = c->r[8];
L_c05098:;
    c->r[5] = c->r[10] + c->r[4];
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[2] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[5] + 24u);
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5]);
    c->v.f[2] = c->v.f[2] - c->v.f[17];
    c->v.f[10] = c->v.f[10] - c->v.f[25];
    c->v.f[0] = c->v.f[0] - c->v.f[25];
    c->v.f[8] = c->v.f[8] - c->v.f[23];
    c->v.f[4] = c->v.f[4] - c->v.f[23];
    c->v.f[6] = c->v.f[6] - c->v.f[17];
    c->v.f[14] = c->v.f[8] * c->v.f[0];
    c->v.f[1] = c->v.f[6] * c->v.f[4];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[12] = c->v.f[10] * c->v.f[2];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[0] = fabsf(c->v.f[14]);
    c->v.f[2] = fabsf(c->v.f[1]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    c->v.f[4] = fabsf(c->v.f[12]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c0510c; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    c->r[6] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_c0512c; }
L_c0510c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    c->r[6] = 0x2u;
    c->r[0] = 0x2u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_GT) { c->r[6] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_LE) { c->r[6] = c->r[0]; }
L_c0512c:;
    c->r[1] = c->r[13] + 0x130u;
    c->r[2] = c->r[5];
    c->r[3] = c->r[6];
    c->r[14] = 0xc0513cu; f_c03cb0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c05280; }
    c->r[1] = c->r[13] + 0x110u;
    c->r[2] = c->r[5];
    c->r[3] = c->r[6];
    c->r[14] = 0xc05154u; f_c03cb0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c05280; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_c04578; }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    c->r[4] = c->r[4] + 0x20u;
    c->r[7] = c->r[0];
    if (COND_LT) { goto L_c05098; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_c05268;
L_c0518c:;
    c->r[5] = c->r[10] + (c->r[8] << 5);
    c->r[4] = c->r[8] - 0x1u;
L_c05194:;
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[2] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[5] + 24u);
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5]);
    c->v.f[2] = c->v.f[2] - c->v.f[17];
    c->v.f[10] = c->v.f[10] - c->v.f[25];
    c->v.f[0] = c->v.f[0] - c->v.f[25];
    c->v.f[8] = c->v.f[8] - c->v.f[23];
    c->v.f[4] = c->v.f[4] - c->v.f[23];
    c->v.f[6] = c->v.f[6] - c->v.f[17];
    c->v.f[14] = c->v.f[8] * c->v.f[0];
    c->v.f[1] = c->v.f[6] * c->v.f[4];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[12] = c->v.f[10] * c->v.f[2];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[0] = fabsf(c->v.f[14]);
    c->v.f[2] = fabsf(c->v.f[1]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    c->v.f[4] = fabsf(c->v.f[12]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[6] = 0x0u; }
    if (COND_GT) { vfp_cmp_f(c, c->v.f[2], c->v.f[4]); }
    if (COND_GT) { vfp_mrs_flags(c); }
    if (COND_GT) { goto L_c05220; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    c->r[6] = 0x2u;
    c->r[0] = 0x2u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_GT) { c->r[6] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_LE) { c->r[6] = c->r[0]; }
L_c05220:;
    c->r[1] = c->r[13] + 0x130u;
    c->r[2] = c->r[5];
    c->r[3] = c->r[6];
    c->r[14] = 0xc05230u; f_c03cb0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c05280; }
    c->r[1] = c->r[13] + 0x110u;
    c->r[2] = c->r[5];
    c->r[3] = c->r[6];
    c->r[14] = 0xc05248u; f_c03cb0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_c05280; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[5] = c->r[5] + 0x20u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { goto L_c05194; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[6] = v; }
L_c05268:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[4] = 0x0u;
    goto L_c05c90;
L_c05280:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[5] + (c->r[9] << 5);
    c->r[14] = 0xc05294u; f_9cc110(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[8] = c->r[0];
    c->v.s[2] = LD32(c->r[4] + 8u);
    c->v.s[4] = LD32(c->r[4]);
    c->v.s[6] = LD32(c->r[4] + 16u);
    c->v.s[17] = LD32(c->r[4] + 4u);
    c->v.s[0] = LD32(c->r[1] + 504u);
    c->v.f[10] = (float)c->v.s[8];
    c->v.s[8] = LD32(c->r[4] + 24u);
    c->v.f[14] = c->v.f[6] - c->v.f[4];
    c->v.s[19] = c->v.s[4];
    c->v.s[21] = c->v.s[2];
    c->v.f[12] = c->v.f[22] - c->v.f[0];
    c->v.f[10] = c->v.f[10] * c->v.f[20];
    c->v.f[12] = c->v.f[12] * c->v.f[24];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.s[0] = LD32(c->r[4] + 20u);
    c->v.f[10] = c->v.f[8] - c->v.f[2];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[14] * c->v.f[12]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.f[10] = c->v.f[0] - c->v.f[17];
    c->v.s[0] = c->v.s[26];
    c->v.f[25] = c->v.f[19] - c->v.f[25];
    c->v.f[23] = c->v.f[21] - c->v.f[23];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[23]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c05358; }
    c->v.f[23] = c->v.f[4] - c->v.f[6];
    c->v.f[25] = c->v.f[2] - c->v.f[8];
    c->v.s[2] = c->v.s[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c05338; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc05338u; f_15efddc(c);
L_c05338:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[30]);
    c->r[4] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c053a0; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.s[0] = c->v.s[26];
    goto L_c053b4;
L_c05358:;
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c05370; }
    c->r[14] = 0xc0536cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c05370:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[30]);
    c->r[4] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c0538c; }
    c->v.f[0] = c->v.f[22] / c->v.f[2];
    c->v.f[23] = c->v.f[23] * c->v.f[0];
    c->v.f[25] = c->v.f[25] * c->v.f[0];
L_c0538c:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.s[23] = c->v.s[23] ^ 0x80000000u;
    c->v.s[0] = c->v.s[26];
    goto L_c053b4;
L_c053a0:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.f[25] = c->v.f[25] * c->v.f[0];
    c->v.f[23] = c->v.f[23] * c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[26];
L_c053b4:;
    c->v.f[2] = c->v.f[17] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[23]);
    ST32(c->r[13] + 256u, c->v.s[23]);
    ST32(c->r[13] + 260u, c->v.s[0]);
    (void)f_subs(c, c->r[8], c->r[9]);
    ST32(c->r[13] + 264u, c->v.s[25]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[25]);
    c->v.s[0] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 268u, c->v.s[0]);
    if (COND_LS) { goto L_c053e4; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_c05c84;
L_c053e4:;
    c->r[0] = c->r[5] + (c->r[8] << 5);
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] - 0x1u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_c054fc;
L_c05400:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_c05c74;
L_c05438:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0xc05444u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc05460u; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[6] = c->r[0];
    c->r[14] = 0xc0546cu; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xc05484u; f_15efdd0(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xc0548cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc0549cu; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x110u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[9] = v; }
L_c054b8:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_c05c74;
L_c054fc:;
    c->v.s[0] = c->r[12];
    c->v.s[2] = c->r[5];
    c->v.s[4] = c->r[14];
    c->v.f[0] = c->v.f[0] - c->v.f[19];
    c->v.f[2] = c->v.f[2] - c->v.f[17];
    c->v.f[4] = c->v.f[4] - c->v.f[21];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c05c74; }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[4]); }
    c->r[2] = c->r[13] + 0x154u;
    c->r[3] = c->r[13] + 0x150u;
    c->r[6] = c->r[12];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + c->r[10];
    c->r[0] = c->r[13] + 0x100u;
    c->r[1] = c->r[5];
    c->r[14] = 0xc05580u; f_9d9734(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c05670; }
    (void)f_subs(c, c->r[9], c->r[8]);
    if (COND_NE) { goto L_c05888; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[8]); }
    c->r[8] = c->r[9];
    c->r[9] = c->r[1];
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xc055c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[5]; c->r[14] = 0xc055d8u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_c06124; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c05a60; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] + 0x1u;
    c->r[12] = c->r[9];
    c->r[9] = c->r[8];
    c->r[14] = c->r[6];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[3] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_c05c74;
L_c05670:;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xc05688u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc056a0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_c05e18; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x175u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c05bb8; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x174u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c05bb8; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = (c->r[0] >> 16) & 0xffu;
    { uint32_t ea = c->r[7] + 0x82u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_c05744; }
    { uint32_t ea = c->r[7] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + (c->r[0] << 4);
L_c05744:;
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    { uint32_t ea = c->r[3] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_EQ) { c->r[9] = 0x0u; }
    c->v.f[25] = c->v.f[8] - c->v.f[4];
    c->v.f[23] = c->v.f[6] - c->v.f[0];
    c->v.f[27] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[25] * c->v.f[25];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c057b0; }
    c->r[7] = c->r[3];
    c->r[14] = 0xc0579cu; f_15efddc(c);
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[2] = c->v.s[0];
L_c057b0:;
    c->v.f[4] = c->v.f[22] / c->v.f[2];
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x80u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    c->v.f[0] = c->v.f[27] * c->v.f[4];
    c->v.f[2] = c->v.f[25] * c->v.f[4];
    c->v.f[4] = c->v.f[23] * c->v.f[4];
    if (COND_CC) { goto L_c05b08; }
    c->r[4] = c->r[3];
    { uint32_t ea = c->r[7] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_c05b08; }
    { uint32_t ea = c->r[7] + 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->v.s[6] = LD32(c->r[3] + 376u);
    c->v.s[8] = c->r[2];
    c->v.f[8] = (float)c->v.s[8];
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c05b08; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[8] = LD32(c->r[5]);
    c->v.s[10] = LD32(c->r[5] + 4u);
    c->v.s[1] = c->r[12];
    c->v.s[12] = LD32(c->r[5] + 8u);
    c->v.s[3] = c->r[14];
    c->v.s[14] = c->r[2];
    c->r[2] = 0x0u;
    c->v.f[1] = c->v.f[8] - c->v.f[1];
    c->v.f[3] = c->v.f[12] - c->v.f[3];
    c->v.f[14] = c->v.f[10] - c->v.f[14];
    c->v.f[14] = c->v.f[14] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[1] = c->v.f[6] * c->v.f[6];
    vfp_cmp_f(c, c->v.f[14], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c05b0c; }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); }
    ST32(c->r[6] + 16u, c->v.s[8]);
    ST32(c->r[6] + 20u, c->v.s[10]);
    ST32(c->r[6] + 24u, c->v.s[12]);
    { uint32_t ea = c->r[7] + 0x80u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c05b0c;
L_c05888:;
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[6] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[5] + 20u);
    c->v.s[8] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5] + 24u);
    c->v.s[10] = LD32(c->r[5] + 8u);
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], c->r[8]);
    c->r[0] = c->r[3];
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    c->v.f[8] = c->v.f[8] + c->v.f[2];
    c->v.f[2] = c->v.f[4] * c->v.f[24];
    c->v.f[4] = c->v.f[8] * c->v.f[24];
    c->v.f[0] = c->v.f[0] * c->v.f[24];
    if (COND_EQ) { goto L_c0590c; }
    c->v.s[6] = LD32(c->r[5] + 48u);
    c->v.s[12] = LD32(c->r[5] + 32u);
    c->v.s[8] = LD32(c->r[5] + 52u);
    c->v.s[14] = LD32(c->r[5] + 36u);
    c->v.s[10] = LD32(c->r[5] + 56u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->v.f[10] = c->v.f[1] + c->v.f[10];
    c->v.f[8] = c->v.f[14] + c->v.f[8];
    c->v.f[6] = c->v.f[12] + c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[24];
    c->v.f[8] = c->v.f[8] * c->v.f[24];
    c->v.f[6] = c->v.f[6] * c->v.f[24];
    c->r[0] = c->v.s[10];
    c->r[2] = c->v.s[8];
    c->r[1] = c->v.s[6];
L_c0590c:;
    c->v.s[6] = c->r[2];
    c->v.s[8] = c->r[1];
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[6];
    c->v.f[23] = c->v.f[6] - c->v.f[4];
    c->v.f[25] = c->v.f[8] - c->v.f[0];
    c->v.s[4] = c->r[0];
    c->v.f[27] = c->v.f[4] - c->v.f[2];
    c->v.f[0] = c->v.f[23] * c->v.f[23];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c05a58; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c0596c; }
    c->r[5] = c->r[3];
    c->r[14] = 0xc0595cu; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.s[2] = c->v.s[0];
    c->r[3] = c->r[5];
    c->r[12] = c->r[6];
L_c0596c:;
    c->v.f[0] = c->v.f[22] / c->v.f[2];
    c->v.f[2] = c->v.f[25] * c->v.f[0];
    c->v.f[4] = c->v.f[23] * c->v.f[0];
    c->v.f[0] = c->v.f[27] * c->v.f[0];
    c->v.f[2] = fabsf(c->v.f[2]);
    c->v.f[4] = fabsf(c->v.f[4]);
    c->v.f[0] = fabsf(c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[26]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[26]);
    c->v.f[0] = fabsf(c->v.f[4]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[22] : c->v.s[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c05400; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[12]); }
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xc059c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[5]; c->r[14] = 0xc059d8u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_c06280; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c05438; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c054b8;
L_c05a58:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_c05c74;
L_c05a60:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xc05a78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc05a94u; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[6] = c->r[0];
    c->r[14] = 0xc05aa0u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xc05ab8u; f_15efdd0(c);
    c->r[0] = c->r[8];
    c->r[14] = 0xc05ac0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc05ad0u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x110u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_c05c74;
L_c05b08:;
    c->r[2] = 0x0u;
L_c05b0c:;
    c->r[0] = c->r[0] + (c->r[9] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_c05bb8; }
    { uint32_t ea = c->r[7] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c05bb8; }
    { uint32_t ea = c->r[7] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[1] + 376u);
    c->v.s[8] = c->r[0];
    c->v.f[8] = (float)c->v.s[8];
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c05bb8; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[5] + 16u);
    c->v.s[10] = LD32(c->r[5] + 20u);
    c->v.s[1] = c->r[12];
    c->v.s[12] = LD32(c->r[5] + 24u);
    c->v.s[3] = c->r[14];
    c->v.s[14] = c->r[0];
    c->v.f[1] = c->v.f[8] - c->v.f[1];
    c->v.f[3] = c->v.f[12] - c->v.f[3];
    c->v.f[14] = c->v.f[10] - c->v.f[14];
    c->v.f[14] = c->v.f[14] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[1] = c->v.f[6] * c->v.f[6];
    vfp_cmp_f(c, c->v.f[14], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c05bb8; }
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[0] * c->v.f[6]);
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); }
    ST32(c->r[6] + 16u, c->v.s[8]);
    ST32(c->r[6] + 20u, c->v.s[10]);
    ST32(c->r[6] + 24u, c->v.s[12]);
L_c05bb8:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c05be4; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c05c64;
L_c05be4:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[14] = 0xc05bf0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc05c0cu; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[5] = c->r[0];
    c->r[14] = 0xc05c18u; f_15efd7c(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[5];
    c->r[14] = 0xc05c2cu; f_15efdd0(c);
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc05c34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc05c44u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x110u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
L_c05c64:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[9] = v; }
L_c05c74:;
    c->r[8] = c->r[8] + 0x1u;
    c->r[10] = c->r[10] + 0x20u;
    (void)f_subs(c, c->r[8], c->r[9]);
    if (COND_LS) { goto L_c054fc; }
L_c05c84:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[8] = v; }
L_c05c8c:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[10] = v; }
L_c05c90:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_LT) { goto L_c04f48; }
L_c05ca0:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_LT) { goto L_c0455c; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_c05cb8;
L_c05cb4:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[10] = v; }
L_c05cb8:;
    c->r[0] = 0xe3d464u;
    { uint32_t ea = 0xc05cc4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xc05cc8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc05ce0u; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0xe3d438u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = 0xc05cf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe32e48u;
    { uint32_t ea = 0xc05d04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
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
    if (COND_EQ) { goto L_c05d50; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c05dfc; }
    { uint32_t ea = c->r[1] + 0x4eu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c05ec4; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c05ecc;
L_c05d50:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_c05d74; }
    c->r[0] = 0xe336e8u;
    { uint32_t ea = 0xc05d64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10];
    c->pc = c->r[2]; c->r[14] = 0xc05d74u; rt_dispatch(c);
L_c05d74:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c05d98; }
    c->r[0] = 0xe336c0u;
    { uint32_t ea = 0xc05d8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc05d98u; rt_dispatch(c);
L_c05d98:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c05de0; }
    c->r[4] = 0x0u;
L_c05dac:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c05dd4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc05dccu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c05dd4:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c05dac; }
L_c05de0:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c063dc; }
    c->r[0] = 0xe32d60u;
    { uint32_t ea = 0xc05dfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c063c4;
L_c05dfc:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c05fa0;
L_c05e18:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c05e3c; }
    c->r[0] = 0xe3361cu;
    { uint32_t ea = 0xc05e30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc05e3cu; rt_dispatch(c);
L_c05e3c:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c05e60; }
    c->r[0] = 0xe335f8u;
    { uint32_t ea = 0xc05e54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc05e60u; rt_dispatch(c);
L_c05e60:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c05ea8; }
    c->r[4] = 0x0u;
L_c05e74:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c05e9c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc05e94u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c05e9c:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c05e74; }
L_c05ea8:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c063dc; }
    c->r[0] = 0xe32c98u;
    { uint32_t ea = 0xc05ec4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c063c4;
L_c05ec4:;
    c->r[0] = 0xe33d00u;
    { uint32_t ea = 0xc05ed0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_c05ecc:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = 0x0u;
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
    c->v.s[12] = LD32(c->r[1] + 324u);
    c->v.s[4] = LD32(c->r[1] + 320u);
    c->v.s[2] = LD32(c->r[1] + 328u);
    c->v.f[8] = c->v.f[1] * c->v.f[7];
    c->v.f[14] = c->v.f[13] * c->v.f[7];
    c->v.f[9] = c->v.f[11] * c->v.f[7];
    c->v.s[7] = LD32(c->r[0] + 40u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[16]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[16]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[15] * c->v.f[16]);
    c->v.s[16] = 0x3f800000u;
    c->v.f[18] = c->v.f[12] * c->v.f[0];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[6] * c->v.f[20]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[10] * c->v.f[20]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[7] * c->v.f[20]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.f[18] = c->v.f[18] + c->v.f[16];
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_c05f58; }
    c->v.f[0] = c->v.f[16] / c->v.f[18];
L_c05f58:;
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
L_c05fa0:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c05fd8; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c06058;
L_c05fd8:;
    c->r[0] = 0xe32b78u;
    { uint32_t ea = 0xc05fe4u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xc05fe8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc06004u; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[6] = c->r[0];
    c->r[14] = 0xc06010u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xc06028u; f_15efdd0(c);
    c->r[0] = c->r[8];
    c->r[14] = 0xc06030u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc06040u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x110u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + 0x10cu; ST32(ea, c->r[1]); }
L_c06058:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_c060f0; }
    c->r[4] = 0x0u;
L_c06074:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
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
    if (COND_VC) { goto L_c060d0; }
    c->r[14] = 0xc060ccu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c060d0:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 336u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 336u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_c06074; }
L_c060f0:;
    c->r[0] = 0xe33350u;
    { uint32_t ea = 0xc060fcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10];
    c->pc = c->r[2]; c->r[14] = 0xc0610cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xc06120u; rt_dispatch(c);
    goto L_c063f0;
L_c06124:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c06148; }
    c->r[0] = 0xe33310u;
    { uint32_t ea = 0xc0613cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc06148u; rt_dispatch(c);
L_c06148:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c0616c; }
    c->r[0] = 0xe332ecu;
    { uint32_t ea = 0xc06160u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc0616cu; rt_dispatch(c);
L_c0616c:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c061b4; }
    c->r[4] = 0x0u;
L_c06180:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c061a8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc061a0u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c061a8:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c06180; }
L_c061b4:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c063dc; }
    c->r[0] = 0xe3298cu;
    { uint32_t ea = 0xc061d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c063c4;
L_c061d0:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c061f4; }
    c->r[0] = 0xe33264u;
    { uint32_t ea = 0xc061e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc061f4u; rt_dispatch(c);
L_c061f4:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c06218; }
    c->r[0] = 0xe33240u;
    { uint32_t ea = 0xc0620cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc06218u; rt_dispatch(c);
L_c06218:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c06260; }
    c->r[4] = 0x0u;
L_c0622c:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c06254; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc0624cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c06254:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c0622c; }
L_c06260:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c063dc; }
    c->r[0] = 0xe328e0u;
    { uint32_t ea = 0xc0627cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c063c4;
L_c06280:;
    c->r[0] = 0xe331c0u;
    { uint32_t ea = 0xc0628cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc0629cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c062c0; }
    c->r[0] = 0xe33198u;
    { uint32_t ea = 0xc062b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc062c0u; rt_dispatch(c);
L_c062c0:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c06308; }
    c->r[4] = 0x0u;
L_c062d4:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c062fc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc062f4u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c062fc:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c062d4; }
L_c06308:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c063dc; }
    c->r[0] = 0xe32838u;
    { uint32_t ea = 0xc06324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c063c4;
L_c06324:;
    c->r[0] = 0xe3311cu;
    { uint32_t ea = 0xc06330u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc06340u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c06364; }
    c->r[0] = 0xe330f4u;
    { uint32_t ea = 0xc06358u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc06364u; rt_dispatch(c);
L_c06364:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c063ac; }
    c->r[4] = 0x0u;
L_c06378:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c063a0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc06398u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c063a0:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c06378; }
L_c063ac:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c063dc; }
    c->r[0] = 0xe32794u;
    { uint32_t ea = 0xc063c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_c063c4:;
    c->r[14] = 0xc063c8u; f_9aa47c(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc063dcu; rt_dispatch(c);
L_c063dc:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10cu; ST32(ea, c->r[0]); }
L_c063f0:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
