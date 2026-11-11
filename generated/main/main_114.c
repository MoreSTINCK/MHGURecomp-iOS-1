#include "cpu.h"
#include "neon_rt.h"
void f_2daba4(Cpu *c);
void f_2dad24(Cpu *c);
void f_2dadf0(Cpu *c);
void f_2db3e0(Cpu *c);
void f_343894(Cpu *c);
void f_366b5c(Cpu *c);
void f_44def0(Cpu *c);
void f_4641d0(Cpu *c);
void f_46e43c(Cpu *c);
void f_46f0dc(Cpu *c);
void f_46f228(Cpu *c);
void f_5b5ac0(Cpu *c);
void f_761294(Cpu *c);
void f_761440(Cpu *c);
void f_8aa9b8(Cpu *c);
void f_8ad4a8(Cpu *c);
void f_8ad5b8(Cpu *c);
void f_8ad644(Cpu *c);
void f_8ad730(Cpu *c);
void f_15efe30(Cpu *c);
void f_8aa9b8(Cpu *restrict c) {
    FN_ENTER(0x8aa9b8u);
L_8aa9b8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x6cu;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4cu);
    if (COND_HI) { goto L_8ac94c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x8aa9dcu + 0x14u;
    c->r[6] = 0xffffu;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x30000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xfffc0000u;
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x8aab24u: goto L_8aab24; case 0x8aab44u: goto L_8aab44; case 0x8ab1a0u: goto L_8ab1a0; case 0x8ab3ccu: goto L_8ab3cc; case 0x8ab3ecu: goto L_8ab3ec; case 0x8ab484u: goto L_8ab484; case 0x8ab544u: goto L_8ab544; case 0x8ab5fcu: goto L_8ab5fc; case 0x8ab648u: goto L_8ab648; case 0x8ab6ecu: goto L_8ab6ec; case 0x8ab814u: goto L_8ab814; case 0x8aba3cu: goto L_8aba3c; case 0x8aba7cu: goto L_8aba7c; case 0x8aba9cu: goto L_8aba9c; case 0x8abafcu: goto L_8abafc; case 0x8abb8cu: goto L_8abb8c; case 0x8abbb4u: goto L_8abbb4; case 0x8abbd4u: goto L_8abbd4; case 0x8abbf4u: goto L_8abbf4; case 0x8abc14u: goto L_8abc14; case 0x8abc34u: goto L_8abc34; case 0x8abc50u: goto L_8abc50; case 0x8abc74u: goto L_8abc74; case 0x8abc94u: goto L_8abc94; case 0x8abcb4u: goto L_8abcb4; case 0x8abcd4u: goto L_8abcd4; case 0x8abcf4u: goto L_8abcf4; case 0x8abde0u: goto L_8abde0; case 0x8abdfcu: goto L_8abdfc; case 0x8abe18u: goto L_8abe18; case 0x8abe3cu: goto L_8abe3c; case 0x8abe5cu: goto L_8abe5c; case 0x8abe78u: goto L_8abe78; case 0x8abe98u: goto L_8abe98; case 0x8abeb4u: goto L_8abeb4; case 0x8abed4u: goto L_8abed4; case 0x8abef4u: goto L_8abef4; case 0x8abf14u: goto L_8abf14; case 0x8abf38u: goto L_8abf38; case 0x8abf5cu: goto L_8abf5c; case 0x8abf7cu: goto L_8abf7c; case 0x8abf9cu: goto L_8abf9c; case 0x8abfbcu: goto L_8abfbc; case 0x8abfdcu: goto L_8abfdc; case 0x8abffcu: goto L_8abffc; case 0x8ac01cu: goto L_8ac01c; case 0x8ac03cu: goto L_8ac03c; case 0x8ac05cu: goto L_8ac05c; case 0x8ac07cu: goto L_8ac07c; case 0x8ac09cu: goto L_8ac09c; case 0x8ac0c0u: goto L_8ac0c0; case 0x8ac0e0u: goto L_8ac0e0; case 0x8ac100u: goto L_8ac100; case 0x8ac120u: goto L_8ac120; case 0x8ac140u: goto L_8ac140; case 0x8ac160u: goto L_8ac160; case 0x8ac180u: goto L_8ac180; case 0x8ac1a0u: goto L_8ac1a0; case 0x8ac1c0u: goto L_8ac1c0; case 0x8ac1e0u: goto L_8ac1e0; case 0x8ac204u: goto L_8ac204; case 0x8ac224u: goto L_8ac224; case 0x8ac248u: goto L_8ac248; case 0x8ac268u: goto L_8ac268; case 0x8ac290u: goto L_8ac290; case 0x8ac2b0u: goto L_8ac2b0; case 0x8ac2d0u: goto L_8ac2d0; case 0x8ac2f0u: goto L_8ac2f0; case 0x8ac310u: goto L_8ac310; case 0x8ac330u: goto L_8ac330; case 0x8ac368u: goto L_8ac368; case 0x8ac8a8u: goto L_8ac8a8; case 0x8ac910u: goto L_8ac910; case 0x8ac93cu: goto L_8ac93c; case 0x8ac94cu: goto L_8ac94c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8aab24:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8aab34; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8aab34:;
    c->r[0] = 0xf9a54au;
    c->r[2] = 0x237u;
    c->r[1] = 0x8aab44u + c->r[0];
    goto L_8ac34c;
L_8aab44:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x6u;
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_HI) { goto L_8ac94c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x8aab60u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x8aab94u: goto L_8aab94; case 0x8ac94cu: goto L_8ac94c; case 0x8ac970u: goto L_8ac970; case 0x8aca10u: goto L_8aca10; case 0x8acb30u: goto L_8acb30; case 0x8acc9cu: goto L_8acc9c; case 0x8ace88u: goto L_8ace88; case 0x8ad100u: goto L_8ad100; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8aab94:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8aabac; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8aabac:;
    c->r[0] = 0x118e000u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x8aabbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aabc4u; f_4641d0(c);
    c->r[1] = 0x118f1dcu;
    c->r[0] = c->r[0] + 0x4u;
    c->r[5] = c->r[11];
    c->r[9] = c->r[4] + 0x18u;
    c->r[8] = c->r[4] + 0x28u;
    { uint32_t ea = 0x8aabe0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    c->r[3] = c->r[11];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD8(ea); c->r[3] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0xdu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xdu; ST8(ea, c->r[2]); }
    c->r[2] = c->r[7] | (c->r[2] << 8);
    { uint32_t ea = c->r[4] + 0x9u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[12] | (c->r[1] << 8);
    c->r[7] = c->r[6] | (c->r[3] << 8);
    c->r[2] = c->r[2] | (c->r[7] << 16);
    c->r[7] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); c->r[7] = c->r[7] + 0x2u; }
    c->r[2] = c->r[14] | (c->r[0] << 8);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[6]); }
    c->r[3] = c->r[11];
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[2] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); c->r[2] = c->r[2] + 0x2u; }
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[14]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD8(ea); c->r[3] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x15u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x11u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x15u; ST8(ea, c->r[2]); }
    c->r[2] = c->r[7] | (c->r[2] << 8);
    { uint32_t ea = c->r[4] + 0x11u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[12] | (c->r[1] << 8);
    c->r[7] = c->r[6] | (c->r[3] << 8);
    c->r[2] = c->r[2] | (c->r[7] << 16);
    c->r[7] = c->r[4] + 0x14u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); c->r[7] = c->r[7] + 0x2u; }
    c->r[2] = c->r[14] | (c->r[0] << 8);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[6]); }
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); c->r[2] = c->r[2] + 0x2u; }
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x19u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x1du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x21u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x25u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x25u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x21u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x19u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[3] = c->r[7] | (c->r[3] << 8);
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = c->r[7] | (c->r[6] << 8);
    c->r[3] = c->r[3] | (c->r[5] << 16);
    c->r[5] = c->r[4] + 0x24u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[3]); c->r[5] = c->r[5] + 0x2u; }
    c->r[3] = c->r[11];
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD8(ea); c->r[3] = ea; c->r[7] = v; }
    c->r[2] = c->r[7] | (c->r[2] << 8);
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[6] = c->r[7] | (c->r[3] << 8);
    c->r[2] = c->r[2] | (c->r[6] << 16);
    c->r[6] = c->r[4] + 0x20u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    c->r[2] = c->r[11];
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 8);
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[7] = c->r[3] | (c->r[2] << 8);
    c->r[1] = c->r[1] | (c->r[7] << 16);
    c->r[7] = c->r[4] + 0x1cu;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); c->r[7] = c->r[7] + 0x2u; }
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[2] | (c->r[0] << 8);
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[2] | (c->r[1] << 8);
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x2u; }
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[2]); }
    c->r[3] = c->r[11];
    { uint32_t ea = c->r[11] + 0x29u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x2du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x31u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x31u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x2du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x29u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x30u; uint32_t v = LD8(ea); c->r[3] = ea; c->r[7] = v; }
    c->r[2] = c->r[7] | (c->r[2] << 8);
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[5] = c->r[7] | (c->r[3] << 8);
    c->r[2] = c->r[2] | (c->r[5] << 16);
    c->r[5] = c->r[4] + 0x30u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    c->r[2] = c->r[11];
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 8);
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[7] = c->r[3] | (c->r[2] << 8);
    c->r[1] = c->r[1] | (c->r[7] << 16);
    c->r[7] = c->r[4] + 0x2cu;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); c->r[7] = c->r[7] + 0x2u; }
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[2] | (c->r[0] << 8);
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[2] | (c->r[1] << 8);
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x2u; }
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x34u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x35u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x36u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x36u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x37u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x37u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x38u; uint32_t v = LD8(ea); c->r[11] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD8(ea); c->r[11] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x3u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[10] = c->r[3] | (c->r[2] << 8);
    c->r[5] = c->r[14] | (c->r[1] << 8);
    c->r[14] = c->r[5] | (c->r[10] << 16);
    c->r[5] = c->r[4] + 0x3cu;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[14]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[1]); }
    c->r[2] = c->r[12] | (c->r[7] << 8);
    c->r[1] = c->r[6] | (c->r[0] << 8);
    { uint32_t ea = c->r[4] + 0x39u; ST8(ea, c->r[7]); }
    c->r[1] = c->r[2] | (c->r[1] << 16);
    c->r[2] = c->r[4] + 0x38u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); c->r[2] = c->r[2] + 0x2u; }
    c->r[1] = c->r[11] + 0x4u;
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[6]); }
    c->r[0] = c->r[4] + 0x40u;
    c->r[2] = 0x3cu;
    c->r[14] = 0x8aaef0u; f_15efe30(c);
    c->r[1] = c->r[11] + 0x40u;
    c->r[0] = c->r[4] + 0x7cu;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[1] = c->r[11] + 0x60u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[0] = c->r[4] + 0x9cu;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x80u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xbcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x82u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xbeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x83u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xbfu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[9]; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x19u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x19u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x1au; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1au; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x1bu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1bu; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1cu; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x1du; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1du; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x1eu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1eu; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x1fu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1fu; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x20u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x21u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x21u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x22u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x22u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x23u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x23u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x24u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x25u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x25u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x26u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x26u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x27u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { c->r[1] = 0x39u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x27u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4du);
    if (COND_EQ) { c->r[1] = 0x60u; }
    if (COND_EQ) { { uint32_t ea = c->r[8]; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x29u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4du);
    if (COND_EQ) { c->r[1] = 0x60u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x29u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x2au; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4du);
    if (COND_EQ) { c->r[1] = 0x60u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x2au; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x2bu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4du);
    if (COND_EQ) { c->r[1] = 0x60u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x2bu; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4du);
    if (COND_EQ) { c->r[1] = 0x60u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x2cu; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x2du; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4du);
    if (COND_EQ) { c->r[1] = 0x60u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x2du; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x2eu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4du);
    if (COND_EQ) { c->r[1] = 0x60u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x2eu; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x2fu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4du);
    if (COND_EQ) { c->r[1] = 0x60u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x2fu; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4du);
    if (COND_EQ) { c->r[1] = 0x60u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x30u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x31u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4du);
    if (COND_EQ) { c->r[1] = 0x60u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x31u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x32u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4du);
    if (COND_EQ) { c->r[1] = 0x60u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x32u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x33u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4du);
    if (COND_EQ) { c->r[1] = 0x60u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x33u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8ab180; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0x35u; ST8(ea, c->r[0]); }
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x11u);
    if (COND_CS) { c->r[0] = 0x10u; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x37u; ST8(ea, c->r[1]); }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x35u; ST8(ea, c->r[0]); } }
    (void)f_subs(c, c->r[1], 0xdu);
    if (COND_CS) { c->r[1] = 0xcu; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x37u; ST8(ea, c->r[1]); } }
    c->r[1] = c->r[4] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[1] + 0x17u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_8ab170; }
    { uint32_t ea = c->r[4] + 0x35u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1] + 0x16u; ST8(ea, c->r[0]); }
