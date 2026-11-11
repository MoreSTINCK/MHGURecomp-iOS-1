#include "cpu.h"
#include "neon_rt.h"
void f_27bab48(Cpu *c);
void f_27c47a4(Cpu *c);
void f_27c73c8(Cpu *c);
void f_27c75a8(Cpu *c);
void f_27c7718(Cpu *c);
void f_27c79bc(Cpu *c);
void f_27c8b14(Cpu *c);
void f_27ca728(Cpu *c);
void f_27cbb1c(Cpu *c);
void f_27cdb70(Cpu *c);
void f_27d4d10(Cpu *c);
void f_27e3894(Cpu *c);
void f_27e4b00(Cpu *c);
void f_27e4d28(Cpu *c);
void f_283aa78(Cpu *c);
void f_283afac(Cpu *c);
void f_283b27c(Cpu *c);
void f_283b288(Cpu *c);
void f_283f1ac(Cpu *c);
void f_284f5c8(Cpu *c);
void f_27bab48(Cpu *restrict c) {
    FN_ENTER(0x27bab48u);
L_27bab48:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xecu;
    c->r[10] = c->r[1];
    c->r[5] = c->r[0];
    c->r[8] = c->r[2];
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_EQ) { goto L_27babb0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0xaaaau;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xaaa0000u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[8]); }
    c->r[0] = c->r[1];
    (void)f_subs(c, c->r[0], 0x4bu);
    if (COND_EQ) { goto L_27babb8; }
    (void)f_subs(c, c->r[0], 0x56u);
    c->r[6] = c->r[5];
    if (COND_EQ) { goto L_27babbc; }
    (void)f_subs(c, c->r[0], 0x72u);
    if (COND_NE) { goto L_27bad40; }
    c->r[6] = c->r[5];
    c->r[7] = 0x4u;
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    goto L_27babbc;
L_27babb0:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27babb8:;
    c->r[6] = c->r[5];
L_27babbc:;
    (void)f_subs(c, c->r[0], 0x56u);
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; } }
    if (COND_EQ) { c->r[7] = c->r[7] | 0x2u; }
    (void)f_subs(c, c->r[0], 0x4bu);
    if (COND_EQ) { c->r[6] = c->r[6] + 0x1u; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_27bad38; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x27bac00u; f_27bab48(c);
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[6] = c->r[5];
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[4], 0x46u);
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[4]); }
    if (COND_NE) { goto L_27bad04; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    c->r[0] = c->r[8];
    c->r[8] = c->r[6] - 0x10u;
    c->r[10] = 0x1000u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[7]); }
L_27bac3c:;
    c->r[7] = c->r[6] - 0x10u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27bace0; }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], c->r[5]);
    if (COND_EQ) { goto L_27bac9c; }
L_27bac5c:;
    c->r[4] = c->r[9] - 0x18u;
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bac78; }
    { uint32_t ea = c->r[9] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bac78u; f_283b288(c);
L_27bac78:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bac8c; }
    { uint32_t ea = c->r[9] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bac8cu; f_283b288(c);
L_27bac8c:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], c->r[5]);
    if (COND_NE) { goto L_27bac5c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
L_27bac9c:;
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CC) { goto L_27bacd8; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27bacd8; }
    { uint32_t ea = c->r[6] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[5];
    { uint32_t ea = c->r[0] + c->r[10]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[3] + c->r[1];
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[5] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); } }
    goto L_27bace0;
L_27bacd8:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27bace0u; f_283b288(c);
L_27bace0:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[8]);
    if (COND_NE) { goto L_27bac3c; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[10] = v; }
L_27bad04:;
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_27bae70; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27bafe4;
L_27bad38:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27bad40:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bad50u; f_27e4d28(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_27bb6b0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x41u;
    (void)f_subs(c, c->r[0], 0x14u);
    if (COND_HI) { goto L_27c1ab8; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27bad78u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27badd0u: goto L_27badd0; case 0x27bb6bcu: goto L_27bb6bc; case 0x27bb724u: goto L_27bb724; case 0x27bb88cu: goto L_27bb88c; case 0x27bb8ecu: goto L_27bb8ec; case 0x27bba38u: goto L_27bba38; case 0x27bbb04u: goto L_27bbb04; case 0x27bbb74u: goto L_27bbb74; case 0x27bbbe8u: goto L_27bbbe8; case 0x27bbf08u: goto L_27bbf08; case 0x27bbff4u: goto L_27bbff4; case 0x27bc0c0u: goto L_27bc0c0; case 0x27c1ab8u: goto L_27c1ab8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27badd0:;
    c->r[6] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_EQ) { goto L_27bbfd4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_27bc340; }
    c->r[4] = c->r[5] + 0x2u;
    c->r[1] = c->r[10];
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    c->r[14] = 0x27badfcu; f_27bab48(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], c->r[4]);
    if (COND_EQ) { goto L_27bc2d8; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27bf128; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 8u; c->r[6] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[6] = (c->r[1] >> 1); }
    if (COND_EQ) { c->r[8] = c->r[0] - 0xbu; }
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_CS) { c->r[6] = 0x2u; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27c3bbc; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27bf574; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    c->r[7] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27bf590; }
    goto L_27bf5a0;
L_27bae70:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[6] - c->r[3];
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3204; }
    c->r[3] = c->r[0] - c->r[3];
    c->r[6] = (uint32_t)((int32_t)c->r[1] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[9] = c->r[7];
    c->r[1] = c->r[8] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27baecc; }
    c->r[7] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[7], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[7] = c->r[2]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_27baedc; }
    c->r[7] = 0x0u;
    goto L_27baf0c;
L_27baecc:;
    c->r[0] = 0x0u;
    c->r[7] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27baedc:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[7] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[7] << 4));
    if (COND_CS) { goto L_27baf04; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27baf00u; f_283b27c(c);
    goto L_27baf0c;
L_27baf04:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27baf0c:;
    c->r[1] = c->r[0] + (c->r[6] << 4);
    c->r[2] = c->r[0] + (c->r[7] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[6] << 4); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27bafa8; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
L_27baf50:;
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] - 8u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27baf50; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27bafb0;
L_27bafa8:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
L_27bafb0:;
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[2]); }
    c->r[14] = 0x27bafdcu; f_27e4b00(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[9];
L_27bafe4:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xaaabu;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = c->r[10] - c->r[1];
    { uint32_t r = c->r[0] * c->r[2]; c->r[9] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    (void)f_subs(c, c->r[9], c->r[0]);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27bb6ac; }
    c->r[0] = c->r[7] & 0x4u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] & 0x2u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x386836u;
    c->r[0] = 0x27bb03cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x38683bu;
    c->r[0] = 0x27bb048u + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x386825u;
    c->r[0] = 0x27bb054u + c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x386812u;
    c->r[0] = 0x27bb060u + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x386817u;
    c->r[0] = 0x27bb06cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x386801u;
    c->r[0] = 0x27bb078u + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    goto L_27bb32c;
L_27bb07c:;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_27bb090;
L_27bb088:;
    c->r[5] = 0x0u;
    c->r[3] = 0x0u;
L_27bb090:;
    c->r[9] = c->r[4] + (c->r[4] << 1);
    c->r[4] = c->r[3];
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + (c->r[9] << 3); ST32(ea, c->r[10]); c->r[4] = ea; }
    c->r[12] = c->r[3] + (c->r[0] << 3);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[12]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bb0d0; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[4], c->v.d[16]);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27bb15c;
L_27bb0d0:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27c3898; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[7], 0xbu);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    if (COND_CS) { goto L_27bb108; }
    c->r[0] = (c->r[7] << 1);
    c->r[6] = c->r[4];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    if (COND_NE) { goto L_27bb140; }
    goto L_27bb14c;
L_27bb108:;
    c->r[5] = c->r[7] + 0x10u;
    c->r[0] = c->r[3] + (c->r[9] << 3);
    c->r[5] = c->r[5] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[6] = c->r[1];
    c->r[14] = 0x27bb124u; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->r[6] = c->r[0];
    c->r[0] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[7]); }
L_27bb140:;
    c->r[0] = c->r[6];
    c->r[2] = c->r[7];
    c->r[14] = 0x27bb14cu; f_283aa78(c);
L_27bb14c:;
    { uint32_t ea = c->r[6] + c->r[7]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
L_27bb15c:;
    c->r[9] = c->r[3] + (c->r[9] << 3);
    c->r[0] = c->r[8];
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[10]); c->r[7] = ea; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bb198; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[7], c->v.d[16]);
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_27bb210;
L_27bb198:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c38a8; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27bb1c8; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_NE) { goto L_27bb1f8; }
    goto L_27bb208;
L_27bb1c8:;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[5] + 0x10u;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x27bb1dcu; f_283b27c(c);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27bb1f8:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[14] = 0x27bb208u; f_283aa78(c);
L_27bb208:;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
L_27bb210:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4] + 0x18u;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_27bb27c; }
L_27bb228:;
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 24u);
    ST64(c->r[4] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 12u);
    ST64(c->r[4] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[4] - 0x4u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[4] - 0x18u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[1] - 0x18u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_27bb228; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_27bb280;
L_27bb27c:;
    c->r[7] = c->r[5];
L_27bb280:;
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[7]);
    { uint32_t ea = c->r[6] - 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_27bb2d8; }
L_27bb2a0:;
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bb2b4; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bb2b4u; f_283b288(c);
L_27bb2b4:;
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bb2cc; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bb2ccu; f_283b288(c);
L_27bb2cc:;
    (void)f_subs(c, c->r[7], c->r[6]);
    c->r[5] = c->r[6];
    if (COND_NE) { goto L_27bb2a0; }
L_27bb2d8:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27bb698; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_27bb320; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27bb320; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0xfu - c->r[7];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); } }
    goto L_27bb698;
L_27bb320:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27bb328u; f_283b288(c);
    goto L_27bb698;
L_27bb32c:;
    (void)f_subs(c, c->r[4], 0x46u);
    if (COND_NE) { goto L_27bb35c; }
    c->r[4] = c->r[9] + (c->r[9] << 1);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[4] << 3);
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_NE) { goto L_27bb3cc; }
    c->r[7] = (c->r[2] >> 1);
    c->r[5] = c->r[0] + 0x1u;
    goto L_27bb3d4;
L_27bb35c:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4bu);
    if (COND_NE) { goto L_27bb380; }
    c->r[0] = c->r[9] + (c->r[9] << 1);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x6u;
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x27bb380u; f_27c75a8(c);
L_27bb380:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27bb3a4; }
    c->r[0] = c->r[9] + (c->r[9] << 1);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x9u;
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x27bb3a4u; f_27c75a8(c);
L_27bb3a4:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27bb48c; }
    c->r[0] = c->r[9] + (c->r[9] << 1);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x9u;
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x27bb3c8u; f_27c75a8(c);
    goto L_27bb48c;
L_27bb3cc:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
L_27bb3d4:;
    c->r[3] = c->r[7] - 0x2u;
    { uint32_t ea = c->r[5] + c->r[3]; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x26u);
    if (COND_NE) { goto L_27bb3ec; }
    c->r[7] = c->r[7] - 0x3u;
    goto L_27bb418;
L_27bb3ec:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27bb400; }
    c->r[2] = (c->r[2] >> 1);
    c->r[1] = c->r[0] + 0x1u;
    goto L_27bb408;
L_27bb400:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
L_27bb408:;
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[1] - 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x26u);
    if (COND_EQ) { c->r[7] = c->r[3]; }
L_27bb418:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4bu);
    if (COND_NE) { goto L_27bb438; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->r[3] = 0x6u;
    c->r[14] = 0x27bb434u; f_27c73c8(c);
    c->r[7] = c->r[7] + 0x6u;
L_27bb438:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27bb464; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x9u;
    c->r[0] = c->r[0] + (c->r[4] << 3);
    c->r[0] = c->r[0] + 0xcu;
    c->r[14] = 0x27bb460u; f_27c73c8(c);
    c->r[7] = c->r[7] + 0x9u;
L_27bb464:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27bb48c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x9u;
    c->r[0] = c->r[0] + (c->r[4] << 3);
    c->r[0] = c->r[0] + 0xcu;
    c->r[14] = 0x27bb48cu; f_27c73c8(c);
L_27bb48c:;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[9] + (c->r[9] << 1);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[6] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_EQ) { goto L_27bb4dc; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bb570; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[9], c->v.d[16]);
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27bb5dc;
L_27bb4dc:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0xaaabu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    c->r[3] = 0xaaaau;
    c->r[0] = c->r[9] - c->r[2];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[7]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_27c3204; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    c->r[5] = c->r[3];
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27bb53c; }
    c->r[5] = (c->r[1] << 1);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { c->r[5] = c->r[0]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27bb088; }
L_27bb53c:;
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[2] = c->r[1] - c->r[3];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_27bb07c; }
    c->r[14] = 0x27bb568u; f_283b27c(c);
    c->r[3] = c->r[0];
    goto L_27bb090;
L_27bb570:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27c3204; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[7], 0xbu);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_CS) { goto L_27bb5a4; }
    c->r[0] = (c->r[7] << 1);
    c->r[6] = c->r[9];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    if (COND_NE) { goto L_27bb5c4; }
    goto L_27bb5d4;
L_27bb5a4:;
    c->r[4] = c->r[7] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27bb5b4u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[6]); }
L_27bb5c4:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    c->r[14] = 0x27bb5d4u; f_283aa78(c);
L_27bb5d4:;
    { uint32_t ea = c->r[6] + c->r[7]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
L_27bb5dc:;
    c->r[7] = c->r[9];
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[10]); c->r[7] = ea; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bb618; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[7], c->v.d[16]);
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_27bb68c;
L_27bb618:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c376c; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27bb64c; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_NE) { goto L_27bb67c; }
    goto L_27bb688;
L_27bb64c:;
    c->r[4] = c->r[5] + 0x10u;
    c->r[7] = c->r[1];
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27bb660u; f_283b27c(c);
    c->r[1] = c->r[7];
    c->r[7] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    c->r[2] = c->r[9] + 0xcu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27bb67c:;
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27bb688u; f_283aa78(c);
L_27bb688:;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[10]); }
L_27bb68c:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[0]); }
L_27bb698:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { goto L_27bb32c; }
L_27bb6ac:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
L_27bb6b0:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27bb6bc:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x27bb6d4u; f_27ca728(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    c->r[6] = c->r[5];
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8]; c->r[5] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_27bc2e0; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27bce88;
L_27bb724:;
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_EQ) { goto L_27c1ab8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x54u;
    (void)f_subs(c, c->r[0], 0x22u);
    if (COND_HI) { goto L_27c1ab8; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27bb74cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27bb7dcu: goto L_27bb7dc; case 0x27bcd04u: goto L_27bcd04; case 0x27bcdd0u: goto L_27bcdd0; case 0x27c1ab8u: goto L_27c1ab8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27bb7dc:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bb7ecu; f_27cbb1c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27c1ab8; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[11] - 0x60u;
    c->r[14] = 0x27bb824u; f_27c7718(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CC) { goto L_27c1b30; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[6];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3c04; }
    c->r[3] = c->r[3] - c->r[6];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[8] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c0244; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27c0254; }
    c->r[5] = 0x0u;
    goto L_27c05fc;
L_27bb88c:;
    c->r[4] = c->r[5] + 0x1u;
    c->r[1] = c->r[10];
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bb8a0u; f_27bab48(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_27bbfd4; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bb8bcu; f_27bab48(c);
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27bc2d0; }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[3] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { goto L_27bc530; }
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27bb8ec:;
    c->r[6] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_EQ) { goto L_27bbfd4; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bb908u; f_27e3894(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_EQ) { goto L_27bc2d0; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bb924u; f_27bab48(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27bc8f8; }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    c->r[9] = 0xaaabu;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xaaaa0000u;
    c->r[6] = c->r[5];
    c->r[1] = c->r[4] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[9]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27bb6b0; }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27bb974u; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[5] = c->r[10] - 0x18u;
    c->r[7] = c->r[10];
L_27bb9a0:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bb9bc; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bb9bcu; f_283b288(c);
L_27bb9bc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bb9d0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bb9d0u; f_283b288(c);
L_27bb9d0:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_27bb9a0; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] - 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] - 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { c->r[5] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[8] = c->r[10] - 0x2fu; }
    (void)f_subs(c, c->r[5], 0x9u);
    if (COND_CS) { c->r[5] = 0x9u; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3bcc; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27bf338; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    c->r[7] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27bf354; }
    goto L_27bf364;
