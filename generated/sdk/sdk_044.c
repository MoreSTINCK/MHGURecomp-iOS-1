#include "cpu.h"
#include "neon_rt.h"
void f_26b721c(Cpu *c);
void f_26b723c(Cpu *c);
void f_26b738c(Cpu *c);
void f_26b73ac(Cpu *c);
void f_26b7448(Cpu *c);
void f_26b8cbc(Cpu *c);
void f_26b8d18(Cpu *c);
void f_26b8d9c(Cpu *c);
void f_26b8e58(Cpu *c);
void f_26b8eb0(Cpu *c);
void f_26b900c(Cpu *c);
void f_26b9104(Cpu *c);
void f_26b92b4(Cpu *c);
void f_2850138(Cpu *c);
void f_26ba188(Cpu *restrict c) {
    FN_ENTER(0x26ba188u);
L_26ba188:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[13] = c->r[13] - 0x130u;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x710u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x630u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26ba1c0u; f_26b738c(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26ba1d8; }
    c->r[10] = 0x3u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[10] = 0x5u; }
    goto L_26ba1e8;
L_26ba1d8:;
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[10] = c->r[7];
    if (COND_EQ) { goto L_26bc8d0; }
L_26ba1e8:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x610u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x26ba204u; f_2850138(c);
    { uint32_t ea = c->r[5] + 0x718u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = 0xf800u;
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xf8000000u;
    c->r[1] = c->r[1] & c->r[6];
    c->r[6] = c->r[1] | 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[6] | 0x40000u; }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); }
    c->r[1] = 0x674u;
    { uint32_t ea = c->r[5] + 0x688u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x710u; uint32_t v = LD8(ea); c->r[8] = v; }
    c->r[9] = c->r[5] + c->r[1];
    { uint32_t ea = c->r[4] + 4u; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[2] = (c->r[2] & 0xfffffff8u) | ((c->r[0] << 0) & 0x7u);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[5] + 0x684u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_NE) { goto L_26ba26c; }
    c->r[7] = c->r[9];
    goto L_26ba298;
L_26ba26c:;
    c->r[5] = c->r[13] + 0x80u;
    c->r[2] = c->r[10];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ba27cu; f_26b723c(c);
    c->r[7] = c->r[13] + 0x100u;
    c->r[1] = c->r[9];
    c->r[2] = c->r[5];
    c->r[0] = c->r[7];
    c->r[14] = 0x26ba290u; f_26b7448(c);
    { uint32_t ea = c->r[4]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_26ba298:;
    c->v.s[18] = 0x3f000000u;
    c->v.s[16] = 0x447fc000u;
    c->v.s[0] = LD32(c->r[7] + 12u);
    (void)f_subs(c, c->r[8], 0x0u);
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->v.s[18];
    c->r[1] = c->v.s[0];
    c->r[2] = (c->r[2] & 0xffff003fu) | ((c->r[1] << 6) & 0xffc0u);
    c->r[1] = ~0x0u;
    c->r[9] = c->r[0] & c->r[1];
    c->r[12] = c->r[6] & c->r[1];
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] & c->r[1];
    c->r[1] = 0xffffu;
    c->v.s[0] = LD32(c->r[7]);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfc000000u;
    c->r[2] = c->r[2] & c->r[1];
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3ff0000u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->v.s[18];
    c->r[3] = c->v.s[0];
    c->r[3] = c->r[1] & (c->r[3] << 16);
    c->r[2] = c->r[3] | c->r[2];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[9]); }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[2] = c->r[2] & 0x3ffffffu;
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->v.s[18];
    c->r[3] = c->v.s[0];
    c->r[3] = c->r[3] & 0x3ffu;
    c->r[10] = c->r[2] | (c->r[3] << 26);
    c->r[0] = c->r[0] | (c->r[3] >> 6);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[9]); }
    c->r[0] = c->r[0] & 0xffffc00fu;
    c->v.s[0] = LD32(c->r[7] + 8u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[10]); }
    c->r[2] = c->v.s[0];
    c->r[2] = c->r[2] & 0x3ffu;
    c->r[3] = c->r[0] | (c->r[2] << 4);
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_26ba3e4; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x630u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0xau);
    if (COND_HI) { goto L_26ba3d4; }
    { uint32_t ea = c->r[1] + 0x713u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[7] = (c->r[7] << 2);
    c->r[6] = 0x26ba398u + 0x4u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->pc = c->r[7] + c->r[6]; switch (c->pc) { case 0x26ba3c8u: goto L_26ba3c8; case 0x26ba3d4u: goto L_26ba3d4; case 0x26baa4cu: goto L_26baa4c; case 0x26baa60u: goto L_26baa60; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26ba3c8:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[0] = 0x2u; }
L_26ba3d4:;
    c->r[3] = c->r[3] & 0xffff3fffu;
    c->r[12] = c->r[12] | (c->r[0] >> 18);
    c->r[3] = c->r[3] | (c->r[0] << 14);
    goto L_26ba3ec;
L_26ba3e4:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] & 0xffff3fffu;
L_26ba3ec:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x70eu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x638u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x634u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x664u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x668u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x66cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[11] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26ba43c; }
    c->r[6] = c->r[5];
    c->r[5] = c->r[2];
    c->r[3] = c->r[3] | 0x40000u;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[9]); }
    goto L_26ba454;
L_26ba43c:;
    c->r[6] = c->r[7];
    c->r[7] = c->r[5];
    c->r[5] = c->r[11];
    c->r[11] = c->r[2];
    c->r[2] = c->r[14];
    c->r[14] = c->r[0];
L_26ba454:;
    { uint32_t ea = c->r[1] + 0x70cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ba47c; }
    c->r[8] = c->r[2] - c->r[6];
    c->r[3] = c->r[3] | 0x10000u;
    c->r[6] = c->r[2] - c->r[11];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[9]); }
    goto L_26ba480;
L_26ba47c:;
    c->r[8] = c->r[11];
L_26ba480:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ba4ac; }
    c->r[0] = c->r[14] - c->r[7];
    c->r[3] = c->r[3] | 0x20000u;
    c->r[7] = c->r[14] - c->r[5];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[9]); }
    goto L_26ba4b0;
L_26ba4ac:;
    c->r[0] = c->r[5];