L_8ab170:;
    { uint32_t ea = c->r[4] + 0x37u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1] + 0x27u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
L_8ab180:;
    c->r[1] = 0xeff7u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffc70000u;
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0x8ab198u; f_44def0(c);
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ab1a0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_NE) { goto L_8ab1bc; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ab1bc:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x514u;
    c->r[5] = c->r[13] + 0x40u;
    c->r[0] = c->r[10] + c->r[0];
    c->r[1] = c->r[8] + 0x27cu;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x168u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x240u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec1c4cu;
    c->r[0] = 0x8ab218u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8ab21cu; f_8aa9b8(c);
    c->r[0] = 0x3u;
    c->r[4] = c->r[10] + 0x8u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x8u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0xec1c33u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[4]); }
    c->r[0] = 0x8ab250u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8ab254u; f_8aa9b8(c);
    c->r[0] = 0x4u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x248u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4d4u;
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec1c0cu;
    c->r[0] = 0x8ab290u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8ab294u; f_8aa9b8(c);
    c->r[0] = 0x118e0e8u;
    c->r[6] = c->r[10] + 0x18u;
    c->r[11] = 0xffffu;
    c->r[8] = 0x0u;
    { uint32_t ea = 0x8ab2acu + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_8ab2a8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x8ab2b4u; f_2daba4(c);
    (void)f_subs(c, c->r[7], c->r[11]);
    if (COND_EQ) { goto L_8ab2d4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = c->r[7];
    c->r[14] = 0x8ab2ccu; f_343894(c);
    c->r[1] = c->r[0];
    goto L_8ab320;
L_8ab2d4:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[8], 0x2u);
    { uint32_t ea = c->r[13] + 0x46u; ST16(ea, c->r[0]); }
    if (COND_EQ) { goto L_8ab2fc; }
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_EQ) { goto L_8ab304; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_8ab328; }
    c->r[0] = 0x16u;
    goto L_8ab308;
