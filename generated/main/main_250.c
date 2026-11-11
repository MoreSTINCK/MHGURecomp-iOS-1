#include "cpu.h"
#include "neon_rt.h"
void f_2aff40(Cpu *c);
void f_2b0a24(Cpu *c);
void f_2b0a84(Cpu *c);
void f_2bc8b0(Cpu *c);
void f_68c4f0(Cpu *c);
void f_69dd64(Cpu *c);
void f_1089e98(Cpu *restrict c) {
    FN_ENTER(0x1089e98u);
L_1089e98:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[5] = c->r[1];
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a1u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_108a1a8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_1089f28; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_108cef4; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1a1u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
    c->r[0] = 0xcaccu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x1089ef4u; f_2bc8b0(c);
    c->v.s[1] = 0x0u;
    c->v.s[0] = 0x40800000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x20cu;
    c->r[14] = 0x1089f08u; f_2aff40(c);
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_HI) { goto L_108cef4; }
    c->r[0] = 0x70daecu;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1089f20u + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_1089f28:;
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_HI) { goto L_108cea0; }
    c->r[1] = (c->r[5] << 2);
    c->r[2] = 0x1089f3cu + 0x8u;
    c->r[9] = 0xffffu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x1089f54u: goto L_1089f54; case 0x108a1ccu: goto L_108a1cc; case 0x108a3e0u: goto L_108a3e0; case 0x108a614u: goto L_108a614; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_1089f54:;
    { uint32_t ea = c->r[0] + 0x1a2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xeu);
    if (COND_HI) { goto L_108cea0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x1089f6cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x1089facu: goto L_1089fac; case 0x108b358u: goto L_108b358; case 0x108b574u: goto L_108b574; case 0x108b788u: goto L_108b788; case 0x108b9a0u: goto L_108b9a0; case 0x108bbc0u: goto L_108bbc0; case 0x108bdc0u: goto L_108bdc0; case 0x108bfe8u: goto L_108bfe8; case 0x108cea0u: goto L_108cea0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_1089fac:;
    c->r[0] = 0xcadau;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108a0bc; }
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x1089fd8u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108a0bc; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108a0bc; }
    c->r[0] = 0x9aed9cu;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108a004u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108a00cu; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b2cf0u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108a038u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9aeb00u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108a04cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0xc500u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b3ad8u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108a090u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x3u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x108a0acu; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108a0bc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108a0e0u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9aec90u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108a110u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108a118u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b2be4u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108a144u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ae9f4u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108a158u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x9000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b39d0u;
    { uint32_t ea = 0x108a198u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x14u;
    goto L_108c1d0;
L_108a1a8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x108a1b0u; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cef4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
L_108a1cc:;
    { uint32_t ea = c->r[0] + 0x1a2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_108cea0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x108a1e4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x108a20cu: goto L_108a20c; case 0x108a814u: goto L_108a814; case 0x108a9e0u: goto L_108a9e0; case 0x108abb4u: goto L_108abb4; case 0x108cea0u: goto L_108cea0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_108a20c:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108a224u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108a304; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108a304; }
    c->r[0] = 0x9aeb50u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108a250u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108a258u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b2aa4u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108a284u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ae8b4u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108a298u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x2000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = 0x9b3890u;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = 0x108a2d8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[2]); }
    c->r[0] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x108a2f4u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108a304:;
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108a31cu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9aea54u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108a34cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108a354u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b29a8u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108a380u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ae7b8u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108a394u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5] + 0xb500u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b3794u;
    { uint32_t ea = 0x108a3d4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    goto L_108b328;
L_108a3e0:;
    { uint32_t ea = c->r[0] + 0x1a2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xeu);
    if (COND_HI) { goto L_108cea0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x108a3f8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x108a43cu: goto L_108a43c; case 0x108c214u: goto L_108c214; case 0x108c428u: goto L_108c428; case 0x108c648u: goto L_108c648; case 0x108c860u: goto L_108c860; case 0x108ca80u: goto L_108ca80; case 0x108cc98u: goto L_108cc98; case 0x108cea0u: goto L_108cea0; case 0x108cf3cu: goto L_108cf3c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_108a43c:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108a454u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108a534; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108a534; }
    c->r[0] = 0xfecu;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[0] = 0x9ae91cu;
    { uint32_t ea = 0x108a484u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108a48cu; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b2870u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108a4b8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ae680u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108a4ccu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b3660u;
    { uint32_t ea = 0x108a508u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x32u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x108a524u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108a534:;
    c->r[0] = 0xcadau;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108a55cu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ae814u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108a58cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108a594u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b2768u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108a5c0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ae578u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108a5d4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5] + 0xa000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b3554u;
    { uint32_t ea = 0x108a614u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_108ad70;
L_108a614:;
    { uint32_t ea = c->r[0] + 0x1a2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_108cea0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x108a62cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x108a64cu: goto L_108a64c; case 0x108ad88u: goto L_108ad88; case 0x108af70u: goto L_108af70; case 0x108b160u: goto L_108b160; case 0x108cea0u: goto L_108cea0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_108a64c:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108a664u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108a748; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108a748; }
    c->r[0] = 0x9ae70cu;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    { uint32_t ea = 0x108a694u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108a69cu; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b2660u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108a6c8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ae470u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108a6dcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0xe000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b3448u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108a720u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[8]); }
    c->r[14] = 0x108a738u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108a748:;
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108a760u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xfecu;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[0] = 0x9ae60cu;
    { uint32_t ea = 0x108a794u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108a79cu; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b2560u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108a7c8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ae370u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108a7dcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b3354u;
    { uint32_t ea = 0x108a814u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_108ad70;
L_108a814:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108a82cu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108a90c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108a90c; }
    c->r[0] = 0x9ae548u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108a858u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108a860u; f_69dd64(c);
    c->r[3] = 0x9b249cu;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108a88cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9ae2acu;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108a8a0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x3000u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b3288u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108a8e0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x108a8fcu; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108a90c:;
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108a924u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ae44cu;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108a954u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108a95cu; f_69dd64(c);
    c->r[3] = 0x9b23a0u;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108a988u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9ae1b0u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108a99cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xf000u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9b3190u;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = 0x108a9d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_108af44;
L_108a9e0:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108a9f8u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108aad4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108aad4; }
    c->r[0] = 0xfecu;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[0] = 0x9ae378u;
    { uint32_t ea = 0x108aa28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108aa30u; f_69dd64(c);
    c->r[3] = 0x9b22ccu;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108aa5cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9ae0dcu;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108aa70u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b30c0u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108aaa8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x108aac4u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108aad4:;
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108aaecu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ae284u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108ab1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108ab24u; f_69dd64(c);
    c->r[3] = 0x9b21d8u;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108ab50u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9adfe8u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108ab64u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x1000u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9b2fc8u;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = 0x108aba0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[12]); }
    c->r[0] = 0x15u;
    goto L_108ce80;
L_108abb4:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108abccu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108acac; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108acac; }
    c->r[0] = 0x9ae1a4u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    { uint32_t ea = 0x108abfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108ac04u; f_69dd64(c);
    c->r[3] = 0x9b20f8u;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108ac30u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9adf08u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108ac44u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0xe000u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b2ee4u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108ac84u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[8]); }
    c->r[14] = 0x108ac9cu; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108acac:;
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108acc4u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xfecu;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[10] = v; }
    c->r[0] = 0x9ae0a8u;
    { uint32_t ea = 0x108acf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108ad00u; f_69dd64(c);
    c->r[3] = 0x9b1ffcu;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108ad2cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9ade0cu;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108ad40u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b2df4u;
    { uint32_t ea = 0x108ad74u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_108ad70:;
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x21u;
    goto L_108ce80;
L_108ad88:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108ada0u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108ae7c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108ae7c; }
    c->r[0] = 0x9adfd4u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108adccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108add4u; f_69dd64(c);
    c->r[3] = 0x9b1f28u;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108ae00u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9add38u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108ae14u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x2000u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = 0x9b2d18u;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = 0x108ae50u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[2]); }
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x108ae6cu; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108ae7c:;
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108ae94u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9adedcu;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108aec4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108aeccu; f_69dd64(c);
    c->r[3] = 0x9b1e30u;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108aef8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9adc40u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108af0cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xf000u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9b2c20u;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = 0x108af48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_108af44:;
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[12]); }
    c->r[0] = 0x13u;
    goto L_108ce80;