L_26ba4b0:;
    c->r[2] = 0x3fffu;
    c->r[6] = c->r[6] & 0x3fffu;
    c->r[7] = c->r[7] & 0x3fffu;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    c->r[5] = c->r[8] + c->r[2];
    c->r[0] = c->r[0] + c->r[2];
    c->r[6] = (c->r[6] & 0xc000ffffu) | ((c->r[5] << 16) & 0x3fff0000u);
    c->r[5] = 0xc000u;
    c->r[0] = c->r[0] & 0x3fffu;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc0000000u;
    c->r[1] = c->r[12] & c->r[5];
    c->r[1] = c->r[6] | c->r[1];
    c->r[6] = c->r[9] & c->r[5];
    c->r[0] = c->r[6] | (c->r[0] << 16);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | c->r[7];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + 0x620u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - 0x27u;
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_CS) { goto L_26ba514; }
    c->r[1] = 0x2u;
    goto L_26bc8d0;
L_26ba514:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x3fffu;
    c->r[14] = 0xc000u;
    c->r[10] = ~0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xf0000000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] & 0xffffff80u) | ((c->r[1] << 0) & 0x7fu);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x624u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = (c->r[3] & 0xffff87ffu) | ((c->r[6] << 11) & 0x7800u);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] & 0xfff87fffu;
    { uint32_t ea = c->r[8] + 0x660u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0xfu;
    c->r[3] = c->r[3] | (c->r[6] << 15);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] & 0xfffffe7fu;
    { uint32_t ea = c->r[8] + 0x65du; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x3u;
    c->r[3] = c->r[3] | (c->r[6] << 7);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] & 0xfffff9ffu;
    { uint32_t ea = c->r[8] + 0x65eu; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x3u;
    c->r[3] = c->r[3] | (c->r[6] << 9);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x70eu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26ba68c; }
    { uint32_t ea = c->r[8] + 0x638u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x3fffu;
    c->r[7] = (c->r[7] >> 14);
    c->r[5] = c->r[5] + c->r[6];
    c->r[5] = (c->r[5] & 0x3fffu) | ((c->r[7] << 14) & 0xffffc000u);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[5] = c->r[5] & 0xf0003fffu;
    { uint32_t ea = c->r[8] + 0x634u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + c->r[6];
    c->r[7] = c->r[7] & 0x3fffu;
    c->r[7] = c->r[5] | (c->r[7] << 14);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] & c->r[14];
    c->r[7] = c->r[7] & c->r[10];
    c->r[3] = c->r[3] & c->r[10];
    c->r[2] = c->r[2] & c->r[10];
    { uint32_t ea = c->r[8] + 0x640u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[7] = c->r[7] & c->r[10];
    c->r[3] = c->r[3] & c->r[10];
    c->r[4] = c->r[7] & c->r[10];
    c->r[5] = c->r[5] + c->r[6];
    c->r[5] = c->r[5] & 0x3fffu;
    c->r[1] = c->r[1] | c->r[5];
    c->r[5] = c->r[2] & c->r[10];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] & c->r[12];
    { uint32_t ea = c->r[8] + 0x63cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[3] = c->r[3] & c->r[10];
    c->r[2] = c->r[2] + c->r[6];
    c->r[2] = c->r[2] & 0x3fffu;
    c->r[2] = c->r[1] | (c->r[2] << 14);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    c->r[5] = c->r[5] & c->r[14];
    c->r[2] = c->r[2] & c->r[10];
    { uint32_t ea = c->r[8] + 0x650u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[7] + c->r[6];
    c->r[6] = 0x64cu;
    c->r[7] = c->r[7] & 0x3fffu;
    c->r[6] = c->r[8] + c->r[6];
    goto L_26ba74c;
L_26ba68c:;
    { uint32_t ea = c->r[8] + 0x634u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x3fffu;
    c->r[7] = (c->r[7] >> 14);
    c->r[5] = c->r[5] + c->r[6];
    c->r[5] = (c->r[5] & 0x3fffu) | ((c->r[7] << 14) & 0xffffc000u);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[5] = c->r[5] & 0xf0003fffu;
    { uint32_t ea = c->r[8] + 0x638u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + c->r[6];
    c->r[7] = c->r[7] & 0x3fffu;
    c->r[7] = c->r[5] | (c->r[7] << 14);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] & c->r[14];
    c->r[7] = c->r[7] & c->r[10];
    c->r[3] = c->r[3] & c->r[10];
    c->r[2] = c->r[2] & c->r[10];
    { uint32_t ea = c->r[8] + 0x63cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[7] = c->r[7] & c->r[10];
    c->r[3] = c->r[3] & c->r[10];
    c->r[4] = c->r[7] & c->r[10];
    c->r[5] = c->r[5] + c->r[6];
    c->r[5] = c->r[5] & 0x3fffu;
    c->r[1] = c->r[1] | c->r[5];
    c->r[5] = c->r[2] & c->r[10];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] & c->r[12];
    { uint32_t ea = c->r[8] + 0x640u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[3] = c->r[3] & c->r[10];
    c->r[2] = c->r[2] + c->r[6];
    c->r[2] = c->r[2] & 0x3fffu;
    c->r[2] = c->r[1] | (c->r[2] << 14);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    c->r[5] = c->r[5] & c->r[14];
    c->r[2] = c->r[2] & c->r[10];
    { uint32_t ea = c->r[8] + 0x64cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[7] + c->r[6];
    c->r[6] = c->r[8] + 0x650u;
    c->r[7] = c->r[7] & 0x3fffu;
L_26ba74c:;
    c->r[7] = c->r[5] | c->r[7];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x3fffu;
    c->r[7] = c->r[7] & c->r[12];
    c->r[3] = c->r[3] & c->r[10];
    c->r[4] = c->r[4] & c->r[10];
    c->r[2] = c->r[2] & c->r[10];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] + c->r[5];
    c->r[6] = c->r[6] & 0x3fffu;
    c->r[7] = c->r[7] | (c->r[6] << 14);
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_26ba978; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[13] + 0x100u;
    c->r[0] = c->r[5];
    c->r[14] = 0x26ba7a8u; f_26b723c(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[5];
    c->r[14] = 0x26ba7b8u; f_26b92b4(c);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[12] = ~0x0u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xfff00000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xf0000u;
    c->r[0] = c->r[8] & (c->r[5] << 20);
    c->r[1] = c->r[1] & c->r[14];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[0] & c->r[10];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x48u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] & c->r[12];
    c->r[2] = c->r[2] & c->r[12];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x40u; ST32(ea, c->r[4]); }
    c->r[4] = 0xffu;
    c->r[4] = c->r[4] & (c->r[1] >> 12);
    c->r[0] = c->r[0] & c->r[14];
    c->r[0] = c->r[4] | (c->r[0] << 8);
    c->r[4] = 0xf0000000u;
    c->r[2] = c->r[2] & c->r[4];
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = c->r[11] & c->r[14];
    { uint32_t ea = c->r[3] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] & c->r[14];
    c->r[0] = c->r[0] | (c->r[6] << 20);
    c->r[0] = c->r[0] & c->r[12];
    c->r[0] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[3] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] & (c->r[9] << 20);
    c->r[0] = c->r[2] | c->r[0];
    c->r[0] = c->r[0] & c->r[12];
    c->r[0] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[3] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] & (c->r[1] << 20);
    c->r[1] = c->r[10] & c->r[12];
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[8];
    c->r[1] = c->r[1] | c->r[2];
    c->r[1] = c->r[1] & c->r[14];
    c->r[14] = 0xffu;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[3] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] & (c->r[5] >> 12);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[1] & c->r[12];
    c->r[12] = ~0x0u;
    c->r[1] = c->r[1] & c->r[4];
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = 0xff00u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfff0000u;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[5] & (c->r[1] << 8);
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = ~0xffu;
    c->r[0] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[3] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] & c->r[1];
    c->r[7] = 0xffu;
    c->r[0] = c->r[5] & (c->r[0] << 8);
    c->r[1] = c->r[1] | (c->r[6] >> 12);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xf0000000u;
    c->r[1] = c->r[1] & c->r[7];
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = ~0x80000000u;
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = 0x80000000u;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[3] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] & (c->r[9] >> 12);
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[4];
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[5] & (c->r[1] << 8);
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = ~0xf0000000u;
    c->r[0] = c->r[0] & c->r[12];
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 28);
    { uint32_t ea = c->r[3] + 0x34u; ST32(ea, c->r[0]); }
