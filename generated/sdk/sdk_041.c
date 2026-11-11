#include "cpu.h"
#include "neon_rt.h"
void f_26a78f0(Cpu *c);
void f_26a7938(Cpu *c);
void f_26a7a44(Cpu *c);
void f_26a7a74(Cpu *c);
void f_26a7bc8(Cpu *c);
void f_26a7bfc(Cpu *c);
void f_26a7e88(Cpu *c);
void f_26a8508(Cpu *c);
void f_26a90f4(Cpu *c);
void f_26a91fc(Cpu *c);
void f_26a9238(Cpu *c);
void f_26a97b8(Cpu *c);
void f_26a9998(Cpu *c);
void f_26a9ad4(Cpu *c);
void f_26a9c30(Cpu *c);
void f_26a9d34(Cpu *c);
void f_26a9e28(Cpu *c);
void f_26a9f5c(Cpu *c);
void f_26aa59c(Cpu *c);
void f_26ab13c(Cpu *c);
void f_26ab448(Cpu *c);
void f_26ad23c(Cpu *c);
void f_26ad534(Cpu *c);
void f_26ad6b0(Cpu *c);
void f_26ae0b8(Cpu *c);
void f_26ae1a0(Cpu *c);
void f_26ae700(Cpu *c);
void f_26ae704(Cpu *c);
void f_26aee3c(Cpu *c);
void f_26aeec4(Cpu *c);
void f_26af320(Cpu *c);
void f_26af4cc(Cpu *c);
void f_26af5fc(Cpu *c);
void f_26af6b8(Cpu *c);
void f_26af754(Cpu *c);
void f_26af7a0(Cpu *c);
void f_26af818(Cpu *c);
void f_26af834(Cpu *c);
void f_26af838(Cpu *c);
void f_26afa9c(Cpu *c);
void f_26afc4c(Cpu *c);
void f_26afdd0(Cpu *c);
void f_26b0aac(Cpu *c);
void f_283afac(Cpu *c);
void f_283b33c(Cpu *c);
void f_283b648(Cpu *c);
void f_283cb78(Cpu *c);
void f_283cbcc(Cpu *c);
void f_283cbd8(Cpu *c);
void f_283cbe4(Cpu *c);
void f_283cc38(Cpu *c);
void f_283cf8c(Cpu *c);
void f_283cfa4(Cpu *c);
void f_284c8f8(Cpu *c);
void f_284c904(Cpu *c);
void f_284c910(Cpu *c);
void f_284c934(Cpu *c);
void f_284c940(Cpu *c);
void f_2850060(Cpu *c);
void f_2850084(Cpu *c);
void f_28500a8(Cpu *c);
void f_28500b4(Cpu *c);
void f_28500d8(Cpu *c);
void f_28500e4(Cpu *c);
void f_2850138(Cpu *c);
void f_28501a4(Cpu *c);
void f_285033c(Cpu *c);
void f_285039c(Cpu *c);
void f_28503b4(Cpu *c);
void f_28503cc(Cpu *c);
void f_28503d8(Cpu *c);
void f_28503e4(Cpu *c);
void f_2850480(Cpu *c);
void f_2850498(Cpu *c);
void f_28504b0(Cpu *c);
void f_2850528(Cpu *c);
void f_2850534(Cpu *c);
void f_28505b8(Cpu *c);
void f_28505c4(Cpu *c);
void f_285060c(Cpu *c);
void f_2850618(Cpu *c);
void f_2850624(Cpu *c);
void f_2850630(Cpu *c);
void f_285063c(Cpu *c);
void f_2850648(Cpu *c);
void f_2850654(Cpu *c);
void f_2850660(Cpu *c);
void f_285066c(Cpu *c);
void f_2850678(Cpu *c);
void f_2850684(Cpu *c);
void f_2850690(Cpu *c);
void f_285069c(Cpu *c);
void f_28506a8(Cpu *c);
void f_28506b4(Cpu *c);
void f_28506c0(Cpu *c);
void f_28506cc(Cpu *c);
void f_28506d8(Cpu *c);
void f_28506e4(Cpu *c);
void f_28506f0(Cpu *c);
void f_28506fc(Cpu *c);
void f_2850708(Cpu *c);
void f_2850714(Cpu *c);
void f_2850720(Cpu *c);
void f_285072c(Cpu *c);
void f_2850738(Cpu *c);
void f_2850744(Cpu *c);
void f_2850750(Cpu *c);
void f_285075c(Cpu *c);
void f_2850768(Cpu *c);
void f_2850774(Cpu *c);
void f_2850780(Cpu *c);
void f_285078c(Cpu *c);
void f_2850798(Cpu *c);
void f_28507a4(Cpu *c);
void f_28507b0(Cpu *c);
void f_28507bc(Cpu *c);
void f_28507c8(Cpu *c);
void f_28507d4(Cpu *c);
void f_28507e0(Cpu *c);
void f_28507ec(Cpu *c);
void f_28507f8(Cpu *c);
void f_2850804(Cpu *c);
void f_2850810(Cpu *c);
void f_26a8508(Cpu *restrict c) {
    FN_ENTER(0x26a8508u);
L_26a8508:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1acu;
    c->r[11] = c->r[1];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[5] = c->r[0];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[11]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    c->r[8] = c->r[6];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[8] = c->r[8] & 0xffffff1fu;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[0] = c->r[0] & 0xffffff00u;
    (void)f_subs(c, c->r[0], 0x100u);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[8] = c->r[6]; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0xa00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26a85f0; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26a85f0; }
    { uint32_t ea = c->r[5] + 0x155u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x153u;
    c->r[0] = c->r[5] + c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = c->r[5] + 0x154u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_26a85cc; }
    c->r[0] = c->r[5];
    c->r[9] = c->r[7];
    c->r[7] = c->r[6];
    c->r[6] = c->r[5];
    c->r[4] = c->r[2];
    c->r[5] = c->r[3];
    c->r[14] = 0x26a85b8u; f_26ae1a0(c);
    c->r[3] = c->r[5];
    c->r[5] = c->r[6];
    c->r[6] = c->r[7];
    c->r[7] = c->r[9];
    c->r[2] = c->r[4];
L_26a85cc:;
    { uint32_t ea = c->r[5] + 0x140u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x138u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[5] + 0x13cu; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = (c->r[7] >> 16) & 0x1u; }
    if (COND_EQ) { c->r[0] = c->r[0] + 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); } }
L_26a85f0:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[10] = r; }
    if (COND_EQ) { goto L_26a862c; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x60u;
    c->r[9] = c->r[3];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[13] + 0x60u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3u;
    c->r[14] = 0x26a8614u; f_2850528(c);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    c->r[3] = c->r[9];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); } }
L_26a862c:;
    (void)f_subs(c, c->r[2], 0x1u);
    c->r[4] = ~0x15u;
    if (COND_GE) { (void)f_subs(c, c->r[3], 0x1u); }
    if (COND_LT) { goto L_26a8dbc; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t r = c->r[7] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_26a8dbc; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[13] + 0x60u;
    c->r[1] = 0x0u;
    c->r[2] = 0x108u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    c->r[14] = 0x26a866cu; f_2850138(c);
    c->r[10] = 0xa10u;
    c->r[9] = 0x408u;
    c->r[1] = 0x710u;
    c->r[12] = 0x408u;
    c->r[3] = 0x1u;
    c->r[0] = 0xau;
    (void)f_subs(c, c->r[8], 0xffu);
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xa000000u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x8240000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8440000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x9200000u;
    if (COND_LE) { goto L_26a8794; }
    c->r[2] = c->r[8] - 0x100u;
    (void)f_subs(c, c->r[2], 0x1bu);
    if (COND_HI) { goto L_26a88c4; }
    c->r[2] = (c->r[2] << 2);
    c->r[14] = 0x26a86b4u + 0xcu;
    c->r[3] = 0xf10u;
    { uint32_t ea = c->r[2] + c->r[14]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x9200000u;
    c->pc = c->r[2] + c->r[14]; switch (c->pc) { case 0x26a8730u: goto L_26a8730; case 0x26a8834u: goto L_26a8834; case 0x26a8884u: goto L_26a8884; case 0x26a8930u: goto L_26a8930; case 0x26a89c0u: goto L_26a89c0; case 0x26a8a10u: goto L_26a8a10; case 0x26a8a78u: goto L_26a8a78; case 0x26a8a98u: goto L_26a8a98; case 0x26a8ac8u: goto L_26a8ac8; case 0x26a8b14u: goto L_26a8b14; case 0x26a8b44u: goto L_26a8b44; case 0x26a8ea0u: goto L_26a8ea0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26a8730:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a8dbc; }
    c->r[1] = f_subs(c, c->r[12], 0x1c0000u);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[10] = 0x3u;
    c->r[2] = c->r[0] - 0x0u - 1u + c->cf;
    c->r[0] = c->r[13] + 0x48u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[9]); }
    c->r[9] = 0x2u;
    c->r[0] = c->r[13] + 0x24u;
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x60u;
    c->r[1] = 0x3u;
    c->r[14] = 0x26a8790u; f_2850618(c);
    goto L_26a8bb4;
L_26a8794:;
    c->r[2] = c->r[8] - 0x3u;
    (void)f_subs(c, c->r[2], 0x20u);
    if (COND_HI) { goto L_26a8ea0; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0x26a87acu + 0x4u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x26a8834u: goto L_26a8834; case 0x26a8884u: goto L_26a8884; case 0x26a8974u: goto L_26a8974; case 0x26a8dbcu: goto L_26a8dbc; case 0x26a8ea0u: goto L_26a8ea0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26a8834:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] | c->r[2];
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a8dbc; }
    c->r[2] = 0x11au;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[6], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x11u);
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t r = c->r[3] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { c->r[1] = 0x710u; }
    if (COND_NE) { c->r[0] = 0xau; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x80c0000u; }
    goto L_26a8b00;
L_26a8884:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a8dbc; }
    c->r[1] = f_subs(c, c->r[12], 0x1c0000u);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[0] - 0x0u - 1u + c->cf;
    c->r[0] = c->r[13] + 0x48u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[9]); }
    c->r[0] = c->r[13] + 0x24u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x1u;
    goto L_26a8a4c;
L_26a88c4:;
    c->r[12] = 0x3859u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x20200000u;
    (void)f_subs(c, c->r[8], c->r[12]);
    if (COND_NE) { c->r[1] = 0x3159u; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x20360000u; }
    if (COND_NE) { (void)f_subs(c, c->r[8], c->r[1]); }
    if (COND_NE) { goto L_26a8ea0; }
    c->r[1] = 0x1f00u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = c->r[5];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[0] = c->r[7] & c->r[1];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[2] | c->r[1];
    c->r[5] = c->r[5] & 0x1u;
    { uint32_t r = c->r[0] | c->r[5]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26a8dbc; }
    (void)f_subs(c, c->r[8], c->r[12]);
    if (COND_EQ) { goto L_26a8fd4; }
    c->r[0] = 0x3159u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x20360000u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_EQ) { goto L_26a8fdc; }
L_26a8920:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    goto L_26a8dbc;
L_26a8930:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] | c->r[2];
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a8dbc; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[9] = 0x2u;
    c->r[0] = c->r[13] + 0x24u;
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x60u;
    goto L_26a8ba0;
L_26a8974:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_26a8dbc; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = 0x1u;
    c->r[0] = 0x9u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x408u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x9200000u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[1] >> 31);
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    goto L_26a8bb4;
L_26a89c0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a8dbc; }
    c->r[1] = f_subs(c, c->r[12], 0x1c0000u);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[10] = 0x3u;
    c->r[2] = c->r[0] - 0x0u - 1u + c->cf;
    c->r[0] = c->r[13] + 0x48u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[9]); }
    c->r[0] = c->r[13] + 0x24u;
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x60u;
    goto L_26a8a60;
L_26a8a10:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a8dbc; }
    c->r[1] = f_subs(c, c->r[12], 0x1c0000u);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[0] - 0x0u - 1u + c->cf;
    c->r[0] = c->r[13] + 0x48u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[9]); }
    c->r[0] = c->r[13] + 0x24u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x4u;
L_26a8a4c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x60u;
    c->r[10] = 0x3u;
L_26a8a60:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x3u;
    c->r[14] = 0x26a8a70u; f_2850618(c);
    c->r[9] = 0x2u;
    goto L_26a8bb4;
L_26a8a78:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] | c->r[2];
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a8dbc; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    goto L_26a8b78;
L_26a8a98:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a8dbc; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2220u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x8140000u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    goto L_26a8b04;
L_26a8ac8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a8dbc; }
    c->r[1] = f_adds(c, c->r[3], 0x100u);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2220u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8140000u;
    c->r[1] = f_adds(c, c->r[1], 0x200u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
L_26a8b00:;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
L_26a8b04:;
    c->r[0] = c->r[13] + 0x24u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x1u;
    goto L_26a8b8c;
L_26a8b14:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a8dbc; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2220u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x8140000u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    goto L_26a8b80;
L_26a8b44:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a8dbc; }
    c->r[1] = f_adds(c, c->r[3], 0x100u);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2220u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8140000u;
    c->r[1] = f_adds(c, c->r[1], 0x200u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
L_26a8b78:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
L_26a8b80:;
    c->r[0] = c->r[13] + 0x24u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x4u;
L_26a8b8c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x60u;
    c->r[9] = 0x2u;
L_26a8ba0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x2u;
    c->r[14] = 0x26a8bb0u; f_2850618(c);
    c->r[10] = 0x2u;
L_26a8bb4:;
    c->r[0] = c->r[13] + 0x5cu;
    c->r[1] = c->r[13] + 0x58u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x26a8bd8u; f_26a7bfc(c);
    c->r[3] = (c->r[6] >> 5) & 0x7u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x0u;
    c->r[1] = 0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xfff0000u;
    (void)f_subs(c, c->r[0], 0x100u);
    if (COND_NE) { c->r[3] = c->r[1]; }
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_NE) { goto L_26a8c14; }
    (void)f_subs(c, c->r[3], 0x4u);
    c->r[2] = 0x0u;
    if (COND_HI) { goto L_26a8c28; }
    c->r[1] = 0x503cbcu;
    c->r[1] = 0x26a8c14u + c->r[1];
    goto L_26a8c1c;
L_26a8c14:;
    c->r[1] = 0x4c7530u;
    c->r[1] = 0x26a8c20u + c->r[1];
L_26a8c1c:;
    c->r[1] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
L_26a8c28:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[13] + 0x17cu;
    (void)f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[2]); }
    c->r[4] = c->r[3] & c->r[12];
    c->r[0] = c->r[3] & 0xc000u;
    c->r[3] = c->r[3] & 0x3fffu;
    c->r[4] = c->r[4] | c->r[1];
    c->r[0] = c->r[4] | c->r[0];
    c->r[0] = c->r[0] | c->r[3];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    if (COND_LS) { goto L_26a8cb0; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x2u);
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[0] & c->r[12];
    c->r[4] = c->r[0] & 0xc000u;
    c->r[0] = c->r[0] & 0x3fffu;
    c->r[3] = c->r[3] | c->r[1];
    c->r[3] = c->r[3] | c->r[4];
    c->r[0] = c->r[3] | c->r[0];
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26a8cb0; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] & c->r[12];
    c->r[1] = c->r[2] | c->r[1];
    c->r[2] = c->r[0] & 0xc000u;
    c->r[0] = c->r[0] & 0x3fffu;
    c->r[1] = c->r[1] | c->r[2];
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
L_26a8cb0:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + 0x118u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x17eu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x188u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x189u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x14u; ST16(ea, c->r[4]); }
    c->r[14] = 0x26a8d04u; f_284c934(c);
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[10]);
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[4]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0x6u; }
    if (COND_NE) { c->r[4] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[0]); } }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26a8d58; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x17cu;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_26a8d5c; }
    c->r[1] = c->r[10] & 0xfu;
    c->r[0] = 0x3u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    goto L_26a8d5c;
L_26a8d58:;
    c->r[2] = c->r[13] + 0x17cu;
L_26a8d5c:;
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x168u;
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    c->r[0] = 0xc00u;
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1a0u;
    c->r[2] = c->r[13] + 0x1a4u;
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[0]); } }
    c->r[0] = c->r[9];
    c->r[14] = 0x26a8da4u; f_284c940(c);
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26a8dc8; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26a8db8u; f_285039c(c);
L_26a8db8:;
    c->r[4] = ~0xbu;
