#include "cpu.h"
#include "neon_rt.h"
void f_27b9310(Cpu *c);
void f_27c47a4(Cpu *c);
void f_27c73c8(Cpu *c);
void f_27c75a8(Cpu *c);
void f_27c7718(Cpu *c);
void f_27c79bc(Cpu *c);
void f_27c8b14(Cpu *c);
void f_27ca728(Cpu *c);
void f_27cbb1c(Cpu *c);
void f_27cbd88(Cpu *c);
void f_27cda3c(Cpu *c);
void f_27e4b00(Cpu *c);
void f_283b27c(Cpu *c);
void f_283b288(Cpu *c);
void f_284f5c8(Cpu *c);
void f_27c47a4(Cpu *restrict c) {
    FN_ENTER(0x27c47a4u);
L_27c47a4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x74u;
    c->r[7] = c->r[1];
    c->r[10] = c->r[0];
    c->r[0] = c->r[7] - c->r[10];
    c->r[6] = c->r[3];
    c->r[5] = c->r[2];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_27c6ddc; }
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[8] = c->r[8] + 0x1u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4cu);
    if (COND_NE) { c->r[8] = c->r[10]; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5au);
    if (COND_EQ) { goto L_27c482c; }
    (void)f_subs(c, c->r[0], 0x4eu);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    if (COND_NE) { goto L_27c48d0; }
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_EQ) { goto L_27c4920; }
    c->r[2] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[2], c->r[7]);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    if (COND_EQ) { goto L_27c6dc8; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x72u);
    if (COND_NE) { goto L_27c4998; }
    c->r[2] = c->r[8];
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[0] = v; }
    goto L_27c499c;
L_27c482c:;
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_EQ) { goto L_27c6cdc; }
    c->r[4] = c->r[8] + 0x1u;
    c->r[1] = c->r[7];
    c->r[0] = c->r[4];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c4848u; f_27b9310(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    c->r[9] = c->r[8];
    if (COND_EQ) { goto L_27c6cd8; }
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[9] = c->r[8];
    if (COND_EQ) { goto L_27c6cd8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[9] = c->r[8];
    (void)f_subs(c, c->r[1], 0x45u);
    if (COND_NE) { goto L_27c6cd8; }
    c->r[4] = c->r[0] + 0x1u;
    c->r[9] = c->r[8];
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_EQ) { goto L_27c6cd8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x64u);
    if (COND_EQ) { goto L_27c4cb4; }
    (void)f_subs(c, c->r[1], 0x73u);
    if (COND_NE) { goto L_27c4cf0; }
    c->r[9] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_EQ) { goto L_27c67d8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5fu);
    if (COND_NE) { goto L_27c67ac; }
    c->r[1] = c->r[0] + 0x3u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_EQ) { goto L_27c67dc; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x30u;
    (void)f_subs(c, c->r[2], 0x9u);
    if (COND_HI) { goto L_27c6e14; }
    c->r[9] = c->r[0] + 0x4u;
    goto L_27c67dc;
L_27c48d0:;
    c->r[1] = c->r[7] - c->r[8];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_LT) { goto L_27c4a8c; }
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[0], 0x53u);
    if (COND_NE) { goto L_27c4928; }
    { uint32_t ea = c->r[8] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[8];
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27c492c; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[8] + 0x2u;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_EQ) { goto L_27c4cac; }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4cu);
    if (COND_EQ) { c->r[4] = c->r[8] + 0x3u; }
    goto L_27c492c;
L_27c4920:;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    goto L_27c6dc8;
L_27c4928:;
    c->r[4] = c->r[8];