L_26ba978:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[8];
    c->r[14] = 0x26ba98cu; f_26b8eb0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26baab0; }
    { uint32_t ea = c->r[8] + 0x70cu; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x634u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x638u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_26ba9b4; }
    { uint32_t ea = c->r[8] + 0x70du; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26baab0; }
L_26ba9b4:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[8] + 0x70eu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x728u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[2];
    if (COND_EQ) { c->r[1] = c->r[3]; }
    if (COND_EQ) { c->r[3] = c->r[2]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26baab0; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26baa68; }
    c->r[7] = 0x0u;
    c->r[12] = 0x1u;
L_26ba9e8:;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[12], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26baa38; }
    c->r[6] = c->r[13] + 0x80u;
    c->r[2] = c->r[6];
    c->r[5] = c->r[2] + (c->r[7] << 4);
    { uint32_t ea = c->r[2] + (c->r[7] << 4); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[3] - c->r[6];
    { uint32_t ea = c->r[2] + (c->r[7] << 4); ST32(ea, c->r[6]); }
    c->r[6] = c->r[3] - c->r[4];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x70du; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26baa38; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[1] - c->r[4];
    c->r[6] = c->r[1] - c->r[6];
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[6]); }
L_26baa38:;
    { uint32_t ea = c->r[14] + 0x728u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_CC) { goto L_26ba9e8; }
    goto L_26baab0;
L_26baa4c:;
    { uint32_t ea = c->r[1] + 0x712u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    goto L_26ba3d4;
L_26baa60:;
    c->r[0] = 0x1u;
    goto L_26ba3d4;
L_26baa68:;
    c->r[3] = 0x0u;
    c->r[6] = 0x1u;
L_26baa70:;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[6], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x70du; uint32_t v = LD8(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_26baaa4; }
    c->r[7] = c->r[13] + 0x80u;
    c->r[7] = c->r[7] + (c->r[3] << 4);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[1] - c->r[4];
    c->r[5] = c->r[1] - c->r[5];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[14] + 0x728u; uint32_t v = LD32(ea); c->r[7] = v; }
L_26baaa4:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_CC) { goto L_26baa70; }
L_26baab0:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x728u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26bac20; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[5] = 0x0u;
    c->r[14] = 0x1u;
    c->r[12] = 0x3fffu;
    c->r[10] = c->r[1] + 0x1cu;
L_26baad4:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[14], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = c->r[1] + (c->r[5] << 3);
    c->r[6] = c->r[7] + 0x50u;
    if (COND_EQ) { goto L_26bab68; }
    { uint32_t ea = c->r[10] - 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[1] = c->r[1] + (c->r[5] << 4);
    c->r[2] = (c->r[2] & 0xffffc000u) | ((c->r[9] << 0) & 0x3fffu);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[8]); }
    c->r[3] = (c->r[3] >> 14);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = (c->r[4] & 0x3fffu) | ((c->r[3] << 14) & 0xffffc000u);
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x3ff0000u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[8]); }
    c->r[2] = c->r[2] & 0xc000ffffu;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[3] = c->r[3] + 0x3c000000u;
    c->r[7] = c->r[3] + (c->r[9] << 16);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[3] = c->r[7] & c->r[3];
    c->r[2] = c->r[3] | c->r[2];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[8]); }
    c->r[4] = c->r[4] & 0xc000ffffu;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + c->r[12];
    c->r[1] = c->r[1] & 0x3fffu;
    c->r[1] = c->r[4] | (c->r[1] << 16);
    { uint32_t ea = c->r[6] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[8]); }