L_26a8dbc:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x1acu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26a8dc8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x51u;
    c->r[10] = 0x0u;
    c->r[14] = 0x26a8dd8u; f_285060c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26a8db8; }
    c->r[0] = c->r[7] + 0xcu;
    c->r[1] = 0x0u;
    c->r[2] = 0x144u;
    c->r[14] = 0x26a8df4u; f_2850138(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0xcaffu;
    c->r[4] = ~0x0u;
    c->r[1] = c->r[13] + 0x60u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xdaff0000u;
    { uint32_t ea = c->r[7] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x58u;
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[9] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[0] = c->r[7] + 0x40u;
    c->r[14] = 0x26a8e48u; f_28501a4(c);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[4]); }
    c->r[14] = 0x26a8e54u; f_2850624(c);
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[7] + 0x148u; ST32(ea, c->r[10]); }
    c->r[14] = 0x26a8e68u; f_26a9998(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x26a8e74u; f_285039c(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26a8e90; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26a8e84u; f_2850630(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26a8e8cu; f_285063c(c);
    goto L_26a8dbc;
L_26a8e90:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    goto L_26a8dbc;
L_26a8ea0:;
    c->r[14] = 0x1510u;
    c->r[12] = 0x1810u;
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[6], 0x104u);
    c->r[3] = 0x1u;
    c->r[2] = c->r[8] - 0x1u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x530000u;
    if (COND_EQ) { c->r[9] = 0x2u; }
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x6880000u;
    c->r[0] = f_adds(c, c->r[14], 0xc10u);
    c->r[1] = c->r[3] + 0x0u + c->cf;
    (void)f_subs(c, c->r[2], 0x1fu);
    if (COND_HI) { goto L_26a8f70; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0x26a8ee0u + 0x4u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x26a8920u: goto L_26a8920; case 0x26a8f64u: goto L_26a8f64; case 0x26a902cu: goto L_26a902c; case 0x26a9038u: goto L_26a9038; case 0x26a9044u: goto L_26a9044; case 0x26a904cu: goto L_26a904c; case 0x26a9054u: goto L_26a9054; case 0x26a905cu: goto L_26a905c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26a8f64:;
    c->r[0] = 0x2120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa530000u;
    goto L_26a9058;
L_26a8f70:;
    c->r[0] = c->r[8] - 0x104u;
    (void)f_subs(c, c->r[0], 0xdu);
    if (COND_HI) { goto L_26a8920; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x26a8f88u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x26a8920u: goto L_26a8920; case 0x26a8fc4u: goto L_26a8fc4; case 0x26a90c4u: goto L_26a90c4; case 0x26a90d4u: goto L_26a90d4; case 0x26a90e0u: goto L_26a90e0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26a8fc4:;
    c->r[0] = 0x910u;
    c->r[1] = 0xau;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_26a905c;
L_26a8fd4:;
    c->r[10] = 0x408u;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xa000000u;
L_26a8fdc:;
    c->r[0] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x60u;
    c->r[14] = 0x26a9000u; f_284c8f8(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xfu;
    c->r[5] = c->r[9];
    c->r[10] = 0x1u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[1] = c->r[1] + 0x7u;
    c->r[1] = (c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    goto L_26a8bb4;
L_26a902c:;
    c->r[0] = 0x1210u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_26a9058;
L_26a9038:;
    c->r[0] = 0x2120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xd10000u;
    goto L_26a9058;
L_26a9044:;
    c->r[0] = c->r[12];
    goto L_26a9058;
L_26a904c:;
    c->r[0] = c->r[14];
    goto L_26a9058;
L_26a9054:;
    c->r[0] = c->r[10];
L_26a9058:;
    c->r[1] = 0x1u;
L_26a905c:;
    c->r[2] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[8];
    c->r[14] = 0x26a9084u; f_284c8f8(c);
    c->r[10] = 0x1u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26a8bb4; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = c->r[13] + 0x24u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x60u;
    c->r[0] = c->r[0] + 0x58u;
    c->r[14] = 0x26a90b8u; f_284c8f8(c);
    c->r[10] = 0x2u;
    c->r[9] = 0x1u;
    goto L_26a8bb4;
L_26a90c4:;
    c->r[0] = 0x408u;
    c->r[1] = 0xau;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x9200000u;
    goto L_26a905c;
L_26a90d4:;
    c->r[0] = f_adds(c, c->r[14], 0xb10u);
    c->r[1] = c->r[3] + 0x0u + c->cf;
    goto L_26a905c;
L_26a90e0:;
    c->r[0] = f_adds(c, c->r[12], 0x910u);
    c->r[1] = c->r[3] + 0x0u + c->cf;
    goto L_26a905c;
}
void f_26a90f4(Cpu *restrict c) {
    FN_ENTER(0x26a90f4u);
L_26a90f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[1] = 0x0u;
    c->r[2] = 0x140u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26a9118u; f_2850138(c);
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xd00du;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xb00b0000u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = ~0x0u;
    c->r[5] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x26a9180u; f_283cf8c(c);
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xb0u;
    c->r[14] = 0x26a9194u; f_283cc38(c);
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x26a91a8u; f_283cc38(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26a91b0u; f_2850648(c);
    c->r[5] = c->r[13];
    c->r[0] = c->r[5];
    c->r[14] = 0x26a91bcu; f_2850654(c);
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd8u;
    c->r[14] = 0x26a91d0u; f_283cbcc(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26a91d8u; f_2850660(c);
    { uint32_t ea = c->r[4] + 0x27u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26a91f4; }
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xd8000u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; ST32(ea, c->r[1]); }
L_26a91f4:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26a91fc(Cpu *restrict c) {
    FN_ENTER(0x26a91fcu);
L_26a91fc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x26a9214u; f_283cbd8(c);
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xb0u;
    c->r[14] = 0x26a9224u; f_283cbd8(c);
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_283cbe4(c);
}
void f_26a9238(Cpu *restrict c) {
    FN_ENTER(0x26a9238u);
L_26a9238:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[1];
    c->r[14] = 0x26a9244u; f_26a9ad4(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26a924cu; f_2850630(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26a9254u; f_285063c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26a925c(Cpu *restrict c) {
    FN_ENTER(0x26a925cu);
L_26a925c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[7] = c->r[0];
    c->r[0] = 0x6cu;
    c->r[4] = c->r[1];
    c->r[14] = 0x26a9270u; f_2850060(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26a92b4; }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x6cu;
    c->r[5] = 0x0u;
    c->r[14] = 0x26a9290u; f_2850138(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26a9298u; f_26a7938(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26a92c0; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26a92a8u; f_28500b4(c);
    c->r[5] = ~0x15u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26a92b4:;
    c->r[5] = ~0xbu;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26a92c0:;
    c->r[0] = 0x4454u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x48570000u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = 0x50u;
    c->r[0] = 0x26a92e0u + c->r[0];
    { uint32_t ea = c->r[6] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x7cu;
    c->r[0] = 0x26a92ecu + c->r[0];
    { uint32_t ea = c->r[6] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x244u;
    c->r[0] = 0x26a92f8u + c->r[0];
    { uint32_t ea = c->r[6] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x260u;
    c->r[0] = 0x26a9304u + c->r[0];
    { uint32_t ea = c->r[6] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4a8u;
    c->r[0] = 0x26a9310u + c->r[0];
    { uint32_t ea = c->r[6] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26a9330(Cpu *restrict c) {
    FN_ENTER(0x26a9330u);
L_26a9330:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26a9348u; f_26a78f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26a9360; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26a9358u; f_26a7a74(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26a9360u; f_28500b4(c);
L_26a9360:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26a9368(Cpu *restrict c) {
    FN_ENTER(0x26a9368u);
L_26a9368:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    c->r[4] = c->r[3];
    c->r[11] = c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[10] = c->r[2];
    c->r[0] = c->r[4];
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[0] & 0xffffff00u;
    c->r[5] = c->r[5] & 0xffffff1fu;
    (void)f_subs(c, c->r[0], 0x100u);
    c->r[7] = c->r[9] & 0xf0u;
    if (COND_NE) { c->r[5] = c->r[4]; }
    c->r[14] = 0x26a93a8u; f_285066c(c);
    (void)f_subs(c, c->r[7], 0x30u);
    c->r[1] = c->r[9] & 0xfu;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x3u);
    c->r[1] = 0x3858u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20200000u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_GT) { goto L_26a93f8; }
    c->r[1] = c->r[5] - 0x20u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_26a9414; }
    (void)f_subs(c, c->r[5], 0x23u);
    if (COND_NE) { goto L_26a9418; }
    c->r[8] = 0x1u;
    { uint32_t r = c->r[9] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a9454; }
    c->r[0] = ~0x15u;
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26a93f8:;
    c->r[1] = 0x3159u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20360000u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { c->r[1] = 0x3859u; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x20200000u; }
    if (COND_NE) { (void)f_subs(c, c->r[5], c->r[1]); }
    if (COND_NE) { goto L_26a9418; }
L_26a9414:;
    c->r[0] = 0x1u;
L_26a9418:;
    c->r[1] = c->r[5];
    c->r[1] = c->r[1] & 0xffffff00u;
    (void)f_subs(c, c->r[1], 0x100u);
    if (COND_NE) { goto L_26a9450; }
    c->r[1] = 0x101u;
    c->r[8] = c->r[0];
    c->r[1] = c->r[5] - c->r[1];
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { c->r[8] = 0x1u; }
    { uint32_t r = c->r[9] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[8] = c->r[0]; }
    (void)f_subs(c, c->r[5], 0x100u);
    if (COND_EQ) { c->r[8] = 0x3u; }
    goto L_26a9454;
L_26a9450:;
    c->r[8] = c->r[0];
L_26a9454:;
    c->r[0] = 0x109u;
    { uint32_t sc = 0; uint32_t r = c->r[9] & 0x1300u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6] + 0x155u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[7] = c->r[10];
    c->r[0] = c->r[5] - c->r[0];
    if (COND_NE) { c->r[8] = 0x3u; }
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = 0x1200u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x100000u;
    if (COND_CC) { c->r[8] = 0x1u; }
    c->r[0] = c->r[9] & c->r[0];
    (void)f_subs(c, c->r[0], 0x100000u);
    c->r[0] = 0x153u;
    if (COND_EQ) { c->r[8] = 0x1u; }
    c->r[0] = c->r[6] + c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = c->r[6] + 0x154u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_26a94ac; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26a94acu; f_26ae0b8(c);
L_26a94ac:;
    { uint32_t ea = c->r[6] + 0x134u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + 0x12cu;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[6] + 0x130u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_26a94d8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[8] = 0x1u; }
    goto L_26a94dc;
L_26a94d8:;
    c->r[8] = 0x3u;
L_26a94dc:;
    c->r[6] = c->r[13] + 0x4u;
    c->r[1] = 0x0u;
    c->r[2] = 0x18u;
    c->r[0] = c->r[6];
    c->r[14] = 0x26a94f0u; f_2850138(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0x26a9514u; f_26a97b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26a9534; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
L_26a9534:;
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26a953c(Cpu *restrict c) {
    FN_ENTER(0x26a953cu);
L_26a953c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[1];
    c->r[14] = 0x26a954cu; f_26a9ad4(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26a9554u; f_2850630(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26a955cu; f_285063c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26a9564(Cpu *restrict c) {
    FN_ENTER(0x26a9564u);
L_26a9564:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[2];
    c->r[8] = c->r[1];
    c->r[14] = 0x26a9578u; f_2850678(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_26a95a8; }
    c->r[0] = 0x494a11u;
    c->r[1] = c->r[4];
    c->r[2] = 0x26a9594u + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x26a9598u; f_283b33c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_LT) { goto L_26a95b4; }
    goto L_26a9624;
L_26a95a8:;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_26a9624; }
L_26a95b4:;
    { uint32_t ea = c->r[6] + 0x155u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x153u;
    c->r[9] = c->r[4] - c->r[7];
    c->r[10] = c->r[8] + c->r[7];
    c->r[0] = c->r[6] + c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = c->r[6] + 0x154u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_26a95e4; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26a95e4u; f_26ae1a0(c);
L_26a95e4:;
    { uint32_t ea = c->r[6] + 0x140u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + 0x138u;
    c->r[2] = 0x493f3au;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = 0x26a95fcu + c->r[2];
    if (COND_NE) { c->r[1] = c->r[6] + 0x13cu; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x493f2eu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x494999u;
    if (COND_EQ) { c->r[3] = 0x26a9614u + c->r[1]; }
    c->r[1] = c->r[9];
    c->r[2] = 0x26a961cu + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x26a9620u; f_283b33c(c);
    c->r[7] = c->r[0] + c->r[7];
L_26a9624:;
    (void)f_subs(c, c->r[5], 0x4u);
    if (COND_HI) { goto L_26a96e0; }
    c->r[0] = (c->r[5] << 2);
    c->r[1] = 0x26a9638u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x26a9650u: goto L_26a9650; case 0x26a966cu: goto L_26a966c; case 0x26a9688u: goto L_26a9688; case 0x26a96a4u: goto L_26a96a4; case 0x26a96c0u: goto L_26a96c0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26a9650:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_26a96e0; }
    c->r[2] = 0x49495bu;
    c->r[0] = c->r[8] + c->r[7];
    c->r[1] = c->r[4] - c->r[7];
    c->r[2] = 0x26a966cu + c->r[2];
    goto L_26a96d8;
L_26a966c:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_26a96e0; }
    c->r[2] = 0x494958u;
    c->r[0] = c->r[8] + c->r[7];
    c->r[1] = c->r[4] - c->r[7];
    c->r[2] = 0x26a9688u + c->r[2];
    goto L_26a96d8;
L_26a9688:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_26a96e0; }
    c->r[2] = 0x494962u;
    c->r[0] = c->r[8] + c->r[7];
    c->r[1] = c->r[4] - c->r[7];
    c->r[2] = 0x26a96a4u + c->r[2];
    goto L_26a96d8;
L_26a96a4:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_26a96e0; }
    c->r[2] = 0x49496cu;
    c->r[0] = c->r[8] + c->r[7];
    c->r[1] = c->r[4] - c->r[7];
    c->r[2] = 0x26a96c0u + c->r[2];
    goto L_26a96d8;
L_26a96c0:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_26a96e0; }
    c->r[2] = 0x49497bu;
    c->r[0] = c->r[8] + c->r[7];
    c->r[1] = c->r[4] - c->r[7];
    c->r[2] = 0x26a96dcu + c->r[2];
L_26a96d8:;
    c->r[14] = 0x26a96dcu; f_283b33c(c);
    c->r[7] = c->r[0] + c->r[7];
L_26a96e0:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_26a972c; }
    { uint32_t ea = c->r[6] + 0x152u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x151u;
    c->r[2] = c->r[6] + 0x150u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x493e22u;
    if (COND_NE) { c->r[2] = c->r[6] + c->r[0]; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x493e26u;
    c->r[3] = 0x26a9710u + c->r[2];
    c->r[2] = 0x49495au;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[8] + c->r[7];
    if (COND_NE) { c->r[3] = 0x26a9720u + c->r[1]; }
    c->r[1] = c->r[4] - c->r[7];
    c->r[2] = 0x26a9728u + c->r[2];
    c->r[14] = 0x26a9728u; f_283b33c(c);
    c->r[7] = c->r[0] + c->r[7];
L_26a972c:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_26a9778; }
    { uint32_t ea = c->r[6] + 0x155u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x153u;
    c->r[2] = 0x493de6u;
    c->r[0] = c->r[6] + c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[3] = 0x26a9750u + c->r[2];
    c->r[2] = 0x494936u;
    c->r[1] = 0x493dd2u;
    if (COND_NE) { c->r[0] = c->r[6] + 0x154u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x26a9764u + c->r[2];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[8] + c->r[7];
    if (COND_NE) { c->r[3] = 0x26a9770u + c->r[1]; }
    c->r[1] = c->r[4] - c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_283b33c(c);
L_26a9778:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_26a97b8(Cpu *restrict c) {
    FN_ENTER(0x26a97b8u);
L_26a97b8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[9] = c->r[1];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[13];
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[4];
    c->r[1] = c->r[1] & 0xffffff00u;
    c->r[2] = c->r[2] & 0xffffff1fu;
    (void)f_subs(c, c->r[1], 0x100u);
    c->r[1] = 0x0u;
    if (COND_NE) { c->r[2] = c->r[4]; }
    if (COND_EQ) { c->r[1] = c->r[4] & 0xe0u; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_LE) { goto L_26a9858; }
    c->r[3] = c->r[2] - 0x100u;
    (void)f_subs(c, c->r[3], 0x7u);
    if (COND_HI) { goto L_26a9894; }
    c->r[2] = (c->r[3] << 2);
    c->r[3] = 0x26a9820u + 0x8u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x26a9848u: goto L_26a9848; case 0x26a98a8u: goto L_26a98a8; case 0x26a98b8u: goto L_26a98b8; case 0x26a98c0u: goto L_26a98c0; case 0x26a98ccu: goto L_26a98cc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26a9848:;
    c->r[4] = 0x100u;
    c->r[6] = 0x119u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    goto L_26a98cc;
L_26a9858:;
    (void)f_subs(c, c->r[2], 0x11u);
    if (COND_EQ) { goto L_26a98c8; }
    (void)f_subs(c, c->r[2], 0x22u);
    c->r[6] = c->r[4];
    if (COND_NE) { goto L_26a98cc; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = ~0x15u;
    { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26a998c; }
    c->r[4] = 0x2u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x60000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[4] = 0x106u; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    c->r[6] = c->r[4];
    goto L_26a98cc;
L_26a9894:;
    c->r[3] = 0x5659u;
    c->r[6] = c->r[4];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x32310000u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_26a98cc; }
L_26a98a8:;
    c->r[4] = 0x100u;
    c->r[6] = 0x118u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    goto L_26a98cc;
L_26a98b8:;
    c->r[6] = 0x119u;
    goto L_26a98cc;
L_26a98c0:;
    c->r[6] = 0x11bu;
    goto L_26a98cc;
L_26a98c8:;
    c->r[6] = 0x11au;
L_26a98cc:;
    c->r[3] = c->r[4];
    c->r[2] = c->r[4];
    c->r[3] = c->r[3] & 0xffffff00u;
    c->r[2] = c->r[2] & 0xffffff1fu;
    (void)f_subs(c, c->r[3], 0x100u);
    c->r[3] = c->r[6];
    if (COND_EQ) { c->r[4] = c->r[2] | c->r[1]; }
    c->r[2] = c->r[6];
    c->r[3] = c->r[3] & 0xffffff00u;
    c->r[2] = c->r[2] & 0xffffff1fu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[3], 0x100u);
    if (COND_EQ) { c->r[6] = c->r[2] | c->r[1]; }
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x1u); }
    if (COND_EQ) { goto L_26a991c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffff00u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
L_26a991c:;
    c->r[1] = c->r[13];
    c->r[2] = c->r[13] + 0x1cu;
    c->r[14] = 0x26a9928u; f_26a8508(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_26a998c; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[4], 0x23u);
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_26a9984; }
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_26a9974; }
    { uint32_t ea = c->r[13]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[6];
    c->r[14] = 0x26a9970u; f_26a7e88(c);
    goto L_26a9984;
L_26a9974:;
    { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] >> 3) & 0x1fu;
    c->r[0] = udiv32(c->r[1], c->r[0]);
L_26a9984:;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[5]); }
L_26a998c:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_26a9998(Cpu *restrict c) {
    FN_ENTER(0x26a9998u);
L_26a9998:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[1];
    c->r[6] = c->r[0];
    c->r[14] = 0x26a99acu; f_26a7a44(c);
    c->r[4] = ~0xbu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26a99cc; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x26a99c4u; f_2850534(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26a99d8; }
L_26a99cc:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26a99d8:;
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26a9a04; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5] + 0x58u;
    c->r[1] = 0x0u;
L_26a99f0:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); c->r[0] = c->r[0] + 0x58u; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CC) { goto L_26a99f0; }
L_26a9a04:;
    c->r[0] = 0x40u;
    c->r[14] = 0x26a9a0cu; f_26ae700(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[5] + 0x148u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26a99cc; }
    c->r[1] = 0x0u;
    c->r[2] = 0x40u;
    c->r[8] = 0x0u;
    c->r[14] = 0x26a9a28u; f_2850138(c);
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[7] = c->r[6] + 0x110u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x26a9a40u; f_2850684(c);
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x8u;
    c->r[1] = 0x0u;
    c->r[14] = 0x26a9a54u; f_283cc38(c);
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26a9a8c; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26a9a8cu; f_2850684(c);
L_26a9a8c:;
    c->r[0] = 0x140u;
    c->r[14] = 0x26a9a94u; f_2850060(c);
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26a9ac4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26a9ab4u; f_26a90f4(c);
    { uint32_t ea = c->r[6] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_26a99cc;
L_26a9ac4:;
    c->r[14] = 0x26a9ac8u; f_28500b4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x148u; ST32(ea, c->r[0]); }
    goto L_26a99cc;
}
void f_26a9ad4(Cpu *restrict c) {
    FN_ENTER(0x26a9ad4u);
L_26a9ad4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26a9aecu; f_2850690(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_26a9b00; }
    { uint32_t ea = c->r[5] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26a9afcu; f_285039c(c);
    goto L_26a9c14;
L_26a9b00:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x26a9b0cu; f_26a9c30(c);
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26a9b48; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26a9b28u; f_28503e4(c);
    goto L_26a9b44;
L_26a9b2c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->pc = c->r[1]; c->r[14] = 0x26a9b3cu; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x26a9b44u; f_26ae704(c);
L_26a9b44:;
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
L_26a9b48:;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_26a9b2c; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_26a9bcc; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26a9b6cu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26a9bcc; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26a9b7cu; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26a9bb4; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x49453du;
    c->r[2] = 0x26a9ba4u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26a9ba8u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26a9bb0u; f_28506a8(c);
    goto L_26a9bcc;
L_26a9bb4:;
    c->r[0] = 0x494521u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[2] = 0x26a9bc8u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26a9bccu; f_283b33c(c);
L_26a9bcc:;
    { uint32_t ea = c->r[5] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26a9bd4u; f_285039c(c);
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x26a9be0u; f_283cbd8(c);
    { uint32_t ea = c->r[4] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_26a9bf8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26a9bf8u; f_26a91fc(c);
L_26a9bf8:;
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26a9c04u; f_28500b4(c);
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26a9c0cu; f_26ae704(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x148u; ST32(ea, c->r[0]); }
L_26a9c14:;
    c->r[0] = c->r[4];
    c->r[14] = 0x26a9c1cu; f_26a7a74(c);
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26a9c30(Cpu *restrict c) {
    FN_ENTER(0x26a9c30u);
L_26a9c30:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_26a9c68; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26a9c50:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->pc = c->r[1]; c->r[14] = 0x26a9c60u; rt_dispatch(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26a9c68u; f_26ae704(c);
L_26a9c68:;
    { uint32_t ea = c->r[6] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_26a9c50; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26a9c94; }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26a9c94u; f_28503e4(c);
L_26a9c94:;
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26a9c9cu; f_285039c(c);
    { uint32_t ea = c->r[6] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x26a9ca8u; f_283cbd8(c);
    { uint32_t ea = c->r[6] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26a9cb4u; f_28500b4(c);
    { uint32_t ea = c->r[6] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26a9cbcu; f_26ae704(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x26a9cc4u; f_285063c(c);
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_26a7a74(c);
}
void f_26a9cdc(Cpu *restrict c) {
    FN_ENTER(0x26a9cdcu);
L_26a9cdc:;
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26a9cfc; }
    (void)f_subs(c, c->r[0], 0xfeu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xdbu); }
    if (COND_NE) { goto L_26a9d04; }
    c->r[3] = 0xfeu;
    goto L_26a9d08;
L_26a9cfc:;
    c->r[3] = 0x0u;
    goto L_26a9d08;
L_26a9d04:;
    c->r[3] = 0xffu;
L_26a9d08:;
    { uint32_t ea = c->r[1] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { c->r[0] = c->r[2]; }
    if (COND_EQ) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x114u;
    __attribute__((musttail)) return f_28506b4(c);
}
void f_26a9d24(Cpu *restrict c) {
    FN_ENTER(0x26a9d24u);
L_26a9d24:;
    { uint32_t ea = c->r[1] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x114u;
    __attribute__((musttail)) return f_28506c0(c);
}
void f_26a9d34(Cpu *restrict c) {
    FN_ENTER(0x26a9d34u);
L_26a9d34:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[6] = c->r[1];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[6] + 0x148u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x114u;
    c->r[14] = 0x26a9d54u; f_28506c0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26a9d90; }
    c->r[14] = 0x26a9d60u; f_2850678(c);
    c->r[1] = ~0x0u;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_26a9e14; }
    { uint32_t ea = c->r[6] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x114u;
    c->r[0] = 0x0u;
    c->r[14] = 0x26a9d88u; f_28506b4(c);
    c->r[5] = ~0x0u;
    goto L_26a9e14;
L_26a9d90:;
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = ~0x0u;
    c->r[6] = ~0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_26a9e10; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26a9dacu; f_28506cc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { goto L_26a9e10; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26a9dc0u; f_285069c(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26a9df8; }
    c->r[0] = c->r[8] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4942f9u;
    c->r[2] = 0x26a9de8u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26a9decu; f_283b33c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x26a9df4u; f_28506a8(c);
    goto L_26a9e10;
L_26a9df8:;
    c->r[0] = 0x4942ddu;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    c->r[2] = 0x26a9e0cu + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26a9e10u; f_283b33c(c);
L_26a9e10:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
L_26a9e14:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26a9e28(Cpu *restrict c) {
    FN_ENTER(0x26a9e28u);
L_26a9e28:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x30u;
    { uint32_t ea = c->r[1] + 0x148u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x114u;
    c->r[0] = 0x0u;
    c->r[14] = 0x26a9e48u; f_28506b4(c);
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26a9ec4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26a9e5cu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26a9ec4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26a9e6cu; f_285069c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26a9eac; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x49424du;
    c->r[2] = 0x26a9e94u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26a9e98u; f_283b33c(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x26a9ea0u; f_28506a8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GE) { goto L_26a9ecc; }
    goto L_26a9f20;
L_26a9eac:;
    c->r[0] = 0x494229u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[2] = 0x26a9ec0u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26a9ec4u; f_283b33c(c);
L_26a9ec4:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_26a9f20; }
L_26a9ecc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x26a9ed4u; f_28506cc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_GE) { goto L_26a9f40; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26a9ee8u; f_285069c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26a9f28; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4941d1u;
    c->r[2] = 0x26a9f10u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26a9f14u; f_283b33c(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x26a9f1cu; f_28506a8(c);
    goto L_26a9f40;
L_26a9f20:;
    c->r[5] = ~0x0u;
    goto L_26a9f40;
L_26a9f28:;
    c->r[0] = 0x4941adu;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    c->r[2] = 0x26a9f3cu + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26a9f40u; f_283b33c(c);
L_26a9f40:;
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26a9f5c(Cpu *restrict c) {
    FN_ENTER(0x26a9f5cu);
L_26a9f5c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x80u;
    c->r[7] = c->r[2];
    c->r[2] = c->r[13] + 0x4u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[6] = c->r[0];
    c->r[14] = 0x26a9f7cu; f_26a9d34(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26a9f98; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_26a9fc4; }
L_26a9f90:;
    c->r[5] = c->r[7];
    goto L_26aa17c;
L_26a9f98:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    c->r[3] = c->r[4];
    c->r[14] = 0x26a9facu; f_26ad534(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26aa184; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x26a9fc0u; f_26a9e28(c);
    goto L_26aa180;
L_26a9fc4:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_26aa034; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_26a9f90; }
    c->r[0] = 0x4940d1u;
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[0] = 0x26a9fe8u + c->r[0];
    c->r[14] = 0x26a9fe8u; f_28506d8(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_GE) { goto L_26aa0ac; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26a9ffcu; f_285069c(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26aa03c; }
    c->r[0] = c->r[8] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4940bdu;
    c->r[2] = 0x26aa024u + c->r[0];
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0x26aa028u; f_283b33c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x26aa030u; f_28506a8(c);
    goto L_26aa054;
L_26aa034:;
    c->r[5] = c->r[6];
    goto L_26aa17c;
L_26aa03c:;
    c->r[0] = 0x494099u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    c->r[2] = 0x26aa050u + c->r[0];
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0x26aa054u; f_283b33c(c);
L_26aa054:;
    c->r[0] = c->r[6];
    c->r[14] = 0x26aa05cu; f_285069c(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26aa094; }
    c->r[0] = c->r[8] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x49405du;
    c->r[2] = 0x26aa084u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26aa088u; f_283b33c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x26aa090u; f_28506a8(c);
    goto L_26aa0ac;
L_26aa094:;
    c->r[0] = 0x494041u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[2] = 0x26aa0a8u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26aa0acu; f_283b33c(c);
L_26aa0ac:;
    c->r[0] = c->r[7];
    c->r[14] = 0x26aa0b4u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aa114; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26aa0c4u; f_285069c(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26aa0fc; }
    c->r[0] = c->r[8] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x493ff5u;
    c->r[2] = 0x26aa0ecu + c->r[0];
    c->r[0] = c->r[13] + 0x58u;
    c->r[14] = 0x26aa0f0u; f_283b33c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x26aa0f8u; f_28506a8(c);
    goto L_26aa114;
L_26aa0fc:;
    c->r[0] = 0x493fd9u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    c->r[2] = 0x26aa110u + c->r[0];
    c->r[0] = c->r[13] + 0x58u;
    c->r[14] = 0x26aa114u; f_283b33c(c);
L_26aa114:;
    c->r[0] = c->r[6];
    c->r[14] = 0x26aa11cu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aa17c; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26aa12cu; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26aa164; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x493f8du;
    c->r[2] = 0x26aa154u + c->r[0];
    c->r[0] = c->r[13] + 0x58u;
    c->r[14] = 0x26aa158u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26aa160u; f_28506a8(c);
    goto L_26aa17c;
L_26aa164:;
    c->r[0] = 0x493f71u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[2] = 0x26aa178u + c->r[0];
    c->r[0] = c->r[13] + 0x58u;
    c->r[14] = 0x26aa17cu; f_283b33c(c);
L_26aa17c:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
L_26aa180:;
    c->r[0] = 0x0u;
L_26aa184:;
    c->r[13] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26aa1b0(Cpu *restrict c) {
    FN_ENTER(0x26aa1b0u);
L_26aa1b0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x16cu;
    c->r[9] = c->r[1];
    c->r[4] = c->r[0];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_26aa1e0; }
    { uint32_t ea = c->r[9] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = ~0x15u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_26aa3b4; }
L_26aa1e0:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[9] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x50269cu;
    c->r[0] = 0x26aa204u + c->r[0];
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[13] + 0x60u;
    c->r[1] = 0x0u;
    c->r[2] = 0x108u;
    c->r[14] = 0x26aa224u; f_2850138(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26aa2e0; }
    c->r[12] = c->r[4];
    c->r[3] = 0x0u;
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26aa254; }
    c->r[0] = c->r[9] + 0x40u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x48u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_26aa254:;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_EQ) { goto L_26aa2c0; }
    c->r[0] = 0x58u;
    c->r[1] = c->r[13] + 0x30u;
    c->r[5] = c->r[13] + 0x54u;
    c->r[2] = c->r[7] - c->r[3];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[9]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = c->r[1] + (c->r[3] << 3);
    c->r[3] = c->r[5] + (c->r[3] << 2);
    c->r[3] = c->r[3] + 0x4u;
    c->r[0] = c->r[0] + 0xa0u;
L_26aa280:;
    c->r[5] = c->r[0] - 0x60u;
    c->r[2] = f_subs(c, c->r[2], 0x2u);
    { uint32_t ea = c->r[3] - 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] - 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] - 0x54u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    c->r[5] = c->r[0] - 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[5]); }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[4] = v; c->r[5] = v2; }
    c->r[0] = c->r[0] + 0xb0u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[1] + 0x10u;
    if (COND_NE) { goto L_26aa280; }
L_26aa2c0:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], 0x2u);
    c->r[4] = c->r[12];
    if (COND_CC) { goto L_26aa2e0; }
    c->r[0] = c->r[13] + 0x54u;
    c->r[1] = c->r[7];
    c->r[14] = 0x26aa2dcu; f_28506e4(c);
    c->r[5] = c->r[0];
L_26aa2e0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[13] + 0x30u;
    c->r[10] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[1] = c->r[7];
    c->r[14] = 0x26aa310u; f_2850618(c);
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x50u;
    c->r[3] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[3] = c->r[10];
    c->r[14] = 0x26aa338u; f_26a7bfc(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_26aa3a0; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26aa3a0; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = ~0x15u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_CS) { (void)f_subs(c, c->r[1], c->r[0]); }
    if (COND_CC) { goto L_26aa3b4; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26aa3f8; }
    { uint32_t r = c->r[7] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    c->r[1] = c->r[7] - 0x1u;
    if (COND_EQ) { goto L_26aa3c0; }
    c->r[3] = c->r[10] + 0x18u;
    c->r[0] = 0x0u;
L_26aa38c:;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[6]); c->r[3] = c->r[3] + 0x58u; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_26aa38c; }
    goto L_26aa3c4;
L_26aa3a0:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
L_26aa3b4:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x16cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26aa3c0:;
    c->r[0] = 0x0u;
L_26aa3c4:;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CC) { goto L_26aa3f8; }
    c->r[1] = 0x58u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[10]; c->r[1] = r; }
    c->r[0] = c->r[7] - c->r[0];
    c->r[1] = c->r[1] + 0x120u;
L_26aa3dc:;
    { uint32_t ea = c->r[1] - 0x108u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] - 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] - 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] + 0x160u;
    c->r[0] = f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_26aa3dc; }
L_26aa3f8:;
    c->r[0] = c->r[13] + 0x1cu;
    c->r[2] = c->r[13] + 0x60u;
    c->r[1] = 0x2u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x26aa414u; f_26ad6b0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26aa3b4; }
    { uint32_t ea = c->r[9] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x26aa428u; f_283cfa4(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[14] = 0x26aa434u; f_26a9c30(c);
    { uint32_t ea = c->r[9] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x3u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x34u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x26aa470u; f_28503b4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aa498; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[14] = 0x26aa484u; f_26a9c30(c);
    { uint32_t ea = c->r[9] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x26aa490u; f_283cb78(c);
    c->r[5] = ~0xbu;
    goto L_26aa3b4;
L_26aa498:;
    { uint32_t ea = c->r[9] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x26aa4a4u; f_283cb78(c);
    goto L_26aa3b4;
}
void f_26aa4ac(Cpu *restrict c) {
    FN_ENTER(0x26aa4acu);
L_26aa4ac:;
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x23u);
    if (COND_EQ) { c->r[0] = ~0x15u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x18u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = ~0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    c->r[14] = 0x26aa4ecu; f_26aa59c(c);
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26aa4f4(Cpu *restrict c) {
    FN_ENTER(0x26aa4f4u);
L_26aa4f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x30u;
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x23u);
    if (COND_NE) { goto L_26aa564; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_26aa588; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26aa51cu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aa588; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26aa52cu; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26aa570; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x493b8du;
    c->r[2] = 0x26aa554u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26aa558u; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26aa560u; f_28506a8(c);
    goto L_26aa588;
L_26aa564:;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_26aa59c(c);
L_26aa570:;
    c->r[0] = 0x493b65u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    c->r[2] = 0x26aa584u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26aa588u; f_283b33c(c);
L_26aa588:;
    c->r[0] = ~0x15u;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26aa59c(Cpu *restrict c) {
    FN_ENTER(0x26aa59cu);
L_26aa59c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x64u;
    c->r[11] = c->r[1];
    c->r[5] = c->r[0];
    c->r[4] = c->r[3];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[14] = 0x26aa5c0u; f_2850678(c);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[7] = c->r[0];
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x300u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26aa610; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_LT) { goto L_26aa84c; }
    c->r[0] = c->r[10];
    c->r[14] = 0x26aa5e0u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aa84c; }
    c->r[0] = c->r[10];
    c->r[14] = 0x26aa5f0u; f_285069c(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26aa6c4; }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x493ad1u;
    c->r[2] = 0x26aa610u + c->r[0];
    goto L_26aa65c;
L_26aa610:;
    { uint32_t r = c->r[6] & 0xfu; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_26aa678; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_LT) { goto L_26aa84c; }
    c->r[0] = c->r[10];
    c->r[14] = 0x26aa630u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aa84c; }
    c->r[0] = c->r[10];
    c->r[14] = 0x26aa640u; f_285069c(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26aa834; }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x493a81u;
    c->r[2] = 0x26aa660u + c->r[0];
L_26aa65c:;
    c->r[0] = c->r[13] + 0x3cu;
    c->r[1] = 0x28u;
    c->r[3] = c->r[10];
    c->r[14] = 0x26aa66cu; f_283b33c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26aa674u; f_28506a8(c);
    goto L_26aa84c;
L_26aa678:;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[8] + 0xb0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26aa698u; f_283cfa4(c);
    c->r[0] = 0xef0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x30000u;
    { uint32_t r = c->r[6] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_26aa6d8; }
    { uint32_t r = c->r[6] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[0] | 0x80000000u;
    if (COND_NE) { c->r[0] = c->r[0] | 0xc0000000u; }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[1]); }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[0]); } }
    goto L_26aa6e8;
L_26aa6c4:;
    c->r[0] = 0x493a11u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[10];
    c->r[2] = 0x26aa6d8u + c->r[0];
    goto L_26aa844;
L_26aa6d8:;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x26aa6e8u; f_283cb78(c);
L_26aa6e8:;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_26aa720; }
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x114u;
    c->r[14] = 0x26aa704u; f_28506c0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aa720; }
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[11] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_26aa9c8; }
L_26aa720:;
    c->r[8] = c->r[10];
L_26aa724:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[6] = c->r[5];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_26aa75c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[2];
    c->r[4] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26aa750u; f_283cfa4(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26aa758u; f_283cb78(c);
    c->r[2] = c->r[5];
L_26aa75c:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[2] | c->r[10]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_26aa7a0; }
    { uint32_t r = c->r[4] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26aa784; }
    { uint32_t ea = c->r[11] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_LE) { goto L_26aa9f4; }
L_26aa784:;
    c->r[5] = c->r[13] + 0x28u;
L_26aa788:;
    c->r[0] = c->r[10] + c->r[7];
    c->r[9] = c->r[2];
    c->r[1] = c->r[2] + c->r[4];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[4]); }
    goto L_26aa7b8;
L_26aa7a0:;
    { uint32_t ea = c->r[11] + 0x40u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[5] = c->r[13] + 0x28u;
L_26aa7a8:;
    c->r[9] = c->r[2];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
L_26aa7b8:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x26aa7ccu; f_283cfa4(c);
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[11] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_26aa8f4; }
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26aa85c; }
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26aa8b8; }
L_26aa800:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_26aa950; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LE) { goto L_26aaa40; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_26aaa78;
L_26aa834:;
    c->r[0] = 0x4938a1u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[10];
    c->r[2] = 0x26aa848u + c->r[0];
L_26aa844:;
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aa84cu; f_283b33c(c);
L_26aa84c:;
    c->r[4] = ~0x15u;
L_26aa850:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26aa85c:;
    c->r[4] = c->r[13] + 0x3cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x18u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26aa870u; f_2850138(c);
    { uint32_t ea = c->r[11] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x3cu;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26aa8acu; f_26a8508(c);
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aaa08; }
L_26aa8b8:;
    c->r[0] = c->r[1] + 0x8u;
L_26aa8bc:;
    c->r[14] = 0x26aa8c0u; f_283cb78(c);
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_26aa958; }
    c->r[4] = c->r[5] + 0xb0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26aa8e0u; f_283cfa4(c);
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    goto L_26aa964;
L_26aa8f4:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LT) { goto L_26aac4c; }
    c->r[0] = c->r[8];
    c->r[1] = ~0x0u;
    c->r[14] = 0x26aa908u; f_28506f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aabe4; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26aa918u; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26aabcc; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4937a1u;
    c->r[2] = 0x26aa940u + c->r[0];
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aa944u; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26aa94cu; f_28506a8(c);
    goto L_26aabe4;
L_26aa950:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_26aaa78;
L_26aa958:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xb0u;
L_26aa964:;
    c->r[14] = 0x26aa968u; f_283cb78(c);
    c->r[4] = ~0xbu;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LT) { goto L_26aa850; }
    c->r[0] = c->r[8];
    c->r[1] = ~0x0u;
    c->r[14] = 0x26aa980u; f_28506f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aab58; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26aa990u; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26aab40; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x493729u;
    c->r[2] = 0x26aa9b8u + c->r[0];
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aa9bcu; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26aa9c4u; f_28506a8(c);
    goto L_26aab58;
L_26aa9c8:;
    c->r[0] = ~0x0u;
    c->r[3] = c->r[13] + 0x3cu;
    c->r[1] = c->r[11];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26aa9e4u; f_26a9f5c(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[8] = c->r[10]; }
    goto L_26aa724;
L_26aa9f4:;
    { uint32_t ea = c->r[11] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[13] + 0x28u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GT) { goto L_26aa788; }
    goto L_26aa7a8;
L_26aaa08:;
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x34u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x26aaa2cu; f_28503b4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aabc4; }
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    goto L_26aa8bc;
L_26aaa40:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GT) { goto L_26aaa78; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_26aaa78; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[7] = 0x1u; }
L_26aaa78:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aaae4; }
    { uint32_t r = c->r[7] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26aaae4; }
    c->r[0] = 0x0u;
    c->r[1] = ~0x0u;
    c->r[2] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3];
    c->r[1] = c->r[11];
    c->r[3] = c->r[8];
    c->r[14] = 0x26aaabcu; f_26ad23c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26aacc4; }
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x26aaad8u; f_28503cc(c);
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_EQ) { goto L_26aadd8; }
    goto L_26aadec;