L_108af70:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108af88u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108b068; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108b068; }
    c->r[0] = 0x9addecu;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108afb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108afbcu; f_69dd64(c);
    c->r[3] = 0x9b1d40u;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108afe8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9adb50u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108affcu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x1000u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b2b2cu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108b03cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x15u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x108b058u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108b068:;
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108b080u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9adcf0u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108b0b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108b0b8u; f_69dd64(c);
    c->r[3] = 0x9b1c44u;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108b0e4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9ada54u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108b0f8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x6800u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9b2a34u;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = 0x108b134u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[12]); }
    c->r[0] = 0x12u;
    goto L_108ce80;
L_108b160:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108b178u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108b254; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108b254; }
    c->r[0] = 0xfecu;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[0] = 0x9adbf8u;
    { uint32_t ea = 0x108b1a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108b1b0u; f_69dd64(c);
    c->r[3] = 0x9b1b4cu;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108b1dcu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9ad95cu;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108b1f0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b2940u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108b228u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x108b244u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108b254:;
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108b26cu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9adb04u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108b29cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108b2a4u; f_69dd64(c);
    c->r[3] = 0x9b1a58u;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108b2d0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9ad868u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108b2e4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x9800u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9b2848u;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = 0x108b320u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[12]); }
L_108b328:;
    c->r[0] = 0x11u;
    goto L_108ce80;