L_26bab68:;
    c->r[8] = c->r[5] + 0x1u;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[14], c->r[8]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26bac08; }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[4] = LD32(ea + 12u); }
    c->r[7] = ~0x0u;
    c->r[12] = c->r[9];
    c->r[9] = 0xc000u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xffff0000u;
    c->r[2] = c->r[2] & c->r[7];
    c->r[1] = c->r[1] & c->r[7];
    c->r[11] = c->r[4] & c->r[7];
    c->r[4] = c->r[13] + 0x80u;
    c->r[3] = c->r[3] & c->r[9];
    c->r[5] = c->r[4] + (c->r[5] << 4);
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0x3fffu;
    c->r[3] = c->r[4] | c->r[3];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[11]); }
    c->r[3] = c->r[3] & c->r[7];
    c->r[2] = c->r[2] & c->r[7];
    c->r[1] = c->r[1] & c->r[7];
    c->r[7] = c->r[11] & c->r[9];
    c->r[9] = c->r[12];
    c->r[12] = 0x3fffu;
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0x3fffu;
    c->r[4] = c->r[4] | c->r[7];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); }
    c->r[3] = c->r[3] & 0xc000ffffu;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + c->r[12];
    c->r[5] = c->r[5] & 0x3fffu;
    c->r[3] = c->r[3] | (c->r[5] << 16);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); }
    c->r[4] = c->r[4] & 0xc000ffffu;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + c->r[12];
    c->r[5] = c->r[5] & 0x3fffu;
    c->r[4] = c->r[4] | (c->r[5] << 16);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); }
L_26bac08:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[8] + 0x1u;
    c->r[10] = c->r[10] + 0x20u;
    { uint32_t ea = c->r[1] + 0x728u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_26baad4; }
L_26bac20:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26bc8a4; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = 0x44800000u;
    c->v.s[24] = 0x47800000u;
    c->v.s[22] = 0x40000000u;
    c->v.s[26] = 0xbf800000u;
    c->r[9] = c->r[10] + 0x60u;
    c->r[4] = 0x0u;
    c->r[5] = c->r[0] + 0x90u;
    c->r[0] = 0x4f1ef8u;
    c->r[0] = 0x26bac68u + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    goto L_26bad68;
L_26bac74:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = ~0x0u;
    c->r[14] = c->r[11] + 0x20u;
    c->r[1] = c->r[1] & c->r[4];
    { uint32_t ea = c->r[11]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] & c->r[4];
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7] & c->r[4];
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & c->r[4];
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] & c->r[4];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[4];
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12] & c->r[4];
    c->r[12] = c->r[8] & c->r[4];
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x1800000u;
    c->r[0] = c->r[5] & c->r[0];
    c->r[0] = c->r[0] | 0x1000000u;
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[4];
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] & c->r[4];
    c->r[2] = c->r[2] & c->r[4];
    c->r[3] = c->r[3] & c->r[4];
    c->r[7] = c->r[7] & c->r[4];
    c->r[6] = c->r[6] & c->r[4];
    c->r[4] = c->r[5] & c->r[4];
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9] - 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26bad24u; f_26b721c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26bbb84; }
    goto L_26bc8cc;
L_26bad30:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[1] + 0x712u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[14] = (c->r[1] << 23);
    goto L_26bba58;
L_26bad50:;
    c->r[14] = 0x800000u;
    goto L_26bba58;
L_26bad58:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x0u;
    goto L_26bba58;
L_26bad68:;
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[6] - 0x60u; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26bc88c; }
    { uint32_t ea = c->r[10] + 0x710u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26bada8; }
    c->r[0] = 0xc4u;
    c->r[1] = 0xb0u;
    { uint32_t r = c->r[4] * c->r[0] + c->r[10]; c->r[0] = r; }
    c->r[7] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[4] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[11] = c->r[0] + 0x90u;
    goto L_26bade8;
L_26bada8:;
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] - 0x48u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_26badd8; }
    c->r[14] = 0x26badc0u; f_26b721c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26badd8; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26badd0u; f_26b721c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26bc8cc; }
L_26badd8:;
    { uint32_t ea = c->r[10] + 0x710u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26bae2c; }
    c->r[11] = c->r[5];
