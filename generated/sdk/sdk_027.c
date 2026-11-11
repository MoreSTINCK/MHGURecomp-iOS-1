#include "cpu.h"
#include "neon_rt.h"
void f_25e4a2c(Cpu *c);
void f_283aa78(Cpu *c);
void f_283afa0(Cpu *c);
void f_284acb4(Cpu *c);
void f_284b2b4(Cpu *c);
void f_284b2fc(Cpu *c);
void f_284b338(Cpu *c);
void f_284b344(Cpu *c);
void f_284b350(Cpu *c);
void f_284b35c(Cpu *c);
void f_25df6cc(Cpu *restrict c) {
    FN_ENTER(0x25df6ccu);
L_25df6cc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x18u;
    c->r[5] = c->r[1];
    c->r[1] = 0x0u;
    c->r[2] = 0x3u;
    c->r[4] = c->r[0];
    c->r[14] = 0x25df6ecu; f_25e4a2c(c);
    c->r[0] = 0x1u;
    c->r[6] = 0x1u;
    c->r[14] = 0x25df6f8u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df73c; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df75c; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e1fb4; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25df780;
L_25df73c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = ~0x0u;
    c->r[0] = c->r[3] + sh_lsl(c->r[6], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25df780;
L_25df75c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25df780:;
    c->r[0] = 0x2u;
    c->r[14] = 0x25df788u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df7cc; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df7f0; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e1fc0; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25df814;
L_25df7cc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25df814;
L_25df7f0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25df814:;
    c->r[0] = 0x3u;
    c->r[14] = 0x25df81cu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df860; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df884; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e1fcc; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25df8a8;
L_25df860:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25df8a8;
L_25df884:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25df8a8:;
    c->r[0] = 0x4u;
    c->r[14] = 0x25df8b0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df8f4; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df918; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e1fd8; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25df93c;
L_25df8f4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25df93c;
L_25df918:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25df93c:;
    c->r[0] = 0x6u;
    c->r[14] = 0x25df944u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df988; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df9ac; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e1fe4; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25df9d0;
L_25df988:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25df9d0;
L_25df9ac:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25df9d0:;
    c->r[0] = 0x7u;
    c->r[14] = 0x25df9d8u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dfa1c; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dfa40; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e1ff0; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25dfa64;
L_25dfa1c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25dfa64;
L_25dfa40:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25dfa64:;
    c->r[0] = 0x8u;
    c->r[14] = 0x25dfa6cu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dfab0; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dfad4; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e1ffc; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25dfaf8;
L_25dfab0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25dfaf8;
L_25dfad4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25dfaf8:;
    c->r[0] = 0xeu;
    c->r[14] = 0x25dfb00u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dfb44; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dfb68; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2008; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25dfb8c;
L_25dfb44:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25dfb8c;
L_25dfb68:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25dfb8c:;
    c->r[0] = 0xfu;
    c->r[14] = 0x25dfb94u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dfbd8; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dfbfc; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2014; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25dfc20;
L_25dfbd8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25dfc20;
L_25dfbfc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25dfc20:;
    c->r[0] = 0x10u;
    c->r[14] = 0x25dfc28u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dfc6c; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dfc90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2020; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25dfcb4;
L_25dfc6c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25dfcb4;
L_25dfc90:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25dfcb4:;
    c->r[0] = 0x11u;
    c->r[14] = 0x25dfcbcu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dfd00; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dfd24; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e202c; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25dfd48;
L_25dfd00:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25dfd48;
L_25dfd24:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25dfd48:;
    c->r[0] = 0x12u;
    c->r[14] = 0x25dfd50u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dfd94; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dfdb8; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2038; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25dfddc;
L_25dfd94:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25dfddc;
L_25dfdb8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25dfddc:;
    c->r[0] = 0x15u;
    c->r[14] = 0x25dfde4u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dfe28; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dfe4c; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2044; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25dfe70;
L_25dfe28:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25dfe70;
L_25dfe4c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25dfe70:;
    c->r[0] = 0x16u;
    c->r[14] = 0x25dfe78u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dfebc; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dfee0; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2050; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25dff04;
L_25dfebc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25dff04;
L_25dfee0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25dff04:;
    c->r[0] = 0x17u;
    c->r[14] = 0x25dff0cu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dff50; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dff74; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e205c; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25dff98;
L_25dff50:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25dff98;
L_25dff74:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25dff98:;
    c->r[0] = 0x18u;
    c->r[14] = 0x25dffa0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dffe4; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0008; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2068; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e002c;
L_25dffe4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e002c;
L_25e0008:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e002c:;
    c->r[0] = 0x19u;
    c->r[14] = 0x25e0034u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0078; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e009c; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2074; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e00c0;
L_25e0078:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e00c0;
L_25e009c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e00c0:;
    c->r[0] = 0x1au;
    c->r[14] = 0x25e00c8u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e010c; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0130; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2080; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0154;
L_25e010c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0154;
L_25e0130:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0154:;
    c->r[0] = 0x1bu;
    c->r[14] = 0x25e015cu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e01a0; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e01c4; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e208c; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e01e8;
L_25e01a0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e01e8;
L_25e01c4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e01e8:;
    c->r[0] = 0x1cu;
    c->r[14] = 0x25e01f0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0234; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0258; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2098; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e027c;
L_25e0234:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e027c;
L_25e0258:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e027c:;
    c->r[0] = 0x1du;
    c->r[14] = 0x25e0284u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e02c8; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e02ec; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e20a4; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0310;
L_25e02c8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0310;
L_25e02ec:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0310:;
    c->r[0] = 0x1eu;
    c->r[14] = 0x25e0318u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e035c; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0380; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e20b0; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e03a4;
L_25e035c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e03a4;
L_25e0380:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e03a4:;
    c->r[0] = 0x20u;
    c->r[14] = 0x25e03acu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e03f0; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0414; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e20bc; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0438;
L_25e03f0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0438;
L_25e0414:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0438:;
    c->r[0] = 0x21u;
    c->r[14] = 0x25e0440u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0484; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e04a8; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e20c8; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e04cc;
L_25e0484:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e04cc;
L_25e04a8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e04cc:;
    c->r[0] = 0x22u;
    c->r[14] = 0x25e04d4u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0518; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e053c; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e20d4; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0560;
L_25e0518:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0560;
L_25e053c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0560:;
    c->r[0] = 0x23u;
    c->r[14] = 0x25e0568u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e05ac; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e05d0; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e20e0; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e05f4;
L_25e05ac:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e05f4;
L_25e05d0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e05f4:;
    c->r[0] = 0x24u;
    c->r[14] = 0x25e05fcu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0640; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0664; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e20ec; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0688;
L_25e0640:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0688;
L_25e0664:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0688:;
    c->r[0] = 0x25u;
    c->r[14] = 0x25e0690u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e06d4; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e06f8; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e20f8; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e071c;
L_25e06d4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e071c;
L_25e06f8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e071c:;
    c->r[0] = 0x26u;
    c->r[14] = 0x25e0724u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0768; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e078c; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2104; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e07b0;
L_25e0768:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e07b0;
L_25e078c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e07b0:;
    c->r[0] = 0x28u;
    c->r[14] = 0x25e07b8u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e07fc; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0820; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2110; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0844;
L_25e07fc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0844;
L_25e0820:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0844:;
    c->r[0] = 0x29u;
    c->r[14] = 0x25e084cu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0890; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e08b4; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e211c; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e08d8;
L_25e0890:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e08d8;
L_25e08b4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e08d8:;
    c->r[0] = 0x2au;
    c->r[14] = 0x25e08e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0924; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0948; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2128; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e096c;
L_25e0924:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e096c;
L_25e0948:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e096c:;
    c->r[0] = 0x2bu;
    c->r[14] = 0x25e0974u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e09b8; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e09dc; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2134; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0a00;
L_25e09b8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0a00;
L_25e09dc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0a00:;
    c->r[0] = 0x2du;
    c->r[14] = 0x25e0a08u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0a4c; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0a70; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2140; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0a94;
L_25e0a4c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0a94;
L_25e0a70:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0a94:;
    c->r[0] = 0x2eu;
    c->r[14] = 0x25e0a9cu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0ae0; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0b04; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e214c; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0b28;
L_25e0ae0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0b28;
L_25e0b04:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0b28:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2fu;
    c->r[2] = 0x3u;
    c->r[14] = 0x25e0b38u; f_25e4a2c(c);
    c->r[0] = 0x31u;
    c->r[14] = 0x25e0b40u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0b84; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0ba8; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2158; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0bcc;
L_25e0b84:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0bcc;
L_25e0ba8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0bcc:;
    c->r[0] = 0x32u;
    c->r[14] = 0x25e0bd4u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0c18; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0c3c; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2164; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0c60;
L_25e0c18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0c60;
L_25e0c3c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0c60:;
    c->r[0] = 0x33u;
    c->r[14] = 0x25e0c68u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0cac; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0cd0; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2170; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0cf4;
L_25e0cac:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0cf4;
L_25e0cd0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0cf4:;
    c->r[0] = 0x35u;
    c->r[14] = 0x25e0cfcu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0d40; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0d64; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e217c; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0d88;
L_25e0d40:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0d88;
L_25e0d64:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0d88:;
    c->r[0] = 0x36u;
    c->r[14] = 0x25e0d90u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0dd4; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0df8; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2188; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0e1c;
L_25e0dd4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0e1c;
L_25e0df8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0e1c:;
    c->r[0] = 0x37u;
    c->r[14] = 0x25e0e24u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0e68; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0e8c; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2194; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0eb0;
L_25e0e68:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0eb0;
L_25e0e8c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0eb0:;
    c->r[0] = 0x38u;
    c->r[14] = 0x25e0eb8u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0efc; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0f20; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e21a0; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0f44;
L_25e0efc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0f44;
L_25e0f20:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0f44:;
    c->r[0] = 0x39u;
    c->r[14] = 0x25e0f4cu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e0f90; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e0fb4; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e21ac; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e0fd8;
L_25e0f90:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e0fd8;
L_25e0fb4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e0fd8:;
    c->r[0] = 0x3au;
    c->r[14] = 0x25e0fe0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1024; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1048; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e21b8; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e106c;
L_25e1024:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e106c;
L_25e1048:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e106c:;
    c->r[0] = 0x3cu;
    c->r[14] = 0x25e1074u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e10b8; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e10dc; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e21c4; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1100;
L_25e10b8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1100;
L_25e10dc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1100:;
    c->r[0] = 0x3du;
    c->r[14] = 0x25e1108u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e114c; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1170; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e21d0; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1194;
L_25e114c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1194;
L_25e1170:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1194:;
    c->r[0] = 0x3eu;
    c->r[14] = 0x25e119cu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e11e0; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1204; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e21dc; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1228;
L_25e11e0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1228;
L_25e1204:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1228:;
    c->r[0] = 0x3fu;
    c->r[14] = 0x25e1230u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1274; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1298; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e21e8; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e12bc;
L_25e1274:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e12bc;
L_25e1298:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e12bc:;
    c->r[0] = 0x41u;
    c->r[14] = 0x25e12c4u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1308; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e132c; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e21f4; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1350;
L_25e1308:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1350;
L_25e132c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1350:;
    c->r[0] = 0x42u;
    c->r[14] = 0x25e1358u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e139c; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e13c0; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2200; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e13e4;
L_25e139c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e13e4;
L_25e13c0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e13e4:;
    c->r[0] = 0x43u;
    c->r[14] = 0x25e13ecu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1430; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1454; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e220c; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1478;
L_25e1430:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1478;
L_25e1454:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1478:;
    c->r[0] = 0x44u;
    c->r[14] = 0x25e1480u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e14c4; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e14e8; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2218; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e150c;
L_25e14c4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e150c;
L_25e14e8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e150c:;
    c->r[0] = 0x45u;
    c->r[14] = 0x25e1514u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1558; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e157c; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2224; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e15a0;
L_25e1558:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e15a0;
L_25e157c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e15a0:;
    c->r[0] = 0x46u;
    c->r[14] = 0x25e15a8u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e15ec; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1610; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2230; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1634;
L_25e15ec:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1634;
L_25e1610:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1634:;
    c->r[0] = 0x47u;
    c->r[14] = 0x25e163cu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1680; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e16a4; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e223c; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e16c8;
L_25e1680:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e16c8;
L_25e16a4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e16c8:;
    c->r[0] = 0x48u;
    c->r[14] = 0x25e16d0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1714; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1738; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2248; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e175c;
L_25e1714:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e175c;
L_25e1738:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e175c:;
    c->r[0] = 0x5u;
    c->r[14] = 0x25e1764u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e17a8; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e17cc; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2254; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e17f0;
L_25e17a8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e17f0;
L_25e17cc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e17f0:;
    c->r[0] = 0xau;
    c->r[14] = 0x25e17f8u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e183c; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1860; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2260; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1884;
L_25e183c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1884;
L_25e1860:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1884:;
    c->r[0] = 0xdu;
    c->r[14] = 0x25e188cu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e18d0; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e18f4; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e226c; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1918;
L_25e18d0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1918;
L_25e18f4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1918:;
    c->r[0] = 0x13u;
    c->r[14] = 0x25e1920u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1964; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1988; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2278; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e19ac;
L_25e1964:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e19ac;
L_25e1988:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e19ac:;
    c->r[0] = 0x1fu;
    c->r[14] = 0x25e19b4u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e19f8; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1a1c; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2284; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1a40;
L_25e19f8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1a40;
L_25e1a1c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1a40:;
    c->r[0] = 0x27u;
    c->r[14] = 0x25e1a48u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1a8c; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1ab0; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e2290; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1ad4;
L_25e1a8c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1ad4;
L_25e1ab0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1ad4:;
    c->r[0] = 0x2cu;
    c->r[14] = 0x25e1adcu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1b20; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1b44; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e229c; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1b68;
L_25e1b20:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1b68;
L_25e1b44:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1b68:;
    c->r[0] = 0x30u;
    c->r[14] = 0x25e1b70u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1bb4; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1bd8; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e22a8; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1bfc;
L_25e1bb4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1bfc;
L_25e1bd8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1bfc:;
    c->r[0] = 0x34u;
    c->r[14] = 0x25e1c04u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1c48; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1c6c; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e22b4; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1c90;
L_25e1c48:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1c90;
L_25e1c6c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1c90:;
    c->r[0] = 0x3bu;
    c->r[14] = 0x25e1c98u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1cdc; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1d00; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e22c0; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1d24;
L_25e1cdc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1d24;
L_25e1d00:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1d24:;
    c->r[0] = 0x40u;
    c->r[14] = 0x25e1d2cu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1d70; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1d94; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e22cc; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1db8;
L_25e1d70:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1db8;
L_25e1d94:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1db8:;
    c->r[0] = 0x49u;
    c->r[14] = 0x25e1dc0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1e04; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1e28; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e22d8; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1e4c;
L_25e1e04:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1e4c;
L_25e1e28:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1e4c:;
    c->r[0] = 0x4bu;
    c->r[14] = 0x25e1e54u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25e1e98; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25e1ebc; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25e22e4; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_25e1ee0;
L_25e1e98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_25e1ee0;
L_25e1ebc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = ~0x0u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[6] + sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[3] & ~sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_25e1ee0:;
    c->r[6] = c->r[13];
    c->r[0] = c->r[6];
    c->r[14] = 0x25e1eecu; f_284b338(c);
    c->r[0] = 0x14u;
    c->r[14] = 0x25e1ef4u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = (c->r[2] >> 1);
    c->r[2] = c->r[6];
    c->r[14] = 0x25e1f0cu; f_284acb4(c);
    c->r[6] = c->r[13];
    c->r[0] = c->r[6];
    c->r[14] = 0x25e1f18u; f_284b344(c);
    c->r[0] = 0x4au;
    c->r[14] = 0x25e1f20u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = (c->r[2] >> 1);
    c->r[2] = c->r[6];
    c->r[14] = 0x25e1f38u; f_284acb4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[2] = 0x4u;
    c->r[14] = 0x25e1f48u; f_25e4a2c(c);
    c->r[6] = c->r[13];
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x25e1f58u; f_284b350(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x25e1f60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = c->r[6];
    c->r[14] = 0x25e1f74u; f_283aa78(c);
    c->r[6] = c->r[13];
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x25e1f84u; f_284b35c(c);
    c->r[0] = 0xbu;
    c->r[14] = 0x25e1f8cu; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = c->r[6];
    c->r[14] = 0x25e1fa0u; f_283aa78(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x60u;
    c->r[14] = 0x25e1facu; f_284b2b4(c);
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_25e1fb4:;
    c->r[0] = 0x5556c0u;
    c->r[0] = 0x25e1fc0u + c->r[0];
    goto L_25e22ec;
L_25e1fc0:;
    c->r[0] = 0x5556b4u;
    c->r[0] = 0x25e1fccu + c->r[0];
    goto L_25e22ec;
L_25e1fcc:;
    c->r[0] = 0x5556a8u;
    c->r[0] = 0x25e1fd8u + c->r[0];
    goto L_25e22ec;
L_25e1fd8:;
    c->r[0] = 0x55569cu;
    c->r[0] = 0x25e1fe4u + c->r[0];
    goto L_25e22ec;
L_25e1fe4:;
    c->r[0] = 0x555690u;
    c->r[0] = 0x25e1ff0u + c->r[0];
    goto L_25e22ec;
L_25e1ff0:;
    c->r[0] = 0x555684u;
    c->r[0] = 0x25e1ffcu + c->r[0];
    goto L_25e22ec;
L_25e1ffc:;
    c->r[0] = 0x555678u;
    c->r[0] = 0x25e2008u + c->r[0];
    goto L_25e22ec;
L_25e2008:;
    c->r[0] = 0x55566cu;
    c->r[0] = 0x25e2014u + c->r[0];
    goto L_25e22ec;
L_25e2014:;
    c->r[0] = 0x555660u;
    c->r[0] = 0x25e2020u + c->r[0];
    goto L_25e22ec;
L_25e2020:;
    c->r[0] = 0x555654u;
    c->r[0] = 0x25e202cu + c->r[0];
    goto L_25e22ec;
L_25e202c:;
    c->r[0] = 0x555648u;
    c->r[0] = 0x25e2038u + c->r[0];
    goto L_25e22ec;
L_25e2038:;
    c->r[0] = 0x55563cu;
    c->r[0] = 0x25e2044u + c->r[0];
    goto L_25e22ec;
L_25e2044:;
    c->r[0] = 0x555630u;
    c->r[0] = 0x25e2050u + c->r[0];
    goto L_25e22ec;
L_25e2050:;
    c->r[0] = 0x555624u;
    c->r[0] = 0x25e205cu + c->r[0];
    goto L_25e22ec;
L_25e205c:;
    c->r[0] = 0x555618u;
    c->r[0] = 0x25e2068u + c->r[0];
    goto L_25e22ec;
L_25e2068:;
    c->r[0] = 0x55560cu;
    c->r[0] = 0x25e2074u + c->r[0];
    goto L_25e22ec;
L_25e2074:;
    c->r[0] = 0x555600u;
    c->r[0] = 0x25e2080u + c->r[0];
    goto L_25e22ec;
L_25e2080:;
    c->r[0] = 0x5555f4u;
    c->r[0] = 0x25e208cu + c->r[0];
    goto L_25e22ec;
L_25e208c:;
    c->r[0] = 0x5555e8u;
    c->r[0] = 0x25e2098u + c->r[0];
    goto L_25e22ec;
L_25e2098:;
    c->r[0] = 0x5555dcu;
    c->r[0] = 0x25e20a4u + c->r[0];
    goto L_25e22ec;
L_25e20a4:;
    c->r[0] = 0x5555d0u;
    c->r[0] = 0x25e20b0u + c->r[0];
    goto L_25e22ec;
L_25e20b0:;
    c->r[0] = 0x5555c4u;
    c->r[0] = 0x25e20bcu + c->r[0];
    goto L_25e22ec;
L_25e20bc:;
    c->r[0] = 0x5555b8u;
    c->r[0] = 0x25e20c8u + c->r[0];
    goto L_25e22ec;
L_25e20c8:;
    c->r[0] = 0x5555acu;
    c->r[0] = 0x25e20d4u + c->r[0];
    goto L_25e22ec;
L_25e20d4:;
    c->r[0] = 0x5555a0u;
    c->r[0] = 0x25e20e0u + c->r[0];
    goto L_25e22ec;
L_25e20e0:;
    c->r[0] = 0x555594u;
    c->r[0] = 0x25e20ecu + c->r[0];
    goto L_25e22ec;
L_25e20ec:;
    c->r[0] = 0x555588u;
    c->r[0] = 0x25e20f8u + c->r[0];
    goto L_25e22ec;
L_25e20f8:;
    c->r[0] = 0x55557cu;
    c->r[0] = 0x25e2104u + c->r[0];
    goto L_25e22ec;
L_25e2104:;
    c->r[0] = 0x555570u;
    c->r[0] = 0x25e2110u + c->r[0];
    goto L_25e22ec;
L_25e2110:;
    c->r[0] = 0x555564u;
    c->r[0] = 0x25e211cu + c->r[0];
    goto L_25e22ec;
L_25e211c:;
    c->r[0] = 0x555558u;
    c->r[0] = 0x25e2128u + c->r[0];
    goto L_25e22ec;
L_25e2128:;
    c->r[0] = 0x55554cu;
    c->r[0] = 0x25e2134u + c->r[0];
    goto L_25e22ec;
L_25e2134:;
    c->r[0] = 0x555540u;
    c->r[0] = 0x25e2140u + c->r[0];
    goto L_25e22ec;
L_25e2140:;
    c->r[0] = 0x555534u;
    c->r[0] = 0x25e214cu + c->r[0];
    goto L_25e22ec;
L_25e214c:;
    c->r[0] = 0x555528u;
    c->r[0] = 0x25e2158u + c->r[0];
    goto L_25e22ec;
L_25e2158:;
    c->r[0] = 0x55551cu;
    c->r[0] = 0x25e2164u + c->r[0];
    goto L_25e22ec;
L_25e2164:;
    c->r[0] = 0x555510u;
    c->r[0] = 0x25e2170u + c->r[0];
    goto L_25e22ec;
L_25e2170:;
    c->r[0] = 0x555504u;
    c->r[0] = 0x25e217cu + c->r[0];
    goto L_25e22ec;
L_25e217c:;
    c->r[0] = 0x5554f8u;
    c->r[0] = 0x25e2188u + c->r[0];
    goto L_25e22ec;
L_25e2188:;
    c->r[0] = 0x5554ecu;
    c->r[0] = 0x25e2194u + c->r[0];
    goto L_25e22ec;
L_25e2194:;
    c->r[0] = 0x5554e0u;
    c->r[0] = 0x25e21a0u + c->r[0];
    goto L_25e22ec;
L_25e21a0:;
    c->r[0] = 0x5554d4u;
    c->r[0] = 0x25e21acu + c->r[0];
    goto L_25e22ec;
L_25e21ac:;
    c->r[0] = 0x5554c8u;
    c->r[0] = 0x25e21b8u + c->r[0];
    goto L_25e22ec;
L_25e21b8:;
    c->r[0] = 0x5554bcu;
    c->r[0] = 0x25e21c4u + c->r[0];
    goto L_25e22ec;
L_25e21c4:;
    c->r[0] = 0x5554b0u;
    c->r[0] = 0x25e21d0u + c->r[0];
    goto L_25e22ec;
L_25e21d0:;
    c->r[0] = 0x5554a4u;
    c->r[0] = 0x25e21dcu + c->r[0];
    goto L_25e22ec;
L_25e21dc:;
    c->r[0] = 0x555498u;
    c->r[0] = 0x25e21e8u + c->r[0];
    goto L_25e22ec;
L_25e21e8:;
    c->r[0] = 0x55548cu;
    c->r[0] = 0x25e21f4u + c->r[0];
    goto L_25e22ec;
L_25e21f4:;
    c->r[0] = 0x555480u;
    c->r[0] = 0x25e2200u + c->r[0];
    goto L_25e22ec;
L_25e2200:;
    c->r[0] = 0x555474u;
    c->r[0] = 0x25e220cu + c->r[0];
    goto L_25e22ec;
L_25e220c:;
    c->r[0] = 0x555468u;
    c->r[0] = 0x25e2218u + c->r[0];
    goto L_25e22ec;
L_25e2218:;
    c->r[0] = 0x55545cu;
    c->r[0] = 0x25e2224u + c->r[0];
    goto L_25e22ec;
L_25e2224:;
    c->r[0] = 0x555450u;
    c->r[0] = 0x25e2230u + c->r[0];
    goto L_25e22ec;
L_25e2230:;
    c->r[0] = 0x555444u;
    c->r[0] = 0x25e223cu + c->r[0];
    goto L_25e22ec;
L_25e223c:;
    c->r[0] = 0x555438u;
    c->r[0] = 0x25e2248u + c->r[0];
    goto L_25e22ec;
L_25e2248:;
    c->r[0] = 0x55542cu;
    c->r[0] = 0x25e2254u + c->r[0];
    goto L_25e22ec;
L_25e2254:;
    c->r[0] = 0x555420u;
    c->r[0] = 0x25e2260u + c->r[0];
    goto L_25e22ec;
L_25e2260:;
    c->r[0] = 0x555414u;
    c->r[0] = 0x25e226cu + c->r[0];
    goto L_25e22ec;
L_25e226c:;
    c->r[0] = 0x555408u;
    c->r[0] = 0x25e2278u + c->r[0];
    goto L_25e22ec;
L_25e2278:;
    c->r[0] = 0x5553fcu;
    c->r[0] = 0x25e2284u + c->r[0];
    goto L_25e22ec;
L_25e2284:;
    c->r[0] = 0x5553f0u;
    c->r[0] = 0x25e2290u + c->r[0];
    goto L_25e22ec;
L_25e2290:;
    c->r[0] = 0x5553e4u;
    c->r[0] = 0x25e229cu + c->r[0];
    goto L_25e22ec;
L_25e229c:;
    c->r[0] = 0x5553d8u;
    c->r[0] = 0x25e22a8u + c->r[0];
    goto L_25e22ec;
L_25e22a8:;
    c->r[0] = 0x5553ccu;
    c->r[0] = 0x25e22b4u + c->r[0];
    goto L_25e22ec;
L_25e22b4:;
    c->r[0] = 0x5553c0u;
    c->r[0] = 0x25e22c0u + c->r[0];
    goto L_25e22ec;
L_25e22c0:;
    c->r[0] = 0x5553b4u;
    c->r[0] = 0x25e22ccu + c->r[0];
    goto L_25e22ec;
L_25e22cc:;
    c->r[0] = 0x5553a8u;
    c->r[0] = 0x25e22d8u + c->r[0];
    goto L_25e22ec;
L_25e22d8:;
    c->r[0] = 0x55539cu;
    c->r[0] = 0x25e22e4u + c->r[0];
    goto L_25e22ec;
L_25e22e4:;
    c->r[0] = 0x555390u;
    c->r[0] = 0x25e22f0u + c->r[0];
L_25e22ec:;
    c->r[1] = c->r[0];
    c->r[2] = 0x0u;
    c->r[14] = 0x25e22f8u; f_283afa0(c);
    rt_udf(c, 0x25e22f8u);
}
