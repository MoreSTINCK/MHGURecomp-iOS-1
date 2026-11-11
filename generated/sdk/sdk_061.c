#include "cpu.h"
#include "neon_rt.h"
void f_27b9310(Cpu *c);
void f_27bab48(Cpu *c);
void f_27c73c8(Cpu *c);
void f_27c75a8(Cpu *c);
void f_27c7718(Cpu *c);
void f_27c79bc(Cpu *c);
void f_27c8b14(Cpu *c);
void f_27ca728(Cpu *c);
void f_27cbb1c(Cpu *c);
void f_27cbd88(Cpu *c);
void f_27cdb70(Cpu *c);
void f_27d4d10(Cpu *c);
void f_27d9304(Cpu *c);
void f_27d9e44(Cpu *c);
void f_27da190(Cpu *c);
void f_27dac98(Cpu *c);
void f_27e3728(Cpu *c);
void f_27e4648(Cpu *c);
void f_27e4b00(Cpu *c);
void f_283aa78(Cpu *c);
void f_283b27c(Cpu *c);
void f_283b288(Cpu *c);
void f_283b33c(Cpu *c);
void f_284f5c8(Cpu *c);
void f_2854f38(Cpu *c);
void f_27d4d10(Cpu *restrict c) {
    FN_ENTER(0x27d4d10u);
L_27d4d10:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    c->r[6] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d4d3c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    goto L_27d4e64;
L_27d4d3c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = 0x0u;
    c->r[7] = 0xau;
    c->r[8] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4d70; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[8] = c->r[0] - 0x1u;
L_27d4d70:;
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d4da0; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[10] = (c->r[4] >> 1) & 0x7fu;
    c->r[9] = 0x1u;
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CS) { c->r[0] = c->r[10] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xf0u; }
    if (COND_CS) { c->r[7] = c->r[0] - 0x1u; }
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_NE) { goto L_27d4dac; }
    goto L_27d4e64;
L_27d4da0:;
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_EQ) { goto L_27d4e64; }
L_27d4dac:;
    (void)f_subs(c, c->r[7], 0xau);
    if (COND_NE) { goto L_27d4ddc; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_27d4e24; }
    c->r[1] = c->r[4] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[8];
    c->r[14] = 0x27d4dd8u; f_283aa78(c);
    goto L_27d4e2c;
L_27d4ddc:;
    c->r[0] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27d4de8u; f_283b27c(c);
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_HI) { goto L_27d4dfc; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_27d4e64; }
L_27d4dfc:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27d4e40; }
    c->r[0] = c->r[4] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    c->r[1] = c->r[6] + 0x1u;
    c->r[0] = c->r[3];
    c->r[4] = c->r[3];
    c->r[14] = 0x27d4e20u; f_283aa78(c);
    goto L_27d4e54;
L_27d4e24:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27d4e2c:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27d4e34u; f_283b288(c);
    c->r[0] = (c->r[10] << 1);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    goto L_27d4e64;
L_27d4e40:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[3];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27d4e54u; f_283b288(c);
L_27d4e54:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[4]); }
L_27d4e64:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[6];
    c->v.d[16] = LD64(c->r[5]);
    c->r[7] = c->r[5] + 0xcu;
    ST64(c->r[6], c->v.d[16]);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD8(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d4ea0; }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    goto L_27d4fe4;
L_27d4ea0:;
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0xau;
    c->r[10] = 0xau;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4ed0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[10] = c->r[0] - 0x1u;
L_27d4ed0:;
    c->r[1] = 0x0u;
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d4f04; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[1] = (c->r[5] >> 1) & 0x7fu;
    c->r[9] = 0x1u;
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CS) { c->r[0] = c->r[1] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xf0u; }
    if (COND_CS) { c->r[8] = c->r[0] - 0x1u; }
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_NE) { goto L_27d4f10; }
    goto L_27d4fe4;
L_27d4f04:;
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_EQ) { goto L_27d4fe4; }
L_27d4f10:;
    (void)f_subs(c, c->r[8], 0xau);
    if (COND_NE) { goto L_27d4f4c; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_27d4f94; }
    c->r[8] = c->r[1];
    c->r[1] = c->r[5] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[6];
    c->r[14] = 0x27d4f40u; f_283aa78(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x27d4f48u; f_283b288(c);
    goto L_27d4fac;
L_27d4f4c:;
    c->r[0] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[14] = 0x27d4f58u; f_283b27c(c);
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_HI) { goto L_27d4f6c; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_27d4fe4; }
L_27d4f6c:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27d4fb8; }
    c->r[0] = c->r[5] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    c->r[1] = c->r[4] + 0x1u;
    c->r[0] = c->r[3];
    c->r[5] = c->r[3];
    c->r[14] = 0x27d4f90u; f_283aa78(c);
    goto L_27d4fcc;
L_27d4f94:;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x27d4fa8u; f_283b288(c);
    c->r[8] = c->r[5];
L_27d4fac:;
    c->r[0] = (c->r[8] << 1);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_27d4fe4;
L_27d4fb8:;
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27d4fccu; f_283b288(c);
L_27d4fcc:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[5]); }
L_27d4fe4:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[7]);
    ST64(c->r[4], c->v.d[16]);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27d500c(Cpu *restrict c) {
    FN_ENTER(0x27d500cu);
L_27d500c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x8cu;
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = c->r[6] - c->r[4];
    c->r[9] = c->r[2];
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_LT) { goto L_27d6f8c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4cu);
    if (COND_NE) { goto L_27d6f8c; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] - 0x54u;
    (void)f_subs(c, c->r[0], 0x25u);
    if (COND_HI) { goto L_27d54b8; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27d505cu + 0x14u;
    c->r[5] = 0x5555u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0xaaaau;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x5550000u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xaaa0000u;
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27d5108u: goto L_27d5108; case 0x27d5144u: goto L_27d5144; case 0x27d5188u: goto L_27d5188; case 0x27d5204u: goto L_27d5204; case 0x27d523cu: goto L_27d523c; case 0x27d5284u: goto L_27d5284; case 0x27d52d4u: goto L_27d52d4; case 0x27d5344u: goto L_27d5344; case 0x27d5480u: goto L_27d5480; case 0x27d54b8u: goto L_27d54b8; case 0x27d54ecu: goto L_27d54ec; case 0x27d5610u: goto L_27d5610; case 0x27d57c8u: goto L_27d57c8; case 0x27d582cu: goto L_27d582c; case 0x27d5890u: goto L_27d5890; case 0x27d5970u: goto L_27d5970; case 0x27d59ccu: goto L_27d59cc; case 0x27d59f8u: goto L_27d59f8; case 0x27d5a60u: goto L_27d5a60; case 0x27d5ae0u: goto L_27d5ae0; case 0x27d6f8cu: goto L_27d6f8c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27d5108:;
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5au);
    if (COND_NE) { goto L_27d6f8c; }
    c->r[5] = c->r[4] + 0x3u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d5128u; f_27b9310(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[6]); }
    if (COND_EQ) { goto L_27d6f8c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] + 0x1u; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x45u);
    if (COND_EQ) { c->r[4] = c->r[0]; }
    goto L_27d6f8c;
L_27d5144:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x6cu;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d5184u; f_27d9304(c);
    goto L_27d5ad4;
L_27d5188:;
    c->r[0] = 0x0u;
    c->r[1] = 0x10u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    c->r[3] = 0x38u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x5u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = 0x31u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[3] = 0x6eu;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = 0x5fu;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x32u;
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[1]); }
    c->r[1] = 0x74u;
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[1]); }
    c->r[1] = 0x69u;
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3fu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d5200u; f_27d9304(c);
    goto L_27d5ad4;
L_27d5204:;
    c->r[0] = 0x0u;
    c->r[1] = 0x7502u;
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d5238u; f_27d9304(c);
    goto L_27d5ad4;
L_27d523c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x6cu;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x75u;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d5280u; f_27d9304(c);
    goto L_27d5ad4;
L_27d5284:;
    c->r[0] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    c->r[3] = 0x6cu;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x75u;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x44u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d52d0u; f_27d9304(c);
    goto L_27d5ad4;
L_27d52d4:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27d52dcu; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x3e2decu;
    c->r[1] = 0x11u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x61u;
    c->r[0] = 0x27d5304u + c->r[0];
    { uint32_t ea = c->r[7] + 0x9u; ST8(ea, c->r[1]); }
    c->r[1] = 0x68u;
    c->r[5] = c->r[4] + 0x2u;
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = 0x72u;
    { uint32_t ea = c->r[7] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xau; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[7] + 0xbu; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d533cu; f_27d9304(c);
    c->r[6] = c->r[0];
    goto L_27d5b44;
L_27d5344:;
    c->r[0] = c->r[4] + 0x2u;
    c->r[1] = 0x2u;
    c->r[2] = c->r[6] - c->r[0];
    (void)f_subs(c, c->r[2], 0x11u);
    if (COND_CC) { goto L_27d5604; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[10] = 0x0u;
    c->r[7] = ~0xfu;
    c->r[5] = c->r[13] + 0x50u;
L_27d5368:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27d5370u; f_2854f38(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d5600; }
    c->r[1] = c->r[4] + (c->r[10] << 1);
    c->r[2] = c->r[6] - 0x30u;
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_CS) { c->r[6] = c->r[6] + 0x9u; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + (c->r[6] << 4);
    c->r[0] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[0], 0xau);
    c->r[0] = 0xa9u;
    if (COND_CC) { c->r[0] = 0xd0u; }
    c->r[7] = f_adds(c, c->r[7], 0x2u);
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[5] + c->r[10]; ST8(ea, c->r[0]); }
    c->r[10] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD8(ea); c->r[6] = v; }
    if (COND_NE) { goto L_27d5368; }
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[6], 0x45u);
    if (COND_NE) { goto L_27d5604; }
    c->r[1] = c->r[5] + c->r[10];
    c->r[2] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_LS) { goto L_27d5414; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_27d5414; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10] - 0x2u;
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_LT) { goto L_27d5414; }
    c->r[0] = c->r[1] - 0x2u;
    c->r[1] = c->r[5] | 0x1u;
L_27d53fc:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); c->r[1] = c->r[1] + 0x1u; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[3]); c->r[0] = c->r[0] - 0x1u; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_27d53fc; }
L_27d5414:;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[0] = c->r[11] - 0x48u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0x36b8a9u;
    c->r[2] = 0x27d5434u + c->r[1];
    c->r[1] = 0x20u;
    c->v.d[16] = LD64(c->r[13] + 80u);
    ST64(c->r[13], c->v.d[16]);
    c->r[14] = 0x27d5440u; f_283b33c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1fu);
    if (COND_HI) { goto L_27d5600; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], 0xbu);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27d608c; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x40u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x40u;
    c->r[10] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27d60b0; }
    goto L_27d60c0;
L_27d5480:;
    c->r[0] = 0x0u;
    c->r[1] = 0x6c02u;
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d54b4u; f_27d9304(c);
    goto L_27d5ad4;
L_27d54b8:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d54c8u; f_27bab48(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_NE) { (void)f_subs(c, c->r[8], c->r[6]); }
    if (COND_EQ) { goto L_27d6f8c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_27d5b58; }
    c->r[4] = c->r[8] + 0x1u;
    goto L_27d6f8c;