L_108b358:;
    c->r[0] = 0xcadau;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108b468; }
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108b384u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108b468; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108b468; }
    c->r[0] = 0x9ad9ecu;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    c->r[10] = 0x10u;
    { uint32_t ea = 0x108b3b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108b3bcu; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b1940u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108b3e8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ad750u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108b3fcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0xf000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b2728u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108b440u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[10]); }
    c->r[14] = 0x108b458u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108b468:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108b48cu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ad8e4u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108b4bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108b4c4u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b1838u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108b4f0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ad648u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108b504u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x2000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b2624u;
    { uint32_t ea = 0x108b544u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x31u;
    goto L_108c1d0;
L_108b574:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108b58cu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108b66c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108b66c; }
    c->r[0] = 0x9ad7e8u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108b5b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108b5c0u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b173cu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108b5ecu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ad54cu;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108b600u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0xa500u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = 0x9b2528u;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = 0x108b640u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[2]); }
    c->r[0] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x108b65cu; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108b66c:;
    c->r[0] = 0xcadau;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108b694u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ad6dcu;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108b6c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108b6ccu; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b1630u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108b6f8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ad440u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108b70cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0xc500u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b241cu;
    { uint32_t ea = 0x108b74cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x30u;
    goto L_108c1d0;
L_108b788:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108b7a0u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108b884; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108b884; }
    c->r[0] = 0x9ad5d4u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108b7ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108b7d4u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b1528u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108b800u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ad338u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108b814u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x1000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b2310u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108b858u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x12u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x108b874u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108b884:;
    c->r[0] = 0xcadau;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108b8acu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ad4c4u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108b8dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108b8e4u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b1418u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108b910u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ad228u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108b924u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x5000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b2204u;
    { uint32_t ea = 0x108b964u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x25u;
    goto L_108c1d0;
L_108b9a0:;
    c->r[0] = 0xcadau;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108bab0; }
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108b9ccu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108bab0; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108bab0; }
    c->r[0] = 0x9ad3a8u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108b9f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108ba00u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b12fcu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108ba2cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ad10cu;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108ba40u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x8000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b20e4u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108ba84u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x20u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x108baa0u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108bab0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108bad4u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ad29cu;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108bb04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108bb0cu; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b11f0u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108bb38u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ad000u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108bb4cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x3500u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b1fdcu;
    { uint32_t ea = 0x108bb8cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x35u;
    goto L_108c1d0;
L_108bbc0:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108bbd8u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108bcb8; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108bcb8; }
    c->r[0] = 0xfecu;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[0] = 0x9ad198u;
    { uint32_t ea = 0x108bc08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108bc10u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b10ecu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108bc3cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9acefcu;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108bc50u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b1edcu;
    { uint32_t ea = 0x108bc8cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x32u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x108bca8u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108bcb8:;
    c->r[0] = 0xcadau;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108bce0u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ad090u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108bd10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108bd18u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b0fe4u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108bd44u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9acdf4u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108bd58u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5] + 0x2000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = 0x9b1dd0u;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = 0x108bd98u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_108ca48;
L_108bdc0:;
    c->r[0] = 0xcadau;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108bed0; }
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108bdecu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108bed0; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108bed0; }
    c->r[0] = 0x9acf84u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    c->r[10] = 0x10u;
    { uint32_t ea = 0x108be1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108be24u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b0ed8u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108be50u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9acce8u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108be64u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x6000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b1cc0u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108bea8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[10]); }
    c->r[14] = 0x108bec0u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108bed0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108bef4u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ace7cu;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108bf24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108bf2cu; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b0dd0u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108bf58u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9acbe0u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108bf6cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0xa000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b1bbcu;
    { uint32_t ea = 0x108bfacu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x21u;
    goto L_108c1d0;
L_108bfe8:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108c000u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108c0e4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108c0e4; }
    c->r[0] = 0x9acd74u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108c02cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108c034u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b0cc8u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108c060u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9acad8u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108c074u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x4500u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b1ab0u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108c0b8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x108c0d4u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108c0e4:;
    c->r[0] = 0xcadau;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108c10cu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9acc64u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108c13cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108c144u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b0bb8u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108c170u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ac9c8u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108c184u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0xe000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b19a4u;
    { uint32_t ea = 0x108c1c4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x33u;
L_108c1d0:;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x108c1e4u; f_68c4f0(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    goto L_108cea0;
L_108c214:;
    c->r[0] = 0xcadau;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108c23cu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108c320; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108c320; }
    c->r[0] = 0x9acb38u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108c268u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108c270u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b0a8cu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108c29cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ac89cu;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108c2b0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0xc500u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b1874u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108c2f4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x30u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x108c310u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108c320:;
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108c338u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9aca38u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108c368u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108c370u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b098cu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108c39cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ac79cu;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108c3b0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5] + 0x3500u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b1778u;
    { uint32_t ea = 0x108c3f0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x35u;
    goto L_108ce80;
L_108c428:;
    c->r[0] = 0xcadau;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108c538; }
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108c454u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108c538; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108c538; }
    c->r[0] = 0x9ac920u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108c480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108c488u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b0874u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108c4b4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ac684u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108c4c8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x5000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b165cu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108c50cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x25u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x108c528u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108c538:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108c55cu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ac814u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108c58cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108c594u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b0768u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108c5c0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ac578u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108c5d4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5] + 0xe000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b1554u;
    { uint32_t ea = 0x108c614u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x33u;
    goto L_108ce80;
L_108c648:;
    c->r[0] = 0xcadau;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108c754; }
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108c674u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108c754; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108c754; }
    c->r[0] = 0x9ac700u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108c6a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108c6a8u; f_69dd64(c);
    c->r[3] = 0x9b0654u;
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    c->r[12] = 0x3u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108c6d4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x9ac464u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108c6e8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[7] + 0xc500u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b143cu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108c72cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[12]); }
    c->r[14] = 0x108c744u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108c754:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108c778u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ac5f8u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108c7a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108c7b0u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b054cu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108c7dcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ac35cu;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108c7f0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5] + 0x2000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b1338u;
    { uint32_t ea = 0x108c830u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x31u;
    goto L_108ce80;
L_108c860:;
    c->r[0] = 0xcadau;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108c970; }
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108c88cu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108c970; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108c970; }
    c->r[0] = 0x9ac4e8u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108c8b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108c8c0u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b043cu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108c8ecu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ac24cu;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108c900u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x9000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b1224u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108c944u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x14u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x108c960u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108c970:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108c994u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ac3dcu;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108c9c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108c9ccu; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b0330u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108c9f8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ac140u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108ca0cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5] + 0x2000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = 0x9b111cu;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = 0x108ca4cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_108ca48:;
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[2]); }
    goto L_108ce84;