L_27c492c:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c493cu; f_27cbd88(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[9] = c->r[6];
    if (COND_EQ) { c->r[9] = c->r[8]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_27c49e8; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_27c49ec; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27c4a8c; }
    c->r[1] = 0x37d096u;
    c->r[0] = c->r[0] - 0x18u;
    c->r[3] = 0x5u;
    c->r[2] = 0x27c4984u + c->r[1];
    c->r[1] = 0x0u;
    c->r[14] = 0x27c4988u; f_27c73c8(c);
    c->r[9] = c->r[6];
    (void)f_subs(c, c->r[9], c->r[8]);
    if (COND_NE) { goto L_27c49f4; }
    goto L_27c4a8c;
L_27c4998:;
    c->r[1] = 0x0u;
L_27c499c:;
    (void)f_subs(c, c->r[0], 0x56u);
    if (COND_EQ) { { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[0] = v; } }
    if (COND_EQ) { c->r[1] = c->r[1] | 0x2u; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[0], 0x4bu);
    if (COND_EQ) { c->r[2] = c->r[2] + 0x1u; }
    if (COND_EQ) { c->r[1] = c->r[1] | 0x1u; }
    (void)f_subs(c, c->r[2], c->r[7]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_27c6dc8; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4fu);
    if (COND_EQ) { goto L_27c4bc0; }
    (void)f_subs(c, c->r[0], 0x52u);
    if (COND_NE) { goto L_27c4bcc; }
    c->r[0] = 0x1u;
    goto L_27c4bc4;
L_27c49e8:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c49ec:;
    (void)f_subs(c, c->r[9], c->r[8]);
    if (COND_EQ) { goto L_27c4a8c; }
L_27c49f4:;
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_EQ) { goto L_27c6dd8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x49u);
    if (COND_NE) { goto L_27c4c90; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27c6ddc; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0x27c4a30u; f_27c7718(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CS) { goto L_27c4d48; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27c69bc;
L_27c4a8c:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c4a9cu; f_27c8b14(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], c->r[8]);
    if (COND_EQ) { goto L_27c4bb8; }
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_EQ) { goto L_27c4bb8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x49u);
    if (COND_NE) { goto L_27c4bb8; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c4accu; f_27c79bc(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27c4c98; }
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    c->r[1] = c->r[4] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27c6ddc; }
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27c4b18u; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27c4b44:;
    c->r[6] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c4b60; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c4b60u; f_283b288(c);
L_27c4b60:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c4b74; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c4b74u; f_283b288(c);
L_27c4b74:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_NE) { goto L_27c4b44; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27c6ad8; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    c->r[1] = c->r[4];
    if (COND_EQ) { c->r[2] = (c->r[5] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[8] - 0x30u;
    c->r[14] = 0x27c4bb4u; f_27c75a8(c);
    goto L_27c6ab4;
L_27c4bb8:;
    c->r[7] = c->r[10];
    goto L_27c6dd8;
L_27c4bc0:;
    c->r[0] = 0x2u;
L_27c4bc4:;
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
L_27c4bcc:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_27c4c00; }
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27c4ed0;
L_27c4c00:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0xaaabu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaaa0000u;
    c->r[6] = 0xaaaau;
    c->r[0] = c->r[0] - c->r[2];
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[3]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27c6f28; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5554u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_HI) { goto L_27c4c5c; }
    c->r[6] = (c->r[1] << 1);
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { c->r[6] = c->r[0]; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27c4da0; }
L_27c4c5c:;
    c->r[0] = c->r[6] + (c->r[6] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27c4ca0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c4c8cu; f_283b27c(c);
    goto L_27c4da8;
L_27c4c90:;
    c->r[7] = c->r[9];
    goto L_27c6dd8;
L_27c4c98:;
    c->r[7] = c->r[10];
    goto L_27c6dd8;
L_27c4ca0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27c4da8;
L_27c4cac:;
    c->r[4] = c->r[0];
    goto L_27c492c;
L_27c4cb4:;
    c->r[1] = c->r[0] + 0x2u;
    c->r[9] = c->r[8];
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_EQ) { goto L_27c6cd8; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x6eu);
    c->r[2] = c->r[1];
    if (COND_EQ) { c->r[2] = c->r[0] + 0x3u; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_EQ) { goto L_27c6b3c; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x30u);
    if (COND_NE) { goto L_27c6b08; }
    c->r[1] = c->r[2] + 0x1u;
    goto L_27c6b3c;
L_27c4cf0:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[3] = c->r[6];
    c->r[14] = 0x27c4d04u; f_27c47a4(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], c->r[4]);
    if (COND_EQ) { goto L_27c6754; }
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_EQ) { goto L_27c6cb4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_27c6c88; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27c6cb8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_27c6e9c; }
    c->r[9] = c->r[9] + 0x2u;
    goto L_27c6cb8;
L_27c4d48:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[7];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c6f68; }
    c->r[3] = c->r[3] - c->r[7];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[5] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c671c; }
    c->r[6] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[6], c->r[2]);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[6] = c->r[2]; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27c672c; }
    c->r[6] = 0x0u;
    goto L_27c680c;
L_27c4da0:;
    c->r[6] = 0x0u;
    c->r[0] = 0x0u;