L_27d54ec:;
    c->r[0] = c->r[4] + 0x2u;
    c->r[1] = 0x2u;
    c->r[2] = c->r[6] - c->r[0];
    (void)f_subs(c, c->r[2], 0x11u);
    if (COND_CC) { goto L_27d5604; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    c->r[7] = ~0xfu;
    c->r[10] = c->r[13] + 0x40u;
L_27d5510:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27d5518u; f_2854f38(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d5600; }
    c->r[1] = c->r[4] + (c->r[5] << 1);
    c->r[2] = c->r[6] - 0x30u;
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_CS) { c->r[6] = c->r[6] + 0x9u; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + (c->r[6] << 4);
    c->r[0] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[0], 0xau);
    c->r[0] = 0xa9u;
    if (COND_CC) { c->r[0] = 0xd0u; }
    c->r[7] = f_adds(c, c->r[7], 0x2u);
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[10] + c->r[5]; ST8(ea, c->r[0]); }
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD8(ea); c->r[6] = v; }
    if (COND_NE) { goto L_27d5510; }
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[6], 0x45u);
    if (COND_NE) { goto L_27d5604; }
    c->r[1] = c->r[10] + c->r[5];
    c->r[2] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_LS) { goto L_27d55bc; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27d55bc; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5] - 0x2u;
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_LT) { goto L_27d55bc; }
    c->r[0] = c->r[1] - 0x2u;
    c->r[1] = c->r[10] | 0x1u;
L_27d55a4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); c->r[1] = c->r[1] + 0x1u; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[3]); c->r[0] = c->r[0] - 0x1u; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_27d55a4; }
L_27d55bc:;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[0] = c->r[11] - 0x48u;
    c->r[1] = c->r[0];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0x36c3ddu;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[5]); }
    c->r[2] = 0x27d55e4u + c->r[1];
    c->r[1] = 0x28u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[5]); }
    c->v.d[16] = LD64(c->r[13] + 64u);
    ST64(c->r[13], c->v.d[16]);
    c->r[14] = 0x27d55f4u; f_283b33c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x27u);
    if (COND_LS) { goto L_27d5e48; }
L_27d5600:;
    c->r[1] = 0x2u;
L_27d5604:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { c->r[4] = c->r[4] + c->r[1]; }
    goto L_27d6f8c;
L_27d5610:;
    c->r[0] = c->r[4] + 0x2u;
    c->r[7] = 0x2u;
    c->r[1] = c->r[6] - c->r[0];
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_CC) { goto L_27d6f84; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27d5630u; f_2854f38(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d6f84; }
    c->r[1] = c->r[5] - 0x30u;
    { uint32_t ea = c->r[4] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    c->r[6] = 0xa9u;
    if (COND_CS) { c->r[5] = c->r[5] + 0x9u; }
    c->r[1] = c->r[0] + (c->r[5] << 4);
    c->r[0] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[0], 0xau);
    c->r[0] = 0xa9u;
    if (COND_CC) { c->r[0] = 0xd0u; }
    c->r[10] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27d5674u; f_2854f38(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d6f84; }
    c->r[1] = c->r[5] - 0x30u;
    { uint32_t ea = c->r[4] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_CS) { c->r[5] = c->r[5] + 0x9u; }
    c->r[1] = c->r[0] + (c->r[5] << 4);
    c->r[0] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_CC) { c->r[6] = 0xd0u; }
    c->r[0] = c->r[1] + c->r[6];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x51u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27d56b4u; f_2854f38(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d6f84; }
    c->r[1] = c->r[5] - 0x30u;
    { uint32_t ea = c->r[4] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    c->r[6] = 0xa9u;
    if (COND_CS) { c->r[5] = c->r[5] + 0x9u; }
    c->r[1] = c->r[0] + (c->r[5] << 4);
    c->r[0] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[0], 0xau);
    c->r[0] = 0xa9u;
    if (COND_CC) { c->r[0] = 0xd0u; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x52u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27d56fcu; f_2854f38(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d6f84; }
    c->r[1] = c->r[5] - 0x30u;
    { uint32_t ea = c->r[4] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_CS) { c->r[5] = c->r[5] + 0x9u; }
    c->r[1] = c->r[0] + (c->r[5] << 4);
    c->r[0] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_CC) { c->r[6] = 0xd0u; }
    c->r[0] = c->r[1] + c->r[6];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0x53u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xau; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x45u);
    if (COND_NE) { goto L_27d6f80; }
    { uint32_t ea = c->r[13] + 0x50u; ST8(ea, c->r[0]); }
    c->r[5] = 0x0u;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x53u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x51u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x52u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    c->r[1] = c->r[0];
    c->v.s[0] = LD32(c->r[13] + 80u);
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    c->r[1] = 0x36c23du;
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[5]); }
    c->r[2] = 0x27d5780u + c->r[1];
    c->r[1] = 0x18u;
    c->v.df[16] = (double)c->v.f[0];
    ST64(c->r[13], c->v.d[16]);
    c->r[14] = 0x27d578cu; f_283b33c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x17u);
    if (COND_HI) { goto L_27d6f84; }
    (void)f_subs(c, c->r[6], 0xbu);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    if (COND_CS) { goto L_27d67fc; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x28u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x28u;
    c->r[7] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27d6820; }
    goto L_27d6830;
L_27d57c8:;
    c->r[0] = 0x20u;
    c->r[14] = 0x27d57d0u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x3e2938u;
    c->r[1] = 0x21u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    c->r[0] = 0x27d57e8u + c->r[0];
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x11u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    c->r[1] = 0x38u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[7] + 0x11u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d5824u; f_27d9304(c);
    c->r[6] = c->r[0];
    goto L_27d5b44;
L_27d582c:;
    c->r[0] = 0x0u;
    c->r[1] = 0xau;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    c->r[3] = 0x72u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = 0x68u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x6fu;
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[1]); }
    c->r[1] = 0x73u;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    c->r[1] = 0x74u;
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d588cu; f_27d9304(c);
    goto L_27d5ad4;
L_27d5890:;
    { uint32_t ea = c->r[4] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_27d6f8c; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x31u);
    if (COND_EQ) { goto L_27d5c90; }
    (void)f_subs(c, c->r[0], 0x30u);
    if (COND_NE) { goto L_27d6f8c; }
    c->r[0] = 0x65u;
    { uint32_t ea = c->r[13] + 0x54u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6166u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x736c0000u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d5d48; }
    c->r[2] = 0xau;
    c->r[7] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[13] + 0x54u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x42u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    goto L_27d5d28;
L_27d5970:;
    c->r[0] = 0x0u;
    c->r[1] = 0x8u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    c->r[3] = 0x72u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = 0x68u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x61u;
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[1]); }
    c->r[1] = 0x63u;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d59c8u; f_27d9304(c);
    goto L_27d5ad4;
L_27d59cc:;
    c->r[0] = 0x0u;
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d59f4u; f_27d9304(c);
    goto L_27d5ad4;
L_27d59f8:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27d5a00u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x3e26e8u;
    c->r[1] = 0x11u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    c->r[0] = 0x27d5a18u + c->r[0];
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = c->r[0] + 0x5u;
    c->r[1] = 0xdu;
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[0]; c->v.d[17] = LD64(ea + 0u); }
    c->r[0] = c->r[7] + 0x5u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xdu; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d5a58u; f_27d9304(c);
    c->r[6] = c->r[0];
    goto L_27d5b44;
L_27d5a60:;
    c->r[0] = 0x0u;
    c->r[1] = 0xeu;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    c->r[3] = 0x5fu;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x5u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[3] = 0x61u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = 0x63u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x72u;
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[1]); }
    c->r[1] = 0x68u;
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[1]); }
    c->r[1] = 0x77u;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    c->r[1] = 0x74u;
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d5ad4u; f_27d9304(c);
L_27d5ad4:;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { c->r[4] = c->r[0]; }
    goto L_27d6f8c;
L_27d5ae0:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27d5ae8u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x3e2610u;
    c->r[1] = 0x11u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    c->r[0] = 0x27d5b00u + c->r[0];
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = c->r[0] + 0x6u;
    c->r[1] = 0xeu;
    c->r[5] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[0]; c->v.d[17] = LD64(ea + 0u); }
    c->r[0] = c->r[7] + 0x6u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xeu; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x27d5b40u; f_27d9304(c);
    c->r[6] = c->r[0];
L_27d5b44:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27d5b4cu; f_283b288(c);
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { c->r[4] = c->r[6]; }
    goto L_27d6f8c;
L_27d5b58:;
    c->r[1] = c->r[0] - 0x30u;
    c->r[5] = c->r[8];
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_27d5b90; }
    c->r[1] = c->r[6] - 0x1u;
    c->r[2] = c->r[8];
L_27d5b70:;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27d6f8c; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[2] + 0x1u;
    c->r[2] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[2], 0xau);
    c->r[2] = c->r[5];
    if (COND_CC) { goto L_27d5b70; }
L_27d5b90:;
    (void)f_subs(c, c->r[5], c->r[8]);
    if (COND_EQ) { goto L_27d6f8c; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_27d6f8c; }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27d6f8c; }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[6] - 0xbu; }
    c->r[0] = c->r[6] - 0x18u;
    c->r[14] = 0x27d5bccu; f_27c75a8(c);
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x36bd8cu;
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[13] + 40u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[4]); }
    c->r[2] = 0x27d5bf8u + c->r[1];
    c->r[0] = c->r[13] + 0x28u;
    c->r[1] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x27d5c04u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[13] + 64u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x36bd3du;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27d5c2cu + c->r[2];
    c->r[0] = c->r[13] + 0x40u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d5c34u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[5] - c->r[8];
    c->v.d[16] = LD64(c->r[0]);
    (void)f_adds(c, c->r[6], 0x10u);
    ST64(c->r[13] + 80u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    if (COND_CS) { goto L_27d6fa8; }
    (void)f_subs(c, c->r[6], 0xau);
    if (COND_HI) { goto L_27d5e78; }
    c->r[0] = (c->r[6] << 1);
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[0] = c->r[0] | 0x1u;
    (void)f_subs(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27d5ea0; }
    goto L_27d5eec;
L_27d5c90:;
    c->r[0] = 0x0u;
    c->r[7] = 0x7274u;
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x65750000u;
    { uint32_t ea = c->r[11] - 0x44u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d5dc8; }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[7] >> 24);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[7]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[7] >> 16);
    c->r[6] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[7] >> 8);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x5u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x7u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xbu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x42u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
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
L_27d5d28:;
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    c->r[4] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[11] - 0x44u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27d6f8c;
L_27d5d48:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_HI) { goto L_27d6f98; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CS) { goto L_27d5d94; }
    c->r[8] = (c->r[1] << 1);
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { c->r[8] = c->r[0]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27d646c; }
L_27d5d94:;
    c->r[0] = c->r[8] + (c->r[8] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d6074; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27d5dc4u; f_283b27c(c);
    goto L_27d6474;
L_27d5dc8:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_HI) { goto L_27d6fa0; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CS) { goto L_27d5e14; }
    c->r[8] = (c->r[1] << 1);
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { c->r[8] = c->r[0]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27d662c; }
L_27d5e14:;
    c->r[0] = c->r[8] + (c->r[8] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d6080; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27d5e44u; f_283b27c(c);
    goto L_27d6634;
L_27d5e48:;
    (void)f_subs(c, c->r[6], 0xbu);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[5]); }
    if (COND_CS) { goto L_27d627c; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x50u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x50u;
    c->r[10] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27d62a0; }
    goto L_27d62b0;
L_27d5e78:;
    c->r[4] = c->r[6] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27d5e88u; f_283b27c(c);
    c->r[1] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[6], 0x10u);
    if (COND_CC) { goto L_27d5eec; }
L_27d5ea0:;
    c->r[7] = c->r[6];
    c->r[7] = c->r[7] & 0xfffffff0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27d5eec; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CC) { c->r[1] = c->r[0] + c->r[6]; }
    if (COND_CC) { (void)f_subs(c, c->r[8], c->r[1]); }
    if (COND_CC) { goto L_27d5eec; }
    c->r[2] = c->r[0] + c->r[7];
    c->r[1] = c->r[8] + c->r[7];
    c->r[3] = c->r[7];
    c->r[4] = c->r[0];