L_8ab2fc:;
    c->r[0] = 0x18u;
    goto L_8ab308;
L_8ab304:;
    c->r[0] = 0x17u;
L_8ab308:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = 0xffe0u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x44u; ST16(ea, c->r[0]); }
L_8ab320:;
    c->r[0] = c->r[6];
    c->r[14] = 0x8ab328u; f_2dadf0(c);
L_8ab328:;
    c->r[0] = c->r[5];
    c->r[14] = 0x8ab330u; f_2dad24(c);
    c->r[8] = c->r[8] + 0x1u;
    c->r[6] = c->r[6] + 0x2cu;
    c->r[4] = c->r[4] + 0x2u;
    (void)f_subs(c, c->r[8], 0x7u);
    if (COND_NE) { goto L_8ab2a8; }
    c->r[0] = 0x5u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4] + 0x254u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x4e0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec1b32u;
    c->r[0] = 0x8ab380u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8ab384u; f_8aa9b8(c);
    c->r[5] = c->r[13] + 0x40u;
    c->r[1] = c->r[10];
    c->r[2] = 0x4u;
    c->r[0] = c->r[5];
    c->r[14] = 0x8ab398u; f_46f228(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[10] + 0x4f0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x8ab3b0u; f_46f228(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x4f4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[4] + 0x278u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x8ab3c4u; f_46f0dc(c);
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ab3cc:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ab3dc; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ab3dc:;
    c->r[0] = 0xf93ac8u;
    c->r[2] = 0x124u;
    c->r[1] = 0x8ab3ecu + c->r[0];
    goto L_8ac34c;
L_8ab3ec:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ab3fc; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ab3fc:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_8ac94c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x8ab414u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x8ab43cu: goto L_8ab43c; case 0x8ac94cu: goto L_8ac94c; case 0x8ad22cu: goto L_8ad22c; case 0x8ad278u: goto L_8ad278; case 0x8ad30cu: goto L_8ad30c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8ab43c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ab484:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ab494; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ab494:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_8ac94c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x8ab4acu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x8ab4d4u: goto L_8ab4d4; case 0x8ac94cu: goto L_8ac94c; case 0x8ad29cu: goto L_8ad29c; case 0x8ad2acu: goto L_8ad2ac; case 0x8ad354u: goto L_8ad354; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8ab4d4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x9u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x9u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[7]); }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[6] = v; }
    c->r[2] = c->r[6] | (c->r[2] << 8);
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x3u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = c->r[6] | (c->r[7] << 8);
    c->r[2] = c->r[2] | (c->r[5] << 16);
    c->r[5] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[2] = c->r[2] | (c->r[3] << 8);
    goto L_8ab5d4;
L_8ab544:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ab554; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ab554:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_8ac94c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x8ab56cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x8ab594u: goto L_8ab594; case 0x8ac94cu: goto L_8ac94c; case 0x8ad2c4u: goto L_8ad2c4; case 0x8ad2e0u: goto L_8ad2e0; case 0x8ad3ccu: goto L_8ad3cc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8ab594:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[2] = c->r[3] | (c->r[2] << 8);
L_8ab5d4:;
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x4u;
    c->r[7] = c->r[3] | (c->r[0] << 8);
    c->r[2] = c->r[2] | (c->r[7] << 16);
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); c->r[1] = c->r[1] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[3]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ab5fc:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ab60c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ab60c:;
    c->r[0] = 0xf93adcu;
    c->r[5] = 0x0u;
    c->r[6] = 0x1bu;
    c->r[7] = 0x8ab620u + c->r[0];
L_8ab61c:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x1du;
    c->r[3] = 0x1bu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x8ab638u; f_8ad5b8(c);
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x1bu);
    if (COND_NE) { goto L_8ab61c; }
    goto L_8ac94c;
L_8ab648:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ab660; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ab660:;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
L_8ab668:;
    c->r[6] = (c->r[2] >> 5);
    c->r[5] = c->r[2] & 0x1fu;
    { uint32_t ea = c->r[1] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = sh_lsl(c->r[3], c->r[5]);
    { uint32_t r = c->r[4] & shc_lsl(c, c->r[3], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { c->r[5] = c->r[5] | c->r[7]; }
    if (COND_NE) { { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[5]); } }
    c->r[5] = c->r[1] + (c->r[6] << 2);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & c->r[7]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_8ab6a8; }
    c->r[6] = c->r[0] + (c->r[6] << 2);
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[5] | c->r[7];
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[7]); }
L_8ab6a8:;
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], 0x4du);
    if (COND_NE) { goto L_8ab668; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0xffffffe0u) | ((c->r[2] << 0) & 0x1fu);
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 5);
    c->r[3] = (c->r[3] & 0xfffffe1fu) | ((c->r[2] << 5) & 0x1e0u);
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] >> 12);
    c->r[3] = (c->r[3] & 0xffff0fffu) | ((c->r[1] << 12) & 0xf000u);
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ab6ec:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ab700; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ab700:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x5u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x8ab740u; f_761440(c);
    (void)f_subs(c, c->r[0], 0x1bu);
    if (COND_NE) { goto L_8ab758; }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x1cu;
    c->r[14] = 0x8ab758u; f_761294(c);