L_27c4da8:;
    c->r[1] = c->r[4] + (c->r[4] << 1);
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[1] = c->r[0] + (c->r[1] << 3);
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] + (c->r[2] << 3);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[5]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27c4e30; }
L_27c4de0:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.d[16] = LD64(c->r[7] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[3]); }
    c->r[7] = c->r[7] - 0x18u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_27c4de0; }
    { uint32_t ea = c->r[5]; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    goto L_27c4e34;
L_27c4e30:;
    c->r[4] = c->r[6];
L_27c4e34:;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    (void)f_subs(c, c->r[6], c->r[4]);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27c4e80; }
L_27c4e48:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c4e5c; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c4e5cu; f_283b288(c);
L_27c4e5c:;
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c4e74; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c4e74u; f_283b288(c);
L_27c4e74:;
    (void)f_subs(c, c->r[4], c->r[7]);
    c->r[6] = c->r[7];
    if (COND_NE) { goto L_27c4e48; }
L_27c4e80:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c4ed0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c4ec8; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c4ec8; }
    c->r[2] = 0xfu - c->r[4];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[9];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[4] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    goto L_27c4ed0;
L_27c4ec8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c4ed0u; f_283b288(c);
L_27c4ed0:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[7] - c->r[4];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_27c4f14; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x53u);
    if (COND_NE) { goto L_27c4f14; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27c4f14; }
    c->r[0] = 0x37ca50u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x27c4f08u + c->r[0];
    c->r[0] = c->r[2] - 0x18u;
    c->r[2] = 0x3u;
    c->r[14] = 0x27c4f10u; f_27cda3c(c);
    c->r[4] = c->r[4] + 0x2u;
L_27c4f14:;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_EQ) { goto L_27c65b4; }
    c->r[0] = c->r[11] - 0x40u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] | 0x1u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] | 0x1u;
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
L_27c4f70:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x44u;
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_HI) { goto L_27c50dc; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27c4f8cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27c4fd4u: goto L_27c4fd4; case 0x27c50c4u: goto L_27c50c4; case 0x27c50dcu: goto L_27c50dc; case 0x27c51b4u: goto L_27c51b4; case 0x27c5318u: goto L_27c5318; case 0x27c532cu: goto L_27c532c; case 0x27c6600u: goto L_27c6600; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27c4fd4:;
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27c4ff0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x20u;
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27c50dc; }
L_27c4ff0:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c5000u; f_27cbb1c(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27c670c; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27c670c; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27c503cu; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[11] - 64u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27c5064:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c5080; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c5080u; f_283b288(c);
L_27c5080:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c5094; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c5094u; f_283b288(c);
L_27c5094:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27c5064; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27c54fc; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] - 0x30u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c5788; }
    c->r[1] = (c->r[1] >> 1);
    goto L_27c578c;
L_27c50c4:;
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27c5400; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27c5400; }
L_27c50dc:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c50ecu; f_27cbd88(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27c6714; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27c6714; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[10] = c->r[8];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27c512cu; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[11] - 64u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27c5154:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c5170; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c5170u; f_283b288(c);
L_27c5170:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c5184; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c5184u; f_283b288(c);
L_27c5184:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27c5154; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27c54dc; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] - 0x30u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c5518; }
    c->r[1] = (c->r[1] >> 1);
    goto L_27c551c;
L_27c51b4:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c51c4u; f_27c79bc(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27c670c; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27c670c; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27c5200u; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[11] - 64u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27c5228:;
    c->r[6] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c5244; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c5244u; f_283b288(c);
L_27c5244:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c5258; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c5258u; f_283b288(c);
L_27c5258:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_NE) { goto L_27c5228; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27c556c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[10] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    if (COND_EQ) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[8] - 0x30u;
    c->r[14] = 0x27c5298u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[13] + 0x40u;
    c->r[2] = c->r[13] + 0x3cu;
    c->r[14] = 0x27c52b8u; f_27c7718(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_27c5618; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_27c62c8;
L_27c5318:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27c4f70; }
    goto L_27c69ac;
L_27c532c:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c533cu; f_27ca728(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27c670c; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27c670c; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27c5378u; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[11] - 64u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27c53a0:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c53bc; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c53bcu; f_283b288(c);
L_27c53bc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c53d0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c53d0u; f_283b288(c);
L_27c53d0:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27c53a0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27c54fc; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] - 0x30u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c55c8; }
    c->r[1] = (c->r[1] >> 1);
    goto L_27c55cc;
L_27c5400:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c5410u; f_27c8b14(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27c6dc4; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27c6dc4; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[10] = c->r[8];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27c5450u; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[11] - 64u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[4] - 0x18u;
    c->r[7] = c->r[4];
L_27c5478:;
    c->r[8] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c5494; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c5494u; f_283b288(c);
L_27c5494:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c54a8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c54a8u; f_283b288(c);
L_27c54a8:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27c5478; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27c54dc; }
    c->r[0] = c->r[4];
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[0] - 0x30u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c5848; }
    c->r[1] = (c->r[1] >> 1);
    goto L_27c584c;