L_27d5ed0:;
    { uint32_t ea = c->r[8]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[8] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x10u);
    { uint32_t ea = c->r[4]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[4] = ea + 16u; }
    if (COND_NE) { goto L_27d5ed0; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_27d5ef4; }
    goto L_27d5f04;
L_27d5eec:;
    c->r[1] = c->r[8];
    c->r[2] = c->r[0];
L_27d5ef4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[3] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); c->r[2] = c->r[2] + 0x1u; }
    if (COND_NE) { goto L_27d5ef4; }
L_27d5f04:;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[6]; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[10];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[13] + 0x50u;
    c->r[14] = 0x27d5f38u; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[7] = c->r[14] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[3] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[6] | (c->r[1] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[2] = c->r[7] | (c->r[2] << 16);
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x24u; ST16(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    c->r[4] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[6] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0x26u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[0] >> 8);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[7] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d5ff4u; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6008; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6008u; f_283b288(c);
L_27d6008:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d601c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d601cu; f_283b288(c);
L_27d601c:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d6030; }
    c->r[0] = c->r[10];
    c->r[14] = 0x27d6030u; f_283b288(c);
L_27d6030:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6044; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6044u; f_283b288(c);
L_27d6044:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6058; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6058u; f_283b288(c);
L_27d6058:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d606c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d606cu; f_283b288(c);
L_27d606c:;
    c->r[4] = c->r[5] + 0x1u;
    goto L_27d6f8c;
L_27d6074:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d6474;
L_27d6080:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d6634;
L_27d608c:;
    c->r[5] = c->r[6] + 0x10u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d609cu; f_283b27c(c);
    c->r[10] = c->r[0];
    c->r[0] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
L_27d60b0:;
    c->r[1] = c->r[11] - 0x48u;
    c->r[0] = c->r[10];
    c->r[2] = c->r[6];
    c->r[14] = 0x27d60c0u; f_283aa78(c);
L_27d60c0:;
    c->r[14] = 0x0u;
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[10] + c->r[6]; ST8(ea, c->r[14]); }
    c->r[2] = c->r[1] | 0x1u;
    c->r[1] = c->r[1] | 0x5u;
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x41u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x43u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[6] = c->r[6] | (c->r[12] << 8);
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x45u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[5] | (c->r[2] << 8);
    { uint32_t ea = c->r[13] + 0x47u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[6] | (c->r[2] << 16);
    c->r[1] = c->r[3] | (c->r[1] << 8);
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD8(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[9] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d61e8; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[10]); }
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x16u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[0] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[0] >> 8);
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27d6ba4;
L_27d61e8:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_HI) { goto L_27d6fb0; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x5555u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d623c; }
    c->r[8] = (c->r[1] << 1);
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { c->r[8] = c->r[0]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27d69e8; }
L_27d623c:;
    c->r[0] = c->r[8] + (c->r[8] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d67e4; }
    c->r[0] = c->r[1];
    c->r[5] = c->r[12];
    c->r[14] = 0x27d6270u; f_283b27c(c);
    c->r[12] = c->r[5];
    goto L_27d69f0;
L_27d627c:;
    c->r[5] = c->r[6] + 0x10u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d628cu; f_283b27c(c);
    c->r[10] = c->r[0];
    c->r[0] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
L_27d62a0:;
    c->r[1] = c->r[11] - 0x48u;
    c->r[0] = c->r[10];
    c->r[2] = c->r[6];
    c->r[14] = 0x27d62b0u; f_283aa78(c);
L_27d62b0:;
    c->r[14] = 0x0u;
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[10] + c->r[6]; ST8(ea, c->r[14]); }
    c->r[2] = c->r[1] | 0x1u;
    c->r[1] = c->r[1] | 0x5u;
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x51u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x53u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[6] = c->r[6] | (c->r[12] << 8);
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x55u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[5] | (c->r[2] << 8);
    { uint32_t ea = c->r[13] + 0x57u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[6] | (c->r[2] << 16);
    c->r[1] = c->r[3] | (c->r[1] << 8);
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD8(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[9] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d63dc; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[10]); }
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x16u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[0] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[0] >> 8);
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27d6d84;
L_27d63dc:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_HI) { goto L_27d6fbc; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x5555u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d6430; }
    c->r[8] = (c->r[1] << 1);
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { c->r[8] = c->r[0]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27d6bc8; }
L_27d6430:;
    c->r[0] = c->r[8] + (c->r[8] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d67f0; }
    c->r[0] = c->r[1];
    c->r[5] = c->r[12];
    c->r[14] = 0x27d6464u; f_283b27c(c);
    c->r[12] = c->r[5];
    goto L_27d6bd0;
L_27d646c:;
    c->r[8] = 0x0u;
    c->r[0] = 0x0u;
L_27d6474:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0xau;
    c->r[1] = c->r[0];
    c->r[5] = c->r[8] + (c->r[8] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 3);
    c->r[7] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); c->r[7] = c->r[7] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x54u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x42u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    c->r[5] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27d6588; }
L_27d6530:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[7] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[7] - 0x18u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_27d6530; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27d658c;
L_27d6588:;
    c->r[7] = c->r[6];
L_27d658c:;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[6], c->r[7]);
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d65d8; }
L_27d65a0:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d65b4; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d65b4u; f_283b288(c);
L_27d65b4:;
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[6] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d65cc; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d65ccu; f_283b288(c);
L_27d65cc:;
    (void)f_subs(c, c->r[7], c->r[5]);
    c->r[6] = c->r[5];
    if (COND_NE) { goto L_27d65a0; }
L_27d65d8:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27d6624; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_27d661c; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27d661c; }
    c->r[2] = 0xfu - c->r[7];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27d6624; }
    goto L_27d67c4;
L_27d661c:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27d6624u; f_283b288(c);
L_27d6624:;
    c->r[4] = c->r[4] + 0x4u;
    goto L_27d6f8c;
L_27d662c:;
    c->r[8] = 0x0u;
    c->r[0] = 0x0u;
L_27d6634:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[3] = 0x8u;
    c->r[1] = c->r[0];
    c->r[5] = c->r[8] + (c->r[8] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = (c->r[7] >> 8);
    c->r[3] = (c->r[7] >> 24);
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[7]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[7] >> 16);
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x42u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    c->r[5] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27d6734; }
L_27d66dc:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[7] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[7] - 0x18u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_27d66dc; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27d6738;
L_27d6734:;
    c->r[7] = c->r[6];
L_27d6738:;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[6], c->r[7]);
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d6784; }
L_27d674c:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6760; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6760u; f_283b288(c);
L_27d6760:;
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[6] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6778; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6778u; f_283b288(c);
L_27d6778:;
    (void)f_subs(c, c->r[7], c->r[5]);
    c->r[6] = c->r[5];
    if (COND_NE) { goto L_27d674c; }
L_27d6784:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27d67dc; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_27d67d4; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27d67d4; }
    c->r[2] = 0xfu - c->r[7];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27d67dc; }
L_27d67c4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    c->r[4] = c->r[4] + 0x4u;
    goto L_27d6f8c;
L_27d67d4:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27d67dcu; f_283b288(c);
L_27d67dc:;
    c->r[4] = c->r[4] + 0x4u;
    goto L_27d6f8c;
L_27d67e4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d69f0;
L_27d67f0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d6bd0;
L_27d67fc:;
    c->r[5] = c->r[6] + 0x10u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d680cu; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
L_27d6820:;
    c->r[1] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x27d6830u; f_283aa78(c);
L_27d6830:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[7] + c->r[6]; ST8(ea, c->r[0]); }
    c->r[2] = c->r[1] | 0x1u;
    c->r[1] = c->r[1] | 0x5u;
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x29u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2bu; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | (c->r[12] << 8);
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2du; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = c->r[6] | (c->r[2] << 8);
    { uint32_t ea = c->r[13] + 0x2fu; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[7] | (c->r[2] << 16);
    c->r[1] = c->r[5] | (c->r[1] << 8);
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD8(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d6958; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[10]); }
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x16u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27d6f68;
L_27d6958:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[7] = r; }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_HI) { goto L_27d6fc8; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x5555u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d69ac; }
    c->r[8] = (c->r[1] << 1);
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { c->r[8] = c->r[0]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27d6dac; }
L_27d69ac:;
    c->r[0] = c->r[8] + (c->r[8] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d6da0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27d69dcu; f_283b27c(c);
    goto L_27d6db4;
L_27d69e8:;
    c->r[8] = 0x0u;
    c->r[0] = 0x0u;
L_27d69f0:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[1] = c->r[0];
    c->r[14] = c->r[8] + (c->r[8] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[10]); c->r[1] = ea; }
    c->r[14] = c->r[0] + (c->r[14] << 3);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x16u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[0] = (c->r[3] >> 8);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[3]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 24);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 16);
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_EQ) { goto L_27d6b08; }
L_27d6ab8:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[10], c->r[6]);
    if (COND_NE) { goto L_27d6ab8; }
    { uint32_t ea = c->r[9]; c->r[6] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); }
    goto L_27d6b0c;
L_27d6b08:;
    c->r[6] = c->r[10];
L_27d6b0c:;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[10], c->r[6]);
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[14]); }
    if (COND_EQ) { goto L_27d6b58; }
L_27d6b20:;
    { uint32_t ea = c->r[10] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6b34; }
    { uint32_t ea = c->r[10] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6b34u; f_283b288(c);
L_27d6b34:;
    { uint32_t ea = c->r[10] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[10] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6b4c; }
    { uint32_t ea = c->r[10] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6b4cu; f_283b288(c);
L_27d6b4c:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[10] = c->r[5];
    if (COND_NE) { goto L_27d6b20; }
L_27d6b58:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27d6ba4; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27d6b9c; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27d6b9c; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); } }
    goto L_27d6ba4;
L_27d6b9c:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27d6ba4u; f_283b288(c);
L_27d6ba4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6bb8; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6bb8u; f_283b288(c);
L_27d6bb8:;
    c->r[1] = c->r[7] + 0x13u;
    goto L_27d5604;
L_27d6bc8:;
    c->r[8] = 0x0u;
    c->r[0] = 0x0u;
L_27d6bd0:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[1] = c->r[0];
    c->r[14] = c->r[8] + (c->r[8] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[10]); c->r[1] = ea; }
    c->r[14] = c->r[0] + (c->r[14] << 3);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x16u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[0] = (c->r[3] >> 8);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[3]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 24);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 16);
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_EQ) { goto L_27d6ce8; }
L_27d6c98:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[10], c->r[6]);
    if (COND_NE) { goto L_27d6c98; }
    { uint32_t ea = c->r[9]; c->r[6] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); }
    goto L_27d6cec;
L_27d6ce8:;
    c->r[6] = c->r[10];
L_27d6cec:;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[10], c->r[6]);
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[14]); }
    if (COND_EQ) { goto L_27d6d38; }
L_27d6d00:;
    { uint32_t ea = c->r[10] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6d14; }
    { uint32_t ea = c->r[10] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6d14u; f_283b288(c);
L_27d6d14:;
    { uint32_t ea = c->r[10] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[10] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6d2c; }
    { uint32_t ea = c->r[10] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6d2cu; f_283b288(c);
L_27d6d2c:;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[10] = c->r[5];
    if (COND_NE) { goto L_27d6d00; }
L_27d6d38:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27d6d84; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27d6d7c; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27d6d7c; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); } }
    goto L_27d6d84;
L_27d6d7c:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27d6d84u; f_283b288(c);
L_27d6d84:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6d98; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6d98u; f_283b288(c);
L_27d6d98:;
    c->r[1] = c->r[7] + 0x13u;
    goto L_27d5604;