L_26aaae4:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LT) { goto L_26aadd0; }
    c->r[0] = c->r[8];
    c->r[1] = ~0x0u;
    c->r[14] = 0x26aaaf8u; f_28506f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aad60; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26aab08u; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26aad48; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4935b1u;
    c->r[2] = 0x26aab30u + c->r[0];
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aab34u; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26aab3cu; f_28506a8(c);
    goto L_26aad60;
L_26aab40:;
    c->r[0] = 0x493595u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    c->r[2] = 0x26aab54u + c->r[0];
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aab58u; f_283b33c(c);
L_26aab58:;
    c->r[0] = c->r[8];
    c->r[14] = 0x26aab60u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aa850; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26aab70u; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26aaba8; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x493549u;
    c->r[2] = 0x26aab98u + c->r[0];
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aab9cu; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26aaba4u; f_28506a8(c);
    goto L_26aa850;
L_26aaba8:;
    c->r[0] = 0x49352du;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    c->r[2] = 0x26aabbcu + c->r[0];
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aabc0u; f_283b33c(c);
    goto L_26aa850;
L_26aabc4:;
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_26aa800;
L_26aabcc:;
    c->r[0] = 0x493509u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    c->r[2] = 0x26aabe0u + c->r[0];
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aabe4u; f_283b33c(c);
L_26aabe4:;
    c->r[0] = c->r[8];
    c->r[14] = 0x26aabecu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aac4c; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26aabfcu; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26aac34; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4934bdu;
    c->r[2] = 0x26aac24u + c->r[0];
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aac28u; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26aac30u; f_28506a8(c);
    goto L_26aac4c;
L_26aac34:;
    c->r[0] = 0x4934a1u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    c->r[2] = 0x26aac48u + c->r[0];
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aac4cu; f_283b33c(c);
L_26aac4c:;
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aaca4; }
L_26aac5c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26aadec; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26aad1c; }
L_26aac78:;
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x26aac8cu; f_28503cc(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_26aac94:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xfffffffbu;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    goto L_26aadec;
L_26aaca4:;
    { uint32_t ea = c->r[11] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[3] = 0x3u;
    c->r[14] = 0x26aacbcu; f_28503b4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aac5c; }
L_26aacc4:;
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x26aacd0u; f_283cb78(c);
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_26aad04; }
    c->r[4] = c->r[5] + 0xb0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26aacf0u; f_283cfa4(c);
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    goto L_26aad10;
L_26aad04:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xb0u;
L_26aad10:;
    c->r[14] = 0x26aad14u; f_283cb78(c);
    c->r[4] = ~0xbu;
    goto L_26aa850;
L_26aad1c:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26aac94; }
    { uint32_t r = c->r[4] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { goto L_26aac78; }
    { uint32_t ea = c->r[11] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_LE) { { uint32_t ea = c->r[11] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_LE) { (void)f_subs(c, c->r[1], c->r[9]); }
    if (COND_GT) { goto L_26aac78; }
    goto L_26aac94;
L_26aad48:;
    c->r[0] = 0x49338du;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    c->r[2] = 0x26aad5cu + c->r[0];
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aad60u; f_283b33c(c);
L_26aad60:;
    c->r[0] = c->r[8];
    c->r[14] = 0x26aad68u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aadd0; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26aad78u; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26aadb8; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x493341u;
    c->r[2] = 0x26aada0u + c->r[0];
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aada4u; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26aadacu; f_28506a8(c);
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_EQ) { goto L_26aadd8; }
    goto L_26aadec;
L_26aadb8:;
    c->r[0] = 0x49331du;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    c->r[2] = 0x26aadccu + c->r[0];
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x26aadd0u; f_283b33c(c);
L_26aadd0:;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_26aadec; }
L_26aadd8:;
    c->r[7] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[0] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); }
L_26aadec:;
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x26aadf8u; f_283cb78(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aae28; }
    c->r[7] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[0] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + 0x110u; ST32(ea, c->r[0]); }
L_26aae28:;
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26aae50; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x148u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x110u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x110u; ST32(ea, c->r[3]); }
L_26aae50:;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aa850; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; } }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    goto L_26aa850;
}
void f_26aaeb0(Cpu *restrict c) {
    FN_ENTER(0x26aaeb0u);
L_26aaeb0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[4];
    c->r[1] = c->r[4];
    c->r[6] = c->r[6] & 0xffffff00u;
    c->r[1] = c->r[1] & 0xffffff1fu;
    (void)f_subs(c, c->r[6], 0x100u);
    if (COND_NE) { c->r[1] = c->r[4]; }
    (void)f_subs(c, c->r[1], 0x23u);
    if (COND_NE) { c->r[6] = 0x106u; }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[6]); }
    if (COND_EQ) { goto L_26aaef4; }
    c->r[4] = ~0x15u;
    (void)f_subs(c, c->r[1], 0x100u);
    if (COND_NE) { goto L_26aafa4; }
L_26aaef4:;
    c->r[12] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = ~0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[12]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[14]); }
    c->r[14] = 0x26aaf1cu; f_26aa59c(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26aafa4; }
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[5]; }
    { uint32_t ea = c->r[0] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x2u);
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_26aaf70; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = 0x2u;
    goto L_26aaf7c;
L_26aaf70:;
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    c->r[1] = 0x1u;
L_26aaf7c:;
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x20u;
    { uint32_t ea = c->r[0] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6] + 0x18u;
    c->r[1] = 0x0u;
    c->r[14] = 0x26aafa4u; f_2850138(c);
L_26aafa4:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26aafb0(Cpu *restrict c) {
    FN_ENTER(0x26aafb0u);
L_26aafb0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[4];
    c->r[1] = c->r[4];
    c->r[6] = c->r[6] & 0xffffff00u;
    c->r[1] = c->r[1] & 0xffffff1fu;
    (void)f_subs(c, c->r[6], 0x100u);
    if (COND_NE) { c->r[1] = c->r[4]; }
    (void)f_subs(c, c->r[1], 0x23u);
    if (COND_EQ) { goto L_26aaff4; }
    (void)f_subs(c, c->r[1], 0x100u);
    if (COND_NE) { c->r[6] = 0x106u; }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[6]); }
    if (COND_NE) { goto L_26ab074; }
L_26aaff4:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    c->r[14] = 0x26ab020u; f_26aa59c(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26ab120; }
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[5]; }
    { uint32_t ea = c->r[0] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x2u);
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_26ab0cc; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = 0x2u;
    goto L_26ab0d8;
L_26ab074:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LT) { goto L_26ab11c; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26ab084u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ab11c; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26ab094u; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26ab104; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x493025u;
    c->r[2] = 0x26ab0bcu + c->r[0];
    c->r[0] = c->r[13] + 0x18u;
    c->r[14] = 0x26ab0c0u; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26ab0c8u; f_28506a8(c);
    goto L_26ab11c;
L_26ab0cc:;
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    c->r[1] = 0x1u;
L_26ab0d8:;
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x20u;
    { uint32_t ea = c->r[0] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6] + 0x18u;
    c->r[1] = 0x0u;
    c->r[14] = 0x26ab100u; f_2850138(c);
    goto L_26ab120;
L_26ab104:;
    c->r[0] = 0x492fd1u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    c->r[2] = 0x26ab118u + c->r[0];
    c->r[0] = c->r[13] + 0x18u;
    c->r[14] = 0x26ab11cu; f_283b33c(c);
L_26ab11c:;
    c->r[4] = ~0x15u;
L_26ab120:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26ab134(Cpu *restrict c) {
    FN_ENTER(0x26ab134u);
L_26ab134:;
    c->r[2] = 0x0u;
    __attribute__((musttail)) return f_26ab13c(c);
}
void f_26ab13c(Cpu *restrict c) {
    FN_ENTER(0x26ab13cu);
L_26ab13c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[11] = c->r[1];
    c->r[5] = c->r[2];
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[1] = ~0x0u; }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x10bu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26ab1ac; }
L_26ab170:;
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_26ab24c; }
    c->r[4] = c->r[6] + 0xb0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26ab190u; f_283cfa4(c);
    { uint32_t ea = c->r[6] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[6] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x26ab1a4u; f_283cb78(c);
    c->r[5] = 0x0u;
    goto L_26ab25c;
L_26ab1ac:;
    { uint32_t ea = c->r[9] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ab268; }
    { uint32_t ea = c->r[0] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26ab268; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ab1d4u; f_28503d8(c);
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    c->r[12] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[9] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[11]); }
    c->r[2] = c->r[2] + 0x20u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); }
    c->r[0] = c->r[6];
    c->r[3] = ~0x0u;
    c->r[14] = 0x26ab20cu; f_26ad23c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26ab300; }
    { uint32_t ea = c->r[11] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_26ab31c; }
    c->r[4] = c->r[6] + 0xb0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26ab238u; f_283cfa4(c);
    { uint32_t ea = c->r[6] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[6] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    goto L_26ab258;
L_26ab24c:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[6] + 0x108u; ST32(ea, c->r[5]); }
L_26ab254:;
    c->r[0] = c->r[6] + 0xb0u;
L_26ab258:;
    c->r[14] = 0x26ab25cu; f_283cb78(c);
L_26ab25c:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26ab268:;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26ab170; }
    { uint32_t ea = c->r[11] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[2] * c->r[10] + c->r[1]; c->r[1] = r; }
    c->r[8] = c->r[3] - c->r[10];
    { uint32_t r = c->r[2] * c->r[8]; c->r[2] = r; }
    c->r[14] = 0x26ab29cu; f_28503d8(c);
    { uint32_t ea = c->r[11] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_26ab170; }
    c->r[6] = c->r[11] + 0x9cu;
    c->r[7] = 0x1u;
L_26ab2b0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + c->r[1];
    { uint32_t r = c->r[2] * c->r[10]; c->r[5] = r; }
    { uint32_t r = c->r[2] * c->r[8]; c->r[2] = r; }
    c->r[2] = udiv32(c->r[2], c->r[4]);
    c->r[5] = udiv32(c->r[5], c->r[4]);
    { uint32_t r = c->r[3] * c->r[5] + c->r[1]; c->r[1] = r; }
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[14] = 0x26ab2e8u; f_28503d8(c);
    { uint32_t ea = c->r[11] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] + 0x58u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_26ab2b0; }
    goto L_26ab170;
L_26ab300:;
    { uint32_t ea = c->r[9] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x110u; ST32(ea, c->r[0]); }
    goto L_26ab170;
L_26ab31c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x108u; ST32(ea, c->r[0]); }
    goto L_26ab254;
}
void f_26ab328(Cpu *restrict c) {
    FN_ENTER(0x26ab328u);
L_26ab328:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[5] = c->r[2];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_26ab344; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_26ab348;
L_26ab344:;
    c->r[2] = ~0x0u;
L_26ab348:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[2] = 0x0u;
    c->r[3] = ~0x0u;
    c->r[14] = 0x26ab36cu; f_26ad23c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ab388; }
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] + 0x110u; ST32(ea, c->r[2]); }
L_26ab388:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26ab390(Cpu *restrict c) {
    FN_ENTER(0x26ab390u);
L_26ab390:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[8] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[5] + 0xb0u;
    c->r[0] = c->r[7];
    c->r[14] = 0x26ab3b4u; f_283cfa4(c);
    c->r[1] = 0xef0u;
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26ab3e0; }
    { uint32_t r = c->r[6] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[0] | 0x80000000u;
    if (COND_NE) { c->r[0] = c->r[0] | 0xc0000000u; }
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[1]); }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[0]); } }
    goto L_26ab3f0;
L_26ab3e0:;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x26ab3f0u; f_283cb78(c);
L_26ab3f0:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[14] = 0x26ab3fcu; f_26ab448(c);
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_26ab434; }
    c->r[4] = c->r[5] + 0xb0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26ab41cu; f_283cfa4(c);
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_283cb78(c);
L_26ab434:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xb0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_283cb78(c);
}
void f_26ab448(Cpu *restrict c) {
    FN_ENTER(0x26ab448u);
L_26ab448:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[0] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { goto L_26ab468; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_26ab470;
L_26ab468:;
    c->r[6] = 0x0u;
    c->r[7] = ~0x0u;
L_26ab470:;
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_26ab4d0; }
    (void)f_adds(c, c->r[7], 0x1u);
    if (COND_EQ) { goto L_26ab5cc; }
    c->r[4] = c->r[5] + 0x8u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26ab490u; f_283cfa4(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_NE) { c->r[0] = c->r[5]; }
    if (COND_NE) { c->r[1] = 0x2u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[7]); }
    if (COND_NE) { goto L_26ab5d0; }
L_26ab4b8:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = c->r[5] + (c->r[1] << 3);
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
L_26ab4c4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_283cb78(c);
L_26ab4d0:;
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_26ab5c4; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_adds(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_26ab5c4; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x50u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_adds(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_26ab5c4; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[5] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x60u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_adds(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_26ab5c4; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x70u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_adds(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_26ab5c4; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[5] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x80u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_adds(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_26ab5c4; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[5] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x90u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_adds(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_26ab5c4; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[5] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26ab5c4; }
    { uint32_t ea = c->r[5] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0xa8u; ST32(ea, c->r[0]); } }
L_26ab5c4:;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[6]); }
L_26ab5cc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26ab5d0:;
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0xdu;
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_26ab4b8; }
    c->r[0] = c->r[5];
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[0] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_adds(c, c->r[2], 0x1u); }
    if (COND_NE) { goto L_26ab4c4; }
    goto L_26ab4b8;
}
void f_26ab714(Cpu *restrict c) {
    FN_ENTER(0x26ab714u);
L_26ab714:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x88u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] + 0xb0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x26ab738u; f_283cfa4(c);
    c->r[0] = 0xef0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x30000u;
    { uint32_t r = c->r[5] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    { uint32_t ea = c->r[7] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_26ab764; }
    { uint32_t r = c->r[5] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[0] | 0x80000000u;
    if (COND_NE) { c->r[0] = c->r[0] | 0xc0000000u; }
    { uint32_t ea = c->r[7] + 0x108u; ST32(ea, c->r[1]); }
    if (COND_NE) { { uint32_t ea = c->r[7] + 0x108u; ST32(ea, c->r[0]); } }
    goto L_26ab774;
L_26ab764:;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[7] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x26ab774u; f_283cb78(c);
L_26ab774:;
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_26ab7b8; }
    c->r[5] = c->r[6] + 0x8u;
    c->r[0] = c->r[5];
    c->r[14] = 0x26ab794u; f_283cfa4(c);
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_26ab9a0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ab7b0u; f_283cb78(c);
L_26ab7b0:;
    c->r[2] = 0x1u;
    goto L_26aba9c;
L_26ab7b8:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26ab9b0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26ab9c0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26ab9d0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26ab9e0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26ab9f0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26aba00; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26aba10; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26aba20; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26aba30; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26aba40; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26aba50; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26aba60; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26aba70; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26aba80; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26aba90; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    goto L_26aba9c;
L_26ab9a0:;
    c->r[0] = c->r[5];
    c->r[14] = 0x26ab9a8u; f_283cb78(c);
    c->r[5] = ~0x0u;
    goto L_26abac8;
L_26ab9b0:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26ab9c0:;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26ab9d0:;
    c->r[2] = 0x2u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26ab9e0:;
    c->r[2] = 0x3u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26ab9f0:;
    c->r[2] = 0x4u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26aba00:;
    c->r[2] = 0x5u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26aba10:;
    c->r[2] = 0x6u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26aba20:;
    c->r[2] = 0x7u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26aba30:;
    c->r[2] = 0x8u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26aba40:;
    c->r[2] = 0x9u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26aba50:;
    c->r[2] = 0xau;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26aba60:;
    c->r[2] = 0xbu;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26aba70:;
    c->r[2] = 0xcu;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26aba80:;
    c->r[2] = 0xdu;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26aba9c; }
    goto L_26abb28;
L_26aba90:;
    c->r[2] = 0xeu;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26abb28; }
L_26aba9c:;
    c->r[0] = 0x49261eu;
    c->r[1] = c->r[13];
    c->r[3] = c->r[13] + 0x84u;
    c->r[0] = 0x26abab0u + c->r[0];
    c->r[14] = 0x26abab0u; f_28504b0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26abac4; }
    c->r[5] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[5]); }
    goto L_26abac8;
L_26abac4:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[5] = v; }
L_26abac8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { c->r[0] = c->r[4]; }
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { c->r[14] = 0x26abad8u; f_26ab448(c); }
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_26abb0c; }
    c->r[4] = c->r[6] + 0xb0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26abaf8u; f_283cfa4(c);
    { uint32_t ea = c->r[6] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[6] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    goto L_26abb18;
L_26abb0c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0xb0u;
L_26abb18:;
    c->r[14] = 0x26abb1cu; f_283cb78(c);
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26abb28:;
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_26abb40; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    goto L_26ab7b0;
L_26abb40:;
    c->r[5] = ~0x0u;
    goto L_26abac8;
}
void f_26abb4c(Cpu *restrict c) {
    FN_ENTER(0x26abb4cu);
L_26abb4c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0xb0u;
    c->r[8] = c->r[2];
    c->r[4] = c->r[0];
    c->r[0] = 0x10u;
    c->r[6] = c->r[1];
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_26abd0c; }
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[5] + 0xb0u;
    c->r[0] = c->r[7];
    c->r[14] = 0x26abb84u; f_283cfa4(c);
    c->r[1] = 0xef0u;
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26abbb0; }
    { uint32_t r = c->r[6] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[0] | 0x80000000u;
    if (COND_NE) { c->r[0] = c->r[0] | 0xc0000000u; }
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[1]); }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[0]); } }
    goto L_26abbc0;
L_26abbb0:;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x26abbc0u; f_283cb78(c);
L_26abbc0:;
    c->r[6] = c->r[13] + 0x8u;
    c->r[2] = c->r[13] + 0x4u;
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0x26abbd4u; f_2850480(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26abc3c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x26abbecu; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26abc24; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4924cdu;
    c->r[2] = 0x26abc14u + c->r[0];
    c->r[0] = c->r[13] + 0x88u;
    c->r[14] = 0x26abc18u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26abc20u; f_28506a8(c);
    goto L_26abc3c;
L_26abc24:;
    c->r[0] = 0x4924b1u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    c->r[2] = 0x26abc38u + c->r[0];
    c->r[0] = c->r[13] + 0x88u;
    c->r[14] = 0x26abc3cu; f_283b33c(c);
L_26abc3c:;
    c->r[0] = c->r[8];
    c->r[14] = 0x26abc44u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26abcbc; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26abc54u; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26abc8c; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x492465u;
    c->r[2] = 0x26abc7cu + c->r[0];
    c->r[0] = c->r[13] + 0x88u;
    c->r[14] = 0x26abc80u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26abc88u; f_28506a8(c);
    goto L_26abcbc;
L_26abc8c:;
    c->r[0] = 0x492449u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    c->r[2] = 0x26abca0u + c->r[0];
    c->r[0] = c->r[13] + 0x88u;
    c->r[14] = 0x26abca4u; f_283b33c(c);
    goto L_26abcbc;
L_26abca8:;
    c->r[0] = c->r[0] - 0x1u;
    c->r[1] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x26abcbcu; f_26ab448(c);
L_26abcbc:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26abca8; }
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_26abcfc; }
    c->r[4] = c->r[5] + 0xb0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26abce8u; f_283cfa4(c);
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    goto L_26abd08;
L_26abcfc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xb0u;
L_26abd08:;
    c->r[14] = 0x26abd0cu; f_283cb78(c);
L_26abd0c:;
    c->r[13] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26abd24(Cpu *restrict c) {
    FN_ENTER(0x26abd24u);
L_26abd24:;
    return;
}
void f_26abd28(Cpu *restrict c) {
    FN_ENTER(0x26abd28u);
L_26abd28:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[5] = c->r[0];
    c->r[8] = c->r[2];
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[5] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26abd74; }
    { uint32_t ea = c->r[5] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26abd7c; }
    { uint32_t ea = c->r[5] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26abd84; }
    { uint32_t ea = c->r[5] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_26abe94; }
    c->r[9] = 0x3u;
    goto L_26abd88;
L_26abd74:;
    c->r[9] = 0x0u;
    goto L_26abd88;
L_26abd7c:;
    c->r[9] = 0x1u;
    goto L_26abd88;
L_26abd84:;
    c->r[9] = 0x2u;
L_26abd88:;
    c->r[0] = 0x58u;
    { uint32_t r = c->r[10] * c->r[0]; c->r[0] = r; }
    c->r[4] = c->r[0] + 0x38u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26abd9cu; f_26ae700(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26abe98; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26abdb0u; f_26a7a44(c);
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = c->r[4];
    c->r[6] = 0x0u;
    c->r[14] = 0x26abdc4u; f_2850138(c);
    c->r[0] = 0x4e4u;
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x34u; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[0] = 0x26abddcu + c->r[0];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd38u;
    c->r[0] = 0x26abde8u + c->r[0];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd38u;
    c->r[0] = 0x26abdf4u + c->r[0];
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd38u;
    c->r[0] = 0x26abe00u + c->r[0];
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd38u;
    c->r[0] = 0x26abe0cu + c->r[0];
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd38u;
    c->r[0] = 0x26abe18u + c->r[0];
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe08u;
    c->r[0] = 0x26abe24u + c->r[0];
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3cu;
    c->r[0] = 0x26abe30u + c->r[0];
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xfd8u;
    c->r[0] = 0x26abe3cu + c->r[0];
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11f4u;
    c->r[0] = 0x26abe48u + c->r[0];
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1290u;
    c->r[0] = 0x26abe54u + c->r[0];
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26abe84; }
    c->r[0] = c->r[7] + 0x48u;
    c->r[1] = ~0x0u;