L_8ab758:;
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[14] = 0x8ab764u; f_761440(c);
    (void)f_subs(c, c->r[0], 0x1bu);
    if (COND_NE) { goto L_8ab77c; }
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[2] = 0x1cu;
    c->r[14] = 0x8ab77cu; f_761294(c);
L_8ab77c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[14] = 0x8ab788u; f_761440(c);
    (void)f_subs(c, c->r[0], 0x1bu);
    if (COND_NE) { goto L_8ab7a0; }
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[2] = 0x1cu;
    c->r[14] = 0x8ab7a0u; f_761294(c);
L_8ab7a0:;
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x8ab7acu; f_761440(c);
    (void)f_subs(c, c->r[0], 0x1bu);
    if (COND_NE) { goto L_8ab7c4; }
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[2] = 0x1cu;
    c->r[14] = 0x8ab7c4u; f_761294(c);
L_8ab7c4:;
    c->r[0] = c->r[5];
    c->r[1] = 0x4u;
    c->r[14] = 0x8ab7d0u; f_761440(c);
    (void)f_subs(c, c->r[0], 0x1bu);
    if (COND_NE) { goto L_8ab7e8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x4u;
    c->r[2] = 0x1cu;
    c->r[14] = 0x8ab7e8u; f_761294(c);
L_8ab7e8:;
    c->r[0] = c->r[5];
    c->r[1] = 0x5u;
    c->r[14] = 0x8ab7f4u; f_761440(c);
    (void)f_subs(c, c->r[0], 0x1bu);
    if (COND_NE) { goto L_8ac94c; }
    c->r[0] = c->r[5];
    c->r[1] = 0x5u;
    c->r[2] = 0x1cu;
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_761294(c);
L_8ab814:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ab82c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ab82c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[8] = 0xbu;
    c->r[9] = 0x3u;
    c->r[4] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x2u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x2u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec175cu;
    c->r[7] = 0x8ab878u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8ab87cu; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8ab8a8u; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0x6u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    c->r[4] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x6u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec1710u;
    c->r[7] = 0x8ab8dcu + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8ab8e0u; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8ab90cu; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0xau;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xau;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8ab938u; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0xcu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xcu;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8ab964u; f_8aa9b8(c);
    { uint32_t ea = c->r[6] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xfu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[8] = 0xau;
    c->r[9] = 0xeu;
    c->r[4] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[5] + 0xfu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x11u; ST8(ea, c->r[2]); }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    c->r[2] = c->r[3] | (c->r[7] << 8);
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[2] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); c->r[2] = c->r[2] + 0x2u; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x18u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x14u; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[6] + 0x15u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x18u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x15u; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[6] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x18u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x16u; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[6] + 0x17u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x18u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x17u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[6] + 0x18u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x18u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec15f0u;
    c->r[7] = 0x8aba14u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8aba18u; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0x24u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x24u;
L_8aba2c:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[1] = c->r[4];
    goto L_8abae4;
L_8aba3c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8aba54; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8aba54:;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8aba7c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8aba8c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8aba8c:;
    c->r[0] = 0xf9367cu;
    c->r[2] = 0xf12u;
    c->r[1] = 0x8aba9cu + c->r[0];
    goto L_8ac34c;
L_8aba9c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abab4; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abab4:;
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[2]); }
    c->r[2] = 0xbu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec153eu;
    c->r[0] = 0x8abae0u + c->r[0];
L_8abadc:;
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_8abae4:;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8abaf0u; f_8aa9b8(c);
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8abafc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_NE) { goto L_8abb18; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abb18:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[9] + 0x2au;
    c->r[4] = 0x0u;
    c->r[10] = 0xcu;
    c->r[11] = 0x12u;
    c->r[6] = c->r[13] + 0x40u;
    c->r[5] = c->r[0] + 0x2au;
    c->r[0] = 0xec14ebu;
    c->r[8] = 0x8abb40u + c->r[0];
L_8abb3c:;
    c->r[0] = c->r[5] + c->r[4];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + c->r[4];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x8abb68u; f_8aa9b8(c);
    c->r[4] = c->r[4] + 0x4u;
    (void)f_subs(c, c->r[4], 0x80u);
    if (COND_NE) { goto L_8abb3c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x2au;
    c->r[14] = 0x8abb84u; f_15efe30(c);
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8abb8c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abb9c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abb9c:;
    c->r[0] = 0xf95390u;
    c->r[2] = 0x48u;
    c->r[1] = 0x8abbacu + c->r[0];
    goto L_8ac960;
L_8abbb4:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abbc4; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abbc4:;
    c->r[0] = 0xf953b0u;
    c->r[2] = 0x32u;
    c->r[1] = 0x8abbd4u + c->r[0];
    goto L_8ac960;
L_8abbd4:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abbe4; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abbe4:;
    c->r[0] = 0xf953c2u;
    c->r[2] = 0x1cu;
    c->r[1] = 0x8abbf4u + c->r[0];
    goto L_8ac960;
L_8abbf4:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abc04; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abc04:;
    c->r[0] = 0xf953beu;
    c->r[2] = 0x9au;
    c->r[1] = 0x8abc14u + c->r[0];
    goto L_8ac960;
L_8abc14:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abc24; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abc24:;
    c->r[0] = 0xf95438u;
    c->r[2] = 0x5cu;
    c->r[1] = 0x8abc34u + c->r[0];
    goto L_8ac960;
L_8abc34:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abc44; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abc44:;
    c->r[0] = 0xf95478u;
    c->r[1] = 0x8abc50u + c->r[0];
    goto L_8abc68;
L_8abc50:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abc60; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abc60:;
    c->r[0] = 0xf9549au;
    c->r[1] = 0x8abc6cu + c->r[0];
L_8abc68:;
    c->r[0] = c->r[4];
    c->r[2] = 0x3eu;
    goto L_8ac964;
L_8abc74:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abc84; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abc84:;
    c->r[0] = 0xf954b0u;
    c->r[2] = 0x772u;
    c->r[1] = 0x8abc94u + c->r[0];
    goto L_8ac34c;
L_8abc94:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abca4; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abca4:;
    c->r[0] = 0xf96374u;
    c->r[2] = 0xbeu;
    c->r[1] = 0x8abcb4u + c->r[0];
    goto L_8ac960;
L_8abcb4:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abcc4; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abcc4:;
    c->r[0] = 0xf96412u;
    c->r[2] = 0xcau;
    c->r[1] = 0x8abcd4u + c->r[0];
    goto L_8ac960;
L_8abcd4:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abce4; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abce4:;
    c->r[0] = 0xf964bcu;
    c->r[2] = 0xc8u;
    c->r[1] = 0x8abcf4u + c->r[0];
    goto L_8ac960;
L_8abcf4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abd0c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abd0c:;
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0xcu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x9u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0xdu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0xeu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xbu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0xfu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x10u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xdu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x11u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x12u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xfu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x13u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x14u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x15u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x16u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x17u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
L_8abd7c:;
    c->r[6] = (c->r[2] >> 5);
    c->r[4] = c->r[2] & 0x1fu;
    c->r[5] = c->r[12] + (c->r[6] << 2);
    c->r[7] = sh_lsl(c->r[3], c->r[4]);
    { uint32_t ea = c->r[5] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[3], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_8abdb0; }
    c->r[0] = c->r[6];
    c->r[0] = c->r[0] & 0x7ffu;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x108u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[7];
    { uint32_t ea = c->r[0] + 0x108u; ST32(ea, c->r[4]); }
L_8abdb0:;
    { uint32_t ea = c->r[5] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[7]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_8abdd0; }
    c->r[6] = c->r[6] & 0x7ffu;
    c->r[0] = c->r[1] + (c->r[6] << 2);
    { uint32_t ea = c->r[0] + 0x114u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[6] | c->r[7];
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[7]); }
L_8abdd0:;
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], 0x56u);
    if (COND_NE) { goto L_8abd7c; }
    goto L_8ac94c;