L_27d6da0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d6db4;
L_27d6dac:;
    c->r[8] = 0x0u;
    c->r[0] = 0x0u;
L_27d6db4:;
    c->r[2] = c->r[7] + (c->r[7] << 1);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[10]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x16u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[5] = c->r[8] + (c->r[8] << 1);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    c->r[5] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27d6ecc; }
L_27d6e78:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[7] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[7] - 0x18u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_27d6e78; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27d6ed0;
L_27d6ecc:;
    c->r[7] = c->r[6];
L_27d6ed0:;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[6], c->r[7]);
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d6f1c; }
L_27d6ee4:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6ef8; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6ef8u; f_283b288(c);
L_27d6ef8:;
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[6] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6f10; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6f10u; f_283b288(c);
L_27d6f10:;
    (void)f_subs(c, c->r[7], c->r[5]);
    c->r[6] = c->r[5];
    if (COND_NE) { goto L_27d6ee4; }
L_27d6f1c:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27d6f68; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_27d6f60; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27d6f60; }
    c->r[2] = 0xfu - c->r[7];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); } }
    goto L_27d6f68;
L_27d6f60:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27d6f68u; f_283b288(c);
L_27d6f68:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d6f7c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d6f7cu; f_283b288(c);
L_27d6f7c:;
    c->r[1] = 0xbu;
L_27d6f80:;
    c->r[7] = c->r[1];
L_27d6f84:;
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_NE) { c->r[4] = c->r[4] + c->r[7]; }
L_27d6f8c:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27d6f98:;
    c->r[14] = 0x27d6fa0u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d6fa0:;
    c->r[14] = 0x27d6fa8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d6fa8:;
    c->r[14] = 0x27d6fb0u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d6fb0:;
    c->r[5] = c->r[12];
    c->r[14] = 0x27d6fbcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d6fbc:;
    c->r[5] = c->r[12];
    c->r[14] = 0x27d6fc8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d6fc8:;
    c->r[14] = 0x27d6fd0u;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27d70c8(Cpu *restrict c) {
    FN_ENTER(0x27d70c8u);
L_27d70c8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    c->r[8] = c->r[2];
    c->r[2] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_LT) { goto L_27d7c54; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x66u);
    if (COND_NE) { goto L_27d7c54; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[9] = 0xaaaau;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xaaa0000u;
    (void)f_subs(c, c->r[2], 0x4cu);
    if (COND_EQ) { goto L_27d7178; }
    (void)f_subs(c, c->r[2], 0x70u);
    if (COND_NE) { goto L_27d7c54; }
    c->r[7] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_EQ) { goto L_27d7c54; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x72u);
    if (COND_EQ) { c->r[7] = c->r[0]; }
    if (COND_EQ) { { uint32_t ea = c->r[7] + 0x3u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[2] = v; } }
    (void)f_subs(c, c->r[2], 0x56u);
    if (COND_EQ) { { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[2] = v; } }
    (void)f_subs(c, c->r[2], 0x4bu);
    if (COND_EQ) { c->r[7] = c->r[7] + 0x1u; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_EQ) { goto L_27d7c54; }
    c->r[2] = c->r[7];
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = c->r[2] + 0x1u; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x6eu);
    if (COND_NE) { c->r[2] = c->r[7]; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_27d72a4; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x30u);
    if (COND_NE) { goto L_27d726c; }
    c->r[6] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_27d72ac; }
    goto L_27d7c54;
L_27d7178:;
    c->r[2] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_27d7c54; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x6eu);
    c->r[3] = c->r[2];
    if (COND_EQ) { c->r[3] = c->r[0] + 0x3u; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_EQ) { goto L_27d71ec; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x30u);
    if (COND_NE) { goto L_27d71b8; }
    c->r[2] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27d71f4; }
    goto L_27d7c54;
L_27d71b8:;
    c->r[7] = c->r[7] - 0x31u;
    c->r[7] = (uint32_t)(uint8_t)(c->r[7]);
    (void)f_subs(c, c->r[7], 0x8u);
    if (COND_HI) { goto L_27d71ec; }
    c->r[7] = c->r[1] - 0x1u;
L_27d71cc:;
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_27d7c54; }
    c->r[2] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[3] = c->r[3] - 0x30u;
    (void)f_subs(c, c->r[3], 0xau);
    c->r[3] = c->r[2];
    if (COND_CC) { goto L_27d71cc; }
L_27d71ec:;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_27d7c54; }
L_27d71f4:;
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x70u);
    if (COND_NE) { goto L_27d7c54; }
    c->r[6] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_27d7c54; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x72u);
    if (COND_EQ) { { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; } }
    if (COND_EQ) { c->r[6] = c->r[2]; }
    (void)f_subs(c, c->r[3], 0x56u);
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[6] = ea; c->r[3] = v; } }
    (void)f_subs(c, c->r[3], 0x4bu);
    if (COND_EQ) { c->r[6] = c->r[6] + 0x1u; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_27d7c54; }
    c->r[2] = c->r[6];
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = c->r[2] + 0x1u; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x6eu);
    if (COND_NE) { c->r[2] = c->r[6]; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_27d75c0; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x30u);
    if (COND_NE) { goto L_27d7588; }
    c->r[7] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_NE) { goto L_27d75c8; }
    goto L_27d7c54;
L_27d726c:;
    c->r[3] = c->r[3] - 0x31u;
    c->r[6] = c->r[7];
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
    (void)f_subs(c, c->r[3], 0x8u);
    if (COND_HI) { goto L_27d72a4; }
    c->r[3] = c->r[1] - 0x1u;
L_27d7284:;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_27d7c54; }
    c->r[6] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x30u;
    (void)f_subs(c, c->r[2], 0xau);
    c->r[2] = c->r[6];
    if (COND_CC) { goto L_27d7284; }
L_27d72a4:;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_27d7c54; }
L_27d72ac:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5fu);
    if (COND_NE) { goto L_27d7c54; }
    c->r[10] = c->r[6] - c->r[7];
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[10], 0x10u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27d7c5c; }
    (void)f_subs(c, c->r[10], 0xau);
    if (COND_HI) { goto L_27d72f8; }
    c->r[0] = (c->r[10] << 1);
    { uint32_t ea = c->r[13] + 0x8u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x8u;
    c->r[0] = c->r[0] | 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27d7320; }
    goto L_27d7394;
L_27d72f8:;
    c->r[5] = c->r[10] + 0x10u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d7308u; f_283b27c(c);
    c->r[1] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27d7394; }
L_27d7320:;
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_CC) { goto L_27d7378; }
    c->r[12] = c->r[10];
    c->r[12] = c->r[12] & 0xfffffff0u;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_27d7378; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_CC) { c->r[1] = c->r[0] - c->r[7]; }
    if (COND_CC) { c->r[1] = c->r[6] + c->r[1]; }
    if (COND_CC) { (void)f_subs(c, c->r[7], c->r[1]); }
    if (COND_CC) { goto L_27d7378; }
    c->r[2] = c->r[0] + c->r[12];
    c->r[1] = c->r[7] + c->r[12];
    c->r[3] = c->r[12];
    c->r[5] = c->r[0];
L_27d735c:;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[7] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x10u);
    { uint32_t ea = c->r[5]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[5] = ea + 16u; }
    if (COND_NE) { goto L_27d735c; }
    (void)f_subs(c, c->r[10], c->r[12]);
    if (COND_NE) { goto L_27d7380; }
    goto L_27d7390;
L_27d7378:;
    c->r[1] = c->r[7];
    c->r[2] = c->r[0];
L_27d7380:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[3] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); c->r[2] = c->r[2] + 0x1u; }
    if (COND_NE) { goto L_27d7380; }
L_27d7390:;
    c->r[0] = c->r[0] + c->r[10];
L_27d7394:;
    c->r[1] = 0x36a61eu;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[2] = 0x27d73a8u + c->r[1];
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = 0x0u;
    c->r[3] = 0x2u;
    c->r[14] = 0x27d73b4u; f_27c73c8(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = c->r[14] | (c->r[3] << 8);
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[2] = c->r[7] | (c->r[4] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[10] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x1au; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x18u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1au; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_27d74f4; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[10]); }
    c->r[5] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2au; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x7u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[1] >> 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x6u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[1] >> 24);
    c->r[1] = (c->r[1] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[5] = c->r[0] + 0xdu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[0] + 0x13u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0xeu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x12u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27d77d0;
L_27d74f4:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0xaaabu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[0] - c->r[2];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[3]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_HI) { goto L_27d7c64; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d7548; }
    c->r[9] = (c->r[1] << 1);
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { c->r[9] = c->r[0]; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27d7614; }
L_27d7548:;
    c->r[0] = c->r[9] + (c->r[9] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d757c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27d7578u; f_283b27c(c);
    goto L_27d761c;
L_27d757c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d761c;
L_27d7588:;
    c->r[3] = c->r[3] - 0x31u;
    c->r[7] = c->r[6];
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
    (void)f_subs(c, c->r[3], 0x8u);
    if (COND_HI) { goto L_27d75c0; }
    c->r[3] = c->r[1] - 0x1u;
L_27d75a0:;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_27d7c54; }
    c->r[7] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x30u;
    (void)f_subs(c, c->r[2], 0xau);
    c->r[2] = c->r[7];
    if (COND_CC) { goto L_27d75a0; }
L_27d75c0:;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_EQ) { goto L_27d7c54; }
L_27d75c8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5fu);
    if (COND_NE) { goto L_27d7c54; }
    c->r[10] = c->r[7] - c->r[6];
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[10], 0x10u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27d7c6c; }
    (void)f_subs(c, c->r[10], 0xau);
    if (COND_HI) { goto L_27d77f0; }
    c->r[0] = (c->r[10] << 1);
    { uint32_t ea = c->r[13] + 0x8u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x8u;
    c->r[0] = c->r[0] | 0x1u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_27d7818; }
    goto L_27d788c;
L_27d7614:;
    c->r[9] = 0x0u;
    c->r[0] = 0x0u;
L_27d761c:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[10]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[4] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x2au; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[4] = c->r[9] + (c->r[9] << 1);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x2au; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[13] + 0x28u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    c->r[4] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27d7734; }
L_27d76e0:;
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.d[16] = LD64(c->r[5] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[5] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0x4u; ST32(ea, c->r[2]); }
    c->r[5] = c->r[5] - 0x18u;
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_NE) { goto L_27d76e0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27d7738;
L_27d7734:;
    c->r[5] = c->r[4];
L_27d7738:;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[4], c->r[5]);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d7784; }
L_27d774c:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d7760; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d7760u; f_283b288(c);
L_27d7760:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d7778; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d7778u; f_283b288(c);
L_27d7778:;
    (void)f_subs(c, c->r[5], c->r[7]);
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_27d774c; }
L_27d7784:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27d77d0; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CC) { goto L_27d77c8; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27d77c8; }
    c->r[2] = 0xfu - c->r[5];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[9];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[5] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); } }
    goto L_27d77d0;
L_27d77c8:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d77d0u; f_283b288(c);
L_27d77d0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d77e4; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d77e4u; f_283b288(c);
L_27d77e4:;
    c->r[0] = c->r[6] + 0x1u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27d77f0:;
    c->r[5] = c->r[10] + 0x10u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d7800u; f_283b27c(c);
    c->r[1] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27d788c; }
L_27d7818:;
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_CC) { goto L_27d7870; }
    c->r[12] = c->r[10];
    c->r[12] = c->r[12] & 0xfffffff0u;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_27d7870; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CC) { c->r[1] = c->r[0] - c->r[6]; }
    if (COND_CC) { c->r[1] = c->r[7] + c->r[1]; }
    if (COND_CC) { (void)f_subs(c, c->r[6], c->r[1]); }
    if (COND_CC) { goto L_27d7870; }
    c->r[2] = c->r[0] + c->r[12];
    c->r[1] = c->r[6] + c->r[12];
    c->r[3] = c->r[12];
    c->r[5] = c->r[0];