L_26bade8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26badf0u; f_26b721c(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_26bae38; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x6u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_26bc8cc; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    goto L_26bae38;
L_26bae2c:;
    c->r[7] = 0x1u;
    c->r[11] = c->r[5];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
L_26bae38:;
    { uint32_t ea = c->r[10] + 0x70eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[6] = c->r[9] + 0x24u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26bae54u; f_26b8d18(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26bc8c4; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[9] + 0x34u;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x26bae70u; f_26b8cbc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26bc8c4; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    c->r[14] = 0x26bae8cu; f_26b8d9c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26bc8c4; }
    c->r[0] = c->r[9] + 0x54u;
    { uint32_t ea = c->r[0]; c->v.s[0] = LD32(ea + 0u); c->v.s[1] = LD32(ea + 4u); c->v.s[2] = LD32(ea + 8u); c->v.s[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26baea4u; f_26b8e58(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26bc8c4; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[12]); }
    c->r[8] = c->r[0];
    c->r[4] = c->r[2];
    c->r[12] = c->r[5];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[9] - 0x5fu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[9] = c->r[8];
    c->r[14] = (c->r[14] & 0xfffffffdu) | ((c->r[0] << 1) & 0x2u);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[10]); }
    c->r[10] = c->r[12];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] - 0x5eu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = (c->r[14] & 0xfffffff7u) | ((c->r[0] << 3) & 0x8u);
    c->r[0] = c->r[11] + 0x20u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3] - 0x5du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[3]); }
    c->r[14] = (c->r[14] & 0xffffffefu) | ((c->r[0] << 4) & 0x10u);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[6];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] - 0x5bu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = (c->r[14] & 0xffffffdfu) | ((c->r[0] << 5) & 0x20u);
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[11] + 0x20u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[14]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] - 0x5cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = (c->r[14] & 0xffffffbfu) | ((c->r[0] << 6) & 0x40u);
    { uint32_t ea = c->r[11]; ST32(ea, c->r[14]); }
    c->r[14] = c->r[14] & 0xfffffe7fu;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[12]); }
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x5cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 7);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[12] = c->r[14] | c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[7];
    c->r[7] = c->r[5];
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[7]); }
    c->r[8] = c->r[2];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[12] | 0x100u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[14] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_26bb2c4; }
    c->r[8] = c->r[2];
    c->r[6] = c->r[12] | 0x300u;
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[11] + 0x34u;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[12]); }
    c->r[10] = c->r[12];
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[14] - 0x50u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_26bb2f0;
L_26bb2c4:;
    c->r[8] = c->r[2];
    c->r[9] = c->r[5];
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
L_26bb2f0:;
    c->r[6] = (c->r[6] & 0xfff0ffffu) | ((c->r[14] << 16) & 0xf0000u);
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] + 0x10u;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[10]); ST32(ea + 20u, c->r[12]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[2] = c->r[10];
    c->r[14] = 0x26bb350u; f_26b9104(c);
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[8] = c->r[11] + 0x20u;
    c->r[14] = c->r[11] + 0x30u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[8] = LD32(ea + 12u); }
    { uint32_t ea = c->r[14]; c->r[0] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[11] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[11] + 0x30u;
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xffcfffffu) | ((c->r[0] << 20) & 0x300000u);
    { uint32_t ea = c->r[11]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26bb40cu; f_26b900c(c);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[10] = c->r[11] + 0x2cu;
    { uint32_t ea = c->r[11]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); }
    { uint32_t ea = c->r[11] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[14]); }
    c->r[14] = c->r[5];
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[3]); }
    c->r[6] = (c->r[6] & 0xff3fffffu) | ((c->r[5] << 22) & 0xc00000u);
    c->r[7] = c->r[6];
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[10]); }
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[13] + 0x68u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = LD32(c->r[2] + 72u);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_26bb574; }
    c->v.f[0] = c->v.f[22] - c->v.f[0];
    c->r[0] = c->r[7];
    c->r[0] = c->r[0] & 0xffffffu;
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[12]); }
    c->r[5] = c->r[6];
    c->r[6] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] & 0xfffu;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] | (c->r[6] << 24);
    c->r[2] = c->r[2] & 0xfffffff0u;
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[0];
    c->r[0] = c->r[11] + 0x1cu;
    c->r[2] = c->r[2] | (c->r[6] >> 8);
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    c->r[0] = c->r[11] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[4]); }
L_26bb574:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[7]); }
    c->v.s[2] = c->v.s[18];
    c->r[2] = c->r[6];
    c->v.s[0] = LD32(c->r[0] + 84u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->v.s[18];
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[7]); }
    c->r[0] = (c->r[14] >> 10);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->v.s[0];
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = (c->r[4] & 0x3ffu) | ((c->r[0] << 10) & 0xfffffc00u);
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[4] & 0xfff003ffu;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[0] = LD32(c->r[6] + 88u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->v.s[18];
    c->r[0] = c->v.s[0];
    c->r[0] = c->r[0] & 0x3ffu;
    c->r[0] = c->r[4] | (c->r[0] << 10);
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] & 0xc00fffffu;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[4]); }
    c->v.s[0] = LD32(c->r[6] + 92u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->v.s[18];
    c->r[4] = c->v.s[0];
    c->r[4] = c->r[4] & 0x3ffu;
    c->r[0] = c->r[0] | (c->r[4] << 20);
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0x3fffffffu;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[11] + 0x34u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[9]); }
    c->r[9] = c->r[14];
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[3]); }
    c->r[8] = c->r[8] & 0xffffff00u;
    c->r[12] = c->r[12] & 0xfff003ffu;
    c->r[5] = c->r[5] & 0xfffffc00u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[4]); }
    c->v.s[0] = LD32(c->r[6] + 96u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    c->r[4] = c->v.s[0];
    c->r[4] = c->r[4] & 0x3ffu;
    c->r[6] = c->r[0] | (c->r[4] << 30);
    c->r[4] = c->r[8] | (c->r[4] >> 2);
    c->r[8] = 0xfc00u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xf0000u;
    c->r[14] = c->r[8];
    c->r[0] = c->r[12] | c->r[14];
    c->r[12] = c->r[4];
    c->r[4] = 0x3ffu;
    c->r[4] = c->r[5] | c->r[4];
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[4];
    c->r[5] = c->r[1];
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] - 0x16u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[12]); }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26bb818; }
    c->r[5] = c->r[2];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[7];
    goto L_26bb8b4;
L_26bb818:;
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[1] = 0x7ffu;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[12]); }
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | c->r[14];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[9]); }
    c->r[9] = c->r[7];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[6]); }
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[7]); }
    c->r[10] = c->r[7];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[3]); }
    c->r[8] = c->r[3];
    c->r[3] = c->r[2];
    c->r[2] = c->r[0];
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9];
L_26bb8b4:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[5] = c->r[5] & 0xff807fffu;
    { uint32_t ea = c->r[9] + 0x44u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[5] | (c->r[7] << 15);
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[11] + 0x30u;
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[0];
    if (COND_EQ) { goto L_26bb9c8; }
    c->r[0] = ~0x1800000u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[8]); }
    c->r[8] = c->r[2];
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[5] & c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] & c->r[2];
    c->r[0] = c->r[0] & c->r[2];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] & c->r[2];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] & c->r[2];
    c->r[1] = c->r[4] & c->r[2];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[3] & c->r[2];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    c->r[7] = c->r[0] & c->r[2];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[3] & c->r[2];
    c->r[3] = c->r[12] & c->r[2];
    c->r[12] = c->r[10] & c->r[2];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[14] & c->r[2];
    c->r[14] = c->r[8] & c->r[2];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    c->r[9] = c->r[0] & c->r[2];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[0] & c->r[2];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] & c->r[2];
    goto L_26bbb2c;
L_26bb9c8:;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[9] - 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[2]); }
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[4], 0xau);
    if (COND_HI) { goto L_26bad58; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = (c->r[4] << 2);
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[1] + 0x713u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = 0x26bba10u + 0xcu;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->pc = c->r[4] + c->r[1]; switch (c->pc) { case 0x26bad30u: goto L_26bad30; case 0x26bad50u: goto L_26bad50; case 0x26bba4cu: goto L_26bba4c; case 0x26bba58u: goto L_26bba58; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26bba4c:;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[14] = 0x800000u;
    if (COND_EQ) { goto L_26bac74; }
L_26bba58:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = ~0x0u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[1] = c->r[6] | c->r[1];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] & c->r[2];
    c->r[0] = c->r[6] | c->r[1];
    c->r[1] = c->r[7] & c->r[2];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] | c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & c->r[2];
    c->r[0] = c->r[6] | c->r[1];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[2];
    c->r[7] = c->r[6] | c->r[0];
    c->r[0] = ~0x1800000u;
    c->r[1] = c->r[5] & c->r[0];
    c->r[5] = c->r[10] & c->r[2];
    c->r[3] = c->r[7];
    c->r[4] = c->r[14] | c->r[1];
    c->r[1] = c->r[12] & c->r[2];
    c->r[7] = c->r[6] | c->r[5];
    c->r[0] = c->r[6] | c->r[1];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & c->r[2];
    c->r[0] = c->r[6] | c->r[1];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & c->r[2];
    c->r[0] = c->r[6] | c->r[1];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] & c->r[2];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] | c->r[5];
    c->r[5] = c->r[4];
    c->r[0] = c->r[0] & c->r[2];
    c->r[12] = c->r[6] | c->r[0];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[2];
    c->r[14] = c->r[6] | c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[2];
    c->r[9] = c->r[6] | c->r[0];
    c->r[0] = c->r[8] & c->r[2];
    c->r[10] = c->r[6] | c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[2];
    c->r[6] = c->r[6] | c->r[0];
