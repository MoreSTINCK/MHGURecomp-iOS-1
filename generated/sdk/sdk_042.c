#include "cpu.h"
#include "neon_rt.h"
void f_26b2344(Cpu *restrict c) {
    FN_ENTER(0x26b2344u);
L_26b2344:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[2] = 0xe0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1210000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x9u, c->r[1]);
    if (COND_LT) { goto L_26b2408; }
    c->r[2] = 0x607u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_GE) { goto L_26b24b4; }
    c->r[3] = 0x273fu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xa530000u;
    c->r[2] = f_subs(c, c->r[3], c->r[0]);
    c->r[2] = f_sbcs(c, 0x3u, c->r[1]);
    if (COND_LT) { goto L_26b25e4; }
    c->r[2] = 0x201fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x2u, c->r[1]);
    if (COND_GE) { goto L_26b27fc; }
    c->r[2] = f_subs(c, c->r[3], c->r[0]);
    c->r[2] = f_sbcs(c, 0x2u, c->r[1]);
    if (COND_GE) { goto L_26b2b84; }
    c->r[2] = 0x201fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x3u, c->r[1]);
    if (COND_LT) { goto L_26b3170; }
    c->r[2] = 0x211fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x3u, c->r[1]);
    if (COND_LT) { goto L_26b3ae8; }
    c->r[2] = 0x2740u;
    c->r[3] = c->r[1] ^ 0x2u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b438c; }
    c->r[2] = 0x2020u;
    c->r[1] = c->r[1] ^ 0x3u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48c1e2u; }
    if (COND_EQ) { c->r[0] = 0x26b2404u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2408:;
    c->r[2] = 0x407u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[3] = f_subs(c, c->r[2], c->r[0]);
    c->r[3] = f_sbcs(c, 0xdu, c->r[1]);
    if (COND_GE) { goto L_26b2550; }
    c->r[3] = 0xf0fu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x9040000u;
    c->r[3] = f_subs(c, c->r[3], c->r[0]);
    c->r[3] = f_sbcs(c, 0xfu, c->r[1]);
    if (COND_LT) { goto L_26b2664; }
    c->r[3] = 0xe0fu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x8440000u;
    c->r[3] = f_subs(c, c->r[3], c->r[0]);
    c->r[3] = f_sbcs(c, 0xeu, c->r[1]);
    if (COND_GE) { goto L_26b2870; }
    c->r[3] = 0xf0fu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x9200000u;
    c->r[3] = f_subs(c, c->r[3], c->r[0]);
    c->r[3] = f_sbcs(c, 0xeu, c->r[1]);
    if (COND_GE) { goto L_26b2be4; }
    c->r[2] = 0xf0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xfu, c->r[1]);
    if (COND_LT) { goto L_26b31bc; }
    c->r[2] = 0x221fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8140000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xfu, c->r[1]);
    if (COND_LT) { goto L_26b3b1c; }
    c->r[2] = c->r[0] ^ 0xf10u;
    c->r[1] = c->r[1] ^ 0xeu;
    c->r[2] = c->r[2] ^ 0x9200000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b439c; }
    c->r[2] = 0x1010u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48c67du; }
    if (COND_EQ) { c->r[0] = 0x26b24b0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b24b4:;
    c->r[2] = 0x507u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x2000000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_GE) { goto L_26b26f0; }
    c->r[2] = 0x303u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa000000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_GE) { goto L_26b28e0; }
    c->r[2] = 0x180fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa0a0000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_GE) { goto L_26b2c3c; }
    c->r[2] = 0x140fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b3208; }
    c->r[2] = 0x211fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa0a0000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b3b58; }
    c->r[2] = 0x1810u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa0a0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b43a8; }
    c->r[2] = 0x1918u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa0a0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48bf01u; }
    if (COND_EQ) { c->r[0] = 0x26b254cu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2550:;
    c->r[3] = 0x90fu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xa500000u;
    c->r[3] = f_subs(c, c->r[3], c->r[0]);
    c->r[3] = f_sbcs(c, 0xau, c->r[1]);
    if (COND_GE) { goto L_26b2774; }
    c->r[2] = 0x70fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[3] = f_subs(c, c->r[2], c->r[0]);
    c->r[3] = f_sbcs(c, 0xcu, c->r[1]);
    if (COND_GE) { goto L_26b2954; }
    c->r[3] = 0x241fu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x8140000u;
    c->r[3] = f_subs(c, c->r[3], c->r[0]);
    c->r[3] = f_sbcs(c, 0xdu, c->r[1]);
    if (COND_GE) { goto L_26b2c9c; }
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xdu, c->r[1]);
    if (COND_LT) { goto L_26b3254; }
    c->r[2] = 0xf0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xdu, c->r[1]);
    if (COND_LT) { goto L_26b3b90; }
    c->r[2] = 0x2420u;
    c->r[1] = c->r[1] ^ 0xdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8140000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b43b4; }
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48c437u; }
    if (COND_EQ) { c->r[0] = 0x26b25e0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b25e4:;
    c->r[14] = 0x231fu;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x60a0000u;
    c->r[2] = f_subs(c, c->r[14], c->r[0]);
    c->r[2] = f_sbcs(c, 0x6u, c->r[1]);
    if (COND_GE) { goto L_26b29c4; }
    c->r[12] = 0x673fu;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x530000u;
    c->r[2] = f_subs(c, c->r[12], c->r[0]);
    c->r[2] = f_sbcs(c, 0x7u, c->r[1]);
    if (COND_GE) { goto L_26b2d00; }
    c->r[2] = 0x211fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x7u, c->r[1]);
    if (COND_LT) { goto L_26b32a0; }
    c->r[2] = f_subs(c, c->r[14], c->r[0]);
    c->r[2] = f_sbcs(c, 0x7u, c->r[1]);
    if (COND_LT) { goto L_26b3bcc; }
    c->r[2] = 0x6740u;
    c->r[1] = c->r[1] ^ 0x7u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b43c0; }
    c->r[2] = 0x2020u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48c066u; }
    if (COND_EQ) { c->r[0] = 0x26b2660u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2664:;
    c->r[2] = 0xc0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x11u, c->r[1]);
    if (COND_GE) { goto L_26b2a2c; }
    c->r[2] = 0xd0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[3] = f_subs(c, c->r[2], c->r[0]);
    c->r[3] = f_sbcs(c, 0x12u, c->r[1]);
    if (COND_GE) { goto L_26b2d5c; }
    c->r[3] = 0xb0fu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x9210000u;
    c->r[3] = f_subs(c, c->r[3], c->r[0]);
    c->r[3] = f_sbcs(c, 0x13u, c->r[1]);
    if (COND_LT) { goto L_26b32e4; }
    c->r[2] = 0xa0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x13u, c->r[1]);
    if (COND_LT) { goto L_26b3c08; }
    c->r[2] = 0xd10u;
    c->r[3] = c->r[1] ^ 0x12u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b43cc; }
    c->r[2] = 0x408u;
    c->r[1] = c->r[1] ^ 0x13u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48c505u; }
    if (COND_EQ) { c->r[0] = 0x26b26ecu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b26f0:;
    c->r[2] = 0x273fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b2aa4; }
    c->r[2] = 0xe0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x490000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b2db8; }
    c->r[2] = 0x1a17u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x0u, c->r[1]);
    if (COND_GE) { goto L_26b3328; }
    c->r[2] = 0x507u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x0u, c->r[1]);
    if (COND_LT) { goto L_26b3c3c; }
    c->r[2] = 0x1a18u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b43d8; }
    c->r[2] = 0x1c20u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48c5bdu; }
    if (COND_EQ) { c->r[0] = 0x26b2770u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2774:;
    c->r[3] = 0x407u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x8240000u;
    c->r[3] = f_subs(c, c->r[3], c->r[0]);
    c->r[3] = f_sbcs(c, 0xau, c->r[1]);
    if (COND_LT) { goto L_26b2b18; }
    c->r[2] = 0x211fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xau, c->r[1]);
    if (COND_LT) { goto L_26b2e18; }
    c->r[2] = 0x100u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x9u, c->r[1]);
    if (COND_GE) { goto L_26b3360; }
    c->r[2] = 0x303u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x9u, c->r[1]);
    if (COND_LT) { goto L_26b3c78; }
    c->r[2] = 0x101u;
    c->r[1] = c->r[1] ^ 0x9u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b43e8; }
    c->r[2] = 0x202u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48c0fdu; }
    if (COND_EQ) { c->r[0] = 0x26b27f8u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b27fc:;
    c->r[2] = 0x211fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xad10000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b2e78; }
    c->r[2] = 0x180fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_GE) { goto L_26b33a8; }
    c->r[2] = 0x211fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b3cac; }
    c->r[2] = 0x1810u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b43f4; }
    c->r[2] = 0x1918u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48bbd8u; }
    if (COND_EQ) { c->r[0] = 0x26b286cu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2870:;
    c->r[2] = 0xe0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xeu, c->r[1]);
    if (COND_LT) { goto L_26b2ed8; }
    c->r[2] = 0x407u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xdu, c->r[1]);
    if (COND_GE) { goto L_26b33f8; }
    c->r[2] = 0x100fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xdu, c->r[1]);
    if (COND_LT) { goto L_26b3ce8; }
    c->r[2] = 0x408u;
    c->r[1] = c->r[1] ^ 0xdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4400; }
    c->r[0] = c->r[0] ^ 0xf10u;
    c->r[0] = c->r[0] ^ 0x9200000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48c168u; }
    if (COND_EQ) { c->r[0] = 0x26b28dcu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b28e0:;
    c->r[2] = 0x140fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b2f38; }
    c->r[2] = 0x170fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x60a0000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_GE) { goto L_26b3444; }
    c->r[2] = 0x211fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x60a0000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b3d28; }
    c->r[2] = 0x1710u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x60a0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b440c; }
    c->r[2] = 0x1810u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x60a0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48ba87u; }
    if (COND_EQ) { c->r[0] = 0x26b2950u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2954:;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xbu, c->r[1]);
    if (COND_LT) { goto L_26b2f98; }
    c->r[2] = 0x1917u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xau, c->r[1]);
    if (COND_GE) { goto L_26b3490; }
    c->r[2] = 0xe0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xbu, c->r[1]);
    if (COND_LT) { goto L_26b3d60; }
    c->r[2] = 0x1918u;
    c->r[3] = c->r[1] ^ 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4418; }
    c->r[2] = 0x710u;
    c->r[1] = c->r[1] ^ 0xbu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48bffcu; }
    if (COND_EQ) { c->r[0] = 0x26b29c0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b29c4:;
    c->r[2] = 0x211fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x4u, c->r[1]);
    if (COND_LT) { goto L_26b2ffc; }
    c->r[2] = 0x273fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x4u, c->r[1]);
    if (COND_GE) { goto L_26b34d8; }
    c->r[2] = f_subs(c, c->r[14], c->r[0]);
    c->r[2] = f_sbcs(c, 0x4u, c->r[1]);
    if (COND_LT) { goto L_26b3d9c; }
    c->r[2] = c->r[0] ^ 0x2740u;
    c->r[1] = c->r[1] ^ 0x4u;
    c->r[2] = c->r[2] ^ 0x530000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4424; }
    c->r[2] = 0x2020u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48bbfcu; }
    if (COND_EQ) { c->r[0] = 0x26b2a28u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2a2c:;
    c->r[2] = 0xb0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x10u, c->r[1]);
    if (COND_LT) { goto L_26b305c; }
    c->r[2] = 0x100fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xfu, c->r[1]);
    if (COND_GE) { goto L_26b352c; }
    c->r[2] = 0xa0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x10u, c->r[1]);
    if (COND_LT) { goto L_26b3dd4; }
    c->r[2] = 0x1010u;
    c->r[3] = c->r[1] ^ 0xfu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4434; }
    c->r[2] = 0x408u;
    c->r[1] = c->r[1] ^ 0x10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48c130u; }
    if (COND_EQ) { c->r[0] = 0x26b2aa0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2aa4:;
    c->r[2] = 0x100u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1240000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b30b8; }
    c->r[2] = 0x150fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_GE) { goto L_26b3574; }
    c->r[2] = 0x201fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b3e0c; }
    c->r[2] = 0x1510u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4440; }
    c->r[2] = 0x1610u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b8f0u; }
    if (COND_EQ) { c->r[0] = 0x26b2b14u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2b18:;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xau, c->r[1]);
    if (COND_LT) { goto L_26b3114; }
    c->r[2] = 0x70fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xau, c->r[1]);
    if (COND_GE) { goto L_26b35c0; }
    c->r[2] = 0x221fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8840000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xau, c->r[1]);
    if (COND_LT) { goto L_26b3e48; }
    c->r[2] = 0x710u;
    c->r[1] = c->r[1] ^ 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b444c; }
    c->r[2] = 0xe10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48bde8u; }
    if (COND_EQ) { c->r[0] = 0x26b2b80u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2b84:;
    c->r[2] = 0x201fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x2u, c->r[1]);
    if (COND_GE) { goto L_26b360c; }
    c->r[2] = 0x231fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x2u, c->r[1]);
    if (COND_LT) { goto L_26b3e80; }
    c->r[2] = 0x2020u;
    c->r[1] = c->r[1] ^ 0x2u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4458; }
    c->r[2] = 0x2320u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x60a0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b9a3u; }
    if (COND_EQ) { c->r[0] = 0x26b2be0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2be4:;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xeu, c->r[1]);
    if (COND_GE) { goto L_26b3658; }
    c->r[2] = 0x100fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xeu, c->r[1]);
    if (COND_LT) { goto L_26b3ebc; }
    c->r[2] = 0x408u;
    c->r[1] = c->r[1] ^ 0xeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4464; }
    c->r[2] = 0xf10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48bec3u; }
    if (COND_EQ) { c->r[0] = 0x26b2c38u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2c3c:;
    c->r[2] = 0x1c1fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa000000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_GE) { goto L_26b36a8; }
    c->r[2] = 0x120fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa0a0000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b3ef4; }
    c->r[2] = 0x1c20u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa000000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4470; }
    c->r[2] = 0x4a10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa000000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48bc25u; }
    if (COND_EQ) { c->r[0] = 0x26b2c98u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2c9c:;
    c->r[2] = 0x407u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xcu, c->r[1]);
    if (COND_GE) { goto L_26b36ec; }
    c->r[2] = 0xe0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xdu, c->r[1]);
    if (COND_LT) { goto L_26b3f30; }
    c->r[2] = 0x408u;
    c->r[3] = c->r[1] ^ 0xcu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4480; }
    c->r[2] = 0x710u;
    c->r[1] = c->r[1] ^ 0xdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48bd2cu; }
    if (COND_EQ) { c->r[0] = 0x26b2cfcu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2d00:;
    c->r[2] = f_subs(c, c->r[3], c->r[0]);
    c->r[2] = f_sbcs(c, 0x6u, c->r[1]);
    if (COND_GE) { goto L_26b373c; }
    c->r[2] = 0x211fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x7u, c->r[1]);
    if (COND_LT) { goto L_26b3f6c; }
    c->r[2] = 0x2740u;
    c->r[3] = c->r[1] ^ 0x6u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b448c; }
    c->r[2] = 0x2020u;
    c->r[1] = c->r[1] ^ 0x7u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b986u; }
    if (COND_EQ) { c->r[0] = 0x26b2d58u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2d5c:;
    c->r[2] = 0xa0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x12u, c->r[1]);
    if (COND_GE) { goto L_26b3788; }
    c->r[2] = 0xb0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x12u, c->r[1]);
    if (COND_LT) { goto L_26b3fa0; }
    c->r[2] = c->r[0] ^ 0xa10u;
    c->r[1] = c->r[1] ^ 0x12u;
    c->r[2] = c->r[2] ^ 0x9200000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4498; }
    c->r[2] = 0x8a10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48bf3au; }
    if (COND_EQ) { c->r[0] = 0x26b2db4u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2db8:;
    c->r[2] = 0x150fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_GE) { goto L_26b37dc; }
    c->r[2] = 0x201fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b3fdc; }
    c->r[2] = 0x1510u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b44a4; }
    c->r[2] = 0x1810u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b602u; }
    if (COND_EQ) { c->r[0] = 0x26b2e14u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2e18:;
    c->r[2] = 0x70fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xau, c->r[1]);
    if (COND_GE) { goto L_26b3828; }
    c->r[2] = 0x221fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8140000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xau, c->r[1]);
    if (COND_LT) { goto L_26b4014; }
    c->r[2] = 0x710u;
    c->r[1] = c->r[1] ^ 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b44b0; }
    c->r[2] = 0xe10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48baefu; }
    if (COND_EQ) { c->r[0] = 0x26b2e74u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2e78:;
    c->r[2] = 0x5d1fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb080000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_GE) { goto L_26b3870; }
    c->r[2] = 0xa0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b4050; }
    c->r[2] = 0x5d20u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb080000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b44bc; }
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b998u; }
    if (COND_EQ) { c->r[0] = 0x26b2ed4u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2ed8:;
    c->r[2] = 0x407u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xeu, c->r[1]);
    if (COND_GE) { goto L_26b38c0; }
    c->r[2] = 0x100fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xeu, c->r[1]);
    if (COND_LT) { goto L_26b4088; }
    c->r[2] = 0x408u;
    c->r[1] = c->r[1] ^ 0xeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b44cc; }
    c->r[2] = 0xf10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48bbd2u; }
    if (COND_EQ) { c->r[0] = 0x26b2f34u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2f38:;
    c->r[2] = 0x211fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_GE) { goto L_26b3910; }
    c->r[2] = 0x100u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa000000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b40c0; }
    c->r[2] = 0x2120u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b44d8; }
    c->r[2] = 0x2320u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b5aeu; }
    if (COND_EQ) { c->r[0] = 0x26b2f94u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2f98:;
    c->r[2] = 0x407u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xbu, c->r[1]);
    if (COND_GE) { goto L_26b395c; }
    c->r[2] = 0xe0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xcu, c->r[1]);
    if (COND_LT) { goto L_26b40fc; }
    c->r[2] = 0x408u;
    c->r[3] = c->r[1] ^ 0xbu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b44e4; }
    c->r[2] = 0x710u;
    c->r[1] = c->r[1] ^ 0xcu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b9f8u; }
    if (COND_EQ) { c->r[0] = 0x26b2ff8u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b2ffc:;
    c->r[2] = 0x201fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x6u, c->r[1]);
    if (COND_GE) { goto L_26b39ac; }
    c->r[2] = 0x273fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x6u, c->r[1]);
    if (COND_LT) { goto L_26b4138; }
    c->r[2] = 0x2020u;
    c->r[1] = c->r[1] ^ 0x6u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b44f0; }
    c->r[2] = 0x2120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b4a4u; }
    if (COND_EQ) { c->r[0] = 0x26b3058u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b305c:;
    c->r[2] = 0x407u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x11u, c->r[1]);
    if (COND_GE) { goto L_26b3a00; }
    c->r[2] = 0x8a0fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x11u, c->r[1]);
    if (COND_LT) { goto L_26b416c; }
    c->r[2] = 0x408u;
    c->r[1] = c->r[1] ^ 0x11u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b44fc; }
    c->r[0] = c->r[0] ^ 0xa10u;
    c->r[0] = c->r[0] ^ 0x9200000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48bbfcu; }
    if (COND_EQ) { c->r[0] = 0x26b30b4u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b30b8:;
    c->r[2] = 0x407u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1240000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_GE) { goto L_26b3a4c; }
    c->r[2] = 0x1c1fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1240000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b41a8; }
    c->r[2] = 0x408u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1240000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4508; }
    c->r[0] = c->r[0] ^ 0xa10u;
    c->r[0] = c->r[0] ^ 0x1240000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b7d0u; }
    if (COND_EQ) { c->r[0] = 0x26b3110u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3114:;
    c->r[2] = 0x407u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xau, c->r[1]);
    if (COND_GE) { goto L_26b3a98; }
    c->r[2] = 0x100fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xau, c->r[1]);
    if (COND_LT) { goto L_26b41e4; }
    c->r[2] = 0x408u;
    c->r[1] = c->r[1] ^ 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4518; }
    c->r[0] = c->r[0] ^ 0xf10u;
    c->r[0] = c->r[0] ^ 0x9200000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b801u; }
    if (COND_EQ) { c->r[0] = 0x26b316cu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3170:;
    c->r[2] = 0x231fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x3u, c->r[1]);
    if (COND_LT) { goto L_26b421c; }
    c->r[2] = 0x2020u;
    c->r[1] = c->r[1] ^ 0x3u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4524; }
    c->r[2] = 0x2320u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x60a0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b40eu; }
    if (COND_EQ) { c->r[0] = 0x26b31b8u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b31bc:;
    c->r[2] = 0x221fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8840000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xfu, c->r[1]);
    if (COND_LT) { goto L_26b4254; }
    c->r[2] = 0xf10u;
    c->r[1] = c->r[1] ^ 0xfu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4530; }
    c->r[2] = 0x1010u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b9abu; }
    if (COND_EQ) { c->r[0] = 0x26b3204u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3208:;
    c->r[2] = 0x273fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x1u, c->r[1]);
    if (COND_LT) { goto L_26b4290; }
    c->r[2] = 0x1410u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b453c; }
    c->r[2] = 0x2120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b23cu; }
    if (COND_EQ) { c->r[0] = 0x26b3250u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3254:;
    c->r[2] = 0x221fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8840000u;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0xdu, c->r[1]);
    if (COND_LT) { goto L_26b42cc; }
    c->r[2] = 0x710u;
    c->r[1] = c->r[1] ^ 0xdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4548; }
    c->r[2] = 0xe10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b79fu; }
    if (COND_EQ) { c->r[0] = 0x26b329cu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b32a0:;
    c->r[2] = f_subs(c, c->r[12], c->r[0]);
    c->r[2] = f_sbcs(c, 0x8u, c->r[1]);
    if (COND_LT) { goto L_26b4308; }
    c->r[2] = 0x2120u;
    c->r[1] = c->r[1] ^ 0x7u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4554; }
    c->r[2] = 0x2740u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b4e3u; }
    if (COND_EQ) { c->r[0] = 0x26b32e0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b32e4:;
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = f_sbcs(c, 0x13u, c->r[1]);
    if (COND_LT) { goto L_26b4348; }
    c->r[2] = 0xb10u;
    c->r[1] = c->r[1] ^ 0x13u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4564; }
    c->r[2] = 0xc10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b93au; }
    if (COND_EQ) { c->r[0] = 0x26b3324u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3328:;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4570; }
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b457c; }
    c->r[0] = c->r[0] ^ 0xa10u;
    c->r[0] = c->r[0] ^ 0x9200000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b9bbu; }
    if (COND_EQ) { c->r[0] = 0x26b335cu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3360:;
    c->r[2] = 0xe10u;
    c->r[1] = c->r[1] ^ 0x9u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1210000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4588; }
    c->r[2] = 0x508u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4594; }
    c->r[0] = c->r[0] ^ 0xe10u;
    c->r[0] = c->r[0] ^ 0x3200000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b564u; }
    if (COND_EQ) { c->r[0] = 0x26b33a4u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b33a8:;
    c->r[2] = 0x608u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b45a0; }
    c->r[2] = 0x1110u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b45b0; }
    c->r[2] = 0x1210u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b038u; }
    if (COND_EQ) { c->r[0] = 0x26b33f0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b33f8:;
    c->r[2] = 0x408u;
    c->r[1] = c->r[1] ^ 0xdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b45bc; }
    c->r[2] = 0xf10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b45c8; }
    c->r[2] = 0x1010u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b63au; }
    if (COND_EQ) { c->r[0] = 0x26b3440u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3444:;
    c->r[2] = 0x508u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x2000000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b45d4; }
    c->r[2] = c->r[0] ^ 0xe10u;
    c->r[2] = c->r[2] ^ 0x2000000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b45e0; }
    c->r[2] = 0x1510u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x60a0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48af2bu; }
    if (COND_EQ) { c->r[0] = 0x26b3488u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3490:;
    c->r[2] = c->r[0] ^ 0x910u;
    c->r[1] = c->r[1] ^ 0xau;
    c->r[2] = c->r[2] ^ 0xa500000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b45ec; }
    c->r[2] = 0x810u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b45fc; }
    c->r[2] = 0x910u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b459u; }
    if (COND_EQ) { c->r[0] = 0x26b34d4u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b34d8:;
    c->r[2] = 0x2740u;
    c->r[3] = c->r[1] ^ 0x3u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4608; }
    c->r[2] = 0x2020u;
    c->r[1] = c->r[1] ^ 0x4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4614; }
    c->r[2] = 0x2120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48afb0u; }
    if (COND_EQ) { c->r[0] = 0x26b3524u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b352c:;
    c->r[2] = 0xf10u;
    c->r[1] = c->r[1] ^ 0xfu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4620; }
    c->r[2] = 0x1010u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b462c; }
    c->r[0] = c->r[0] ^ 0xf10u;
    c->r[0] = c->r[0] ^ 0x9200000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b5fau; }
    if (COND_EQ) { c->r[0] = 0x26b3570u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3574:;
    c->r[2] = c->r[0] ^ 0x2740u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = c->r[2] ^ 0x530000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4638; }
    c->r[2] = 0x6740u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4648; }
    c->r[2] = 0x1410u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48ae04u; }
    if (COND_EQ) { c->r[0] = 0x26b35b8u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b35c0:;
    c->r[2] = 0x408u;
    c->r[1] = c->r[1] ^ 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4654; }
    c->r[2] = 0xf10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4660; }
    c->r[2] = 0x1010u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b387u; }
    if (COND_EQ) { c->r[0] = 0x26b3608u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b360c:;
    c->r[2] = 0x2020u;
    c->r[1] = c->r[1] ^ 0x2u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b466c; }
    c->r[2] = 0x2120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4678; }
    c->r[0] = c->r[0] ^ 0x2740u;
    c->r[0] = c->r[0] ^ 0x530000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b0b3u; }
    if (COND_EQ) { c->r[0] = 0x26b3650u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3658:;
    c->r[2] = 0xe10u;
    c->r[1] = c->r[1] ^ 0xeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4684; }
    c->r[2] = 0x2220u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8840000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4694; }
    c->r[2] = 0x2420u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8840000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b4bcu; }
    if (COND_EQ) { c->r[0] = 0x26b36a0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b36a8:;
    c->r[2] = c->r[0] ^ 0x304u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = c->r[2] ^ 0xa000000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b46a0; }
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa000000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b46ac; }
    c->r[0] = c->r[0] ^ 0xa10u;
    c->r[0] = c->r[0] ^ 0xa000000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b1b9u; }
    if (COND_EQ) { c->r[0] = 0x26b36e8u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b36ec:;
    c->r[2] = 0x710u;
    c->r[1] = c->r[1] ^ 0xcu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b46b8; }
    c->r[2] = 0xe10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b46c4; }
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b2a7u; }
    if (COND_EQ) { c->r[0] = 0x26b3734u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b373c:;
    c->r[2] = 0x2320u;
    c->r[1] = c->r[1] ^ 0x6u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x60a0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b46d0; }
    c->r[2] = 0x2320u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b46e0; }
    c->r[2] = 0x2120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48ad86u; }
    if (COND_EQ) { c->r[0] = 0x26b3784u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3788:;
    c->r[2] = 0xc10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[3] = c->r[0] ^ c->r[2];
    c->r[2] = c->r[1] ^ 0x11u;
    { uint32_t r = c->r[3] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_26b46ec; }
    c->r[3] = 0xd10u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x9210000u;
    c->r[3] = c->r[0] ^ c->r[3];
    { uint32_t r = c->r[3] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b46f8; }
    c->r[2] = 0x408u;
    c->r[1] = c->r[1] ^ 0x12u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b412u; }
    if (COND_EQ) { c->r[0] = 0x26b37d4u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b37dc:;
    c->r[2] = c->r[0] ^ 0xe10u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = c->r[2] ^ 0x490000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4704; }
    c->r[2] = 0x5d20u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x490000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4710; }
    c->r[2] = 0x1410u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48abaeu; }
    if (COND_EQ) { c->r[0] = 0x26b3820u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3828:;
    c->r[2] = 0x2120u;
    c->r[1] = c->r[1] ^ 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b471c; }
    c->r[2] = c->r[0] ^ 0x2740u;
    c->r[2] = c->r[2] ^ 0xd10000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b472c; }
    c->r[2] = 0x2120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b0b8u; }
    if (COND_EQ) { c->r[0] = 0x26b386cu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3870:;
    c->r[2] = 0x2120u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xad10000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4738; }
    c->r[2] = 0xe10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb080000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4744; }
    c->r[2] = 0x1d20u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb080000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48afbfu; }
    if (COND_EQ) { c->r[0] = 0x26b38b8u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b38c0:;
    c->r[2] = 0xe10u;
    c->r[1] = c->r[1] ^ 0xeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4750; }
    c->r[2] = 0x2220u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8140000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b475c; }
    c->r[2] = 0x2420u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8140000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b246u; }
    if (COND_EQ) { c->r[0] = 0x26b3908u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3910:;
    c->r[2] = 0x1410u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4768; }
    c->r[2] = 0x1510u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4778; }
    c->r[2] = 0x1810u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48aa6du; }
    if (COND_EQ) { c->r[0] = 0x26b3958u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b395c:;
    c->r[2] = 0x710u;
    c->r[1] = c->r[1] ^ 0xbu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4784; }
    c->r[2] = 0xe10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4790; }
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b003u; }
    if (COND_EQ) { c->r[0] = 0x26b39a4u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b39ac:;
    c->r[2] = 0x2120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[3] = c->r[0] ^ c->r[2];
    c->r[2] = c->r[1] ^ 0x4u;
    { uint32_t r = c->r[3] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_26b479c; }
    c->r[3] = 0x2740u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xa530000u;
    c->r[3] = c->r[0] ^ c->r[3];
    { uint32_t r = c->r[3] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b47a8; }
    c->r[2] = 0x6740u;
    c->r[1] = c->r[1] ^ 0x5u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48ae54u; }
    if (COND_EQ) { c->r[0] = 0x26b39f8u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3a00:;
    c->r[2] = 0xb10u;
    c->r[1] = c->r[1] ^ 0x10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b47b4; }
    c->r[2] = 0xc10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b47c0; }
    c->r[2] = 0xd10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b1b4u; }
    if (COND_EQ) { c->r[0] = 0x26b3a48u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3a4c:;
    c->r[2] = 0x101u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1240000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b47d0; }
    c->r[2] = 0x202u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1240000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b47dc; }
    c->r[0] = c->r[0] ^ 0x304u;
    c->r[0] = c->r[0] ^ 0x1240000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48ae4au; }
    if (COND_EQ) { c->r[0] = 0x26b3a90u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3a98:;
    c->r[2] = 0x408u;
    c->r[1] = c->r[1] ^ 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b47e8; }
    c->r[2] = 0xf10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b47f4; }
    c->r[2] = 0x1010u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48aeabu; }
    if (COND_EQ) { c->r[0] = 0x26b3ae0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3ae8:;
    c->r[2] = 0x2120u;
    c->r[1] = c->r[1] ^ 0x3u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4800; }
    c->r[0] = c->r[0] ^ 0x2740u;
    c->r[0] = c->r[0] ^ 0x530000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48abfdu; }
    if (COND_EQ) { c->r[0] = 0x26b3b18u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3b1c:;
    c->r[2] = 0x2220u;
    c->r[1] = c->r[1] ^ 0xfu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8140000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b480c; }
    c->r[2] = 0x2420u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8140000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b068u; }
    if (COND_EQ) { c->r[0] = 0x26b3b50u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3b58:;
    c->r[2] = 0x2120u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa0a0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b481c; }
    c->r[2] = 0x5e20u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa0a0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48ac50u; }
    if (COND_EQ) { c->r[0] = 0x26b3b8cu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3b90:;
    c->r[2] = 0xf10u;
    c->r[1] = c->r[1] ^ 0xdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4828; }
    c->r[2] = 0x1010u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48aebeu; }
    if (COND_EQ) { c->r[0] = 0x26b3bc4u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3bcc:;
    c->r[2] = 0x2320u;
    c->r[1] = c->r[1] ^ 0x7u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x60a0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4834; }
    c->r[2] = 0x2320u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48aa96u; }
    if (COND_EQ) { c->r[0] = 0x26b3c00u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3c08:;
    c->r[2] = c->r[0] ^ 0xa10u;
    c->r[1] = c->r[1] ^ 0x13u;
    c->r[2] = c->r[2] ^ 0x9200000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4840; }
    c->r[2] = 0x8a10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48b0c3u; }
    if (COND_EQ) { c->r[0] = 0x26b3c38u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3c3c:;
    c->r[2] = 0x508u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b484c; }
    c->r[2] = 0x508u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x490000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48ac39u; }
    if (COND_EQ) { c->r[0] = 0x26b3c70u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3c78:;
    c->r[2] = c->r[0] ^ 0x304u;
    c->r[1] = c->r[1] ^ 0x9u;
    c->r[2] = c->r[2] ^ 0x9200000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4858; }
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48ac53u; }
    if (COND_EQ) { c->r[0] = 0x26b3ca8u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3cac:;
    c->r[2] = 0x2120u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4868; }
    c->r[2] = 0x1410u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xad10000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a700u; }
    if (COND_EQ) { c->r[0] = 0x26b3ce0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3ce8:;
    c->r[2] = 0x1010u;
    c->r[3] = c->r[1] ^ 0xdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4874; }
    c->r[2] = 0x710u;
    c->r[1] = c->r[1] ^ 0xeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48adabu; }
    if (COND_EQ) { c->r[0] = 0x26b3d20u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3d28:;
    c->r[2] = 0x2120u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x60a0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4880; }
    c->r[2] = 0x2320u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x60a0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a7f2u; }
    if (COND_EQ) { c->r[0] = 0x26b3d5cu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3d60:;
    c->r[2] = 0xe10u;
    c->r[1] = c->r[1] ^ 0xbu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b488c; }
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48ac19u; }
    if (COND_EQ) { c->r[0] = 0x26b3d94u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3d9c:;
    c->r[2] = 0x2320u;
    c->r[1] = c->r[1] ^ 0x4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x60a0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4898; }
    c->r[2] = 0x2320u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a826u; }
    if (COND_EQ) { c->r[0] = 0x26b3dd0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3dd4:;
    c->r[2] = c->r[0] ^ 0xa10u;
    c->r[1] = c->r[1] ^ 0x10u;
    c->r[2] = c->r[2] ^ 0x9200000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b48a4; }
    c->r[2] = 0x8a10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48aed0u; }
    if (COND_EQ) { c->r[0] = 0x26b3e04u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3e0c:;
    c->r[2] = 0x2020u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b48b4; }
    c->r[2] = 0x2120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a616u; }
    if (COND_EQ) { c->r[0] = 0x26b3e40u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3e48:;
    c->r[2] = 0x2220u;
    c->r[1] = c->r[1] ^ 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8840000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b48c0; }
    c->r[2] = 0x2420u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8840000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48ab1eu; }
    if (COND_EQ) { c->r[0] = 0x26b3e7cu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3e80:;
    c->r[2] = 0x2320u;
    c->r[1] = c->r[1] ^ 0x2u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b48cc; }
    c->r[2] = 0x2120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a5f8u; }
    if (COND_EQ) { c->r[0] = 0x26b3eb4u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3ebc:;
    c->r[2] = 0x1010u;
    c->r[1] = c->r[1] ^ 0xeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b48d8; }
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48abb0u; }
    if (COND_EQ) { c->r[0] = 0x26b3ef0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3ef4:;
    c->r[2] = 0x1210u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa0a0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b48e4; }
    c->r[2] = 0x1310u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa0a0000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a515u; }
    if (COND_EQ) { c->r[0] = 0x26b3f28u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3f30:;
    c->r[2] = 0xe10u;
    c->r[1] = c->r[1] ^ 0xdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b48f0; }
    c->r[2] = 0x2220u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8140000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48aaf8u; }
    if (COND_EQ) { c->r[0] = 0x26b3f64u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3f6c:;
    c->r[2] = 0x2120u;
    c->r[1] = c->r[1] ^ 0x7u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4900; }
    c->r[0] = c->r[0] ^ 0x2740u;
    c->r[0] = c->r[0] ^ 0x530000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a7b4u; }
    if (COND_EQ) { c->r[0] = 0x26b3f9cu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3fa0:;
    c->r[2] = 0xb10u;
    c->r[1] = c->r[1] ^ 0x12u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b490c; }
    c->r[2] = 0xc10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48ac7cu; }
    if (COND_EQ) { c->r[0] = 0x26b3fd4u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b3fdc:;
    c->r[2] = 0x2020u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4918; }
    c->r[2] = 0x2120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a44fu; }
    if (COND_EQ) { c->r[0] = 0x26b4010u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b4014:;
    c->r[2] = 0x2220u;
    c->r[1] = c->r[1] ^ 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8140000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4924; }
    c->r[2] = 0x2420u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8140000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a94bu; }
    if (COND_EQ) { c->r[0] = 0x26b4048u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b4050:;
    c->r[2] = c->r[0] ^ 0xa10u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = c->r[2] ^ 0xb200000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4930; }
    c->r[2] = 0x4a10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb200000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a7feu; }
    if (COND_EQ) { c->r[0] = 0x26b4080u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b4088:;
    c->r[2] = 0x1010u;
    c->r[1] = c->r[1] ^ 0xeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b493c; }
    c->r[2] = 0x710u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48aa02u; }
    if (COND_EQ) { c->r[0] = 0x26b40bcu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b40c0:;
    c->r[2] = 0x101u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa000000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b494c; }
    c->r[2] = 0x202u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa000000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a7a4u; }
    if (COND_EQ) { c->r[0] = 0x26b40f4u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b40fc:;
    c->r[2] = 0xe10u;
    c->r[1] = c->r[1] ^ 0xcu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80c0000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4958; }
    c->r[2] = 0x408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8240000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a8b1u; }
    if (COND_EQ) { c->r[0] = 0x26b4130u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b4138:;
    c->r[2] = c->r[0] ^ 0x2740u;
    c->r[1] = c->r[1] ^ 0x6u;
    c->r[2] = c->r[2] ^ 0x530000u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4964; }
    c->r[2] = 0x2020u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd10000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a50cu; }
    if (COND_EQ) { c->r[0] = 0x26b4168u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b416c:;
    c->r[2] = 0x8a10u;
    c->r[1] = c->r[1] ^ 0x11u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4970; }
    c->r[2] = 0xb10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48aadau; }
    if (COND_EQ) { c->r[0] = 0x26b41a0u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b41a8:;
    c->r[2] = 0x1c20u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1240000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b497c; }
    c->r[2] = 0x4a10u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1240000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a70cu; }
    if (COND_EQ) { c->r[0] = 0x26b41dcu + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b41e4:;
    c->r[2] = 0x1010u;
    c->r[1] = c->r[1] ^ 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4988; }
    c->r[0] = c->r[0] ^ 0x810u;
    c->r[0] = c->r[0] ^ 0xa500000u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a728u; }
    if (COND_EQ) { c->r[0] = 0x26b4214u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b421c:;
    c->r[2] = 0x2320u;
    c->r[1] = c->r[1] ^ 0x3u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6880000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b4998; }
    c->r[2] = 0x2120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a277u; }
    if (COND_EQ) { c->r[0] = 0x26b4250u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b4254:;
    c->r[2] = 0x2220u;
    c->r[1] = c->r[1] ^ 0xfu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8840000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b49a4; }
    c->r[2] = 0x2420u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8840000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a93cu; }
    if (COND_EQ) { c->r[0] = 0x26b4288u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b4290:;
    c->r[2] = 0x2740u;
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b49b0; }
    c->r[2] = 0x6740u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa530000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a53bu; }
    if (COND_EQ) { c->r[0] = 0x26b42c4u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b42cc:;
    c->r[2] = 0x2220u;
    c->r[1] = c->r[1] ^ 0xdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8840000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b49bc; }
    c->r[2] = 0x2420u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8840000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a795u; }
    if (COND_EQ) { c->r[0] = 0x26b4300u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b4308:;
    c->r[2] = 0x6740u;
    c->r[3] = c->r[1] ^ 0x8u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b49c8; }
    c->r[2] = 0x508u;
    c->r[1] = c->r[1] ^ 0x9u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1210000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a5c3u; }
    if (COND_EQ) { c->r[0] = 0x26b4340u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_26b4380;
L_26b4348:;
    c->r[2] = 0xd10u;
    c->r[3] = c->r[1] ^ 0x13u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9210000u;
    c->r[2] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_26b49d4; }
    c->r[2] = 0x6640u;
    c->r[1] = c->r[1] ^ 0x14u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[0] = 0x48a001u; }
    if (COND_EQ) { c->r[0] = 0x26b4380u + c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
L_26b4380:;
    c->r[0] = 0x4892d3u;
    c->r[0] = 0x26b438cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b438c:;
    c->r[0] = 0x48a3deu;
    c->r[0] = 0x26b4398u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b439c:;
    c->r[0] = 0x48a748u;
    c->r[0] = 0x26b43a8u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b43a8:;
    c->r[0] = 0x48a047u;
    c->r[0] = 0x26b43b4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b43b4:;
    c->r[0] = 0x48a6cau;
    c->r[0] = 0x26b43c0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b43c0:;
    c->r[0] = 0x48a446u;
    c->r[0] = 0x26b43ccu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b43cc:;
    c->r[0] = 0x48a840u;
    c->r[0] = 0x26b43d8u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b43d8:;
    c->r[0] = 0x48a93eu;
    c->r[0] = 0x26b43e4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b43e8:;
    c->r[0] = 0x48a4feu;
    c->r[0] = 0x26b43f4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b43f4:;
    c->r[0] = 0x489fe9u;
    c->r[0] = 0x26b4400u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4400:;
    c->r[0] = 0x48a5fdu;
    c->r[0] = 0x26b440cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b440c:;
    c->r[0] = 0x48a007u;
    c->r[0] = 0x26b4418u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4418:;
    c->r[0] = 0x48a4eeu;
    c->r[0] = 0x26b4424u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4424:;
    c->r[0] = 0x48a2f6u;
    c->r[0] = 0x26b4430u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4434:;
    c->r[0] = 0x48a75du;
    c->r[0] = 0x26b4440u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4440:;
    c->r[0] = 0x489f4cu;
    c->r[0] = 0x26b444cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b444c:;
    c->r[0] = 0x48a4ffu;
    c->r[0] = 0x26b4458u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4458:;
    c->r[0] = 0x48a130u;
    c->r[0] = 0x26b4464u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4464:;
    c->r[0] = 0x48a63au;
    c->r[0] = 0x26b4470u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4470:;
    c->r[0] = 0x48a429u;
    c->r[0] = 0x26b447cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4480:;
    c->r[0] = 0x48a549u;
    c->r[0] = 0x26b448cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b448c:;
    c->r[0] = 0x48a319u;
    c->r[0] = 0x26b4498u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4498:;
    c->r[0] = 0x48a818u;
    c->r[0] = 0x26b44a4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b44a4:;
    c->r[0] = 0x489efau;
    c->r[0] = 0x26b44b0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b44b0:;
    c->r[0] = 0x48a4a1u;
    c->r[0] = 0x26b44bcu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b44bc:;
    c->r[0] = 0x48a3c0u;
    c->r[0] = 0x26b44c8u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b44cc:;
    c->r[0] = 0x48a5dcu;
    c->r[0] = 0x26b44d8u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b44d8:;
    c->r[0] = 0x489f84u;
    c->r[0] = 0x26b44e4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b44e4:;
    c->r[0] = 0x48a4b1u;
    c->r[0] = 0x26b44f0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b44f0:;
    c->r[0] = 0x48a189u;
    c->r[0] = 0x26b44fcu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b44fc:;
    c->r[0] = 0x48a6d3u;
    c->r[0] = 0x26b4508u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4508:;
    c->r[0] = 0x48a3c9u;
    c->r[0] = 0x26b4514u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4518:;
    c->r[0] = 0x48a42au;
    c->r[0] = 0x26b4524u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4524:;
    c->r[0] = 0x48a0a6u;
    c->r[0] = 0x26b4530u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4530:;
    c->r[0] = 0x48a640u;
    c->r[0] = 0x26b453cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b453c:;
    c->r[0] = 0x489eaau;
    c->r[0] = 0x26b4548u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4548:;
    c->r[0] = 0x48a4cau;
    c->r[0] = 0x26b4554u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4554:;
    c->r[0] = 0x489fcdu;
    c->r[0] = 0x26b4560u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4564:;
    c->r[0] = 0x48a726u;
    c->r[0] = 0x26b4570u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4570:;
    c->r[0] = 0x489e09u;
    c->r[0] = 0x26b457cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b457c:;
    c->r[0] = 0x48a785u;
    c->r[0] = 0x26b4588u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4588:;
    c->r[0] = 0x48a379u;
    c->r[0] = 0x26b4594u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4594:;
    c->r[0] = 0x48a35eu;
    c->r[0] = 0x26b45a0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b45a0:;
    c->r[0] = 0x489de5u;
    c->r[0] = 0x26b45acu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b45b0:;
    c->r[0] = 0x489e7au;
    c->r[0] = 0x26b45bcu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b45bc:;
    c->r[0] = 0x48a448u;
    c->r[0] = 0x26b45c8u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b45c8:;
    c->r[0] = 0x48a478u;
    c->r[0] = 0x26b45d4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b45d4:;
    c->r[0] = 0x48a2ceu;
    c->r[0] = 0x26b45e0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b45e0:;
    c->r[0] = 0x48a2ccu;
    c->r[0] = 0x26b45ecu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b45ec:;
    c->r[0] = 0x48a33au;
    c->r[0] = 0x26b45f8u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b45fc:;
    c->r[0] = 0x48a32fu;
    c->r[0] = 0x26b4608u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4608:;
    c->r[0] = 0x48a174u;
    c->r[0] = 0x26b4614u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4614:;
    c->r[0] = 0x48a01bu;
    c->r[0] = 0x26b4620u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4620:;
    c->r[0] = 0x48a547u;
    c->r[0] = 0x26b462cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b462c:;
    c->r[0] = 0x48a56eu;
    c->r[0] = 0x26b4638u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4638:;
    c->r[0] = 0x48a0b2u;
    c->r[0] = 0x26b4644u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4648:;
    c->r[0] = 0x48a198u;
    c->r[0] = 0x26b4654u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4654:;
    c->r[0] = 0x48a2f4u;
    c->r[0] = 0x26b4660u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4660:;
    c->r[0] = 0x48a309u;
    c->r[0] = 0x26b466cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b466c:;
    c->r[0] = 0x489f2du;
    c->r[0] = 0x26b4678u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4678:;
    c->r[0] = 0x489e1au;
    c->r[0] = 0x26b4684u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4684:;
    c->r[0] = 0x48a454u;
    c->r[0] = 0x26b4690u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4694:;
    c->r[0] = 0x48a47fu;
    c->r[0] = 0x26b46a0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b46a0:;
    c->r[0] = 0x48a1efu;
    c->r[0] = 0x26b46acu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b46ac:;
    c->r[0] = 0x48a1e6u;
    c->r[0] = 0x26b46b8u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b46b8:;
    c->r[0] = 0x48a323u;
    c->r[0] = 0x26b46c4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b46c4:;
    c->r[0] = 0x48a331u;
    c->r[0] = 0x26b46d0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b46d0:;
    c->r[0] = 0x489f87u;
    c->r[0] = 0x26b46dcu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b46e0:;
    c->r[0] = 0x489f66u;
    c->r[0] = 0x26b46ecu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b46ec:;
    c->r[0] = 0x48a54au;
    c->r[0] = 0x26b46f8u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b46f8:;
    c->r[0] = 0x48a506u;
    c->r[0] = 0x26b4704u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4704:;
    c->r[0] = 0x48a1a3u;
    c->r[0] = 0x26b4710u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4710:;
    c->r[0] = 0x48a1abu;
    c->r[0] = 0x26b471cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b471c:;
    c->r[0] = 0x48a1f3u;
    c->r[0] = 0x26b4728u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b472c:;
    c->r[0] = 0x48a209u;
    c->r[0] = 0x26b4738u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4738:;
    c->r[0] = 0x489d36u;
    c->r[0] = 0x26b4744u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4744:;
    c->r[0] = 0x48a11fu;
    c->r[0] = 0x26b4750u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4750:;
    c->r[0] = 0x48a37cu;
    c->r[0] = 0x26b475cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b475c:;
    c->r[0] = 0x48a3a9u;
    c->r[0] = 0x26b4768u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4768:;
    c->r[0] = 0x489c99u;
    c->r[0] = 0x26b4774u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4778:;
    c->r[0] = 0x489c1du;
    c->r[0] = 0x26b4784u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4784:;
    c->r[0] = 0x48a223u;
    c->r[0] = 0x26b4790u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4790:;
    c->r[0] = 0x48a231u;
    c->r[0] = 0x26b479cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b479c:;
    c->r[0] = 0x489d40u;
    c->r[0] = 0x26b47a8u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b47a8:;
    c->r[0] = 0x489fe5u;
    c->r[0] = 0x26b47b4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b47b4:;
    c->r[0] = 0x48a4acu;
    c->r[0] = 0x26b47c0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b47c0:;
    c->r[0] = 0x48a468u;
    c->r[0] = 0x26b47ccu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b47d0:;
    c->r[0] = 0x48a0f8u;
    c->r[0] = 0x26b47dcu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b47dc:;
    c->r[0] = 0x48a0efu;
    c->r[0] = 0x26b47e8u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b47e8:;
    c->r[0] = 0x48a15du;
    c->r[0] = 0x26b47f4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b47f4:;
    c->r[0] = 0x48a171u;
    c->r[0] = 0x26b4800u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4800:;
    c->r[0] = 0x489caeu;
    c->r[0] = 0x26b480cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b480c:;
    c->r[0] = 0x48a36du;
    c->r[0] = 0x26b4818u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b481c:;
    c->r[0] = 0x489c6du;
    c->r[0] = 0x26b4828u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4828:;
    c->r[0] = 0x48a220u;
    c->r[0] = 0x26b4834u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4834:;
    c->r[0] = 0x489e6eu;
    c->r[0] = 0x26b4840u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4840:;
    c->r[0] = 0x48a47cu;
    c->r[0] = 0x26b484cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b484c:;
    c->r[0] = 0x48a4b0u;
    c->r[0] = 0x26b4858u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4858:;
    c->r[0] = 0x48a094u;
    c->r[0] = 0x26b4864u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4868:;
    c->r[0] = 0x489c0fu;
    c->r[0] = 0x26b4874u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4874:;
    c->r[0] = 0x48a1f2u;
    c->r[0] = 0x26b4880u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4880:;
    c->r[0] = 0x489be5u;
    c->r[0] = 0x26b488cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b488c:;
    c->r[0] = 0x48a12du;
    c->r[0] = 0x26b4898u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4898:;
    c->r[0] = 0x489d69u;
    c->r[0] = 0x26b48a4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b48a4:;
    c->r[0] = 0x48a3f4u;
    c->r[0] = 0x26b48b0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b48b4:;
    c->r[0] = 0x489c9au;
    c->r[0] = 0x26b48c0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b48c0:;
    c->r[0] = 0x48a0b4u;
    c->r[0] = 0x26b48ccu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b48cc:;
    c->r[0] = 0x489c9au;
    c->r[0] = 0x26b48d8u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b48d8:;
    c->r[0] = 0x48a254u;
    c->r[0] = 0x26b48e4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b48e4:;
    c->r[0] = 0x489b3fu;
    c->r[0] = 0x26b48f0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b48f0:;
    c->r[0] = 0x48a136u;
    c->r[0] = 0x26b48fcu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4900:;
    c->r[0] = 0x489c0cu;
    c->r[0] = 0x26b490cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b490c:;
    c->r[0] = 0x48a370u;
    c->r[0] = 0x26b4918u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4918:;
    c->r[0] = 0x489c42u;
    c->r[0] = 0x26b4924u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4924:;
    c->r[0] = 0x48a049u;
    c->r[0] = 0x26b4930u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4930:;
    c->r[0] = 0x489f37u;
    c->r[0] = 0x26b493cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b493c:;
    c->r[0] = 0x48a1fbu;
    c->r[0] = 0x26b4948u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b494c:;
    c->r[0] = 0x489f3du;
    c->r[0] = 0x26b4958u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4958:;
    c->r[0] = 0x48a095u;
    c->r[0] = 0x26b4964u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4964:;
    c->r[0] = 0x489dceu;
    c->r[0] = 0x26b4970u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4970:;
    c->r[0] = 0x48a365u;
    c->r[0] = 0x26b497cu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b497c:;
    c->r[0] = 0x489f5cu;
    c->r[0] = 0x26b4988u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4988:;
    c->r[0] = 0x489ff3u;
    c->r[0] = 0x26b4994u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b4998:;
    c->r[0] = 0x489c12u;
    c->r[0] = 0x26b49a4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b49a4:;
    c->r[0] = 0x48a1e1u;
    c->r[0] = 0x26b49b0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b49b0:;
    c->r[0] = 0x489dadu;
    c->r[0] = 0x26b49bcu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b49bc:;
    c->r[0] = 0x48a09fu;
    c->r[0] = 0x26b49c8u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b49c8:;
    c->r[0] = 0x489e5du;
    c->r[0] = 0x26b49d4u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_26b49d4:;
    c->r[0] = 0x48a246u;
    c->r[0] = 0x26b49e0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