L_27d7854:;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[6] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x10u);
    { uint32_t ea = c->r[5]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[5] = ea + 16u; }
    if (COND_NE) { goto L_27d7854; }
    (void)f_subs(c, c->r[10], c->r[12]);
    if (COND_NE) { goto L_27d7878; }
    goto L_27d7888;
L_27d7870:;
    c->r[1] = c->r[6];
    c->r[2] = c->r[0];
L_27d7878:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); c->r[2] = c->r[2] + 0x1u; }
    if (COND_NE) { goto L_27d7878; }
L_27d7888:;
    c->r[0] = c->r[0] + c->r[10];
L_27d788c:;
    c->r[1] = 0x36a126u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[2] = 0x27d78a0u + c->r[1];
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = 0x0u;
    c->r[3] = 0x2u;
    c->r[14] = 0x27d78acu; f_27c73c8(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = c->r[14] | (c->r[3] << 8);
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[2] = c->r[4] | (c->r[6] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[10] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x6u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_27d79ec; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[10]); }
    c->r[5] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2au; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x7u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[1] >> 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x6u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[1] >> 24);
    c->r[1] = (c->r[1] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[5] = c->r[0] + 0xdu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[0] + 0x13u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0xeu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x12u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27d7c3c;
L_27d79ec:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0xaaabu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[0] - c->r[2];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[3]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_HI) { goto L_27d7c74; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d7a40; }
    c->r[9] = (c->r[1] << 1);
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { c->r[9] = c->r[0]; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27d7a80; }
L_27d7a40:;
    c->r[0] = c->r[9] + (c->r[9] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d7a74; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27d7a70u; f_283b27c(c);
    goto L_27d7a88;
L_27d7a74:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d7a88;
L_27d7a80:;
    c->r[9] = 0x0u;
    c->r[0] = 0x0u;
L_27d7a88:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[10]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[4] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x2au; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[4] = c->r[9] + (c->r[9] << 1);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x2au; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[13] + 0x28u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[3]); c->r[6] = c->r[6] + 0x2u; }
    c->r[4] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27d7ba0; }
L_27d7b4c:;
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.d[16] = LD64(c->r[5] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[5] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0x4u; ST32(ea, c->r[2]); }
    c->r[5] = c->r[5] - 0x18u;
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_NE) { goto L_27d7b4c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27d7ba4;
L_27d7ba0:;
    c->r[5] = c->r[4];
L_27d7ba4:;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[4], c->r[5]);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d7bf0; }
L_27d7bb8:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d7bcc; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d7bccu; f_283b288(c);
L_27d7bcc:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d7be4; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d7be4u; f_283b288(c);
L_27d7be4:;
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[4] = c->r[6];
    if (COND_NE) { goto L_27d7bb8; }
L_27d7bf0:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27d7c3c; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CC) { goto L_27d7c34; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27d7c34; }
    c->r[2] = 0xfu - c->r[5];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[9];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[5] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); } }
    goto L_27d7c3c;
L_27d7c34:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d7c3cu; f_283b288(c);
L_27d7c3c:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d7c50; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d7c50u; f_283b288(c);
L_27d7c50:;
    c->r[0] = c->r[7] + 0x1u;
L_27d7c54:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27d7c5c:;
    c->r[14] = 0x27d7c64u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d7c64:;
    c->r[14] = 0x27d7c6cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d7c6c:;
    c->r[14] = 0x27d7c74u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d7c74:;
    c->r[14] = 0x27d7c7cu;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27d7cd8(Cpu *restrict c) {
    FN_ENTER(0x27d7cd8u);
L_27d7cd8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x8cu;
    c->r[6] = c->r[3];
    c->r[10] = c->r[2];
    c->r[2] = c->r[6];
    c->r[7] = c->r[1];
    c->r[8] = c->r[0];
    c->r[14] = 0x27d7cfcu; f_27cdb70(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], c->r[8]);
    if (COND_EQ) { goto L_27d8188; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x27d7d18u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d7e28; }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[5] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d8188; }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d7d64u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 40u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = c->r[9] - 0x18u;
    c->r[5] = c->r[9];
L_27d7d90:;
    c->r[4] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d7dac; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d7dacu; f_283b288(c);
L_27d7dac:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d7dc0; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d7dc0u; f_283b288(c);
L_27d7dc0:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_27d7d90; }
    { uint32_t ea = c->r[9] - 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[9] - 0x23u; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[9] - 0x30u;
    c->r[14] = 0x27d7decu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 56u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[9] - 0x18u; uint32_t v = LD8(ea); c->r[9] = ea; c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d7e78; }
    { uint32_t ea = c->r[9]; ST16(ea, c->r[1]); }
    goto L_27d7e84;
L_27d7e28:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27d8188; }
    c->r[5] = c->r[7] - 0x18u;
L_27d7e38:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d7e54; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d7e54u; f_283b288(c);
L_27d7e54:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d7e68; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d7e68u; f_283b288(c);
L_27d7e68:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_27d7e38; }
    goto L_27d8188;
L_27d7e78:;
    { uint32_t ea = c->r[0] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x14u; ST32(ea, c->r[1]); }
L_27d7e84:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[2] = (c->r[1] >> 1); }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_27d7ec0; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[10] + 0x1u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3eu);
    if (COND_NE) { goto L_27d7ec0; }
    c->r[0] = c->r[9];
    c->r[1] = 0x28u;
    c->r[14] = 0x27d7ec0u; f_27e4648(c);
L_27d7ec0:;
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_EQ) { c->r[7] = (c->r[4] >> 1); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27d8194; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27d7f0c; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[0] = c->r[0] | 0x1u;
    goto L_27d7f30;
L_27d7f0c:;
    c->r[5] = c->r[7] + 0x11u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d7f1cu; f_283b27c(c);
    c->r[1] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
L_27d7f30:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x28u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[11] - 0x38u;
    c->r[1] = c->r[5];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[2] = c->r[7];
    c->r[14] = 0x27d7f60u; f_27c75a8(c);
    c->r[1] = 0x369a59u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = 0x27d7f70u + c->r[1];
    c->r[2] = 0x2u;
    c->r[14] = 0x27d7f74u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    c->r[5] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    ST64(c->r[13] + 32u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[5]; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[14] = 0x27d7fb8u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    ST64(c->r[13] + 48u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->r[2] = 0x3699e8u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    c->r[1] = 0x27d7fe4u + c->r[2];
    c->r[0] = c->r[13] + 0x30u;
    c->r[2] = 0x2u;
    c->r[14] = 0x27d7fecu; f_27c75a8(c);
    c->r[7] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD8(ea); c->r[0] = v; }
    ST64(c->r[13] + 64u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x28u;
    c->r[1] = c->r[6];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0x27d8038u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    ST64(c->r[13] + 80u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    c->r[2] = 0x369909u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    c->r[1] = 0x27d8060u + c->r[2];
    c->r[0] = c->r[13] + 0x50u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d8068u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x48u;
    c->r[1] = c->r[7];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[9];
    c->r[14] = 0x27d80b0u; f_27c75a8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27d80c0; }
    c->r[0] = c->r[7];
    c->r[14] = 0x27d80c0u; f_283b288(c);
L_27d80c0:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d80d4; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d80d4u; f_283b288(c);
L_27d80d4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d80e8; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d80e8u; f_283b288(c);
L_27d80e8:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d80fc; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d80fcu; f_283b288(c);
L_27d80fc:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8110; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8110u; f_283b288(c);
L_27d8110:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8124; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8124u; f_283b288(c);
L_27d8124:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[2] = (c->r[1] >> 1); }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_27d8160; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[5]; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3eu);
    if (COND_NE) { goto L_27d8160; }
    c->r[0] = c->r[9];
    c->r[1] = 0x29u;
    c->r[14] = 0x27d8160u; f_27e4648(c);
L_27d8160:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d8174; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8174u; f_283b288(c);
L_27d8174:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d8188; }
    c->r[0] = c->r[6];
    c->r[14] = 0x27d8188u; f_283b288(c);
L_27d8188:;
    c->r[0] = c->r[8];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27d8194:;
    c->r[14] = 0x27d819cu;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27d8298(Cpu *restrict c) {
    FN_ENTER(0x27d8298u);
L_27d8298:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x54u;
    c->r[9] = c->r[3];
    c->r[4] = c->r[2];
    c->r[2] = c->r[9];
    c->r[5] = c->r[0];
    c->r[14] = 0x27d82b8u; f_27cdb70(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_EQ) { goto L_27d8698; }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27d8698; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 4u; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { c->r[5] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[7] = c->r[4] + 0x1u; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27d86a4; }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_CS) { goto L_27d8324; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    c->r[4] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27d8348; }
    goto L_27d8358;
L_27d8324:;
    c->r[6] = c->r[5] + 0x11u;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x27d8334u; f_283b27c(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[5]); }
L_27d8348:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27d8358u; f_283aa78(c);
L_27d8358:;
    c->r[0] = 0x369614u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[5]; ST8(ea, c->r[1]); }
    c->r[7] = c->r[13] + 0x30u;
    c->r[1] = 0x27d8370u + c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = 0x1u;
    c->r[14] = 0x27d8378u; f_27c75a8(c);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] - 0xbu; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d839cu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[13] + 32u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x27d83e8u; f_27c75a8(c);
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x369559u;
    c->v.d[16] = LD64(c->r[7]);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27d8410u + c->r[1];
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d8418u; f_27c75a8(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[2] = c->r[2] | (c->r[3] << 8);
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[4] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[3] = c->r[7] | (c->r[6] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[11] - 0x1eu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x20u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d8490; }
    { uint32_t ea = c->r[9] - 0x18u; ST16(ea, c->r[1]); }
    c->r[10] = c->r[9] - 0x10u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27d8608;
L_27d8490:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[10] = c->r[9];
    { uint32_t ea = c->r[10] - 0x10u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    c->r[7] = 0xau;
    c->r[8] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[10] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] - 0x8u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d84c8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[8] = c->r[0] - 0x1u;
L_27d84c8:;
    c->r[1] = 0x0u;
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d84fc; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[1] = (c->r[4] >> 1) & 0x7fu;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CS) { c->r[0] = c->r[1] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xf0u; }
    if (COND_CS) { c->r[7] = c->r[0] - 0x1u; }
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_EQ) { goto L_27d8508; }
    goto L_27d8514;
L_27d84fc:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_NE) { goto L_27d8514; }
L_27d8508:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_27d8608;
L_27d8514:;
    (void)f_subs(c, c->r[7], 0xau);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[12]); }
    if (COND_NE) { goto L_27d854c; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[1];
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_27d85b0; }
    c->r[1] = c->r[4] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[8];
    c->r[14] = 0x27d8548u; f_283aa78(c);
    goto L_27d85b8;
L_27d854c:;
    c->r[0] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27d8560u; f_283b27c(c);
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_HI) { goto L_27d8580; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_27d8580; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_27d8604;
L_27d8580:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d85d4; }
    c->r[0] = c->r[4] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    c->r[1] = c->r[5] + 0x1u;
    c->r[0] = c->r[3];
    c->r[5] = c->r[3];
    c->r[14] = 0x27d85acu; f_283aa78(c);
    goto L_27d85e8;