L_27c54dc:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[10];
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_27c658c;
L_27c54fc:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    goto L_27c658c;
L_27c5518:;
    { uint32_t ea = c->r[8] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_27c551c:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[8] = c->r[10];
    if (COND_EQ) { goto L_27c558c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { c->r[4] = (c->r[0] >> 1); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[4] + 0x2u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27c6f18; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27c5674; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[11] - 0x30u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c5698;
L_27c556c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    goto L_27c62d0;
L_27c558c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27c5704; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[1] = c->r[3]; }
    c->r[14] = 0x27c55c4u; f_27cda3c(c);
    goto L_27c5704;
L_27c55c8:;
    { uint32_t ea = c->r[8] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_27c55cc:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27c5810; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[9]); }
    if (COND_EQ) { c->r[4] = (c->r[0] >> 1); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[4] + 0x2u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27c6f30; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27c589c; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[11] - 0x30u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c58c0;
L_27c5618:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[3];
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[1], 0x10000000u);
    if (COND_CS) { goto L_27c6f40; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[2] >> 4);
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c5ba8; }
    c->r[6] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[1]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    if (COND_CC) { c->r[6] = c->r[1]; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27c5bbc; }
    c->r[6] = 0x0u;
    goto L_27c5e98;
L_27c5674:;
    c->r[6] = c->r[4] + 0x12u;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c5684u; f_283b27c(c);
    c->r[1] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
L_27c5698:;
    c->r[1] = 0x3au;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = c->r[4];
    c->r[14] = 0x27c56c4u; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27c56ecu; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c5704; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c5704u; f_283b288(c);
L_27c5704:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[13] + 0x40u;
    c->r[2] = c->r[13] + 0x3cu;
    c->r[14] = 0x27c5720u; f_27c7718(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { goto L_27c5dec; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[3];
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[1], 0x10000000u);
    if (COND_CS) { goto L_27c6f20; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[2] >> 4);
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c57d8; }
    c->r[6] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[1]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    if (COND_CC) { c->r[6] = c->r[1]; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27c57e8; }
    c->r[6] = 0x0u;
    goto L_27c59b8;
L_27c5788:;
    { uint32_t ea = c->r[8] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_27c578c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27c5a84; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[9]); }
    if (COND_EQ) { c->r[4] = (c->r[0] >> 1); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[4] + 0x2u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27c6f48; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27c5c1c; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[11] - 0x30u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c5c40;
L_27c57d8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
L_27c57e8:;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[6] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[6] << 4));
    if (COND_CS) { goto L_27c59b0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c580cu; f_283b27c(c);
    goto L_27c59b8;
L_27c5810:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[11] - 0x40u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27c592c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[1] = c->r[3]; }
    c->r[14] = 0x27c5844u; f_27cda3c(c);
    goto L_27c592c;
L_27c5848:;
    { uint32_t ea = c->r[4] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_27c584c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27c5b68; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[9]); }
    if (COND_EQ) { c->r[4] = (c->r[0] >> 1); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[4] + 0x2u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27c6f50; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27c5d30; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[11] - 0x30u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c5d54;
L_27c589c:;
    c->r[6] = c->r[4] + 0x12u;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c58acu; f_283b27c(c);
    c->r[1] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
L_27c58c0:;
    c->r[1] = 0x3au;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = c->r[4];
    c->r[14] = 0x27c58ecu; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27c5914u; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c592c; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c592cu; f_283b288(c);
L_27c592c:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[13] + 0x40u;
    c->r[2] = c->r[13] + 0x3cu;
    c->r[14] = 0x27c5948u; f_27c7718(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { goto L_27c5dec; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[3];
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[1], 0x10000000u);
    if (COND_CS) { goto L_27c6f38; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[2] >> 4);
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c5be4; }
    c->r[6] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[1]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    if (COND_CC) { c->r[6] = c->r[1]; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27c5bf4; }
    c->r[6] = 0x0u;
    goto L_27c5f6c;
L_27c59b0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c59b8:;
    c->r[1] = c->r[0] + (c->r[4] << 4);
    c->r[2] = c->r[0] + (c->r[6] << 4);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[9]); }
    c->r[3] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_27c5abc; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_27c5a28:;
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] - 0x10u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x10u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27c5a28; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c5ac4;
L_27c5a84:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[11] - 0x40u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27c5cac; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[1] = c->r[3]; }
    c->r[14] = 0x27c5ab8u; f_27cda3c(c);
    goto L_27c5cac;