L_27bba38:;
    c->r[4] = c->r[5] + 0x1u;
    c->r[1] = c->r[10];
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bba4cu; f_27bab48(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27bbfd4; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27bb6b0; }
    c->r[1] = 0x3860fdu;
    c->r[0] = c->r[0] - 0x18u;
    c->r[2] = 0x8u;
    c->r[1] = 0x27bba80u + c->r[1];
    c->r[14] = 0x27bba80u; f_27c75a8(c);
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[11] - 0x60u;
    c->r[14] = 0x27bba9cu; f_27c7718(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CC) { goto L_27c1b30; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[6];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3bac; }
    c->r[3] = c->r[3] - c->r[6];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[8] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27beec4; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27beed4; }
    c->r[5] = 0x0u;
    goto L_27bef44;
L_27bbb04:;
    c->r[4] = c->r[5] + 0x1u;
    c->r[1] = c->r[10];
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x27bbb20u; f_27bab48(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    c->r[6] = c->r[5];
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[8];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_27bc428; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27bd554;
L_27bbb74:;
    c->r[4] = c->r[5] + 0x1u;
    c->r[1] = c->r[10];
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x27bbb90u; f_27bab48(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_27bc480; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27bdc80;
L_27bbbe8:;
    c->r[6] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_EQ) { goto L_27bbfd4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x59u);
    if (COND_NE) { goto L_27bbc0c; }
    c->r[6] = c->r[5] + 0x2u;
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_EQ) { goto L_27bc2d8; }
L_27bbc0c:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bbc1cu; f_27bab48(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[6]);
    if (COND_EQ) { goto L_27bc790; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[8], c->r[10]);
    c->r[0] = 0x2802u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_27bbeb4; }
    c->r[0] = 0x385c13u;
    c->r[0] = 0x27bbc5cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
L_27bbc64:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x51u);
    if (COND_LE) { goto L_27bbc90; }
    (void)f_subs(c, c->r[0], 0x52u);
    if (COND_EQ) { goto L_27bbcb8; }
    (void)f_subs(c, c->r[0], 0x76u);
    if (COND_NE) { goto L_27bbcf0; }
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_NE) { goto L_27bbc64; }
    goto L_27bbeb4;
L_27bbc90:;
    (void)f_subs(c, c->r[0], 0x4fu);
    if (COND_NE) { goto L_27bbce8; }
    c->r[0] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_EQ) { goto L_27bbcf0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x45u);
    if (COND_NE) { goto L_27bbcf0; }
    c->r[1] = 0x2u;
    goto L_27bbcd4;
L_27bbcb8:;
    c->r[0] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_EQ) { goto L_27bbcf0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x45u);
    if (COND_NE) { goto L_27bbcf0; }
    c->r[1] = 0x1u;
L_27bbcd4:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_NE) { goto L_27bbc64; }
    goto L_27bbeb4;
L_27bbce8:;
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_EQ) { goto L_27bf0e4; }
L_27bbcf0:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[10];
    c->r[14] = 0x27bbd08u; f_27bab48(c);
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_EQ) { goto L_27c0018; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[10]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27bfeec; }
    c->r[0] = c->r[4] - c->r[7];
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[2] = c->r[1];
    { uint32_t r = c->r[0] * c->r[2]; c->r[9] = r; }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[1] - c->r[0];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    (void)f_subs(c, c->r[9], c->r[0]);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27bbe8c; }
    c->r[0] = c->r[9] + (c->r[9] << 1);
    c->r[4] = c->r[10];
    c->r[7] = c->r[9];
    c->r[10] = (c->r[0] << 3);
L_27bbd68:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[1] = (c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27bbd90; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[11] - 0x48u;
    c->r[2] = 0x2u;
    c->r[14] = 0x27bbd90u; f_27c75a8(c);
L_27bbd90:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[10];
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] + 0xdu; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[14] = 0x27bbdb4u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 96u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[1] = c->r[6];
    c->r[0] = c->r[11] - 0x60u;
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x48u;
    c->r[14] = 0x27bbdfcu; f_27c75a8(c);
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27bbe0c; }
    c->r[0] = c->r[6];
    c->r[14] = 0x27bbe0cu; f_283b288(c);
L_27bbe0c:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[10] = c->r[10] + 0x18u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_27bbd68; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CS) { goto L_27bbea0; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = c->r[4];
L_27bbe38:;
    c->r[6] = c->r[7] - 0x18u;
L_27bbe3c:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bbe58; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bbe58u; f_283b288(c);
L_27bbe58:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bbe6c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bbe6cu; f_283b288(c);
L_27bbe6c:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27bbe3c; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[7] = c->r[6];
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_NE) { goto L_27bbe38; }
L_27bbe8c:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_NE) { goto L_27bbc64; }
    goto L_27bbeb4;
L_27bbea0:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_NE) { goto L_27bbc64; }
L_27bbeb4:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[6] - 0x18u;
L_27bbec0:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bbedc; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bbedcu; f_283b288(c);
L_27bbedc:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bbef0; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bbef0u; f_283b288(c);
L_27bbef0:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_27bbec0; }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_27c0020;
L_27bbf08:;
    c->r[4] = c->r[5] + 0x1u;
    c->r[1] = c->r[10];
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bbf1cu; f_27bab48(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27bbfd4; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27bb6b0; }
    c->r[1] = 0x385c36u;
    c->r[0] = c->r[0] - 0x18u;
    c->r[2] = 0xau;
    c->r[1] = 0x27bbf50u + c->r[1];
    c->r[14] = 0x27bbf50u; f_27c75a8(c);
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[11] - 0x60u;
    c->r[14] = 0x27bbf6cu; f_27c7718(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CC) { goto L_27c1b30; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[6];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3bb4; }
    c->r[3] = c->r[3] - c->r[6];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[8] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27beefc; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27bef0c; }
    c->r[5] = 0x0u;
    goto L_27bf018;
L_27bbfd4:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27bbff4:;
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_EQ) { goto L_27bc130; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27bc130; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[3] = 0x0u;
    c->r[14] = 0x27bc020u; f_27c47a4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27bc2d8; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[11] - 0x60u;
    c->r[14] = 0x27bc058u; f_27c7718(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CC) { goto L_27c1b30; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[6];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3be4; }
    c->r[3] = c->r[3] - c->r[6];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[8] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27bfb2c; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27bfb3c; }
    c->r[5] = 0x0u;
    goto L_27c0140;
L_27bc0c0:;
    c->r[4] = c->r[5] + 0x1u;
    c->r[1] = c->r[10];
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x27bc0dcu; f_27bab48(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    c->r[6] = c->r[5];
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[8];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_27bc4d8; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27be7b4;
L_27bc130:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bc140u; f_27c8b14(c);
    c->r[4] = c->r[0];
    c->r[6] = c->r[5];
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_27bb6b0; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bc160u; f_27c79bc(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27bc798; }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[6] = c->r[4];
    c->r[1] = c->r[5] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27bb6b0; }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27bc1b0u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[8] - 0x18u;
    c->r[5] = c->r[8];
L_27bc1e0:;
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bc1fc; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bc1fcu; f_283b288(c);
L_27bc1fc:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bc210; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bc210u; f_283b288(c);
L_27bc210:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27bc1e0; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[9] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = c->r[5];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[8] - 0x30u;
    c->r[14] = 0x27bc248u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[11] - 0x60u;
    c->r[2] = c->r[11] - 0x70u;
    c->r[14] = 0x27bc268u; f_27c7718(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CC) { goto L_27c2294; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[7];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3bdc; }
    c->r[3] = c->r[3] - c->r[7];
    c->r[8] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[4] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27bf864; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27bf874; }
    c->r[5] = 0x0u;
    goto L_27bfe20;
L_27bc2d0:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27bc2d8:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27bc2e0:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[1] - c->r[3];
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3adc; }
    c->r[3] = c->r[0] - c->r[3];
    c->r[6] = (uint32_t)((int32_t)c->r[1] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[8] + 0x1cu;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27bc818; }
    c->r[9] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[9], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[9] = c->r[2]; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_27bc828; }
    c->r[9] = 0x0u;
    goto L_27bca58;
L_27bc340:;
    c->r[0] = c->r[0] - 0x31u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_27bc7a0; }
    c->r[1] = c->r[10];
    c->r[0] = c->r[5] - c->r[10];
    c->r[10] = ~0x0u;
L_27bc35c:;
    c->r[2] = c->r[0] + c->r[10];
    (void)f_adds(c, c->r[2], 0x3u);
    if (COND_EQ) { goto L_27bef34; }
    c->r[2] = c->r[5] + c->r[10];
    c->r[10] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x30u;
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_CC) { goto L_27bc35c; }
    c->r[0] = c->r[0] + c->r[10];
    (void)f_adds(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_27bfdb8; }
    c->r[4] = c->r[5] + c->r[10];
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_27c027c; }
    c->r[0] = c->r[4] + 0x3u;
    c->r[2] = c->r[8];
    c->r[14] = 0x27bc3a8u; f_27bab48(c);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] - c->r[0];
    c->r[0] = c->r[0] + c->r[10];
    (void)f_adds(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_27c1684; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27c177c; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 8u; c->r[7] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[7] = (c->r[1] >> 1); }
    if (COND_EQ) { c->r[8] = c->r[0] - 0xbu; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_CS) { c->r[7] = 0x2u; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27c3bbc; }
    (void)f_subs(c, c->r[7], 0xbu);
    if (COND_CS) { goto L_27c1788; }
    c->r[0] = (c->r[7] << 1);
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    c->r[9] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27c17a4; }
    goto L_27c17b4;
L_27bc428:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[1] - c->r[3];
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3acc; }
    c->r[3] = c->r[0] - c->r[3];
    c->r[4] = (uint32_t)((int32_t)c->r[1] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[5] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27bc850; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27bc860; }
    c->r[5] = 0x0u;
    goto L_27bcb04;
L_27bc480:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[1] - c->r[3];
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3ac4; }
    c->r[3] = c->r[0] - c->r[3];
    c->r[6] = (uint32_t)((int32_t)c->r[1] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[4] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27bc888; }
    c->r[4] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[4], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[4] = c->r[2]; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_27bc898; }
    c->r[4] = 0x0u;
    goto L_27bcbb0;
L_27bc4d8:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[1] - c->r[3];
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3ad4; }
    c->r[3] = c->r[0] - c->r[3];
    c->r[4] = (uint32_t)((int32_t)c->r[1] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[5] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27bc8c0; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27bc8d0; }
    c->r[5] = 0x0u;
    goto L_27bcc60;
L_27bc530:;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[11] - 0x48u;
    c->v.d[16] = LD64(c->r[3] - 24u);
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3] - 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[3] - 12u);
    ST64(c->r[11] - 60u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] - 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0xcu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[8] - 0x18u;
    c->r[4] = c->r[8];
L_27bc58c:;
    c->r[7] = c->r[4] - 0x18u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bc5a8; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bc5a8u; f_283b288(c);
L_27bc5a8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bc5bc; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bc5bcu; f_283b288(c);
L_27bc5bc:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_NE) { goto L_27bc58c; }
    { uint32_t ea = c->r[8] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[11] - 0x60u;
    c->v.d[16] = LD64(c->r[8] - 48u);
    c->r[9] = c->r[6] + 0xcu;
    ST64(c->r[11] - 96u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[8] - 36u);
    ST64(c->r[11] - 84u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[2] = (c->r[1] >> 1); }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_27bc900; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[1] = c->r[0] + 0x1u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x28u);
    if (COND_NE) { goto L_27bc900; }
    c->r[0] = 0x385334u;
    c->r[1] = 0x27bc650u + c->r[0];
    c->r[0] = c->r[10];
    c->r[2] = 0x1u;
    c->r[14] = 0x27bc658u; f_27c75a8(c);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->v.d[16] = LD64(c->r[10]);
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    ST64(c->r[11] - 112u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    if (COND_EQ) { c->r[1] = c->r[9] + 0x1u; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[6];
    c->r[14] = 0x27bc698u; f_27c75a8(c);
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[6]);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[8]); }
    ST64(c->r[11] - 128u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x80u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[8]); }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x80u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[8]); }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x70u;
    c->r[14] = 0x27bc6dcu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[4]); }
    c->r[2] = 0x3854bbu;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[1] = 0x27bc70cu + c->r[2];
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x3u;
    c->r[14] = 0x27bc714u; f_27c75a8(c);
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
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6eu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bfd34; }
    c->r[0] = 0x0u;
    c->r[10] = c->r[8] - 0x10u;
    { uint32_t ea = c->r[8] - 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27c2574;
L_27bc790:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27bc798:;
    c->r[6] = c->r[4];
    goto L_27bb6b0;
L_27bc7a0:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bc7b0u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27bce44; }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_EQ) { goto L_27bce44; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5fu);
    if (COND_NE) { goto L_27bce44; }
    c->r[4] = c->r[0] + 0x1u;
    c->r[1] = c->r[10];
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bc7e0u; f_27bab48(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27c0c28; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[2] = 0xaaabu;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { goto L_27c11a4; }
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27bc818:;
    c->r[0] = 0x0u;
    c->r[9] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27bc828:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[9] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[9] << 4));
    if (COND_CS) { goto L_27bca50; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27bc84cu; f_283b27c(c);
    goto L_27bca58;
L_27bc850:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27bc860:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27bcafc; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27bc884u; f_283b27c(c);
    goto L_27bcb04;
L_27bc888:;
    c->r[0] = 0x0u;
    c->r[4] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27bc898:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[4] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[4] << 4));
    if (COND_CS) { goto L_27bcba8; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27bc8bcu; f_283b27c(c);
    goto L_27bcbb0;
L_27bc8c0:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27bc8d0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27bcc58; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27bc8f4u; f_283b27c(c);
    goto L_27bcc60;
L_27bc8f8:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27bc900:;
    c->r[0] = 0x383174u;
    c->r[1] = 0x27bc90cu + c->r[0];
    c->r[0] = c->r[10];
    c->r[2] = 0x1u;
    c->r[14] = 0x27bc914u; f_27c75a8(c);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->v.d[16] = LD64(c->r[10]);
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    ST64(c->r[11] - 112u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[4]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[4]); }
    if (COND_EQ) { c->r[1] = c->r[9] + 0x1u; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[4]); }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[6];
    c->r[14] = 0x27bc954u; f_27c75a8(c);
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[6]);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 128u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x80u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    { uint32_t ea = c->r[11] - 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10];
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x80u;
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x70u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[4]); }
    c->r[14] = 0x27bc99cu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    c->r[2] = 0x3851ffu;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[1] = 0x27bc9c8u + c->r[2];
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x3u;
    c->r[14] = 0x27bc9d0u; f_27c75a8(c);
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
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6eu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = c->r[9];
    { uint32_t ea = c->r[8] - 0x18u; uint32_t v = LD8(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bf2c8; }
    c->r[0] = 0x0u;
    c->r[7] = c->r[9] - 0x10u;
    { uint32_t ea = c->r[9] - 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27c1888;
L_27bca50:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27bca58:;
    c->r[1] = c->r[0] + (c->r[6] << 4);
    c->r[2] = c->r[0] + (c->r[9] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[6] << 4); ST32(ea, c->r[2]); }
    c->r[6] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27bce4c; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
L_27bcaa4:;
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 8u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27bcaa4; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27bce5c;
L_27bcafc:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27bcb04:;
    c->r[1] = c->r[0] + (c->r[4] << 4);
    c->r[2] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27bd51c; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
L_27bcb4c:;
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 8u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27bcb4c; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27bd528;
L_27bcba8:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27bcbb0:;
    c->r[1] = c->r[0] + (c->r[6] << 4);
    c->r[2] = c->r[0] + (c->r[4] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[6] << 4); ST32(ea, c->r[2]); }
    c->r[6] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27bdc48; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
L_27bcbf8:;
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 8u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27bcbf8; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27bdc54;
L_27bcc58:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27bcc60:;
    c->r[1] = c->r[0] + (c->r[4] << 4);
    c->r[2] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27be77c; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
L_27bcca8:;
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 8u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27bcca8; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27be788;
L_27bcd04:;
    c->r[0] = c->r[10] - c->r[5];
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_LT) { goto L_27c1ab8; }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[1] = c->r[0] - 0x31u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_HI) { goto L_27bf8f0; }
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_EQ) { goto L_27c1ab8; }
    c->r[0] = 0x0u - c->r[10];
    c->r[4] = c->r[5] + 0x4u;
L_27bcd38:;
    c->r[1] = c->r[4] + c->r[0];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_27c1ab8; }
    { uint32_t ea = c->r[4] - 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = c->r[1] - 0x30u;
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_CC) { goto L_27bcd38; }
    c->r[0] = c->r[4] - c->r[10];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_27c1ab8; }
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5fu);
    if (COND_NE) { goto L_27c1ab8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_27c1ab8; }
    c->r[0] = c->r[4] - 0x2u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[5]); }
    c->r[9] = c->r[0] - c->r[6];
    { uint32_t ea = c->r[4] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x70u);
    if (COND_NE) { goto L_27c2d40; }
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[9], 0x10u);
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27c3c4c; }
    (void)f_subs(c, c->r[9], 0xbu);
    if (COND_CS) { goto L_27c2f98; }
    c->r[0] = (c->r[9] << 1);
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[11] - 0x60u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x60u;
    c->r[7] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27c2fbc; }
    goto L_27c2fcc;