L_27d85b0:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27d85b8:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27d85c0u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = (c->r[7] << 1);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    goto L_27d8604;
L_27d85d4:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27d85e8u; f_283b288(c);
L_27d85e8:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] - 0x10u; ST32(ea, c->r[5]); }
L_27d8604:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
L_27d8608:;
    { uint32_t ea = c->r[9] - 0x18u; ST8(ea, c->r[12]); }
    c->r[3] = c->r[9] - 0x17u;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x1eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x2u; }
    { uint32_t ea = c->r[9] - 0x13u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[9] - 0x11u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 8);
    { uint32_t ea = c->r[9] - 0x16u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[9] - 0x12u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8670; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8670u; f_283b288(c);
L_27d8670:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27d8680; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8680u; f_283b288(c);
L_27d8680:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8694; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8694u; f_283b288(c);
L_27d8694:;
    c->r[5] = c->r[8];
L_27d8698:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27d86a4:;
    c->r[14] = 0x27d86acu;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27d8714(Cpu *restrict c) {
    FN_ENTER(0x27d8714u);
L_27d8714:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x24u;
    c->r[6] = c->r[1];
    c->r[8] = c->r[0];
    c->r[0] = c->r[6] - c->r[8];
    c->r[9] = c->r[2];
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d9258; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[7] = c->r[8];
    (void)f_subs(c, c->r[0], 0x67u);
    if (COND_NE) { goto L_27d8764; }
    { uint32_t ea = c->r[8] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[8];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x73u);
    if (COND_EQ) { c->r[7] = c->r[7] + 0x2u; }
    if (COND_EQ) { c->r[5] = 0x1u; }
L_27d8764:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d8774u; f_27d9e44(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_EQ) { goto L_27d87b8; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_27d87b0; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27d9258; }
    c->r[1] = 0x3691b0u;
    c->r[0] = c->r[0] - 0x18u;
    c->r[3] = 0x2u;
    c->r[2] = 0x27d87acu + c->r[1];
    c->r[1] = 0x0u;
    c->r[14] = 0x27d87b0u; f_27c73c8(c);
L_27d87b0:;
    c->r[8] = c->r[4];
    goto L_27d9258;
L_27d87b8:;
    c->r[0] = c->r[6] - c->r[7];
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d9258; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x73u);
    if (COND_NE) { goto L_27d9258; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x72u);
    if (COND_NE) { goto L_27d9258; }
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4eu);
    if (COND_NE) { goto L_27d8c1c; }
    c->r[4] = c->r[7] + 0x3u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[4];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d8800u; f_27da190(c);
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[10], c->r[4]);
    if (COND_NE) { (void)f_subs(c, c->r[10], c->r[6]); }
    if (COND_EQ) { goto L_27d9258; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d8820u; f_27c79bc(c);
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_EQ) { goto L_27d8984; }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[1] = c->r[5] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d9258; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d8870u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[13] + 24u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
L_27d889c:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d88b8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d88b8u; f_283b288(c);
L_27d88b8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d88cc; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d88ccu; f_283b288(c);
L_27d88cc:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_27d889c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[13] + 0x18u;
    c->r[1] = c->r[4];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x30u;
    c->r[14] = 0x27d8904u; f_27c75a8(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { goto L_27d896c; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = c->r[7] - 0x18u;
L_27d8924:;
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8940; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8940u; f_283b288(c);
L_27d8940:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8954; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8954u; f_283b288(c);
L_27d8954:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_NE) { goto L_27d8924; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[5] = v; }
L_27d896c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27d897c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27d897cu; f_283b288(c);
L_27d897c:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_27d9258; }
L_27d8984:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_EQ) { goto L_27d8af0; }
    c->r[0] = 0x368fbcu;
    c->r[5] = 0x0u;
    c->r[0] = 0x27d89a0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_27d89a0:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d89b0u; f_27e3728(c);
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[6]); }
    if (COND_EQ) { goto L_27d9258; }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[7] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d9258; }
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[7] - 0xbu; }
    c->r[0] = c->r[7] - 0x18u;
    c->r[14] = 0x27d8a00u; f_27c75a8(c);
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[13] + 24u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[4] - 0x18u;
L_27d8a24:;
    c->r[5] = c->r[4] - 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8a40; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8a40u; f_283b288(c);
L_27d8a40:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8a54; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8a54u; f_283b288(c);
L_27d8a54:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27d8a24; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x18u;
    c->r[1] = 0x0u;
    c->r[3] = 0x2u;
    c->r[14] = 0x27d8a74u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    ST64(c->r[13] + 8u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[1] = c->r[7];
    c->r[0] = c->r[13] + 0x8u;
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27d8ac0u; f_27c75a8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27d8ad0; }
    c->r[0] = c->r[7];
    c->r[14] = 0x27d8ad0u; f_283b288(c);
L_27d8ad0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8ae4; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8ae4u; f_283b288(c);
L_27d8ae4:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_27d89a0; }
L_27d8af0:;
    c->r[4] = c->r[10] + 0x1u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[4];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d8b04u; f_27d9e44(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27d91bc; }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[4] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d9258; }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27d8b50u; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[13] + 24u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[5] - 0x18u;
L_27d8b78:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8b94; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8b94u; f_283b288(c);
L_27d8b94:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8ba8; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8ba8u; f_283b288(c);
L_27d8ba8:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27d8b78; }
    c->r[0] = 0x368d9cu;
    c->r[2] = 0x27d8bc0u + c->r[0];
    c->r[0] = c->r[13] + 0x18u;
    c->r[1] = 0x0u;
    c->r[3] = 0x2u;
    c->r[4] = 0x0u;
    c->r[14] = 0x27d8bd0u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[13] + 8u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = c->r[5];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27d8c18u; f_27c75a8(c);
    goto L_27d9144;
L_27d8c1c:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d8c2cu; f_27da190(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27d8e60; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d8c48u; f_27c79bc(c);
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27d8d38; }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[4] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d9258; }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27d8c94u; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[13] + 24u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
L_27d8cc0:;
    c->r[10] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8cdc; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8cdcu; f_283b288(c);
L_27d8cdc:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8cf0; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8cf0u; f_283b288(c);
L_27d8cf0:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27d8cc0; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[13] + 0x18u;
    c->r[1] = c->r[4];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x30u;
    c->r[14] = 0x27d8d28u; f_27c75a8(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27d8d38; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27d8d38u; f_283b288(c);
L_27d8d38:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d8d48u; f_27d9e44(c);
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27d916c; }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[4] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d9258; }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27d8d94u; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[13] + 24u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[5] - 0x18u;
L_27d8dbc:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8dd8; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8dd8u; f_283b288(c);
L_27d8dd8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8dec; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8decu; f_283b288(c);
L_27d8dec:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27d8dbc; }
    c->r[0] = 0x368b58u;
    c->r[2] = 0x27d8e04u + c->r[0];
    c->r[0] = c->r[13] + 0x18u;
    c->r[1] = 0x0u;
    c->r[3] = 0x2u;
    c->r[4] = 0x0u;
    c->r[14] = 0x27d8e14u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[13] + 8u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = c->r[5];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27d8e5cu; f_27c75a8(c);
    goto L_27d9144;
L_27d8e60:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d8e70u; f_27e3728(c);
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[10], c->r[4]);
    if (COND_NE) { (void)f_subs(c, c->r[10], c->r[6]); }
    if (COND_EQ) { goto L_27d9258; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_27d8eb0; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27d9258; }
    c->r[1] = 0x368ab0u;
    c->r[0] = c->r[0] - 0x18u;
    c->r[3] = 0x2u;
    c->r[2] = 0x27d8eacu + c->r[1];
    c->r[1] = 0x0u;
    c->r[14] = 0x27d8eb0u; f_27c73c8(c);
L_27d8eb0:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_EQ) { goto L_27d901c; }
    c->r[0] = 0x368a90u;
    c->r[5] = 0x0u;
    c->r[0] = 0x27d8eccu + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_27d8ecc:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d8edcu; f_27e3728(c);
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[6]); }
    if (COND_EQ) { goto L_27d9258; }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[7] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d9258; }
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[7] - 0xbu; }
    c->r[0] = c->r[7] - 0x18u;
    c->r[14] = 0x27d8f2cu; f_27c75a8(c);
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[13] + 24u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[4] - 0x18u;
L_27d8f50:;
    c->r[5] = c->r[4] - 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8f6c; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8f6cu; f_283b288(c);
L_27d8f6c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d8f80; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d8f80u; f_283b288(c);
L_27d8f80:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27d8f50; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x18u;
    c->r[1] = 0x0u;
    c->r[3] = 0x2u;
    c->r[14] = 0x27d8fa0u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    ST64(c->r[13] + 8u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[1] = c->r[7];
    c->r[0] = c->r[13] + 0x8u;
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27d8fecu; f_27c75a8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27d8ffc; }
    c->r[0] = c->r[7];
    c->r[14] = 0x27d8ffcu; f_283b288(c);
L_27d8ffc:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d9010; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d9010u; f_283b288(c);
L_27d9010:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_27d8ecc; }
L_27d901c:;
    c->r[4] = c->r[10] + 0x1u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[4];
    c->r[2] = c->r[9];
    c->r[14] = 0x27d9030u; f_27d9e44(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27d920c; }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[4] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d9258; }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27d907cu; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[13] + 24u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[5] - 0x18u;
L_27d90a4:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d90c0; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d90c0u; f_283b288(c);
L_27d90c0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d90d4; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d90d4u; f_283b288(c);
L_27d90d4:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27d90a4; }
    c->r[0] = 0x368870u;
    c->r[2] = 0x27d90ecu + c->r[0];
    c->r[0] = c->r[13] + 0x18u;
    c->r[1] = 0x0u;
    c->r[3] = 0x2u;
    c->r[4] = 0x0u;
    c->r[14] = 0x27d90fcu; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[13] + 8u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = c->r[5];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27d9144u; f_27c75a8(c);
L_27d9144:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27d9154; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27d9154u; f_283b288(c);
L_27d9154:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d9258; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d9168u; f_283b288(c);
    goto L_27d9258;
L_27d916c:;
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d9258; }
    c->r[4] = c->r[5] - 0x18u;
L_27d917c:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d9198; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d9198u; f_283b288(c);
L_27d9198:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d91ac; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d91acu; f_283b288(c);
L_27d91ac:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27d917c; }
    goto L_27d9258;
L_27d91bc:;
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d9258; }
    c->r[4] = c->r[5] - 0x18u;
L_27d91cc:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d91e8; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d91e8u; f_283b288(c);
L_27d91e8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d91fc; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d91fcu; f_283b288(c);
L_27d91fc:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27d91cc; }
    goto L_27d9258;
L_27d920c:;
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d9258; }
    c->r[4] = c->r[5] - 0x18u;
L_27d921c:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d9238; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d9238u; f_283b288(c);
L_27d9238:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d924c; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d924cu; f_283b288(c);
L_27d924c:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27d921c; }
L_27d9258:;
    c->r[0] = c->r[8];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27d9304(Cpu *restrict c) {
    FN_ENTER(0x27d9304u);
L_27d9304:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x3cu;
    c->r[9] = c->r[0];
    c->r[8] = c->r[3];
    c->r[6] = c->r[2];
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_EQ) { goto L_27d9db8; }
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[5] = c->r[5] + 0x1u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6eu);
    c->r[0] = c->r[9];
    if (COND_EQ) { c->r[0] = c->r[5]; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27d9db8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x30u);
    if (COND_NE) { goto L_27d93c8; }
    c->r[10] = c->r[0] + 0x1u;