L_27c5abc:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
L_27c5ac4:;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    c->r[14] = 0x27c5af0u; f_27e4b00(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c6580; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_27c5b4c; }
L_27c5b08:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c5b24; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c5b24u; f_283b288(c);
L_27c5b24:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c5b38; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c5b38u; f_283b288(c);
L_27c5b38:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_27c5b08; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c5b4c:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c6578; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LS) { goto L_27c6550; }
    goto L_27c6578;
L_27c5b68:;
    c->r[1] = 0x1u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x40u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27c63cc; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[1] = c->r[3]; }
    c->r[14] = 0x27c5ba0u; f_27cda3c(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_27c658c;
L_27c5ba8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = ~0xf0000000u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
L_27c5bbc:;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[6] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[6] << 4));
    if (COND_CS) { goto L_27c5e90; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c5be0u; f_283b27c(c);
    goto L_27c5e98;
L_27c5be4:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
L_27c5bf4:;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[6] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[6] << 4));
    if (COND_CS) { goto L_27c5f64; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c5c18u; f_283b27c(c);
    goto L_27c5f6c;
L_27c5c1c:;
    c->r[6] = c->r[4] + 0x12u;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c5c2cu; f_283b27c(c);
    c->r[1] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
L_27c5c40:;
    c->r[1] = 0x3au;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = c->r[4];
    c->r[14] = 0x27c5c6cu; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27c5c94u; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c5cac; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c5cacu; f_283b288(c);
L_27c5cac:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[13] + 0x40u;
    c->r[2] = c->r[13] + 0x3cu;
    c->r[14] = 0x27c5cc8u; f_27c7718(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { goto L_27c5dec; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[3];
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[1], 0x10000000u);
    if (COND_CS) { goto L_27c6f58; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[2] >> 4);
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c6038; }
    c->r[6] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[1]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    if (COND_CC) { c->r[6] = c->r[1]; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27c6048; }
    c->r[6] = 0x0u;
    goto L_27c61f4;
L_27c5d30:;
    c->r[6] = c->r[4] + 0x12u;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c5d40u; f_283b27c(c);
    c->r[1] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
L_27c5d54:;
    c->r[1] = 0x3au;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = c->r[4];
    c->r[14] = 0x27c5d80u; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27c5da8u; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c5dc0; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c5dc0u; f_283b288(c);
L_27c5dc0:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[13] + 0x40u;
    c->r[2] = c->r[13] + 0x3cu;
    c->r[14] = 0x27c5ddcu; f_27c7718(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_27c5e34; }
L_27c5dec:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27c6580;
L_27c5e34:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[3];
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[1], 0x10000000u);
    if (COND_CS) { goto L_27c6f60; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[2] >> 4);
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c6394; }
    c->r[6] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[1]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    if (COND_CC) { c->r[6] = c->r[1]; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27c63a4; }
    c->r[6] = 0x0u;
    goto L_27c63dc;
L_27c5e90:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c5e98:;
    c->r[1] = c->r[0] + (c->r[4] << 4);
    c->r[2] = c->r[0] + (c->r[6] << 4);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[9]); }
    c->r[3] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_27c6070; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_27c5f08:;
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] - 0x10u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x10u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27c5f08; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c6078;
L_27c5f64:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c5f6c:;
    c->r[1] = c->r[0] + (c->r[4] << 4);
    c->r[2] = c->r[0] + (c->r[6] << 4);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[9]); }
    c->r[3] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_27c6140; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_27c5fdc:;
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] - 0x10u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x10u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27c5fdc; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c6148;
L_27c6038:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
L_27c6048:;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[6] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[6] << 4));
    if (COND_CS) { goto L_27c61ec; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c606cu; f_283b27c(c);
    goto L_27c61f4;
L_27c6070:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
L_27c6078:;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    c->r[14] = 0x27c60a4u; f_27e4b00(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c62c8; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_27c6100; }
L_27c60bc:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c60d8; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c60d8u; f_283b288(c);
L_27c60d8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c60ec; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c60ecu; f_283b288(c);
L_27c60ec:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_27c60bc; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c6100:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c62c0; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c62c0; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    goto L_27c62c8;
L_27c6140:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
L_27c6148:;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    c->r[14] = 0x27c6174u; f_27e4b00(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c6580; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_27c61d0; }
L_27c618c:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c61a8; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c61a8u; f_283b288(c);
L_27c61a8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c61bc; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c61bcu; f_283b288(c);
L_27c61bc:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_27c618c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c61d0:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c6578; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LS) { goto L_27c6550; }
    goto L_27c6578;