L_26abe68:;
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[6] = c->r[6] + 0x1u;
    c->r[0] = c->r[0] + 0x58u;
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_CC) { goto L_26abe68; }
L_26abe84:;
    c->r[0] = c->r[5] + (c->r[9] << 2);
    { uint32_t ea = c->r[0] + 0x11cu; ST32(ea, c->r[7]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[7]); }
L_26abe94:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_26abe98:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_26abecc(Cpu *restrict c) {
    FN_ENTER(0x26abeccu);
L_26abecc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x3cu;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_26abf28; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_26abf1c; }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_26abf24; }
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { c->r[1] = 0x3u; }
    goto L_26abf28;
L_26abf1c:;
    c->r[1] = 0x1u;
    goto L_26abf28;
L_26abf24:;
    c->r[1] = 0x2u;
L_26abf28:;
    c->r[1] = c->r[4] + (c->r[1] << 2);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[1] + 0x11cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26ac0c0; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ac0b0; }
    c->r[0] = 0x492189u;
    c->r[10] = c->r[5] + 0x38u;
    c->r[11] = 0x0u;
    c->r[7] = ~0x0u;
    c->r[9] = 0x0u;
    c->r[0] = 0x26abf60u + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x492175u;
    c->r[0] = 0x26abf6cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x492171u;
    c->r[0] = 0x26abf78u + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x49215du;
    c->r[0] = 0x26abf84u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_26abf84:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26abf9c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26abf98u; f_26a9238(c);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[11]); }
L_26abf9c:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_26ac008; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26abfb0u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ac008; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26abfc0u; f_285069c(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26abff4; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x14u;
    c->r[14] = 0x26abfe8u; f_283b33c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x26abff0u; f_28506a8(c);
    goto L_26ac008;
L_26abff4:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x14u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[14] = 0x26ac008u; f_283b33c(c);
L_26ac008:;
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26ac024; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26ac020u; f_26a9238(c);
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[11]); }
L_26ac024:;
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_26ac094; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26ac038u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ac094; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26ac048u; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26ac07c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x14u;
    c->r[14] = 0x26ac070u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26ac078u; f_28506a8(c);
    goto L_26ac090;
L_26ac07c:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x14u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[14] = 0x26ac090u; f_283b33c(c);
L_26ac090:;
    c->r[7] = ~0x0u;
L_26ac094:;
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x24u; ST32(ea, c->r[11]); }
    c->r[9] = c->r[9] + 0x1u;
    c->r[10] = c->r[10] + 0x58u;
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { goto L_26abf84; }
L_26ac0b0:;
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac0b8u; f_26ae704(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26ac0c0u; f_26a7a74(c);
L_26ac0c0:;
    c->r[13] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26ac0d8(Cpu *restrict c) {
    FN_ENTER(0x26ac0d8u);
L_26ac0d8:;
    c->r[0] = 0x0u;
    return;
}
void f_26ac0e0(Cpu *restrict c) {
    FN_ENTER(0x26ac0e0u);
L_26ac0e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x44u;
    c->r[4] = c->r[0];
    c->r[0] = 0x491fe9u;
    c->r[10] = 0x0u;
    c->r[6] = ~0x0u;
    c->r[0] = 0x26ac100u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x491fd5u;
    c->r[0] = 0x26ac10cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x491fd1u;
    c->r[0] = 0x26ac118u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x491fbdu;
    c->r[0] = 0x26ac124u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_26ac128:;
    c->r[1] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[1] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26ac298; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ac280; }
    c->r[9] = c->r[7] + 0x38u;
    c->r[11] = 0x0u;
L_26ac154:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26ac16c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26ac168u; f_26a9238(c);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[10]); }
L_26ac16c:;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26ac1d8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac180u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ac1d8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac190u; f_285069c(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26ac1c4; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1cu;
    c->r[14] = 0x26ac1b8u; f_283b33c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x26ac1c0u; f_28506a8(c);
    goto L_26ac1d8;
L_26ac1c4:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x1cu;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[14] = 0x26ac1d8u; f_283b33c(c);
L_26ac1d8:;
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26ac1f4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26ac1f0u; f_26a9238(c);
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[10]); }
L_26ac1f4:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26ac264; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac208u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ac264; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac218u; f_285069c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26ac24c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1cu;
    c->r[14] = 0x26ac240u; f_283b33c(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x26ac248u; f_28506a8(c);
    goto L_26ac260;
L_26ac24c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x1cu;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[14] = 0x26ac260u; f_283b33c(c);
L_26ac260:;
    c->r[6] = ~0x0u;
L_26ac264:;
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x24u; ST32(ea, c->r[10]); }
    c->r[11] = c->r[11] + 0x1u;
    c->r[9] = c->r[9] + 0x58u;
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[11], c->r[0]);
    if (COND_CC) { goto L_26ac154; }
L_26ac280:;
    c->r[0] = c->r[7];
    c->r[14] = 0x26ac288u; f_26ae704(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26ac290u; f_26a7a74(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_26ac298:;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_26ac128; }
    c->r[13] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26ac2c0(Cpu *restrict c) {
    FN_ENTER(0x26ac2c0u);
L_26ac2c0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = c->r[2];
    c->r[9] = c->r[1];
    c->r[0] = c->r[0] & 0x3fu;
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26ac2f4; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[11] = c->r[11] + 0x1u;
    c->r[3] = c->r[3] & 0xfffffffeu;
    c->r[11] = c->r[11] & 0xfffffffeu;
L_26ac2f4:;
    { uint32_t r = c->r[9] & 0x4u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[3];
    if (COND_EQ) { c->r[10] = c->r[11]; }
    if (COND_EQ) { c->r[11] = c->r[3]; }
    { uint32_t ea = c->r[0] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ac310u; f_28506fc(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_GE) { { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_GE) { (void)f_subs(c, c->r[3], c->r[11]); }
    if (COND_GE) { goto L_26ac334; }
L_26ac32c:;
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26ac334:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26ac3c4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[4] - c->r[6];
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_LE) { { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_LE) { { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; } }
    if (COND_LE) { c->r[2] = c->r[4] - c->r[2]; }
    if (COND_LE) { (void)f_subs(c, c->r[2], c->r[3]); }
    if (COND_GT) { goto L_26ac32c; }
    c->v.s[0] = c->r[2];
    c->v.s[2] = c->r[11];
    c->v.s[8] = c->r[6];
    c->v.s[10] = c->r[10];
    c->v.f[4] = (float)(int32_t)c->v.s[0];
    c->v.f[6] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = (float)(int32_t)c->v.s[8];
    c->v.f[8] = (float)(int32_t)c->v.s[10];
    c->v.s[2] = LD32(c->r[1] + 12u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_26ac32c; }
    c->v.f[6] = c->v.f[6] / c->v.f[4];
    c->v.s[4] = LD32(c->r[1] + 16u);
    vfp_cmp_f(c, c->v.f[6], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_26ac32c; }
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_26ac32c; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_26ac32c; }
L_26ac3c4:;
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26ac32c; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[7] + 0x86u;
    c->r[3] = 0x0u;
    c->r[8] = 0x0u;
    c->r[0] = 0x0u;
L_26ac3e8:;
    { uint32_t ea = c->r[2] - 0x2au; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[8];
    c->r[8] = c->r[2] - 0x4eu;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_EQ) { goto L_26ac414; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_26ac40c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[8]; }
L_26ac40c:;
    c->r[8] = c->r[4];
    goto L_26ac47c;
L_26ac414:;
    { uint32_t ea = c->r[2] - 0x4eu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[11]); }
    if (COND_NE) { goto L_26ac474; }
    { uint32_t ea = c->r[2] - 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[12]);
    if (COND_EQ) { { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[14]); }
    if (COND_NE) { goto L_26ac474; }
    { uint32_t ea = c->r[2] - 0x26u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] - 0x22u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[5] ^ c->r[6];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[12] ^ c->r[6];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[6] | c->r[5]; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_NE) { goto L_26ac474; }
    { uint32_t ea = c->r[2] - 0x16u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_26ac910; }
L_26ac474:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[8] = c->r[4]; }
L_26ac47c:;
    c->r[3] = c->r[3] + 0x1u;
    c->r[2] = c->r[2] + 0x58u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CC) { goto L_26ac3e8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ac518; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26ac518; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26ac4bc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac4b4u; f_26a9238(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
L_26ac4bc:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_26ac548; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26ac4d0u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ac548; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26ac4e0u; f_285069c(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26ac530; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x491bd9u;
    c->r[2] = 0x26ac508u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26ac50cu; f_283b33c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26ac514u; f_28506a8(c);
    goto L_26ac548;
L_26ac518:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = c->r[0];
    if (COND_NE) { goto L_26ac5f8; }
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26ac530:;
    c->r[0] = 0x491ba5u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[2] = 0x26ac544u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26ac548u; f_283b33c(c);
L_26ac548:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26ac56c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac564u; f_26a9238(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_26ac56c:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_26ac5e0; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26ac580u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ac5e0; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26ac590u; f_285069c(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26ac5c8; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x491b29u;
    c->r[2] = 0x26ac5b8u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26ac5bcu; f_283b33c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26ac5c4u; f_28506a8(c);
    goto L_26ac5e0;
L_26ac5c8:;
    c->r[0] = 0x491b0du;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[2] = 0x26ac5dcu + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26ac5e0u; f_283b33c(c);
L_26ac5e0:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[0]); }
L_26ac5f8:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xa0fu;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = 0x5600u;
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa000000u;
    if (COND_EQ) { c->r[4] = 0x1600u; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { c->r[4] = c->r[4] | 0x20000000u; }
    c->r[0] = f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    c->r[0] = f_sbcs(c, 0x1u, c->r[2]);
    if (COND_LT) { goto L_26ac68c; }
    c->r[0] = 0x211fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xd10000u;
    c->r[0] = f_subs(c, c->r[0], c->r[3]);
    c->r[0] = f_sbcs(c, 0x1u, c->r[2]);
    if (COND_LT) { goto L_26ac6e4; }
    c->r[0] = 0x1510u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x530000u;
    c->r[1] = c->r[3] ^ c->r[0];
    c->r[0] = c->r[2] ^ 0x1u;
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_26ac778; }
    c->r[1] = 0x2020u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[1] = c->r[3] ^ c->r[1];
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_26ac780; }
    c->r[1] = 0x2120u;
    c->r[7] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[1] = c->r[3] ^ c->r[1];
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { c->r[7] = 0x0u; }
    goto L_26ac7bc;
L_26ac68c:;
    c->r[0] = 0x1917u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    c->r[0] = f_subs(c, c->r[0], c->r[3]);
    c->r[0] = f_sbcs(c, 0x1u, c->r[2]);
    if (COND_LT) { goto L_26ac72c; }
    c->r[0] = c->r[3] ^ 0xa10u;
    c->r[1] = c->r[0] ^ 0xa000000u;
    c->r[0] = c->r[2] ^ 0x1u;
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_26ac788; }
    c->r[1] = 0x2120u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa530000u;
    c->r[1] = c->r[3] ^ c->r[1];
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_26ac790; }
    c->r[1] = 0x1210u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa880000u;
    c->r[1] = c->r[3] ^ c->r[1];
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ac7b8; }
    c->r[7] = 0x4u;
    goto L_26ac7bc;
L_26ac6e4:;
    c->r[0] = 0x2120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xd10000u;
    c->r[1] = c->r[3] ^ c->r[0];
    c->r[0] = c->r[2] ^ 0x1u;
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_26ac798; }
    c->r[1] = 0x1810u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x6880000u;
    c->r[1] = c->r[3] ^ c->r[1];
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_26ac7a0; }
    c->r[1] = 0x2120u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x6880000u;
    c->r[1] = c->r[3] ^ c->r[1];
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ac7b8; }
    c->r[7] = 0x111u;
    goto L_26ac7bc;
L_26ac72c:;
    c->r[0] = 0x1918u;
    c->r[1] = c->r[2] ^ 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    c->r[0] = c->r[3] ^ c->r[0];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_26ac7a8; }
    c->r[0] = 0x408u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x9200000u;
    c->r[1] = c->r[3] ^ c->r[0];
    c->r[0] = c->r[2] ^ 0xau;
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_26ac7b0; }
    c->r[1] = 0x910u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa880000u;
    c->r[1] = c->r[3] ^ c->r[1];
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ac7b8; }
    c->r[7] = 0x104u;
    goto L_26ac7bc;
L_26ac778:;
    c->r[7] = 0x7u;
    goto L_26ac7bc;
L_26ac780:;
    c->r[7] = 0x110u;
    goto L_26ac7bc;
L_26ac788:;
    c->r[7] = 0x20u;
    goto L_26ac7bc;
L_26ac790:;
    c->r[7] = 0x2u;
    goto L_26ac7bc;
L_26ac798:;
    c->r[7] = 0x5u;
    goto L_26ac7bc;
L_26ac7a0:;
    c->r[7] = 0x6u;
    goto L_26ac7bc;
L_26ac7a8:;
    c->r[7] = 0x3u;
    goto L_26ac7bc;
L_26ac7b0:;
    c->r[7] = 0x100u;
    goto L_26ac7bc;
L_26ac7b8:;
    c->r[7] = 0x0u;
L_26ac7bc:;
    c->r[6] = c->r[13] + 0xcu;
    c->r[1] = 0x0u;
    c->r[2] = 0x18u;
    c->r[0] = c->r[6];
    c->r[14] = 0x26ac7d0u; f_2850138(c);
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[6];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac7fcu; f_26a8508(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ac848; }
    c->r[6] = c->r[13] + 0xcu;
    c->r[1] = 0x0u;
    c->r[2] = 0x18u;
    c->r[0] = c->r[6];
    c->r[14] = 0x26ac818u; f_2850138(c);
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    c->r[2] = c->r[8] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac840u; f_26a8508(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ac8c4; }
L_26ac848:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[5];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26ac868; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26ac860u; f_26a9238(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
L_26ac868:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26ac97c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac87cu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ac97c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac88cu; f_285069c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26ac964; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x49182du;
    c->r[2] = 0x26ac8b4u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26ac8b8u; f_283b33c(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x26ac8c0u; f_28506a8(c);
    goto L_26ac97c;
L_26ac8c4:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4eu; ST8(ea, c->r[0]); }
L_26ac910:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x30u; ST32(ea, c->r[10]); ST32(ea + 4, c->r[11]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aca2c; }
    c->r[5] = c->r[8] + 0x3cu;
    c->r[2] = 0x10u;
    c->r[1] = c->r[5];
    c->r[14] = 0x26ac93cu; f_283afac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[0] = 0x1u;
    goto L_26aca30;
L_26ac964:;
    c->r[0] = 0x491771u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[2] = 0x26ac978u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26ac97cu; f_283b33c(c);
L_26ac97c:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26ac9a0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26ac998u; f_26a9238(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_26ac9a0:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26aca14; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac9b4u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aca14; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ac9c4u; f_285069c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26ac9fc; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4916f5u;
    c->r[2] = 0x26ac9ecu + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26ac9f0u; f_283b33c(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x26ac9f8u; f_28506a8(c);
    goto L_26aca14;
L_26ac9fc:;
    c->r[0] = 0x4916d9u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[2] = 0x26aca10u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26aca14u; f_283b33c(c);
L_26aca14:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26aca2c:;
    c->r[0] = 0x0u;
L_26aca30:;
    { uint32_t ea = c->r[8] + 0x4cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26aca94; }
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x119u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_EQ) { c->r[1] = c->r[1] | 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26aca94; }
    c->r[5] = c->r[13] + 0x24u;
    c->r[1] = 0x0u;
    c->r[2] = 0x20u;
    c->r[0] = c->r[5];
    c->r[14] = 0x26aca7cu; f_2850138(c);
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x20u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x118u;
    c->r[14] = 0x26aca94u; f_28501a4(c);
L_26aca94:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26acaf4; }
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x119u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_EQ) { c->r[1] = c->r[1] | 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26acaf4; }
    c->r[5] = c->r[13] + 0x24u;
    c->r[1] = 0x0u;
    c->r[2] = 0x20u;
    c->r[0] = c->r[5];
    c->r[14] = 0x26acadcu; f_2850138(c);
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x20u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x118u;
    c->r[14] = 0x26acaf4u; f_28501a4(c);
L_26acaf4:;
    c->r[0] = c->r[8];
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26acb20(Cpu *restrict c) {
    FN_ENTER(0x26acb20u);
L_26acb20:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[0]); }
    return;
}
void f_26acb50(Cpu *restrict c) {
    FN_ENTER(0x26acb50u);
L_26acb50:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[2];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26acbec; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = ~0x0u;
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = c->r[0] + (c->r[0] >> 31);
    c->r[1] = c->r[1] & 0xfffffffeu;
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_26acc10; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26acba0u; f_28506cc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { goto L_26acc10; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26acbb4u; f_285069c(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26acbf8; }
    c->r[0] = c->r[8] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x491505u;
    c->r[2] = 0x26acbdcu + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26acbe0u; f_283b33c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x26acbe8u; f_28506a8(c);
    goto L_26acc10;
L_26acbec:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26acbf8:;
    c->r[0] = 0x4914ddu;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    c->r[2] = 0x26acc0cu + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26acc10u; f_283b33c(c);
L_26acc10:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26acc2c(Cpu *restrict c) {
    FN_ENTER(0x26acc2cu);
L_26acc2c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[2] = c->r[0] + 0x5cu;
    c->r[3] = 0x0u;
    c->r[12] = 0x1u;
L_26acc48:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); } }
    c->r[2] = c->r[2] + 0x58u;
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[14] = v; } }
    (void)f_subs(c, c->r[3], c->r[14]);
    if (COND_CC) { goto L_26acc48; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26acc6c(Cpu *restrict c) {
    FN_ENTER(0x26acc6cu);
L_26acc6c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x3cu;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26acdfc; }
    c->r[1] = 0x491449u;
    c->r[9] = c->r[4] + 0x38u;
    c->r[10] = 0x0u;
    c->r[11] = ~0x0u;
    c->r[6] = 0x0u;
    c->r[1] = 0x26acca0u + c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x491435u;
    c->r[1] = 0x26accacu + c->r[1];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x491431u;
    c->r[1] = 0x26accb8u + c->r[1];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x49141du;
    c->r[1] = 0x26accc4u + c->r[1];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
L_26accc4:;
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_26acdec; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26accec; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26acce8u; f_26a9238(c);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[10]); }
L_26accec:;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26acd58; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26acd00u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26acd58; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26acd10u; f_285069c(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26acd44; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x14u;
    c->r[14] = 0x26acd38u; f_283b33c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x26acd40u; f_28506a8(c);
    goto L_26acd58;
L_26acd44:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x14u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[14] = 0x26acd58u; f_283b33c(c);
L_26acd58:;
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26acd74; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26acd70u; f_26a9238(c);
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[10]); }
L_26acd74:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26acde0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26acd88u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26acde0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26acd98u; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26acdcc; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x14u;
    c->r[14] = 0x26acdc0u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26acdc8u; f_28506a8(c);
    goto L_26acde0;
L_26acdcc:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x14u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[14] = 0x26acde0u; f_283b33c(c);
L_26acde0:;
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x24u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
L_26acdec:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[9] = c->r[9] + 0x58u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_26accc4; }
L_26acdfc:;
    c->r[13] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26ace14(Cpu *restrict c) {
    FN_ENTER(0x26ace14u);
L_26ace14:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[5] = c->r[1];
    c->r[9] = c->r[0];
    c->r[8] = c->r[3];
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x110u;
    c->r[14] = 0x26ace38u; f_28506c0(c);
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], c->r[3]); }
    if (COND_NE) { goto L_26ace6c; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26acf0c; }
L_26ace6c:;
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[3] = c->r[3] + 0x1u;
    c->r[7] = c->r[3] + (c->r[3] >> 31);
    c->r[7] = c->r[7] & 0xfffffffeu;
    c->r[3] = c->r[3] - c->r[7];
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_26acf04; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26aceb8u; f_28506cc(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_GE) { goto L_26acf80; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26aceccu; f_285069c(c);
    c->r[11] = c->r[0];
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { goto L_26acf64; }
    c->r[0] = c->r[11] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4911edu;
    c->r[2] = 0x26acef4u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26acef8u; f_283b33c(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x26acf00u; f_28506a8(c);
    goto L_26acf7c;
L_26acf04:;
    c->r[7] = ~0x0u;
    goto L_26acf80;
L_26acf0c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LT) { goto L_26ad018; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26acf1cu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ad018; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26acf2cu; f_285069c(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26ad000; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x49118du;
    c->r[2] = 0x26acf54u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26acf58u; f_283b33c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26acf60u; f_28506a8(c);
    goto L_26ad018;
L_26acf64:;
    c->r[0] = 0x491171u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    c->r[2] = 0x26acf78u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26acf7cu; f_283b33c(c);
L_26acf7c:;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[11] = v; }
L_26acf80:;
    { uint32_t ea = c->r[6] + 0x4cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26acf94; }
    c->r[2] = c->r[6] + 0x3cu;
    goto L_26acfb4;
L_26acf94:;
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_26acfb4:;
    c->r[0] = 0x0u;
    c->r[3] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    c->r[14] = 0x26acff8u; f_26ad23c(c);
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26ad000:;
    c->r[0] = 0x4910d5u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[8];
    c->r[2] = 0x26ad014u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26ad018u; f_283b33c(c);
L_26ad018:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26ad03c(Cpu *restrict c) {
    FN_ENTER(0x26ad03cu);
L_26ad03c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_26ad0c8; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26ad068u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ad0c8; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26ad078u; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26ad0b0; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x491041u;
    c->r[2] = 0x26ad0a0u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26ad0a4u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26ad0acu; f_28506a8(c);
    goto L_26ad0c8;
L_26ad0b0:;
    c->r[0] = 0x491025u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[2] = 0x26ad0c4u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26ad0c8u; f_283b33c(c);
L_26ad0c8:;
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26ad0e4(Cpu *restrict c) {
    FN_ENTER(0x26ad0e4u);
L_26ad0e4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    c->r[4] = c->r[2];
    c->r[8] = c->r[1];
    c->r[11] = c->r[0];
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_26ad120; }
    c->r[0] = 0x490fe2u;
    { uint32_t ea = c->r[11] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x26ad114u + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x26ad118u; f_283b33c(c);
    c->r[7] = c->r[0];
    goto L_26ad124;
L_26ad120:;
    c->r[7] = 0x0u;
L_26ad124:;
    { uint32_t ea = c->r[11] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ad1ec; }
    c->r[0] = 0x490fd3u;
    c->r[10] = c->r[11] + 0x5cu;
    c->r[5] = 0x0u;
    c->r[9] = 0x26ad144u + c->r[0];
    c->r[0] = 0x490fd9u;
    c->r[0] = 0x26ad14cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x490fd3u;
    c->r[0] = 0x26ad158u + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_26ad158:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_26ad178; }
    c->r[0] = c->r[8] + c->r[7];
    c->r[1] = c->r[4] - c->r[7];
    c->r[2] = c->r[9];
    c->r[3] = c->r[5];
    c->r[14] = 0x26ad174u; f_283b33c(c);
    c->r[7] = c->r[0] + c->r[7];
L_26ad178:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_26ad1bc; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_26ad1d8; }
    c->r[6] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + c->r[7];
    c->r[1] = c->r[4] - c->r[7];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x26ad1b8u; f_283b33c(c);
    goto L_26ad1d4;
L_26ad1bc:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_26ad1d8; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + c->r[7];
    c->r[1] = c->r[4] - c->r[7];
    c->r[14] = 0x26ad1d4u; f_283b33c(c);
L_26ad1d4:;
    c->r[7] = c->r[0] + c->r[7];
L_26ad1d8:;
    { uint32_t ea = c->r[11] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[10] = c->r[10] + 0x58u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_26ad158; }
L_26ad1ec:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26ad208(Cpu *restrict c) {
    FN_ENTER(0x26ad208u);
L_26ad208:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = c->r[0] + 0x168u;
    c->r[14] = 0x26ad214u; f_2850708(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26ad220(Cpu *restrict c) {
    FN_ENTER(0x26ad220u);
L_26ad220:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ad230u; f_2850714(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26ad23c(Cpu *restrict c) {
    FN_ENTER(0x26ad23cu);
L_26ad23c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x88u;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { c->r[6] = ~0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[8]; ST32(ea, c->r[6]); } }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26ad284; }
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->v.s[0] = LD32(c->r[2] + 12u);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    goto L_26ad29c;
L_26ad284:;
    c->v.s[4] = 0x0u;
    c->v.s[2] = LD32(c->r[1] + 64u);
    c->v.s[0] = LD32(c->r[1] + 68u);
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.s[6] = c->v.s[4];
L_26ad29c:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26ad2d0; }
    c->v.s[14] = LD32(c->r[6]);
    c->v.s[12] = LD32(c->r[6] + 4u);
    c->v.s[10] = LD32(c->r[6] + 8u);
    c->v.s[8] = LD32(c->r[6] + 12u);
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[12] = (float)(int32_t)c->v.s[12];
    c->v.f[14] = (float)(int32_t)c->v.s[14];
    goto L_26ad2e8;
L_26ad2d0:;
    c->v.s[12] = 0x0u;
    c->v.s[10] = LD32(c->r[14] + 64u);
    c->v.s[8] = LD32(c->r[14] + 68u);
    c->v.f[8] = (float)c->v.s[8];
    c->v.f[10] = (float)c->v.s[10];
    c->v.s[14] = c->v.s[12];
L_26ad2e8:;
    c->r[4] = 0x0u;
    c->r[6] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[5] - 0x1u;
    (void)f_subs(c, c->r[6], 0x6u);
    if (COND_HI) { goto L_26ad324; }
    c->r[7] = 0x4ff5d0u;
    c->r[4] = 0x10u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    c->r[7] = 0x26ad320u + c->r[7];
    { uint32_t ea = c->r[7] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[7]); }
L_26ad324:;
    c->v.f[1] = c->v.f[8] - c->v.f[12];
    c->v.f[3] = c->v.f[10] - c->v.f[14];
    c->v.f[5] = c->v.f[0] - c->v.f[4];
    { uint32_t r = c->r[5] & 0x4u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[1] = vcvt_s32_f64((double)c->v.f[1]);
    c->v.s[3] = vcvt_s32_f64((double)c->v.f[3]);
    c->v.s[5] = vcvt_s32_f64((double)c->v.f[5]);
    c->r[7] = c->v.s[1];
    c->v.f[1] = c->v.f[2] - c->v.f[6];
    c->r[6] = c->v.s[3];
    c->r[2] = c->v.s[5];
    c->v.s[1] = vcvt_s32_f64((double)c->v.f[1]);
    c->r[5] = c->r[6];
    if (COND_EQ) { c->r[5] = c->r[7]; }
    if (COND_EQ) { c->r[7] = c->r[6]; }
    c->r[2] = c->r[2] - c->r[5];
    c->r[5] = c->v.s[1];
    c->r[5] = c->r[5] - c->r[7];
    { uint32_t r = c->r[5] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26ad3a0; }
    c->v.s[1] = 0xbf000000u;
    c->v.s[3] = 0x3f000000u;
    c->r[4] = c->r[4] | 0x20u;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    c->v.f[0] = c->v.f[0] + c->v.f[1];
    c->v.f[2] = c->v.f[2] + c->v.f[1];
    c->v.f[4] = c->v.f[4] + c->v.f[3];
    c->v.f[6] = c->v.f[6] + c->v.f[3];
L_26ad3a0:;
    c->r[2] = c->r[4];
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[12]); }
    ST32(c->r[13] + 40u, c->v.s[6]);
    ST32(c->r[13] + 44u, c->v.s[4]);
    ST32(c->r[13] + 48u, c->v.s[2]);
    ST32(c->r[13] + 52u, c->v.s[0]);
    c->r[2] = c->r[2] & 0xfffffffeu;
    if (COND_NE) { c->r[2] = c->r[4] | 0x1u; }
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[1] = c->r[2];
    c->r[1] = c->r[1] & 0xfffffff1u;
    if (COND_NE) { c->r[1] = c->r[2] | 0x2u; }
    c->r[2] = c->r[13] + 0x8u;
    c->r[1] = c->r[1] | 0xcu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 56u, c->v.s[14]);
    ST32(c->r[13] + 60u, c->v.s[12]);
    ST32(c->r[13] + 64u, c->v.s[10]);
    ST32(c->r[13] + 68u, c->v.s[8]);
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ad408u; f_2850720(c);
    c->r[1] = c->r[0];
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_26ad434; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26ad43c; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[4]); }
L_26ad430:;
    c->r[0] = 0x0u;