L_8abde0:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abdf0; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abdf0:;
    c->r[0] = 0xf9647cu;
    c->r[1] = 0x8abdfcu + c->r[0];
    goto L_8ac0b4;
L_8abdfc:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abe0c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abe0c:;
    c->r[0] = 0xf96852u;
    c->r[1] = 0x8abe18u + c->r[0];
    goto L_8abe30;
L_8abe18:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abe28; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abe28:;
    c->r[0] = 0xf9695cu;
    c->r[1] = 0x8abe34u + c->r[0];
L_8abe30:;
    c->r[0] = c->r[4];
    c->r[2] = 0x93u;
    goto L_8ac350;
L_8abe3c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abe4c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abe4c:;
    c->r[0] = 0xf96a5au;
    c->r[2] = 0x7du;
    c->r[1] = 0x8abe5cu + c->r[0];
    goto L_8ac34c;
L_8abe5c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abe6c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abe6c:;
    c->r[0] = 0xf96b38u;
    c->r[1] = 0x8abe78u + c->r[0];
    goto L_8abf2c;
L_8abe78:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abe88; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abe88:;
    c->r[0] = 0xf96be6u;
    c->r[2] = 0x6du;
    c->r[1] = 0x8abe98u + c->r[0];
    goto L_8ac34c;
L_8abe98:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abea8; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abea8:;
    c->r[0] = 0xf96ca4u;
    c->r[1] = 0x8abeb4u + c->r[0];
    goto L_8abf50;
L_8abeb4:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abec4; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abec4:;
    c->r[0] = 0xf96d56u;
    c->r[2] = 0x65u;
    c->r[1] = 0x8abed4u + c->r[0];
    goto L_8ac34c;
L_8abed4:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abee4; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abee4:;
    c->r[0] = 0xf96e00u;
    c->r[2] = 0x87u;
    c->r[1] = 0x8abef4u + c->r[0];
    goto L_8ac34c;
L_8abef4:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abf04; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abf04:;
    c->r[0] = 0xf96eeeu;
    c->r[2] = 0x6bu;
    c->r[1] = 0x8abf14u + c->r[0];
    goto L_8ac34c;
L_8abf14:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abf24; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abf24:;
    c->r[0] = 0xf96fa8u;
    c->r[1] = 0x8abf30u + c->r[0];
L_8abf2c:;
    c->r[0] = c->r[4];
    c->r[2] = 0x67u;
    goto L_8ac350;
L_8abf38:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abf48; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abf48:;
    c->r[0] = 0xf97052u;
    c->r[1] = 0x8abf54u + c->r[0];
L_8abf50:;
    c->r[0] = c->r[4];
    c->r[2] = 0x69u;
    goto L_8ac350;
L_8abf5c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abf6c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abf6c:;
    c->r[0] = 0xf970fcu;
    c->r[2] = 0x77u;
    c->r[1] = 0x8abf7cu + c->r[0];
    goto L_8ac34c;
L_8abf7c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abf8c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abf8c:;
    c->r[0] = 0xf971cau;
    c->r[2] = 0x71u;
    c->r[1] = 0x8abf9cu + c->r[0];
    goto L_8ac34c;
L_8abf9c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abfac; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abfac:;
    c->r[0] = 0xf9728cu;
    c->r[2] = 0x63u;
    c->r[1] = 0x8abfbcu + c->r[0];
    goto L_8ac34c;
L_8abfbc:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abfcc; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abfcc:;
    c->r[0] = 0xf97332u;
    c->r[2] = 0x4fu;
    c->r[1] = 0x8abfdcu + c->r[0];
    goto L_8ac34c;
L_8abfdc:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8abfec; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8abfec:;
    c->r[0] = 0xf973b0u;
    c->r[2] = 0x4bu;
    c->r[1] = 0x8abffcu + c->r[0];
    goto L_8ac34c;
L_8abffc:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac00c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac00c:;
    c->r[0] = 0xf97426u;
    c->r[2] = 0x27bu;
    c->r[1] = 0x8ac01cu + c->r[0];
    goto L_8ac34c;
L_8ac01c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac02c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac02c:;
    c->r[0] = 0xf978fcu;
    c->r[2] = 0x271u;
    c->r[1] = 0x8ac03cu + c->r[0];
    goto L_8ac34c;
L_8ac03c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac04c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac04c:;
    c->r[0] = 0xf97dbeu;
    c->r[2] = 0x259u;
    c->r[1] = 0x8ac05cu + c->r[0];
    goto L_8ac34c;
L_8ac05c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac06c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac06c:;
    c->r[0] = 0xf98250u;
    c->r[2] = 0x245u;
    c->r[1] = 0x8ac07cu + c->r[0];
    goto L_8ac34c;