L_26bbb2c:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[11] + 0xcu;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] + 0x28u;
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[9] = v; }
L_26bbb84:;
    { uint32_t ea = c->r[9] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26bbc84; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x38u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[1] = c->r[1] & 0xffffff00u;
    c->r[1] = c->r[1] | (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 8);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11]; c->r[9] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[0] | 0x4000000u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[5]); }
    c->r[6] = c->r[0];
    c->r[7] = c->r[2];
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[9]); }
    c->r[14] = c->r[8];
    c->r[8] = c->r[3];
    c->r[3] = c->r[9];
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[4]); }
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[1]); }
    goto L_26bbcd8;
L_26bbc84:;
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 4u; c->r[0] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_26bbcd8:;
    c->v.s[0] = LD32(c->r[9] + 36u);
    c->v.f[0] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[8];
    c->r[0] = (c->r[7] >> 30);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->v.s[0];
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[14] = (c->r[14] & 0x3fffffffu) | ((c->r[0] << 30) & 0xc0000000u);
    c->r[0] = (c->r[6] >> 30);
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[3]); }
    c->r[7] = c->r[3];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[3]); }
    c->r[4] = c->r[3];
    c->v.s[0] = LD32(c->r[9] + 44u);
    c->v.f[0] = c->v.f[0] + c->v.f[26];
    c->v.f[0] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[1]); }
    c->r[9] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[1]); }
    c->r[9] = (c->r[9] & 0x3fffffffu) | ((c->r[0] << 30) & 0xc0000000u);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 40u);
    c->v.f[0] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[14]); }
    c->r[14] = c->r[14] & 0xfffff000u;
    c->r[9] = c->r[9] & 0xfffff000u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[2]); }
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[7]); }
    c->r[12] = (c->r[12] & 0xc0000000u) | ((c->r[0] << 0) & 0x3fffffffu);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xf000u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3fff0000u;
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[12]); }
    c->r[3] = c->r[12];
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] & 0xfffff000u;
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->v.f[0] = c->v.f[0] + c->v.f[26];
    c->v.f[0] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[8]); }
    c->r[0] = c->v.s[0];
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xc0000000u;
    c->r[1] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70cu; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x70du; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x634u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x70eu; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x638u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[14]); }
    c->r[9] = 0xc000u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xc0000000u;
    { uint32_t ea = c->r[11] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[7];
    c->r[2] = c->r[8];
    if (COND_EQ) { c->r[12] = c->r[6]; }
    c->r[1] = c->r[1] & c->r[9];
    if (COND_EQ) { c->r[14] = c->r[10]; }
    if (COND_EQ) { c->r[2] = c->r[5]; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[0] = c->r[14];
    if (COND_NE) { c->r[0] = c->r[12] - c->r[2]; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[0] = c->r[0] & 0x3fffu;
    if (COND_NE) { c->r[2] = c->r[12] - c->r[14]; }
    c->r[14] = 0x3fffu;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { c->r[5] = c->r[8]; }
    if (COND_EQ) { c->r[10] = c->r[7]; }
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = c->r[2] + c->r[14];
    c->r[2] = 0xc000u;
    c->r[1] = c->r[1] & 0x3fffu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc0000000u;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3fff0000u;
    { uint32_t ea = c->r[11] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_EQ) { c->r[6] = c->r[0]; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    if (COND_NE) { c->r[0] = c->r[6] - c->r[10]; }
    if (COND_NE) { c->r[10] = c->r[6] - c->r[5]; }
    c->r[0] = c->r[1] + (c->r[0] << 16);
    c->r[10] = c->r[10] & 0x3fffu;
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[2];
    c->r[1] = c->r[10] | c->r[1];
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[11] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] - 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] - 0x2bu;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_CC) { goto L_26bc8cc; }
    { uint32_t ea = c->r[11] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0xc000u;
    c->r[4] = 0x3fffu;
    c->r[5] = ~0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xffff0000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xf0000000u;
    c->r[7] = (c->r[7] & 0xffffff80u) | ((c->r[3] << 0) & 0x7fu);
    { uint32_t ea = c->r[11] + 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[7] = c->r[7] & 0xfffffe7fu;
    { uint32_t ea = c->r[9] - 0x1bu; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x3u;
    c->r[3] = c->r[7] | (c->r[3] << 7);
    { uint32_t ea = c->r[11] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[3] = c->r[3] & 0xfffff9ffu;
    { uint32_t ea = c->r[9] - 0x1au; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x3u;
    c->r[3] = c->r[3] | (c->r[7] << 9);
    { uint32_t ea = c->r[11] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] - 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = (c->r[3] & 0xffff87ffu) | ((c->r[7] << 11) & 0x7800u);
    { uint32_t ea = c->r[11] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[3] = c->r[3] & 0xfff87fffu;
    { uint32_t ea = c->r[9] - 0x18u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0xfu;
    c->r[3] = c->r[3] | (c->r[7] << 15);
    { uint32_t ea = c->r[11] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[3] = c->r[3] & 0xffc7ffffu;
    { uint32_t ea = c->r[9] - 0x19u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7u;
    c->r[3] = c->r[3] | (c->r[7] << 19);
    { uint32_t ea = c->r[11] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[2] = (c->r[2] >> 14);
    { uint32_t ea = c->r[9] - 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x40u; ST32(ea, c->r[3]); }
    c->r[7] = c->r[7] + c->r[14];
    c->r[7] = (c->r[7] & 0x3fffu) | ((c->r[2] << 14) & 0xffffc000u);
    { uint32_t ea = c->r[11] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[7] = c->r[7] & 0xf0003fffu;
    { uint32_t ea = c->r[9] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x40u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[3] & c->r[5];
    c->r[2] = c->r[2] + c->r[14];
    c->r[2] = c->r[2] & 0x3fffu;
    c->r[2] = c->r[7] | (c->r[2] << 14);
    c->r[7] = c->r[1] & c->r[12];
    { uint32_t ea = c->r[11] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[2] & c->r[5];
    c->r[0] = c->r[0] & c->r[5];
    { uint32_t ea = c->r[9] - 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x44u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & c->r[5];
    c->r[3] = c->r[3] & c->r[5];
    c->r[1] = c->r[1] + c->r[14];
    c->r[1] = c->r[1] & 0x3fffu;
    c->r[1] = c->r[7] | c->r[1];
    { uint32_t ea = c->r[11] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[7] = c->r[1] & c->r[4];
    c->r[0] = c->r[0] & c->r[5];
    { uint32_t ea = c->r[9] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x44u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + c->r[14];
    c->r[1] = c->r[1] & 0x3fffu;
    c->r[1] = c->r[7] | (c->r[1] << 14);
    { uint32_t ea = c->r[11] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[7] = c->r[1] & c->r[5];
    c->r[0] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[9] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[7] & c->r[5];
    c->r[1] = c->r[1] + c->r[14];
    c->r[1] = c->r[1] & 0x3fffu;
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = c->r[2] & c->r[5];
    c->r[2] = c->r[3] & c->r[5];
    { uint32_t ea = c->r[11] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x48u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & c->r[4];
    c->r[1] = c->r[1] & c->r[5];
    c->r[2] = c->r[2] & c->r[5];
    { uint32_t ea = c->r[9] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x48u; ST32(ea, c->r[6]); }
    c->r[3] = c->r[3] + c->r[14];
    c->r[3] = c->r[3] & 0x3fffu;
    c->r[0] = c->r[0] | (c->r[3] << 14);
    { uint32_t ea = c->r[11] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] - 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_EQ) { goto L_26bc424; }
    c->r[4] = c->r[13] + 0x100u;
    c->r[2] = c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0x26bc25cu; f_26b723c(c);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26bc270u; f_26b92b4(c);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xfff00000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xf0000u;
    c->r[0] = c->r[8] & (c->r[4] << 20);
    c->r[1] = c->r[1] & c->r[14];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[11] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x78u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] & c->r[12];
    c->r[2] = c->r[2] & c->r[12];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x70u; ST32(ea, c->r[3]); }
    c->r[3] = 0xffu;
    c->r[3] = c->r[3] & (c->r[1] >> 12);
    c->r[0] = c->r[0] & c->r[14];
    c->r[0] = c->r[3] | (c->r[0] << 8);
    c->r[3] = 0xf0000000u;
    c->r[2] = c->r[2] & c->r[3];
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = c->r[10] & c->r[14];
    { uint32_t ea = c->r[11] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] & c->r[14];
    c->r[0] = c->r[0] | (c->r[5] << 20);
    c->r[0] = c->r[0] & c->r[12];
    c->r[0] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[11] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] & (c->r[6] << 20);
    c->r[0] = c->r[2] | c->r[0];
    c->r[0] = c->r[0] & c->r[12];
    c->r[0] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[11] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] & (c->r[1] << 20);
    c->r[1] = c->r[9] & c->r[12];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[8];
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] | c->r[2];
    c->r[1] = c->r[1] & c->r[14];
    c->r[14] = 0xffu;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[11] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] & (c->r[4] >> 12);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[12];
    c->r[1] = c->r[1] & c->r[3];
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = 0xff00u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfff0000u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[4] & (c->r[1] << 8);
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = ~0xffu;
    c->r[0] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[11] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2] & c->r[1];
    c->r[2] = 0xffu;
    c->r[0] = c->r[4] & (c->r[0] << 8);
    c->r[1] = c->r[1] | (c->r[5] >> 12);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xf0000000u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = ~0x80000000u;
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = 0x80000000u;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[11] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] & (c->r[6] >> 12);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[4] & (c->r[1] << 8);
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = ~0xf0000000u;
    c->r[0] = c->r[0] & c->r[12];
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 28);
    { uint32_t ea = c->r[11] + 0x64u; ST32(ea, c->r[0]); }
L_26bc424:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[13] + 0x100u;
    c->r[1] = c->r[7];
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    c->r[14] = 0x26bc43cu; f_26b73ac(c);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26bc60c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[4];
    c->r[14] = 0x26bc458u; f_26b92b4(c);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xfff00000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xf0000u;
    c->r[0] = c->r[8] & (c->r[4] << 20);
    c->r[1] = c->r[1] & c->r[14];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[11] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x98u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] & c->r[12];
    c->r[2] = c->r[2] & c->r[12];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x90u; ST32(ea, c->r[3]); }
    c->r[3] = 0xffu;
    c->r[3] = c->r[3] & (c->r[1] >> 12);
    c->r[0] = c->r[0] & c->r[14];
    c->r[0] = c->r[3] | (c->r[0] << 8);
    c->r[3] = 0xf0000000u;
    c->r[2] = c->r[2] & c->r[3];
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = c->r[10] & c->r[14];
    { uint32_t ea = c->r[11] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] & c->r[14];
    c->r[0] = c->r[0] | (c->r[5] << 20);
    c->r[0] = c->r[0] & c->r[12];
    c->r[0] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[11] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] & (c->r[6] << 20);
    c->r[0] = c->r[2] | c->r[0];
    c->r[0] = c->r[0] & c->r[12];
    c->r[0] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[11] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] & (c->r[1] << 20);
    c->r[1] = c->r[9] & c->r[12];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[8];
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[1] | c->r[2];
    c->r[1] = c->r[1] & c->r[14];
    c->r[14] = 0xffu;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[11] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] & (c->r[4] >> 12);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[12];
    c->r[1] = c->r[1] & c->r[3];
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = 0xff00u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfff0000u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[4] & (c->r[1] << 8);
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = ~0xffu;
    c->r[0] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[11] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2] & c->r[1];
    c->r[2] = 0xffu;
    c->r[0] = c->r[4] & (c->r[0] << 8);
    c->r[1] = c->r[1] | (c->r[5] >> 12);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xf0000000u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = ~0x80000000u;
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = 0x80000000u;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[11] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] & (c->r[6] >> 12);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[4] & (c->r[1] << 8);
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = ~0xf0000000u;
    c->r[0] = c->r[0] & c->r[12];
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 28);
    { uint32_t ea = c->r[11] + 0x84u; ST32(ea, c->r[0]); }
L_26bc60c:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->v.s[18];
    c->r[7] = c->r[11] + 0xa0u;
    c->r[12] = c->r[11] + 0xa4u;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[9] - 12u);
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[0] = (c->r[0] >> 10);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->v.s[18];
    c->r[6] = c->v.s[0];
    c->r[6] = (c->r[6] & 0x3ffu) | ((c->r[0] << 10) & 0xfffffc00u);
    c->r[0] = ~0x0u;
    c->r[2] = c->r[7] & c->r[0];
    { uint32_t ea = c->r[11] + 0xa0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    c->r[3] = c->r[3] & c->r[0];
    c->r[1] = c->r[1] & c->r[0];
    c->r[0] = 0xffffu;
    c->r[12] = c->r[11] + 0xa0u;
    c->v.s[0] = LD32(c->r[9] - 8u);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfc000000u;
    c->r[0] = c->r[6] & c->r[0];
    c->r[6] = 0x0u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x3ff0000u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->v.s[18];
    c->r[7] = c->v.s[0];
    c->r[7] = c->r[6] & (c->r[7] << 16);
    c->r[0] = c->r[7] | c->r[0];
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[12] = c->r[11] + 0xa0u;
    { uint32_t ea = c->r[9] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = (c->r[1] & 0xfffffff8u) | ((c->r[7] << 0) & 0x7u);
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] & 0xffffff8fu;
    c->r[12] = c->r[11] + 0xa0u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7u;
    c->r[1] = c->r[1] | (c->r[7] << 4);
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] & 0xfffff8ffu;
    c->r[12] = c->r[11] + 0xa0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7u;
    c->r[1] = c->r[1] | (c->r[7] << 8);
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] & 0xffff8fffu;
    c->r[12] = c->r[11] + 0xa0u;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7u;
    c->r[1] = c->r[1] | (c->r[7] << 12);
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] & 0xfffff003u;
    c->r[12] = c->r[11] + 0xa0u;
    c->v.s[0] = LD32(c->r[9] + 12u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->v.s[18];
    c->r[7] = c->v.s[0];
    c->r[7] = c->r[7] & 0x3ffu;
    c->r[3] = c->r[3] | (c->r[7] << 2);
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] & 0xffc00fffu;
    c->r[12] = c->r[11] + 0xa0u;
    c->v.s[0] = LD32(c->r[9] + 16u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->v.s[18];
    c->r[7] = c->v.s[0];
    c->r[7] = c->r[7] & 0x3ffu;
    c->r[3] = c->r[3] | (c->r[7] << 12);
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] & 0x3fffffu;
    c->r[12] = c->r[11] + 0xa0u;
    c->v.s[0] = LD32(c->r[9] + 20u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->v.s[18];
    c->r[7] = c->v.s[0];
    c->r[3] = c->r[3] | (c->r[7] << 22);
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[12] = c->r[11] + 0xa0u;
    c->v.s[0] = LD32(c->r[9] + 24u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[12] = c->r[11] + 0xa0u;
    c->r[7] = c->v.s[0];
    c->r[2] = (c->r[2] & 0xfffffc00u) | ((c->r[7] << 0) & 0x3ffu);
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xffffefffu;
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[12] = c->r[11] + 0xa0u;
    c->r[7] = c->r[7] & 0x1u;
    c->r[2] = c->r[2] | (c->r[7] << 12);
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xffffdfffu;
    { uint32_t ea = c->r[9] + 0x1du; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[12] = c->r[11] + 0xa0u;
    c->r[7] = c->r[7] & 0x1u;
    c->r[2] = c->r[2] | (c->r[7] << 13);
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x1eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[12] = c->r[11] + 0xa0u;
    c->r[7] = c->r[7] & 0x1u;
    c->r[2] = c->r[2] | (c->r[7] << 14);
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xffff7fffu;
    { uint32_t ea = c->r[9] + 0x1fu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[12] = c->r[11] + 0xa0u;
    c->r[7] = c->r[7] & 0x1u;
    c->r[2] = c->r[2] | (c->r[7] << 15);
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xfffeffffu;
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[12] = c->r[11] + 0xa0u;
    c->r[7] = c->r[7] & 0x1u;
    c->r[2] = c->r[2] | (c->r[7] << 16);
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xfffdffffu;
    { uint32_t ea = c->r[9] + 0x21u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[12] = c->r[11] + 0xa0u;
    c->r[7] = c->r[7] & 0x1u;
    c->r[2] = c->r[2] | (c->r[7] << 17);
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xfffbffffu;
    { uint32_t ea = c->r[9] + 0x22u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[12] = c->r[11] + 0xa0u;
    c->r[7] = c->r[7] & 0x1u;
    c->r[2] = c->r[2] | (c->r[7] << 18);
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xfff7ffffu;
    { uint32_t ea = c->r[9] + 0x23u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[7] = c->r[7] & 0x1u;
    c->r[2] = c->r[2] | (c->r[7] << 19);
    { uint32_t ea = c->r[11] + 0xacu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
L_26bc88c:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[9] = c->r[9] + 0xc4u;
    c->r[5] = c->r[5] + 0xb0u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_26bad68; }
L_26bc8a4:;
    { uint32_t ea = c->r[10] + 0x718u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x2u; }
    (void)f_subs(c, c->r[1], 0x5u);
    c->r[1] = 0x0u;
    if (COND_HI) { c->r[1] = c->r[0]; }
    goto L_26bc8d0;
L_26bc8c4:;
    c->r[1] = c->r[0];
    goto L_26bc8d0;
L_26bc8cc:;
    c->r[1] = 0x2u;
L_26bc8d0:;
    c->r[0] = c->r[1];
    c->r[13] = c->r[13] + 0x130u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