L_26ad434:;
    c->r[13] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26ad43c:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_26ad430; }
    c->r[0] = c->r[4];
    c->r[1] = ~0x0u;
    c->r[14] = 0x26ad450u; f_28506f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ad4b0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26ad460u; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26ad498; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x490c59u;
    c->r[2] = 0x26ad488u + c->r[0];
    c->r[0] = c->r[13] + 0x60u;
    c->r[14] = 0x26ad48cu; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26ad494u; f_28506a8(c);
    goto L_26ad4b0;
L_26ad498:;
    c->r[0] = 0x490c3du;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    c->r[2] = 0x26ad4acu + c->r[0];
    c->r[0] = c->r[13] + 0x60u;
    c->r[14] = 0x26ad4b0u; f_283b33c(c);
L_26ad4b0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x26ad4b8u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ad430; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26ad4c8u; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26ad500; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x490bf1u;
    c->r[2] = 0x26ad4f0u + c->r[0];
    c->r[0] = c->r[13] + 0x60u;
    c->r[14] = 0x26ad4f4u; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26ad4fcu; f_28506a8(c);
    goto L_26ad430;
L_26ad500:;
    c->r[0] = 0x490bd5u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    c->r[2] = 0x26ad514u + c->r[0];
    c->r[0] = c->r[13] + 0x60u;
    c->r[14] = 0x26ad518u; f_283b33c(c);
    goto L_26ad430;
}
void f_26ad534(Cpu *restrict c) {
    FN_ENTER(0x26ad534u);
L_26ad534:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x88u;
    c->r[6] = c->r[3];
    c->r[4] = c->r[0];
    c->r[5] = ~0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    if (COND_NE) { c->r[0] = 0x2u; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x80000000u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x10u;
    c->r[14] = 0x26ad588u; f_2850720(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ad5b4; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26ad5c0; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
L_26ad5a8:;
    c->r[0] = c->r[4] + 0x158u;
    c->r[14] = 0x26ad5b0u; f_2850684(c);
    c->r[5] = 0x0u;
L_26ad5b4:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26ad5c0:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26ad5a8; }
    c->r[0] = c->r[5];
    c->r[1] = ~0x0u;
    c->r[14] = 0x26ad5d4u; f_28506f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ad634; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ad5e4u; f_285069c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26ad61c; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x490ad5u;
    c->r[2] = 0x26ad60cu + c->r[0];
    c->r[0] = c->r[13] + 0x60u;
    c->r[14] = 0x26ad610u; f_283b33c(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x26ad618u; f_28506a8(c);
    goto L_26ad634;
L_26ad61c:;
    c->r[0] = 0x490ab9u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[2] = 0x26ad630u + c->r[0];
    c->r[0] = c->r[13] + 0x60u;
    c->r[14] = 0x26ad634u; f_283b33c(c);
L_26ad634:;
    c->r[0] = c->r[5];
    c->r[14] = 0x26ad63cu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ad5a8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ad64cu; f_285069c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26ad684; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x490a6du;
    c->r[2] = 0x26ad674u + c->r[0];
    c->r[0] = c->r[13] + 0x60u;
    c->r[14] = 0x26ad678u; f_283b33c(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x26ad680u; f_28506a8(c);
    goto L_26ad5a8;
L_26ad684:;
    c->r[0] = 0x490a51u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[2] = 0x26ad698u + c->r[0];
    c->r[0] = c->r[13] + 0x60u;
    c->r[14] = 0x26ad69cu; f_283b33c(c);
    goto L_26ad5a8;
}
void f_26ad6b0(Cpu *restrict c) {
    FN_ENTER(0x26ad6b0u);
L_26ad6b0:;
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[9] = 0xcaffu;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x48u;
    (void)f_subs(c, c->r[1], 0x2u);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xdaff0000u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26ad778; }
    c->r[0] = 0xd00du;
    c->r[6] = ~0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xb00b0000u;
    if (COND_EQ) { goto L_26ad878; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = ~0x15u;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26ade5c; }
    { uint32_t ea = c->r[1] + 0x148u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_26ade5c; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], 0x0u); }
    if (COND_EQ) { goto L_26ade5c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ade5c; }
L_26ad75c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_26adc0c; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ad75c; }
    goto L_26ade5c;
L_26ad778:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = ~0x15u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[8], 0x0u); }
    if (COND_EQ) { goto L_26ade5c; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_26ade5c; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[12] = 0x0u;
    c->r[0] = c->r[3] & 0x3fu;
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[1], 0xeu);
    if (COND_HI) { goto L_26ad7c8; }
    c->r[3] = 0x4ff148u;
    c->r[3] = 0x26ad7c8u + c->r[3];
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
L_26ad7c8:;
    c->r[1] = c->r[2];
    c->r[3] = c->r[0] - 0xau;
    c->r[0] = 0x1u;
    c->r[1] = c->r[1] & 0xfffffffu;
    (void)f_subs(c, c->r[3], 0x6u);
    c->r[3] = 0x1u;
    if (COND_CC) { c->r[3] = 0xau; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_26ad988; }
    c->r[7] = 0x180fu;
    c->r[0] = (c->r[3] << 28);
    c->r[6] = 0x1u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x6880000u;
    c->r[7] = f_subs(c, c->r[7], c->r[1]);
    c->r[7] = f_sbcs(c, c->r[6], (uint32_t)((int32_t)c->r[0] >> 28));
    if (COND_LT) { goto L_26ada84; }
    c->r[7] = 0x201fu;
    c->r[14] = 0x1u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x530000u;
    c->r[7] = f_subs(c, c->r[7], c->r[1]);
    c->r[0] = f_sbcs(c, c->r[14], (uint32_t)((int32_t)c->r[0] >> 28));
    if (COND_LT) { goto L_26adaec; }
    c->r[0] = 0x408u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x9200000u;
    c->r[7] = c->r[1] ^ c->r[0];
    c->r[0] = c->r[3] & 0xfu;
    c->r[3] = c->r[0] ^ 0xau;
    { uint32_t r = c->r[7] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { goto L_26adcdc; }
    c->r[7] = 0x910u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xa880000u;
    c->r[7] = c->r[1] ^ c->r[7];
    { uint32_t r = c->r[7] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_26adce4; }
    c->r[3] = 0x1510u;
    c->r[0] = c->r[0] ^ 0x1u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x530000u;
    c->r[1] = c->r[1] ^ c->r[3];
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26add14; }
    c->r[6] = 0x7u;
    goto L_26add18;
L_26ad878:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26ad940; }
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26ad980; }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_26ad978; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[9]);
    if (COND_NE) { goto L_26ad978; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26adae4; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_26adae4; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[2] + 0x38u;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26ad948; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ad8f8; }
L_26ad8e0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_EQ) { goto L_26ade5c; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ad8e0; }
L_26ad8f8:;
    c->r[0] = 0xcu;
    c->r[14] = 0x26ad900u; f_26ae700(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26adeec; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0xcu;
    c->r[6] = 0x0u;
    c->r[14] = 0x26ad920u; f_2850138(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[4]); }
    goto L_26ade5c;
L_26ad940:;
    c->r[6] = ~0x15u;
    goto L_26ade5c;
L_26ad948:;
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ade70; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_NE) { goto L_26ad948; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[14] = 0x26ad974u; f_26ae704(c);
    goto L_26ade58;
L_26ad978:;
    c->r[6] = ~0x15u;
    goto L_26ade5c;
L_26ad980:;
    c->r[6] = ~0x15u;
    goto L_26ade5c;
L_26ad988:;
    c->r[2] = c->r[13] + 0x8u;
    c->r[1] = c->r[10] + 0x60u;
    c->r[7] = c->r[2] + 0x8u;
L_26ad994:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = c->r[1] + 0x58u; c->r[2] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    c->r[2] = c->r[2] & 0xfffffffu;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    c->r[7] = c->r[7] + 0x8u;
    if (COND_NE) { goto L_26ad994; }
    c->r[0] = c->r[5] | 0x1u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[11] = LD32(ea + 4u); }
    { uint32_t ea = c->r[10] + 0x58u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[3] = c->r[11] + 0x1u;
    c->r[7] = c->r[2] + 0x1u;
    c->r[14] = (c->r[3] >> 1);
    c->r[3] = 0x408u;
    (void)f_subs(c, c->r[0], (c->r[7] >> 1));
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x9200000u;
    if (COND_EQ) { (void)f_subs(c, c->r[14], c->r[1]); }
    if (COND_EQ) { goto L_26adb38; }
    (void)f_subs(c, c->r[11], c->r[1]);
    if (COND_EQ) { c->r[7] = (c->r[7] >> 1); }
    if (COND_EQ) { (void)f_subs(c, c->r[7], c->r[0]); }
    if (COND_EQ) { goto L_26adc18; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { (void)f_subs(c, c->r[14], c->r[1]); }
    if (COND_EQ) { goto L_26ade78; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { (void)f_subs(c, c->r[11], c->r[1]); }
    if (COND_NE) { goto L_26ade5c; }
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_EQ) { goto L_26adfcc; }
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1010u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    c->r[1] = c->r[1] ^ 0xau;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26ae054; }
    c->r[2] = c->r[0] ^ 0xf10u;
    c->r[2] = c->r[2] ^ 0x9200000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26ae088; }
    c->r[0] = c->r[0] ^ c->r[3];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[2] = 0x710u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[6] = c->r[12] | 0x108u;
    goto L_26ae038;
L_26ada84:;
    c->r[6] = 0x211fu;
    c->r[7] = 0x1u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xa530000u;
    c->r[6] = f_subs(c, c->r[6], c->r[1]);
    c->r[0] = f_sbcs(c, c->r[7], (uint32_t)((int32_t)c->r[0] >> 28));
    if (COND_LT) { goto L_26adbc0; }
    c->r[0] = 0x1810u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x6880000u;
    c->r[7] = c->r[1] ^ c->r[0];
    c->r[0] = c->r[3] & 0xfu;
    c->r[0] = c->r[0] ^ 0x1u;
    { uint32_t r = c->r[7] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_26adcec; }
    c->r[3] = 0x2120u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x6880000u;
    c->r[3] = c->r[1] ^ c->r[3];
    { uint32_t r = c->r[3] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_26adcf4; }
    c->r[1] = c->r[1] ^ 0xa10u;
    c->r[1] = c->r[1] ^ 0xa000000u;
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26add14; }
    c->r[6] = 0x20u;
    goto L_26add18;
L_26adae4:;
    c->r[6] = ~0x15u;
    goto L_26ade5c;
L_26adaec:;
    c->r[0] = 0x2020u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x530000u;
    c->r[7] = c->r[1] ^ c->r[0];
    c->r[0] = c->r[3] & 0xfu;
    c->r[0] = c->r[0] ^ 0x1u;
    { uint32_t r = c->r[7] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_26adcfc; }
    c->r[3] = 0x2120u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x530000u;
    c->r[3] = c->r[1] ^ c->r[3];
    { uint32_t r = c->r[3] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_26add18; }
    c->r[3] = 0x2120u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xd10000u;
    c->r[1] = c->r[1] ^ c->r[3];
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26add14; }
    c->r[6] = 0x5u;
    goto L_26add18;
L_26adb38:;
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_EQ) { goto L_26adc70; }
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1010u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    c->r[1] = c->r[1] ^ 0xau;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26adf60; }
    c->r[2] = c->r[0] ^ 0xf10u;
    c->r[2] = c->r[2] ^ 0x9200000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26adf94; }
    c->r[0] = c->r[0] ^ c->r[3];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x710u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    c->r[1] = c->r[1] ^ 0xau;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26ae048; }
    c->r[2] = 0x710u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[0] = 0x106u;
    goto L_26ae034;
L_26adbc0:;
    c->r[0] = 0x1918u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    c->r[7] = c->r[1] ^ c->r[0];
    c->r[0] = c->r[3] & 0xfu;
    c->r[0] = c->r[0] ^ 0x1u;
    { uint32_t r = c->r[7] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_26add04; }
    c->r[3] = 0x1210u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xa880000u;
    c->r[3] = c->r[1] ^ c->r[3];
    { uint32_t r = c->r[3] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_26add0c; }
    c->r[3] = 0x2120u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xa530000u;
    c->r[1] = c->r[1] ^ c->r[3];
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26add14; }
    c->r[6] = 0x2u;
    goto L_26add18;
L_26adc0c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_26ade58;
L_26adc18:;
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_EQ) { goto L_26adef4; }
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[0] = c->r[0] ^ c->r[3];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[2] = 0x710u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[0] = 0x107u;
    goto L_26ae034;
L_26adc70:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[0] = c->r[0] ^ c->r[3];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[0] = f_subs(c, c->r[3], 0x1c0000u);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xau;
    c->r[1] = c->r[1] - 0x0u - 1u + c->cf;
    c->r[1] = c->r[3] ^ c->r[1];
    c->r[0] = c->r[2] ^ c->r[0];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[6] = c->r[12] | 0x100u;
    goto L_26ae038;
L_26adcdc:;
    c->r[6] = 0x100u;
    goto L_26add18;
L_26adce4:;
    c->r[6] = 0x104u;
    goto L_26add18;
L_26adcec:;
    c->r[6] = 0x6u;
    goto L_26add18;
L_26adcf4:;
    c->r[6] = 0x111u;
    goto L_26add18;
L_26adcfc:;
    c->r[6] = 0x110u;
    goto L_26add18;
L_26add04:;
    c->r[6] = 0x3u;
    goto L_26add18;
L_26add0c:;
    c->r[6] = 0x4u;
    goto L_26add18;
L_26add14:;
    c->r[6] = 0x0u;
L_26add18:;
    c->r[0] = 0x117u;
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[11] = 0x0u;
    c->r[0] = c->r[6] & c->r[0];
    if (COND_NE) { c->r[6] = c->r[0] | c->r[12]; }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[2] >> 3) & 0x1fu;
    c->r[0] = udiv32(c->r[0], c->r[1]);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_26add3c:;
    c->r[14] = 0x26add40u; f_26a7bc8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26addac; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[9]); }
    c->r[1] = 0xb00u;
    (void)f_subs(c, c->r[6], 0x104u);
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x118u;
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[6]); }
    if (COND_LE) { goto L_26addb4; }
    c->r[1] = 0x105u;
    c->r[1] = c->r[6] - c->r[1];
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_26addcc; }
    c->r[1] = 0x107u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_26addd4; }
    c->r[1] = 0x5659u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x32310000u;
    (void)f_subs(c, c->r[6], c->r[1]);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { goto L_26adde4; }
    c->r[0] = c->r[6];
    goto L_26adde4;
L_26addac:;
    c->r[6] = ~0xbu;
    goto L_26ade5c;
L_26addb4:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x11u);
    if (COND_EQ) { goto L_26adde0; }
    (void)f_subs(c, c->r[6], 0x100u);
    if (COND_NE) { c->r[0] = c->r[6]; }
    goto L_26adde4;
L_26addcc:;
    c->r[0] = 0x119u;
    goto L_26addd8;
L_26addd4:;
    c->r[0] = 0x11bu;
L_26addd8:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_26adde4;
L_26adde0:;
    c->r[0] = 0x11au;
L_26adde4:;
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[10] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x58u;
    { uint32_t ea = c->r[7] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[5] * c->r[0]; c->r[2] = r; }
    c->r[0] = c->r[7] + 0x40u;
    c->r[14] = 0x26ade0cu; f_28501a4(c);
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ade1cu; f_2850624(c);
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[7] + 0x148u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x26ade34u; f_26a9998(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26ade54; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26ade48u; f_2850630(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26ade50u; f_285063c(c);
    goto L_26ade5c;
L_26ade54:;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[7]); }
L_26ade58:;
    c->r[6] = 0x0u;
L_26ade5c:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    c->r[13] = c->r[13] + 0x8u;
    return;
L_26ade70:;
    c->r[6] = ~0x15u;
    goto L_26ade5c;
L_26ade78:;
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    c->r[0] = c->r[0] ^ c->r[3];
    c->r[1] = c->r[1] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[0] = f_subs(c, c->r[3], 0x1c0000u);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xau;
    c->r[1] = c->r[1] - 0x0u - 1u + c->cf;
    c->r[1] = c->r[3] ^ c->r[1];
    c->r[0] = c->r[2] ^ c->r[0];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[0] = 0x102u;
    goto L_26ae034;
L_26adeec:;
    c->r[6] = ~0xbu;
    goto L_26ade5c;
L_26adef4:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[0] = c->r[0] ^ c->r[3];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[0] = f_subs(c, c->r[3], 0x1c0000u);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xau;
    c->r[1] = c->r[1] - 0x0u - 1u + c->cf;
    c->r[1] = c->r[3] ^ c->r[1];
    c->r[0] = c->r[2] ^ c->r[0];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[0] = 0x101u;
    goto L_26ae034;
L_26adf60:;
    c->r[0] = 0x2220u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xau;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x8140000u;
    c->r[0] = f_adds(c, c->r[0], 0x200u);
    c->r[1] = c->r[1] + 0x0u + c->cf;
    c->r[0] = c->r[2] ^ c->r[0];
    c->r[1] = c->r[3] ^ c->r[1];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[6] = c->r[12] | 0x10cu;
    goto L_26adfc0;
L_26adf94:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[2] = 0x2220u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8140000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[0] = 0x10bu;
L_26adfbc:;
    c->r[6] = c->r[12] | c->r[0];
L_26adfc0:;
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 1);
    goto L_26ae03c;
L_26adfcc:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[0] = c->r[0] ^ c->r[3];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[0] = f_subs(c, c->r[3], 0x1c0000u);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xau;
    c->r[1] = c->r[1] - 0x0u - 1u + c->cf;
    c->r[1] = c->r[3] ^ c->r[1];
    c->r[0] = c->r[2] ^ c->r[0];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[0] = 0x103u;
L_26ae034:;
    c->r[6] = c->r[12] | c->r[0];
L_26ae038:;
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_26ae03c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[11] = 0x2u;
    goto L_26add3c;
L_26ae048:;
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x11u;
    goto L_26ae03c;
L_26ae054:;
    c->r[0] = 0x2220u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xau;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x8140000u;
    c->r[0] = f_adds(c, c->r[0], 0x200u);
    c->r[1] = c->r[1] + 0x0u + c->cf;
    c->r[0] = c->r[2] ^ c->r[0];
    c->r[1] = c->r[3] ^ c->r[1];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[0] = 0x10eu;
    goto L_26adfbc;
L_26ae088:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[2] = 0x2220u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8140000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26ade5c; }
    c->r[0] = 0x10du;
    goto L_26adfbc;
}
void f_26ae0b8(Cpu *restrict c) {
    FN_ENTER(0x26ae0b8u);
L_26ae0b8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x60u;
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x490080u;
    c->r[0] = 0x26ae0d8u + c->r[0];
    c->r[14] = 0x26ae0d8u; f_285072c(c);
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_26ae104; }
    c->r[0] = 0x48aa8eu;
    c->r[1] = 0x5cu;
    c->r[2] = 0x26ae0f4u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae0f8u; f_283b33c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GE) { goto L_26ae120; }
    goto L_26ae180;
L_26ae104:;
    c->r[0] = 0x490040u;
    c->r[1] = c->r[13] + 0x4u;
    c->r[2] = 0x0u;
    c->r[0] = 0x26ae118u + c->r[0];
    c->r[14] = 0x26ae118u; f_2850738(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_26ae180; }
L_26ae120:;
    c->r[0] = 0x490096u;
    c->r[1] = 0x26ae12cu + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae130u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae170; }
    c->r[0] = 0x490086u;
    c->r[1] = 0x26ae144u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae148u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae178; }
    c->r[0] = 0x490074u;
    c->r[1] = 0x26ae15cu + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae160u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ae180; }
    c->r[0] = 0x2u;
    goto L_26ae17c;
L_26ae170:;
    c->r[0] = 0x0u;
    goto L_26ae17c;
L_26ae178:;
    c->r[0] = 0x1u;
L_26ae17c:;
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
L_26ae180:;
    c->r[13] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26ae1a0(Cpu *restrict c) {
    FN_ENTER(0x26ae1a0u);
L_26ae1a0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x60u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48ffafu;
    c->r[0] = 0x26ae1c0u + c->r[0];
    c->r[14] = 0x26ae1c0u; f_285072c(c);
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_26ae1ec; }
    c->r[0] = 0x48a9a6u;
    c->r[1] = 0x5cu;
    c->r[2] = 0x26ae1dcu + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae1e0u; f_283b33c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GE) { goto L_26ae208; }
    goto L_26ae27c;
L_26ae1ec:;
    c->r[0] = 0x48ff6fu;
    c->r[1] = c->r[13] + 0x4u;
    c->r[2] = 0x0u;
    c->r[0] = 0x26ae200u + c->r[0];
    c->r[14] = 0x26ae200u; f_2850738(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_26ae27c; }
L_26ae208:;
    c->r[0] = 0x48f322u;
    c->r[1] = 0x26ae214u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae218u; f_283b648(c);
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae278; }
    c->r[0] = 0x48d760u;
    c->r[1] = 0x26ae230u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae234u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae278; }
    c->r[0] = 0x48f2fau;
    c->r[1] = 0x26ae248u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae24cu; f_283b648(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae278; }
    c->r[0] = 0x48d72eu;
    c->r[1] = 0x26ae264u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae268u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[5]); } }
    c->r[13] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26ae278:;
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[5]); }
L_26ae27c:;
    c->r[13] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26ae2a0(Cpu *restrict c) {
    FN_ENTER(0x26ae2a0u);
L_26ae2a0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x60u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x150u; ST8(ea, c->r[0]); }
    c->r[0] = 0x48fec9u;
    c->r[0] = 0x26ae2c0u + c->r[0];
    c->r[14] = 0x26ae2c0u; f_285072c(c);
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_26ae2ec; }
    c->r[0] = 0x48a8a6u;
    c->r[1] = 0x5cu;
    c->r[2] = 0x26ae2dcu + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae2e0u; f_283b33c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GE) { goto L_26ae308; }
    goto L_26ae37c;
L_26ae2ec:;
    c->r[0] = 0x48fe89u;
    c->r[1] = c->r[13] + 0x4u;
    c->r[2] = 0x0u;
    c->r[0] = 0x26ae300u + c->r[0];
    c->r[14] = 0x26ae300u; f_2850738(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_26ae37c; }
L_26ae308:;
    c->r[0] = 0x48f222u;
    c->r[1] = 0x26ae314u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae318u; f_283b648(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae378; }
    c->r[0] = 0x48d660u;
    c->r[1] = 0x26ae330u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae334u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae378; }
    c->r[0] = 0x48f1fau;
    c->r[1] = 0x26ae348u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae34cu; f_283b648(c);
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae378; }
    c->r[0] = 0x48d62eu;
    c->r[1] = 0x26ae364u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae368u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x150u; ST8(ea, c->r[5]); } }
    c->r[13] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26ae378:;
    { uint32_t ea = c->r[4] + 0x150u; ST8(ea, c->r[5]); }
L_26ae37c:;
    c->r[13] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26ae3a0(Cpu *restrict c) {
    FN_ENTER(0x26ae3a0u);
L_26ae3a0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x60u;
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x153u; ST8(ea, c->r[0]); }
    c->r[0] = 0x48fde9u;
    c->r[0] = 0x26ae3c0u + c->r[0];
    c->r[14] = 0x26ae3c0u; f_285072c(c);
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_26ae3ec; }
    c->r[0] = 0x48a7a6u;
    c->r[1] = 0x5cu;
    c->r[2] = 0x26ae3dcu + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae3e0u; f_283b33c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GE) { goto L_26ae408; }
    goto L_26ae47c;
L_26ae3ec:;
    c->r[0] = 0x48fda9u;
    c->r[1] = c->r[13] + 0x4u;
    c->r[2] = 0x0u;
    c->r[0] = 0x26ae400u + c->r[0];
    c->r[14] = 0x26ae400u; f_2850738(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_26ae47c; }