L_108ca80:;
    c->r[0] = 0xcadau;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cb8c; }
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108caa8u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cb8c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cb8c; }
    c->r[0] = 0x9ac2c8u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    { uint32_t ea = 0x108cad8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108cae0u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b021cu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108cb0cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ac02cu;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108cb20u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0xf000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b1004u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108cb64u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[8]); }
    c->r[14] = 0x108cb7cu; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108cb8c:;
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108cba4u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9ac1ccu;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108cbd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108cbdcu; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b0120u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108cc08u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9abf30u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108cc1cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5] + 0x4500u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b0f0cu;
    { uint32_t ea = 0x108cc5cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x4u;
    goto L_108ce80;
L_108cc98:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108ccb0u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cd94; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cd94; }
    c->r[0] = 0x9ac0c4u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108ccdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108cce4u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9b0018u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108cd10u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9abe28u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108cd24u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x1000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b0e00u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x108cd68u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x12u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x108cd84u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108cd94:;
    c->r[0] = 0xcadau;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108cdbcu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9abfb4u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108cdecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108cdf4u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9aff08u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108ce20u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9abd18u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108ce34u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5] + 0x8000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b0cf4u;
    { uint32_t ea = 0x108ce74u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0x20u;
L_108ce80:;
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[0]); }
L_108ce84:;
    c->r[0] = c->r[8];
