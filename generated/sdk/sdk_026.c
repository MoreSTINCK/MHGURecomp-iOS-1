#include "cpu.h"
#include "neon_rt.h"
void f_283aa78(Cpu *c);
void f_283afa0(Cpu *c);
void f_284ac90(Cpu *c);
void f_284b2b4(Cpu *c);
void f_284b2fc(Cpu *c);
void f_284b320(Cpu *c);
void f_284b32c(Cpu *c);
void f_25dd84c(Cpu *restrict c) {
    FN_ENTER(0x25dd84cu);
L_25dd84c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[14] = 0x25dd860u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dd888; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dd890; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25dd8b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dd898;
L_25dd888:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dd898;
L_25dd890:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dd898:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25dd8b4:;
    c->r[0] = 0x559dbcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25dd8c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25dd8c8u; f_283afa0(c);
    rt_udf(c, 0x25dd8c8u);
}
void f_25dd8cc(Cpu *restrict c) {
    FN_ENTER(0x25dd8ccu);
L_25dd8cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1u;
    c->r[14] = 0x25dd8e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dd908; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dd910; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25dd934; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dd918;
L_25dd908:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dd918;
L_25dd910:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dd918:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25dd934:;
    c->r[0] = 0x559d3cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25dd944u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25dd948u; f_283afa0(c);
    rt_udf(c, 0x25dd948u);
}
void f_25dd94c(Cpu *restrict c) {
    FN_ENTER(0x25dd94cu);
L_25dd94c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x2u;
    c->r[14] = 0x25dd960u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dd988; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dd990; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25dd9b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dd998;
L_25dd988:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dd998;
L_25dd990:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dd998:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25dd9b4:;
    c->r[0] = 0x559cbcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25dd9c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25dd9c8u; f_283afa0(c);
    rt_udf(c, 0x25dd9c8u);
}
void f_25dd9cc(Cpu *restrict c) {
    FN_ENTER(0x25dd9ccu);
L_25dd9cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x3u;
    c->r[14] = 0x25dd9e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dda08; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dda10; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25dda34; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dda18;
L_25dda08:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dda18;
L_25dda10:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dda18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25dda34:;
    c->r[0] = 0x559c3cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25dda44u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25dda48u; f_283afa0(c);
    rt_udf(c, 0x25dda48u);
}
void f_25dda4c(Cpu *restrict c) {
    FN_ENTER(0x25dda4cu);
L_25dda4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x4u;
    c->r[14] = 0x25dda60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dda88; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dda90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25ddab4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dda98;
L_25dda88:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dda98;
L_25dda90:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dda98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25ddab4:;
    c->r[0] = 0x559bbcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25ddac4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25ddac8u; f_283afa0(c);
    rt_udf(c, 0x25ddac8u);
}
void f_25ddacc(Cpu *restrict c) {
    FN_ENTER(0x25ddaccu);
L_25ddacc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x6u;
    c->r[14] = 0x25ddae0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25ddb08; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25ddb10; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25ddb34; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25ddb18;
L_25ddb08:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25ddb18;
L_25ddb10:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25ddb18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25ddb34:;
    c->r[0] = 0x559b3cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25ddb44u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25ddb48u; f_283afa0(c);
    rt_udf(c, 0x25ddb48u);
}
void f_25ddb4c(Cpu *restrict c) {
    FN_ENTER(0x25ddb4cu);
L_25ddb4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x7u;
    c->r[14] = 0x25ddb60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25ddb88; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25ddb90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25ddbb4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25ddb98;
L_25ddb88:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25ddb98;
L_25ddb90:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25ddb98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25ddbb4:;
    c->r[0] = 0x559abcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25ddbc4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25ddbc8u; f_283afa0(c);
    rt_udf(c, 0x25ddbc8u);
}
void f_25ddbcc(Cpu *restrict c) {
    FN_ENTER(0x25ddbccu);
L_25ddbcc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x8u;
    c->r[14] = 0x25ddbe0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25ddc08; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25ddc10; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25ddc34; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25ddc18;
L_25ddc08:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25ddc18;
L_25ddc10:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25ddc18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25ddc34:;
    c->r[0] = 0x559a3cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25ddc44u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25ddc48u; f_283afa0(c);
    rt_udf(c, 0x25ddc48u);
}
void f_25ddc4c(Cpu *restrict c) {
    FN_ENTER(0x25ddc4cu);
L_25ddc4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x9u;
    c->r[14] = 0x25ddc60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25ddc88; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25ddc90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25ddcb4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25ddc98;
L_25ddc88:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25ddc98;
L_25ddc90:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25ddc98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25ddcb4:;
    c->r[0] = 0x5599bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25ddcc4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25ddcc8u; f_283afa0(c);
    rt_udf(c, 0x25ddcc8u);
}
void f_25ddccc(Cpu *restrict c) {
    FN_ENTER(0x25ddcccu);
L_25ddccc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0xeu;
    c->r[14] = 0x25ddce0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25ddd08; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25ddd10; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25ddd34; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25ddd18;
L_25ddd08:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25ddd18;
L_25ddd10:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25ddd18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25ddd34:;
    c->r[0] = 0x55993cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25ddd44u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25ddd48u; f_283afa0(c);
    rt_udf(c, 0x25ddd48u);
}
void f_25ddd4c(Cpu *restrict c) {
    FN_ENTER(0x25ddd4cu);
L_25ddd4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0xfu;
    c->r[14] = 0x25ddd60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25ddd88; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25ddd90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25dddb4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25ddd98;
L_25ddd88:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25ddd98;
L_25ddd90:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25ddd98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25dddb4:;
    c->r[0] = 0x5598bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25dddc4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25dddc8u; f_283afa0(c);
    rt_udf(c, 0x25dddc8u);
}
void f_25dddcc(Cpu *restrict c) {
    FN_ENTER(0x25dddccu);
L_25dddcc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x10u;
    c->r[14] = 0x25ddde0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dde08; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dde10; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25dde34; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dde18;
L_25dde08:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dde18;
L_25dde10:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dde18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25dde34:;
    c->r[0] = 0x55983cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25dde44u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25dde48u; f_283afa0(c);
    rt_udf(c, 0x25dde48u);
}
void f_25dde4c(Cpu *restrict c) {
    FN_ENTER(0x25dde4cu);
L_25dde4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x11u;
    c->r[14] = 0x25dde60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dde88; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dde90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25ddeb4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dde98;
L_25dde88:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dde98;
L_25dde90:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dde98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25ddeb4:;
    c->r[0] = 0x5597bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25ddec4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25ddec8u; f_283afa0(c);
    rt_udf(c, 0x25ddec8u);
}
void f_25ddecc(Cpu *restrict c) {
    FN_ENTER(0x25ddeccu);
L_25ddecc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x12u;
    c->r[14] = 0x25ddee0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25ddf08; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25ddf10; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25ddf34; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25ddf18;
L_25ddf08:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25ddf18;
L_25ddf10:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25ddf18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25ddf34:;
    c->r[0] = 0x55973cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25ddf44u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25ddf48u; f_283afa0(c);
    rt_udf(c, 0x25ddf48u);
}
void f_25ddf4c(Cpu *restrict c) {
    FN_ENTER(0x25ddf4cu);
L_25ddf4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x15u;
    c->r[14] = 0x25ddf60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25ddf88; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25ddf90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25ddfb4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25ddf98;
L_25ddf88:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25ddf98;
L_25ddf90:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25ddf98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25ddfb4:;
    c->r[0] = 0x5596bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25ddfc4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25ddfc8u; f_283afa0(c);
    rt_udf(c, 0x25ddfc8u);
}
void f_25ddfcc(Cpu *restrict c) {
    FN_ENTER(0x25ddfccu);
L_25ddfcc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x16u;
    c->r[14] = 0x25ddfe0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de008; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de010; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de034; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de018;
L_25de008:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de018;
L_25de010:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de018:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de034:;
    c->r[0] = 0x55963cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de044u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de048u; f_283afa0(c);
    rt_udf(c, 0x25de048u);
}
void f_25de04c(Cpu *restrict c) {
    FN_ENTER(0x25de04cu);
L_25de04c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x17u;
    c->r[14] = 0x25de060u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de088; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de090; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de0b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de098;
L_25de088:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de098;
L_25de090:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de098:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de0b4:;
    c->r[0] = 0x5595bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de0c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de0c8u; f_283afa0(c);
    rt_udf(c, 0x25de0c8u);
}
void f_25de0cc(Cpu *restrict c) {
    FN_ENTER(0x25de0ccu);
L_25de0cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x18u;
    c->r[14] = 0x25de0e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de108; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de110; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de134; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de118;
L_25de108:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de118;
L_25de110:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de118:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de134:;
    c->r[0] = 0x55953cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de144u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de148u; f_283afa0(c);
    rt_udf(c, 0x25de148u);
}
void f_25de14c(Cpu *restrict c) {
    FN_ENTER(0x25de14cu);
L_25de14c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x19u;
    c->r[14] = 0x25de160u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de188; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de190; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de1b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de198;
L_25de188:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de198;
L_25de190:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de198:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de1b4:;
    c->r[0] = 0x5594bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de1c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de1c8u; f_283afa0(c);
    rt_udf(c, 0x25de1c8u);
}
void f_25de1cc(Cpu *restrict c) {
    FN_ENTER(0x25de1ccu);
L_25de1cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1au;
    c->r[14] = 0x25de1e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de208; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de210; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de234; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de218;
L_25de208:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de218;
L_25de210:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de218:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de234:;
    c->r[0] = 0x55943cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de244u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de248u; f_283afa0(c);
    rt_udf(c, 0x25de248u);
}
void f_25de24c(Cpu *restrict c) {
    FN_ENTER(0x25de24cu);
L_25de24c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1bu;
    c->r[14] = 0x25de260u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de288; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de290; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de2b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de298;
L_25de288:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de298;
L_25de290:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de298:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de2b4:;
    c->r[0] = 0x5593bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de2c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de2c8u; f_283afa0(c);
    rt_udf(c, 0x25de2c8u);
}
void f_25de2cc(Cpu *restrict c) {
    FN_ENTER(0x25de2ccu);
L_25de2cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1cu;
    c->r[14] = 0x25de2e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de308; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de310; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de334; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de318;
L_25de308:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de318;
L_25de310:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de318:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de334:;
    c->r[0] = 0x55933cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de344u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de348u; f_283afa0(c);
    rt_udf(c, 0x25de348u);
}
void f_25de34c(Cpu *restrict c) {
    FN_ENTER(0x25de34cu);
L_25de34c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1du;
    c->r[14] = 0x25de360u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de388; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de390; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de3b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de398;
L_25de388:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de398;
L_25de390:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de398:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de3b4:;
    c->r[0] = 0x5592bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de3c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de3c8u; f_283afa0(c);
    rt_udf(c, 0x25de3c8u);
}
void f_25de3cc(Cpu *restrict c) {
    FN_ENTER(0x25de3ccu);
L_25de3cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1eu;
    c->r[14] = 0x25de3e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de408; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de410; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de434; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de418;
L_25de408:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de418;
L_25de410:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de418:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de434:;
    c->r[0] = 0x55923cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de444u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de448u; f_283afa0(c);
    rt_udf(c, 0x25de448u);
}
void f_25de44c(Cpu *restrict c) {
    FN_ENTER(0x25de44cu);
L_25de44c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    c->r[14] = 0x25de460u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de488; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de490; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de4b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de498;
L_25de488:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de498;
L_25de490:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de498:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de4b4:;
    c->r[0] = 0x5591bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de4c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de4c8u; f_283afa0(c);
    rt_udf(c, 0x25de4c8u);
}
void f_25de4cc(Cpu *restrict c) {
    FN_ENTER(0x25de4ccu);
L_25de4cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x21u;
    c->r[14] = 0x25de4e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de508; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de510; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de534; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de518;
L_25de508:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de518;
L_25de510:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de518:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de534:;
    c->r[0] = 0x55913cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de544u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de548u; f_283afa0(c);
    rt_udf(c, 0x25de548u);
}
void f_25de54c(Cpu *restrict c) {
    FN_ENTER(0x25de54cu);
L_25de54c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x22u;
    c->r[14] = 0x25de560u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de588; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de590; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de5b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de598;
L_25de588:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de598;
L_25de590:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de598:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de5b4:;
    c->r[0] = 0x5590bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de5c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de5c8u; f_283afa0(c);
    rt_udf(c, 0x25de5c8u);
}
void f_25de5cc(Cpu *restrict c) {
    FN_ENTER(0x25de5ccu);
L_25de5cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x23u;
    c->r[14] = 0x25de5e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de608; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de610; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de634; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de618;
L_25de608:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de618;
L_25de610:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de618:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de634:;
    c->r[0] = 0x55903cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de644u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de648u; f_283afa0(c);
    rt_udf(c, 0x25de648u);
}
void f_25de64c(Cpu *restrict c) {
    FN_ENTER(0x25de64cu);
L_25de64c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x24u;
    c->r[14] = 0x25de660u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de688; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de690; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de6b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de698;
L_25de688:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de698;
L_25de690:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de698:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de6b4:;
    c->r[0] = 0x558fbcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de6c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de6c8u; f_283afa0(c);
    rt_udf(c, 0x25de6c8u);
}
void f_25de6cc(Cpu *restrict c) {
    FN_ENTER(0x25de6ccu);
L_25de6cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x25u;
    c->r[14] = 0x25de6e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de708; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de710; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de734; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de718;
L_25de708:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de718;
L_25de710:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de718:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de734:;
    c->r[0] = 0x558f3cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de744u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de748u; f_283afa0(c);
    rt_udf(c, 0x25de748u);
}
void f_25de74c(Cpu *restrict c) {
    FN_ENTER(0x25de74cu);
L_25de74c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x26u;
    c->r[14] = 0x25de760u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de788; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de790; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de7b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de798;
L_25de788:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de798;
L_25de790:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de798:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de7b4:;
    c->r[0] = 0x558ebcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de7c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de7c8u; f_283afa0(c);
    rt_udf(c, 0x25de7c8u);
}
void f_25de7cc(Cpu *restrict c) {
    FN_ENTER(0x25de7ccu);
L_25de7cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x28u;
    c->r[14] = 0x25de7e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de808; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de810; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de834; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de818;
L_25de808:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de818;
L_25de810:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de818:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de834:;
    c->r[0] = 0x558e3cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de844u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de848u; f_283afa0(c);
    rt_udf(c, 0x25de848u);
}
void f_25de84c(Cpu *restrict c) {
    FN_ENTER(0x25de84cu);
L_25de84c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x29u;
    c->r[14] = 0x25de860u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de888; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de890; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de8b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de898;
L_25de888:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de898;
L_25de890:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de898:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de8b4:;
    c->r[0] = 0x558dbcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de8c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de8c8u; f_283afa0(c);
    rt_udf(c, 0x25de8c8u);
}
void f_25de8cc(Cpu *restrict c) {
    FN_ENTER(0x25de8ccu);
L_25de8cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x2au;
    c->r[14] = 0x25de8e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de908; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de910; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de934; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de918;
L_25de908:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de918;
L_25de910:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de918:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de934:;
    c->r[0] = 0x558d3cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de944u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de948u; f_283afa0(c);
    rt_udf(c, 0x25de948u);
}
void f_25de94c(Cpu *restrict c) {
    FN_ENTER(0x25de94cu);
L_25de94c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x2bu;
    c->r[14] = 0x25de960u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25de988; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25de990; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25de9b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25de998;
L_25de988:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25de998;
L_25de990:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25de998:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25de9b4:;
    c->r[0] = 0x558cbcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25de9c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25de9c8u; f_283afa0(c);
    rt_udf(c, 0x25de9c8u);
}
void f_25de9cc(Cpu *restrict c) {
    FN_ENTER(0x25de9ccu);
L_25de9cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x2du;
    c->r[14] = 0x25de9e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dea08; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dea10; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25dea34; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dea18;
L_25dea08:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dea18;
L_25dea10:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dea18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25dea34:;
    c->r[0] = 0x558c3cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25dea44u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25dea48u; f_283afa0(c);
    rt_udf(c, 0x25dea48u);
}
void f_25dea4c(Cpu *restrict c) {
    FN_ENTER(0x25dea4cu);
L_25dea4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x2eu;
    c->r[14] = 0x25dea60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dea88; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dea90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25deab4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dea98;
L_25dea88:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dea98;
L_25dea90:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dea98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25deab4:;
    c->r[0] = 0x558bbcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25deac4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25deac8u; f_283afa0(c);
    rt_udf(c, 0x25deac8u);
}
void f_25deacc(Cpu *restrict c) {
    FN_ENTER(0x25deaccu);
L_25deacc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x2fu;
    c->r[14] = 0x25deae0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25deb08; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25deb10; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25deb34; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25deb18;
L_25deb08:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25deb18;
L_25deb10:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25deb18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25deb34:;
    c->r[0] = 0x558b3cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25deb44u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25deb48u; f_283afa0(c);
    rt_udf(c, 0x25deb48u);
}
void f_25deb4c(Cpu *restrict c) {
    FN_ENTER(0x25deb4cu);
L_25deb4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x31u;
    c->r[14] = 0x25deb60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25deb88; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25deb90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25debb4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25deb98;
L_25deb88:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25deb98;
L_25deb90:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25deb98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25debb4:;
    c->r[0] = 0x558abcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25debc4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25debc8u; f_283afa0(c);
    rt_udf(c, 0x25debc8u);
}
void f_25debcc(Cpu *restrict c) {
    FN_ENTER(0x25debccu);
L_25debcc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x32u;
    c->r[14] = 0x25debe0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dec08; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dec10; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25dec34; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dec18;
L_25dec08:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dec18;
L_25dec10:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dec18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25dec34:;
    c->r[0] = 0x558a3cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25dec44u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25dec48u; f_283afa0(c);
    rt_udf(c, 0x25dec48u);
}
void f_25dec4c(Cpu *restrict c) {
    FN_ENTER(0x25dec4cu);
L_25dec4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x33u;
    c->r[14] = 0x25dec60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dec88; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dec90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25decb4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dec98;
L_25dec88:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dec98;
L_25dec90:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dec98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25decb4:;
    c->r[0] = 0x5589bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25decc4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25decc8u; f_283afa0(c);
    rt_udf(c, 0x25decc8u);
}
void f_25deccc(Cpu *restrict c) {
    FN_ENTER(0x25decccu);
L_25deccc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x35u;
    c->r[14] = 0x25dece0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25ded08; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25ded10; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25ded34; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25ded18;
L_25ded08:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25ded18;
L_25ded10:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25ded18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25ded34:;
    c->r[0] = 0x55893cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25ded44u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25ded48u; f_283afa0(c);
    rt_udf(c, 0x25ded48u);
}
void f_25ded4c(Cpu *restrict c) {
    FN_ENTER(0x25ded4cu);
L_25ded4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x36u;
    c->r[14] = 0x25ded60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25ded88; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25ded90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25dedb4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25ded98;
L_25ded88:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25ded98;
L_25ded90:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25ded98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25dedb4:;
    c->r[0] = 0x5588bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25dedc4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25dedc8u; f_283afa0(c);
    rt_udf(c, 0x25dedc8u);
}
void f_25dedcc(Cpu *restrict c) {
    FN_ENTER(0x25dedccu);
L_25dedcc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x37u;
    c->r[14] = 0x25dede0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dee08; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dee10; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25dee34; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dee18;
L_25dee08:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dee18;
L_25dee10:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dee18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25dee34:;
    c->r[0] = 0x55883cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25dee44u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25dee48u; f_283afa0(c);
    rt_udf(c, 0x25dee48u);
}
void f_25dee4c(Cpu *restrict c) {
    FN_ENTER(0x25dee4cu);
L_25dee4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x38u;
    c->r[14] = 0x25dee60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25dee88; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25dee90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25deeb4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25dee98;
L_25dee88:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25dee98;
L_25dee90:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25dee98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25deeb4:;
    c->r[0] = 0x5587bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25deec4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25deec8u; f_283afa0(c);
    rt_udf(c, 0x25deec8u);
}
void f_25deecc(Cpu *restrict c) {
    FN_ENTER(0x25deeccu);
L_25deecc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x39u;
    c->r[14] = 0x25deee0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25def08; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25def10; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25def34; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25def18;
L_25def08:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25def18;
L_25def10:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25def18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25def34:;
    c->r[0] = 0x55873cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25def44u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25def48u; f_283afa0(c);
    rt_udf(c, 0x25def48u);
}
void f_25def4c(Cpu *restrict c) {
    FN_ENTER(0x25def4cu);
L_25def4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x3au;
    c->r[14] = 0x25def60u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25def88; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25def90; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25defb4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25def98;
L_25def88:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25def98;
L_25def90:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25def98:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25defb4:;
    c->r[0] = 0x5586bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25defc4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25defc8u; f_283afa0(c);
    rt_udf(c, 0x25defc8u);
}
void f_25defcc(Cpu *restrict c) {
    FN_ENTER(0x25defccu);
L_25defcc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x3cu;
    c->r[14] = 0x25defe0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df008; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df010; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25df034; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25df018;
L_25df008:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25df018;
L_25df010:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25df018:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25df034:;
    c->r[0] = 0x55863cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25df044u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25df048u; f_283afa0(c);
    rt_udf(c, 0x25df048u);
}
void f_25df04c(Cpu *restrict c) {
    FN_ENTER(0x25df04cu);
L_25df04c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x3du;
    c->r[14] = 0x25df060u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df088; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df090; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25df0b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25df098;
L_25df088:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25df098;
L_25df090:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25df098:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25df0b4:;
    c->r[0] = 0x5585bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25df0c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25df0c8u; f_283afa0(c);
    rt_udf(c, 0x25df0c8u);
}
void f_25df0cc(Cpu *restrict c) {
    FN_ENTER(0x25df0ccu);
L_25df0cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x3eu;
    c->r[14] = 0x25df0e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df108; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df110; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25df134; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25df118;
L_25df108:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25df118;
L_25df110:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25df118:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25df134:;
    c->r[0] = 0x55853cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25df144u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25df148u; f_283afa0(c);
    rt_udf(c, 0x25df148u);
}
void f_25df14c(Cpu *restrict c) {
    FN_ENTER(0x25df14cu);
L_25df14c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x3fu;
    c->r[14] = 0x25df160u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df188; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df190; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25df1b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25df198;
L_25df188:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25df198;
L_25df190:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25df198:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25df1b4:;
    c->r[0] = 0x5584bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25df1c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25df1c8u; f_283afa0(c);
    rt_udf(c, 0x25df1c8u);
}
void f_25df1cc(Cpu *restrict c) {
    FN_ENTER(0x25df1ccu);
L_25df1cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x41u;
    c->r[14] = 0x25df1e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df208; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df210; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25df234; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25df218;
L_25df208:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25df218;
L_25df210:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25df218:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25df234:;
    c->r[0] = 0x55843cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25df244u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25df248u; f_283afa0(c);
    rt_udf(c, 0x25df248u);
}
void f_25df24c(Cpu *restrict c) {
    FN_ENTER(0x25df24cu);
L_25df24c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x42u;
    c->r[14] = 0x25df260u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df288; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df290; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25df2b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25df298;
L_25df288:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25df298;
L_25df290:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25df298:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25df2b4:;
    c->r[0] = 0x5583bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25df2c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25df2c8u; f_283afa0(c);
    rt_udf(c, 0x25df2c8u);
}
void f_25df2cc(Cpu *restrict c) {
    FN_ENTER(0x25df2ccu);
L_25df2cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x43u;
    c->r[14] = 0x25df2e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df308; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df310; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25df334; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25df318;
L_25df308:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25df318;
L_25df310:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25df318:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25df334:;
    c->r[0] = 0x55833cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25df344u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25df348u; f_283afa0(c);
    rt_udf(c, 0x25df348u);
}
void f_25df34c(Cpu *restrict c) {
    FN_ENTER(0x25df34cu);
L_25df34c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x44u;
    c->r[14] = 0x25df360u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df388; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df390; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25df3b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25df398;
L_25df388:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25df398;
L_25df390:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25df398:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25df3b4:;
    c->r[0] = 0x5582bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25df3c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25df3c8u; f_283afa0(c);
    rt_udf(c, 0x25df3c8u);
}
void f_25df3cc(Cpu *restrict c) {
    FN_ENTER(0x25df3ccu);
L_25df3cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x45u;
    c->r[14] = 0x25df3e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df408; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df410; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25df434; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25df418;
L_25df408:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25df418;
L_25df410:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25df418:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25df434:;
    c->r[0] = 0x55823cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25df444u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25df448u; f_283afa0(c);
    rt_udf(c, 0x25df448u);
}
void f_25df44c(Cpu *restrict c) {
    FN_ENTER(0x25df44cu);
L_25df44c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x46u;
    c->r[14] = 0x25df460u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df488; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df490; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25df4b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25df498;
L_25df488:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25df498;
L_25df490:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25df498:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25df4b4:;
    c->r[0] = 0x5581bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25df4c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25df4c8u; f_283afa0(c);
    rt_udf(c, 0x25df4c8u);
}
void f_25df4cc(Cpu *restrict c) {
    FN_ENTER(0x25df4ccu);
L_25df4cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x47u;
    c->r[14] = 0x25df4e0u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df508; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df510; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25df534; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25df518;
L_25df508:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25df518;
L_25df510:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25df518:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25df534:;
    c->r[0] = 0x55813cu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25df544u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25df548u; f_283afa0(c);
    rt_udf(c, 0x25df548u);
}
void f_25df54c(Cpu *restrict c) {
    FN_ENTER(0x25df54cu);
L_25df54c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x48u;
    c->r[14] = 0x25df560u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_EQ) { goto L_25df588; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_25df590; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25df5b4; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_25df598;
L_25df588:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25df598;
L_25df590:;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_25df598:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[4] = ~0x0u;
    c->r[0] = c->r[4] + sh_lsl(c->r[3], c->r[0]);
    c->r[0] = c->r[0] & sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25df5b4:;
    c->r[0] = 0x5580bcu;
    c->r[2] = 0x0u;
    c->r[0] = 0x25df5c4u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25df5c8u; f_283afa0(c);
    rt_udf(c, 0x25df5c8u);
}
void f_25df5cc(Cpu *restrict c) {
    FN_ENTER(0x25df5ccu);
L_25df5cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[5] = c->r[0];
    c->r[0] = 0xbu;
    c->r[4] = c->r[1];
    c->r[14] = 0x25df5e4u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5] + c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_283aa78(c);
}
void f_25df5fc(Cpu *restrict c) {
    FN_ENTER(0x25df5fcu);
L_25df5fc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[5] = c->r[0];
    c->r[0] = 0xcu;
    c->r[4] = c->r[1];
    c->r[14] = 0x25df614u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5] + c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_283aa78(c);
}
void f_25df62c(Cpu *restrict c) {
    FN_ENTER(0x25df62cu);
L_25df62c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[5] = c->r[0];
    c->r[0] = 0x14u;
    c->r[4] = c->r[1];
    c->r[14] = 0x25df644u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[0] >> 1);
    c->r[1] = c->r[5] + c->r[1];
    c->r[0] = c->r[4];
    c->r[14] = 0x25df65cu; f_284ac90(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_284b320(c);
}
void f_25df668(Cpu *restrict c) {
    FN_ENTER(0x25df668u);
L_25df668:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[5] = c->r[0];
    c->r[0] = 0x4au;
    c->r[4] = c->r[1];
    c->r[14] = 0x25df680u; f_284b2fc(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[0] >> 1);
    c->r[1] = c->r[5] + c->r[1];
    c->r[0] = c->r[4];
    c->r[14] = 0x25df698u; f_284ac90(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_284b320(c);
}
void f_25df6a4(Cpu *restrict c) {
    FN_ENTER(0x25df6a4u);
L_25df6a4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[14] = 0x25df6b0u; f_284b32c(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_25df6c4(Cpu *restrict c) {
    FN_ENTER(0x25df6c4u);
L_25df6c4:;
    c->r[1] = 0x60u;
    __attribute__((musttail)) return f_284b2b4(c);
}