L_26ae408:;
    c->r[0] = 0x48f122u;
    c->r[1] = 0x26ae414u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae418u; f_283b648(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae478; }
    c->r[0] = 0x48d560u;
    c->r[1] = 0x26ae430u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae434u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae478; }
    c->r[0] = 0x48f0fau;
    c->r[1] = 0x26ae448u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae44cu; f_283b648(c);
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae478; }
    c->r[0] = 0x48d52eu;
    c->r[1] = 0x26ae464u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x26ae468u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x153u; ST8(ea, c->r[5]); } }
    c->r[13] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26ae478:;
    { uint32_t ea = c->r[4] + 0x153u; ST8(ea, c->r[5]); }
L_26ae47c:;
    c->r[13] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26ae4a0(Cpu *restrict c) {
    FN_ENTER(0x26ae4a0u);
L_26ae4a0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x48fcb3u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[0] = 0x26ae4bcu + c->r[0];
    c->r[14] = 0x26ae4bcu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae500; }
    c->r[0] = 0x48fcb5u;
    c->r[1] = c->r[6];
    c->r[0] = 0x26ae4d4u + c->r[0];
    c->r[14] = 0x26ae4d4u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae588; }
    c->r[0] = 0x48fcbdu;
    c->r[1] = c->r[6];
    c->r[0] = 0x26ae4ecu + c->r[0];
    c->r[14] = 0x26ae4ecu; f_283b648(c);
    c->r[6] = ~0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae60c; }
L_26ae4f8:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26ae500:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26ae694; }
    c->r[0] = 0x48f022u;
    c->r[1] = 0x26ae514u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ae518u; f_283b648(c);
    c->r[8] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = 0x1u;
    if (COND_EQ) { goto L_26ae57c; }
    c->r[0] = 0x48d45cu;
    c->r[1] = 0x26ae534u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ae538u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = 0x1u;
    if (COND_EQ) { goto L_26ae57c; }
    c->r[0] = 0x48eff2u;
    c->r[1] = 0x26ae550u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ae554u; f_283b648(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae57c; }
    c->r[0] = 0x48d426u;
    c->r[1] = 0x26ae56cu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ae570u; f_283b648(c);
    c->r[6] = ~0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ae4f8; }
L_26ae57c:;
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x140u; ST8(ea, c->r[8]); }
    goto L_26ae688;
L_26ae588:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26ae6a4; }
    c->r[0] = 0x48ef9au;
    c->r[1] = 0x26ae59cu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ae5a0u; f_283b648(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae5fc; }
    c->r[0] = 0x48d3d8u;
    c->r[1] = 0x26ae5b8u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ae5bcu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae5fc; }
    c->r[0] = 0x48ef72u;
    c->r[1] = 0x26ae5d0u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ae5d4u; f_283b648(c);
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae5fc; }
    c->r[0] = 0x48d3a6u;
    c->r[1] = 0x26ae5ecu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ae5f0u; f_283b648(c);
    c->r[6] = ~0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ae4f8; }
L_26ae5fc:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x151u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x152u; ST8(ea, c->r[0]); }
    goto L_26ae688;
L_26ae60c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26ae6b4; }
    c->r[0] = 0x48ef16u;
    c->r[1] = 0x26ae620u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ae624u; f_283b648(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae67c; }
    c->r[0] = 0x48d354u;
    c->r[1] = 0x26ae63cu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ae640u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae67c; }
    c->r[0] = 0x48eeeeu;
    c->r[1] = 0x26ae654u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ae658u; f_283b648(c);
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae67c; }
    c->r[0] = 0x48d322u;
    c->r[1] = 0x26ae670u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x26ae674u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ae4f8; }
L_26ae67c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x154u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x155u; ST8(ea, c->r[0]); }
L_26ae688:;
    c->r[6] = 0x0u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26ae694:;
    c->r[6] = 0x0u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0x140u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26ae6a4:;
    c->r[6] = 0x0u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0x152u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26ae6b4:;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x155u; ST8(ea, c->r[6]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26ae700(Cpu *restrict c) {
    FN_ENTER(0x26ae700u);
L_26ae700:;
    __attribute__((musttail)) return f_2850060(c);
}
void f_26ae704(Cpu *restrict c) {
    FN_ENTER(0x26ae704u);
L_26ae704:;
    __attribute__((musttail)) return f_28500b4(c);
}
void f_26ae708(Cpu *restrict c) {
    FN_ENTER(0x26ae708u);
L_26ae708:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[1] = 0x488f48u;
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[5] = c->r[13];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x26ae738u + c->r[1];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x26ae750u; f_26af754(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x26ae75cu; f_26af320(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae770; }
    c->r[0] = c->r[13];
    c->r[1] = 0x0u;
    c->r[14] = 0x26ae770u; f_26af834(c);
L_26ae770:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae78c; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ae78cu; f_28500e4(c);
L_26ae78c:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26ae79c(Cpu *restrict c) {
    FN_ENTER(0x26ae79cu);
L_26ae79c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[0] = 0x488eb4u;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    c->r[0] = 0x26ae7ccu + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_26ae7e8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ae7e4u; f_28500d8(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
L_26ae7e8:;
    c->r[0] = c->r[13];
    c->r[1] = 0x0u;
    c->r[14] = 0x26ae7f4u; f_26af754(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae838; }
    c->r[4] = c->r[13];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26ae818u; f_26af838(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x26ae820u; f_26af4cc(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae838; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ae838u; f_28500e4(c);
L_26ae838:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26ae844(Cpu *restrict c) {
    FN_ENTER(0x26ae844u);
L_26ae844:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x98u;
    c->r[13] = c->r[13] - 0x800u;
    c->r[6] = c->r[0];
    c->r[0] = 0x488e00u;
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x870u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x874u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x878u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x87cu; ST32(ea, c->r[7]); }
    c->r[0] = 0x26ae880u + c->r[0];
    { uint32_t ea = c->r[13] + 0x880u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x884u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x888u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x88cu; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_26ae89c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ae898u; f_28500d8(c);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[7]); }
L_26ae89c:;
    c->r[0] = c->r[13] + 0x870u;
    c->r[1] = c->r[5];
    c->r[14] = 0x26ae8a8u; f_26af754(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26ae8c4; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x488dbcu;
    c->r[0] = 0x26ae8c4u + c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_26ae8c4:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x870u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae934; }
    c->r[0] = c->r[13] + 0x870u;
    c->r[3] = c->r[13];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x26ae8f4u; f_26afdd0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ae974; }
    c->r[0] = c->r[13] + 0x870u;
    c->r[1] = c->r[13];
    c->r[2] = c->r[4];
    c->r[14] = 0x26ae90cu; f_26aee3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ae974; }
    { uint32_t ea = c->r[13] + 0x870u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae9a0; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ae930u; f_28500e4(c);
    goto L_26ae9a0;
L_26ae934:;
    { uint32_t ea = c->r[13] + 0x874u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26ae974; }
    c->r[0] = 0x15u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[13] + 0x874u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x878u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48f87cu;
    c->r[0] = 0x26ae960u + c->r[0];
    { uint32_t ea = c->r[13] + 0x880u; ST32(ea, c->r[0]); }
    c->r[0] = 0x488d14u;
    c->r[0] = 0x26ae96cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x884u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8fu;
    { uint32_t ea = c->r[13] + 0x888u; ST32(ea, c->r[0]); }
L_26ae974:;
    c->r[0] = c->r[13] + 0x870u;
    c->r[1] = c->r[4];
    c->r[14] = 0x26ae980u; f_26af834(c);
    { uint32_t ea = c->r[13] + 0x870u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ae99c; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ae99cu; f_28500e4(c);
L_26ae99c:;
    { uint32_t ea = c->r[13] + 0x878u; uint32_t v = LD32(ea); c->r[4] = v; }
L_26ae9a0:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x98u;
    c->r[13] = c->r[13] + 0x800u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26ae9c0(Cpu *restrict c) {
    FN_ENTER(0x26ae9c0u);
L_26ae9c0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[5] = c->r[0];
    c->r[0] = 0x488c8cu;
    c->r[4] = c->r[1];
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->r[0] = 0x26ae9f4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_26aea10; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26aea0cu; f_28500d8(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
L_26aea10:;
    c->r[0] = c->r[13];
    c->r[1] = 0x0u;
    c->r[14] = 0x26aea1cu; f_26af754(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26aea38; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x488c48u;
    c->r[0] = 0x26aea38u + c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_26aea38:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aea78; }
    c->r[0] = c->r[13];
    c->r[1] = 0x0u;
    c->r[2] = c->r[4];
    c->r[5] = 0x0u;
    c->r[14] = 0x26aea58u; f_26af838(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aeae4; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26aea74u; f_28500e4(c);
    goto L_26aeae4;
L_26aea78:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26aeab8; }
    c->r[0] = 0x15u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48f73fu;
    c->r[0] = 0x26aeaa4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x488bd0u;
    c->r[0] = 0x26aeab0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbau;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_26aeab8:;
    c->r[0] = c->r[13];
    c->r[1] = c->r[4];
    c->r[14] = 0x26aeac4u; f_26af834(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aeae0; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26aeae0u; f_28500e4(c);
L_26aeae0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_26aeae4:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26aeb00(Cpu *restrict c) {
    FN_ENTER(0x26aeb00u);
L_26aeb00:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[0] = 0x488b50u;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    c->r[0] = 0x26aeb30u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_26aeb4c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26aeb48u; f_28500d8(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
L_26aeb4c:;
    c->r[0] = c->r[13];
    c->r[1] = 0x0u;
    c->r[14] = 0x26aeb58u; f_26af754(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aeb88; }
    c->r[0] = c->r[13];
    c->r[14] = 0x26aeb6cu; f_26af5fc(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aebf4; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    goto L_26aebec;
L_26aeb88:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26aebc8; }
    c->r[0] = 0x15u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48f63bu;
    c->r[0] = 0x26aebb4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x488ac0u;
    c->r[0] = 0x26aebc0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_26aebc8:;
    c->r[0] = c->r[13];
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x26aebd8u; f_26af834(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aebf4; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
L_26aebec:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26aebf4u; f_28500e4(c);
L_26aebf4:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26aec0c(Cpu *restrict c) {
    FN_ENTER(0x26aec0cu);
L_26aec0c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[6] = c->r[0];
    c->r[0] = 0x488a3cu;
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[0] = 0x26aec44u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_26aec60; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26aec5cu; f_28500d8(c);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[7]); }
L_26aec60:;
    c->r[0] = c->r[13];
    c->r[1] = 0x0u;
    c->r[14] = 0x26aec6cu; f_26af754(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aeca0; }
    c->r[0] = c->r[13];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x26aec88u; f_26af818(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aed08; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    goto L_26aed00;
L_26aeca0:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26aece0; }
    c->r[0] = 0x15u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48f52fu;
    c->r[0] = 0x26aecccu + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4889a8u;
    c->r[0] = 0x26aecd8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe6u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_26aece0:;
    c->r[0] = c->r[13];
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x26aecf0u; f_26af834(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aed08; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
L_26aed00:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26aed08u; f_28500e4(c);
L_26aed08:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26aed1c(Cpu *restrict c) {
    FN_ENTER(0x26aed1cu);
L_26aed1c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[0] = 0x488934u;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    c->r[0] = 0x26aed4cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_26aed68; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26aed64u; f_28500d8(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
L_26aed68:;
    c->r[0] = c->r[13];
    c->r[1] = 0x0u;
    c->r[14] = 0x26aed74u; f_26af754(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xcu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x2d0000u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26aedc0; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_26aedf8; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48f45fu;
    c->r[0] = 0x26aedacu + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4888c8u;
    c->r[0] = 0x26aedb8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x102u;
    goto L_26aedf4;
L_26aedc0:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_26aedf8; }
    c->r[0] = c->r[0] + 0x9u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48f427u;
    c->r[0] = 0x26aede4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x488890u;
    c->r[0] = 0x26aedf0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xfbu;
L_26aedf4:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_26aedf8:;
    c->r[0] = c->r[13];
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x26aee08u; f_26af834(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aee20; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26aee20u; f_28500e4(c);
L_26aee20:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26aee3c(Cpu *restrict c) {
    FN_ENTER(0x26aee3cu);
L_26aee3c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0x26aee64u; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26aee88; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[14] = 0x26aee80u; f_26af838(c);
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26aee88:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_26aeea0; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aeea8; }
L_26aeea0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26aeea8u; f_2850744(c);
L_26aeea8:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[14] = 0x26aeeb8u; f_26af838(c);
    c->r[7] = 0x0u;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26aeec4(Cpu *restrict c) {
    FN_ENTER(0x26aeec4u);
L_26aeec4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[4] = (c->r[2] >> 16);
    c->v.s[0] = 0x0u;
    c->r[5] = 0x140fu;
    c->r[14] = (c->r[0] >> 24);
    c->r[1] = (c->r[0] >> 16);
    c->r[12] = (c->r[0] >> 8);
    c->r[3] = c->r[4] | (c->r[3] << 16);
    c->r[4] = c->r[2];
    c->r[4] = c->r[4] & 0x3fffu;
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_GT) { goto L_26aef58; }
    (void)f_subs(c, c->r[4], 0x810u);
    if (COND_LT) { goto L_26aefb8; }
    if (COND_EQ) { goto L_26af058; }
    (void)f_subs(c, c->r[4], 0x910u);
    if (COND_EQ) { goto L_26af070; }
    c->r[1] = 0x1210u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_NE) { goto L_26af304; }
    c->r[1] = (c->r[0] >> 11) & 0x1fu;
    c->r[5] = (c->r[0] >> 5) & 0x3fu;
    c->r[0] = c->r[0] & 0x1fu;
    c->v.s[6] = 0x427c0000u;
    c->v.s[8] = 0x41f80000u;
    c->v.s[2] = c->r[0];
    c->v.s[4] = c->r[5];
    c->v.s[10] = c->r[1];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[10] = (float)c->v.s[10];
    c->v.f[4] = c->v.f[4] / c->v.f[6];
    c->v.f[2] = c->v.f[2] / c->v.f[8];
    c->v.f[6] = c->v.f[10] / c->v.f[8];
    goto L_26af10c;
L_26aef58:;
    c->r[5] = 0x180fu;
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_LE) { goto L_26aeff8; }
    c->r[5] = 0x1810u;
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_26af094; }
    c->r[5] = 0x1918u;
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_26af0d8; }
    c->v.s[2] = c->v.s[0];
    c->v.s[4] = c->v.s[0];
    c->v.s[6] = c->v.s[0];
    c->r[5] = 0x2120u;
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_NE) { goto L_26af10c; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->v.s[6] = 0x437f0000u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[5] = (uint32_t)(uint8_t)(c->r[12]);
    c->v.s[8] = c->r[14];
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[5];
    c->v.s[4] = c->r[1];
    goto L_26af040;
L_26aefb8:;
    c->r[1] = 0x408u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_EQ) { goto L_26af29c; }
    (void)f_subs(c, c->r[4], 0x710u);
    if (COND_NE) { goto L_26af304; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[12]);
    c->v.s[6] = 0x437f0000u;
    c->v.s[2] = c->r[1];
    c->v.s[4] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[8] = (float)(int32_t)c->v.s[4];
    c->v.f[4] = c->v.f[2] / c->v.f[6];
    c->v.f[6] = c->v.f[8] / c->v.f[6];
    c->v.s[2] = c->v.s[0];
    goto L_26af10c;
L_26aeff8:;
    c->r[1] = 0x1410u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_EQ) { goto L_26af2c0; }
    c->v.s[2] = c->v.s[0];
    c->v.s[4] = c->v.s[0];
    c->v.s[6] = c->v.s[0];
    c->r[1] = 0x1510u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_NE) { goto L_26af10c; }
    c->r[1] = (c->r[0] >> 12) & 0xfu;
    c->r[4] = (c->r[0] >> 4) & 0xfu;
    c->r[0] = c->r[0] & 0xfu;
    c->r[5] = c->r[12] & 0xfu;
    c->v.s[6] = 0x41700000u;
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[4];
    c->v.s[4] = c->r[5];
    c->v.s[8] = c->r[1];
L_26af040:;
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[8] = (float)c->v.s[8];
    c->v.f[0] = c->v.f[0] / c->v.f[6];
    goto L_26af100;
L_26af058:;
    c->v.s[6] = 0x437f0000u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[12]);
    c->v.s[2] = c->r[14];
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->v.s[4] = c->r[1];
    goto L_26af0f0;
L_26af070:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->v.s[6] = 0x437f0000u;
    c->r[5] = (uint32_t)(uint8_t)(c->r[12]);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->v.s[2] = c->r[1];
    c->v.s[4] = c->r[0];
    c->v.s[8] = c->r[5];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    goto L_26af0f8;
L_26af094:;
    c->r[5] = (c->r[0] >> 11) & 0x1fu;
    c->r[4] = (c->r[0] >> 6) & 0x1fu;
    c->r[1] = c->r[0] & 0x1u;
    c->r[0] = (c->r[0] >> 1) & 0x1fu;
    c->v.s[6] = 0x41f80000u;
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[4];
    c->v.s[4] = c->r[5];
    c->v.f[8] = (float)c->v.s[0];
    c->v.f[10] = (float)c->v.s[2];
    c->v.f[12] = (float)c->v.s[4];
    c->v.s[0] = c->r[1];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = c->v.f[8] / c->v.f[6];
    c->v.f[4] = c->v.f[10] / c->v.f[6];
    c->v.f[6] = c->v.f[12] / c->v.f[6];
    goto L_26af10c;
L_26af0d8:;
    c->v.s[6] = 0x437f0000u;
    c->r[5] = (uint32_t)(uint8_t)(c->r[12]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->v.s[2] = c->r[1];
    c->v.s[4] = c->r[5];
L_26af0f0:;
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[8] = c->r[0];
L_26af0f8:;
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[8] = (float)(int32_t)c->v.s[8];
L_26af100:;
    c->v.f[2] = c->v.f[2] / c->v.f[6];
    c->v.f[4] = c->v.f[4] / c->v.f[6];
    c->v.f[6] = c->v.f[8] / c->v.f[6];
L_26af10c:;
    c->r[1] = c->r[3] & 0x7u;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_26af170; }
    c->r[1] = (c->r[1] << 2);
    c->r[3] = 0x26af124u + 0xcu;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = c->v.s[4];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[3]; switch (c->pc) { case 0x26af148u: goto L_26af148; case 0x26af150u: goto L_26af150; case 0x26af158u: goto L_26af158; case 0x26af160u: goto L_26af160; case 0x26af168u: goto L_26af168; case 0x26af16cu: goto L_26af16c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26af148:;
    c->v.s[8] = c->v.s[6];
    goto L_26af16c;
L_26af150:;
    c->v.s[8] = c->v.s[2];
    goto L_26af16c;
L_26af158:;
    c->v.s[8] = c->v.s[0];
    goto L_26af16c;
L_26af160:;
    c->v.s[8] = 0x0u;
    goto L_26af16c;
L_26af168:;
    c->v.s[8] = 0x3f800000u;
L_26af16c:;
    ST32(c->r[0], c->v.s[8]);
L_26af170:;
    c->r[1] = (c->r[2] >> 19) & 0x7u;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_26af1d4; }
    c->r[1] = (c->r[1] << 2);
    c->r[3] = 0x26af188u + 0xcu;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = c->v.s[4];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[3]; switch (c->pc) { case 0x26af1acu: goto L_26af1ac; case 0x26af1b4u: goto L_26af1b4; case 0x26af1bcu: goto L_26af1bc; case 0x26af1c4u: goto L_26af1c4; case 0x26af1ccu: goto L_26af1cc; case 0x26af1d0u: goto L_26af1d0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26af1ac:;
    c->v.s[8] = c->v.s[6];
    goto L_26af1d0;
L_26af1b4:;
    c->v.s[8] = c->v.s[2];
    goto L_26af1d0;
L_26af1bc:;
    c->v.s[8] = c->v.s[0];
    goto L_26af1d0;
L_26af1c4:;
    c->v.s[8] = 0x0u;
    goto L_26af1d0;
L_26af1cc:;
    c->v.s[8] = 0x3f800000u;
L_26af1d0:;
    ST32(c->r[0], c->v.s[8]);
L_26af1d4:;
    c->r[1] = (c->r[2] >> 22) & 0x7u;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_26af238; }
    c->r[1] = (c->r[1] << 2);
    c->r[3] = 0x26af1ecu + 0xcu;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = c->v.s[4];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[3]; switch (c->pc) { case 0x26af210u: goto L_26af210; case 0x26af218u: goto L_26af218; case 0x26af220u: goto L_26af220; case 0x26af228u: goto L_26af228; case 0x26af230u: goto L_26af230; case 0x26af234u: goto L_26af234; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26af210:;
    c->v.s[8] = c->v.s[6];
    goto L_26af234;
L_26af218:;
    c->v.s[8] = c->v.s[2];
    goto L_26af234;
L_26af220:;
    c->v.s[8] = c->v.s[0];
    goto L_26af234;
L_26af228:;
    c->v.s[8] = 0x0u;
    goto L_26af234;
L_26af230:;
    c->v.s[8] = 0x3f800000u;
L_26af234:;
    ST32(c->r[0], c->v.s[8]);
L_26af238:;
    c->r[1] = (c->r[2] >> 25) & 0x7u;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_26af298; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x26af250u + 0x8u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x26af270u: goto L_26af270; case 0x26af278u: goto L_26af278; case 0x26af280u: goto L_26af280; case 0x26af288u: goto L_26af288; case 0x26af290u: goto L_26af290; case 0x26af294u: goto L_26af294; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26af270:;
    c->v.s[4] = c->v.s[6];
    goto L_26af294;
L_26af278:;
    c->v.s[4] = c->v.s[2];
    goto L_26af294;
L_26af280:;
    c->v.s[4] = c->v.s[0];
    goto L_26af294;
L_26af288:;
    c->v.s[4] = 0x0u;
    goto L_26af294;
L_26af290:;
    c->v.s[4] = 0x3f800000u;
L_26af294:;
    ST32(c->r[0], c->v.s[4]);
L_26af298:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26af29c:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->v.s[2] = 0x437f0000u;
    c->v.s[4] = c->r[0];
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[6] = c->v.f[4] / c->v.f[2];
    c->v.s[2] = c->v.s[0];
    c->v.s[4] = c->v.s[0];
    goto L_26af10c;
L_26af2c0:;
    c->r[1] = (c->r[0] >> 15) & 0x1u;
    c->r[5] = (c->r[0] >> 10) & 0x1fu;
    c->r[4] = (c->r[0] >> 5) & 0x1fu;
    c->r[0] = c->r[0] & 0x1fu;
    c->v.s[8] = 0x41f80000u;
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[4];
    c->v.s[4] = c->r[5];
    c->v.s[6] = c->r[1];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[6] = (float)c->v.s[6];
    c->v.f[0] = c->v.f[0] / c->v.f[8];
    c->v.f[2] = c->v.f[2] / c->v.f[8];
    c->v.f[4] = c->v.f[4] / c->v.f[8];
    goto L_26af10c;
L_26af304:;
    c->v.s[2] = c->v.s[0];
    c->v.s[4] = c->v.s[0];
    c->v.s[6] = c->v.s[0];
    goto L_26af10c;
}
void f_26af320(Cpu *restrict c) {
    FN_ENTER(0x26af320u);
L_26af320:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x78u;
    c->r[6] = c->r[1];
    c->r[14] = 0x26af334u; f_2850060(c);
    c->r[7] = 0xau;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x2d0000u;
    if (COND_EQ) { goto L_26af3c0; }
    c->r[1] = 0x0u;
    c->r[2] = 0x78u;
    c->r[5] = 0x0u;
    c->r[14] = 0x26af358u; f_2850138(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    c->r[2] = 0x1000000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[2]); }
    c->r[14] = 0x26af380u; f_2850084(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26af3fc; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26af454; }
    c->r[0] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x48bb5au;
    c->r[0] = 0x26af3acu + c->r[0];
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4882c8u;
    c->r[0] = 0x26af3b8u + c->r[0];
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3fu;
    goto L_26af450;
L_26af3c0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x6u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26af454; }
    c->r[0] = 0x48bb1eu;
    c->r[5] = 0x6u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
    c->r[0] = 0x26af3e8u + c->r[0];
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48828cu;
    c->r[0] = 0x26af3f4u + c->r[0];
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x21u;
    goto L_26af450;
L_26af3fc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26af408u; f_28500d8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[14] = 0x26af414u; f_284c904(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26af464; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26af454; }
    c->r[0] = 0x2d0000u;
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x48bac6u;
    c->r[0] = 0x26af440u + c->r[0];
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x488234u;
    c->r[0] = 0x26af44cu + c->r[0];
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x45u;
L_26af450:;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
L_26af454:;
    c->r[0] = c->r[4];
    c->r[14] = 0x26af45cu; f_26af4cc(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26af464:;
    c->r[1] = 0x48eda5u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[1] = 0x26af478u + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x14u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x48ed90u;
    c->r[1] = 0x26af494u + c->r[1];
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x26af4a4u; f_26af7a0(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26af4cc(Cpu *restrict c) {
    FN_ENTER(0x26af4ccu);
L_26af4cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26af5ec; }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26af558; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26af4f8u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26af558; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26af508u; f_285069c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26af540; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48ebb1u;
    c->r[2] = 0x26af530u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26af534u; f_283b33c(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x26af53cu; f_28506a8(c);
    goto L_26af558;
L_26af540:;
    c->r[0] = 0x48eb95u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[2] = 0x26af554u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26af558u; f_283b33c(c);
L_26af558:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_26af580; }
    c->r[1] = c->r[0] + 0xcu;
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x26af57cu; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
L_26af580:;
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_26af5a4; }
    c->r[1] = c->r[0] + 0x3cu;
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x26af5a0u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
L_26af5a4:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26af5bc; }
    c->r[0] = c->r[1];
    c->r[14] = 0x26af5b8u; f_284c910(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
L_26af5bc:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26af5e0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x26af5d0u; f_28500e4(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26af5dcu; f_28500a8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
L_26af5e0:;
    c->r[14] = 0x26af5e4u; f_28500b4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_26af5ec:;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26af5fc(Cpu *restrict c) {
    FN_ENTER(0x26af5fcu);
L_26af5fc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1fu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[5] = 0x1u; }
    c->r[0] = c->r[5] | (c->r[5] << 1);
    c->r[7] = c->r[6] + (c->r[0] << 4);
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26af63c; }
L_26af62c:;
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 4);
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26af63c:;
    c->r[1] = c->r[7] - 0x8u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26af664; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26af658u; f_26b0aac(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26af6a4; }
L_26af664:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[1] = 0xcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[1] = 0x48eb9cu;
    c->r[1] = 0x26af68cu + c->r[1];
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x487fe8u;
    c->r[1] = 0x26af698u + c->r[1];
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0xb4u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26af6a4:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    goto L_26af62c;
}
void f_26af6b8(Cpu *restrict c) {
    FN_ENTER(0x26af6b8u);
L_26af6b8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26af6d8; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26af6d8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_26af6fc; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x26af6f4u; f_26b0aac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26af73c; }
L_26af6fc:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0xcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x48eb04u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x26af724u + c->r[1];
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x487f50u;
    c->r[1] = 0x26af730u + c->r[1];
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0xb4u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26af73c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x8u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26af754(Cpu *restrict c) {
    FN_ENTER(0x26af754u);
L_26af754:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26af764; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_26af768;
L_26af764:;
    c->r[2] = 0x0u;
L_26af768:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_NE) { c->r[2] = c->r[3] | c->r[2]; }
    c->r[3] = 0x1u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[3] = 0x0u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_26af798; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[1] + 0x77u; uint32_t v = LD8(ea); c->r[3] = v; }
L_26af798:;
    { uint32_t ea = c->r[0] + 0x1fu; ST8(ea, c->r[3]); }
    return;
}
void f_26af7a0(Cpu *restrict c) {
    FN_ENTER(0x26af7a0u);
L_26af7a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x48ea7bu;
    c->r[0] = 0x26af7b8u + c->r[0];
    c->r[14] = 0x26af7b8u; f_285072c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26af7e4; }
    c->r[1] = 0x48c1c4u;
    c->r[1] = 0x26af7ccu + c->r[1];
    c->r[14] = 0x26af7ccu; f_283b648(c);
L_26af7cc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[1] + 0x77u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26af7e4:;
    c->r[0] = 0x48ea3fu;
    c->r[1] = c->r[13] + 0x4u;
    c->r[0] = 0x26af7f4u + c->r[0];
    c->r[14] = 0x26af7f4u; f_285033c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26af804; }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26af804:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_26af7cc;
}
void f_26af818(Cpu *restrict c) {
    FN_ENTER(0x26af818u);
L_26af818:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[2] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[2] | c->r[1]; }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    return;
}
void f_26af834(Cpu *restrict c) {
    FN_ENTER(0x26af834u);
L_26af834:;
    return;
}
void f_26af838(Cpu *restrict c) {
    FN_ENTER(0x26af838u);
L_26af838:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26af868; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[1] + 0x48u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_26af874; }
    goto L_26af8dc;