L_108ce88:;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x108ce94u; f_68c4f0(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_108cea0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x108cea8u; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cef4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a2u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
    c->r[0] = 0xcaccu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0] + 444u);
    c->v.s[2] = c->r[1];
    c->v.f[2] = (float)c->v.s[2];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_108cefc; }
L_108cef4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_108cefc:;
    { uint32_t ea = c->r[0] + 0x1a1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->v.s[0] = 0x0u;
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a1u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x20du;
    c->v.s[1] = c->v.s[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_2aff40(c);
L_108cf3c:;
    c->v.s[0] = 0x42cc0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108cf54u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108d034; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108d034; }
    c->r[0] = 0x9abe20u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = 0x108cf80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108cf88u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9afd74u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108cfb4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9abb84u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108cfc8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0xa500u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = 0x9b0b60u;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = 0x108d008u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[2]); }
    c->r[0] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x108d024u; f_68c4f0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
L_108d034:;
    c->r[0] = 0xcadau;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_108cea0; }
    c->v.s[0] = 0x42d40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x108d05cu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0xcaccu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_108cea0; }
    c->r[0] = 0x9abd10u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    { uint32_t ea = 0x108d090u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x108d098u; f_69dd64(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x73e8u;
    c->r[2] = 0xddu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9afc64u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x108d0c4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9aba74u;
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[9]); }
    { uint32_t ea = 0x108d0d8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5] + 0x6000u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x9b0a50u;
    { uint32_t ea = 0x108d118u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x32u; ST8(ea, c->r[8]); }
    c->r[0] = c->r[10];
    goto L_108ce88;
}