L_27c61ec:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c61f4:;
    c->r[1] = c->r[0] + (c->r[4] << 4);
    c->r[2] = c->r[0] + (c->r[6] << 4);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[9]); }
    c->r[3] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_27c62e8; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_27c6264:;
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] - 0x10u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x10u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27c6264; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c62f0;
L_27c62c0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c62c8u; f_283b288(c);
L_27c62c8:;
    c->r[6] = 0x1u;
    c->r[4] = 0x0u;
L_27c62d0:;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c65a4; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c62e4u; f_283b288(c);
    goto L_27c65a4;
L_27c62e8:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
L_27c62f0:;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    c->r[14] = 0x27c631cu; f_27e4b00(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c6580; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_27c6378; }
L_27c6334:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6350; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6350u; f_283b288(c);
L_27c6350:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6364; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6364u; f_283b288(c);
L_27c6364:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_27c6334; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c6378:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c6578; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LS) { goto L_27c6550; }
    goto L_27c6578;
L_27c6394:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
L_27c63a4:;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[6] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[6] << 4));
    if (COND_CS) { goto L_27c63d4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c63c8u; f_283b27c(c);
    goto L_27c63dc;
L_27c63cc:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_27c658c;
L_27c63d4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c63dc:;
    c->r[1] = c->r[0] + (c->r[4] << 4);
    c->r[2] = c->r[0] + (c->r[6] << 4);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[9]); }
    c->r[3] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_27c64a8; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_27c644c:;
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] - 0x10u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x10u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27c644c; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c64b0;
L_27c64a8:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
L_27c64b0:;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    c->r[14] = 0x27c64dcu; f_27e4b00(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c6580; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_27c6538; }
L_27c64f4:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6510; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6510u; f_283b288(c);
L_27c6510:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6524; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6524u; f_283b288(c);
L_27c6524:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_27c64f4; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c6538:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c6578; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c6578; }
L_27c6550:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    goto L_27c6580;
L_27c6578:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c6580u; f_283b288(c);
L_27c6580:;
    c->r[0] = 0x1u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_27c658c:;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c65a0; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c65a0u; f_283b288(c);
L_27c65a0:;
    c->r[6] = 0x0u;
L_27c65a4:;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_EQ) { goto L_27c4f70; }
    goto L_27c6dc8;
L_27c65b4:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[6] - 0x18u;
L_27c65bc:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c65d8; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c65d8u; f_283b288(c);
L_27c65d8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c65ec; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c65ecu; f_283b288(c);
L_27c65ec:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_27c65bc; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    goto L_27c6dc8;
L_27c6600:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c66ec; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_27c66ec; }
    c->r[0] = c->r[9] - 0x10u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
L_27c6630:;
    c->r[8] = c->r[9] - 0x10u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] - 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c66dc; }
    { uint32_t ea = c->r[9] - 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27c6694; }
L_27c6650:;
    c->r[10] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[9] - 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c666c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c666cu; f_283b288(c);
L_27c666c:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6680; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6680u; f_283b288(c);
L_27c6680:;
    { uint32_t ea = c->r[9] - 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_NE) { goto L_27c6650; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
L_27c6694:;
    { uint32_t ea = c->r[9] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c66d4; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c66d4; }
    { uint32_t ea = c->r[9] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    goto L_27c66dc;
L_27c66d4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c66dcu; f_283b288(c);
L_27c66dc:;
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_NE) { goto L_27c6630; }
L_27c66ec:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0]; ST8(ea, c->r[6]); } }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_27c6dc8;
L_27c670c:;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    goto L_27c6dc8;
L_27c6714:;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    goto L_27c6dc8;
L_27c671c:;
    c->r[0] = 0x0u;
    c->r[6] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
L_27c672c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[6] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[6] << 4));
    if (COND_CS) { goto L_27c6804; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c6750u; f_283b27c(c);
    goto L_27c680c;
L_27c6754:;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[9] = c->r[8];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27c6cd8; }
    c->r[4] = c->r[6] - 0x18u;
L_27c6768:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6784; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6784u; f_283b288(c);
L_27c6784:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6798; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6798u; f_283b288(c);
L_27c6798:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_27c6768; }
L_27c67a4:;
    c->r[9] = c->r[8];
    goto L_27c6cd8;