L_26af868:;
    c->r[4] = ~0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26af8dc; }
L_26af874:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_LT) { goto L_26af938; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_26af960; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26af894u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26af960; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26af8a4u; f_285069c(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26af948; }
    c->r[0] = c->r[8] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48e815u;
    c->r[2] = 0x26af8ccu + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26af8d0u; f_283b33c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x26af8d8u; f_28506a8(c);
    goto L_26af960;
L_26af8dc:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_26afa74; }
    c->r[0] = c->r[4];
    c->r[1] = ~0x0u;
    c->r[14] = 0x26af8f0u; f_28506f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26af9e4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26af900u; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26af9cc; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48e7b9u;
    c->r[2] = 0x26af928u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26af92cu; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26af934u; f_28506a8(c);
    goto L_26af9e4;
L_26af938:;
    c->r[4] = c->r[7];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GE) { goto L_26af970; }
    goto L_26af9c4;
L_26af948:;
    c->r[0] = 0x48e78du;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    c->r[2] = 0x26af95cu + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26af960u; f_283b33c(c);
L_26af960:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_26af9c4; }
L_26af970:;
    c->r[0] = c->r[4];
    c->r[14] = 0x26af978u; f_28506cc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { goto L_26afa50; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26af98cu; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26afa38; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48e72du;
    c->r[2] = 0x26af9b4u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26af9b8u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26af9c0u; f_28506a8(c);
    goto L_26afa50;
L_26af9c4:;
    c->r[6] = ~0x0u;
    goto L_26afa50;
L_26af9cc:;
    c->r[0] = 0x48e709u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    c->r[2] = 0x26af9e0u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26af9e4u; f_283b33c(c);
L_26af9e4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x26af9ecu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26afa74; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26af9fcu; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26afa5c; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48e6bdu;
    c->r[2] = 0x26afa24u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26afa28u; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26afa30u; f_28506a8(c);
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26afa38:;
    c->r[0] = 0x48e69du;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    c->r[2] = 0x26afa4cu + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26afa50u; f_283b33c(c);
L_26afa50:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26afa5c:;
    c->r[0] = 0x48e679u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    c->r[2] = 0x26afa70u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26afa74u; f_283b33c(c);
L_26afa74:;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26afa9c(Cpu *restrict c) {
    FN_ENTER(0x26afa9cu);
L_26afa9c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[7] = c->r[1];
    c->r[5] = 0x0u;
    c->r[4] = c->r[0];
    c->r[9] = c->r[3];
    c->r[6] = c->r[2];
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[14] = 0x26afad0u; f_2850750(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26afae8; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[5]); }
L_26afae0:;
    c->r[5] = 0x0u;
    goto L_26afbfc;
L_26afae8:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[1] = c->r[13] + 0x20u;
    c->r[2] = c->r[13] + 0x1cu;
    c->r[0] = c->r[7];
    c->r[14] = 0x26afafcu; f_285075c(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26afb04u; f_28505c4(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26afb7c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26afb1cu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26afb7c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26afb2cu; f_285069c(c);
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_26afb64; }
    c->r[0] = c->r[10] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48e58du;
    c->r[2] = 0x26afb54u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26afb58u; f_283b33c(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x26afb60u; f_28506a8(c);
    goto L_26afb7c;
L_26afb64:;
    c->r[0] = 0x48e571u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[2] = 0x26afb78u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26afb7cu; f_283b33c(c);
L_26afb7c:;
    c->r[0] = ~0x0u;
    c->r[3] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x8u;
    c->r[14] = 0x26afbb0u; f_2850768(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26afc08; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afbf4; }
    c->r[0] = 0x19u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x48e65eu;
    c->r[0] = 0x26afbe0u + c->r[0];
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x487a94u;
    c->r[0] = 0x26afbecu + c->r[0];
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x82u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
L_26afbf4:;
    c->r[0] = c->r[8];
    c->r[14] = 0x26afbfcu; f_2850774(c);
L_26afbfc:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26afc08:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26afc14u; f_2850780(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26afc2cu; f_28505b8(c);
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26afc38u; f_2850774(c);
    goto L_26afae0;
}
void f_26afc4c(Cpu *restrict c) {
    FN_ENTER(0x26afc4cu);
L_26afc4c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[8] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[10] = c->r[2];
    c->r[1] = c->r[13] + 0x20u;
    c->r[2] = c->r[13] + 0x1cu;
    c->r[9] = c->r[3];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x26afc88u; f_285075c(c);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26afc94u; f_28505c4(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_26afd0c; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26afcacu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26afd0c; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26afcbcu; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26afcf4; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48e3fdu;
    c->r[2] = 0x26afce4u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26afce8u; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26afcf0u; f_28506a8(c);
    goto L_26afd0c;
L_26afcf4:;
    c->r[0] = 0x48e3e1u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    c->r[2] = 0x26afd08u + c->r[0];
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x26afd0cu; f_283b33c(c);
L_26afd0c:;
    c->r[0] = ~0x0u;
    c->r[3] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x8u;
    c->r[14] = 0x26afd40u; f_285078c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26afd90; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afd84; }
    c->r[0] = 0x18u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x48e4e6u;
    c->r[0] = 0x26afd70u + c->r[0];
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x487904u;
    c->r[0] = 0x26afd7cu + c->r[0];
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb4u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
L_26afd84:;
    c->r[0] = c->r[6];
    c->r[14] = 0x26afd8cu; f_2850774(c);
    goto L_26afdb4;
L_26afd90:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x26afd9cu; f_2850780(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26afda4u; f_28505b8(c);
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26afdb0u; f_2850774(c);
    c->r[5] = 0x0u;
L_26afdb4:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26afdd0(Cpu *restrict c) {
    FN_ENTER(0x26afdd0u);
L_26afdd0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[9] = 0x7u;
    c->r[6] = c->r[1];
    c->r[4] = c->r[3];
    c->r[5] = c->r[0];
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x2d0000u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26afe7c; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_26aff1c; }
    c->r[0] = 0x3u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48e404u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26afe68u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48780cu;
    c->r[0] = 0x26afe74u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    goto L_26afebc;
L_26afe7c:;
    c->r[0] = 0x1u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48e3c0u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26afeacu + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4877c8u;
    c->r[0] = 0x26afeb8u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xefu;
L_26afebc:;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
L_26afec0:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26aff90; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26afed4u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26aff90; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26afee4u; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26aff78; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48e1d5u;
    c->r[2] = 0x26aff0cu + c->r[0];
    c->r[0] = c->r[13] + 0xcu;
    c->r[14] = 0x26aff10u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26aff18u; f_28506a8(c);
    goto L_26aff90;
L_26aff1c:;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_26b001c; }
    c->r[2] = c->r[1] ^ (c->r[1] >> 6);
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26b0088; }
    c->r[0] = 0x9u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48e308u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26aff64u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x487710u;
    c->r[0] = 0x26aff70u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x114u;
    goto L_26afebc;
L_26aff78:;
    c->r[0] = 0x48e15du;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[2] = 0x26aff8cu + c->r[0];
    c->r[0] = c->r[13] + 0xcu;
    c->r[14] = 0x26aff90u; f_283b33c(c);
L_26aff90:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26b0004; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26affa4u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b0004; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26affb4u; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26affec; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48e105u;
    c->r[2] = 0x26affdcu + c->r[0];
    c->r[0] = c->r[13] + 0xcu;
    c->r[14] = 0x26affe0u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26affe8u; f_28506a8(c);
    goto L_26b0004;
L_26affec:;
    c->r[0] = 0x48e0e9u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[2] = 0x26b0000u + c->r[0];
    c->r[0] = c->r[13] + 0xcu;
    c->r[14] = 0x26b0004u; f_283b33c(c);
L_26b0004:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_26b0010:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_26b001c:;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26b01e4; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26b02a0; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26b0354; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26b052c; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26b0090; }
    c->r[0] = 0x14u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48e1f8u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b0074u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x487600u;
    c->r[0] = 0x26b0080u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10eu;
    goto L_26afebc;
L_26b0088:;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26b0228; }
L_26b0090:;
    c->r[1] = c->r[13] + 0x8u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x26b00a0u; f_285075c(c);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->v.f[0] = (float)c->v.s[0];
    ST32(c->r[4] + 44u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.f[6] = (float)c->v.s[0];
L_26b00c0:;
    ST32(c->r[4] + 48u, c->v.s[6]);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26b02e4; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_26b00d8:;
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[2] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; } }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { goto L_26b0398; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
L_26b00fc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_26b095c; }
    { uint32_t ea = c->r[5] + 0x1eu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26b01cc; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26b01cc; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_26b01cc; }
    c->v.s[0] = LD32(c->r[4] + 20u);
    c->v.s[2] = LD32(c->r[4] + 28u);
    c->v.s[4] = LD32(c->r[4] + 36u);
    c->v.s[6] = LD32(c->r[4] + 44u);
    c->v.f[4] = c->v.f[6] - c->v.f[4];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[4]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->v.s[0];
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_26b01cc; }
    c->v.s[0] = LD32(c->r[4] + 24u);
    c->v.s[2] = LD32(c->r[4] + 32u);
    c->v.s[4] = LD32(c->r[4] + 40u);
    c->v.s[6] = LD32(c->r[4] + 48u);
    c->v.f[4] = c->v.f[6] - c->v.f[4];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[4]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->v.s[0];
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_26b01cc; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b0194u; f_2850750(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b01cc; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b01a4u; f_2850750(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b01cc; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b01b4u; f_2850798(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b01cc; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b01c4u; f_2850798(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b07bc; }
L_26b01cc:;
    { uint32_t ea = c->r[5] + 0x1fu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = 0x2u;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_26b0960; }
    goto L_26b09a0;
L_26b01e4:;
    c->r[0] = 0x10u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48e058u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b0214u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x487460u;
    c->r[0] = 0x26b0220u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x106u;
    goto L_26afebc;
L_26b0228:;
    c->v.s[2] = LD32(c->r[6] + 40u);
    c->v.s[4] = LD32(c->r[6] + 48u);
    c->v.s[0] = 0x3f800000u;
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_26b025c; }
    c->v.s[2] = LD32(c->r[6] + 44u);
    c->v.s[4] = LD32(c->r[6] + 52u);
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_26b03cc; }
L_26b025c:;
    c->r[0] = 0x7u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48dfe0u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b028cu + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4873e8u;
    c->r[0] = 0x26b0298u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11bu;
    goto L_26afebc;
L_26b02a0:;
    c->r[0] = 0x11u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48df9cu;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b02d0u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4873a4u;
    c->r[0] = 0x26b02dcu + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108u;
    goto L_26afebc;
L_26b02e4:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b04e8; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_GE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_LT) { goto L_26b0470; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_26b0470; }
    c->r[0] = 0xfu;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48df2cu;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b0340u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x487334u;
    c->r[0] = 0x26b034cu + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x134u;
    goto L_26afebc;
L_26b0354:;
    c->r[0] = 0x12u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48dee8u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b0384u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4872f0u;
    c->r[0] = 0x26b0390u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10au;
    goto L_26afebc;
L_26b0398:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b0570; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26b05f8; }
    { uint32_t ea = c->r[6] + 0x48u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[8] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_26b06b4; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    goto L_26b00fc;
L_26b03cc:;
    c->r[1] = c->r[13] + 0xcu;
    c->r[2] = 0x0u;
    c->r[14] = 0x26b03d8u; f_285075c(c);
    c->v.s[0] = LD32(c->r[6] + 40u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_26b042c; }
    c->v.s[2] = LD32(c->r[6] + 44u);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_26b042c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[6] + 48u);
    c->v.s[6] = LD32(c->r[0]);
    c->v.f[6] = (float)c->v.s[6];
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_26b042c; }
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[6] + 52u);
    c->v.f[8] = (float)c->v.s[8];
    vfp_cmp_f(c, c->v.f[6], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_26b06f8; }
L_26b042c:;
    c->r[0] = 0x5u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48de10u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b045cu + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x487218u;
    c->r[0] = 0x26b0468u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11du;
    goto L_26afebc;
L_26b0470:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b0478u; f_2850798(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b0484u; f_2850798(c);
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_26b05b4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26b063c; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x8u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x26b04acu; f_285075c(c);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->v.f[0] = (float)c->v.s[0];
    ST32(c->r[4] + 28u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.f[6] = (float)c->v.s[0];
L_26b04cc:;
    ST32(c->r[4] + 32u, c->v.s[6]);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    goto L_26b00d8;
L_26b04e8:;
    c->r[0] = 0x2u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48dd54u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b0518u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48715cu;
    c->r[0] = 0x26b0524u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12fu;
    goto L_26afebc;
L_26b052c:;
    c->r[0] = 0x13u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48dd10u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b055cu + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x487118u;
    c->r[0] = 0x26b0568u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10cu;
    goto L_26afebc;
L_26b0570:;
    c->r[0] = 0xau;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48dcccu;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b05a0u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4870d4u;
    c->r[0] = 0x26b05acu + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16au;
    goto L_26afebc;
L_26b05b4:;
    c->r[0] = 0xeu;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48dc88u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b05e4u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x487090u;
    c->r[0] = 0x26b05f0u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x139u;
    goto L_26afebc;
L_26b05f8:;
    c->r[0] = 0xbu;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48dc44u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b0628u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48704cu;
    c->r[0] = 0x26b0634u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16cu;
    goto L_26afebc;
L_26b063c:;
    c->v.s[2] = LD32(c->r[6] + 24u);
    c->v.s[4] = LD32(c->r[6] + 32u);
    c->v.s[0] = 0x3f800000u;
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_26b0670; }
    c->v.s[2] = LD32(c->r[6] + 28u);
    c->v.s[4] = LD32(c->r[6] + 36u);
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_26b0708; }
L_26b0670:;
    c->r[0] = 0x6u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48dbccu;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b06a0u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x486fd4u;
    c->r[0] = 0x26b06acu + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x13fu;
    goto L_26afebc;
L_26b06b4:;
    c->r[0] = 0x8u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48db88u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b06e4u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x486f90u;
    c->r[0] = 0x26b06f0u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16eu;
    goto L_26afebc;
L_26b06f8:;
    ST32(c->r[4] + 36u, c->v.s[0]);
    ST32(c->r[4] + 40u, c->v.s[2]);
    ST32(c->r[4] + 44u, c->v.s[4]);
    goto L_26b00c0;
L_26b0708:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0xcu;
    c->r[2] = 0x0u;
    c->r[14] = 0x26b0718u; f_285075c(c);
    c->v.s[0] = LD32(c->r[6] + 24u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_26b076c; }
    c->v.s[2] = LD32(c->r[6] + 28u);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_26b076c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[6] + 32u);
    c->v.s[6] = LD32(c->r[0]);
    c->v.f[6] = (float)c->v.s[6];
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_26b076c; }
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[6] + 36u);
    c->v.f[8] = (float)c->v.s[8];
    vfp_cmp_f(c, c->v.f[6], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_26b07ac; }
L_26b076c:;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = 0x48dad4u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x26b0798u + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x486edcu;
    c->r[0] = 0x26b07a4u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x141u;
    goto L_26afebc;
L_26b07ac:;
    ST32(c->r[4] + 20u, c->v.s[0]);
    ST32(c->r[4] + 24u, c->v.s[2]);
    ST32(c->r[4] + 28u, c->v.s[4]);
    goto L_26b04cc;
L_26b07bc:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0xcu;
    c->r[2] = c->r[13] + 0x38u;
    c->r[14] = 0x26b07ccu; f_285075c(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x3cu;
    c->r[2] = c->r[13] + 0x34u;
    c->r[14] = 0x26b07dcu; f_285075c(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x120fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa880000u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[7] = f_subs(c, c->r[1], c->r[2]);
    c->r[7] = f_sbcs(c, 0x1u, c->r[3]);
    if (COND_LT) { goto L_26b082c; }
    c->r[7] = 0x2120u;
    c->r[3] = c->r[3] ^ 0x1u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x530000u;
    c->r[7] = c->r[2] ^ c->r[7];
    { uint32_t r = c->r[7] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_NE) { c->r[7] = 0x2120u; }
    if (COND_NE) { c->r[7] = (c->r[7] & 0xFFFFu) | 0xd10000u; }
    if (COND_NE) { c->r[7] = c->r[2] ^ c->r[7]; }
    if (COND_NE) { { uint32_t r = c->r[7] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; } }
    if (COND_EQ) { goto L_26b086c; }
    c->r[7] = 0x2120u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xa530000u;
    goto L_26b0860;
L_26b082c:;
    c->r[7] = 0x1210u;
    c->r[6] = c->r[3] ^ 0x1u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xa880000u;
    c->r[7] = c->r[2] ^ c->r[7];
    { uint32_t r = c->r[7] | c->r[6]; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_NE) { c->r[7] = 0x2120u; }
    if (COND_NE) { c->r[3] = c->r[3] ^ 0x2u; }
    if (COND_NE) { c->r[7] = (c->r[7] & 0xFFFFu) | 0xa530000u; }
    if (COND_NE) { c->r[7] = c->r[2] ^ c->r[7]; }
    if (COND_NE) { { uint32_t r = c->r[7] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; } }
    if (COND_EQ) { goto L_26b086c; }
    c->r[7] = 0x2120u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x530000u;
L_26b0860:;
    c->r[2] = c->r[2] ^ c->r[7];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { goto L_26b01cc; }
L_26b086c:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = f_subs(c, c->r[1], c->r[6]);
    c->r[1] = f_sbcs(c, 0x1u, c->r[3]);
    if (COND_LT) { goto L_26b08b8; }
    c->r[1] = 0x2120u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[7] = c->r[6] ^ c->r[1];
    c->r[1] = c->r[3] ^ 0x1u;
    { uint32_t r = c->r[7] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_NE) { c->r[3] = 0x2120u; }
    if (COND_NE) { c->r[3] = (c->r[3] & 0xFFFFu) | 0xd10000u; }
    if (COND_NE) { c->r[3] = c->r[6] ^ c->r[3]; }
    if (COND_NE) { { uint32_t r = c->r[3] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_EQ) { goto L_26b08f8; }
    c->r[3] = 0x2120u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xa530000u;
    goto L_26b08ec;
L_26b08b8:;
    c->r[1] = 0x1210u;
    c->r[7] = c->r[3] ^ 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa880000u;
    c->r[1] = c->r[6] ^ c->r[1];
    { uint32_t r = c->r[1] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { c->r[1] = 0x2120u; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0xa530000u; }
    if (COND_NE) { c->r[7] = c->r[6] ^ c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[3] ^ 0x2u; }
    if (COND_NE) { { uint32_t r = c->r[7] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_EQ) { goto L_26b08f8; }
    c->r[3] = 0x2120u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x530000u;
L_26b08ec:;
    c->r[3] = c->r[6] ^ c->r[3];
    { uint32_t r = c->r[3] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { goto L_26b01cc; }
L_26b08f8:;
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26b0920; }
    (void)f_subs(c, c->r[1], 0xfeu);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0xdbu); }
    if (COND_NE) { goto L_26b0930; }
    c->r[2] = 0xfeu;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_26b093c; }
    goto L_26b095c;
L_26b0920:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_26b093c; }
    goto L_26b095c;
L_26b0930:;
    c->r[2] = 0xffu;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_26b095c; }
L_26b093c:;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b09e8; }
    (void)f_subs(c, c->r[0], 0xfeu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xdbu); }
    if (COND_NE) { goto L_26b09f0; }
    c->r[2] = 0xfeu;
    goto L_26b09f4;
L_26b095c:;
    c->r[1] = 0x1u;
L_26b0960:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[1] << 1);
    c->r[1] = c->r[0] + (c->r[1] << 4);
    c->r[8] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26b0988; }
L_26b097c:;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[6] = 0x0u;
    goto L_26b0010;
L_26b0988:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[14] = 0x26b0994u; f_26af6b8(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26b09e0; }
L_26b09a0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26afec0; }
    c->r[0] = c->r[9] + 0x5u;
    { uint32_t ea = c->r[5] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = 0x48d8a0u;
    c->r[0] = 0x26b09ccu + c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x486ca8u;
    c->r[0] = 0x26b09d8u + c->r[0];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x17du;
    goto L_26afebc;
L_26b09e0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_26b097c;
L_26b09e8:;
    c->r[2] = 0x0u;
    goto L_26b09f4;
L_26b09f0:;
    c->r[2] = 0xffu;
L_26b09f4:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_26b01cc; }
    goto L_26b0960;
}
void f_26b0aac(Cpu *restrict c) {
    FN_ENTER(0x26b0aacu);
L_26b0aac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4] + 0x28u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b0accu; f_28507a4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b0b14; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0xdu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x48d779u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x26b0afcu + c->r[1];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x486b78u;
    c->r[1] = 0x26b0b08u + c->r[1];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x25eu;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26b0b14:;
    c->r[0] = 0x7fu;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x72cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x730u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x734u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x24u;
    c->r[0] = 0x26b0b4cu + c->r[0];
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3cu;
    c->r[0] = 0x26b0b58u + c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26b0b70(Cpu *restrict c) {
    FN_ENTER(0x26b0b70u);
L_26b0b70:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[14] = 0x26b0b88u; f_28507b0(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26b0b94(Cpu *restrict c) {
    FN_ENTER(0x26b0b94u);
L_26b0b94:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x290u;
    c->r[11] = c->r[0];
    c->r[0] = ~0x0u;
    c->r[10] = c->r[1];
    c->r[4] = c->r[2];
    c->r[1] = 0x0u;
    c->r[2] = 0x71cu;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[9] = c->r[4] + 0x4cu;
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x26b0bd4u; f_2850138(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0xeu;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x2d0000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b0c2c; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b0c2c; }
    c->r[0] = c->r[4] + 0x14u;
    c->r[1] = c->r[4] + 0x24u;
    c->r[2] = 0x10u;
    c->r[14] = 0x26b0c04u; f_283afac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b0c2c; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b0c14u; f_2850798(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b0c2c; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b0c24u; f_2850798(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b0f18; }
L_26b0c2c:;
    c->v.s[0] = LD32(c->r[4] + 36u);
    c->r[1] = c->r[13] + 0x24u;
    c->r[2] = c->r[13] + 0x264u;
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 336u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 40u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 340u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 44u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 344u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 48u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 348u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b0c6cu; f_285075c(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b0c74u; f_2850798(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b0c88; }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[3]); }
    goto L_26b0c8c;
L_26b0c88:;
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[3] = v; }
L_26b0c8c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[13] + 0x150u;
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x26b0ca4u; f_28507bc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26b0cf0; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b113c; }
    c->r[0] = c->r[8] + 0x2u;
    { uint32_t ea = c->r[11] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x48d5bbu;
    c->r[0] = 0x26b0cd0u + c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4869a4u;
    c->r[0] = 0x26b0cdcu + c->r[0];
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14du;
L_26b0ce0:;
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_26b1144; }
    goto L_26b1934;
L_26b0cf0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b0d44; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x264u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x24u;
    c->r[14] = 0x26b0d28u; f_285075c(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b0d30u; f_2850798(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b0dec; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[0]); }
    goto L_26b0df0;
L_26b0d44:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[2] | c->r[5]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_26b10e0; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[13] + 0x38u;
    c->r[7] = c->r[13] + 0x268u;
    c->r[1] = c->r[13] + 0x48u;
    c->r[12] = c->r[13] + 0x260u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[12]); }
    c->r[14] = 0x26b0d7cu; f_26aeec4(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5] & 0x3fu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6c0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6c4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6ccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x6d0u;
    c->r[14] = 0x26b0dacu; f_28507c8(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26b0f0c; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b113c; }
    c->r[0] = c->r[8] + 0x5u;
    { uint32_t ea = c->r[11] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x48d4b3u;
    c->r[0] = 0x26b0dd8u + c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48689cu;
    c->r[0] = 0x26b0de4u + c->r[0];
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1a4u;
    goto L_26b0ce0;
L_26b0dec:;
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
L_26b0df0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x48u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[7]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[14] = 0x26b0e0cu; f_28507d4(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26b0e4c; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b113c; }
    c->r[0] = c->r[8] + 0x3u;
    { uint32_t ea = c->r[11] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x48d453u;
    c->r[0] = 0x26b0e38u + c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48683cu;
    c->r[0] = 0x26b0e44u + c->r[0];
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x167u;
    goto L_26b0ce0;
L_26b0e4c:;
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[13] + 0x268u;
    c->r[3] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[0] + 0x73cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x4u; }
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x26b0e80u; f_26afa9c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_26b113c; }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26b0ea8; }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
L_26b0ea8:;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x26b0ec0u; f_28507e0(c);
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_26b10c8; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x26b0edcu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x26b0efcu: goto L_26b0efc; case 0x26b1068u: goto L_26b1068; case 0x26b1078u: goto L_26b1078; case 0x26b1088u: goto L_26b1088; case 0x26b1098u: goto L_26b1098; case 0x26b10a8u: goto L_26b10a8; case 0x26b10b8u: goto L_26b10b8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26b0efc:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[2] = 0x5u;
    goto L_26b10c4;