L_8ac07c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac08c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac08c:;
    c->r[0] = 0xf986bau;
    c->r[2] = 0x267u;
    c->r[1] = 0x8ac09cu + c->r[0];
    goto L_8ac34c;
L_8ac09c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac0ac; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac0ac:;
    c->r[0] = 0xf961c0u;
    c->r[1] = 0x8ac0b8u + c->r[0];
L_8ac0b4:;
    c->r[0] = c->r[4];
    c->r[2] = 0x1f9u;
    goto L_8ac350;
L_8ac0c0:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac0d0; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac0d0:;
    c->r[0] = 0xf98b44u;
    c->r[2] = 0x235u;
    c->r[1] = 0x8ac0e0u + c->r[0];
    goto L_8ac34c;
L_8ac0e0:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac0f0; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac0f0:;
    c->r[0] = 0xf993fcu;
    c->r[2] = 0x451u;
    c->r[1] = 0x8ac100u + c->r[0];
    goto L_8ac34c;
L_8ac100:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac110; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac110:;
    c->r[0] = 0xf99c7eu;
    c->r[2] = 0x3f3u;
    c->r[1] = 0x8ac120u + c->r[0];
    goto L_8ac34c;
L_8ac120:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac130; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac130:;
    c->r[0] = 0xf9a444u;
    c->r[2] = 0x3f7u;
    c->r[1] = 0x8ac140u + c->r[0];
    goto L_8ac34c;
L_8ac140:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac150; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac150:;
    c->r[0] = 0xf9ac12u;
    c->r[2] = 0x3bdu;
    c->r[1] = 0x8ac160u + c->r[0];
    goto L_8ac34c;
L_8ac160:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac170; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac170:;
    c->r[0] = 0xf9b36cu;
    c->r[2] = 0x2f5u;
    c->r[1] = 0x8ac180u + c->r[0];
    goto L_8ac34c;
L_8ac180:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac190; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac190:;
    c->r[0] = 0xf9b936u;
    c->r[2] = 0x301u;
    c->r[1] = 0x8ac1a0u + c->r[0];
    goto L_8ac34c;
L_8ac1a0:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac1b0; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac1b0:;
    c->r[0] = 0xf9bf18u;
    c->r[2] = 0x3ffu;
    c->r[1] = 0x8ac1c0u + c->r[0];
    goto L_8ac34c;
L_8ac1c0:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac1d0; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac1d0:;
    c->r[0] = 0xf9c6f6u;
    c->r[2] = 0x375u;
    c->r[1] = 0x8ac1e0u + c->r[0];
    goto L_8ac34c;
L_8ac1e0:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac1f0; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac1f0:;
    c->r[0] = 0xf9cdc0u;
    c->r[2] = 0x39fu;
    c->r[1] = 0x8ac200u + c->r[0];
    goto L_8ac34c;
L_8ac204:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac214; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac214:;
    c->r[0] = 0xf9d4dau;
    c->r[2] = 0x313u;
    c->r[1] = 0x8ac224u + c->r[0];
    goto L_8ac34c;
L_8ac224:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac234; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac234:;
    c->r[0] = 0xf9dae0u;
    c->r[2] = 0x3cdu;
    c->r[1] = 0x8ac244u + c->r[0];
    goto L_8ac34c;
L_8ac248:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac258; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac258:;
    c->r[0] = 0xf9e256u;
    c->r[2] = 0x3abu;
    c->r[1] = 0x8ac268u + c->r[0];
    goto L_8ac34c;
L_8ac268:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac278; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac278:;
    c->r[0] = 0xf9e98cu;
    c->r[2] = 0x25du;
    c->r[1] = 0x8ac288u + c->r[0];
    goto L_8ac34c;
L_8ac290:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac2a0; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac2a0:;
    c->r[0] = 0xf9ee1eu;
    c->r[2] = 0x24fu;
    c->r[1] = 0x8ac2b0u + c->r[0];
    goto L_8ac34c;
L_8ac2b0:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac2c0; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac2c0:;
    c->r[0] = 0xf9f29cu;
    c->r[2] = 0x14c7u;
    c->r[1] = 0x8ac2d0u + c->r[0];
    goto L_8ac34c;
L_8ac2d0:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac2e0; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac2e0:;
    c->r[0] = 0xfa1c0au;
    c->r[2] = 0x69fu;
    c->r[1] = 0x8ac2f0u + c->r[0];
    goto L_8ac34c;
L_8ac2f0:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac300; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac300:;
    c->r[0] = 0xfa2928u;
    c->r[2] = 0x3eu;
    c->r[1] = 0x8ac310u + c->r[0];
    goto L_8ac92c;
L_8ac310:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac320; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac320:;
    c->r[0] = 0xfa2a00u;
    c->r[2] = 0x27u;
    c->r[1] = 0x8ac330u + c->r[0];
    goto L_8ac34c;
L_8ac330:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac340; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac340:;
    c->r[0] = 0xfa2a2eu;
    c->r[2] = 0x181u;
    c->r[1] = 0x8ac350u + c->r[0];
L_8ac34c:;
    c->r[0] = c->r[4];