L_27c67ac:;
    c->r[1] = c->r[1] - 0x30u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_27c67dc; }
    c->r[0] = c->r[0] + 0x3u;
L_27c67bc:;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { goto L_27c67d8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] + 0x1u; c->r[1] = v; }
    c->r[1] = c->r[1] - 0x30u;
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_CC) { goto L_27c67bc; }
    goto L_27c67dc;
L_27c67d8:;
    c->r[9] = c->r[7];
L_27c67dc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27c6cd8; }
    c->r[1] = 0x37b347u;
    c->r[0] = c->r[0] - 0x18u;
    c->r[2] = 0x10u;
    c->r[1] = 0x27c6800u + c->r[1];
    c->r[14] = 0x27c6800u; f_27c75a8(c);
    goto L_27c6cd8;
L_27c6804:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c680c:;
    c->r[2] = c->r[0] + (c->r[4] << 4);
    c->r[1] = c->r[0] + (c->r[6] << 4);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27c68d8; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_27c6880:;
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] - 8u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] - 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27c6880; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c68e0;
L_27c68d8:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27c68e0:;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27c690cu; f_27e4b00(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27c69bc; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_EQ) { goto L_27c696c; }
L_27c6928:;
    c->r[7] = c->r[4] - 0x18u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6944; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6944u; f_283b288(c);
L_27c6944:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6958; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6958u; f_283b288(c);
L_27c6958:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_NE) { goto L_27c6928; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c696c:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27c69b4; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27c69b4; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[6];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[6] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); } }
    goto L_27c69bc;
L_27c69ac:;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    goto L_27c6dc8;
L_27c69b4:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c69bcu; f_283b288(c);
L_27c69bc:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c69ccu; f_27c79bc(c);
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_27c6b00; }
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    c->r[1] = c->r[4] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27c6ddc; }
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27c6a18u; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27c6a44:;
    c->r[6] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6a60; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6a60u; f_283b288(c);
L_27c6a60:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6a74; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6a74u; f_283b288(c);
L_27c6a74:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_NE) { goto L_27c6a44; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27c6ad8; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    c->r[1] = c->r[4];
    if (COND_EQ) { c->r[2] = (c->r[5] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[8] - 0x30u;
    c->r[14] = 0x27c6ab4u; f_27c75a8(c);
L_27c6ab4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->r[7] = c->r[9];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); } }
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c6aec; }
    goto L_27c6af4;
L_27c6ad8:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[4] = 0x1u;
    c->r[7] = c->r[10];
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6af4; }
L_27c6aec:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6af4u; f_283b288(c);
L_27c6af4:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { c->r[10] = c->r[7]; }
    goto L_27c6ddc;
L_27c6b00:;
    c->r[7] = c->r[10];
    goto L_27c6dd8;
L_27c6b08:;
    c->r[0] = c->r[0] - 0x31u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_27c6b3c; }
    c->r[0] = c->r[7] - 0x1u;
L_27c6b1c:;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_27c67a4; }
    c->r[1] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x30u;
    (void)f_subs(c, c->r[2], 0xau);
    c->r[2] = c->r[1];
    if (COND_CC) { goto L_27c6b1c; }
L_27c6b3c:;
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[9] = c->r[8];
    if (COND_EQ) { goto L_27c6cd8; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = c->r[8];
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_27c6cd8; }
    c->r[4] = c->r[1] + 0x1u;
    c->r[1] = c->r[7];
    c->r[0] = c->r[4];
    c->r[2] = c->r[5];
    c->r[3] = c->r[6];
    c->r[14] = 0x27c6b70u; f_27c47a4(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], c->r[4]);
    if (COND_EQ) { goto L_27c6e48; }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    c->r[7] = c->r[8];
    c->r[0] = c->r[4] - c->r[0];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_27c6cdc; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27c6bc4u; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27c6bf0:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6c0c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6c0cu; f_283b288(c);
L_27c6c0c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6c20; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6c20u; f_283b288(c);
L_27c6c20:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27c6bf0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27c6ed0; }
    c->r[1] = 0x37ad14u;
    c->r[0] = c->r[8] - 0x30u;
    c->r[1] = 0x27c6c48u + c->r[1];
    c->r[2] = 0x2u;
    c->r[14] = 0x27c6c4cu; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    c->r[3] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[3] | 0x1u; }
    if (COND_EQ) { c->r[2] = (c->r[4] >> 1); }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27c6c74u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[5] = 0x0u;
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c6ee8; }
    goto L_27c6ef0;