L_27bcdd0:;
    c->r[4] = c->r[5] + 0x2u;
    c->r[1] = c->r[10];
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x27bcdecu; f_27bab48(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_27c1ab8; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8]; c->r[4] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_27bf748; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_27c0c74;
L_27bce44:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27bce4c:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
L_27bce5c:;
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[2]); }
    c->r[14] = 0x27bce88u; f_27e4b00(c);
L_27bce88:;
    c->r[0] = c->r[4] - c->r[7];
    c->r[6] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[6]; c->r[1] = r; }
    c->r[0] = c->r[9] - c->r[5];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27bd390; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = 0x0u;
    goto L_27bd168;
L_27bcec4:;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_27bced8;
L_27bced0:;
    c->r[5] = 0x0u;
    c->r[3] = 0x0u;
L_27bced8:;
    c->r[9] = c->r[4] + (c->r[4] << 1);
    c->r[4] = c->r[3];
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + (c->r[9] << 3); ST32(ea, c->r[10]); c->r[4] = ea; }
    c->r[12] = c->r[3] + (c->r[0] << 3);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[12]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bcf1c; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[7]);
    ST64(c->r[4], c->v.d[16]);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27bcfa0;
L_27bcf1c:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27c3b04; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    if (COND_CS) { goto L_27bcf50; }
    c->r[0] = (c->r[6] << 1);
    c->r[5] = c->r[4];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    if (COND_NE) { goto L_27bcf88; }
    goto L_27bcf94;
L_27bcf50:;
    c->r[0] = c->r[6] + 0x10u;
    c->r[8] = c->r[3] + (c->r[9] << 3);
    c->r[0] = c->r[0] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[1];
    c->r[14] = 0x27bcf68u; f_283b27c(c);
    c->r[1] = c->r[5];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
L_27bcf88:;
    c->r[0] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x27bcf94u; f_283aa78(c);
L_27bcf94:;
    { uint32_t ea = c->r[5] + c->r[6]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
L_27bcfa0:;
    c->r[9] = c->r[3] + (c->r[9] << 3);
    c->r[0] = c->r[7];
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[10]); c->r[6] = ea; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bcfdc; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[6], c->v.d[16]);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_27bd050;
L_27bcfdc:;
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3b14; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27bd00c; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_NE) { goto L_27bd03c; }
    goto L_27bd048;
L_27bd00c:;
    c->r[7] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[7];
    c->r[14] = 0x27bd020u; f_283b27c(c);
    c->r[1] = c->r[7] | 0x1u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27bd03c:;
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27bd048u; f_283aa78(c);
L_27bd048:;
    { uint32_t ea = c->r[6] + c->r[5]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[12] = v; }
L_27bd050:;
    { uint32_t ea = c->r[9] - 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4] + 0x18u;
    { uint32_t ea = c->r[9] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_27bd0b8; }
L_27bd064:;
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 24u);
    ST64(c->r[4] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 12u);
    ST64(c->r[4] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[4] - 0x4u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[4] - 0x18u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[1] - 0x18u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_27bd064; }
    { uint32_t ea = c->r[9] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] - 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27bd0bc;
L_27bd0b8:;
    c->r[5] = c->r[6];
L_27bd0bc:;
    { uint32_t ea = c->r[9] - 0x10u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[6], c->r[5]);
    { uint32_t ea = c->r[9] - 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] - 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[9] - 0x8u; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_27bd10c; }
L_27bd0d4:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bd0e8; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bd0e8u; f_283b288(c);
L_27bd0e8:;
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bd100; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bd100u; f_283b288(c);
L_27bd100:;
    (void)f_subs(c, c->r[5], c->r[7]);
    c->r[6] = c->r[7];
    if (COND_NE) { goto L_27bd0d4; }
L_27bd10c:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0xaaabu;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xaaaa0000u;
    if (COND_EQ) { goto L_27bd380; }
    { uint32_t ea = c->r[9] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CC) { goto L_27bd15c; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27bd15c; }
    c->r[2] = 0xfu - c->r[5];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[5] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); } }
    goto L_27bd380;
L_27bd15c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27bd164u; f_283b288(c);
    goto L_27bd380;
L_27bd168:;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[2] - 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[2] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_EQ) { goto L_27bd1bc; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bd24c; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[7]);
    ST64(c->r[9], c->v.d[16]);
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27bd2b8;
L_27bd1bc:;
    { uint32_t ea = c->r[2] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0xaaaau;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = c->r[9] - c->r[2];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[6]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_27c3adc; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    c->r[5] = c->r[3];
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27bd214; }
    c->r[5] = (c->r[1] << 1);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { c->r[5] = c->r[0]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27bced0; }
L_27bd214:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[2] = c->r[1] - c->r[3];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_27bcec4; }
    c->r[14] = 0x27bd244u; f_283b27c(c);
    c->r[3] = c->r[0];
    goto L_27bced8;
L_27bd24c:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3adc; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27bd27c; }
    c->r[0] = (c->r[5] << 1);
    c->r[6] = c->r[9];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    if (COND_NE) { goto L_27bd2a0; }
    goto L_27bd2ac;
L_27bd27c:;
    c->r[4] = c->r[5] + 0x10u;
    c->r[6] = c->r[1];
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27bd290u; f_283b27c(c);
    c->r[1] = c->r[6];
    c->r[6] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); }
L_27bd2a0:;
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27bd2acu; f_283aa78(c);
L_27bd2ac:;
    { uint32_t ea = c->r[6] + c->r[5]; ST8(ea, c->r[10]); }
    c->r[6] = 0xaaabu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xaaaa0000u;
L_27bd2b8:;
    c->r[5] = c->r[9];
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[10]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bd2f4; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_27bd374;
L_27bd2f4:;
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27c3ae4; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27bd328; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_NE) { goto L_27bd35c; }
    goto L_27bd368;
L_27bd328:;
    c->r[4] = c->r[6] + 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27bd33cu; f_283b27c(c);
    c->r[1] = c->r[5];
    c->r[5] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27bd35c:;
    c->r[0] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x27bd368u; f_283aa78(c);
L_27bd368:;
    { uint32_t ea = c->r[5] + c->r[6]; ST8(ea, c->r[10]); }
    c->r[6] = 0xaaabu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xaaaa0000u;
L_27bd374:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[4] - 0xcu; ST32(ea, c->r[0]); }
L_27bd380:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_27bd168; }
L_27bd390:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_27bd514; }
    { uint32_t ea = c->r[8] + 0x3fu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27bd514; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x27bd3c4u; f_27c79bc(c);
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27bd3f4u; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[8] - 0x18u;
    c->r[5] = c->r[8];
L_27bd424:;
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bd440; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bd440u; f_283b288(c);
L_27bd440:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bd454; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bd454u; f_283b288(c);
L_27bd454:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27bd424; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[9] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = c->r[5];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[8] - 0x30u;
    c->r[14] = 0x27bd48cu; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[11] - 0x60u;
    c->r[2] = c->r[11] - 0x70u;
    c->r[14] = 0x27bd4acu; f_27c7718(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CC) { goto L_27c2294; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[7];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3bd4; }
    c->r[3] = c->r[3] - c->r[7];
    c->r[8] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[4] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27bf63c; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27bf64c; }
    c->r[5] = 0x0u;
    goto L_27bf67c;
L_27bd514:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27bb6b0;
L_27bd51c:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_27bd528:;
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[2]); }
    c->r[14] = 0x27bd554u; f_27e4b00(c);
L_27bd554:;
    c->r[0] = c->r[7] - c->r[9];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[8] - c->r[10];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[9], c->r[0]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27bdc40; }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[0] | 0x1u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x38442cu;
    c->r[0] = 0x27bd5a0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3843bdu;
    c->r[0] = 0x27bd5acu + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3843b3u;
    c->r[0] = 0x27bd5b8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3843c0u;
    c->r[0] = 0x27bd5c4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x384399u;
    c->r[0] = 0x27bd5d0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_27bd884;
L_27bd5d4:;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_27bd5ec;
L_27bd5e0:;
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27bd5ec:;
    c->r[9] = c->r[4] + (c->r[4] << 1);
    c->r[4] = c->r[6];
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + (c->r[9] << 3); ST32(ea, c->r[10]); c->r[4] = ea; }
    c->r[3] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bd630; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[4], c->v.d[16]);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27bd6b8;
L_27bd630:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3b34; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27bd660; }
    c->r[0] = (c->r[5] << 1);
    c->r[7] = c->r[4];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    if (COND_NE) { goto L_27bd6a0; }
    goto L_27bd6ac;
L_27bd660:;
    c->r[0] = c->r[6] + (c->r[9] << 3);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[5] + 0x10u;
    c->r[6] = c->r[6] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[7] = c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x27bd680u; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->r[7] = c->r[0];
    c->r[0] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
L_27bd6a0:;
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27bd6acu; f_283aa78(c);
L_27bd6ac:;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
L_27bd6b8:;
    c->r[9] = c->r[6] + (c->r[9] << 3);
    c->r[0] = c->r[8];
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[10]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bd6f8; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_27bd770;
L_27bd6f8:;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27c3b64; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27bd72c; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_NE) { goto L_27bd758; }
    goto L_27bd768;
L_27bd72c:;
    c->r[7] = c->r[6] + 0x10u;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[7];
    c->r[14] = 0x27bd73cu; f_283b27c(c);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[7] | 0x1u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27bd758:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[2] = c->r[6];
    c->r[14] = 0x27bd768u; f_283aa78(c);
L_27bd768:;
    { uint32_t ea = c->r[5] + c->r[6]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
L_27bd770:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4] + 0x18u;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_27bd7dc; }
L_27bd788:;
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 24u);
    ST64(c->r[4] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 12u);
    ST64(c->r[4] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[4] - 0x4u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[4] - 0x18u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[1] - 0x18u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_27bd788; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27bd7e0;
L_27bd7dc:;
    c->r[5] = c->r[6];
L_27bd7e0:;
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[6], c->r[5]);
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_27bd830; }
L_27bd7f8:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bd80c; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bd80cu; f_283b288(c);
L_27bd80c:;
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bd824; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bd824u; f_283b288(c);
L_27bd824:;
    (void)f_subs(c, c->r[5], c->r[7]);
    c->r[6] = c->r[7];
    if (COND_NE) { goto L_27bd7f8; }
L_27bd830:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27bdc30; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CC) { goto L_27bd878; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27bd878; }
    c->r[2] = 0xfu - c->r[5];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[5] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); } }
    goto L_27bdc30;
L_27bd878:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27bd880u; f_283b288(c);
    goto L_27bdc30;
L_27bd884:;
    c->r[4] = c->r[9] + (c->r[9] << 1);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[10]); }
    c->r[0] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[5] = (c->r[1] >> 1); }
    if (COND_EQ) { c->r[6] = c->r[0] + 0xdu; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_CS) { c->r[5] = c->r[0]; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3acc; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27bd8ec; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_27bd908; }
    goto L_27bd918;
L_27bd8ec:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27bd8f4u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[5]); }
L_27bd908:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27bd918u; f_283aa78(c);
L_27bd918:;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[2] = (c->r[1] >> 1); }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_27bd964; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    if (COND_EQ) { c->r[1] = c->r[2]; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    c->r[2] = 0x5b20u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[6] = 0x1u; }
L_27bd964:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27bd974; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bd974u; f_283b288(c);
L_27bd974:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    c->r[0] = c->r[0] + (c->r[4] << 3);
    if (COND_NE) { goto L_27bd9a4; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x2u;
    c->r[14] = 0x27bd990u; f_27c75a8(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_27bda00;
L_27bd9a4:;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD8(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { goto L_27bd9c4; }
    c->r[3] = (c->r[3] >> 1);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_27bd9d0; }
    goto L_27bda10;
L_27bd9c4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_27bda10; }
L_27bd9d0:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[1] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; } }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x28u);
    if (COND_NE) { goto L_27bda10; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[14] = 0x27bd9f4u; f_27c75a8(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27bda00:;
    c->r[0] = c->r[0] + (c->r[4] << 3);
    c->r[0] = c->r[0] + 0xcu;
    c->r[3] = 0x1u;
    c->r[14] = 0x27bda10u; f_27c73c8(c);
L_27bda10:;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 3);
    c->r[14] = 0x27bda28u; f_27c75a8(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[2] - 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[2] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_EQ) { goto L_27bda74; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bdb0c; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[9], c->v.d[16]);
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27bdb70;
L_27bda74:;
    { uint32_t ea = c->r[2] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0xaaabu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    c->r[3] = 0xaaaau;
    c->r[0] = c->r[9] - c->r[2];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[7]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_27c3acc; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    c->r[5] = c->r[3];
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27bdad4; }
    c->r[5] = (c->r[1] << 1);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { c->r[5] = c->r[0]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27bd5e0; }
L_27bdad4:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[6] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[2] = c->r[1] - c->r[6];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_27bd5d4; }
    c->r[14] = 0x27bdb04u; f_283b27c(c);
    c->r[6] = c->r[0];
    goto L_27bd5ec;
L_27bdb0c:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3acc; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27bdb3c; }
    c->r[0] = (c->r[5] << 1);
    c->r[7] = c->r[9];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    if (COND_NE) { goto L_27bdb58; }
    goto L_27bdb68;
L_27bdb3c:;
    c->r[4] = c->r[5] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27bdb4cu; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); }
L_27bdb58:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27bdb68u; f_283aa78(c);
L_27bdb68:;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27bdb70:;
    c->r[5] = c->r[9];
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[10]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bdbac; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_27bdc24;
L_27bdbac:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27c3aec; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27bdbe0; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_NE) { goto L_27bdc0c; }
    goto L_27bdc1c;
L_27bdbe0:;
    c->r[4] = c->r[6] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27bdbf0u; f_283b27c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27bdc0c:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x27bdc1cu; f_283aa78(c);
L_27bdc1c:;
    { uint32_t ea = c->r[5] + c->r[6]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27bdc24:;
    { uint32_t ea = c->r[2] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[0]); }
L_27bdc30:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { goto L_27bd884; }
L_27bdc40:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27bb6b0;
L_27bdc48:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_27bdc54:;
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[2]); }
    c->r[14] = 0x27bdc80u; f_27e4b00(c);
L_27bdc80:;
    c->r[0] = c->r[7] - c->r[10];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[2] = r; }
    c->r[0] = c->r[8] - c->r[9];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27be774; }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[0] | 0x1u;
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[10] = 0x0u;
    c->r[0] = 0x383cf8u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x27bdcd4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x383c89u;
    c->r[0] = 0x27bdce0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x383ea8u;
    c->r[0] = 0x27bdcecu + c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x383ea9u;
    c->r[0] = 0x27bdcf8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x383e9du;
    c->r[0] = 0x27bdd04u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x383e91u;
    c->r[0] = 0x27bdd10u + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x383e85u;
    c->r[0] = 0x27bdd1cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x383e79u;
    c->r[0] = 0x27bdd28u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x382d71u;
    c->r[0] = 0x27bdd34u + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x383c44u;
    c->r[0] = 0x27bdd40u + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x383c1du;
    c->r[0] = 0x27bdd4cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    goto L_27bdff4;
L_27bdd50:;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_27bdd64;
L_27bdd5c:;
    c->r[5] = 0x0u;
    c->r[3] = 0x0u;
L_27bdd64:;
    c->r[9] = c->r[4] + (c->r[4] << 1);
    c->r[7] = c->r[3];
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[7] + (c->r[9] << 3); ST32(ea, c->r[10]); c->r[7] = ea; }
    c->r[12] = c->r[3] + (c->r[0] << 3);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[12]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bdda8; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[7], c->v.d[16]);
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27bde30;
L_27bdda8:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3b24; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    if (COND_CS) { goto L_27bdddc; }
    c->r[0] = (c->r[5] << 1);
    c->r[6] = c->r[7];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    if (COND_NE) { goto L_27bde14; }
    goto L_27bde20;
L_27bdddc:;
    c->r[4] = c->r[5] + 0x10u;
    c->r[0] = c->r[3] + (c->r[9] << 3);
    c->r[4] = c->r[4] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[6] = c->r[1];
    c->r[14] = 0x27bddf8u; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->r[6] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