L_26b0f0c:;
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x6d4u; ST32(ea, c->r[0]); }
    goto L_26b10e0;
L_26b0f18:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x150u;
    c->r[2] = c->r[13] + 0x268u;
    c->r[14] = 0x26b0f28u; f_285075c(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x48u;
    c->r[2] = c->r[13] + 0x38u;
    c->r[14] = 0x26b0f38u; f_285075c(c);
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[12] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_26b0c2c; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], c->r[0]);
    if (COND_NE) { goto L_26b0c2c; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_26b1288; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] + 0x8u;
L_26b0f74:;
    c->r[14] = c->r[8];
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[1] = c->r[1] ^ c->r[7];
    c->r[7] = c->r[0] ^ c->r[8];
    c->r[8] = c->r[14];
    { uint32_t r = c->r[7] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { goto L_26b0c2c; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[13] + 0x24u;
    c->r[2] = c->r[2] + 0x58u;
    c->r[3] = c->r[3] + 0x58u;
    { uint32_t ea = c->r[1] + (c->r[5] << 2); ST32(ea, c->r[0]); }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[12]);
    if (COND_CC) { goto L_26b0f74; }
    (void)f_subs(c, c->r[12], 0x3u);
    if (COND_EQ) { goto L_26b123c; }
    (void)f_subs(c, c->r[12], 0x2u);
    if (COND_EQ) { goto L_26b1258; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_NE) { goto L_26b1288; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - 0x8u;
    c->r[0] = ROR32(c->r[0], 3);
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_26b0c2c; }
    c->r[2] = 0x1u;
    c->r[3] = 0x8bu;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26b0c2c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[8] >> 16);
    c->r[5] = c->r[8] & 0x8000000u;
    c->r[8] = c->r[14];
    c->r[7] = c->r[0] | (c->r[3] << 16);
    c->r[0] = 0x0u;
    c->r[2] = c->r[7] & 0x20u;
    c->r[3] = c->r[7] & 0x4u;
    c->r[7] = c->r[7] & 0x100u;
    (void)f_subs(c, c->r[2], 0x20u);
    c->r[2] = 0x0u;
    if (COND_CC) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x4u);
    c->r[3] = 0x0u;
    if (COND_CC) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x100u);
    c->r[7] = 0x0u;
    if (COND_CC) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x8000000u);
    if (COND_CC) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x40u);
    if (COND_EQ) { goto L_26b1288; }
    c->r[1] = c->r[3] & c->r[2];
    c->r[1] = c->r[7] & c->r[1];
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_26b0c2c; }
    goto L_26b1288;
L_26b1068:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[2] = 0x3u;
    goto L_26b10c4;
L_26b1078:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[2] = 0x6u;
    goto L_26b10c4;
L_26b1088:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[2] = 0x1u;
    goto L_26b10c4;
L_26b1098:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[2] = 0x7u;
    goto L_26b10c4;
L_26b10a8:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[2] = 0x2u;
    goto L_26b10c4;
L_26b10b8:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[2] = 0x4u;
L_26b10c4:;
    c->r[14] = 0x26b10c8u; f_28507ec(c);
L_26b10c8:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[1]); }
L_26b10e0:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[14] = 0x26b10ecu; f_28507f8(c);
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[14] = 0x26b10f8u; f_2850804(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26b1138; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b113c; }
    c->r[0] = c->r[8] + 0x4u;
    { uint32_t ea = c->r[11] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x48d167u;
    c->r[0] = 0x26b1124u + c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x486550u;
    c->r[0] = 0x26b1130u + c->r[0];
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1b1u;
    goto L_26b0ce0;
L_26b1138:;
    c->r[5] = 0x0u;
L_26b113c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26b1934; }
L_26b1144:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_26b11b8; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26b1158u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b11b8; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26b1168u; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26b11a0; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48cf51u;
    c->r[2] = 0x26b1190u + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1194u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26b119cu; f_28506a8(c);
    goto L_26b11b8;
L_26b11a0:;
    c->r[0] = 0x48cf35u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[2] = 0x26b11b4u + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b11b8u; f_283b33c(c);
L_26b11b8:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_26b122c; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26b11ccu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b122c; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26b11dcu; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26b1214; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48ceddu;
    c->r[2] = 0x26b1204u + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1208u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26b1210u; f_28506a8(c);
    goto L_26b122c;
L_26b1214:;
    c->r[0] = 0x48cec1u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[2] = 0x26b1228u + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b122cu; f_283b33c(c);
L_26b122c:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    goto L_26b1f68;
L_26b123c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_NE) { goto L_26b0c2c; }
    goto L_26b1288;
L_26b1258:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[1], 0x18u);
    if (COND_HI) { goto L_26b0c2c; }
    c->r[3] = 0x101u;
    c->r[2] = 0x1u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x1000000u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26b0c2c; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], (c->r[0] << 1));
    if (COND_NE) { goto L_26b0c2c; }
L_26b1288:;
    c->v.s[16] = LD32(c->r[4] + 36u);
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[13] + 0x25cu;
    c->r[2] = c->r[13] + 0x34u;
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[16]);
    ST32(c->r[13] + 616u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 40u);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 620u, c->v.s[2]);
    c->v.s[18] = LD32(c->r[4] + 44u);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[18]);
    ST32(c->r[13] + 624u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[4] + 48u);
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 56u, c->v.s[16]);
    ST32(c->r[13] + 60u, c->v.s[0]);
    ST32(c->r[13] + 64u, c->v.s[18]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 628u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b12dcu; f_285075c(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x258u;
    c->r[2] = c->r[13] + 0x30u;
    c->r[14] = 0x26b12ecu; f_285075c(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x58u;
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[2] = r; }
    c->r[0] = c->r[13] + 0x150u;
    c->r[14] = 0x26b1304u; f_28501a4(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[2] = r; }
    c->r[0] = c->r[13] + 0x48u;
    c->r[14] = 0x26b1318u; f_28501a4(c);
    c->r[0] = c->r[13] + 0x24u;
    c->r[1] = 0x0u;
    c->r[2] = 0xcu;
    c->r[14] = 0x26b1328u; f_2850138(c);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[16]);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[18]);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x408u;
    c->r[2] = 0xau;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    (void)f_subs(c, c->r[3], 0x3u);
    c->r[8] = c->v.s[0];
    c->r[12] = c->v.s[2];
    if (COND_EQ) { goto L_26b13d4; }
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_EQ) { goto L_26b14d0; }
    c->r[14] = c->r[7];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_26b1740; }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x8u;
    c->r[6] = ROR32(c->r[0], 3);
    (void)f_subs(c, c->r[6], 0x7u);
    if (COND_HI) { goto L_26b1740; }
    c->r[6] = (c->r[6] << 2);
    c->r[5] = 0x26b1388u + 0x18u;
    c->r[2] = 0x2120u;
    c->r[7] = 0x408u;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xb200000u;
    c->pc = c->r[6] + c->r[5]; switch (c->pc) { case 0x26b13c0u: goto L_26b13c0; case 0x26b164cu: goto L_26b164c; case 0x26b1660u: goto L_26b1660; case 0x26b167cu: goto L_26b167c; case 0x26b1740u: goto L_26b1740; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26b13c0:;
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[7]); }
    goto L_26b1670;
L_26b13d4:;
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = c->r[7];
    c->r[8] = c->r[12];
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[0] - 0x8u;
    c->r[0] = ROR32(c->r[7], 3);
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_26b1448; }
    c->r[7] = (c->r[7] >> 3);
    c->r[12] = 0x8bu;
    c->r[1] = 0x1u;
    c->r[7] = (uint32_t)(uint8_t)(c->r[7]);
    { uint32_t r = c->r[1] & shc_lsr(c, c->r[12], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26b1448; }
    c->r[1] = 0x4bed44u;
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[5]); }
    c->r[1] = 0x26b142cu + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
L_26b1448:;
    { uint32_t ea = c->r[6] + 0x60u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[7] = v; }
    c->r[1] = ~0x7u;
    c->r[12] = c->r[1] + (uint32_t)(uint8_t)(c->r[7]);
    c->r[0] = ROR32(c->r[12], 3);
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_26b14f8; }
    c->r[1] = (c->r[12] >> 3);
    c->r[12] = 0x1u;
    c->r[2] = 0x8bu;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t r = c->r[12] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = ~0x7u;
    c->r[12] = c->r[8];
    if (COND_EQ) { goto L_26b14fc; }
    c->r[1] = f_subs(c, c->r[5], 0x1c0000u);
    c->r[2] = 0xau;
    c->r[2] = c->r[2] - 0x0u - 1u + c->cf;
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4becc8u;
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[2]); }
    c->r[1] = 0x26b14a8u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    c->r[1] = ~0x7u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_26b14fc;
L_26b14d0:;
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x20u);
    if (COND_EQ) { goto L_26b1564; }
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_EQ) { goto L_26b156c; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_NE) { goto L_26b159c; }
    c->r[0] = 0x1u;
    goto L_26b1570;
L_26b14f8:;
    c->r[12] = c->r[8];
L_26b14fc:;
    c->r[0] = c->r[1] + (uint32_t)(uint8_t)(c->r[7]);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = ROR32(c->r[0], 3);
    (void)f_subs(c, c->r[7], 0x7u);
    if (COND_HI) { goto L_26b1740; }
    c->r[1] = (c->r[7] << 2);
    c->r[7] = 0x26b151cu + 0x10u;
    c->r[2] = 0x408u;
    c->r[0] = 0xau;
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->pc = c->r[1] + c->r[7]; switch (c->pc) { case 0x26b154cu: goto L_26b154c; case 0x26b16b0u: goto L_26b16b0; case 0x26b16e0u: goto L_26b16e0; case 0x26b1710u: goto L_26b1710; case 0x26b1740u: goto L_26b1740; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26b154c:;
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[2]); }
    c->r[0] = 0x1u;
    goto L_26b173c;
L_26b1564:;
    c->r[0] = 0x4u;
    goto L_26b1570;
L_26b156c:;
    c->r[0] = 0x2u;
L_26b1570:;
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0]; c->r[2] = r; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0]; c->r[2] = r; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
L_26b159c:;
    { uint32_t ea = c->r[6] + 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x710u;
    c->r[14] = c->r[7];
    c->r[7] = 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    (void)f_subs(c, c->r[0], 0x40u);
    if (COND_EQ) { goto L_26b15e4; }
    (void)f_subs(c, c->r[0], 0x20u);
    if (COND_EQ) { goto L_26b1618; }
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_NE) { goto L_26b1740; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    goto L_26b1740;
L_26b15e4:;
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    goto L_26b1740;
L_26b1618:;
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    goto L_26b1740;
L_26b164c:;
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[7]); }
    goto L_26b168c;
L_26b1660:;
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
L_26b1670:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    goto L_26b1740;
L_26b167c:;
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
L_26b168c:;
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    goto L_26b1740;
L_26b16b0:;
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    goto L_26b173c;
L_26b16e0:;
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    goto L_26b173c;
L_26b1710:;
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 3);
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 3);
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
L_26b173c:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
L_26b1740:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[14];
    c->r[6] = c->r[13] + 0x268u;
    c->r[2] = c->r[13] + 0x48u;
    c->v.s[0] = c->r[0];
    { uint32_t r = c->r[0] * c->r[8]; c->r[1] = r; }
    { uint32_t r = c->r[0] * c->r[12]; c->r[0] = r; }
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x270u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->v.f[2] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    ST32(c->r[13] + 56u, c->v.s[2]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->r[14] = 0x26b1788u; f_28507bc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26b17d4; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0xeu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x2d0000u;
    if (COND_NE) { goto L_26b1924; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[11] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x48cadfu;
    c->r[0] = 0x26b17bcu + c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x485eb8u;
    c->r[0] = 0x26b17c8u + c->r[0];
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf5u;
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[0]); }
    goto L_26b1924;
L_26b17d4:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[13] + 0x150u;
    c->r[1] = c->r[9];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x26b17f8u; f_28507d4(c);
    c->r[6] = 0xeu;
    c->r[5] = c->r[0];
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x2d0000u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26b1844; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b1924; }
    c->r[0] = c->r[6] + 0x3u;
    { uint32_t ea = c->r[11] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x48ca6fu;
    c->r[0] = 0x26b182cu + c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x485e48u;
    c->r[0] = 0x26b1838u + c->r[0];
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x100u;
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[0]); }
    goto L_26b1924;
L_26b1844:;
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x264u;
    c->r[3] = c->r[13] + 0x260u;
    { uint32_t ea = c->r[0] + 0x73cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x4u; }
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x26b1874u; f_26afa9c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_26b1924; }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26b189c; }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
L_26b189c:;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[9];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x26b18b8u; f_28507e0(c);
    c->r[0] = 0x1u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[4] + 0x75du; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[5]); }
    c->r[14] = 0x26b18d4u; f_28507f8(c);
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[14] = 0x26b18e0u; f_2850804(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b1924; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_26b1920; }
    c->r[1] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x48c98fu;
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x26b190cu + c->r[1];
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x485d68u;
    c->r[1] = 0x26b1918u + c->r[1];
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x116u;
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[1]); }
L_26b1920:;
    c->r[5] = c->r[0];
L_26b1924:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[5] = 0x0u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_26b1144; }
L_26b1934:;
    c->r[0] = 0x768u;
    c->r[1] = 0x0u;
    c->r[2] = 0x104u;
    c->r[8] = c->r[4] + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x26b194cu; f_2850138(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b1970; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_26b197c; }
    c->r[5] = c->r[7];
    goto L_26b1b3c;
L_26b1970:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    c->r[0] = ~0x0u;
    goto L_26b1b48;
L_26b197c:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_26b19ec; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_26b19f4; }
    c->r[0] = 0x485ce0u;
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[0] = 0x26b19a0u + c->r[0];
    c->r[14] = 0x26b19a0u; f_28506d8(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_GE) { goto L_26b1a6c; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26b19b4u; f_285069c(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_26b19fc; }
    c->r[0] = c->r[9] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48c705u;
    c->r[2] = 0x26b19dcu + c->r[0];
    c->r[0] = c->r[13] + 0x150u;
    c->r[14] = 0x26b19e0u; f_283b33c(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x26b19e8u; f_28506a8(c);
    goto L_26b1a14;
L_26b19ec:;
    c->r[5] = c->r[6];
    goto L_26b1b3c;
L_26b19f4:;
    c->r[5] = c->r[7];
    goto L_26b1b3c;
L_26b19fc:;
    c->r[0] = 0x48c6d9u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    c->r[2] = 0x26b1a10u + c->r[0];
    c->r[0] = c->r[13] + 0x150u;
    c->r[14] = 0x26b1a14u; f_283b33c(c);
L_26b1a14:;
    c->r[0] = c->r[6];
    c->r[14] = 0x26b1a1cu; f_285069c(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_26b1a54; }
    c->r[0] = c->r[9] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48c69du;
    c->r[2] = 0x26b1a44u + c->r[0];
    c->r[0] = c->r[13] + 0x48u;
    c->r[14] = 0x26b1a48u; f_283b33c(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x26b1a50u; f_28506a8(c);
    goto L_26b1a6c;
L_26b1a54:;
    c->r[0] = 0x48c681u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[2] = 0x26b1a68u + c->r[0];
    c->r[0] = c->r[13] + 0x48u;
    c->r[14] = 0x26b1a6cu; f_283b33c(c);
L_26b1a6c:;
    c->r[0] = c->r[7];
    c->r[14] = 0x26b1a74u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b1ad4; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26b1a84u; f_285069c(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_26b1abc; }
    c->r[0] = c->r[9] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48c635u;
    c->r[2] = 0x26b1aacu + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1ab0u; f_283b33c(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x26b1ab8u; f_28506a8(c);
    goto L_26b1ad4;
L_26b1abc:;
    c->r[0] = 0x48c619u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    c->r[2] = 0x26b1ad0u + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1ad4u; f_283b33c(c);
L_26b1ad4:;
    c->r[0] = c->r[6];
    c->r[14] = 0x26b1adcu; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b1b3c; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26b1aecu; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26b1b24; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48c5cdu;
    c->r[2] = 0x26b1b14u + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1b18u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26b1b20u; f_28506a8(c);
    goto L_26b1b3c;
L_26b1b24:;
    c->r[0] = 0x48c5b1u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[2] = 0x26b1b38u + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1b3cu; f_283b33c(c);
L_26b1b3c:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_26b1b48:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x24u;
    c->r[3] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x26b1b70u; f_26afa9c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_26b1f68; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x150u;
    c->r[2] = 0x0u;
    c->r[14] = 0x26b1b8cu; f_285075c(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b1b94u; f_2850798(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b1c0c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = ~0x0u;
    c->r[9] = ~0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_26b1d08; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26b1bb8u; f_28506cc(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_GE) { goto L_26b1d08; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26b1bccu; f_285069c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26b1cf0; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48c4edu;
    c->r[2] = 0x26b1bf4u + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1bf8u; f_283b33c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x26b1c00u; f_28506a8(c);
    goto L_26b1d08;
L_26b1c0c:;
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x768u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b1c80; }
    c->r[1] = c->r[13] + 0x48u;
    c->r[2] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1c2cu; f_285075c(c);
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b1c80; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x0u;
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x76cu; ST32(ea, c->r[2]); } }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_26b1c80; }
    c->r[3] = 0x58u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[3] = c->r[4] + (c->r[1] << 2);
    c->r[3] = c->r[3] + 0x770u;
L_26b1c64:;
    c->r[7] = c->r[2] + 0x58u;
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[3] - 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    c->r[3] = c->r[3] + 0x8u;
    c->r[2] = c->r[2] + 0xb0u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_26b1c64; }
L_26b1c80:;
    c->r[1] = 0x4859e8u;
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[13] + 0x1cu;
    c->r[1] = 0x26b1c98u + c->r[1];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->r[14] = 0x26b1ca0u; f_2850810(c);
    c->r[6] = c->r[0];
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26b1f28; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b1f54; }
    c->r[0] = 0xeu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[11] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = 0x48c5a8u;
    c->r[0] = 0x26b1cd8u + c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48599cu;
    c->r[0] = 0x26b1ce4u + c->r[0];
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x22du;
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[0]); }
    goto L_26b1f54;
L_26b1cf0:;
    c->r[0] = 0x48c3e5u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[2] = 0x26b1d04u + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1d08u; f_283b33c(c);
L_26b1d08:;
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x768u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b1d34; }
    c->r[1] = c->r[13] + 0x48u;
    c->r[2] = 0x0u;
    c->r[14] = 0x26b1d2cu; f_285075c(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x76cu; ST32(ea, c->r[0]); }
L_26b1d34:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_26b1db8; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26b1d48u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b1db8; }
    c->r[0] = c->r[7];
    c->r[14] = 0x26b1d58u; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26b1da0; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48c361u;
    c->r[2] = 0x26b1d80u + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1d84u; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26b1d8cu; f_28506a8(c);
    goto L_26b1db8;
L_26b1da0:;
    c->r[0] = 0x48c335u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[7];
    c->r[2] = 0x26b1db4u + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1db8u; f_283b33c(c);
L_26b1db8:;
    c->r[1] = 0x4858b0u;
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[13] + 0x1cu;
    c->r[2] = c->r[6];
    c->r[1] = 0x26b1dd0u + c->r[1];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->r[14] = 0x26b1dd8u; f_2850810(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b1e1c; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_26b1e1c; }
    c->r[1] = 0xeu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48c478u;
    c->r[0] = 0x26b1e08u + c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48586cu;
    c->r[0] = 0x26b1e14u + c->r[0];
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x216u;
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[0]); }
L_26b1e1c:;
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x58u;
    { uint32_t ea = c->r[4] + 0x768u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b1e4c; }
    c->r[1] = c->r[13] + 0x48u;
    c->r[2] = 0x0u;
    c->r[14] = 0x26b1e40u; f_285075c(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x58u;
    { uint32_t ea = c->r[4] + 0x76cu; ST32(ea, c->r[0]); }
L_26b1e4c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_26b1ec0; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26b1e60u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b1ec0; }
    c->r[0] = c->r[6];
    c->r[14] = 0x26b1e70u; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26b1ea8; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x48c249u;
    c->r[2] = 0x26b1e98u + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1e9cu; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26b1ea4u; f_28506a8(c);
    goto L_26b1ec0;
L_26b1ea8:;
    c->r[0] = 0x48c22du;
    c->r[1] = 0x28u;
    c->r[3] = c->r[6];
    c->r[2] = 0x26b1ebcu + c->r[0];
    c->r[0] = c->r[13] + 0x268u;
    c->r[14] = 0x26b1ec0u; f_283b33c(c);
L_26b1ec0:;
    c->r[1] = 0x4857a8u;
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[13] + 0x1cu;
    c->r[2] = c->r[9];
    c->r[1] = 0x26b1ed8u + c->r[1];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->r[14] = 0x26b1ee0u; f_2850810(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26b1f28; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b1f54; }
    c->r[0] = 0xeu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x2d0000u;
    { uint32_t ea = c->r[11] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = 0x48c370u;
    c->r[0] = 0x26b1f10u + c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x485764u;
    c->r[0] = 0x26b1f1cu + c->r[0];
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x216u;
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[0]); }
    goto L_26b1f54;
L_26b1f28:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x1cu;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x26b1f48u; f_26afc4c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_26b1f68; }
L_26b1f54:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_26b1f68:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x290u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26b2014(Cpu *restrict c) {
    FN_ENTER(0x26b2014u);
L_26b2014:;
    (void)f_subs(c, c->r[0], 0x14u);
    if (COND_HI) { goto L_26b202c; }
    c->r[1] = 0x58b5a8u;
    c->r[1] = 0x26b2028u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    return;
L_26b202c:;
    c->r[0] = 0x48b627u;
    c->r[0] = 0x26b2038u + c->r[0];
    return;
}
void f_26b2040(Cpu *restrict c) {
    FN_ENTER(0x26b2040u);
L_26b2040:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26b2248; }
    c->r[0] = 0x48c251u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2060u + c->r[0];
    c->r[14] = 0x26b2060u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b2248; }
    c->r[0] = 0x48c242u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2078u + c->r[0];
    c->r[14] = 0x26b2078u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b2250; }
    c->r[0] = 0x48c235u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2090u + c->r[0];
    c->r[14] = 0x26b2090u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b2258; }
    c->r[0] = 0x48c222u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b20a8u + c->r[0];
    c->r[14] = 0x26b20a8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b2260; }
    c->r[0] = 0x48c211u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b20c0u + c->r[0];
    c->r[14] = 0x26b20c0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b2268; }
    c->r[0] = 0x48c207u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b20d8u + c->r[0];
    c->r[14] = 0x26b20d8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b2270; }
    c->r[0] = 0x48c1fcu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b20f0u + c->r[0];
    c->r[14] = 0x26b20f0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b2278; }
    c->r[0] = 0x48c1ecu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2108u + c->r[0];
    c->r[14] = 0x26b2108u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b2280; }
    c->r[0] = 0x48c1e3u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2120u + c->r[0];
    c->r[14] = 0x26b2120u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b2288; }
    c->r[0] = 0x48c1d6u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2138u + c->r[0];
    c->r[14] = 0x26b2138u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b2290; }
    c->r[0] = 0x48c1c9u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2150u + c->r[0];
    c->r[14] = 0x26b2150u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b2298; }
    c->r[0] = 0x48c1bau;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2168u + c->r[0];
    c->r[14] = 0x26b2168u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b22a0; }
    c->r[0] = 0x48c1aeu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2180u + c->r[0];
    c->r[14] = 0x26b2180u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b22a8; }
    c->r[0] = 0x48c1a2u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2198u + c->r[0];
    c->r[14] = 0x26b2198u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b22b0; }
    c->r[0] = 0x48c193u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b21b0u + c->r[0];
    c->r[14] = 0x26b21b0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b22b8; }
    c->r[0] = 0x48c187u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b21c8u + c->r[0];
    c->r[14] = 0x26b21c8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b22c0; }
    c->r[0] = 0x48c179u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b21e0u + c->r[0];
    c->r[14] = 0x26b21e0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b22c8; }
    c->r[0] = 0x48c16bu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b21f8u + c->r[0];
    c->r[14] = 0x26b21f8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b22d0; }
    c->r[0] = 0x48c15du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2210u + c->r[0];
    c->r[14] = 0x26b2210u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b22d8; }
    c->r[0] = 0x48c14fu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2228u + c->r[0];
    c->r[14] = 0x26b2228u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b22e0; }
    c->r[0] = 0x48c141u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b2240u + c->r[0];
    c->r[14] = 0x26b2240u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b22e8; }
L_26b2248:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b2250:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b2258:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b2260:;
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b2268:;
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b2270:;
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b2278:;
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b2280:;
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b2288:;
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b2290:;
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b2298:;
    c->r[0] = 0xau;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b22a0:;
    c->r[0] = 0xbu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b22a8:;
    c->r[0] = 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b22b0:;
    c->r[0] = 0xdu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b22b8:;
    c->r[0] = 0xeu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b22c0:;
    c->r[0] = 0xfu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b22c8:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b22d0:;
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b22d8:;
    c->r[0] = 0x12u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b22e0:;
    c->r[0] = 0x13u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b22e8:;
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