L_27c6c88:;
    c->r[0] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_27c6cb8; }
    c->r[0] = c->r[9] + 0x1u;
L_27c6c98:;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { goto L_27c6cb4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] + 0x1u; c->r[1] = v; }
    c->r[1] = c->r[1] - 0x30u;
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_CC) { goto L_27c6c98; }
    goto L_27c6cb8;
L_27c6cb4:;
    c->r[9] = c->r[7];
L_27c6cb8:;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[4] - c->r[0];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { goto L_27c6ce8; }
L_27c6cd8:;
    c->r[7] = c->r[9];
L_27c6cdc:;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_EQ) { c->r[7] = c->r[10]; }
    goto L_27c6dd8;
L_27c6ce8:;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27c6d0cu; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27c6d38:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6d54; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6d54u; f_283b288(c);
L_27c6d54:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6d68; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6d68u; f_283b288(c);
L_27c6d68:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27c6d38; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27c6de8; }
    c->r[1] = 0x37abccu;
    c->r[0] = c->r[8] - 0x30u;
    c->r[1] = 0x27c6d90u + c->r[1];
    c->r[2] = 0x2u;
    c->r[14] = 0x27c6d94u; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    c->r[3] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[3] | 0x1u; }
    if (COND_EQ) { c->r[2] = (c->r[4] >> 1); }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27c6dbcu; f_27c75a8(c);
    c->r[5] = 0x0u;
    goto L_27c6df0;
L_27c6dc4:;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
L_27c6dc8:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_NE) { c->r[10] = c->r[0]; }
    c->r[7] = c->r[10];
L_27c6dd8:;
    c->r[10] = c->r[7];
L_27c6ddc:;
    c->r[0] = c->r[10];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27c6de8:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[5] = 0x1u;
L_27c6df0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6e04; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6e04u; f_283b288(c);
L_27c6e04:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[7] = c->r[9];
    if (COND_EQ) { c->r[7] = c->r[9]; }
    goto L_27c6cdc;
L_27c6e14:;
    (void)f_subs(c, c->r[1], 0x5fu);
    if (COND_NE) { goto L_27c67dc; }
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27c67dc; }
L_27c6e28:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x30u;
    (void)f_subs(c, c->r[2], 0x9u);
    if (COND_HI) { goto L_27c6f00; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_NE) { goto L_27c6e28; }
    goto L_27c67dc;
L_27c6e48:;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[9] = c->r[8];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27c6cd8; }
    c->r[4] = c->r[6] - 0x18u;
L_27c6e5c:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6e78; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6e78u; f_283b288(c);
L_27c6e78:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6e8c; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6e8cu; f_283b288(c);
L_27c6e8c:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_27c6e5c; }
    goto L_27c67a4;
L_27c6e9c:;
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_27c6cb8; }
    c->r[0] = c->r[9] + 0x2u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27c6cb8; }
L_27c6eb0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x30u;
    (void)f_subs(c, c->r[2], 0x9u);
    if (COND_HI) { goto L_27c6f0c; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_NE) { goto L_27c6eb0; }
    goto L_27c6cb8;
L_27c6ed0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[9] = c->r[8];
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c6ef0; }
L_27c6ee8:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c6ef0u; f_283b288(c);
L_27c6ef0:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[7] = c->r[8];
    if (COND_NE) { goto L_27c6cdc; }
    goto L_27c6cd8;
L_27c6f00:;
    (void)f_subs(c, c->r[1], 0x5fu);
    if (COND_EQ) { c->r[9] = c->r[0] + 0x1u; }
    goto L_27c67dc;
L_27c6f0c:;
    (void)f_subs(c, c->r[1], 0x5fu);
    if (COND_EQ) { c->r[9] = c->r[0] + 0x1u; }
    goto L_27c6cb8;
L_27c6f18:;
    c->r[14] = 0x27c6f20u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c6f20:;
    c->r[14] = 0x27c6f28u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c6f28:;
    c->r[14] = 0x27c6f30u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c6f30:;
    c->r[14] = 0x27c6f38u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c6f38:;
    c->r[14] = 0x27c6f40u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c6f40:;
    c->r[14] = 0x27c6f48u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c6f48:;
    c->r[14] = 0x27c6f50u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c6f50:;
    c->r[14] = 0x27c6f58u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c6f58:;
    c->r[14] = 0x27c6f60u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c6f60:;
    c->r[14] = 0x27c6f68u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c6f68:;
    c->r[14] = 0x27c6f70u;
    __attribute__((musttail)) return f_284f5c8(c);
}