L_27bde14:;
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27bde20u; f_283aa78(c);
L_27bde20:;
    { uint32_t ea = c->r[6] + c->r[5]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
L_27bde30:;
    c->r[9] = c->r[3] + (c->r[9] << 3);
    c->r[0] = c->r[8];
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[10]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bde68; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27bded4;
L_27bde68:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27c3b54; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27bde94; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    if (COND_NE) { goto L_27bdeb8; }
    goto L_27bdec8;
L_27bde94:;
    c->r[4] = c->r[6] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27bdea4u; f_283b27c(c);
    c->r[1] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[6]); }
L_27bdeb8:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[2] = c->r[6];
    c->r[14] = 0x27bdec8u; f_283aa78(c);
L_27bdec8:;
    { uint32_t ea = c->r[5] + c->r[6]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
L_27bded4:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[7] + 0x18u;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_27bdf40; }
L_27bdeec:;
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 24u);
    ST64(c->r[7] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 12u);
    ST64(c->r[7] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[1] - 0x18u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_NE) { goto L_27bdeec; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27bdf44;
L_27bdf40:;
    c->r[5] = c->r[4];
L_27bdf44:;
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[4], c->r[5]);
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_27bdf98; }
L_27bdf60:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bdf74; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bdf74u; f_283b288(c);
L_27bdf74:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bdf8c; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bdf8cu; f_283b288(c);
L_27bdf8c:;
    (void)f_subs(c, c->r[5], c->r[7]);
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_27bdf60; }
L_27bdf98:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27be760; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CC) { goto L_27bdfdc; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27bdfdc; }
    c->r[2] = 0xfu - c->r[5];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[9];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[5] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); } }
    goto L_27be760;
L_27bdfdc:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27bdfe4u; f_283b288(c);
    goto L_27be760;
L_27bdfe8:;
    c->r[6] = 0x0u;
    c->r[0] = 0x0u;
    goto L_27be514;
L_27bdff4:;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[10]); }
    c->r[0] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[5] = (c->r[1] >> 1); }
    if (COND_EQ) { c->r[6] = c->r[0] + 0xdu; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_CS) { c->r[5] = c->r[0]; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3ac4; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27be05c; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_27be078; }
    goto L_27be088;
L_27be05c:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27be064u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[5]); }
L_27be078:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27be088u; f_283aa78(c);
L_27be088:;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[2] = (c->r[1] >> 1); }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_27be0d4; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    if (COND_EQ) { c->r[1] = c->r[2]; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    c->r[2] = 0x5b20u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[6] = 0x1u; }
L_27be0d4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27be0e4; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27be0e4u; f_283b288(c);
L_27be0e4:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    c->r[0] = c->r[0] + (c->r[4] << 3);
    if (COND_NE) { goto L_27be110; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x2u;
    c->r[14] = 0x27be100u; f_27c75a8(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_27be16c;
L_27be110:;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD8(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { goto L_27be130; }
    c->r[3] = (c->r[3] >> 1);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_27be13c; }
    goto L_27be17c;
L_27be130:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_27be17c; }
L_27be13c:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[1] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; } }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x28u);
    if (COND_NE) { goto L_27be17c; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[14] = 0x27be160u; f_27c75a8(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27be16c:;
    c->r[0] = c->r[0] + (c->r[4] << 3);
    c->r[0] = c->r[0] + 0xcu;
    c->r[3] = 0x1u;
    c->r[14] = 0x27be17cu; f_27c73c8(c);
L_27be17c:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x55u);
    if (COND_NE) { goto L_27be1e4; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + (c->r[4] << 3); uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[5] = (c->r[1] >> 1); }
    if (COND_EQ) { c->r[6] = c->r[0] + 0x1u; }
    c->r[0] = 0xcu;
    (void)f_subs(c, c->r[5], 0xcu);
    if (COND_CS) { c->r[5] = c->r[0]; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3ac4; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27be1f0; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_27be20c; }
    goto L_27be21c;
L_27be1e4:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + (c->r[4] << 3);
    goto L_27be284;
L_27be1f0:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27be1f8u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[5]); }
L_27be20c:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27be21cu; f_283aa78(c);
L_27be21c:;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[10]); }
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[1] = (c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0xcu);
    if (COND_NE) { goto L_27be264; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xcu;
    if (COND_EQ) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x27be258u; f_283afac(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[5] = 0x1u; }
L_27be264:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27be274; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27be274u; f_283b288(c);
L_27be274:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    c->r[9] = c->r[7] + (c->r[4] << 3);
    if (COND_NE) { goto L_27be298; }
L_27be284:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x1u;
    c->r[14] = 0x27be294u; f_27c75a8(c);
    goto L_27be550;
L_27be298:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27be2bc; }
    c->r[5] = (c->r[0] >> 1);
    c->r[3] = 0xbu;
    c->r[8] = 0xau;
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CC) { c->r[3] = (c->r[0] >> 1); }
    goto L_27be2d8;
L_27be2bc:;
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[3] = 0xbu;
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xfffffffeu;
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CC) { c->r[3] = c->r[5]; }
    c->r[8] = c->r[1] - 0x1u;
L_27be2d8:;
    c->r[1] = c->r[3] - c->r[5];
    c->r[1] = c->r[1] + c->r[8];
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { goto L_27be314; }
    c->r[5] = c->r[5] - c->r[3];
    c->r[1] = ~0x11u;
    c->r[6] = c->r[5] + 0x2u;
    c->r[1] = c->r[1] - c->r[8];
    c->r[2] = c->r[6] - c->r[8];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27c3ac4; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27be390; }
    c->r[0] = c->r[9] + 0x1u;
    goto L_27be398;
L_27be314:;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27be324; }
    c->r[12] = c->r[9] + 0x1u;
    goto L_27be32c;
L_27be324:;
    c->r[0] = c->r[7] + (c->r[4] << 3);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
L_27be32c:;
    c->r[2] = 0x2u;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[3], 0x2u);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[7]); }
    if (COND_NE) { goto L_27be354; }
    c->r[0] = 0x38384du;
    c->r[6] = 0x2u;
    c->r[8] = 0x27be354u + c->r[0];
    goto L_27be500;
L_27be354:;
    c->r[14] = f_subs(c, c->r[5], c->r[3]);
    if (COND_EQ) { goto L_27be42c; }
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_CC) { goto L_27be43c; }
    c->r[0] = 0x64u;
    c->r[1] = c->r[12] + c->r[3];
    { uint32_t ea = c->r[12] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x69u;
    c->r[2] = c->r[14];
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[12]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[12] + 0x2u;
    c->r[14] = 0x27be388u; f_283f1ac(c);
    c->r[0] = 0x2u;
    goto L_27be514;
L_27be390:;
    c->r[0] = c->r[7] + (c->r[4] << 3);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_27be398:;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x10u;
    (void)f_adds(c, c->r[8], 0x8000001au);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    if (COND_HI) { goto L_27be3c8; }
    (void)f_subs(c, c->r[6], (c->r[8] << 1));
    c->r[1] = c->r[6];
    c->r[0] = 0xbu;
    if (COND_CC) { c->r[1] = (c->r[8] << 1); }
    (void)f_subs(c, c->r[1], 0xbu);
    if (COND_CS) { c->r[0] = c->r[1] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xfffffff0u; }
L_27be3c8:;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27be3d0u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x64u;
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x69u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_27be404; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[7] + 0x2u;
    c->r[14] = 0x27be404u; f_283aa78(c);
L_27be404:;
    (void)f_subs(c, c->r[8], 0xau);
    if (COND_EQ) { goto L_27be414; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27be414u; f_283b288(c);
L_27be414:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    c->r[0] = c->r[7] + c->r[6];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_27be54c;
L_27be42c:;
    c->r[0] = 0x383765u;
    c->r[6] = c->r[3];
    c->r[8] = 0x27be43cu + c->r[0];
    goto L_27be500;
L_27be43c:;
    c->r[0] = 0x383755u;
    c->r[2] = c->r[12] + c->r[3];
    c->r[8] = 0x27be44cu + c->r[0];
    (void)f_subs(c, c->r[12], c->r[8]);
    if (COND_CS) { goto L_27be4e0; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[12] + c->r[5];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_27be4e0; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { goto L_27be4d4; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_27be49c; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3];
    c->r[6] = c->r[3];
    c->r[7] = c->r[14];
    c->r[14] = 0x27be490u; f_283aa78(c);
    c->r[2] = c->r[8];
    c->r[14] = c->r[7];
    c->r[3] = c->r[6];
L_27be49c:;
    c->r[7] = 0x2u - c->r[3];
    c->r[1] = c->r[2];
    c->r[0] = c->r[2] + c->r[7];
    c->r[2] = c->r[14];
    c->r[6] = c->r[3];
    c->r[14] = 0x27be4b4u; f_283f1ac(c);
    c->r[2] = c->r[7];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_27bdfe8; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[6] = 0x0u;
    c->r[8] = c->r[0] + 0x2u;
    goto L_27be4fc;
L_27be4d4:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2u - c->r[3];
    c->r[8] = c->r[1] + c->r[0];
L_27be4e0:;
    c->r[1] = c->r[2];
    c->r[0] = c->r[12] + 0x2u;
    c->r[2] = c->r[14];
    c->r[6] = c->r[3];
    c->r[14] = 0x27be4f4u; f_283f1ac(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
L_27be4fc:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[12] = v; }
L_27be500:;
    c->r[0] = c->r[12] + c->r[1];
    c->r[1] = c->r[8];
    c->r[7] = c->r[2];
    c->r[14] = 0x27be510u; f_283f1ac(c);
    c->r[0] = c->r[7];
L_27be514:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[6];
    c->r[0] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_27be53c; }
    c->r[1] = (c->r[0] << 1);
    { uint32_t ea = c->r[9]; ST8(ea, c->r[1]); }
    goto L_27be544;
L_27be53c:;
    c->r[1] = c->r[1] + (c->r[4] << 3);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
L_27be544:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
L_27be54c:;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[10]); }
L_27be550:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[6] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_EQ) { goto L_27be5ac; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27be640; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[9], c->v.d[16]);
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27be6a4;
L_27be5ac:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0xaaabu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    c->r[3] = 0xaaaau;
    c->r[0] = c->r[9] - c->r[2];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[7]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_27c3ac4; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    c->r[5] = c->r[3];
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27be60c; }
    c->r[5] = (c->r[1] << 1);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { c->r[5] = c->r[0]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27bdd5c; }
L_27be60c:;
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[2] = c->r[1] - c->r[3];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_27bdd50; }
    c->r[14] = 0x27be638u; f_283b27c(c);
    c->r[3] = c->r[0];
    goto L_27bdd64;
L_27be640:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3ac4; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27be670; }
    c->r[0] = (c->r[5] << 1);
    c->r[7] = c->r[9];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    if (COND_NE) { goto L_27be694; }
    goto L_27be6a0;
L_27be670:;
    c->r[4] = c->r[5] + 0x10u;
    c->r[7] = c->r[1];
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27be684u; f_283b27c(c);
    c->r[1] = c->r[7];
    c->r[7] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); }
L_27be694:;
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27be6a0u; f_283aa78(c);
L_27be6a0:;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[10]); }
L_27be6a4:;
    c->r[5] = c->r[9];
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[10]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27be6dc; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_27be754;
L_27be6dc:;
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27c3afc; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27be710; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    if (COND_NE) { goto L_27be740; }
    goto L_27be74c;
L_27be710:;
    c->r[4] = c->r[6] + 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27be724u; f_283b27c(c);
    c->r[1] = c->r[5];
    c->r[5] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
L_27be740:;
    c->r[0] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x27be74cu; f_283aa78(c);
L_27be74c:;
    { uint32_t ea = c->r[5] + c->r[6]; ST8(ea, c->r[10]); }
    c->r[6] = c->r[7];
L_27be754:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[0]); }
L_27be760:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_27bdff4; }
L_27be774:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27bb6b0;
L_27be77c:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_27be788:;
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[2]); }
    c->r[14] = 0x27be7b4u; f_27e4b00(c);
L_27be7b4:;
    c->r[0] = c->r[7] - c->r[9];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[9] = r; }
    c->r[0] = c->r[8] - c->r[10];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[9], c->r[0]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27beebc; }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[0] | 0x1u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3831ccu;
    c->r[0] = 0x27be800u + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x38315du;
    c->r[0] = 0x27be80cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x383156u;
    c->r[0] = 0x27be818u + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x383160u;
    c->r[0] = 0x27be824u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x383139u;
    c->r[0] = 0x27be830u + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_27beadc;
L_27be834:;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_27be84c;
L_27be840:;
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27be84c:;
    c->r[9] = c->r[4] + (c->r[4] << 1);
    c->r[4] = c->r[6];
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + (c->r[9] << 3); ST32(ea, c->r[10]); c->r[4] = ea; }
    c->r[3] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27be88c; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[4], c->v.d[16]);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27be914;
L_27be88c:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3b44; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27be8bc; }
    c->r[0] = (c->r[5] << 1);
    c->r[7] = c->r[4];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    if (COND_NE) { goto L_27be8fc; }
    goto L_27be908;
L_27be8bc:;
    c->r[0] = c->r[6] + (c->r[9] << 3);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[5] + 0x10u;
    c->r[6] = c->r[6] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[7] = c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x27be8dcu; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->r[7] = c->r[0];
    c->r[0] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
L_27be8fc:;
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27be908u; f_283aa78(c);
L_27be908:;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
L_27be914:;
    c->r[9] = c->r[6] + (c->r[9] << 3);
    c->r[0] = c->r[8];
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[10]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27be950; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_27be9c8;
L_27be950:;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27c3b70; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27be984; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_NE) { goto L_27be9b0; }
    goto L_27be9c0;
L_27be984:;
    c->r[7] = c->r[6] + 0x10u;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[7];
    c->r[14] = 0x27be994u; f_283b27c(c);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[7] | 0x1u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27be9b0:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[2] = c->r[6];
    c->r[14] = 0x27be9c0u; f_283aa78(c);
L_27be9c0:;
    { uint32_t ea = c->r[5] + c->r[6]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
L_27be9c8:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4] + 0x18u;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_27bea34; }
L_27be9e0:;
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 24u);
    ST64(c->r[4] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 12u);
    ST64(c->r[4] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[4] - 0x4u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[4] - 0x18u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[1] - 0x18u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_27be9e0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27bea38;
L_27bea34:;
    c->r[5] = c->r[6];
L_27bea38:;
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[6], c->r[5]);
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_27bea88; }
L_27bea50:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bea64; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bea64u; f_283b288(c);
L_27bea64:;
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bea7c; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bea7cu; f_283b288(c);
L_27bea7c:;
    (void)f_subs(c, c->r[5], c->r[7]);
    c->r[6] = c->r[7];
    if (COND_NE) { goto L_27bea50; }
L_27bea88:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27beeac; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CC) { goto L_27bead0; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27bead0; }
    c->r[2] = 0xfu - c->r[5];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[5] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); } }
    goto L_27beeac;
L_27bead0:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27bead8u; f_283b288(c);
    goto L_27beeac;
L_27beadc:;
    c->r[4] = c->r[9] + (c->r[9] << 1);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[10]); }
    c->r[0] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[5] = (c->r[1] >> 1); }
    if (COND_EQ) { c->r[6] = c->r[0] + 0xdu; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_CS) { c->r[5] = c->r[0]; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3ad4; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27beb40; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_27beb5c; }
    goto L_27beb6c;
L_27beb40:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27beb48u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[5]); }
L_27beb5c:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27beb6cu; f_283aa78(c);
L_27beb6c:;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[2] = (c->r[1] >> 1); }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_27bebb8; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    if (COND_EQ) { c->r[1] = c->r[2]; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    c->r[2] = 0x5b20u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[6] = 0x1u; }
L_27bebb8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27bebc8; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bebc8u; f_283b288(c);
L_27bebc8:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    c->r[0] = c->r[0] + (c->r[4] << 3);
    if (COND_NE) { goto L_27bebf4; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x2u;
    c->r[14] = 0x27bebe4u; f_27c75a8(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_27bec50;
L_27bebf4:;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD8(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { goto L_27bec14; }
    c->r[3] = (c->r[3] >> 1);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_27bec20; }
    goto L_27bec60;
L_27bec14:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_27bec60; }
L_27bec20:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[1] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; } }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x28u);
    if (COND_NE) { goto L_27bec60; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[14] = 0x27bec44u; f_27c75a8(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27bec50:;
    c->r[0] = c->r[0] + (c->r[4] << 3);
    c->r[0] = c->r[0] + 0xcu;
    c->r[3] = 0x1u;
    c->r[14] = 0x27bec60u; f_27c73c8(c);
L_27bec60:;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 3);
    c->r[14] = 0x27bec78u; f_27c75a8(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[2] - 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[2] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_EQ) { goto L_27becf0; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bed88; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[9], c->v.d[16]);
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27bedec;
L_27becf0:;
    { uint32_t ea = c->r[2] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0xaaabu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    c->r[3] = 0xaaaau;
    c->r[0] = c->r[9] - c->r[2];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[7]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_27c3ad4; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    c->r[5] = c->r[3];
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27bed50; }
    c->r[5] = (c->r[1] << 1);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { c->r[5] = c->r[0]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27be840; }
L_27bed50:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[6] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[2] = c->r[1] - c->r[6];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_27be834; }
    c->r[14] = 0x27bed80u; f_283b27c(c);
    c->r[6] = c->r[0];
    goto L_27be84c;