L_27d9350:;
    (void)f_subs(c, c->r[10], c->r[9]);
    if (COND_NE) { (void)f_subs(c, c->r[10], c->r[1]); }
    if (COND_EQ) { goto L_27d9db8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_27d9db8; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[3] = 0x5555u;
    c->r[4] = 0xaaaau;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x5550000u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xaaa0000u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[7] = (c->r[0] >> 1); }
    (void)f_subs(c, c->r[7], 0x4u);
    if (COND_CC) { goto L_27d9400; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27d9dc4; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27d94b8; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[11] - 0x28u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x28u;
    c->r[0] = c->r[0] | 0x1u;
    goto L_27d94e4;
L_27d93c8:;
    c->r[2] = c->r[2] - 0x31u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[2], 0x8u);
    if (COND_HI) { goto L_27d9db8; }
    c->r[2] = c->r[1] - 0x1u;
L_27d93dc:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_27d9db8; }
    c->r[10] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[0], 0xau);
    c->r[0] = c->r[10];
    if (COND_CC) { goto L_27d93dc; }
    goto L_27d9350;
L_27d9400:;
    { uint32_t ea = c->r[8] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_27d9430; }
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27d9a38;
L_27d9430:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0xaaabu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[0] - c->r[2];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[7]; c->r[12] = r; }
    c->r[0] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27d9dd4; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CS) { goto L_27d947c; }
    c->r[4] = (c->r[1] << 1);
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { c->r[4] = c->r[0]; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27d971c; }
L_27d947c:;
    c->r[0] = c->r[4] + (c->r[4] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d9704; }
    c->r[0] = c->r[1];
    c->r[7] = c->r[12];
    c->r[14] = 0x27d94b0u; f_283b27c(c);
    c->r[12] = c->r[7];
    goto L_27d9724;
L_27d94b8:;
    c->r[4] = c->r[7] + 0x11u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27d94ccu; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
L_27d94e4:;
    c->r[1] = 0x28u;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[6] + 0x1u; }
    c->r[0] = c->r[11] - 0x28u;
    c->r[2] = c->r[7];
    c->r[14] = 0x27d950cu; f_27c75a8(c);
    c->r[1] = 0x36844du;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    c->r[1] = 0x27d951cu + c->r[1];
    c->r[2] = 0x1u;
    c->r[14] = 0x27d9520u; f_27c75a8(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = c->r[12] | (c->r[3] << 8);
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[2] = c->r[7] | (c->r[6] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[4]); }
    c->r[4] = 0xaaaau;
    { uint32_t ea = c->r[13] + 0x1cu; ST16(ea, c->r[2]); }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xaaa0000u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_27d966c; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[14]); }
    c->r[6] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[0] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[6] = c->r[0] + 0xdu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x26u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[0] + 0x13u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0xeu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x12u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27d9a24;
L_27d966c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xaaabu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[0] - c->r[1];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[3]; c->r[7] = r; }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27d9ddc; }
    c->r[1] = c->r[2] - c->r[1];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d96c0; }
    c->r[4] = (c->r[1] << 1);
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { c->r[4] = c->r[0]; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27d985c; }
L_27d96c0:;
    c->r[0] = c->r[4] + (c->r[4] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d9710; }
    c->r[0] = c->r[1];
    c->r[6] = c->r[12];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[14]); }
    c->r[14] = 0x27d96f8u; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[6];
    goto L_27d9864;
L_27d9704:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d9724;
L_27d9710:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d9864;
L_27d971c:;
    c->r[4] = 0x0u;
    c->r[0] = 0x0u;
L_27d9724:;
    c->r[1] = c->r[12] + (c->r[12] << 1);
    c->r[2] = c->r[4] + (c->r[4] << 1);
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + (c->r[1] << 3);
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] + (c->r[2] << 3);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[8]; c->r[4] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27d97b4; }
L_27d9760:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.d[16] = LD64(c->r[7] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[3]); }
    c->r[7] = c->r[7] - 0x18u;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27d9760; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27d97b8;
L_27d97b4:;
    c->r[7] = c->r[4];
L_27d97b8:;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    (void)f_subs(c, c->r[4], c->r[7]);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d9808; }
L_27d97d0:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d97e4; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d97e4u; f_283b288(c);
L_27d97e4:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d97fc; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d97fcu; f_283b288(c);
L_27d97fc:;
    (void)f_subs(c, c->r[7], c->r[6]);
    c->r[4] = c->r[6];
    if (COND_NE) { goto L_27d97d0; }
L_27d9808:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27d9a38; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_27d9854; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27d9854; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0xfu - c->r[7];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); } }
    goto L_27d9a38;
L_27d9854:;
    c->r[0] = c->r[7];
    goto L_27d9a34;
L_27d985c:;
    c->r[4] = 0x0u;
    c->r[0] = 0x0u;
L_27d9864:;
    c->r[2] = c->r[7] + (c->r[7] << 1);
    c->r[1] = c->r[0];
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[14]); c->r[1] = ea; }
    c->r[0] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x2eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x26u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    c->r[4] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[4] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27d997c; }
L_27d9928:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.d[16] = LD64(c->r[7] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[7] - 0x18u;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27d9928; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27d9980;
L_27d997c:;
    c->r[7] = c->r[4];
L_27d9980:;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[4], c->r[7]);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d99d0; }
L_27d9998:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d99ac; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d99acu; f_283b288(c);
L_27d99ac:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d99c4; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d99c4u; f_283b288(c);
L_27d99c4:;
    (void)f_subs(c, c->r[7], c->r[6]);
    c->r[4] = c->r[6];
    if (COND_NE) { goto L_27d9998; }
L_27d99d0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27d9a24; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_27d9a1c; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27d9a1c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0xfu - c->r[7];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); } }
    goto L_27d9a24;
L_27d9a1c:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27d9a24u; f_283b288(c);
L_27d9a24:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d9a38; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_27d9a34:;
    c->r[14] = 0x27d9a38u; f_283b288(c);
L_27d9a38:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6eu);
    if (COND_NE) { goto L_27d9a58; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2du;
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d9a54u; f_27e4648(c);
    c->r[9] = c->r[5];
L_27d9a58:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d9a80; }
    c->r[2] = (c->r[0] >> 1);
    c->r[4] = 0xau;
    c->r[12] = f_subs(c, c->r[10], c->r[9]);
    if (COND_NE) { goto L_27d9a9c; }
    goto L_27d9d84;
L_27d9a80:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] - 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xfffffffeu;
    c->r[4] = c->r[1] - 0x1u;
    c->r[12] = f_subs(c, c->r[10], c->r[9]);
    if (COND_EQ) { goto L_27d9d84; }
L_27d9a9c:;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[14] = r; }
    if (COND_NE) { goto L_27d9ab8; }
    c->r[1] = (c->r[0] >> 1) & 0x7fu;
    c->r[3] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[9]);
    if (COND_LS) { goto L_27d9ac8; }
    goto L_27d9b10;
L_27d9ab8:;
    { uint32_t ea = c->r[7] - 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[9]);
    if (COND_HI) { goto L_27d9b10; }
L_27d9ac8:;
    c->r[1] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_LS) { goto L_27d9b10; }
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[12], 0x10u);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27d9dcc; }
    (void)f_subs(c, c->r[12], 0xau);
    if (COND_HI) { goto L_27d9c48; }
    c->r[0] = (c->r[12] << 1);
    { uint32_t ea = c->r[11] - 0x28u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x28u;
    c->r[0] = c->r[0] | 0x1u;
    (void)f_subs(c, c->r[9], c->r[10]);
    if (COND_NE) { goto L_27d9c78; }
    goto L_27d9d3c;
L_27d9b10:;
    c->r[1] = c->r[4] - c->r[2];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], c->r[12]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[12]); }
    if (COND_CS) { goto L_27d9bc8; }
    c->r[0] = ~0x10u;
    c->r[2] = c->r[2] + c->r[12];
    c->r[1] = c->r[0] - c->r[4];
    c->r[3] = c->r[2] - c->r[4];
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CC) { goto L_27d9dcc; }
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[0] = ~0x10u;
    if (COND_EQ) { c->r[1] = c->r[5] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    (void)f_adds(c, c->r[4], 0x8000001au);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    if (COND_HI) { goto L_27d9b74; }
    (void)f_subs(c, c->r[2], (c->r[4] << 1));
    c->r[0] = 0xbu;
    if (COND_CC) { c->r[2] = (c->r[4] << 1); }
    (void)f_subs(c, c->r[2], 0xbu);
    if (COND_CS) { c->r[0] = c->r[2] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xfffffff0u; }
L_27d9b74:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27d9b7cu; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_27d9b9c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27d9b98u; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27d9b9c:;
    (void)f_subs(c, c->r[4], 0xau);
    if (COND_EQ) { goto L_27d9bb0; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d9bacu; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27d9bb0:;
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
L_27d9bc8:;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = c->r[5] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; } }
    (void)f_subs(c, c->r[9], c->r[10]);
    c->r[14] = c->r[0] + c->r[2];
    if (COND_EQ) { goto L_27d9cec; }
    c->r[4] = c->r[2] - c->r[9];
    (void)f_subs(c, c->r[12], 0x10u);
    if (COND_CC) { goto L_27d9cbc; }
    c->r[1] = c->r[12];
    c->r[1] = c->r[1] & 0xfffffff0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27d9cbc; }
    (void)f_subs(c, c->r[14], c->r[10]);
    c->r[12] = c->r[6];
    if (COND_CC) { c->r[3] = c->r[0] + c->r[4]; }
    if (COND_CC) { c->r[3] = c->r[10] + c->r[3]; }
    if (COND_CC) { (void)f_subs(c, c->r[9], c->r[3]); }
    if (COND_CC) { goto L_27d9cc0; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    c->r[6] = c->r[9] + c->r[1];
    c->r[3] = c->r[14] + c->r[1];
    c->r[4] = c->r[1];
L_27d9c24:;
    { uint32_t ea = c->r[9]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[9] = ea + 16u; }
    c->r[4] = f_subs(c, c->r[4], 0x10u);
    { uint32_t ea = c->r[14]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[14] = ea + 16u; }
    if (COND_NE) { goto L_27d9c24; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27d9cc8; }
    goto L_27d9cd8;
L_27d9c48:;
    c->r[4] = c->r[12] + 0x10u;
    c->r[7] = c->r[12];
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27d9c5cu; f_283b27c(c);
    c->r[12] = c->r[7];
    c->r[1] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[12]); }
    (void)f_subs(c, c->r[9], c->r[10]);
    if (COND_EQ) { goto L_27d9d3c; }
L_27d9c78:;
    (void)f_subs(c, c->r[12], 0x10u);
    if (COND_CC) { goto L_27d9d18; }
    c->r[4] = c->r[12];
    c->r[4] = c->r[4] & 0xfffffff0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27d9d18; }
    c->r[2] = c->r[0] + c->r[4];
    c->r[1] = c->r[9] + c->r[4];
    c->r[3] = c->r[4];
    c->r[7] = c->r[0];
L_27d9ca0:;
    { uint32_t ea = c->r[9]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[9] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x10u);
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[7] = ea + 16u; }
    if (COND_NE) { goto L_27d9ca0; }
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_NE) { goto L_27d9d20; }
    goto L_27d9d30;
L_27d9cbc:;
    c->r[12] = c->r[6];
L_27d9cc0:;
    c->r[3] = c->r[14];
    c->r[6] = c->r[9];
L_27d9cc8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[6] = c->r[6] + 0x1u; c->r[2] = v; }
    (void)f_subs(c, c->r[10], c->r[6]);
    { uint32_t ea = c->r[3]; ST8(ea, c->r[2]); c->r[3] = c->r[3] + 0x1u; }
    if (COND_NE) { goto L_27d9cc8; }
L_27d9cd8:;
    c->r[6] = c->r[12];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + c->r[4];
    c->r[14] = c->r[0] + c->r[1];
L_27d9cec:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[14]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[2] + c->r[12];
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d9d10; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    goto L_27d9d84;
L_27d9d10:;
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[0]); }
    goto L_27d9d84;