L_8ac350:;
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_8ad4a8(c);
L_8ac368:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_8ac388; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac388:;
    c->r[8] = 0x15u;
    c->r[6] = 0x3u;
    c->r[0] = 0x7d4u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x854u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec0c6bu;
    c->r[0] = 0x8ac3d4u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8ac3d8u; f_8aa9b8(c);
    c->r[0] = 0x7d6u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x856u;
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec0c47u;
    c->r[0] = 0x8ac410u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8ac414u; f_8aa9b8(c);
    c->r[0] = 0x7d8u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x858u;
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec0c23u;
    c->r[0] = 0x8ac44cu + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8ac450u; f_8aa9b8(c);
    c->r[0] = 0x16u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x826u;
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x85au;
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec0bf7u;
    c->r[0] = 0x8ac490u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8ac494u; f_8aa9b8(c);
    { uint32_t ea = c->r[5] + 0x827u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x85eu;
    { uint32_t ea = c->r[7] + 0x85bu; ST8(ea, c->r[0]); }
    c->r[0] = 0x7dau;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x7dcu;
    c->r[1] = 0x862u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x7deu;
    c->r[1] = 0x864u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x7e0u;
    c->r[1] = 0x868u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x7e2u;
    c->r[1] = 0x86au;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x7ecu;
    { uint32_t ea = c->r[5] + 0x7e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + c->r[1];
    { uint32_t ea = c->r[7] + 0x874u; ST32(ea, c->r[0]); }
    c->r[0] = 0x879u;
    c->r[0] = c->r[7] + c->r[0];
L_8ac504:;
    c->r[2] = c->r[1];
    c->r[7] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[2] + c->r[4]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[7] - 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; ST8(ea, c->r[2]); }
    c->r[4] = c->r[4] + 0x2u;
    (void)f_subs(c, c->r[4], 0x38u);
    if (COND_NE) { goto L_8ac504; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x8bau;
    c->r[5] = 0x842u;
    c->r[4] = 0x844u;
    c->r[12] = 0x846u;
    c->r[14] = 0x8d0u;
    c->r[8] = 0x848u;
    c->r[9] = 0x84au;
    c->r[10] = 0x84cu;
    c->r[3] = c->r[1] + c->r[0];
    c->r[1] = 0x0u;
L_8ac554:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x8c0u;
    c->r[11] = c->r[0] + c->r[1];
    c->r[0] = 0x830u;
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); c->r[0] = ea; }
    c->r[2] = 0x832u;
    { uint32_t ea = c->r[11] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[2]); }
    c->r[2] = 0x834u;
    { uint32_t ea = c->r[11] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[2]); }
    c->r[2] = 0x836u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[7] = c->r[7] + c->r[1];
    c->r[1] = c->r[1] + 0x1eu;
    { uint32_t ea = c->r[7] + c->r[6]; ST16(ea, c->r[2]); }
    c->r[2] = 0x838u;
    (void)f_subs(c, c->r[1], 0x5au);
    { uint32_t ea = c->r[11] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[2]); }
    c->r[2] = 0x83au;
    { uint32_t ea = c->r[11] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[2]); }
    c->r[2] = 0x83cu;
    { uint32_t ea = c->r[11] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[2]); }
    c->r[2] = 0x83eu;
    { uint32_t ea = c->r[11] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[2]); }
    c->r[2] = 0x840u;
    { uint32_t ea = c->r[11] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + c->r[5]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + c->r[4]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + c->r[12]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[14]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + c->r[8]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + c->r[9]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1au; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + c->r[10]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST16(ea, c->r[2]); }
    if (COND_NE) { goto L_8ac554; }
    c->r[0] = 0x0u;
    c->r[1] = 0x5u;
    c->r[9] = 0x4bu;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1224u;
    c->r[8] = c->r[7] + c->r[0];
    c->r[0] = 0x1108u;
    c->r[5] = c->r[6] + c->r[0];
    c->r[0] = 0xebcbe8u;
    c->r[6] = c->r[13] + 0x40u;
    c->r[0] = 0x8ac64cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x118e290u;
    { uint32_t ea = 0x8ac658u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x118c714u;
    { uint32_t ea = 0x8ac660u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0xec0a5cu;
    c->r[0] = 0x8ac668u + c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec0a5du;
    c->r[0] = 0x8ac674u + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xec0a1cu;
    c->r[0] = 0x8ac680u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
L_8ac680:;
    c->r[7] = 0x0u;
L_8ac684:;
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x46u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8ac6c0u; f_8aa9b8(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x8ac6ccu; f_366b5c(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8ac6d8u; f_5b5ac0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8ac810; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xffffu;
    c->r[4] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xfffc0000u;
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[2];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[8] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & c->r[4];
    c->r[4] = 0x0u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 18) & 0x7u;
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_EQ) { c->r[1] = 0xeu; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 21) & 0x7u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[4]); }
    c->r[4] = 0x5u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[6];
    (void)f_subs(c, c->r[0], 0x7u);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[4]); }
    if (COND_EQ) { c->r[0] = 0xeu; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8ac784u; f_8aa9b8(c);
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8ac7b4u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[2] = c->r[2] + (c->r[2] << 3);
    c->r[0] = c->r[7] + (c->r[0] << 2);
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0xfc03ffffu) | ((c->r[2] << 18) & 0x3fc0000u);
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] >> 26);
    c->r[1] = (c->r[1] & 0xe3ffffffu) | ((c->r[3] << 26) & 0x1c000000u);
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 29);
    c->r[1] = (c->r[1] & 0x1fffffffu) | ((c->r[2] << 29) & 0xe0000000u);
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    goto L_8ac860;
L_8ac810:;
    c->r[0] = 0x4au;
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x17u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[7] + (c->r[0] << 2);
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[7] + (c->r[0] << 2);
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8ac860u; f_8aa9b8(c);
L_8ac860:;
    c->r[7] = c->r[7] + 0x4u;
    c->r[1] = 0x5u;
    (void)f_subs(c, c->r[7], 0x14u);
    if (COND_NE) { goto L_8ac684; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x1eu);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    if (COND_CC) { goto L_8ac680; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1450u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x18b4u;
    { uint32_t ea = c->r[2] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ac8a8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac8c0; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac8c0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] & c->r[6];
    c->r[3] = c->r[3] & c->r[7];
    c->r[2] = c->r[3] | c->r[2];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] >> 18);
    c->r[2] = (c->r[2] & 0xfc03ffffu) | ((c->r[3] << 18) & 0x3fc0000u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] >> 26);
    c->r[2] = (c->r[2] & 0xe3ffffffu) | ((c->r[3] << 26) & 0x1c000000u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] >> 29);
    c->r[2] = (c->r[2] & 0x1fffffffu) | ((c->r[1] << 29) & 0xe0000000u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ac910:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac920; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac920:;
    c->r[0] = 0xfa2750u;
    c->r[2] = 0x12u;
    c->r[1] = 0x8ac930u + c->r[0];
L_8ac92c:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_8ad730(c);
L_8ac93c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac954; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_8ac954; }
L_8ac94c:;
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ac954:;
    c->r[0] = 0xfa2764u;
    c->r[2] = 0x12cu;
    c->r[1] = 0x8ac964u + c->r[0];
L_8ac960:;
    c->r[0] = c->r[4];
L_8ac964:;
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_8ad644(c);
L_8ac970:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ac988; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ac988:;
    c->r[0] = 0xec050du;
    c->r[4] = c->r[13] + 0x40u;
    c->r[8] = 0x2u;
    c->r[9] = 0x3u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[7] = 0x8ac9bcu + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8ac9c0u; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0x2u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x2u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8ac9ecu; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x4u;
    goto L_8aba2c;