L_27bed88:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3ad4; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27bedb8; }
    c->r[0] = (c->r[5] << 1);
    c->r[7] = c->r[9];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    if (COND_NE) { goto L_27bedd4; }
    goto L_27bede4;
L_27bedb8:;
    c->r[4] = c->r[5] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27bedc8u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); }
L_27bedd4:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27bede4u; f_283aa78(c);
L_27bede4:;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27bedec:;
    c->r[5] = c->r[9];
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[10]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bee28; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_27beea0;
L_27bee28:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27c3af4; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27bee5c; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_NE) { goto L_27bee88; }
    goto L_27bee98;
L_27bee5c:;
    c->r[4] = c->r[6] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27bee6cu; f_283b27c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
L_27bee88:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x27bee98u; f_283aa78(c);
L_27bee98:;
    { uint32_t ea = c->r[5] + c->r[6]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27beea0:;
    { uint32_t ea = c->r[2] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[0]); }
L_27beeac:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { goto L_27beadc; }
L_27beebc:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27bb6b0;
L_27beec4:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27beed4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27bef3c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27beef8u; f_283b27c(c);
    goto L_27bef44;
L_27beefc:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27bef0c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27bf010; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27bef30u; f_283b27c(c);
    goto L_27bf018;
L_27bef34:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27bef3c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27bef44:;
    c->r[2] = c->r[0] + (c->r[4] << 4);
    c->r[1] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27bf130; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27befb8:;
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 8u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27befb8; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27bf138;
L_27bf010:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27bf018:;
    c->r[2] = c->r[0] + (c->r[4] << 4);
    c->r[1] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27bf1fc; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27bf08c:;
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 8u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27bf08c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27bf204;
L_27bf0e4:;
    c->r[0] = 0x382879u;
    c->r[1] = 0x27bf0f0u + c->r[0];
    c->r[0] = c->r[11] - 0x48u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27bf0f8u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x3u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_27bff9c; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_27bffb0; }
    c->r[0] = 0x382774u;
    c->r[1] = 0x27bf11cu + c->r[0];
    c->r[0] = c->r[11] - 0x48u;
    c->r[2] = 0x3u;
    c->r[14] = 0x27bf124u; f_27c75a8(c);
    goto L_27bffb0;
L_27bf128:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27bf130:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27bf138:;
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27bf164u; f_27e4b00(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27bf56c; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27bf1bc; }
L_27bf17c:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bf198; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bf198u; f_283b288(c);
L_27bf198:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bf1ac; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bf1acu; f_283b288(c);
L_27bf1ac:;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27bf17c; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27bf1bc:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27bf564; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27bf564; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_27bf56c; }
    goto L_27c2b78;
L_27bf1fc:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27bf204:;
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27bf230u; f_27e4b00(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27bf634; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27bf288; }
L_27bf248:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bf264; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bf264u; f_283b288(c);
L_27bf264:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bf278; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bf278u; f_283b288(c);
L_27bf278:;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27bf248; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27bf288:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27bf62c; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27bf62c; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_27bf634; }
    goto L_27c2b78;
L_27bf2c8:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[10]); }
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[6] = 0xau;
    c->r[10] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bf304; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[10] = c->r[0] - 0x1u;
L_27bf304:;
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bf89c; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[1] = (c->r[4] >> 1) & 0x7fu;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CS) { c->r[0] = c->r[1] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xf0u; }
    if (COND_CS) { c->r[6] = c->r[0] - 0x1u; }
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_EQ) { goto L_27bf8a8; }
    goto L_27bf8b4;
L_27bf338:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27bf340u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[5]); }
L_27bf354:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[14] = 0x27bf364u; f_283aa78(c);
L_27bf364:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[0]); }
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    if (COND_EQ) { c->r[1] = (c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_NE) { goto L_27bf3b4; }
    c->r[1] = 0x382804u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[1] = 0x27bf3a0u + c->r[1];
    if (COND_EQ) { c->r[0] = c->r[2] | 0x1u; }
    c->r[2] = 0x9u;
    c->r[14] = 0x27bf3a8u; f_283afac(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[5] = 0x1u; }
L_27bf3b4:;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_EQ) { goto L_27bf3c8; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bf3c8u; f_283b288(c);
L_27bf3c8:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_27bf434; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[5] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[8] = c->r[1] | 0x1u; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27c3bec; }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_CS) { goto L_27bfb64; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[11] - 0x60u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x60u;
    c->r[7] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27bfb88; }
    goto L_27bfb98;
L_27bf434:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] - 0xbu; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27bf458u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 96u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = c->r[5] - 0x18u;
L_27bf480:;
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bf49c; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bf49cu; f_283b288(c);
L_27bf49c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bf4b0; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bf4b0u; f_283b288(c);
L_27bf4b0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[8]);
    if (COND_NE) { goto L_27bf480; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x60u;
    c->r[7] = c->r[0] | 0x1u;
    if (COND_EQ) { c->r[2] = c->r[7]; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + 0x9u;
    c->r[2] = c->r[4];
    c->r[14] = 0x27bf4ecu; f_27e3894(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[2] = c->r[7]; }
    c->r[1] = c->r[2] + 0x9u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27c0354; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x7cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[5] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[8] = c->r[1] | 0x1u; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27c3c0c; }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_CS) { goto L_27c070c; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[11] - 0x80u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x80u;
    c->r[7] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27c0730; }
    goto L_27c0740;
L_27bf564:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27bf56cu; f_283b288(c);
L_27bf56c:;
    c->r[6] = c->r[7];
    goto L_27bb6b0;
L_27bf574:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27bf57cu; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[6]); }
L_27bf590:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    c->r[2] = c->r[6];
    c->r[14] = 0x27bf5a0u; f_283aa78(c);
L_27bf5a0:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + c->r[6]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[2] = (c->r[1] >> 1); }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_27bf5f0; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x48u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[4] = 0x0u;
    if (COND_EQ) { c->r[1] = c->r[2] | 0x1u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    c->r[2] = 0x5b20u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[4] = 0x1u; }
L_27bf5f0:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27bf604; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bf604u; f_283b288(c);
L_27bf604:;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_27bfac0; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bfa70; }
    c->r[1] = (c->r[0] >> 1);
    c->r[8] = c->r[4] + 0x1u;
    goto L_27bfa74;
L_27bf62c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27bf634u; f_283b288(c);
L_27bf634:;
    c->r[6] = c->r[7];
    goto L_27bb6b0;
L_27bf63c:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27bf64c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27bf674; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27bf670u; f_283b27c(c);
    goto L_27bf67c;
L_27bf674:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27bf67c:;
    c->r[2] = c->r[0] + (c->r[8] << 4);
    c->r[1] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[8] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[8] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27bf7bc; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27bf6f0:;
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
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27bf6f0; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27bf7c4;
L_27bf748:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[1] - c->r[3];
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3b7c; }
    c->r[3] = c->r[0] - c->r[3];
    c->r[10] = (uint32_t)((int32_t)c->r[1] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[12]); }
    c->r[1] = c->r[8] + 0x1cu;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[4]); }
    (void)f_adds(c, c->r[0], 0xf8000001u);
    c->r[0] = 0x0u;
    if (COND_CS) { goto L_27c06c8; }
    c->r[8] = (uint32_t)((int32_t)c->r[3] >> 3);
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[8], c->r[2]);
    if (COND_CC) { c->r[8] = c->r[2]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_27c06d4; }
    c->r[8] = 0x0u;
    goto L_27c0b20;
L_27bf7bc:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27bf7c4:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27bf7f0u; f_27e4b00(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c2518; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27bf848; }
L_27bf808:;
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bf824; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bf824u; f_283b288(c);
L_27bf824:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bf838; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bf838u; f_283b288(c);
L_27bf838:;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27bf808; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27bf848:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c2510; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LS) { goto L_27c24e8; }
    goto L_27c2510;
L_27bf864:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27bf874:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27bfe18; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27bf898u; f_283b27c(c);
    goto L_27bfe20;
L_27bf89c:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_NE) { goto L_27bf8b4; }
L_27bf8a8:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27c1888;
L_27bf8b4:;
    (void)f_subs(c, c->r[6], 0xau);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[12]); }
    if (COND_NE) { goto L_27c0ac8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_27c169c; }
    c->r[1] = c->r[4] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[6];
    c->r[14] = 0x27bf8ecu; f_283aa78(c);
    goto L_27c16a4;
L_27bf8f0:;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x5fu);
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_27c03b0; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[2] = c->r[8];
    c->r[14] = 0x27bf92cu; f_27cdb70(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[6]);
    if (COND_EQ) { goto L_27c03b0; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27c1ab0; }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] - 0xbu; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27bf96cu; f_27c75a8(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = c->r[14] | (c->r[3] << 8);
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[2] = c->r[6] | (c->r[4] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[9] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[11] - 0x5au; ST8(ea, c->r[12]); }
    c->r[12] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x5cu; ST16(ea, c->r[2]); }
    c->r[4] = c->r[12] | 0x1u;
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = (c->r[0] >> 24);
    c->r[3] = (c->r[0] >> 8);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[3]); }
    c->r[4] = (c->r[1] >> 8);
    c->r[3] = c->r[12] | 0x5u;
    { uint32_t ea = c->r[11] - 0x5au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    c->r[9] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[14]); }
L_27bfa20:;
    c->r[4] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bfa3c; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bfa3cu; f_283b288(c);
L_27bfa3c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bfa50; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bfa50u; f_283b288(c);
L_27bfa50:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[9]);
    if (COND_NE) { goto L_27bfa20; }
    c->r[6] = c->r[8];
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_NE) { goto L_27c03c8; }
    goto L_27c045c;
L_27bfa70:;
    { uint32_t ea = c->r[6] - 8u; c->r[1] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); }
L_27bfa74:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { c->r[2] = 0x1u; }
    c->r[7] = f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27bfa9c; }
    c->r[1] = c->r[8] + c->r[2];
    c->r[0] = c->r[8];
    c->r[2] = c->r[7];
    c->r[14] = 0x27bfa98u; f_283f1ac(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
L_27bfa9c:;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bfab0; }
    c->r[0] = (c->r[7] << 1);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_27bfab4;
L_27bfab0:;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[7]); }
L_27bfab4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_27bfac0:;
    c->r[0] = 0x3820efu;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x27bfad4u + c->r[0];
    c->r[0] = c->r[1] - 0xcu;
    c->r[1] = 0x0u;
    c->r[14] = 0x27bfadcu; f_27c73c8(c);
L_27bfadc:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[9], c->r[6]);
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[11] - 0x60u;
    c->r[14] = 0x27bfb10u; f_27c7718(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CS) { goto L_27bfdc0; }
    c->r[1] = 0x0u;
    c->r[6] = c->r[9];
    goto L_27c0088;
L_27bfb2c:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27bfb3c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27c0138; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27bfb60u; f_283b27c(c);
    goto L_27c0140;
L_27bfb64:;
    c->r[4] = c->r[5] + 0x11u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27bfb74u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[5]); }
L_27bfb88:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[14] = 0x27bfb98u; f_283aa78(c);
L_27bfb98:;
    c->r[0] = 0x37fed0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[1]); }
    c->r[7] = c->r[11] - 0x60u;
    c->r[1] = 0x27bfbb0u + c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = 0x1u;
    c->r[14] = 0x27bfbb8u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] - 0xbu; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27bfbe0u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 112u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x70u;
    c->r[1] = c->r[9];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[7];
    c->r[14] = 0x27bfc28u; f_27c75a8(c);
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[7] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = c->r[10] | (c->r[3] << 8);
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[7] + 0x7u; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[0] = c->r[5] | (c->r[0] << 8);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x86u; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x84u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); }
    c->r[5] = (c->r[2] >> 24);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[2] >> 8);
    { uint32_t ea = c->r[13] + 0x86u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[5]); }
    c->r[0] = (c->r[2] >> 16);
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[7] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x86u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x84u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27bfce8u; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bfcfc; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bfcfcu; f_283b288(c);
L_27bfcfc:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bfd10; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bfd10u; f_283b288(c);
L_27bfd10:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27bfd20; }
    c->r[0] = c->r[9];
    c->r[14] = 0x27bfd20u; f_283b288(c);
L_27bfd20:;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c2260; }
    goto L_27c2268;
L_27bfd34:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[10] = c->r[8];
    { uint32_t ea = c->r[10] - 0x10u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[9] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[10] - 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[10] - 0x8u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bfd70; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[1] = c->r[0] - 0x1u;
L_27bfd70:;
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[14]); }
    if (COND_NE) { goto L_27c0be0; }
    c->r[0] = (c->r[4] >> 1) & 0x7fu;
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CC) { goto L_27c0bec; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->r[0] = c->r[0] & 0xf0u;
    c->r[9] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_NE) { goto L_27c0bf4; }
    goto L_27c2560;
L_27bfdb8:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27bfdc0:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[7];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3c1c; }
    c->r[3] = c->r[3] - c->r[7];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[5] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c116c; }
    c->r[6] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[6], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[6] = c->r[2]; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27c117c; }
    c->r[6] = 0x0u;
    goto L_27c14e4;
L_27bfe18:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27bfe20:;
    c->r[2] = c->r[0] + (c->r[8] << 4);
    c->r[1] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[8] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[8] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27bfef4; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27bfe94:;
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
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27bfe94; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27bfefc;
L_27bfeec:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_27c0020;
L_27bfef4:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27bfefc:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27bff28u; f_27e4b00(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c2518; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27bff80; }
L_27bff40:;
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bff5c; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bff5cu; f_283b288(c);
L_27bff5c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bff70; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27bff70u; f_283b288(c);
L_27bff70:;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27bff40; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27bff80:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c2510; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LS) { goto L_27c24e8; }
    goto L_27c2510;
L_27bff9c:;
    c->r[0] = 0x3818e5u;
    c->r[1] = 0x27bffa8u + c->r[0];
    c->r[0] = c->r[11] - 0x48u;
    c->r[2] = 0x2u;
    c->r[14] = 0x27bffb0u; f_27c75a8(c);
L_27bffb0:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27c0014; }
    c->r[1] = 0x37faacu;
    c->r[0] = c->r[0] - 0x18u;
    c->r[1] = 0x27bffd4u + c->r[1];
    c->r[2] = 0x1u;
    c->r[14] = 0x27bffd8u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[3] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x48u;
    if (COND_EQ) { c->r[2] = c->r[0] | 0x1u; }
    c->r[0] = c->r[1] - 0xcu;
    c->r[1] = 0x0u;
    c->r[14] = 0x27c000cu; f_27c73c8(c);
    c->r[7] = c->r[8] + 0x1u;
    goto L_27c001c;
L_27c0014:;
    c->r[6] = 0x1u;
L_27c0018:;
    c->r[7] = c->r[5];
L_27c001c:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_27c0020:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c0034; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c0034u; f_283b288(c);
L_27c0034:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27c00d0; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[11] - 0x60u;
    c->r[14] = 0x27c0070u; f_27c7718(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CS) { goto L_27c00e0; }
    c->r[1] = 0x0u;
    c->r[6] = c->r[7];
L_27c0088:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27bb6b0;
L_27c00d0:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27bb6b0;
L_27c00e0:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[6];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3bfc; }
    c->r[3] = c->r[3] - c->r[6];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[5] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c020c; }
    c->r[6] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[6], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[6] = c->r[2]; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27c021c; }
    c->r[6] = 0x0u;
    goto L_27c0528;
L_27c0138:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c0140:;
    c->r[2] = c->r[0] + (c->r[4] << 4);
    c->r[1] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27c0284; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27c01b4:;
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 8u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27c01b4; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c028c;
L_27c020c:;
    c->r[0] = 0x0u;
    c->r[6] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27c021c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[6] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[6] << 4));
    if (COND_CS) { goto L_27c0520; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c0240u; f_283b27c(c);
    goto L_27c0528;
L_27c0244:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27c0254:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27c05f4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c0278u; f_283b27c(c);
    goto L_27c05fc;
L_27c027c:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27c0284:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27c028c:;
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27c02b8u; f_27e4b00(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c0704; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27c0310; }
L_27c02d0:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c02ec; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c02ecu; f_283b288(c);
L_27c02ec:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c0300; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c0300u; f_283b288(c);
L_27c0300:;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27c02d0; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27c0310:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c06fc; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c06fc; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_27c0704; }
    goto L_27c2b78;