L_27d9d18:;
    c->r[1] = c->r[9];
    c->r[2] = c->r[0];
L_27d9d20:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[3] = v; }
    (void)f_subs(c, c->r[10], c->r[1]);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); c->r[2] = c->r[2] + 0x1u; }
    if (COND_NE) { goto L_27d9d20; }
L_27d9d30:;
    c->r[7] = c->r[6];
    c->r[0] = c->r[0] + c->r[12];
    goto L_27d9d40;
L_27d9d3c:;
    c->r[7] = c->r[6];
L_27d9d40:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x28u;
    c->r[1] = c->r[6];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27d9d70u; f_27c75a8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27d9d80; }
    c->r[0] = c->r[6];
    c->r[14] = 0x27d9d80u; f_283b288(c);
L_27d9d80:;
    c->r[6] = c->r[7];
L_27d9d84:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[2] = (c->r[1] >> 1); }
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_HI) { goto L_27d9db4; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[1] = c->r[6] + 0x1u; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27d9db4u; f_27c75a8(c);
L_27d9db4:;
    c->r[9] = c->r[10] + 0x1u;
L_27d9db8:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27d9dc4:;
    c->r[14] = 0x27d9dccu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d9dcc:;
    c->r[14] = 0x27d9dd4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d9dd4:;
    c->r[14] = 0x27d9ddcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d9ddc:;
    c->r[6] = c->r[14];
    c->r[4] = c->r[12];
    c->r[14] = 0x27d9decu;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27d9e44(Cpu *restrict c) {
    FN_ENTER(0x27d9e44u);
L_27d9e44:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[6] = c->r[1];
    c->r[5] = c->r[0];
    c->r[0] = c->r[6] - c->r[5];
    c->r[4] = c->r[2];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_27da15c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6fu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x64u); }
    if (COND_NE) { goto L_27d9fa0; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6eu);
    if (COND_NE) { goto L_27d9fa0; }
    c->r[9] = c->r[5] + 0x2u;
    (void)f_subs(c, c->r[0], 0x6fu);
    if (COND_NE) { goto L_27da0e0; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x27d9ea0u; f_27dac98(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[5];
    (void)f_subs(c, c->r[7], c->r[9]);
    if (COND_EQ) { goto L_27da160; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x27d9ec0u; f_27c79bc(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[7];
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_EQ) { goto L_27da160; }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[6] - c->r[0];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_27da0d4; }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[6] - 0xbu; }
    c->r[0] = c->r[6] - 0x18u;
    c->r[14] = 0x27d9f10u; f_27c75a8(c);
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[13], c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[8] - 0x18u;
    c->r[6] = c->r[8];
L_27d9f3c:;
    c->r[5] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d9f58; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d9f58u; f_283b288(c);
L_27d9f58:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d9f6c; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d9f6cu; f_283b288(c);
L_27d9f6c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_27d9f3c; }
    { uint32_t ea = c->r[13]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 4u; c->r[2] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[13];
    c->r[1] = c->r[4];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[8] - 0x30u;
    c->r[14] = 0x27d9f9cu; f_27c75a8(c);
    goto L_27da0c4;
L_27d9fa0:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x27d9fb0u; f_27e3728(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_27da160; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x27d9fc8u; f_27dac98(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[5];
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27da160; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x27d9fe8u; f_27c79bc(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[7];
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_EQ) { goto L_27da160; }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[6] - c->r[0];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_27da0d4; }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[6] - 0xbu; }
    c->r[0] = c->r[6] - 0x18u;
    c->r[14] = 0x27da038u; f_27c75a8(c);
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[13], c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[8] - 0x18u;
    c->r[6] = c->r[8];
L_27da064:;
    c->r[5] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27da080; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27da080u; f_283b288(c);
L_27da080:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27da094; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27da094u; f_283b288(c);
L_27da094:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_27da064; }
    { uint32_t ea = c->r[13]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 4u; c->r[2] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[13];
    c->r[1] = c->r[4];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[8] - 0x30u;
    c->r[14] = 0x27da0c4u; f_27c75a8(c);
L_27da0c4:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27da0d4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27da0d4u; f_283b288(c);
L_27da0d4:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_27da0e0:;
    (void)f_subs(c, c->r[9], c->r[6]);
    if (COND_EQ) { goto L_27da154; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x27da0f8u; f_27da190(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[9]);
    if (COND_NE) { goto L_27da118; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x27da114u; f_27e3728(c);
    c->r[8] = c->r[0];
L_27da118:;
    (void)f_subs(c, c->r[8], c->r[9]);
    c->r[6] = c->r[9];
    if (COND_EQ) { goto L_27da154; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27da154; }
    c->r[1] = 0x367824u;
    c->r[0] = c->r[0] - 0x18u;
    c->r[3] = 0x1u;
    c->r[2] = 0x27da14cu + c->r[1];
    c->r[1] = 0x0u;
    c->r[14] = 0x27da150u; f_27c73c8(c);
    c->r[6] = c->r[8];
L_27da154:;
    (void)f_subs(c, c->r[6], c->r[9]);
    if (COND_NE) { c->r[5] = c->r[6]; }
L_27da15c:;
    c->r[0] = c->r[5];
L_27da160:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_27da190(Cpu *restrict c) {
    FN_ENTER(0x27da190u);
L_27da190:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    c->r[6] = c->r[1];
    c->r[10] = c->r[0];
    c->r[4] = c->r[2];
    (void)f_subs(c, c->r[10], c->r[6]);
    if (COND_EQ) { goto L_27da46c; }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x44u);
    if (COND_EQ) { goto L_27da374; }
    (void)f_subs(c, c->r[0], 0x53u);
    if (COND_EQ) { goto L_27da290; }
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_NE) { goto L_27da46c; }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x27da1e0u; f_27ca728(c);
    c->r[1] = c->r[7] - c->r[5];
    c->r[2] = 0xaaabu;
    c->r[3] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[3] * c->r[2]; c->r[9] = r; }
    (void)f_subs(c, c->r[0], c->r[10]);
    c->r[1] = c->r[6] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[8] = r; }
    if (COND_EQ) { goto L_27da414; }
    c->r[1] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_NE) { goto L_27da414; }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] - 0x18u;
    c->r[2] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x27da234u; f_27c7718(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CS) { goto L_27da478; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27da814;
L_27da290:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x27da2a0u; f_27c8b14(c);
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_NE) { goto L_27dab00; }
    c->r[0] = c->r[6] - c->r[10];
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27da46c; }
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27da46c; }
    c->r[5] = c->r[10] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x27da2d4u; f_27cbd88(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_27da46c; }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[10];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27dab00; }
    c->r[1] = 0x367712u;
    c->r[0] = c->r[2] - 0x18u;
    c->r[3] = 0x5u;
    c->r[5] = 0x0u;
    c->r[2] = 0x27da308u + c->r[1];
    c->r[1] = 0x0u;
    c->r[14] = 0x27da30cu; f_27c73c8(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x27da328u; f_27c7718(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CS) { goto L_27da8ec; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    goto L_27da404;
L_27da374:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x27da384u; f_27cbb1c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_EQ) { goto L_27da46c; }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[10];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27dab00; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] - 0x18u;
    c->r[2] = c->r[13] + 0x4u;
    c->r[14] = 0x27da3b8u; f_27c7718(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CS) { goto L_27da4d0; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
L_27da404:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27daafc;
L_27da414:;
    (void)f_subs(c, c->r[8], c->r[9]);
    if (COND_EQ) { goto L_27da46c; }
L_27da41c:;
    c->r[7] = c->r[6] - 0x18u;
L_27da420:;
    c->r[5] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27da43c; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27da43cu; f_283b288(c);
L_27da43c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27da450; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27da450u; f_283b288(c);
L_27da450:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_27da420; }
    c->r[8] = c->r[8] - 0x1u;
    c->r[6] = c->r[7];
    (void)f_subs(c, c->r[8], c->r[9]);
    if (COND_NE) { goto L_27da41c; }
L_27da46c:;
    c->r[0] = c->r[10];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27da478:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[5];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27dab08; }
    c->r[3] = c->r[3] - c->r[5];
    c->r[6] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[4] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27da528; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27da538; }
    c->r[5] = 0x0u;
    goto L_27da568;
L_27da4d0:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[7];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27dab10; }
    c->r[3] = c->r[3] - c->r[7];
    c->r[5] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[4] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27da634; }
    c->r[7] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[7], c->r[2]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[7] = c->r[2]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_27da644; }
    c->r[7] = 0x0u;
    goto L_27da740;
L_27da528:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
L_27da538:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27da560; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27da55cu; f_283b27c(c);
    goto L_27da568;
L_27da560:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27da568:;
    c->r[2] = c->r[0] + (c->r[6] << 4);
    c->r[1] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[6] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27da66c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_27da5dc:;
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
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27da5dc; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27da674;
L_27da634:;
    c->r[0] = 0x0u;
    c->r[7] = ~0xf0000000u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
L_27da644:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[7] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[7] << 4));
    if (COND_CS) { goto L_27da738; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27da668u; f_283b27c(c);
    goto L_27da740;
L_27da66c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27da674:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27da6a0u; f_27e4b00(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27da814; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27da6f8; }
L_27da6b8:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27da6d4; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27da6d4u; f_283b288(c);
L_27da6d4:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27da6e8; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27da6e8u; f_283b288(c);
L_27da6e8:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27da6b8; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27da6f8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27da80c; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27da80c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    goto L_27da814;
L_27da738:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27da740:;
    c->r[2] = c->r[0] + (c->r[5] << 4);
    c->r[1] = c->r[0] + (c->r[7] << 4);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[5] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27da820; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_27da7b4:;
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
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27da7b4; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27da828;
L_27da80c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27da814u; f_283b288(c);
L_27da814:;
    c->r[0] = c->r[8];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27da820:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27da828:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27da854u; f_27e4b00(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27daafc; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27da8ac; }
L_27da86c:;
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27da888; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27da888u; f_283b288(c);
L_27da888:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27da89c; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27da89cu; f_283b288(c);
L_27da89c:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27da86c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27da8ac:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27daaf4; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27daaf4; }
L_27da8c4:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    goto L_27daafc;
L_27da8ec:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[7];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27dab18; }
    c->r[3] = c->r[3] - c->r[7];
    c->r[5] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[4] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27da944; }
    c->r[7] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[7], c->r[2]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[7] = c->r[2]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_27da954; }
    c->r[7] = 0x0u;
    goto L_27da984;
L_27da944:;
    c->r[0] = 0x0u;
    c->r[7] = ~0xf0000000u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
L_27da954:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[7] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[7] << 4));
    if (COND_CS) { goto L_27da97c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27da978u; f_283b27c(c);
    goto L_27da984;
L_27da97c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27da984:;
    c->r[2] = c->r[0] + (c->r[5] << 4);
    c->r[1] = c->r[0] + (c->r[7] << 4);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[5] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27daa50; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_27da9f8:;
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
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27da9f8; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27daa58;
L_27daa50:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27daa58:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27daa84u; f_27e4b00(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27daafc; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27daadc; }
L_27daa9c:;
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27daab8; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27daab8u; f_283b288(c);
L_27daab8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27daacc; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27daaccu; f_283b288(c);
L_27daacc:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27daa9c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27daadc:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27daaf4; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LS) { goto L_27da8c4; }
L_27daaf4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27daafcu; f_283b288(c);
L_27daafc:;
    c->r[0] = c->r[6];
L_27dab00:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27dab08:;
    c->r[14] = 0x27dab10u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27dab10:;
    c->r[14] = 0x27dab18u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27dab18:;
    c->r[14] = 0x27dab20u;
    __attribute__((musttail)) return f_284f5c8(c);
}