L_8aca10:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8aca28; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8aca28:;
    c->r[0] = c->r[4];
    c->r[14] = 0x8aca30u; f_46e43c(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x168u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x240u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec0480u;
    c->r[0] = 0x8aca68u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8aca6cu; f_8aa9b8(c);
    c->r[0] = 0x3u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x8u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec03e3u;
    c->r[0] = 0x8acaa0u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8acaa4u; f_8aa9b8(c);
    c->r[0] = 0x4u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x248u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4d4u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec03bcu;
    c->r[0] = 0x8acae0u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8acae4u; f_8aa9b8(c);
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x254u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4e0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec03a2u;
    c->r[0] = 0x8acb10u + c->r[0];
    goto L_8acc2c;
L_8acb30:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8acb48; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8acb48:;
    c->r[0] = c->r[4];
    c->r[14] = 0x8acb50u; f_46e43c(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x168u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x240u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec02dcu;
    c->r[0] = 0x8acb88u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8acb8cu; f_8aa9b8(c);
    c->r[0] = 0x3u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x8u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec02c3u;
    c->r[0] = 0x8acbc0u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8acbc4u; f_8aa9b8(c);
    c->r[0] = 0x4u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x248u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4d4u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec029cu;
    c->r[0] = 0x8acc00u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8acc04u; f_8aa9b8(c);
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x254u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4e0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec0282u;
    c->r[0] = 0x8acc30u + c->r[0];
L_8acc2c:;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8acc40u; f_8aa9b8(c);
    { uint32_t ea = c->r[5] + 0x278u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x8acc4cu; f_46f0dc(c);
    c->r[0] = 0x27au;
    c->r[1] = 0x506u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = c->r[5] + 0x27cu;
    c->r[0] = 0x514u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8acc9c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8accb4; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8accb4:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[8] = 0xbu;
    c->r[9] = 0x3u;
    c->r[4] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[1] = (c->r[1] & 0xffffffe0u) | ((c->r[0] << 0) & 0x1fu);
    c->r[0] = 0xfc1fu;
    { uint32_t ea = c->r[5] + 0x4u; ST16(ea, c->r[1]); }
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x1fu;
    c->r[0] = c->r[0] | (c->r[1] << 5);
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[5] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x6u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0xcu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xau;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec01e8u;
    c->r[7] = 0x8acd20u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8acd24u; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0xeu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xcu;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8acd50u; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0x10u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xeu;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8acd7cu; f_8aa9b8(c);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x14u);
    if (COND_EQ) { goto L_8ad424; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_8ad424; }
    c->r[8] = 0x4cu;
    c->r[9] = 0x1u;
    c->r[0] = c->r[6] + 0x14u;
    c->r[4] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x10u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec0156u;
    c->r[7] = 0x8acdccu + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8acdd0u; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0x15u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x11u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8acdfcu; f_8aa9b8(c);
    { uint32_t ea = c->r[6] + 0x16u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST8(ea, c->r[0]); }
    c->r[0] = 0xbu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x1au;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x16u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec011au;
    c->r[0] = 0x8ace38u + c->r[0];
    goto L_8abadc;
L_8ace88:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_8acea8; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8acea8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[11] = 0x3u;
    c->r[10] = c->r[13] + 0x40u;
    c->r[9] = 0xbu;
    c->r[0] = c->r[4];
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x34u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x32u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x32u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2eu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2au; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x36u; ST16(ea, c->r[0]); }
    c->r[0] = 0xec0057u;
    c->r[5] = 0x8acf24u + c->r[0];
L_8acf20:;
    c->r[6] = c->r[4] + c->r[7];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[6] + 0x38u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + c->r[7];
    c->r[0] = c->r[8] + 0x38u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x8acf58u; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0x3au;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x3au;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x8acf84u; f_8aa9b8(c);
    c->r[0] = c->r[6] + 0x3cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x3cu;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x8acfb4u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[7] + 0x6u;
    (void)f_subs(c, c->r[7], 0x2au);
    if (COND_NE) { goto L_8acf20; }
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[8] = 0x2u;
    c->r[9] = 0x1u;
    c->r[5] = c->r[13] + 0x40u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[6] + 0x7du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x78u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x63u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x7eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x7du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x79u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x7fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x7eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x7au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x65u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x80u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x7fu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x7bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x66u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x81u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x7cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x81u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x82u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x82u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x83u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xebff2fu;
    c->r[7] = 0x8ad080u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8ad084u; f_8aa9b8(c);
    c->r[0] = c->r[4] + 0x83u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x84u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8ad0b0u; f_8aa9b8(c);
    c->r[0] = c->r[4] + 0x84u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x85u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    goto L_8abae4;
L_8ad100:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_8ad118; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_8ac94c; }
L_8ad118:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x2au;
    c->r[14] = 0x8ad128u; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x2cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2au; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2eu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[4] + 0x2eu; ST16(ea, c->r[0]); }
    c->r[0] = 0x118c22cu;
    { uint32_t ea = c->r[4] + 0x30u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x33u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x2au; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = 0x8ad168u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8ad16cu; f_343894(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8ad18c; }
    c->r[0] = c->r[13] + 0x3cu;
    c->r[2] = 0xffu;
    c->r[14] = 0x8ad184u; f_2db3e0(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
L_8ad18c:;
    c->r[0] = 0x118c1e8u;
    { uint32_t ea = c->r[4] + 0x31u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[6]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = 0x8ad1acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8ad1b0u; f_343894(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8ad1d0; }
    c->r[0] = c->r[13] + 0x3cu;
    c->r[2] = 0xffu;
    c->r[14] = 0x8ad1c8u; f_2db3e0(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
L_8ad1d0:;
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x32u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x35u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x118c19cu;
    { uint32_t ea = c->r[4] + 0x2eu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = 0x8ad1f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8ad1fcu; f_343894(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8ac94c; }
    c->r[0] = c->r[13] + 0x3cu;
    c->r[2] = 0xffu;
    c->r[14] = 0x8ad214u; f_2db3e0(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ad22c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xau; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xau; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST16(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ad278:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 12u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); c->r[1] = c->r[1] + 12u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ad29c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x18u;
    goto L_8ad2d0;
L_8ad2ac:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[1] = c->r[1] + 24u; }
    goto L_8ad42c;
L_8ad2c4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x12u;
L_8ad2d0:;
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_15efe30(c);
L_8ad2e0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ad30c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ad354:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ad3cc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8ad424:;
    c->r[0] = c->r[6] + 0x14u;
    c->r[1] = c->r[5] + 0x10u;
L_8ad42c:;
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