L_27c0354:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[5] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[8] = c->r[1] | 0x1u; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27c3c24; }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_CS) { goto L_27c1294; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    c->r[10] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27c12b8; }
    goto L_27c12c8;
L_27c03b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_EQ) { goto L_27c045c; }
L_27c03c8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_27c045c; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_EQ) { goto L_27c045c; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[10];
    c->r[14] = 0x27c03f0u; f_27bab48(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[8], c->r[6]);
    c->r[4] = c->r[5];
    if (COND_EQ) { goto L_27c0464; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27c2be0; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { c->r[6] = (c->r[0] >> 1); }
    c->r[0] = c->r[6] + 0x8u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27c3c44; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27c2c20; }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[11] - 0x30u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[0] = c->r[0] | 0x1u;
    goto L_27c2c44;
L_27c045c:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
L_27c0460:;
    c->r[4] = c->r[5];
L_27c0464:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c047c; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c047cu; f_283b288(c);
L_27c047c:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_27c1ab8; }
L_27c0484:;
    c->r[9] = c->r[4];
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_27c1ab8; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[11] - 0x60u;
    c->r[14] = 0x27c04bcu; f_27c7718(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CS) { goto L_27c2004; }
    c->r[1] = 0x0u;
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27bb6b0;
L_27c0520:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c0528:;
    c->r[2] = c->r[0] + (c->r[4] << 4);
    c->r[1] = c->r[0] + (c->r[6] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27c092c; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27c059c:;
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 8u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27c059c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c0934;
L_27c05f4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c05fc:;
    c->r[2] = c->r[0] + (c->r[4] << 4);
    c->r[1] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27c09f8; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27c0670:;
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 8u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27c0670; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c0a00;
L_27c06c8:;
    c->r[8] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27c06d4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[8] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[8] << 4));
    if (COND_CS) { goto L_27c0b18; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c06f8u; f_283b27c(c);
    goto L_27c0b20;
L_27c06fc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c0704u; f_283b288(c);
L_27c0704:;
    c->r[6] = c->r[7];
    goto L_27bb6b0;
L_27c070c:;
    c->r[4] = c->r[5] + 0x11u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c071cu; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[11] - 0x78u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x7cu; ST32(ea, c->r[5]); }
L_27c0730:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c0740u; f_283aa78(c);
L_27c0740:;
    c->r[0] = 0x381237u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[1]); }
    c->r[7] = c->r[11] - 0x80u;
    c->r[1] = 0x27c0758u + c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = 0x1u;
    c->r[14] = 0x27c0760u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] - 0xbu; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27c0788u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[13] + 104u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[13] + 0x68u;
    c->r[1] = c->r[9];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[7];
    c->r[14] = 0x27c07d0u; f_27c75a8(c);
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x37f286u;
    c->v.d[16] = LD64(c->r[7]);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 112u, c->v.d[16]);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27c07f8u + c->r[1];
    c->r[0] = c->r[11] - 0x70u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27c0800u; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[2] = c->r[4] | (c->r[5] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x7eu; ST8(ea, c->r[14]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[4] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0x7eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[4]); }
    c->r[4] = (c->r[0] >> 8);
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[5] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x7eu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27c08c4u; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c08d8; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c08d8u; f_283b288(c);
L_27c08d8:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c08ec; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c08ecu; f_283b288(c);
L_27c08ec:;
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c0900; }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c0900u; f_283b288(c);
L_27c0900:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27c0910; }
    c->r[0] = c->r[9];
    c->r[14] = 0x27c0910u; f_283b288(c);
L_27c0910:;
    { uint32_t ea = c->r[11] - 0x80u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c2254; }
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c0928u; f_283b288(c);
    goto L_27c2254;
L_27c092c:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27c0934:;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27c0960u; f_27e4b00(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c0bc8; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27c09b8; }
L_27c0978:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c0994; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c0994u; f_283b288(c);
L_27c0994:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c09a8; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c09a8u; f_283b288(c);
L_27c09a8:;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27c0978; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27c09b8:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c0bc0; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c0bc0; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_27c0bc8; }
    goto L_27c2b78;
L_27c09f8:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27c0a00:;
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27c0a2cu; f_27e4b00(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c0bd8; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27c0a84; }
L_27c0a44:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c0a60; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c0a60u; f_283b288(c);
L_27c0a60:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c0a74; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c0a74u; f_283b288(c);
L_27c0a74:;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27c0a44; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27c0a84:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c0bd0; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c0bd0; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_27c0bd8; }
    goto L_27c2b78;
L_27c0ac8:;
    c->r[0] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27c0ad8u; f_283b27c(c);
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_HI) { goto L_27c0ae8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c1878; }
L_27c0ae8:;
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c1850; }
    c->r[0] = c->r[4] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    c->r[1] = c->r[8] + 0x1u;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c0b10u; f_283aa78(c);
    goto L_27c1860;
L_27c0b18:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c0b20:;
    c->r[1] = c->r[0] + (c->r[10] << 4);
    c->r[2] = c->r[0] + (c->r[8] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    c->r[12] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[10] << 4); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27c0c30; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
L_27c0b68:;
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] - 8u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27c0b68; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c0c38;
L_27c0bc0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c0bc8u; f_283b288(c);
L_27c0bc8:;
    c->r[6] = c->r[7];
    goto L_27bb6b0;
L_27c0bd0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c0bd8u; f_283b288(c);
L_27c0bd8:;
    c->r[6] = c->r[7];
    goto L_27bb6b0;
L_27c0be0:;
    c->r[0] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
L_27c0bec:;
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_EQ) { goto L_27c2560; }
L_27c0bf4:;
    c->r[6] = c->r[1];
    (void)f_subs(c, c->r[9], 0xau);
    if (COND_NE) { goto L_27c16bc; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_27c1a90; }
    c->r[1] = c->r[4] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[6];
    c->r[14] = 0x27c0c24u; f_283aa78(c);
    goto L_27c1a98;
L_27c0c28:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27c0c30:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
L_27c0c38:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[2]); }
    c->r[14] = 0x27c0c6cu; f_27e4b00(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
L_27c0c74:;
    c->r[0] = c->r[5] - c->r[7];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[7] = r; }
    c->r[0] = c->r[12] - c->r[4];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[7], c->r[0]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27bb6b0; }
    c->r[8] = 0x0u;
    goto L_27c0f44;
L_27c0ca8:;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_27c0cbc;
L_27c0cb4:;
    c->r[5] = 0x0u;
    c->r[3] = 0x0u;
L_27c0cbc:;
    c->r[10] = c->r[4] + (c->r[4] << 1);
    c->r[4] = c->r[3];
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + (c->r[10] << 3); ST32(ea, c->r[8]); c->r[4] = ea; }
    c->r[12] = c->r[3] + (c->r[0] << 3);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[12]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c0cfc; }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[9]);
    ST64(c->r[4], c->v.d[16]);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27c0d84;
L_27c0cfc:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27c3b8c; }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], 0xbu);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    if (COND_CS) { goto L_27c0d30; }
    c->r[0] = (c->r[7] << 1);
    c->r[5] = c->r[4];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    if (COND_NE) { goto L_27c0d6c; }
    goto L_27c0d78;
L_27c0d30:;
    c->r[0] = c->r[3] + (c->r[10] << 3);
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x10u;
    c->r[0] = c->r[0] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27c0d4cu; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[7]); }
L_27c0d6c:;
    c->r[0] = c->r[5];
    c->r[2] = c->r[7];
    c->r[14] = 0x27c0d78u; f_283aa78(c);
L_27c0d78:;
    { uint32_t ea = c->r[5] + c->r[7]; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
L_27c0d84:;
    c->r[10] = c->r[3] + (c->r[10] << 3);
    c->r[0] = c->r[9];
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[8]); c->r[7] = ea; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c0dc0; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[7], c->v.d[16]);
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_27c0e34;
L_27c0dc0:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3b9c; }
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27c0df0; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_NE) { goto L_27c0e20; }
    goto L_27c0e2c;
L_27c0df0:;
    c->r[9] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[9] = c->r[9] & 0xfffffff0u;
    c->r[0] = c->r[9];
    c->r[14] = 0x27c0e04u; f_283b27c(c);
    c->r[1] = c->r[9] | 0x1u;
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
L_27c0e20:;
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c0e2cu; f_283aa78(c);
L_27c0e2c:;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[12] = v; }
L_27c0e34:;
    { uint32_t ea = c->r[10] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4] + 0x18u;
    { uint32_t ea = c->r[10] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_27c0e9c; }
L_27c0e48:;
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 24u);
    ST64(c->r[4] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] - 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 12u);
    ST64(c->r[4] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[4] - 0x4u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[4] - 0x18u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[1] - 0x18u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_27c0e48; }
    { uint32_t ea = c->r[10] - 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[10] - 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_27c0ea0;
L_27c0e9c:;
    c->r[9] = c->r[5];
L_27c0ea0:;
    { uint32_t ea = c->r[10] - 0x10u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[5], c->r[9]);
    { uint32_t ea = c->r[10] - 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] - 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10] - 0x8u; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_27c0ef0; }
L_27c0eb8:;
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c0ecc; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c0eccu; f_283b288(c);
L_27c0ecc:;
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c0ee4; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c0ee4u; f_283b288(c);
L_27c0ee4:;
    (void)f_subs(c, c->r[9], c->r[7]);
    c->r[5] = c->r[7];
    if (COND_NE) { goto L_27c0eb8; }
L_27c0ef0:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27c1158; }
    { uint32_t ea = c->r[10] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_CC) { goto L_27c0f38; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_HI) { goto L_27c0f38; }
    c->r[2] = 0xfu - c->r[9];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[9] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); } }
    goto L_27c1158;
L_27c0f38:;
    c->r[0] = c->r[9];
    c->r[14] = 0x27c0f40u; f_283b288(c);
    goto L_27c1158;
L_27c0f44:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[2] - 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[2] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[10], c->r[1]);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_27c0fa4; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c103c; }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[9]);
    ST64(c->r[10], c->v.d[16]);
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27c10a4;
L_27c0fa4:;
    { uint32_t ea = c->r[2] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0xaaabu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    c->r[3] = 0xaaaau;
    c->r[0] = c->r[10] - c->r[2];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[7]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_27c3b7c; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    c->r[5] = c->r[3];
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c1004; }
    c->r[5] = (c->r[1] << 1);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { c->r[5] = c->r[0]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27c0cb4; }
L_27c1004:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[2] = c->r[1] - c->r[3];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_27c0ca8; }
    c->r[14] = 0x27c1034u; f_283b27c(c);
    c->r[3] = c->r[0];
    goto L_27c0cbc;
L_27c103c:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27c3b7c; }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27c106c; }
    c->r[0] = (c->r[5] << 1);
    c->r[7] = c->r[10];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    if (COND_NE) { goto L_27c1090; }
    goto L_27c109c;
L_27c106c:;
    c->r[4] = c->r[5] + 0x10u;
    c->r[7] = c->r[1];
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c1080u; f_283b27c(c);
    c->r[1] = c->r[7];
    c->r[7] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); }
L_27c1090:;
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c109cu; f_283aa78(c);
L_27c109c:;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c10a4:;
    c->r[5] = c->r[10];
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[8]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c10dc; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27c114c;
L_27c10dc:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27c3b84; }
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[7], 0xbu);
    if (COND_CS) { goto L_27c110c; }
    c->r[0] = (c->r[7] << 1);
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_NE) { goto L_27c1134; }
    goto L_27c1144;
L_27c110c:;
    c->r[4] = c->r[7] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c111cu; f_283b27c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27c1134:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    c->r[2] = c->r[7];
    c->r[14] = 0x27c1144u; f_283aa78(c);
L_27c1144:;
    { uint32_t ea = c->r[5] + c->r[7]; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c114c:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[4] - 0xcu; ST32(ea, c->r[0]); }
L_27c1158:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_27c0f44; }
    goto L_27bb6b0;
L_27c116c:;
    c->r[0] = 0x0u;
    c->r[6] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27c117c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[6] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[6] << 4));
    if (COND_CS) { goto L_27c14d8; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c11a0u; f_283b27c(c);
    goto L_27c14e0;
L_27c11a4:;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0] - 24u);
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] - 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[0] - 12u);
    ST64(c->r[11] - 60u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[5] = c->r[0] + 0xcu;
    c->r[4] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27c11fc:;
    c->r[6] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c1218; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c1218u; f_283b288(c);
L_27c1218:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c122c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c122cu; f_283b288(c);
L_27c122c:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_NE) { goto L_27c11fc; }
    { uint32_t ea = c->r[8] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8] - 48u);
    ST64(c->r[11] - 96u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[8] - 36u);
    ST64(c->r[11] - 84u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c1708; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    goto L_27c323c;
L_27c1294:;
    c->r[4] = c->r[5] + 0x11u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c12a4u; f_283b27c(c);
    c->r[10] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[5]); }
L_27c12b8:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c12c8u; f_283aa78(c);
L_27c12c8:;
    c->r[0] = 0x37e7a4u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + c->r[5]; ST8(ea, c->r[1]); }
    c->r[1] = 0x27c12dcu + c->r[0];
    c->r[0] = c->r[11] - 0x48u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27c12e4u; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    if (COND_EQ) { c->r[1] = c->r[7]; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[14] = 0x27c1300u; f_27c75a8(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = c->r[12] | (c->r[3] << 8);
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[2] = c->r[7] | (c->r[5] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[8] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x66u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x64u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x66u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x66u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x6au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x7au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x7cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x6cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_27c1444; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[8]); }
    c->r[4] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] - 0x6cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x6au; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[0] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[0] + 0xdu;
    { uint32_t ea = c->r[11] - 0x6au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x6cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x7cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x7au; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[11] - 0x7au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x7cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27c223c;
L_27c1444:;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xaaaau;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = c->r[0] - c->r[1];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[9]; c->r[7] = r; }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_27c3c34; }
    c->r[1] = c->r[2] - c->r[1];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    { uint32_t r = c->r[1] * c->r[9]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c149c; }
    c->r[1] = (c->r[1] << 1);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { c->r[1] = c->r[0]; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_27c2064; }
L_27c149c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xfu;
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27c1844; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c14d4u; f_283b27c(c);
    goto L_27c2070;
L_27c14d8:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c14e0:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_27c14e4:;
    c->r[2] = c->r[0] + (c->r[4] << 4);
    c->r[1] = c->r[0] + (c->r[6] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27c15b0; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27c1558:;
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
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27c1558; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c15b8;
L_27c15b0:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27c15b8:;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27c15e4u; f_27e4b00(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c1694; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27c163c; }
L_27c15fc:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c1618; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c1618u; f_283b288(c);
L_27c1618:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c162c; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c162cu; f_283b288(c);
L_27c162c:;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27c15fc; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27c163c:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c168c; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c168c; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_27c1694; }
L_27c1678:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[6] = c->r[9];
    goto L_27bb6b0;
L_27c1684:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27c168c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c1694u; f_283b288(c);
L_27c1694:;
    c->r[6] = c->r[9];
    goto L_27bb6b0;
L_27c169c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27c16a4:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c16acu; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    goto L_27c1878;
L_27c16bc:;
    c->r[0] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27c16c8u; f_283b27c(c);
    (void)f_subs(c, c->r[9], c->r[6]);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    if (COND_HI) { goto L_27c16e0; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c2560; }
L_27c16e0:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27c2530; }
    c->r[0] = c->r[4] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] + 0x1u;
    c->r[14] = 0x27c1700u; f_283aa78(c);
    goto L_27c2544;
L_27c1708:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = 0xau;
    c->r[10] = 0xau;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[8] = v; }
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c1738; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[10] = c->r[0] - 0x1u;
L_27c1738:;
    c->r[0] = 0x0u;
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_27c1dc8; }
    c->r[0] = (c->r[8] >> 1) & 0x7fu;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[8]);
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CC) { goto L_27c1dcc; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->r[0] = c->r[0] & 0xf0u;
    c->r[9] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[9], c->r[10]);
    if (COND_NE) { goto L_27c1dd4; }
    goto L_27c323c;
L_27c177c:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27bb6b0;
L_27c1788:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27c1790u; f_283b27c(c);
    c->r[9] = c->r[0];
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[7]); }
L_27c17a4:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[8];
    c->r[2] = c->r[7];
    c->r[14] = 0x27c17b4u; f_283aa78(c);
L_27c17b4:;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + c->r[7]; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[2] = (c->r[1] >> 1); }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_27c1800; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x48u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = 0x0u;
    if (COND_EQ) { c->r[1] = c->r[2] | 0x1u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    c->r[2] = 0x5b20u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[8] = 0x1u; }
L_27c1800:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c1810; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c1810u; f_283b288(c);
L_27c1810:;
    c->r[0] = c->r[4] + 0x2u;
    (void)f_subs(c, c->r[8], 0x1u);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_27c1e50; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[9];
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c1e04; }
    c->r[1] = (c->r[0] >> 1);
    c->r[8] = c->r[4] + 0x1u;
    goto L_27c1e08;
L_27c1844:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27c2070;
L_27c1850:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27c1860u; f_283b288(c);
L_27c1860:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] - 0x10u; ST32(ea, c->r[6]); }
L_27c1878:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[14] = v; }
L_27c1888:;
    { uint32_t ea = c->r[9] - 0x18u; ST8(ea, c->r[14]); }
    c->r[3] = c->r[9] - 0x17u;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
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
    { uint32_t ea = c->r[7]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x6eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c18f4; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c18f4u; f_283b288(c);
L_27c18f4:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27c1904; }
    c->r[0] = c->r[10];
    c->r[14] = 0x27c1904u; f_283b288(c);
L_27c1904:;
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c1918; }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c1918u; f_283b288(c);
L_27c1918:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c1960; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
L_27c1934:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[1]);
    ST64(c->r[4], c->v.d[16]);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_27c2854;
L_27c1960:;
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[9] = 0xau;
    c->r[7] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[8] = v; }
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c1994; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[7] = c->r[0] - 0x1u;
L_27c1994:;
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c19c4; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[8]);
    c->r[1] = (c->r[8] >> 1) & 0x7fu;
    c->r[10] = 0x1u;
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CS) { c->r[0] = c->r[1] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xf0u; }
    if (COND_CS) { c->r[9] = c->r[0] - 0x1u; }
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_NE) { goto L_27c19d0; }
    goto L_27c1934;
L_27c19c4:;
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_EQ) { goto L_27c1934; }
L_27c19d0:;
    (void)f_subs(c, c->r[9], 0xau);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27c1a04; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_NE) { goto L_27c1a48; }
    c->r[1] = c->r[8] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[6];
    c->r[14] = 0x27c1a00u; f_283aa78(c);
    goto L_27c1a50;
L_27c1a04:;
    c->r[0] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[14] = 0x27c1a10u; f_283b27c(c);
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_HI) { goto L_27c1a20; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c1934; }
L_27c1a20:;
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_27c1a68; }
    c->r[0] = c->r[8] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    c->r[1] = c->r[4] + 0x1u;
    c->r[0] = c->r[7];
    c->r[14] = 0x27c1a44u; f_283aa78(c);
    goto L_27c1a78;
L_27c1a48:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27c1a50:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c1a58u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_27c1934;
L_27c1a68:;
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27c1a78u; f_283b288(c);
L_27c1a78:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] - 8u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    goto L_27c1934;
L_27c1a90:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27c1a98:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c1aa0u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    goto L_27c2560;
L_27c1ab0:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
L_27c1ab8:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[14] = 0x27c1ac8u; f_27e4d28(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_27bb6b0; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[3] = 0x0u;
    c->r[14] = 0x27c1ae8u; f_27c47a4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27c1b80; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[11] - 0x60u;
    c->r[14] = 0x27c1b20u; f_27c7718(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CS) { goto L_27c1b88; }
L_27c1b30:;
    c->r[1] = 0x0u;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27bb6b0;
L_27c1b80:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27c1b88:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[6];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3bc4; }
    c->r[3] = c->r[3] - c->r[6];
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[8] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c1be0; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27c1bf0; }
    c->r[5] = 0x0u;
    goto L_27c1c20;
L_27c1be0:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27c1bf0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27c1c18; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c1c14u; f_283b27c(c);
    goto L_27c1c20;
L_27c1c18:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c1c20:;
    c->r[2] = c->r[0] + (c->r[4] << 4);
    c->r[1] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27c1cec; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27c1c94:;
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 8u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[2] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27c1c94; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c1cf4;
L_27c1cec:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27c1cf4:;
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27c1d20u; f_27e4b00(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c1dc0; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27c1d78; }
L_27c1d38:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c1d54; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c1d54u; f_283b288(c);
L_27c1d54:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c1d68; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c1d68u; f_283b288(c);
L_27c1d68:;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27c1d38; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27c1d78:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c1db8; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c1db8; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_27c1dc0; }
    goto L_27c2b78;
L_27c1db8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c1dc0u; f_283b288(c);
L_27c1dc0:;
    c->r[6] = c->r[7];
    goto L_27bb6b0;
L_27c1dc8:;
    c->r[4] = 0x0u;
L_27c1dcc:;
    (void)f_subs(c, c->r[9], c->r[10]);
    if (COND_EQ) { goto L_27c323c; }
L_27c1dd4:;
    (void)f_subs(c, c->r[9], 0xau);
    if (COND_NE) { goto L_27c2b98; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_27c2f68; }
    c->r[1] = c->r[8] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[6];
    c->r[14] = 0x27c1e00u; f_283aa78(c);
    goto L_27c2f70;
L_27c1e04:;
    { uint32_t ea = c->r[9] - 8u; c->r[1] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); }
L_27c1e08:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { c->r[2] = 0x1u; }
    c->r[7] = f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27c1e30; }
    c->r[1] = c->r[8] + c->r[2];
    c->r[0] = c->r[8];
    c->r[2] = c->r[7];
    c->r[14] = 0x27c1e2cu; f_283f1ac(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
L_27c1e30:;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c1e44; }
    c->r[0] = (c->r[7] << 1);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_27c1e48;
L_27c1e44:;
    { uint32_t ea = c->r[9] - 0x8u; ST32(ea, c->r[7]); }
L_27c1e48:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[7]; ST8(ea, c->r[0]); }
L_27c1e50:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] - c->r[6];
    (void)f_adds(c, c->r[8], 0x10u);
    if (COND_CS) { goto L_27c3bbc; }
    c->r[9] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[8], 0xau);
    if (COND_HI) { goto L_27c1ea0; }
    c->r[0] = (c->r[8] << 1);
    { uint32_t ea = c->r[11] - 0x30u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[0] = c->r[0] | 0x1u;
    (void)f_subs(c, c->r[9], 0x10u);
    if (COND_CS) { goto L_27c1ec8; }
    goto L_27c1f04;
L_27c1ea0:;
    c->r[4] = c->r[8] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c1eb0u; f_283b27c(c);
    c->r[1] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[9], 0x10u);
    if (COND_CC) { goto L_27c1f04; }
L_27c1ec8:;
    c->r[4] = c->r[9];
    c->r[4] = c->r[4] & 0xfffffff0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c1f04; }
    c->r[2] = c->r[0] + c->r[4];
    c->r[1] = c->r[6] + c->r[4];
    c->r[3] = c->r[4];
    c->r[7] = c->r[0];
L_27c1ee8:;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[6] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x10u);
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[7] = ea + 16u; }
    if (COND_NE) { goto L_27c1ee8; }
    (void)f_subs(c, c->r[9], c->r[4]);
    if (COND_EQ) { goto L_27c1f2c; }
    goto L_27c1f0c;
L_27c1f04:;
    c->r[1] = c->r[6];
    c->r[2] = c->r[0];
L_27c1f0c:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x2u - c->r[1];
    c->r[3] = c->r[7] + c->r[3];
    c->r[3] = c->r[3] + c->r[10];
L_27c1f1c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[7] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[7]); c->r[2] = c->r[2] + 0x1u; }
    if (COND_NE) { goto L_27c1f1c; }
L_27c1f2c:;
    c->r[1] = 0x37fc51u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[8]; ST8(ea, c->r[4]); }
    c->r[2] = 0x27c1f40u + c->r[1];
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = 0x0u;
    c->r[3] = 0x2u;
    c->r[14] = 0x27c1f4cu; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 96u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x37fa15u;
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27c1f74u + c->r[2];
    c->r[0] = c->r[11] - 0x60u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27c1f7cu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5] - 0xcu;
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { c->r[3] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x48u;
    if (COND_EQ) { c->r[2] = c->r[0] | 0x1u; }
    c->r[0] = c->r[1];
    c->r[1] = 0x0u;
    c->r[14] = 0x27c1fc8u; f_27c73c8(c);
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c1fdc; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c1fdcu; f_283b288(c);
L_27c1fdc:;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c1ff0; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c1ff0u; f_283b288(c);
L_27c1ff0:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c3750; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c374c;
L_27c2004:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[7];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3c3c; }
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 4);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] - c->r[7];
    c->r[1] = c->r[0] + 0x1cu;
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c2be8; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27c2bf8; }
    c->r[5] = 0x0u;
    goto L_27c2dbc;
L_27c2064:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_27c2070:;
    c->r[2] = c->r[7] + (c->r[7] << 1);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[8]); c->r[1] = ea; }
    { uint32_t ea = c->r[11] - 0x6cu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[4] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0x6au; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x6au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x6cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x7cu; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[4] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[11] - 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x7au; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    c->r[0] = c->r[0] + (c->r[4] << 3);
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
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x7au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x7cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = c->r[1] + 0x18u;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27c2194; }
L_27c213c:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.d[16] = LD64(c->r[7] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[7] - 0x18u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_27c213c; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_27c2198;
L_27c2194:;
    c->r[7] = c->r[5];
L_27c2198:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27c21e8; }
L_27c21b0:;
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c21c4; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c21c4u; f_283b288(c);
L_27c21c4:;
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[5] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c21dc; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c21dcu; f_283b288(c);
L_27c21dc:;
    (void)f_subs(c, c->r[7], c->r[4]);
    c->r[5] = c->r[4];
    if (COND_NE) { goto L_27c21b0; }
L_27c21e8:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27c223c; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_27c2234; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27c2234; }
    c->r[2] = 0xfu - c->r[7];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); } }
    goto L_27c223c;
L_27c2234:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27c223cu; f_283b288(c);
L_27c223c:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c2250; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c2250u; f_283b288(c);
L_27c2250:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
L_27c2254:;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c2268; }
L_27c2260:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c2268u; f_283b288(c);
L_27c2268:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[11] - 0x60u;
    c->r[2] = c->r[11] - 0x70u;
    c->r[14] = 0x27c2284u; f_27c7718(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CS) { goto L_27c22e0; }
L_27c2294:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27c2518;
L_27c22e0:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[7];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3bf4; }
    c->r[3] = c->r[3] - c->r[7];
    c->r[8] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[4] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c2338; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27c2348; }
    c->r[5] = 0x0u;
    goto L_27c2378;
L_27c2338:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27c2348:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27c2370; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c236cu; f_283b27c(c);
    goto L_27c2378;
L_27c2370:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c2378:;
    c->r[2] = c->r[0] + (c->r[8] << 4);
    c->r[1] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[8] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[8] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27c2444; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27c23ec:;
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
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27c23ec; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c244c;
L_27c2444:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27c244c:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27c2478u; f_27e4b00(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c2518; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27c24d0; }
L_27c2490:;
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c24ac; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c24acu; f_283b288(c);
L_27c24ac:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c24c0; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c24c0u; f_283b288(c);
L_27c24c0:;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27c2490; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27c24d0:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c2510; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c2510; }
L_27c24e8:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    goto L_27c2518;
L_27c2510:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c2518u; f_283b288(c);
L_27c2518:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c252cu; f_283b288(c);
    goto L_27bb6b0;
L_27c2530:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27c2544u; f_283b288(c);
L_27c2544:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[8] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] - 0x10u; ST32(ea, c->r[0]); }
L_27c2560:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[14] = v; }
L_27c2574:;
    { uint32_t ea = c->r[8] - 0x18u; ST8(ea, c->r[14]); }
    c->r[3] = c->r[8] - 0x17u;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x2u; }
    { uint32_t ea = c->r[8] - 0x13u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[8] - 0x11u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 8);
    { uint32_t ea = c->r[8] - 0x16u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[8] - 0x12u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x6eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c25dc; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c25dcu; f_283b288(c);
L_27c25dc:;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_EQ) { goto L_27c25f0; }
    c->r[0] = c->r[9];
    c->r[14] = 0x27c25f0u; f_283b288(c);
L_27c25f0:;
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c2604; }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c2604u; f_283b288(c);
L_27c2604:;
    c->r[0] = 0x37f359u;
    c->r[2] = 0x27c2610u + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[3] = 0x1u;
    c->r[8] = 0x0u;
    c->r[14] = 0x27c2620u; f_27c73c8(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x5u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = c->r[3] | (c->r[0] << 8);
    { uint32_t ea = c->r[4] + 0x7u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[2] = c->r[12] | (c->r[7] << 8);
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 16);
    { uint32_t ea = c->r[11] - 0x2au; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = c->r[6];
    { uint32_t ea = c->r[8] - 0xcu; uint32_t v = LD8(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c269c; }
    c->r[0] = 0x0u;
    c->r[4] = c->r[6] - 0x4u;
    { uint32_t ea = c->r[6] - 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_27c2810;
L_27c269c:;
    c->r[4] = c->r[6];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    c->r[7] = 0xau;
    c->r[10] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD8(ea); c->r[9] = v; }
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c26d4; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[9];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[10] = c->r[0] - 0x1u;
L_27c26d4:;
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[14]); }
    if (COND_NE) { goto L_27c271c; }
    c->r[0] = (c->r[9] >> 1) & 0x7fu;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[9]);
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CC) { goto L_27c272c; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->r[0] = c->r[0] & 0xf0u;
    c->r[7] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[7], c->r[10]);
    if (COND_NE) { goto L_27c2734; }
    goto L_27c2804;
L_27c271c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
L_27c272c:;
    (void)f_subs(c, c->r[7], c->r[10]);
    if (COND_EQ) { goto L_27c2804; }
L_27c2734:;
    (void)f_subs(c, c->r[7], 0xau);
    if (COND_NE) { goto L_27c2768; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_27c27b4; }
    c->r[1] = c->r[9] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[7];
    c->r[14] = 0x27c2764u; f_283aa78(c);
    goto L_27c27bc;
L_27c2768:;
    c->r[0] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[14] = 0x27c2774u; f_283b27c(c);
    (void)f_subs(c, c->r[7], c->r[10]);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    if (COND_HI) { goto L_27c278c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c2804; }
L_27c278c:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c27d4; }
    c->r[0] = c->r[9] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8] + 0x1u;
    c->r[14] = 0x27c27b0u; f_283aa78(c);
    goto L_27c27e8;
L_27c27b4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27c27bc:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27c27c4u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    goto L_27c2804;
L_27c27d4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27c27e8u; f_283b288(c);
L_27c27e8:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[0]); }
L_27c2804:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[14] = v; }
L_27c2810:;
    { uint32_t ea = c->r[6] - 0xcu; ST8(ea, c->r[14]); }
    c->r[3] = c->r[6] - 0xbu;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x2au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x2u; }
    { uint32_t ea = c->r[6] - 0x7u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[6] - 0x5u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 8);
    { uint32_t ea = c->r[6] - 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x6u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[12]); }
L_27c2854:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c2868; }
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c2868u; f_283b288(c);
L_27c2868:;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c287c; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c287cu; f_283b288(c);
L_27c287c:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c2894; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c2894u; f_283b288(c);
L_27c2894:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c28a8; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c28a8u; f_283b288(c);
L_27c28a8:;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27c293c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27bb6b0; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[11] - 0x60u;
    c->r[14] = 0x27c28dcu; f_27c7718(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CS) { goto L_27c2944; }
    c->r[1] = 0x0u;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    goto L_27bb6b0;
L_27c293c:;
    c->r[6] = c->r[5];
    goto L_27bb6b0;
L_27c2944:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - c->r[7];
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c3c14; }
    c->r[3] = c->r[3] - c->r[7];
    c->r[6] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[4] + 0x1cu;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c299c; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27c29ac; }
    c->r[5] = 0x0u;
    goto L_27c29dc;
L_27c299c:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27c29ac:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27c29d4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c29d0u; f_283b27c(c);
    goto L_27c29dc;
L_27c29d4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c29dc:;
    c->r[2] = c->r[0] + (c->r[6] << 4);
    c->r[1] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[6] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27c2aa8; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27c2a50:;
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
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27c2a50; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c2ab0;
L_27c2aa8:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27c2ab0:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27c2adcu; f_27e4b00(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c2b90; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27c2b38; }
L_27c2af8:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c2b14; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c2b14u; f_283b288(c);
L_27c2b14:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c2b28; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c2b28u; f_283b288(c);
L_27c2b28:;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27c2af8; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27c2b38:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c2b84; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c2b84; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_27c2b90; }
L_27c2b78:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[6] = c->r[7];
    goto L_27bb6b0;
L_27c2b84:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c2b8cu; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c2b90:;
    c->r[6] = c->r[7];
    goto L_27bb6b0;
L_27c2b98:;
    c->r[0] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[14] = 0x27c2ba4u; f_283b27c(c);
    (void)f_subs(c, c->r[9], c->r[10]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    if (COND_HI) { goto L_27c2bbc; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c323c; }
L_27c2bbc:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c320c; }
    c->r[0] = c->r[8] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] + 0x1u;
    c->r[14] = 0x27c2bdcu; f_283aa78(c);
    goto L_27c3220;
L_27c2be0:;
    c->r[7] = 0x1u;
    goto L_27c0460;
L_27c2be8:;
    c->r[0] = 0x0u;
    c->r[5] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
L_27c2bf8:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[5] << 4));
    if (COND_CS) { goto L_27c2db4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c2c1cu; f_283b27c(c);
    goto L_27c2dbc;
L_27c2c20:;
    c->r[4] = c->r[6] + 0x18u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c2c30u; f_283b27c(c);
    c->r[1] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
L_27c2c44:;
    c->r[1] = 0x6fu;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[1]); }
    c->r[1] = 0x63u;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[1]); }
    c->r[1] = 0x65u;
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[1]); }
    c->r[1] = 0x76u;
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    c->r[1] = 0x20u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x6f74u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x5b720000u;
    { uint32_t ea = c->r[2] + 0x4u; ST8(ea, c->r[1]); c->r[2] = ea; }
    c->r[1] = 0x5bu;
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    c->r[1] = 0x72u;
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = c->r[6];
    c->r[14] = 0x27c2cb0u; f_27c75a8(c);
    c->r[1] = 0x37eccdu;
    c->r[1] = 0x27c2cbcu + c->r[1];
    c->r[2] = 0x1u;
    c->r[14] = 0x27c2cc0u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 96u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x60u;
    c->r[1] = c->r[6];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27c2d10u; f_27c75a8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c2d20; }
    c->r[0] = c->r[6];
    c->r[14] = 0x27c2d20u; f_283b288(c);
L_27c2d20:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c2d34; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c2d34u; f_283b288(c);
L_27c2d34:;
    c->r[7] = 0x0u;
    c->r[4] = c->r[8];
    goto L_27c0464;
L_27c2d40:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] - 0x1u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x27c2d50u; f_27bab48(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4] - c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_27c375c; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27c1ab8; }
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[9], 0x10u);
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27c3c4c; }
    (void)f_subs(c, c->r[9], 0xbu);
    if (COND_CS) { goto L_27c3780; }
    c->r[0] = (c->r[9] << 1);
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[11] - 0x30u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[10] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27c37a4; }
    goto L_27c37b4;
L_27c2db4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c2dbc:;
    c->r[2] = c->r[0] + (c->r[4] << 4);
    c->r[1] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27c2e94; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27c2e34:;
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
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27c2e34; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c2e9c;
L_27c2e94:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
L_27c2e9c:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27c2eccu; f_27e4b00(c);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c2f90; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_27c2f24; }
L_27c2ee4:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c2f00; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c2f00u; f_283b288(c);
L_27c2f00:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c2f14; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c2f14u; f_283b288(c);
L_27c2f14:;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_27c2ee4; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27c2f24:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c2f88; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c2f88; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_27c2f90; }
    goto L_27c1678;
L_27c2f68:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27c2f70:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c2f78u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    goto L_27c323c;
L_27c2f88:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c2f90u; f_283b288(c);
L_27c2f90:;
    c->r[6] = c->r[9];
    goto L_27bb6b0;
L_27c2f98:;
    c->r[10] = c->r[9] + 0x10u;
    c->r[10] = c->r[10] & 0xfffffff0u;
    c->r[0] = c->r[10];
    c->r[14] = 0x27c2fa8u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[10] | 0x1u;
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[9]); }
L_27c2fbc:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27c2fccu; f_283aa78(c);
L_27c2fcc:;
    c->r[0] = 0x37ebf4u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[9]; ST8(ea, c->r[6]); }
    c->r[2] = 0x27c2fe0u + c->r[0];
    c->r[0] = c->r[11] - 0x60u;
    c->r[1] = 0x0u;
    c->r[3] = 0xdu;
    c->r[14] = 0x27c2fecu; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    c->r[2] = 0x37e975u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    c->r[1] = 0x27c3014u + c->r[2];
    c->r[0] = c->r[11] - 0x48u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27c301cu; f_27c75a8(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = c->r[14] | (c->r[3] << 8);
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[2] = c->r[6] | (c->r[7] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[8] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[11] - 0x7au; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[11] - 0x7cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x7au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x7cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x2au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x7au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x7cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x6au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x6cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_27c3164; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[8]); }
    c->r[6] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x2au; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x2au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x6cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x6au; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[11] - 0x6au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x6cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27c3a8c;
L_27c3164:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xaaabu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaaa0000u;
    c->r[7] = 0xaaaau;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaa0000u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[3]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27c3c54; }
    c->r[1] = c->r[2] - c->r[1];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c31c8; }
    c->r[1] = (c->r[1] << 1);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { c->r[1] = c->r[0]; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_27c38b8; }
L_27c31c8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xfu;
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27c3774; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c3200u; f_283b27c(c);
    goto L_27c38c4;
L_27c3204:;
    c->r[14] = 0x27c320cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c320c:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27c3220u; f_283b288(c);
L_27c3220:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[0]); }
L_27c323c:;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[5] + 0x1u;
    c->v.d[16] = LD64(c->r[11] - 72u);
    ST64(c->r[7], c->v.d[16]);
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { c->r[6] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[8] = c->r[9]; }
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_CS) { c->r[6] = 0x2u; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27c3c2c; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27c32b8; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[11] - 0x30u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[7] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27c32d4; }
    goto L_27c32e4;
L_27c32b8:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27c32c0u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[6]); }
L_27c32d4:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    c->r[2] = c->r[6];
    c->r[14] = 0x27c32e4u; f_283aa78(c);
L_27c32e4:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[6]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[2] = (c->r[1] >> 1); }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_27c3330; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x30u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[4] = 0x0u;
    if (COND_EQ) { c->r[1] = c->r[2] | 0x1u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    c->r[2] = 0x5b20u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[4] = 0x1u; }
L_27c3330:;
    c->r[8] = c->r[11] - 0x60u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c3344; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c3344u; f_283b288(c);
L_27c3344:;
    c->r[10] = c->r[8] + 0xcu;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_27c33b4; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    if (COND_EQ) { c->r[1] = (c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[1];
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[6] = c->r[1] - c->r[0];
    if (COND_EQ) { c->r[7] = c->r[9]; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27c3394; }
    c->r[1] = c->r[7] + c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x27c3394u; f_283f1ac(c);
L_27c3394:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_27c33a8; }
    c->r[0] = (c->r[6] << 1);
    { uint32_t ea = c->r[11] - 0x3cu; ST8(ea, c->r[0]); }
    goto L_27c33ac;
L_27c33a8:;
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[6]); }
L_27c33ac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[6]; ST8(ea, c->r[0]); }
L_27c33b4:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[10] + 0x1u; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[8];
    c->r[14] = 0x27c33d4u; f_27c75a8(c);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x37e791u;
    c->v.d[16] = LD64(c->r[8]);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 128u, c->v.d[16]);
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[4]); }
    c->r[2] = 0x27c3400u + c->r[1];
    c->r[0] = c->r[11] - 0x80u;
    c->r[1] = 0x0u;
    c->r[3] = 0x2u;
    c->r[14] = 0x27c340cu; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 112u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x37e555u;
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27c3434u + c->r[2];
    c->r[0] = c->r[11] - 0x70u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27c343cu; f_27c75a8(c);
    c->r[8] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_NE) { c->r[9] = c->r[5]; }
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = c->r[9];
    c->r[14] = 0x27c3484u; f_27c75a8(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = c->r[12] | (c->r[3] << 8);
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[2] = c->r[7] | (c->r[6] << 8);
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x6eu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c3504; }
    c->r[0] = 0x0u;
    c->r[10] = c->r[9] - 0x4u;
    { uint32_t ea = c->r[9] - 0xcu; ST16(ea, c->r[0]); }
    goto L_27c3668;
L_27c3504:;
    c->r[10] = c->r[9];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] - 0x4u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    c->r[4] = 0xau;
    c->r[8] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] - 0x8u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c3544; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[8] = c->r[0] - 0x1u;
L_27c3544:;
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c3584; }
    c->r[0] = (c->r[7] >> 1) & 0x7fu;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[7]);
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CC) { goto L_27c358c; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->r[0] = c->r[0] & 0xf0u;
    c->r[4] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[4], c->r[8]);
    if (COND_NE) { goto L_27c3594; }
    goto L_27c3668;
L_27c3584:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
L_27c358c:;
    (void)f_subs(c, c->r[4], c->r[8]);
    if (COND_EQ) { goto L_27c3668; }
L_27c3594:;
    (void)f_subs(c, c->r[4], 0xau);
    if (COND_NE) { goto L_27c35cc; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_27c3618; }
    c->r[1] = c->r[7] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[4];
    c->r[14] = 0x27c35c4u; f_283aa78(c);
    goto L_27c3620;
L_27c35cc:;
    c->r[0] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27c35d8u; f_283b27c(c);
    (void)f_subs(c, c->r[4], c->r[8]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    if (COND_HI) { goto L_27c35f0; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c3668; }
L_27c35f0:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c3638; }
    c->r[0] = c->r[7] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + 0x1u;
    c->r[14] = 0x27c3614u; f_283aa78(c);
    goto L_27c364c;
L_27c3618:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27c3620:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c3628u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    goto L_27c3668;
L_27c3638:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27c364cu; f_283b288(c);
L_27c364c:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9] - 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x4u; ST32(ea, c->r[0]); }
L_27c3668:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[9] - 0xbu;
    { uint32_t ea = c->r[9] - 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x2u; }
    { uint32_t ea = c->r[9] - 0x7u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[9] - 0x5u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 8);
    { uint32_t ea = c->r[9] - 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[9] - 0x6u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c36d8; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c36d8u; f_283b288(c);
L_27c36d8:;
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c36ec; }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c36ecu; f_283b288(c);
L_27c36ec:;
    { uint32_t ea = c->r[11] - 0x80u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c3700; }
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c3700u; f_283b288(c);
L_27c3700:;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c3714; }
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c3714u; f_283b288(c);
L_27c3714:;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c3728; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c3728u; f_283b288(c);
L_27c3728:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c373c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27c373cu; f_283b288(c);
L_27c373c:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c3750; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
L_27c374c:;
    c->r[14] = 0x27c3750u; f_283b288(c);
L_27c3750:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_27bfadc;
L_27c375c:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_27c1ab8;
L_27c376c:;
    c->r[14] = 0x27c3774u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3774:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27c38c4;
L_27c3780:;
    c->r[4] = c->r[9] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c3790u; f_283b27c(c);
    c->r[10] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[9]); }
L_27c37a4:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27c37b4u; f_283aa78(c);
L_27c37b4:;
    c->r[0] = 0x37e403u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[10] + c->r[9]; ST8(ea, c->r[4]); }
    c->r[2] = 0x27c37c8u + c->r[0];
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = 0x0u;
    c->r[3] = 0x8u;
    c->r[14] = 0x27c37d4u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 96u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x37e18du;
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27c37fcu + c->r[2];
    c->r[0] = c->r[11] - 0x60u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27c3804u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x48u;
    c->r[1] = c->r[6];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27c3854u; f_27c75a8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c3864; }
    c->r[0] = c->r[6];
    c->r[14] = 0x27c3864u; f_283b288(c);
L_27c3864:;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c3878; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c3878u; f_283b288(c);
L_27c3878:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c388c; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c388cu; f_283b288(c);
L_27c388c:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[7];
    goto L_27c3ab8;
L_27c3898:;
    c->r[7] = c->r[3];
    c->r[5] = c->r[12];
    c->r[14] = 0x27c38a8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c38a8:;
    c->r[7] = c->r[3];
    c->r[5] = c->r[12];
    c->r[14] = 0x27c38b8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c38b8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_27c38c4:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[8]); c->r[1] = ea; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0x2au; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x2au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x6au; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[14] = c->r[7] + (c->r[7] << 1);
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[11] - 0x6cu; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[14] = c->r[0] + (c->r[14] << 3);
    c->r[0] = (c->r[3] >> 8);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 24);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 16);
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x6au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x6cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[8]);
    if (COND_EQ) { goto L_27c39e8; }
L_27c3994:;
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
    (void)f_subs(c, c->r[8], c->r[6]);
    if (COND_NE) { goto L_27c3994; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[6] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); }
    goto L_27c39ec;
L_27c39e8:;
    c->r[6] = c->r[8];
L_27c39ec:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[6]);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[14]); }
    if (COND_EQ) { goto L_27c3a3c; }
L_27c3a04:;
    { uint32_t ea = c->r[8] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c3a18; }
    { uint32_t ea = c->r[8] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c3a18u; f_283b288(c);
L_27c3a18:;
    { uint32_t ea = c->r[8] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[8] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c3a30; }
    { uint32_t ea = c->r[8] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c3a30u; f_283b288(c);
L_27c3a30:;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[8] = c->r[7];
    if (COND_NE) { goto L_27c3a04; }
L_27c3a3c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27c3a8c; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27c3a84; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27c3a84; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[9];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); } }
    goto L_27c3a8c;
L_27c3a84:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c3a8cu; f_283b288(c);
L_27c3a8c:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c3aa0; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c3aa0u; f_283b288(c);
L_27c3aa0:;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c3ab4; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c3ab4u; f_283b288(c);
L_27c3ab4:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
L_27c3ab8:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_27c0484;
L_27c3ac4:;
    c->r[14] = 0x27c3accu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3acc:;
    c->r[14] = 0x27c3ad4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3ad4:;
    c->r[14] = 0x27c3adcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3adc:;
    c->r[14] = 0x27c3ae4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3ae4:;
    c->r[14] = 0x27c3aecu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3aec:;
    c->r[14] = 0x27c3af4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3af4:;
    c->r[14] = 0x27c3afcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3afc:;
    c->r[14] = 0x27c3b04u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3b04:;
    c->r[6] = c->r[3];
    c->r[5] = c->r[12];
    c->r[14] = 0x27c3b14u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3b14:;
    c->r[6] = c->r[3];
    c->r[5] = c->r[12];
    c->r[14] = 0x27c3b24u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3b24:;
    c->r[5] = c->r[3];
    c->r[4] = c->r[12];
    c->r[14] = 0x27c3b34u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3b34:;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    c->r[5] = c->r[3];
    c->r[14] = 0x27c3b44u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3b44:;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    c->r[5] = c->r[3];
    c->r[14] = 0x27c3b54u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3b54:;
    c->r[5] = c->r[3];
    c->r[4] = c->r[12];
    c->r[14] = 0x27c3b64u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3b64:;
    c->r[5] = c->r[3];
    c->r[14] = 0x27c3b70u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3b70:;
    c->r[5] = c->r[3];
    c->r[14] = 0x27c3b7cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3b7c:;
    c->r[14] = 0x27c3b84u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3b84:;
    c->r[14] = 0x27c3b8cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3b8c:;
    c->r[6] = c->r[3];
    c->r[5] = c->r[12];
    c->r[14] = 0x27c3b9cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3b9c:;
    c->r[6] = c->r[3];
    c->r[5] = c->r[12];
    c->r[14] = 0x27c3bacu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3bac:;
    c->r[14] = 0x27c3bb4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3bb4:;
    c->r[14] = 0x27c3bbcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3bbc:;
    c->r[14] = 0x27c3bc4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3bc4:;
    c->r[14] = 0x27c3bccu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3bcc:;
    c->r[14] = 0x27c3bd4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3bd4:;
    c->r[14] = 0x27c3bdcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3bdc:;
    c->r[14] = 0x27c3be4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3be4:;
    c->r[14] = 0x27c3becu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3bec:;
    c->r[14] = 0x27c3bf4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3bf4:;
    c->r[14] = 0x27c3bfcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3bfc:;
    c->r[14] = 0x27c3c04u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3c04:;
    c->r[14] = 0x27c3c0cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3c0c:;
    c->r[14] = 0x27c3c14u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3c14:;
    c->r[14] = 0x27c3c1cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3c1c:;
    c->r[14] = 0x27c3c24u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3c24:;
    c->r[14] = 0x27c3c2cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3c2c:;
    c->r[14] = 0x27c3c34u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3c34:;
    c->r[14] = 0x27c3c3cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3c3c:;
    c->r[14] = 0x27c3c44u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3c44:;
    c->r[14] = 0x27c3c4cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3c4c:;
    c->r[14] = 0x27c3c54u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c3c54:;
    c->r[14] = 0x27c3c5cu;
    __attribute__((musttail)) return f_284f5c8(c);
}
