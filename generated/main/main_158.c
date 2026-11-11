#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_4332ac(Cpu *c);
void f_742f7c(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af55c(Cpu *c);
void f_9af6e4(Cpu *c);
void f_9bb638(Cpu *c);
void f_9c5e4c(Cpu *c);
void f_9c617c(Cpu *c);
void f_a7a7ac(Cpu *c);
void f_a7b778(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a80998(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_a87958(Cpu *c);
void f_a879b0(Cpu *c);
void f_a879b4(Cpu *c);
void f_a98634(Cpu *c);
void f_a98744(Cpu *c);
void f_a98ab8(Cpu *c);
void f_a98abc(Cpu *c);
void f_aeadbc(Cpu *c);
void f_aeafe4(Cpu *c);
void f_aeb13c(Cpu *c);
void f_aeb990(Cpu *c);
void f_aebb34(Cpu *c);
void f_af76f4(Cpu *c);
void f_af7a54(Cpu *c);
void f_af83c8(Cpu *c);
void f_af9a98(Cpu *c);
void f_af9d38(Cpu *c);
void f_afa51c(Cpu *c);
void f_afac08(Cpu *c);
void f_afadd4(Cpu *c);
void f_afcac8(Cpu *c);
void f_b09120(Cpu *c);
void f_b0a2c0(Cpu *c);
void f_b0a8fc(Cpu *c);
void f_b396a8(Cpu *c);
void f_b3992c(Cpu *c);
void f_b3b1a4(Cpu *c);
void f_b3b1a8(Cpu *c);
void f_bd1030(Cpu *c);
void f_bd1128(Cpu *c);
void f_bd16b4(Cpu *c);
void f_bd3944(Cpu *c);
void f_bd39a8(Cpu *c);
void f_bd3c2c(Cpu *c);
void f_bd3c58(Cpu *c);
void f_bdc4ac(Cpu *c);
void f_bdc5d0(Cpu *c);
void f_bdcd88(Cpu *c);
void f_bdcdf0(Cpu *c);
void f_bdce40(Cpu *c);
void f_bdd82c(Cpu *c);
void f_bdd928(Cpu *c);
void f_bddbc8(Cpu *c);
void f_bf4818(Cpu *c);
void f_bf481c(Cpu *c);
void f_bf4e20(Cpu *c);
void f_bf5058(Cpu *c);
void f_bf5104(Cpu *c);
void f_bf552c(Cpu *c);
void f_bf5c58(Cpu *c);
void f_dad28c(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_15efe24(Cpu *c);
void f_15f00d0(Cpu *c);
void f_15f0ea4(Cpu *c);
void f_af0528(Cpu *restrict c) {
    FN_ENTER(0xaf0528u);
L_af0528:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af0570; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_af064c; }
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    (void)f_subs(c, c->r[0], 0x11u);
    if (COND_CC) { goto L_af064c; }
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_af064c; }
L_af0570:;
    c->r[1] = 0xc215u;
    c->r[0] = 0x1u;
    c->r[2] = c->r[8] + 0x50u;
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7c820000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf0594u; f_742f7c(c);
    c->r[1] = 0x1c9cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af0818; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af060c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[7] = 0x353u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af060c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af07c4; }
    c->r[2] = 0xf4e994u;
    c->r[3] = 0xf4e994u;
    { uint32_t ea = 0xaf0624u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf0628u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xee650000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af07cc;
L_af064c:;
    c->r[0] = 0x2a04u;
    c->r[1] = c->r[4];
    c->r[3] = 0x2800u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xd60cu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_af070c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af06d8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x500u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af06d8:;
    c->r[2] = 0x2800u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x2a08u;
    c->r[2] = 0x500u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
L_af070c:;
    c->r[3] = 0x2a3cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_af07b4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af0784; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x507u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af0784:;
    c->r[2] = 0x2800u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x1500u;
    c->r[1] = 0x2a40u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3dd80000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_af07b4:;
    c->r[2] = 0x2964u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    goto L_af12dc;
L_af07c4:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af07cc:;
    c->r[2] = 0x1ca0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af07f0; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af080c;
L_af07f0:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af080c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0818:;
    { uint32_t ea = c->r[8] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1cacu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[6] = v; } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_af0928; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af0898; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x355u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_af0898:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_af08d4; }
    c->r[1] = 0xf4e708u;
    c->r[2] = 0xf4e708u;
    { uint32_t ea = 0xaf08b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaf08b4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x104000u;
    c->r[1] = c->r[0] | 0xe7000000u;
    goto L_af08dc;
L_af08d4:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af08dc:;
    c->r[2] = 0x1cb0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af0900; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af091c;
L_af0900:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af091c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0928:;
    c->r[1] = 0x1cb4u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af0a34; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af09a0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x356u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af09a0:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af09e0; }
    c->r[2] = 0xf4e600u;
    c->r[3] = 0xf4e600u;
    { uint32_t ea = 0xaf09b8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf09bcu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x61660000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af09e8;
L_af09e0:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af09e8:;
    c->r[2] = 0x1cb8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af0a0c; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af0a28;
L_af0a0c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0a28:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0a34:;
    c->r[1] = 0x1cbcu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af0b40; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af0aac; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x357u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af0aac:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af0aec; }
    c->r[2] = 0xf4e4f4u;
    c->r[3] = 0xf4e4f4u;
    { uint32_t ea = 0xaf0ac4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf0ac8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xd000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x726b0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af0af4;
L_af0aec:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af0af4:;
    c->r[2] = 0x1cc0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af0b18; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af0b34;
L_af0b18:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0b34:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0b40:;
    c->r[1] = 0x1cc4u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x174u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af0c4c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af0bb8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x358u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af0bb8:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af0bf8; }
    c->r[2] = 0xf4e3e8u;
    c->r[3] = 0xf4e3e8u;
    { uint32_t ea = 0xaf0bd0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf0bd4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7b740000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af0c00;
L_af0bf8:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af0c00:;
    c->r[2] = 0x1cc8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af0c24; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af0c40;
L_af0c24:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0c40:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0c4c:;
    c->r[1] = 0x1cccu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af0d58; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af0cc4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x359u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af0cc4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af0d04; }
    c->r[2] = 0xf4e2dcu;
    c->r[3] = 0xf4e2dcu;
    { uint32_t ea = 0xaf0cdcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf0ce0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa27e0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af0d0c;
L_af0d04:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af0d0c:;
    c->r[2] = 0x1cd0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af0d30; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af0d4c;
L_af0d30:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0d4c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0d58:;
    c->r[0] = 0x2a04u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    c->r[0] = 0xd60cu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[2];
    c->r[3] = c->r[3] & 0xfffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_af0e20; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af0df4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x500u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af0df4:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = c->r[2] ^ 0xe3000u;
    c->r[2] = 0x2a08u;
    c->r[1] = c->r[1] ^ 0x5500000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_af0e20:;
    c->r[2] = 0x2a3cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2];
    c->r[3] = c->r[3] & 0xfffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_af0edc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af0eb0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x507u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af0eb0:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = c->r[2] ^ 0x62000u;
    c->r[2] = 0x2a40u;
    c->r[1] = c->r[1] ^ 0x38800000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_af0edc:;
    { uint32_t ea = c->r[0] + 0xbd8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xbdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x1ca4u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x1b8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_af0ff8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af0f60; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[6] = 0x354u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_af0f60:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_af0fa0; }
    c->r[0] = 0xf4e040u;
    c->r[3] = 0xf4e040u;
    { uint32_t ea = 0xaf0f78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xaf0f7cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x1000u;
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x74490000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_af0fa8;
L_af0fa0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_af0fa8:;
    c->r[2] = 0x1ca8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_af0fcc; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af0fe8;
L_af0fcc:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0fe8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af0ff8:;
    c->r[1] = 0x2984u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1];
    c->r[3] = c->r[3] & 0xfffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_af10b8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af1088; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x4f0u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af1088:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0xe000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd6830000u;
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[2] = 0x2988u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_af10b8:;
    c->r[1] = 0x29c4u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x1bcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1];
    c->r[3] = c->r[3] & 0xfffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_af1178; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af1148; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x4f8u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af1148:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0xb000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x25f10000u;
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[2] = 0x29c8u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_af1178:;
    c->r[2] = 0x297cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2];
    c->r[3] = c->r[3] & 0xfffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_af1234; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af1208; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x4efu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af1208:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = c->r[2] ^ 0xdc000u;
    c->r[2] = 0x2980u;
    c->r[1] = c->r[1] ^ 0x4a000000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_af1234:;
    { uint32_t ea = c->r[8] + 0x1b1u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = 0x2964u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_af12dc; }
    c->r[3] = 0x2768u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_af1384; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af12c0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x4ecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af12c0:;
    c->r[2] = 0x2768u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x34edu;
    c->r[0] = 0x2968u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x75bb0000u;
    goto L_af136c;
L_af12dc:;
    c->r[3] = 0x2760u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_af1384; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af1358; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x4ecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af1358:;
    c->r[2] = 0x2760u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2968u;
    c->r[1] = 0x4ecu;
L_af136c:;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_af1384:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_af13c4(Cpu *restrict c) {
    FN_ENTER(0xaf13c4u);
L_af13c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xf50d4cu;
    { uint32_t ea = 0xaf13d4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf13d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x220u;
    c->pc = c->r[4]; c->r[14] = 0xaf13f0u; rt_dispatch(c);
    c->r[14] = 0xaf13f4u; f_aeadbc(c);
    c->r[1] = 0xf50d1cu;
    c->r[2] = 0x0u;
    c->v.s[6] = 0x41700000u;
    { uint32_t ea = 0xaf1408u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x42c80000u;
    c->r[3] = c->r[1] - 0x1080000u;
    { uint32_t ea = c->r[0] + 0x180u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x184u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x188u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x190u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[1] - 0x1280000u;
    c->r[1] = c->r[1] - 0x1680000u;
    { uint32_t ea = c->r[0] + 0x194u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x198u; ST32(ea, c->r[1]); }
    c->r[1] = 0xf48790u;
    { uint32_t ea = c->r[0] + 0x19cu; ST32(ea, c->r[2]); }
    { uint32_t ea = 0xaf144cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->r[1] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    ST32(c->r[0] + 416u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[6];
    ST32(c->r[0] + 420u, c->v.s[2]);
    ST32(c->r[0] + 424u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x1acu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1b0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1b8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1bcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1c0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_af149c(Cpu *restrict c) {
    FN_ENTER(0xaf149cu);
L_af149c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xaf14a8u; f_aeafe4(c);
    c->r[0] = 0xf50c6cu;
    { uint32_t ea = 0xaf14b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaf14b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_af14d0(Cpu *restrict c) {
    FN_ENTER(0xaf14d0u);
L_af14d0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    c->v.s[4] = c->r[0];
    c->v.s[2] = LD32(c->r[4] + 172u);
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    c->v.s[4] = c->v.s[0];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_af1530; }
    c->v.s[4] = 0x3f800000u;
    c->v.f[4] = c->v.f[4] / c->v.f[2];
L_af1530:;
    ST32(c->r[4] + 100u, c->v.s[4]);
    c->v.s[2] = 0x3a83126fu;
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[1]); }
    c->v.s[4] = LD32(c->r[4] + 216u);
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    ST32(c->r[4] + 128u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af1588; }
    { uint32_t ea = c->r[0] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 220u);
    c->v.s[2] = 0x3e800000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { c->r[1] = c->r[0]; }
    c->v.s[4] = c->r[1];
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
L_af1588:;
    ST32(c->r[4] + 132u, c->v.s[0]);
    c->r[0] = 0xe4f0u;
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xd6830000u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_af15c0; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_af15f8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_af1608; }
    c->r[0] = 0x64f1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x80520000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    goto L_af1614;
L_af15c0:;
    { uint32_t ea = c->r[4] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_af15d8; }
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af1938; }
L_af15d8:;
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x14f4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xab950000u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[2] = 0x64f6u; }
    if (COND_NE) { c->r[2] = (c->r[2] & 0xFFFFu) | 0x1b220000u; }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[2]); }
    goto L_af1614;
L_af15f8:;
    c->r[0] = 0x34f2u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xe05f0000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    goto L_af1614;
L_af1608:;
    c->r[1] = 0xc4efu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4a0d0000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
L_af1614:;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[4] + 436u);
    c->v.s[0] = LD32(c->r[4] + 432u);
    c->v.s[4] = LD32(c->r[4] + 440u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_af1648; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xaf1648u; f_15efddc(c);
L_af1648:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_af166c; }
    { uint32_t ea = c->r[4] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1b8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_af1698;
L_af166c:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[4] + 432u);
    c->v.s[4] = LD32(c->r[4] + 436u);
    c->v.s[6] = LD32(c->r[4] + 440u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_af1698:;
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[1]); }
    c->r[5] = 0x0u;
    c->r[1] = c->r[4] + 0x1b4u;
    c->v.d[12] = 0x4010000000000000ull;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[1] = c->v.d[12];
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 400u);
    c->v.df[0] = (double)c->v.f[0];
    c->r[14] = 0xaf16c4u; f_15f0ea4(c);
    c->v.s[16] = 0x3f570a3du;
    c->v.d[9] = c->v.d[0];
    c->v.s[0] = LD32(c->r[4] + 384u);
    c->v.s[1] = c->v.s[16];
    c->r[14] = 0xaf16d8u; f_15f00d0(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = LD32(c->r[4] + 404u);
    c->v.d[1] = c->v.d[12];
    c->v.df[0] = (double)c->v.f[0];
    c->r[14] = 0xaf16ecu; f_15f0ea4(c);
    c->v.d[13] = c->v.d[0];
    c->v.s[0] = LD32(c->r[4] + 388u);
    c->v.s[1] = c->v.s[16];
    c->r[14] = 0xaf16fcu; f_15f00d0(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = LD32(c->r[4] + 408u);
    c->v.d[1] = c->v.d[12];
    c->v.df[0] = (double)c->v.f[0];
    c->r[14] = 0xaf1710u; f_15f0ea4(c);
    ST64(c->r[13], c->v.d[0]);
    c->v.s[1] = c->v.s[16];
    c->v.s[0] = LD32(c->r[4] + 392u);
    c->r[14] = 0xaf1720u; f_15f00d0(c);
    c->v.s[17] = c->v.s[0];
    c->v.s[0] = LD32(c->r[4] + 400u);
    c->v.s[21] = LD32(c->r[4] + 448u);
    c->v.d[1] = c->v.d[12];
    c->v.df[0] = (double)c->v.f[0];
    c->r[14] = 0xaf1738u; f_15f0ea4(c);
    ST64(c->r[13] + 24u, c->v.d[0]);
    c->v.d[1] = c->v.d[12];
    c->v.s[0] = LD32(c->r[4] + 404u);
    c->v.df[0] = (double)c->v.f[0];
    c->r[14] = 0xaf174cu; f_15f0ea4(c);
    ST64(c->r[13] + 16u, c->v.d[0]);
    c->v.d[1] = c->v.d[12];
    c->v.s[0] = LD32(c->r[4] + 408u);
    c->v.df[0] = (double)c->v.f[0];
    c->r[14] = 0xaf1760u; f_15f0ea4(c);
    ST64(c->r[13] + 8u, c->v.d[0]);
    c->v.s[29] = 0x3f800000u;
    c->v.s[31] = 0x3727c5acu;
    c->v.s[1] = c->v.s[16];
    c->v.d[11] = 0x3ff0000000000000ull;
    c->v.s[2] = LD32(c->r[4] + 448u);
    c->v.s[0] = LD32(c->r[4] + 384u);
    c->v.f[20] = c->v.f[29] / c->v.f[30];
    ST32(c->r[13] + 36u, c->v.s[2]);
    c->v.f[2] = c->v.f[29] / c->v.f[28];
    c->v.f[30] = c->v.f[2] * c->v.f[31];
    c->r[14] = 0xaf1790u; f_15f00d0(c);
    c->v.df[16] = c->v.df[11] / c->v.df[9];
    c->v.f[2] = c->v.f[29] / c->v.f[17];
    c->v.df[17] = (double)c->v.f[30];
    c->v.s[28] = c->v.s[0];
    c->v.f[4] = c->v.f[20] * c->v.f[31];
    c->v.s[0] = LD32(c->r[4] + 388u);
    c->v.s[1] = c->v.s[16];
    c->v.df[13] = c->v.df[11] / c->v.df[13];
    c->v.df[12] = (double)c->v.f[4];
    c->v.f[30] = c->v.f[2] * c->v.f[31];
    c->v.df[9] = c->v.df[16] + c->v.df[17];
    c->r[14] = 0xaf17c0u; f_15f00d0(c);
    c->v.d[16] = LD64(c->r[13]);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[4] + 392u);
    c->v.df[17] = (double)c->v.f[30];
    c->v.df[18] = c->v.df[13] + c->v.df[12];
    c->v.f[2] = (float)c->v.df[9];
    c->v.s[1] = c->v.s[16];
    c->v.df[16] = c->v.df[11] / c->v.df[16];
    c->v.f[22] = (float)c->v.df[18];
    c->v.s[24] = c->v.s[2] ^ 0x80000000u;
    c->v.df[9] = c->v.df[16] + c->v.df[17];
    c->r[14] = 0xaf17f0u; f_15f00d0(c);
    c->v.f[4] = (float)c->v.df[9];
    c->v.s[8] = 0xc0000000u;
    c->v.s[6] = c->v.s[22] ^ 0x80000000u;
    c->v.s[2] = LD32(c->r[4] + 448u);
    ST32(c->r[4] + 464u, c->v.s[24]);
    c->v.d[16] = 0x3fae8ec8a0000000ull;
    c->v.f[5] = c->v.f[29] / c->v.f[20];
    c->v.f[0] = c->v.f[29] / c->v.f[0];
    c->v.s[3] = 0x3da2f983u;
    c->v.f[8] = c->v.f[21] * c->v.f[8];
    ST32(c->r[4] + 468u, c->v.s[6]);
    c->v.s[4] = c->v.s[4] ^ 0x80000000u;
    c->v.f[2] = c->v.f[29] - c->v.f[2];
    ST32(c->r[4] + 472u, c->v.s[4]);
    ST32(c->r[4] + 476u, c->v.s[8]);
    c->v.s[8] = 0xbf800000u;
    c->v.s[10] = LD32(c->r[4] + 416u);
    c->v.s[12] = LD32(c->r[4] + 420u);
    c->v.s[14] = LD32(c->r[4] + 424u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[6] = c->v.f[8] / c->v.f[6];
    c->v.f[4] = c->v.f[8] / c->v.f[4];
    c->v.f[1] = c->v.f[8] / c->v.f[24];
    c->v.f[0] = c->v.f[0] * c->v.f[31];
    c->v.f[5] = c->v.f[5] * c->v.f[31];
    c->v.f[0] = c->v.f[0] * c->v.f[3];
    c->v.f[10] = c->v.f[1] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[12];
    c->v.f[4] = c->v.f[4] * c->v.f[14];
    c->v.f[12] = c->v.f[29] / c->v.f[28];
    ST32(c->r[4] + 512u, c->v.s[10]);
    ST32(c->r[4] + 516u, c->v.s[6]);
    ST32(c->r[4] + 520u, c->v.s[4]);
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.d[17] = LD64(c->r[13] + 24u);
    { uint32_t ea = c->r[4] + 0x20cu; ST32(ea, c->r[5]); }
    c->v.d[18] = LD64(c->r[13] + 16u);
    c->v.s[14] = LD32(c->r[4] + 452u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.df[17] = c->v.df[16] / c->v.df[17];
    c->v.df[18] = c->v.df[16] / c->v.df[18];
    c->v.f[0] = c->v.f[14] * c->v.f[0];
    c->v.f[12] = c->v.f[12] * c->v.f[31];
    c->v.f[12] = c->v.f[12] * c->v.f[3];
    c->v.f[8] = (float)c->v.df[17];
    c->v.d[17] = LD64(c->r[13] + 8u);
    c->v.f[1] = (float)c->v.df[18];
    c->v.df[16] = c->v.df[16] / c->v.df[17];
    c->v.f[8] = c->v.f[8] * c->v.f[10];
    c->v.f[10] = c->v.f[12] * c->v.f[10];
    c->v.f[1] = c->v.f[1] * c->v.f[6];
    c->v.f[8] = c->v.f[8] * c->v.f[14];
    c->v.f[1] = c->v.f[1] * c->v.f[14];
    ST32(c->r[4] + 480u, c->v.s[8]);
    c->v.f[8] = c->v.f[5] * c->v.f[3];
    ST32(c->r[4] + 484u, c->v.s[1]);
    c->v.f[6] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[2] * c->v.f[10];
    c->v.s[10] = LD32(c->r[13] + 36u);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[10] * c->v.f[10]);
    c->v.f[7] = (float)c->v.df[16];
    c->v.f[7] = c->v.f[7] * c->v.f[4];
    c->v.f[4] = c->v.f[2] * c->v.f[6];
    c->v.f[6] = c->v.f[14] * c->v.f[8];
    c->v.f[12] = c->v.f[7] * c->v.f[14];
    c->v.f[4] = c->v.f[14] * c->v.f[4];
    ST32(c->r[4] + 488u, c->v.s[12]);
    ST32(c->r[4] + 492u, c->v.s[29]);
    ST32(c->r[4] + 496u, c->v.s[6]);
    ST32(c->r[4] + 500u, c->v.s[4]);
    ST32(c->r[4] + 504u, c->v.s[0]);
    ST32(c->r[4] + 508u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x218u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_af1938:;
    c->r[0] = 0xe4f3u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x8a910000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    goto L_af1614;
}
void f_af1960(Cpu *restrict c) {
    FN_ENTER(0xaf1960u);
L_af1960:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[4] = c->r[1];
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_af3048; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[4];
    c->r[14] = 0xaf1990u; f_aebb34(c);
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[11] = v; }
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_af3048; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xaf19b0u; f_a7a7ac(c);
    c->r[0] = 0x1bf4u;
    c->r[7] = c->r[4];
    c->r[9] = 0x6000u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x377b0000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_af1abc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af1a30; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[6] = 0x33eu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_af1a30:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af1a68; }
    c->r[1] = 0xf4d570u;
    c->r[2] = 0xf4d570u;
    { uint32_t ea = 0xaf1a48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaf1a4cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[9];
    goto L_af1a70;
L_af1a68:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_af1a70:;
    c->r[2] = 0x1bf8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_af1a94; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af1ab0;
L_af1a94:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af1ab0:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af1abc:;
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_af1aec; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x0u;
    c->r[14] = 0xaf1ad8u; f_a7ff38(c);
    c->r[2] = c->r[4] + 0x164u;
    c->r[3] = ~0x1fu;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] | c->r[3];
    goto L_af1b08;
L_af1aec:;
    c->r[0] = c->r[4];
    c->r[1] = 0x15u;
    c->r[2] = 0x0u;
    c->r[14] = 0xaf1afcu; f_a7ff38(c);
    c->r[2] = c->r[4] + 0x164u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0x1fu;
L_af1b08:;
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x2f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_af1b7c; }
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_af1b5c; }
    { uint32_t ea = c->r[11] + 0x250u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_af1b60;
L_af1b5c:;
    { uint32_t ea = c->r[11] + 0x260u; uint32_t v = LD32(ea); c->r[3] = v; }
L_af1b60:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x1cu;
    c->r[2] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf1b7cu; f_a80998(c);
L_af1b7c:;
    c->r[0] = c->r[4];
    c->r[6] = 0xdaedu;
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; } }
    if (COND_NE) { goto L_af1bb0; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_af1bdc; }
L_af1bb0:;
    c->r[3] = c->r[3] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
L_af1bdc:;
    c->r[0] = 0x1be4u;
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[10] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_af1ce8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af1c54; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[6] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_af1c54:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af1c94; }
    c->r[1] = 0xf4d34cu;
    c->r[2] = 0xf4d34cu;
    { uint32_t ea = 0xaf1c6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaf1c70u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_af1c9c;
L_af1c94:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
L_af1c9c:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_af1cc0; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af1cdc;
L_af1cc0:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af1cdc:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af1ce8:;
    { uint32_t ea = c->r[11] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_af1de4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af1d58; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[6] = 0x33eu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_af1d58:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af1d90; }
    c->r[1] = 0xf4d248u;
    c->r[2] = 0xf4d248u;
    { uint32_t ea = 0xaf1d70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaf1d74u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[9];
    goto L_af1d98;
L_af1d90:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_af1d98:;
    c->r[2] = 0x1bf8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_af1dbc; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af1dd8;
L_af1dbc:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af1dd8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af1de4:;
    { uint32_t ea = c->r[8] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af1df8; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_af1dfc;
L_af1df8:;
    c->r[0] = 0x0u;
L_af1dfc:;
    c->r[2] = 0x1cacu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_af1f00; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af1e70; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x355u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af1e70:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af1eac; }
    c->r[2] = 0xf4d130u;
    c->r[3] = 0xf4d130u;
    { uint32_t ea = 0xaf1e88u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf1e8cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x104000u;
    c->r[0] = c->r[0] | 0xe7000000u;
    goto L_af1eb4;
L_af1eac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_af1eb4:;
    c->r[2] = 0x1cb0u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_af1ed8; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af1ef4;
L_af1ed8:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af1ef4:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af1f00:;
    c->r[1] = 0x1cb4u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af200c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af1f78; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x356u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af1f78:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af1fb8; }
    c->r[2] = 0xf4d028u;
    c->r[3] = 0xf4d028u;
    { uint32_t ea = 0xaf1f90u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf1f94u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x61660000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af1fc0;
L_af1fb8:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af1fc0:;
    c->r[2] = 0x1cb8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af1fe4; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af2000;
L_af1fe4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af2000:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af200c:;
    c->r[1] = 0x1cbcu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af2118; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2084; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x357u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af2084:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af20c4; }
    c->r[2] = 0xf4cf1cu;
    c->r[3] = 0xf4cf1cu;
    { uint32_t ea = 0xaf209cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf20a0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xd000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x726b0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af20cc;
L_af20c4:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af20cc:;
    c->r[2] = 0x1cc0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af20f0; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af210c;
L_af20f0:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af210c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af2118:;
    c->r[1] = 0x1cc4u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x174u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af2224; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2190; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x358u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af2190:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af21d0; }
    c->r[2] = 0xf4ce10u;
    c->r[3] = 0xf4ce10u;
    { uint32_t ea = 0xaf21a8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf21acu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7b740000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af21d8;
L_af21d0:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af21d8:;
    c->r[2] = 0x1cc8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af21fc; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af2218;
L_af21fc:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af2218:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af2224:;
    c->r[1] = 0x1cccu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af2330; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af229c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x359u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af229c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af22dc; }
    c->r[2] = 0xf4cd04u;
    c->r[3] = 0xf4cd04u;
    { uint32_t ea = 0xaf22b4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf22b8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa27e0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af22e4;
L_af22dc:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af22e4:;
    c->r[2] = 0x1cd0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af2308; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af2324;
L_af2308:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af2324:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af2330:;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_af2358; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_af2358:;
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    c->r[1] = 0x297cu;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[7] = v; }
    c->r[1] = 0xd694u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfffu;
    { uint32_t ea = c->r[3] + (c->r[2] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_af2440; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2414; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[4] + 0xecu;
    c->r[5] = 0x4efu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[3] = c->r[3] + (c->r[7] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_af2414:;
    { uint32_t ea = c->r[3] + (c->r[2] << 3); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] ^ 0xdc000u;
    c->r[1] = 0x2980u;
    c->r[0] = c->r[0] ^ 0x4a000000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_af2440:;
    c->r[1] = 0xd2b8u;
    c->r[5] = 0x1u;
    c->r[2] = c->r[8] + 0x1d0u;
    c->r[0] = c->r[4];
    c->r[3] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xef60000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xaf2460u; f_742f7c(c);
    c->r[1] = 0xc215u;
    c->r[2] = c->r[8] + 0x50u;
    c->r[0] = c->r[4];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7c820000u;
    c->r[14] = 0xaf247cu; f_742f7c(c);
    { uint32_t ea = c->r[8] + 0x17du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x584eu;
    c->r[9] = 0xb84fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa1c0000u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x64f90000u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af2530; }
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_af25d4; }
    { uint32_t ea = c->r[11] + 0x250u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af2874; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2514; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x33cu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[10]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af2514:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af2818; }
    c->r[2] = 0xf4ca8cu;
    c->r[3] = 0xf4ca8cu;
    { uint32_t ea = 0xaf252cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf2530u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_af265c;
L_af2530:;
    { uint32_t ea = c->r[11] + 0x2f8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_af2684; }
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_af2ab0; }
    { uint32_t ea = c->r[11] + 0x250u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af2c6c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af25b8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x33cu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[10]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af25b8:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af2c10; }
    c->r[2] = 0xf4c9e8u;
    c->r[3] = 0xf4c9e8u;
    { uint32_t ea = 0xaf25d0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf25d4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_af2b38;
L_af25d4:;
    { uint32_t ea = c->r[11] + 0x260u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af2874; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2644; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x33cu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[10]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af2644:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af2818; }
    c->r[2] = 0xf4c95cu;
    c->r[3] = 0xf4c95cu;
    { uint32_t ea = 0xaf265cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf2660u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_af265c:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
    c->r[2] = 0x4000u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaf30000u;
    c->r[1] = c->r[1] | c->r[2];
    goto L_af2820;
L_af2684:;
    c->r[1] = 0xf46e7cu;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf2698u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_af26ac; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_af26c4; }
L_af26ac:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_af26c4:;
    c->r[1] = 0x2724u;
    c->r[0] = c->r[4];
    c->r[3] = 0x4280u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xd8ecu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_af2780; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2750; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x4a4u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_af2750:;
    c->r[2] = 0x4280u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x850u;
    c->r[0] = 0x2728u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x2f020000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_af2780:;
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_af2b60; }
    { uint32_t ea = c->r[11] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_af3004; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af27fc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_af27fc:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af2fb0; }
    c->r[1] = 0xf4c7a4u;
    c->r[2] = 0xf4c7a4u;
    { uint32_t ea = 0xaf2814u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaf2818u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_af2be8;
L_af2818:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
L_af2820:;
    c->r[3] = 0x1be8u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_af284c; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_af2868;
L_af284c:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
L_af2868:;
    c->r[3] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
L_af2874:;
    c->r[1] = 0x2724u;
    c->r[5] = c->r[4];
    c->r[3] = 0x4270u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[2] = v; }
    c->r[1] = 0xd8ecu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_af2928; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2900; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x4a4u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[5]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_af2900:;
    c->r[2] = 0x4270u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_af2928:;
    c->r[1] = 0xf46bd8u;
    { uint32_t ea = c->r[4] + 0xe6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf293cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_af2950; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_af2968; }
L_af2950:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_af2968:;
    { uint32_t ea = c->r[11] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x1cu;
    c->r[7] = c->r[13] + 0x8u;
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x7fffu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[14] = 0xaf29a0u; f_aeb990(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4278u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af2a44; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2a1c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af2a1c:;
    c->r[1] = 0x4278u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_af2a44:;
    c->r[1] = 0xf46ab8u;
    c->r[0] = 0x12bcu;
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xaf2a5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_af2a70; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_af2a88; }
L_af2a70:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_af2a88:;
    { uint32_t ea = c->r[11] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x7fffu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    goto L_af302c;
L_af2ab0:;
    { uint32_t ea = c->r[11] + 0x260u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af2c6c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2b20; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x33cu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[10]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af2b20:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af2c10; }
    c->r[2] = 0xf4c480u;
    c->r[3] = 0xf4c480u;
    { uint32_t ea = 0xaf2b38u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf2b3cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_af2b38:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
    c->r[2] = 0x4000u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaf30000u;
    c->r[1] = c->r[1] | c->r[2];
    goto L_af2c18;
L_af2b60:;
    { uint32_t ea = c->r[11] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_af3004; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2bd0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_af2bd0:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af2fb0; }
    c->r[1] = 0xf4c3d0u;
    c->r[2] = 0xf4c3d0u;
    { uint32_t ea = 0xaf2be8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaf2becu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_af2be8:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_af2fb8;
L_af2c10:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
L_af2c18:;
    c->r[3] = 0x1be8u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_af2c44; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_af2c60;
L_af2c44:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
L_af2c60:;
    c->r[3] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
L_af2c6c:;
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x15u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[2] = 0x11u; }
    c->r[1] = c->r[11] + (c->r[2] << 4);
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xf00000u;
    (void)f_subs(c, c->r[1], 0x600000u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x100000u); }
    if (COND_NE) { goto L_af2d5c; }
    c->r[2] = 0x2724u;
    c->r[1] = c->r[4];
    c->r[7] = 0x4270u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[2] = 0xd8ecu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_af2e18; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2d2c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x4a4u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_af2d2c:;
    c->r[3] = 0x4270u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_af2e04;
L_af2d5c:;
    c->r[1] = 0x2724u;
    c->r[0] = c->r[4];
    c->r[3] = 0x4268u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xd8ecu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_af2e18; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2de8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x4a4u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_af2de8:;
    c->r[2] = 0x4268u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xd84du;
    c->r[0] = 0x2728u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xe1dd0000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
L_af2e04:;
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_af2e18:;
    c->r[1] = 0xf466e8u;
    { uint32_t ea = c->r[4] + 0xe6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf2e2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_af2e40; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_af2e58; }
L_af2e40:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_af2e58:;
    { uint32_t ea = c->r[11] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x1cu;
    c->r[5] = c->r[13] + 0x8u;
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x7fffu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[14] = 0xaf2e90u; f_aeb990(c);
    c->r[1] = 0x2724u;
    c->r[0] = c->r[4];
    c->r[3] = 0x4278u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xd8ecu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_af2f44; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af2f1c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x4a4u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_af2f1c:;
    c->r[2] = 0x4278u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_af2f44:;
    c->r[1] = 0xf465b8u;
    c->r[0] = 0x12bcu;
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xaf2f5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_af2f70; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_af2f88; }
L_af2f70:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_af2f88:;
    { uint32_t ea = c->r[11] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x7fffu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    goto L_af302c;
L_af2fb0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
L_af2fb8:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_af2fdc; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af2ff8;
L_af2fdc:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af2ff8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af3004:;
    { uint32_t ea = c->r[11] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x7fffu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_af302c:;
    c->r[2] = c->r[13] + 0x1cu;
    c->r[1] = c->r[4];
    c->r[3] = c->r[2];
    c->r[14] = 0xaf303cu; f_aeb990(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xaf3048u; f_a7b778(c);
L_af3048:;
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_af30ac(Cpu *restrict c) {
    FN_ENTER(0xaf30acu);
L_af30ac:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af30e0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_af31dc; }
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    (void)f_subs(c, c->r[0], 0x11u);
    if (COND_CC) { goto L_af31dc; }
L_af30e0:;
    c->r[1] = 0xd2b8u;
    c->r[7] = 0x1u;
    c->r[2] = c->r[8] + 0x1d0u;
    c->r[0] = c->r[4];
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xef60000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xaf3104u; f_742f7c(c);
    c->r[1] = 0xc215u;
    c->r[2] = c->r[8] + 0x50u;
    c->r[0] = c->r[4];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7c820000u;
    c->r[14] = 0xaf3120u; f_742f7c(c);
    { uint32_t ea = c->r[8] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1cacu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[6] = v; } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_af3388; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af31a0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x355u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_af31a0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_af3334; }
    c->r[1] = 0xf4be00u;
    c->r[2] = 0xf4be00u;
    { uint32_t ea = 0xaf31b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaf31bcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x104000u;
    c->r[1] = c->r[0] | 0xe7000000u;
    goto L_af333c;
L_af31dc:;
    c->r[0] = 0x2a04u;
    c->r[1] = c->r[4];
    c->r[3] = 0x2800u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xd60cu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_af329c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af3268; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x500u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af3268:;
    c->r[2] = 0x2800u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x2a08u;
    c->r[2] = 0x500u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
L_af329c:;
    c->r[3] = 0x2a3cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_af3aa0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af3314; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x507u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af3314:;
    c->r[2] = 0x2800u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x1500u;
    c->r[1] = 0x2a40u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3dd80000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    goto L_af3a8c;
L_af3334:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af333c:;
    c->r[2] = 0x1cb0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af3360; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af337c;
L_af3360:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af337c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af3388:;
    c->r[1] = 0x1cb4u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af3494; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af3400; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x356u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af3400:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af3440; }
    c->r[2] = 0xf4bba0u;
    c->r[3] = 0xf4bba0u;
    { uint32_t ea = 0xaf3418u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf341cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x61660000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af3448;
L_af3440:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af3448:;
    c->r[2] = 0x1cb8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af346c; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af3488;
L_af346c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af3488:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af3494:;
    c->r[1] = 0x1cbcu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af35a0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af350c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x357u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af350c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af354c; }
    c->r[2] = 0xf4ba94u;
    c->r[3] = 0xf4ba94u;
    { uint32_t ea = 0xaf3524u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf3528u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xd000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x726b0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af3554;
L_af354c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af3554:;
    c->r[2] = 0x1cc0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af3578; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af3594;
L_af3578:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af3594:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af35a0:;
    c->r[1] = 0x1cc4u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x174u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af36ac; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af3618; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x358u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af3618:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af3658; }
    c->r[2] = 0xf4b988u;
    c->r[3] = 0xf4b988u;
    { uint32_t ea = 0xaf3630u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf3634u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7b740000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af3660;
L_af3658:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af3660:;
    c->r[2] = 0x1cc8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af3684; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af36a0;
L_af3684:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af36a0:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af36ac:;
    c->r[1] = 0x1cccu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_af37b8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af3724; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x359u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_af3724:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af3764; }
    c->r[2] = 0xf4b87cu;
    c->r[3] = 0xf4b87cu;
    { uint32_t ea = 0xaf373cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaf3740u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa27e0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_af376c;
L_af3764:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_af376c:;
    c->r[2] = 0x1cd0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_af3790; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af37ac;
L_af3790:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af37ac:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af37b8:;
    c->r[0] = 0x2a04u;
    c->r[1] = c->r[4];
    c->r[3] = 0x4258u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xd60cu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_af3874; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af3844; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x500u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af3844:;
    c->r[2] = 0x4258u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x284bu;
    c->r[1] = 0x2a08u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xf5540000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_af3874:;
    c->r[3] = 0x4260u;
    c->r[2] = 0x2a3cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_af3924; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af38f4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x507u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af38f4:;
    c->r[2] = 0x4260u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x584cu;
    c->r[1] = 0x2a40u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xfbe20000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_af3924:;
    c->r[2] = 0x297cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2];
    c->r[3] = c->r[3] & 0xfffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_af39e0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af39b4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x4efu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af39b4:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = c->r[2] ^ 0xdc000u;
    c->r[2] = 0x2980u;
    c->r[1] = c->r[1] ^ 0x4a000000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_af39e0:;
    c->r[1] = 0x2984u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1];
    c->r[3] = c->r[3] & 0xfffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_af3aa0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af3a70; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x4f0u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af3a70:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0xe000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd6830000u;
    c->r[1] = c->r[1] ^ c->r[2];
    c->r[2] = 0x2988u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
L_af3a8c:;
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_af3aa0:;
    c->r[3] = 0x2760u;
    c->r[2] = 0x2964u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_af3b54; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af3b28; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x4ecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_af3b28:;
    c->r[2] = 0x2760u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2968u;
    c->r[1] = 0x4ecu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_af3b54:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_af3b84(Cpu *restrict c) {
    FN_ENTER(0xaf3b84u);
L_af3b84:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_af3b88(Cpu *restrict c) {
    FN_ENTER(0xaf3b88u);
L_af3b88:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xaf3b9cu; f_aeb13c(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf3bc4u; f_9bb638(c);
    c->r[1] = 0xc7f3b4u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xaf3bdcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x190u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf3c3cu; f_9bb638(c);
    c->r[1] = 0xc7f354u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf3c50u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x180u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf3cb4u; f_9bb638(c);
    c->r[1] = 0xc7f2f8u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf3cc8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1c0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf3d28u; f_9bb638(c);
    c->r[1] = 0xc7f105u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf3d3cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1c4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf3da0u; f_9bb638(c);
    c->r[1] = 0xc7e774u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf3db4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1a0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf3e14u; f_9bb638(c);
    c->r[1] = 0xc7f1aeu;
    c->r[1] = 0xaf3e20u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1b0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_af3e80(Cpu *restrict c) {
    FN_ENTER(0xaf3e80u);
L_af3e80:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_af3e84(Cpu *restrict c) {
    FN_ENTER(0xaf3e84u);
L_af3e84:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_af3e88(Cpu *restrict c) {
    FN_ENTER(0xaf3e88u);
L_af3e88:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_af3e8c(Cpu *restrict c) {
    FN_ENTER(0xaf3e8cu);
L_af3e8c:;
    c->r[0] = 0xf4e27cu;
    { uint32_t ea = 0xaf3e98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_af3e9c(Cpu *restrict c) {
    FN_ENTER(0xaf3e9cu);
L_af3e9c:;
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_af3eb0(Cpu *restrict c) {
    FN_ENTER(0xaf3eb0u);
L_af3eb0:;
    return;
}
void f_af3eb4(Cpu *restrict c) {
    FN_ENTER(0xaf3eb4u);
L_af3eb4:;
    c->r[0] = 0xf4e258u;
    { uint32_t ea = 0xaf3ec0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_af3ec4(Cpu *restrict c) {
    FN_ENTER(0xaf3ec4u);
L_af3ec4:;
    c->r[0] = 0xf4e250u;
    { uint32_t ea = 0xaf3ed0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_af3ed4(Cpu *restrict c) {
    FN_ENTER(0xaf3ed4u);
L_af3ed4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x182cf80u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x2u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[0] = 0xaf3efcu + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    c->r[0] = 0xf4e1ccu;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[3] = 0x180u;
    { uint32_t ea = 0xaf3f48u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0xf453b0u;
    { uint32_t ea = 0xaf3f50u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xc7f8e1u;
    c->r[1] = 0xaf3f58u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xaf3f5cu; f_9aedcc(c);
    c->r[0] = 0xf4e1a8u;
    c->r[1] = 0xc7f97cu;
    c->r[2] = c->r[4];
    c->r[3] = 0x2c0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xaf3f80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaf3f84u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4e184u;
    { uint32_t ea = 0xaf3f94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaf3f94u; f_9aedcc(c);
    c->r[1] = 0xf4e178u;
    c->r[2] = c->r[4];
    c->r[3] = 0x220u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xaf3fb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf4e158u;
    c->r[1] = 0xc7f9c2u;
    { uint32_t ea = 0xaf3fc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaf3fccu + c->r[1];
    c->r[14] = 0xaf3fccu; f_9aedcc(c);
    c->r[1] = 0xf4e158u;
    { uint32_t ea = 0xaf3fd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_af4010(Cpu *restrict c) {
    FN_ENTER(0xaf4010u);
L_af4010:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xf4e114u;
    { uint32_t ea = 0xaf4020u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf4024u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xd0u;
    c->pc = c->r[4]; c->r[14] = 0xaf403cu; rt_dispatch(c);
    c->r[14] = 0xaf4040u; f_a98634(c);
    c->r[1] = 0xf4e0e4u;
    c->r[3] = 0xf45b84u;
    c->r[2] = ~0x0u;
    { uint32_t ea = 0xaf4054u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaf4058u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0xb4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc0u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_af40a4(Cpu *restrict c) {
    FN_ENTER(0xaf40a4u);
L_af40a4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xf4e078u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xaf40bcu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xaf40c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_af40e0(Cpu *restrict c) {
    FN_ENTER(0xaf40e0u);
L_af40e0:;
    return;
}
void f_af40e4(Cpu *restrict c) {
    FN_ENTER(0xaf40e4u);
L_af40e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0xaf40ecu; f_a98634(c);
    c->r[1] = 0xf4e038u;
    c->r[3] = 0xf45ad8u;
    c->r[12] = ~0x0u;
    { uint32_t ea = 0xaf4100u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaf4104u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc0u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_af414c(Cpu *restrict c) {
    FN_ENTER(0xaf414cu);
L_af414c:;
    __attribute__((musttail)) return f_a879b4(c);
}
void f_af4150(Cpu *restrict c) {
    FN_ENTER(0xaf4150u);
L_af4150:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xaf415cu; f_a879b4(c);
    c->r[0] = 0xf4dfccu;
    { uint32_t ea = 0xaf4168u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaf4168u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_af4180(Cpu *restrict c) {
    FN_ENTER(0xaf4180u);
L_af4180:;
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_af41bc; }
    c->v.s[0] = LD32(c->r[0] + 64u);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 64u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 68u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 68u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 72u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 72u, c->v.s[0]);
L_af41bc:;
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { return; }
    c->v.s[0] = LD32(c->r[0] + 96u);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 100u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 104u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 104u, c->v.s[0]);
    return;
}
void f_af41fc(Cpu *restrict c) {
    FN_ENTER(0xaf41fcu);
L_af41fc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af4238; }
    { uint32_t ea = c->r[1] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af4248;
L_af4238:;
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af42d4; }
    { uint32_t ea = c->r[1] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
L_af4248:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xaf4254u; rt_dispatch(c);
    c->v.s[6] = LD32(c->r[0] + 4u);
    c->v.s[8] = LD32(c->r[0] + 8u);
    c->v.s[10] = LD32(c->r[0]);
    c->v.s[12] = LD32(c->r[0] + 20u);
    c->v.s[14] = LD32(c->r[0] + 24u);
    c->v.s[1] = LD32(c->r[0] + 16u);
    c->v.s[2] = c->r[6];
    c->v.s[0] = c->r[5];
    c->v.s[3] = LD32(c->r[0] + 36u);
    c->v.s[5] = LD32(c->r[0] + 40u);
    c->v.s[7] = LD32(c->r[0] + 32u);
    c->v.s[4] = c->r[7];
    c->v.f[1] = c->v.f[1] * c->v.f[2];
    c->v.f[12] = c->v.f[12] * c->v.f[2];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.f[2] = c->v.f[14] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.s[10] = LD32(c->r[0] + 52u);
    c->v.s[14] = LD32(c->r[0] + 56u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[5] * c->v.f[4]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[7] * c->v.f[4]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.f[0] = c->v.f[6] + c->v.f[1];
    c->v.f[4] = c->v.f[10] + c->v.f[12];
    c->v.f[2] = c->v.f[14] + c->v.f[2];
    ST32(c->r[4], c->v.s[0]);
    ST32(c->r[4] + 4u, c->v.s[4]);
    ST32(c->r[4] + 8u, c->v.s[2]);
L_af42d4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_af42d8(Cpu *restrict c) {
    FN_ENTER(0xaf42d8u);
L_af42d8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[1];
    c->r[6] = 0x0u;
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af43d8; }
    c->v.s[18] = c->r[2];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[16] = c->r[1];
    { uint32_t ea = c->r[5] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[20] = c->r[3];
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xaf4358u; rt_dispatch(c);
    c->v.s[7] = LD32(c->r[0] + 16u);
    c->v.s[5] = LD32(c->r[0]);
    c->v.s[14] = LD32(c->r[0] + 32u);
    c->v.s[3] = LD32(c->r[0] + 20u);
    c->v.s[1] = LD32(c->r[0] + 24u);
    c->v.s[12] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[0] + 36u);
    c->v.s[0] = LD32(c->r[0] + 40u);
    c->v.s[8] = LD32(c->r[0] + 48u);
    c->v.s[4] = LD32(c->r[0] + 52u);
    c->v.s[6] = LD32(c->r[0] + 56u);
    c->v.f[9] = c->v.f[7] * c->v.f[18];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[5] * c->v.f[16]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[14] * c->v.f[20]);
    c->v.f[11] = c->v.f[3] * c->v.f[18];
    c->v.f[13] = c->v.f[1] * c->v.f[18];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[12] * c->v.f[16]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[10] * c->v.f[16]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[2] * c->v.f[20]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[0] * c->v.f[20]);
    c->v.f[9] = c->v.f[8] + c->v.f[9];
    c->v.f[11] = c->v.f[4] + c->v.f[11];
    ST32(c->r[13] + 16u, c->v.s[9]);
    c->v.f[9] = c->v.f[6] + c->v.f[13];
    ST32(c->r[13] + 20u, c->v.s[11]);
    ST32(c->r[13] + 24u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_af43e4; }
    goto L_af4424;
L_af43d8:;
    { uint32_t ea = c->r[5] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af4474; }
L_af43e4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xaf43f4u; rt_dispatch(c);
    c->v.s[8] = LD32(c->r[0] + 48u);
    c->v.s[4] = LD32(c->r[0] + 52u);
    c->v.s[6] = LD32(c->r[0] + 56u);
    c->v.s[14] = LD32(c->r[0] + 32u);
    c->v.s[2] = LD32(c->r[0] + 36u);
    c->v.s[0] = LD32(c->r[0] + 40u);
    c->v.s[7] = LD32(c->r[0] + 16u);
    c->v.s[3] = LD32(c->r[0] + 20u);
    c->v.s[1] = LD32(c->r[0] + 24u);
    c->v.s[12] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.s[5] = LD32(c->r[0]);
L_af4424:;
    c->v.s[11] = c->r[7];
    c->v.s[9] = c->r[9];
    c->v.s[13] = c->r[4];
    c->r[0] = 0x0u;
    c->v.f[7] = c->v.f[7] * c->v.f[11];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[14] * c->v.f[13]);
    c->v.f[3] = c->v.f[3] * c->v.f[11];
    c->v.f[1] = c->v.f[1] * c->v.f[11];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[12] * c->v.f[9]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[9]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[2] * c->v.f[13]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[13]);
    c->v.f[2] = c->v.f[8] + c->v.f[7];
    c->v.f[0] = c->v.f[4] + c->v.f[3];
    ST32(c->r[13], c->v.s[2]);
    c->v.f[2] = c->v.f[6] + c->v.f[1];
    ST32(c->r[13] + 4u, c->v.s[0]);
    ST32(c->r[13] + 8u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_af4474:;
    c->r[3] = c->r[5] + 0x50u;
    c->r[1] = c->r[13] + 0x10u;
    c->r[2] = c->r[13];
    c->r[0] = c->r[8];
    c->r[14] = 0xaf4488u; f_9c5e4c(c);
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_af4494(Cpu *restrict c) {
    FN_ENTER(0xaf4494u);
L_af4494:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->v.s[2] = LD32(c->r[1] + 60u);
    c->v.s[4] = 0x3c8efa36u;
    c->v.s[1] = LD32(c->r[1] + 48u);
    c->v.s[0] = LD32(c->r[1] + 52u);
    { extern float camera_aspect(float); c->v.f[3] = camera_aspect(LDF(c->r[1] + 0x38u)); }
    { extern float camera_fovy(float, float); c->v.f[2] = camera_fovy(c->v.f[2] * c->v.f[4], c->v.f[3]); }
    c->r[14] = 0xaf44b4u; f_9c617c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_af44bc(Cpu *restrict c) {
    FN_ENTER(0xaf44bcu);
L_af44bc:;
    __attribute__((musttail)) return f_a98ab8(c);
}
void f_af44c0(Cpu *restrict c) {
    FN_ENTER(0xaf44c0u);
L_af44c0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xaf44d4u; f_a98744(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf44fcu; f_9bb638(c);
    c->r[1] = 0xc796d7u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xaf4514u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x90u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf4578u; f_9bb638(c);
    c->r[1] = 0xc7da70u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf458cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x94u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf45f0u; f_9bb638(c);
    c->r[1] = 0xc7f3aau;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf4604u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x98u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf4668u; f_9bb638(c);
    c->r[1] = 0xc7f33bu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf467cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x9cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf46e0u; f_9bb638(c);
    c->r[1] = 0xc7f2cdu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf46f4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xa0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf4754u; f_9bb638(c);
    c->r[1] = 0xc7f265u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf4768u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xb0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf47ccu; f_9bb638(c);
    c->r[1] = 0xc7f203u;
    c->r[1] = 0xaf47d8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xc0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_af483c(Cpu *restrict c) {
    FN_ENTER(0xaf483cu);
L_af483c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x118u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af487c; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); } }
L_af487c:;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af48a0; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[0]); } }
L_af48a0:;
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_LT) { goto L_af4fdc; }
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af4fdc; }
    c->r[0] = 0xf48334u;
    c->r[1] = c->r[10];
    { uint32_t ea = 0xaf48c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xaf48d0u; f_dad28c(c);
    c->r[7] = 0xb50u;
    c->r[1] = c->r[4];
    { uint32_t r = c->r[0] * c->r[7] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0xd0u;
    c->pc = c->r[2]; c->r[14] = 0xaf48f0u; rt_dispatch(c);
    { uint32_t r = c->r[8] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_af49f8; }
    c->r[0] = 0xf482f4u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0xaf4908u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xaf4910u; f_dad28c(c);
    { uint32_t r = c->r[0] * c->r[7] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_af49f8; }
    c->r[0] = 0xf482ccu;
    c->r[1] = c->r[10];
    { uint32_t ea = 0xaf4930u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xaf4938u; f_dad28c(c);
    c->r[9] = 0xb50u;
    { uint32_t r = c->r[0] * c->r[9] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x1d1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_af49f8; }
    c->r[0] = 0xf482a0u;
    c->r[1] = c->r[10];
    { uint32_t ea = 0xaf495cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xaf4964u; f_dad28c(c);
    { uint32_t r = c->r[0] * c->r[9] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xaf497cu; f_dad28c(c);
    { uint32_t sc = 0; uint32_t r = c->r[9] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_af4ff8; }
    c->r[9] = 0xb50u;
    c->r[5] = 0x21u;
    { uint32_t r = c->r[0] * c->r[9] + c->r[6]; c->r[0] = r; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x80040000u;
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((uint64_t)(((int64_t)(int32_t)c->r[0] << 32) + (int64_t)(int32_t)c->r[0] * (int32_t)c->r[5]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 12);
    c->r[7] = c->r[1] + (c->r[0] >> 31);
    c->r[0] = 0xf48248u;
    c->r[1] = c->r[10];
    { uint32_t ea = 0xaf49b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xaf49bcu; f_dad28c(c);
    { uint32_t r = c->r[0] * c->r[9] + c->r[6]; c->r[0] = r; }
    c->v.s[0] = c->r[7];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x20cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->r[0] = (uint32_t)((uint64_t)(((int64_t)(int32_t)c->r[0] << 32) + (int64_t)(int32_t)c->r[0] * (int32_t)c->r[5]) >> 32);
    c->v.f[4] = c->v.f[0] + c->v.f[0];
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 12);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    c->v.s[2] = c->r[0];
    c->v.f[6] = (float)(int32_t)c->v.s[2];
    c->v.s[2] = 0x0u;
    c->v.f[0] = c->v.f[6] + c->v.f[6];
    goto L_af4a4c;
L_af49f8:;
    c->r[0] = 0xf481f4u;
    c->r[1] = c->r[10];
    { uint32_t ea = 0xaf4a08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xaf4a10u; f_dad28c(c);
    { uint32_t r = c->r[0] * c->r[7] + c->r[6]; c->r[0] = r; }
    c->r[1] = 0xffdfu;
    c->v.s[2] = 0x41200000u;
    c->r[6] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7ffb0000u;
    { uint32_t ea = c->r[0] + 0x20cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 12);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    c->v.s[0] = c->r[0];
    c->v.f[4] = (float)(int32_t)c->v.s[0];
    c->v.s[0] = 0x0u;
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.s[4] = c->v.s[0];
L_af4a4c:;
    c->v.s[6] = LD32(c->r[4] + 176u);
    c->v.s[8] = LD32(c->r[4] + 180u);
    c->v.s[10] = LD32(c->r[4] + 184u);
    { uint32_t sc = 0; uint32_t r = c->r[8] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[16] = c->v.f[2] * c->v.f[10];
    c->v.f[20] = c->v.f[0] * c->v.f[8];
    c->v.f[18] = c->v.f[4] * c->v.f[6];
    if (COND_EQ) { goto L_af4a7c; }
    c->v.s[0] = 0x40800000u;
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_af4a7c:;
    { uint32_t sc = 0; uint32_t r = c->r[8] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af4a94; }
    c->v.s[0] = 0x40800000u;
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_af4a94:;
    c->r[0] = c->r[13] + 0x90u;
    c->r[1] = c->r[13] + 0xd0u;
    c->r[14] = 0xaf4aa0u; f_4332ac(c);
    c->v.s[1] = LD32(c->r[13] + 160u);
    c->v.s[10] = LD32(c->r[13] + 144u);
    c->v.s[0] = LD32(c->r[13] + 176u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[12] = LD32(c->r[13] + 148u);
    c->v.s[3] = LD32(c->r[4] + 28u);
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->v.s[5] = LD32(c->r[4] + 64u);
    c->v.s[6] = LD32(c->r[13] + 168u);
    c->v.s[14] = LD32(c->r[13] + 152u);
    c->v.s[4] = LD32(c->r[13] + 184u);
    (void)f_subs(c, c->r[6], 0x0u);
    c->v.f[1] = c->v.f[20] * c->v.f[1];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[18] * c->v.f[10]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[8] = c->v.f[20] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[12]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[10] = c->v.f[1] * c->v.f[3];
    c->v.f[6] = c->v.f[20] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[18] * c->v.f[14]);
    c->v.f[0] = c->v.f[10] + c->v.f[5];
    c->v.f[8] = c->v.f[8] * c->v.f[3];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[4]);
    ST32(c->r[4] + 64u, c->v.s[0]);
    c->v.s[12] = LD32(c->r[4] + 68u);
    c->v.f[14] = c->v.f[6] * c->v.f[3];
    c->v.f[2] = c->v.f[8] + c->v.f[12];
    ST32(c->r[4] + 68u, c->v.s[2]);
    c->v.s[12] = LD32(c->r[4] + 72u);
    c->v.f[4] = c->v.f[14] + c->v.f[12];
    ST32(c->r[4] + 72u, c->v.s[4]);
    c->v.s[6] = LD32(c->r[4] + 96u);
    c->v.f[6] = c->v.f[10] + c->v.f[6];
    ST32(c->r[4] + 96u, c->v.s[6]);
    c->v.s[10] = LD32(c->r[4] + 100u);
    c->v.f[10] = c->v.f[8] + c->v.f[10];
    ST32(c->r[4] + 100u, c->v.s[10]);
    c->v.s[8] = LD32(c->r[4] + 104u);
    c->v.f[8] = c->v.f[14] + c->v.f[8];
    ST32(c->r[4] + 104u, c->v.s[8]);
    if (COND_EQ) { goto L_af4c3c; }
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.s[10] = c->r[6];
    c->v.s[12] = LD32(c->r[4] + 184u);
    c->v.s[6] = 0x41200000u;
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[10] * c->v.f[6];
    c->v.f[22] = c->v.f[0] * c->v.f[12];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_af4b90; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xaf4b90u; f_15efddc(c);
L_af4b90:;
    c->v.s[2] = LD32(c->r[4] + 68u);
    c->v.s[12] = LD32(c->r[4] + 100u);
    c->v.s[8] = LD32(c->r[4] + 64u);
    c->v.s[10] = LD32(c->r[4] + 96u);
    c->v.s[6] = LD32(c->r[4] + 72u);
    c->v.s[14] = LD32(c->r[4] + 104u);
    c->v.s[4] = LD32(c->r[4] + 52u);
    c->v.f[16] = c->v.f[12] - c->v.f[2];
    c->v.f[20] = c->v.f[10] - c->v.f[8];
    c->v.f[18] = c->v.f[14] - c->v.f[6];
    c->v.f[4] = c->v.f[4] + c->v.f[4];
    c->v.f[6] = c->v.f[0] - c->v.f[22];
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    vfp_mrs_flags(c);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.s[22] = COND_GT ? c->v.s[0] : c->v.s[22];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_af4bf4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xaf4bf4u; f_15efddc(c);
L_af4bf4:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_af4c18; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
L_af4c18:;
    c->v.s[0] = LD32(c->r[4] + 64u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[20]);
    ST32(c->r[4] + 64u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 68u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[16]);
    ST32(c->r[4] + 68u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 72u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[18]);
    ST32(c->r[4] + 72u, c->v.s[0]);
L_af4c3c:;
    c->r[0] = 0xf47fb0u;
    c->r[1] = c->r[10];
    { uint32_t ea = 0xaf4c4cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xaf4c54u; f_dad28c(c);
    c->r[8] = 0xb50u;
    c->r[1] = c->r[10];
    { uint32_t r = c->r[0] * c->r[8] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x200u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xaf4c70u; f_dad28c(c);
    c->v.s[0] = LD32(c->r[4] + 68u);
    c->v.s[14] = LD32(c->r[4] + 100u);
    c->v.s[2] = LD32(c->r[4] + 72u);
    c->v.s[1] = LD32(c->r[4] + 104u);
    c->v.s[4] = LD32(c->r[4] + 64u);
    c->v.s[12] = LD32(c->r[4] + 96u);
    c->v.s[6] = LD32(c->r[4] + 84u);
    c->v.s[8] = LD32(c->r[4] + 88u);
    c->v.s[10] = LD32(c->r[4] + 80u);
    c->r[1] = 0xffdfu;
    { uint32_t r = c->r[0] * c->r[8] + c->r[6]; c->r[0] = r; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7ffb0000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[5] * (int32_t)c->r[1]) >> 32);
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[14] - c->v.f[0];
    c->v.f[2] = c->v.f[1] - c->v.f[2];
    c->v.f[0] = c->v.f[12] - c->v.f[4];
    c->r[5] = c->r[1] - c->r[5];
    c->r[1] = 0x21u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80040000u;
    c->r[8] = (uint32_t)((int32_t)c->r[5] >> 12);
    c->r[7] = (uint32_t)((uint64_t)(((int64_t)(int32_t)c->r[0] << 32) + (int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->v.f[20] = c->v.f[2] * c->v.f[10];
    c->v.f[18] = c->v.f[14] * c->v.f[8];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[2] * c->v.f[6]);
    c->r[6] = (uint32_t)((int32_t)c->r[7] >> 12);
    c->v.f[28] = c->v.f[0] * c->v.f[6];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[14] * c->v.f[10]);
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_af4d08; }
    c->r[14] = 0xaf4d04u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_af4d08:;
    c->v.s[0] = 0x34000000u;
    c->r[8] = c->r[8] + (c->r[5] >> 31);
    c->r[0] = c->r[6] + (c->r[7] >> 31);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_af4d34; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_af4d34:;
    c->v.s[0] = c->r[0];
    c->v.s[22] = 0x3c8efa36u;
    c->v.s[24] = 0x40400000u;
    c->v.s[26] = 0x3f000000u;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.s[2] = LD32(c->r[4] + 28u);
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    c->v.f[0] = c->v.f[0] / c->v.f[24];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[16] = c->v.f[0] * c->v.f[26];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xaf4d64u; f_15efde8(c);
    c->v.f[30] = c->v.f[20] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->v.s[21] = 0xc0000000u;
    c->v.s[20] = 0x3f800000u;
    c->v.f[17] = c->v.f[28] * c->v.f[28];
    c->v.f[19] = c->v.f[30] * c->v.f[30];
    c->v.f[25] = c->v.f[18] * c->v.f[30];
    c->v.f[23] = c->v.f[19] + c->v.f[17];
    c->r[14] = 0xaf4d90u; f_15efdf4(c);
    c->v.s[8] = c->v.s[20];
    c->v.f[2] = c->v.f[0] * c->v.f[28];
    c->v.f[6] = c->v.f[0] * c->v.f[30];
    c->v.f[4] = c->v.f[18] * c->v.f[28];
    c->v.f[0] = c->v.f[0] * c->v.f[18];
    c->r[5] = 0x0u;
    c->r[7] = 0x3f800000u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[23] * c->v.f[21]);
    c->v.f[12] = c->v.f[4] - c->v.f[6];
    c->v.f[10] = c->v.f[25] + c->v.f[2];
    c->v.f[2] = c->v.f[25] - c->v.f[2];
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    ST32(c->r[13] + 144u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] + c->v.f[10];
    c->v.f[10] = c->v.f[18] * c->v.f[18];
    c->v.f[12] = c->v.f[12] + c->v.f[12];
    c->v.f[2] = c->v.f[2] + c->v.f[2];
    c->v.f[4] = c->v.f[4] + c->v.f[4];
    ST32(c->r[13] + 148u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] + c->v.f[17];
    ST32(c->r[13] + 152u, c->v.s[12]);
    c->v.f[12] = c->v.f[30] * c->v.f[28];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[5]); }
    ST32(c->r[13] + 160u, c->v.s[2]);
    c->v.f[8] = c->v.f[8] + c->v.f[8];
    c->v.f[14] = c->v.f[0] + c->v.f[12];
    c->v.f[0] = c->v.f[12] - c->v.f[0];
    c->v.f[8] = c->v.f[20] - c->v.f[8];
    c->v.f[2] = c->v.f[14] + c->v.f[14];
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    ST32(c->r[13] + 164u, c->v.s[8]);
    ST32(c->r[13] + 168u, c->v.s[2]);
    c->v.f[2] = c->v.f[10] + c->v.f[19];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[5]); }
    ST32(c->r[13] + 176u, c->v.s[4]);
    ST32(c->r[13] + 180u, c->v.s[0]);
    c->v.s[0] = c->r[8];
    c->v.f[2] = c->v.f[2] + c->v.f[2];
    c->v.f[2] = c->v.f[20] - c->v.f[2];
    ST32(c->r[13] + 184u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[7]); }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.s[2] = LD32(c->r[4] + 28u);
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    c->v.f[0] = c->v.f[0] / c->v.f[24];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[16] = c->v.f[0] * c->v.f[26];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xaf4e64u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = 0x0u;
    c->v.f[22] = c->v.f[18] * c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[24] = c->v.f[22] * c->v.f[22];
    c->v.f[28] = c->v.f[18] * c->v.f[22];
    c->v.s[26] = c->v.s[24];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[18] * c->v.f[18]);
    c->r[14] = 0xaf4e88u; f_15efdf4(c);
    c->v.f[2] = c->v.f[0] * c->v.f[22];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[4] = c->v.f[26] + c->v.f[26];
    c->v.f[10] = c->v.f[24] + c->v.f[24];
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x50u;
    c->v.f[6] = c->v.f[28] + c->v.f[2];
    c->v.f[8] = c->v.f[24] - c->v.f[0];
    c->v.f[4] = c->v.f[20] - c->v.f[4];
    c->v.f[2] = c->v.f[28] - c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[24];
    c->v.f[6] = c->v.f[6] + c->v.f[6];
    c->v.f[8] = c->v.f[8] + c->v.f[8];
    ST32(c->r[13] + 80u, c->v.s[4]);
    c->v.f[2] = c->v.f[2] + c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    ST32(c->r[13] + 84u, c->v.s[6]);
    ST32(c->r[13] + 88u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] + c->v.f[10];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[5]); }
    ST32(c->r[13] + 96u, c->v.s[2]);
    c->v.f[8] = c->v.f[20] - c->v.f[8];
    ST32(c->r[13] + 100u, c->v.s[8]);
    ST32(c->r[13] + 104u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    ST32(c->r[13] + 112u, c->v.s[0]);
    ST32(c->r[13] + 116u, c->v.s[2]);
    ST32(c->r[13] + 120u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[7]); }
    c->r[14] = 0xaf4f14u; f_229d48(c);
    c->v.s[3] = LD32(c->r[4] + 64u);
    c->v.s[9] = LD32(c->r[4] + 96u);
    c->v.s[5] = LD32(c->r[4] + 68u);
    c->v.s[11] = LD32(c->r[4] + 100u);
    c->v.s[7] = LD32(c->r[4] + 72u);
    c->v.s[13] = LD32(c->r[4] + 104u);
    c->v.s[6] = LD32(c->r[13] + 40u);
    c->v.s[8] = LD32(c->r[13] + 36u);
    c->v.s[10] = LD32(c->r[13] + 16u);
    c->v.s[12] = LD32(c->r[13] + 20u);
    c->v.s[14] = LD32(c->r[13] + 24u);
    c->v.s[1] = LD32(c->r[13] + 32u);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->v.s[2] = LD32(c->r[13] + 52u);
    c->v.s[4] = LD32(c->r[13] + 48u);
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    c->v.f[11] = c->v.f[11] - c->v.f[5];
    c->v.f[9] = c->v.f[9] - c->v.f[3];
    c->v.f[13] = c->v.f[13] - c->v.f[7];
    c->v.f[15] = c->v.f[1] * c->v.f[11];
    c->v.f[16] = c->v.f[8] * c->v.f[11];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[10] * c->v.f[9]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[12] * c->v.f[9]);
    c->v.f[11] = c->v.f[6] * c->v.f[11];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[14] * c->v.f[9]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[4] * c->v.f[13]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[2] * c->v.f[13]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[0] * c->v.f[13]);
    c->v.f[3] = c->v.f[3] + c->v.f[15];
    c->v.f[5] = c->v.f[5] + c->v.f[16];
    c->v.f[7] = c->v.f[7] + c->v.f[11];
    ST32(c->r[4] + 96u, c->v.s[3]);
    ST32(c->r[4] + 100u, c->v.s[5]);
    ST32(c->r[4] + 104u, c->v.s[7]);
    c->v.s[5] = LD32(c->r[4] + 84u);
    c->v.s[3] = LD32(c->r[4] + 80u);
    c->v.s[7] = LD32(c->r[4] + 88u);
    c->v.f[1] = c->v.f[1] * c->v.f[5];
    c->v.f[8] = c->v.f[8] * c->v.f[5];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[3]);
    c->v.f[6] = c->v.f[6] * c->v.f[5];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[3]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[7]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[7]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[7]);
    ST32(c->r[4] + 80u, c->v.s[1]);
    ST32(c->r[4] + 84u, c->v.s[8]);
    ST32(c->r[4] + 88u, c->v.s[6]);
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
L_af4fdc:;
    c->r[0] = c->r[4];
    c->r[14] = 0xaf4fe4u; f_a98abc(c);
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_af4ff8:;
    c->r[1] = 0xb50u;
    c->v.s[0] = 0x0u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[6]; c->r[0] = r; }
    c->r[1] = 0x21u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80040000u;
    { uint32_t ea = c->r[0] + 0x20cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->v.s[0];
    c->v.s[4] = c->v.s[0];
    c->r[0] = (uint32_t)((uint64_t)(((int64_t)(int32_t)c->r[0] << 32) + (int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 12);
    c->r[6] = c->r[1] + (c->r[0] >> 31);
    goto L_af4a4c;
}
void f_af5050(Cpu *restrict c) {
    FN_ENTER(0xaf5050u);
L_af5050:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_af5054(Cpu *restrict c) {
    FN_ENTER(0xaf5054u);
L_af5054:;
    c->r[0] = 0xf4d0d4u;
    { uint32_t ea = 0xaf5060u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_af5064(Cpu *restrict c) {
    FN_ENTER(0xaf5064u);
L_af5064:;
    return;
}
void f_af5068(Cpu *restrict c) {
    FN_ENTER(0xaf5068u);
L_af5068:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x182be70u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0xaf5094u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[1] = 0xf441b4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    c->r[0] = 0xf4d048u;
    { uint32_t ea = 0xaf50e0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xc7e8b2u;
    c->r[3] = 0xd0u;
    { uint32_t ea = 0xaf50ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaf50f0u + c->r[1];
    c->r[14] = 0xaf50f0u; f_9aedcc(c);
    c->r[1] = 0xf4d040u;
    { uint32_t ea = 0xaf50fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_af511c(Cpu *restrict c) {
    FN_ENTER(0xaf511cu);
L_af511c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[0] = 0xf4d010u;
    { uint32_t ea = 0xaf5130u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf5134u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x100u;
    c->pc = c->r[4]; c->r[14] = 0xaf514cu; rt_dispatch(c);
    c->r[1] = 0xf4cfe8u;
    c->r[2] = 0xf44a70u;
    { uint32_t ea = 0xaf515cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaf5160u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xefu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf8u; ST32(ea, c->r[2]); }
    c->r[2] = 0xffu;
    { uint32_t ea = c->r[0] + 0xf4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[1]); }
    c->r[2] = 0xffu;
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xecu; ST8(ea, c->r[1]); }
    c->r[1] = 0xf438c8u;
    { uint32_t ea = 0xaf5284u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xd4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xedu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xeeu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe8u; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_af52cc(Cpu *restrict c) {
    FN_ENTER(0xaf52ccu);
L_af52cc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf5304u; f_9bb638(c);
    c->r[1] = 0xc7e6e3u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xaf531cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xecu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf537cu; f_9bb638(c);
    c->r[1] = 0xc7d747u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf5390u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf53f4u; f_9bb638(c);
    c->r[1] = 0xc7e5ffu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf5408u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf5468u; f_9bb638(c);
    c->r[1] = 0xc7e590u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf547cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x50u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf54e0u; f_9bb638(c);
    c->r[1] = 0xc7e51eu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf54f4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x90u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf5554u; f_9bb638(c);
    c->r[1] = 0xc7449eu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf5568u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xf0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf55d0u; f_9bb638(c);
    c->r[1] = 0xc7e436u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf55e4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xf4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf5648u; f_9bb638(c);
    c->r[1] = 0xc7e3c9u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf565cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] - 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xefu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf56c8u; f_9bb638(c);
    c->r[1] = 0xc7e353u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf56dcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xedu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf573cu; f_9bb638(c);
    c->r[1] = 0xc7e2e7u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf5750u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xd0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf57b4u; f_9bb638(c);
    c->r[1] = 0xc7e27au;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf57c8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xe0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf582cu; f_9bb638(c);
    c->r[1] = 0xc7e210u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf5840u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xe4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf58a4u; f_9bb638(c);
    c->r[1] = 0xc7e1a5u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf58b8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xeeu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf5918u; f_9bb638(c);
    c->r[1] = 0xc7e146u;
    c->r[1] = 0xaf5924u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xe8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_af59a4(Cpu *restrict c) {
    FN_ENTER(0xaf59a4u);
L_af59a4:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_af59a8(Cpu *restrict c) {
    FN_ENTER(0xaf59a8u);
L_af59a8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xf4c790u;
    { uint32_t ea = 0xaf59b8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf59bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xd0u;
    c->pc = c->r[4]; c->r[14] = 0xaf59d4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xaf59dcu; f_a87958(c);
    c->r[0] = 0xf4c3d4u;
    { uint32_t ea = 0xaf59e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4c3c8u;
    { uint32_t ea = 0xaf59f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf5a04u; f_bf4e20(c);
    c->r[0] = 0xf4c738u;
    c->r[1] = 0xf441b8u;
    { uint32_t ea = 0xaf5a14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xaf5a18u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x63u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x62u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_af5ad4(Cpu *restrict c) {
    FN_ENTER(0xaf5ad4u);
L_af5ad4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xf4c664u;
    { uint32_t ea = 0xaf5ae8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf5af4u; f_bf5058(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a879b4(c);
}
void f_af5b04(Cpu *restrict c) {
    FN_ENTER(0xaf5b04u);
L_af5b04:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xf4c634u;
    { uint32_t ea = 0xaf5b18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf5b24u; f_bf5058(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xaf5b2cu; f_a879b4(c);
    c->r[0] = 0xf4c610u;
    { uint32_t ea = 0xaf5b38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaf5b38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_af5b54(Cpu *restrict c) {
    FN_ENTER(0xaf5b54u);
L_af5b54:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xaf5b68u; f_bf481c(c);
    c->r[0] = c->r[11];
    c->r[14] = 0xaf5b70u; f_9bb638(c);
    c->r[1] = 0xc5d5ddu;
    c->r[8] = 0x0u;
    c->r[1] = 0xaf5b80u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0xf4c5b8u;
    { uint32_t ea = 0xaf5b98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xf4c5a4u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = 0xaf5bb0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf5c04u; f_9bb638(c);
    c->r[1] = 0xc7de78u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xaf5c1cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x70u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf5c80u; f_9bb638(c);
    c->r[1] = 0xc7de05u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf5c94u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x64u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaf5cf8u; f_9bb638(c);
    c->r[1] = 0xc7dd16u;
    c->r[1] = 0xaf5d04u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xc4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_af5d68(Cpu *restrict c) {
    FN_ENTER(0xaf5d68u);
L_af5d68:;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_af5d70(Cpu *restrict c) {
    FN_ENTER(0xaf5d70u);
L_af5d70:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xaf5d8cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xaf5da4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xaf5db4u; f_bf5104(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_af5db8(Cpu *restrict c) {
    FN_ENTER(0xaf5db8u);
L_af5db8:;
    __attribute__((musttail)) return f_bf4818(c);
}
void f_af5dbc(Cpu *restrict c) {
    FN_ENTER(0xaf5dbcu);
L_af5dbc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xaf5dd4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_bf5104(c);
}
void f_af5de8(Cpu *restrict c) {
    FN_ENTER(0xaf5de8u);
L_af5de8:;
    __attribute__((musttail)) return f_bf5058(c);
}
void f_af5dec(Cpu *restrict c) {
    FN_ENTER(0xaf5decu);
L_af5dec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x61u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af5f7c; }
    c->v.s[0] = LD32(c->r[4] + 20u);
    c->v.s[2] = LD32(c->r[4] + 16u);
    c->v.s[4] = LD32(c->r[4] + 24u);
    c->v.s[6] = LD32(c->r[4] + 28u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_af5e40; }
    c->r[14] = 0xaf5e3cu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_af5e40:;
    c->v.s[0] = LD32(c->r[4] + 36u);
    c->v.s[2] = LD32(c->r[4] + 32u);
    c->v.s[4] = LD32(c->r[4] + 40u);
    c->v.s[6] = LD32(c->r[4] + 44u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_af5e78; }
    c->r[14] = 0xaf5e74u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_af5e78:;
    c->v.s[2] = LD32(c->r[4] + 52u);
    c->v.s[0] = LD32(c->r[4] + 48u);
    c->v.s[4] = LD32(c->r[4] + 56u);
    c->v.s[6] = LD32(c->r[4] + 60u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_af5eb0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xaf5eb0u; f_15efddc(c);
L_af5eb0:;
    { uint32_t ea = c->r[5] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xc4u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_af5f7c; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 5);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af5f7c; }
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.s[4] = LD32(c->r[0] + 24u);
    c->v.s[1] = LD32(c->r[0] + 16u);
    c->v.s[6] = LD32(c->r[0] + 28u);
    c->v.s[8] = LD32(c->r[0] + 32u);
    c->r[5] = c->r[0] + 0x40u;
    c->v.s[10] = LD32(c->r[0] + 36u);
    c->v.s[12] = LD32(c->r[0] + 40u);
    c->v.s[14] = LD32(c->r[0] + 44u);
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    c->v.s[3] = LD32(c->r[0] + 48u);
    c->v.s[5] = LD32(c->r[0] + 52u);
    c->v.s[7] = LD32(c->r[0] + 56u);
    c->v.s[9] = LD32(c->r[0] + 60u);
    c->r[0] = c->r[4] + 0x40u;
    c->v.f[1] = c->v.f[16] * c->v.f[1];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    ST32(c->r[4] + 16u, c->v.s[1]);
    ST32(c->r[4] + 20u, c->v.s[2]);
    ST32(c->r[4] + 24u, c->v.s[4]);
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[4] = c->v.f[18] * c->v.f[8];
    ST32(c->r[4] + 28u, c->v.s[2]);
    ST32(c->r[4] + 32u, c->v.s[4]);
    c->v.f[2] = c->v.f[18] * c->v.f[10];
    c->v.f[4] = c->v.f[18] * c->v.f[12];
    ST32(c->r[4] + 36u, c->v.s[2]);
    ST32(c->r[4] + 40u, c->v.s[4]);
    c->v.f[2] = c->v.f[18] * c->v.f[14];
    c->v.f[4] = c->v.f[0] * c->v.f[3];
    ST32(c->r[4] + 44u, c->v.s[2]);
    ST32(c->r[4] + 48u, c->v.s[4]);
    c->v.f[2] = c->v.f[0] * c->v.f[5];
    c->v.f[4] = c->v.f[0] * c->v.f[7];
    c->v.f[0] = c->v.f[0] * c->v.f[9];
    ST32(c->r[4] + 52u, c->v.s[2]);
    ST32(c->r[4] + 56u, c->v.s[4]);
    ST32(c->r[4] + 60u, c->v.s[0]);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); }
L_af5f7c:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_af5f84(Cpu *restrict c) {
    FN_ENTER(0xaf5f84u);
L_af5f84:;
    return;
}
void f_af5f88(Cpu *restrict c) {
    FN_ENTER(0xaf5f88u);
L_af5f88:;
    return;
}
void f_af5f8c(Cpu *restrict c) {
    FN_ENTER(0xaf5f8cu);
L_af5f8c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xf4c1bcu;
    { uint32_t ea = 0xaf5f9cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf5fa0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x78u;
    c->pc = c->r[4]; c->r[14] = 0xaf5fb8u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xaf5fc0u; f_a87958(c);
    c->r[0] = 0xf4bdf0u;
    { uint32_t ea = 0xaf5fccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4bde4u;
    { uint32_t ea = 0xaf5fdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf5fe8u; f_bf4e20(c);
    c->r[0] = 0xf4c168u;
    { uint32_t ea = 0xaf5ff4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_af6024(Cpu *restrict c) {
    FN_ENTER(0xaf6024u);
L_af6024:;
    __attribute__((musttail)) return f_a879b4(c);
}
void f_af6028(Cpu *restrict c) {
    FN_ENTER(0xaf6028u);
L_af6028:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xaf6034u; f_a879b4(c);
    c->r[0] = 0xf4c118u;
    { uint32_t ea = 0xaf6040u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaf6040u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_af6058(Cpu *restrict c) {
    FN_ENTER(0xaf6058u);
L_af6058:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0xaf606cu; f_bf481c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0xaf6074u; f_9bb638(c);
    c->r[1] = 0xc5d0d9u;
    c->r[9] = 0x0u;
    c->r[1] = 0xaf6084u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = 0xf4c0c4u;
    { uint32_t ea = 0xaf609cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xf4c0b0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = 0xaf60b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf6108u; f_9bb638(c);
    c->r[1] = 0xc7d97du;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf611cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x64u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_af6174(Cpu *restrict c) {
    FN_ENTER(0xaf6174u);
L_af6174:;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_af617c(Cpu *restrict c) {
    FN_ENTER(0xaf617cu);
L_af617c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xaf6198u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xaf61b0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xaf61c0u; f_bf5104(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_af61c4(Cpu *restrict c) {
    FN_ENTER(0xaf61c4u);
L_af61c4:;
    __attribute__((musttail)) return f_bf4818(c);
}
void f_af61c8(Cpu *restrict c) {
    FN_ENTER(0xaf61c8u);
L_af61c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xaf61e0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_bf5104(c);
}
void f_af61f4(Cpu *restrict c) {
    FN_ENTER(0xaf61f4u);
L_af61f4:;
    __attribute__((musttail)) return f_bf5058(c);
}
void f_af61f8(Cpu *restrict c) {
    FN_ENTER(0xaf61f8u);
L_af61f8:;
    { uint32_t ea = c->r[0] + 0x61u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x2a8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = 0x0u;
    c->v.s[20] = 0x0u;
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_HI) { goto L_af6508; }
    c->r[3] = (c->r[2] << 2);
    c->r[2] = 0xaf6250u + 0x4u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3] + c->r[2]; switch (c->pc) { case 0xaf6264u: goto L_af6264; case 0xaf6560u: goto L_af6560; case 0xaf6804u: goto L_af6804; case 0xaf6aa8u: goto L_af6aa8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_af6264:;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x498u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_EQ) { goto L_af6288; }
    { uint32_t ea = c->r[4] + 0x494u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    c->r[2] = c->r[2] + (c->r[3] << 5);
L_af6288:;
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x260u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x270u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x274u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x280u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x284u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x288u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x294u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x298u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x1198u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1194u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1190u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1390u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1394u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1398u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2888u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2880u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x2898u;
    c->v.s[0] = LD32(c->r[1] + 64u);
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x2884u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[2] = 0x2878u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[2] = 0x2890u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = 0x2874u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = 0x2894u;
    c->v.s[10] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x2870u;
    c->v.s[17] = c->r[9];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x2868u;
    c->v.s[12] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2864u;
    c->v.s[4] = c->r[14];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x2860u;
    c->v.s[2] = c->r[8];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 68u);
    c->v.s[8] = c->r[3];
    c->v.s[21] = c->r[0];
    c->v.s[16] = c->r[7];
    c->v.s[18] = c->r[2];
    ST32(c->r[13] + 44u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 72u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x260u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    c->v.s[25] = c->r[1];
    ST32(c->r[13] + 40u, c->v.s[0]);
    c->v.s[0] = c->r[6];
    c->r[6] = c->r[12];
    c->v.s[23] = c->r[6];
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x1a0u;
    c->v.f[6] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[21] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[10]);
    c->v.s[4] = c->v.s[6] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 464u, c->v.s[4]);
    ST32(c->r[13] + 468u, c->v.s[2]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 472u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1e0u;
    c->r[14] = 0xaf64a8u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[2] = LD32(c->r[13] + 492u);
    c->v.s[8] = LD32(c->r[13] + 508u);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = LD32(c->r[13] + 524u);
    c->v.s[12] = LD32(c->r[13] + 540u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->v.s[6] = c->r[14];
    c->v.s[4] = c->r[12];
    c->v.s[0] = c->r[0];
    c->v.f[8] = c->v.f[6] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[2] = c->v.f[12] + c->v.f[8];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_af6d4c; }
    c->v.s[8] = 0x3f800000u;
    c->v.f[2] = c->v.f[8] / c->v.f[2];
    goto L_af6d50;
L_af6508:;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 48u, c->v.s[0]);
    ST32(c->r[13] + 44u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->v.d[8] = c->v.d[10];
    goto L_af72e0;
L_af6560:;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x498u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_EQ) { goto L_af6584; }
    { uint32_t ea = c->r[4] + 0x494u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    c->r[2] = c->r[2] + (c->r[3] << 5);
L_af6584:;
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x260u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x270u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x274u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x280u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x284u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x288u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x294u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x298u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x1498u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1494u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1490u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1690u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1694u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1698u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2888u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2880u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x2898u;
    c->v.s[0] = LD32(c->r[1] + 64u);
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x2884u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[2] = 0x2878u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[2] = 0x2890u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = 0x2874u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = 0x2894u;
    c->v.s[10] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x2870u;
    c->v.s[17] = c->r[9];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x2868u;
    c->v.s[12] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2864u;
    c->v.s[4] = c->r[14];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x2860u;
    c->v.s[2] = c->r[8];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 68u);
    c->v.s[8] = c->r[3];
    c->v.s[21] = c->r[0];
    c->v.s[16] = c->r[7];
    c->v.s[18] = c->r[2];
    ST32(c->r[13] + 44u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 72u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x260u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    c->v.s[25] = c->r[1];
    ST32(c->r[13] + 40u, c->v.s[0]);
    c->v.s[0] = c->r[6];
    c->r[6] = c->r[12];
    c->v.s[23] = c->r[6];
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x160u;
    c->v.f[6] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[21] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[10]);
    c->v.s[4] = c->v.s[6] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 400u, c->v.s[4]);
    ST32(c->r[13] + 404u, c->v.s[2]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 408u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1e0u;
    c->r[14] = 0xaf67a4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[2] = LD32(c->r[13] + 492u);
    c->v.s[8] = LD32(c->r[13] + 508u);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = LD32(c->r[13] + 524u);
    c->v.s[12] = LD32(c->r[13] + 540u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->v.s[6] = c->r[14];
    c->v.s[4] = c->r[12];
    c->v.s[0] = c->r[0];
    c->v.f[8] = c->v.f[6] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[2] = c->v.f[12] + c->v.f[8];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_af6eb8; }
    c->v.s[8] = 0x3f800000u;
    c->v.f[2] = c->v.f[8] / c->v.f[2];
    goto L_af6ebc;
L_af6804:;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x498u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_EQ) { goto L_af6828; }
    { uint32_t ea = c->r[4] + 0x494u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    c->r[2] = c->r[2] + (c->r[3] << 5);
L_af6828:;
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x260u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x270u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x274u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x280u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x284u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x288u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x294u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x298u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x1798u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1794u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1790u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1990u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1994u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1998u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2788u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2780u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x2798u;
    c->v.s[0] = LD32(c->r[1] + 64u);
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x2784u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[2] = 0x2778u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[2] = 0x2790u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = 0x2774u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = 0x2794u;
    c->v.s[10] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x2770u;
    c->v.s[17] = c->r[9];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x2768u;
    c->v.s[23] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2764u;
    c->v.s[4] = c->r[14];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x2760u;
    c->v.s[16] = c->r[8];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 68u);
    c->v.s[18] = c->r[3];
    c->v.s[12] = c->r[0];
    c->v.s[2] = c->r[7];
    c->v.s[6] = c->r[2];
    ST32(c->r[13] + 44u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 72u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x260u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    c->v.s[25] = c->r[1];
    ST32(c->r[13] + 40u, c->v.s[0]);
    c->v.s[0] = c->r[6];
    c->r[6] = c->r[12];
    c->v.s[21] = c->r[6];
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x120u;
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[8] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[23] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[10]);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    c->v.s[4] = c->v.s[8] ^ 0x80000000u;
    ST32(c->r[13] + 336u, c->v.s[2]);
    ST32(c->r[13] + 340u, c->v.s[4]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 344u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1e0u;
    c->r[14] = 0xaf6a48u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[2] = LD32(c->r[13] + 492u);
    c->v.s[8] = LD32(c->r[13] + 508u);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = LD32(c->r[13] + 524u);
    c->v.s[12] = LD32(c->r[13] + 540u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->v.s[6] = c->r[14];
    c->v.s[4] = c->r[12];
    c->v.s[0] = c->r[0];
    c->v.f[8] = c->v.f[6] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[2] = c->v.f[12] + c->v.f[8];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_af7000; }
    c->v.s[8] = 0x3f800000u;
    c->v.f[2] = c->v.f[8] / c->v.f[2];
    goto L_af7004;
L_af6aa8:;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x498u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_EQ) { goto L_af6acc; }
    { uint32_t ea = c->r[4] + 0x494u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    c->r[2] = c->r[2] + (c->r[3] << 5);
L_af6acc:;
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x260u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x270u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x274u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x280u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x284u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x288u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x294u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x298u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x1a98u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1a94u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1a90u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1c90u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1c94u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1c98u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2788u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2780u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x2798u;
    c->v.s[0] = LD32(c->r[1] + 64u);
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x2784u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[2] = 0x2778u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[2] = 0x2790u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = 0x2774u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = 0x2794u;
    c->v.s[10] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x2770u;
    c->v.s[17] = c->r[9];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x2768u;
    c->v.s[23] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2764u;
    c->v.s[4] = c->r[14];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x2760u;
    c->v.s[16] = c->r[8];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 68u);
    c->v.s[18] = c->r[3];
    c->v.s[12] = c->r[0];
    c->v.s[2] = c->r[7];
    c->v.s[6] = c->r[2];
    ST32(c->r[13] + 44u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 72u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x260u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    c->v.s[25] = c->r[1];
    ST32(c->r[13] + 40u, c->v.s[0]);
    c->v.s[0] = c->r[6];
    c->r[6] = c->r[12];
    c->v.s[21] = c->r[6];
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xe0u;
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[8] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[23] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[10]);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    c->v.s[4] = c->v.s[8] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[2]);
    ST32(c->r[13] + 276u, c->v.s[4]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1e0u;
    c->r[14] = 0xaf6cecu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[2] = LD32(c->r[13] + 492u);
    c->v.s[8] = LD32(c->r[13] + 508u);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = LD32(c->r[13] + 524u);
    c->v.s[12] = LD32(c->r[13] + 540u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->v.s[6] = c->r[14];
    c->v.s[4] = c->r[12];
    c->v.s[0] = c->r[0];
    c->v.f[8] = c->v.f[6] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[2] = c->v.f[12] + c->v.f[8];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_af7100; }
    c->v.s[8] = 0x3f800000u;
    c->v.f[2] = c->v.f[8] / c->v.f[2];
    goto L_af7104;
L_af6d4c:;
    c->v.s[2] = 0x0u;
L_af6d50:;
    c->v.s[14] = LD32(c->r[13] + 496u);
    c->v.s[1] = LD32(c->r[13] + 500u);
    c->v.s[8] = LD32(c->r[13] + 480u);
    c->v.s[10] = LD32(c->r[13] + 484u);
    c->v.s[12] = LD32(c->r[13] + 488u);
    c->v.s[3] = LD32(c->r[13] + 504u);
    c->v.s[9] = LD32(c->r[13] + 520u);
    c->v.s[13] = LD32(c->r[13] + 516u);
    c->v.s[15] = LD32(c->r[13] + 512u);
    c->v.s[5] = LD32(c->r[13] + 536u);
    c->v.s[7] = LD32(c->r[13] + 532u);
    c->v.s[11] = LD32(c->r[13] + 528u);
    c->r[0] = 0x12d4u;
    c->r[1] = 0x1350u;
    c->r[2] = 0x1188u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4] + c->r[0];
    c->r[2] = c->r[4] + c->r[2];
    c->v.s[28] = c->r[7];
    c->v.s[30] = c->r[3];
    c->v.s[19] = c->r[6];
    c->v.f[14] = c->v.f[6] * c->v.f[14];
    c->v.f[1] = c->v.f[6] * c->v.f[1];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[8] = 0x3f800000u;
    c->v.f[6] = c->v.f[6] * c->v.f[3];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.s[4] = LD32(c->r[0]);
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x1358u;
    c->v.s[12] = LD32(c->r[0]);
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x1354u;
    c->r[1] = c->r[4] + c->r[1];
    c->v.s[3] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[15]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[13]);
    c->v.f[8] = c->v.f[8] - c->v.f[4];
    c->v.f[10] = c->v.f[11] + c->v.f[14];
    c->v.f[0] = c->v.f[7] + c->v.f[1];
    c->v.f[6] = c->v.f[5] + c->v.f[6];
    c->v.s[14] = LD32(c->r[1]);
    c->r[1] = c->r[4] + 0x1180u;
    c->v.s[5] = LD32(c->r[13] + 616u);
    c->v.f[10] = c->v.f[2] * c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[1] = c->v.f[10] * c->v.f[8];
    c->v.f[6] = c->v.f[0] * c->v.f[8];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.s[14] = LD32(c->r[13] + 608u);
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.s[4] = 0x42c80000u;
    c->v.s[3] = 0xc2480000u;
    c->v.s[12] = LD32(c->r[13] + 612u);
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[25] * c->v.f[4]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[17] * c->v.f[4]);
    c->v.f[19] = c->v.f[19] - (float)(c->v.f[23] * c->v.f[4]);
    ST32(c->r[13] + 592u, c->v.s[1]);
    ST32(c->r[13] + 596u, c->v.s[6]);
    ST32(c->r[13] + 600u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1184u;
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.f[10] = c->v.f[1] - c->v.f[10];
    c->v.f[2] = c->v.f[21] * c->v.f[3];
    c->v.f[4] = c->v.f[16] * c->v.f[3];
    c->v.f[6] = c->v.f[18] * c->v.f[3];
    c->v.f[12] = c->v.f[12] * c->v.f[3];
    c->v.f[14] = c->v.f[14] * c->v.f[3];
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[1] = LD32(c->r[2]);
    c->v.s[9] = LD32(c->r[1]);
    c->v.s[7] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[10] * c->v.f[10]);
    c->v.f[8] = c->v.f[8] * c->v.f[8];
    c->v.f[10] = c->v.f[5] * c->v.f[3];
    c->v.f[21] = c->v.f[1] * c->v.f[3];
    c->v.f[25] = c->v.f[7] * c->v.f[3];
    c->v.f[23] = c->v.f[9] * c->v.f[3];
    goto L_af726c;
L_af6eb8:;
    c->v.s[2] = 0x0u;
L_af6ebc:;
    c->v.s[14] = LD32(c->r[13] + 496u);
    c->v.s[1] = LD32(c->r[13] + 500u);
    c->v.s[8] = LD32(c->r[13] + 480u);
    c->v.s[10] = LD32(c->r[13] + 484u);
    c->v.s[12] = LD32(c->r[13] + 488u);
    c->v.s[3] = LD32(c->r[13] + 504u);
    c->v.s[9] = LD32(c->r[13] + 520u);
    c->v.s[13] = LD32(c->r[13] + 516u);
    c->v.s[15] = LD32(c->r[13] + 512u);
    c->v.s[5] = LD32(c->r[13] + 536u);
    c->v.s[7] = LD32(c->r[13] + 532u);
    c->v.s[11] = LD32(c->r[13] + 528u);
    c->r[0] = 0x15d4u;
    c->r[1] = 0x1650u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[4] + 0x1480u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[28] = c->r[7];
    c->v.s[30] = c->r[3];
    c->v.s[19] = c->r[6];
    c->v.f[14] = c->v.f[6] * c->v.f[14];
    c->v.f[1] = c->v.f[6] * c->v.f[1];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[8] = 0x3f800000u;
    c->v.f[6] = c->v.f[6] * c->v.f[3];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.s[4] = LD32(c->r[0]);
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x1658u;
    c->v.s[12] = LD32(c->r[0]);
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x1654u;
    c->r[1] = c->r[4] + c->r[1];
    c->v.s[3] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[15]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[13]);
    c->v.f[8] = c->v.f[8] - c->v.f[4];
    c->v.f[10] = c->v.f[11] + c->v.f[14];
    c->v.f[0] = c->v.f[7] + c->v.f[1];
    c->v.f[6] = c->v.f[5] + c->v.f[6];
    c->v.s[14] = LD32(c->r[1]);
    c->r[1] = 0x1484u;
    c->v.s[5] = LD32(c->r[13] + 616u);
    c->r[1] = c->r[4] + c->r[1];
    c->v.f[10] = c->v.f[2] * c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[1] = c->v.f[10] * c->v.f[8];
    c->v.f[6] = c->v.f[0] * c->v.f[8];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.s[14] = 0x42480000u;
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.s[4] = 0x42c80000u;
    c->v.s[3] = LD32(c->r[13] + 608u);
    c->v.s[12] = LD32(c->r[13] + 612u);
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[25] * c->v.f[4]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[17] * c->v.f[4]);
    c->v.f[19] = c->v.f[19] - (float)(c->v.f[23] * c->v.f[4]);
    ST32(c->r[13] + 592u, c->v.s[1]);
    ST32(c->r[13] + 596u, c->v.s[6]);
    ST32(c->r[13] + 600u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1488u;
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[10] = c->v.f[1] - c->v.f[10];
    c->v.s[1] = 0xc2480000u;
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.f[2] = c->v.f[21] * c->v.f[14];
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[9] = LD32(c->r[1]);
    c->v.s[11] = LD32(c->r[2]);
    c->v.s[7] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    goto L_af7244;
L_af7000:;
    c->v.s[2] = 0x0u;
L_af7004:;
    c->v.s[14] = LD32(c->r[13] + 496u);
    c->v.s[1] = LD32(c->r[13] + 500u);
    c->v.s[8] = LD32(c->r[13] + 480u);
    c->v.s[10] = LD32(c->r[13] + 484u);
    c->v.s[12] = LD32(c->r[13] + 488u);
    c->v.s[3] = LD32(c->r[13] + 504u);
    c->v.s[9] = LD32(c->r[13] + 520u);
    c->v.s[13] = LD32(c->r[13] + 516u);
    c->v.s[15] = LD32(c->r[13] + 512u);
    c->v.s[5] = LD32(c->r[13] + 536u);
    c->v.s[7] = LD32(c->r[13] + 532u);
    c->v.s[11] = LD32(c->r[13] + 528u);
    c->r[0] = 0x18d4u;
    c->r[1] = 0x1950u;
    c->r[2] = c->r[4] + 0x1780u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.f[14] = c->v.f[6] * c->v.f[14];
    c->v.f[1] = c->v.f[6] * c->v.f[1];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[8] = 0x3f800000u;
    c->v.f[6] = c->v.f[6] * c->v.f[3];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.s[4] = LD32(c->r[0]);
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x1958u;
    c->v.s[12] = LD32(c->r[0]);
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x1954u;
    c->r[1] = c->r[4] + c->r[1];
    c->v.s[3] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[15]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[13]);
    c->v.f[8] = c->v.f[8] - c->v.f[4];
    c->v.f[10] = c->v.f[11] + c->v.f[14];
    c->v.f[0] = c->v.f[7] + c->v.f[1];
    c->v.f[6] = c->v.f[5] + c->v.f[6];
    c->v.s[14] = LD32(c->r[1]);
    c->r[1] = 0x1784u;
    c->r[1] = c->r[4] + c->r[1];
    c->v.f[10] = c->v.f[2] * c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[1] = c->v.f[10] * c->v.f[8];
    c->v.f[6] = c->v.f[0] * c->v.f[8];
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.s[4] = 0x42c80000u;
    ST32(c->r[13] + 592u, c->v.s[1]);
    ST32(c->r[13] + 596u, c->v.s[6]);
    ST32(c->r[13] + 600u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1788u;
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    goto L_af71ec;
L_af7100:;
    c->v.s[2] = 0x0u;
L_af7104:;
    c->v.s[1] = LD32(c->r[13] + 500u);
    c->v.s[10] = LD32(c->r[13] + 484u);
    c->v.s[14] = LD32(c->r[13] + 496u);
    c->v.s[8] = LD32(c->r[13] + 480u);
    c->v.s[12] = LD32(c->r[13] + 488u);
    c->v.s[3] = LD32(c->r[13] + 504u);
    c->v.s[13] = LD32(c->r[13] + 516u);
    c->v.s[9] = LD32(c->r[13] + 520u);
    c->v.s[15] = LD32(c->r[13] + 512u);
    c->v.s[7] = LD32(c->r[13] + 532u);
    c->r[0] = 0x1bd4u;
    c->v.s[5] = LD32(c->r[13] + 536u);
    c->v.s[11] = LD32(c->r[13] + 528u);
    c->r[1] = 0x1c50u;
    c->r[2] = c->r[4] + 0x1a80u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.f[1] = c->v.f[6] * c->v.f[1];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[14] = c->v.f[6] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[13]);
    c->v.s[8] = 0x3f800000u;
    c->v.f[6] = c->v.f[6] * c->v.f[3];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.s[4] = LD32(c->r[0]);
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x1c58u;
    c->v.s[12] = LD32(c->r[0]);
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x1c54u;
    c->r[1] = c->r[4] + c->r[1];
    c->v.s[3] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[15]);
    c->v.f[0] = c->v.f[7] + c->v.f[1];
    c->v.f[8] = c->v.f[8] - c->v.f[4];
    c->v.f[10] = c->v.f[11] + c->v.f[14];
    c->v.f[6] = c->v.f[5] + c->v.f[6];
    c->v.s[14] = LD32(c->r[1]);
    c->r[1] = 0x1a84u;
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->r[1] = c->r[4] + c->r[1];
    c->v.f[10] = c->v.f[2] * c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[6] = c->v.f[0] * c->v.f[8];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[1] = c->v.f[10] * c->v.f[8];
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.s[4] = 0x42c80000u;
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    ST32(c->r[13] + 592u, c->v.s[1]);
    ST32(c->r[13] + 596u, c->v.s[6]);
    ST32(c->r[13] + 600u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1a88u;
L_af71ec:;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[14] = 0xc2480000u;
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.f[10] = c->v.f[1] - c->v.f[10];
    c->v.s[3] = LD32(c->r[13] + 624u);
    c->v.s[12] = LD32(c->r[13] + 628u);
    c->v.s[5] = LD32(c->r[13] + 632u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.s[1] = 0x42480000u;
    c->v.s[7] = LD32(c->r[0]);
    c->v.s[9] = LD32(c->r[1]);
    c->v.s[11] = LD32(c->r[2]);
    c->v.s[28] = c->r[7];
    c->v.s[30] = c->r[3];
    c->v.s[19] = c->r[6];
    c->v.f[2] = c->v.f[23] * c->v.f[14];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[25] * c->v.f[4]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[17] * c->v.f[4]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[21] * c->v.f[4]);
L_af7244:;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[10] * c->v.f[10]);
    c->v.f[4] = c->v.f[16] * c->v.f[14];
    c->v.f[6] = c->v.f[18] * c->v.f[14];
    c->v.f[8] = c->v.f[8] * c->v.f[8];
    c->v.f[10] = c->v.f[5] * c->v.f[14];
    c->v.f[12] = c->v.f[12] * c->v.f[14];
    c->v.f[14] = c->v.f[3] * c->v.f[14];
    c->v.f[21] = c->v.f[7] * c->v.f[1];
    c->v.f[25] = c->v.f[9] * c->v.f[1];
    c->v.f[23] = c->v.f[11] * c->v.f[1];
L_af726c:;
    c->v.f[0] = c->v.f[8] + c->v.f[0];
    c->r[0] = c->v.s[14];
    c->r[10] = c->v.s[6];
    c->r[2] = c->v.s[4];
    c->r[4] = c->v.s[2];
    c->r[5] = 0x0u;
    c->v.f[16] = sqrtf(c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[12];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[10];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_af72e0; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    c->r[7] = c->r[3];
    c->r[8] = c->r[12];
    c->r[9] = c->r[14];
    c->r[4] = c->r[2];
    c->r[14] = 0xaf72c4u; f_15efddc(c);
    c->r[2] = c->r[4];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.d[8] = c->v.d[0];
    c->r[14] = c->r[9];
    c->r[12] = c->r[8];
L_af72e0:;
    c->v.s[31] = c->r[6];
    c->v.s[22] = c->r[12];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[27] = c->r[3];
    c->v.s[24] = c->r[14];
    c->v.s[29] = c->r[7];
    c->v.s[18] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[13] + 0x230u;
    c->v.f[0] = c->v.f[22] - c->v.f[31];
    c->v.f[2] = c->v.f[24] - c->v.f[27];
    c->v.s[26] = c->r[0];
    c->r[0] = c->r[13] + 0x224u;
    ST32(c->r[13] + 560u, c->v.s[0]);
    c->v.f[0] = c->v.f[26] - c->v.f[29];
    ST32(c->r[13] + 564u, c->v.s[2]);
    ST32(c->r[13] + 568u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); }
    c->r[2] = c->r[13] + 0x220u;
    c->r[0] = c->r[13] + 0x1e0u;
    c->r[14] = 0xaf733cu; f_af76f4(c);
    c->v.f[4] = c->v.f[27] + c->v.f[24];
    c->v.f[6] = c->v.f[31] + c->v.f[22];
    c->v.s[2] = 0x3f000000u;
    c->v.s[0] = 0x42480000u;
    c->v.s[10] = LD32(c->r[13] + 480u);
    c->v.s[3] = LD32(c->r[13] + 496u);
    c->v.s[14] = LD32(c->r[13] + 488u);
    c->v.s[12] = LD32(c->r[13] + 484u);
    c->v.s[7] = LD32(c->r[13] + 512u);
    c->v.s[13] = LD32(c->r[13] + 516u);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[8] = c->r[6];
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[9]); }
    { float t0 = nftz(vmin_f(nftz(c->v.f[16]), nftz(c->v.f[0]))); float t1 = nftz(vmin_f(nftz(c->v.f[17]), nftz(c->v.f[1]))); c->v.f[8] = t0; c->v.f[9] = t1; }
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.s[6] = LD32(c->r[13] + 500u);
    c->v.f[4] = c->v.f[29] + c->v.f[26];
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 504u);
    c->v.f[8] = c->v.f[0] - c->v.f[8];
    c->v.f[5] = c->v.f[25] - c->v.f[27];
    c->v.f[4] = c->v.f[23] - c->v.f[31];
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.s[1] = c->r[1];
    c->r[1] = c->r[13] + 0xa0u;
    c->v.f[3] = c->v.f[3] * c->v.f[5];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.s[10] = LD32(c->r[13] + 520u);
    c->v.f[11] = c->v.f[21] - c->v.f[29];
    c->v.f[2] = c->v.f[2] * c->v.f[5];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] * c->v.f[5];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[11]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[7] * c->v.f[11]);
    c->v.s[10] = c->r[9];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[13] * c->v.f[11]);
    c->v.s[14] = c->r[0];
    c->r[0] = 0x3f800000u;
    c->v.f[8] = c->v.f[18] - c->v.f[0];
    c->v.f[2] = c->v.f[29] + c->v.f[2];
    c->v.f[4] = c->v.f[31] + c->v.f[3];
    c->v.f[6] = c->v.f[27] + c->v.f[6];
    c->v.f[16] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = c->r[2];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[17] = c->v.f[0] * c->v.f[4];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[19] * c->v.f[8]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[28] * c->v.f[8]);
    c->v.s[4] = c->r[10];
    c->v.f[21] = c->v.f[0] * c->v.f[6];
    c->v.s[0] = c->r[3];
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[30] * c->v.f[8]);
    c->v.s[8] = c->r[6];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[6] = c->r[2];
    c->r[2] = c->r[13] + 0x260u;
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[10] * c->v.f[0];
    c->v.s[10] = c->r[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[6]);
    c->v.s[8] = c->r[7];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.s[12] = c->r[6];
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 576u, c->v.s[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[1] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[10] * c->v.f[14]);
    ST32(c->r[13] + 580u, c->v.s[21]);
    ST32(c->r[13] + 584u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[5]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[14]);
    c->v.s[28] = c->v.s[2] ^ 0x80000000u;
    c->v.s[30] = c->v.s[4] ^ 0x80000000u;
    c->v.s[19] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 208u, c->v.s[28]);
    ST32(c->r[13] + 212u, c->v.s[30]);
    ST32(c->r[13] + 216u, c->v.s[19]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1e0u;
    c->r[14] = 0xaf74dcu; f_229d48(c);
    c->v.s[2] = LD32(c->r[13] + 508u);
    c->v.s[0] = LD32(c->r[13] + 492u);
    c->v.s[4] = LD32(c->r[13] + 524u);
    c->v.s[6] = LD32(c->r[13] + 540u);
    c->v.f[2] = c->v.f[2] * c->v.f[21];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[17]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[16]);
    c->v.f[0] = c->v.f[6] + c->v.f[2];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_af750c; }
    c->v.f[20] = c->v.f[18] / c->v.f[0];
L_af750c:;
    c->v.s[6] = LD32(c->r[13] + 496u);
    c->v.s[0] = LD32(c->r[13] + 480u);
    c->v.s[8] = LD32(c->r[13] + 500u);
    c->v.s[2] = LD32(c->r[13] + 484u);
    c->v.s[12] = LD32(c->r[13] + 512u);
    c->v.s[10] = LD32(c->r[13] + 504u);
    c->v.s[4] = LD32(c->r[13] + 488u);
    c->v.s[14] = LD32(c->r[13] + 528u);
    c->v.s[1] = LD32(c->r[13] + 532u);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[8]); }
    c->r[5] = 0x0u;
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = c->r[13] + 0x260u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[6] = c->v.f[21] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[17] * c->v.f[0]);
    c->v.s[0] = LD32(c->r[13] + 516u);
    c->v.f[8] = c->v.f[21] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[17] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 520u);
    c->v.f[10] = c->v.f[21] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[17] * c->v.f[4]);
    c->v.s[4] = LD32(c->r[13] + 536u);
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[12]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[16] * c->v.f[2]);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 144u, c->v.s[28]);
    ST32(c->r[13] + 148u, c->v.s[30]);
    ST32(c->r[13] + 152u, c->v.s[19]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1e0u;
    c->v.f[0] = c->v.f[14] + c->v.f[6];
    c->v.f[2] = c->v.f[1] + c->v.f[8];
    c->v.f[16] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[4] + c->v.f[10];
    c->v.f[22] = c->v.f[20] * c->v.f[2];
    c->v.f[18] = c->v.f[20] * c->v.f[0];
    ST32(c->r[13] + 576u, c->v.s[16]);
    ST32(c->r[13] + 580u, c->v.s[22]);
    ST32(c->r[13] + 584u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xaf75ecu; f_229d48(c);
    c->v.s[0] = LD32(c->r[13] + 592u);
    c->v.s[20] = LD32(c->r[13] + 48u);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[13] + 596u);
    c->v.s[24] = LD32(c->r[13] + 44u);
    c->v.s[4] = LD32(c->r[13] + 600u);
    c->v.s[26] = LD32(c->r[13] + 40u);
    c->r[1] = c->r[13] + 0x230u;
    c->r[2] = c->r[13] + 0x220u;
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] - c->v.f[20];
    c->v.f[2] = c->v.f[2] - c->v.f[24];
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 544u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] - c->v.f[26];
    ST32(c->r[13] + 548u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1e0u;
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[5]); }
    ST32(c->r[13] + 552u, c->v.s[0]);
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xaf7650u; f_af76f4(c);
    c->v.s[2] = LD32(c->r[13] + 484u);
    c->v.f[8] = c->v.f[22] - c->v.f[24];
    c->v.s[10] = LD32(c->r[13] + 500u);
    c->v.f[14] = c->v.f[16] - c->v.f[20];
    c->v.s[6] = LD32(c->r[13] + 496u);
    c->v.s[0] = LD32(c->r[13] + 480u);
    c->v.s[4] = LD32(c->r[13] + 488u);
    c->v.s[12] = LD32(c->r[13] + 504u);
    c->v.s[1] = LD32(c->r[13] + 512u);
    c->v.f[3] = c->v.f[18] - c->v.f[26];
    c->v.s[5] = LD32(c->r[13] + 516u);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[13] + 0x240u;
    c->v.f[10] = c->v.f[10] * c->v.f[8];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[14]);
    c->v.s[2] = LD32(c->r[13] + 520u);
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[0] = c->v.f[12] * c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[3]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[3]);
    c->v.f[4] = c->v.f[20] + c->v.f[6];
    c->v.f[2] = c->v.f[24] + c->v.f[10];
    c->v.f[0] = c->v.f[26] + c->v.f[0];
    ST32(c->r[13] + 576u, c->v.s[4]);
    ST32(c->r[13] + 580u, c->v.s[2]);
    ST32(c->r[13] + 584u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaf76d0u; f_bd3c58(c);
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x250u;
    c->r[14] = 0xaf76dcu; f_bd3c2c(c);
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    return;
}
void f_af76f4(Cpu *restrict c) {
    FN_ENTER(0xaf76f4u);
L_af76f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[6] = c->r[1];
    c->v.s[16] = c->v.s[0];
    c->v.s[2] = 0x34000000u;
    c->r[5] = c->r[2];
    c->r[4] = c->r[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_af7758; }
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[8] = LD32(c->r[5] + 8u);
    c->v.f[6] = c->v.f[6] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[8] * c->v.f[8]);
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_af77e8; }
L_af7758:;
    c->r[0] = 0xf4246cu;
    { uint32_t ea = 0xaf7764u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_af7760:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_af77e8:;
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_af7800; }
    c->r[14] = 0xaf77fcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_af7800:;
    c->v.s[22] = 0x3f800000u;
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 8u);
    c->v.s[8] = LD32(c->r[6]);
    c->v.s[10] = LD32(c->r[6] + 4u);
    c->v.s[12] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[22] / c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[28] = c->v.f[2] * c->v.f[12];
    c->v.f[19] = c->v.f[2] * c->v.f[10];
    c->v.f[30] = c->v.f[8] * c->v.f[2];
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_af7850; }
    c->r[14] = 0xaf784cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_af7850:;
    c->v.f[2] = c->v.f[22] / c->v.f[2];
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[5] + 8u);
    c->v.f[25] = c->v.f[0] * c->v.f[2];
    c->v.f[21] = c->v.f[2] * c->v.f[6];
    c->v.f[27] = c->v.f[2] * c->v.f[4];
    c->v.f[26] = c->v.f[28] * c->v.f[25];
    c->v.f[24] = c->v.f[19] * c->v.f[21];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[30] * c->v.f[21]);
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[28] * c->v.f[27]);
    c->v.f[17] = c->v.f[30] * c->v.f[27];
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[19] * c->v.f[25]);
    c->v.f[20] = c->v.f[26] * c->v.f[26];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_af78a8; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0xaf78a8u; f_15efddc(c);
L_af78a8:;
    c->v.s[2] = 0x3a83126fu;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_af79f4; }
    c->v.f[18] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_af78d4; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0xaf78d0u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_af78d4:;
    c->v.f[0] = c->v.f[19] * c->v.f[27];
    c->v.s[2] = 0xbf800000u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[25]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[21]);
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[32] = t0; c->v.f[33] = t1; }
    { float t0 = nftz(vmin_f(nftz(c->v.f[32]), nftz(c->v.f[22]))); float t1 = nftz(vmin_f(nftz(c->v.f[33]), nftz(c->v.f[23]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    c->r[14] = 0xaf78f0u; f_15efe24(c);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.s[2] = 0x3f000000u;
    c->v.f[16] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xaf7904u; f_15efde8(c);
    c->v.f[2] = c->v.f[22] / c->v.f[18];
    c->v.s[30] = 0xc0000000u;
    c->v.f[4] = c->v.f[17] * c->v.f[2];
    c->v.f[6] = c->v.f[26] * c->v.f[2];
    c->v.f[2] = c->v.f[24] * c->v.f[2];
    c->v.f[18] = c->v.f[0] * c->v.f[4];
    c->v.f[20] = c->v.f[0] * c->v.f[6];
    c->v.f[28] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = c->v.s[16];
    c->v.f[24] = c->v.f[18] * c->v.f[18];
    c->v.f[26] = c->v.f[20] * c->v.f[20];
    c->v.f[19] = c->v.f[28] * c->v.f[20];
    c->v.f[17] = c->v.f[26] + c->v.f[24];
    c->r[14] = 0xaf793cu; f_15efdf4(c);
    c->v.s[8] = c->v.s[22];
    c->v.f[2] = c->v.f[0] * c->v.f[18];
    c->v.f[6] = c->v.f[0] * c->v.f[20];
    c->v.f[4] = c->v.f[28] * c->v.f[18];
    c->v.f[0] = c->v.f[0] * c->v.f[28];
    c->r[0] = 0x0u;
    c->r[1] = 0x3f800000u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[17] * c->v.f[30]);
    c->v.f[12] = c->v.f[4] - c->v.f[6];
    c->v.f[10] = c->v.f[19] + c->v.f[2];
    c->v.f[2] = c->v.f[19] - c->v.f[2];
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    ST32(c->r[4], c->v.s[8]);
    c->v.f[8] = c->v.f[10] + c->v.f[10];
    c->v.f[10] = c->v.f[28] * c->v.f[28];
    c->v.f[12] = c->v.f[12] + c->v.f[12];
    c->v.f[2] = c->v.f[2] + c->v.f[2];
    c->v.f[4] = c->v.f[4] + c->v.f[4];
    ST32(c->r[4] + 4u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] + c->v.f[24];
    ST32(c->r[4] + 8u, c->v.s[12]);
    c->v.f[12] = c->v.f[20] * c->v.f[18];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[2]);
    c->v.f[8] = c->v.f[8] + c->v.f[8];
    c->v.f[14] = c->v.f[0] + c->v.f[12];
    c->v.f[0] = c->v.f[12] - c->v.f[0];
    c->v.f[8] = c->v.f[22] - c->v.f[8];
    c->v.f[2] = c->v.f[14] + c->v.f[14];
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    ST32(c->r[4] + 20u, c->v.s[8]);
    ST32(c->r[4] + 24u, c->v.s[2]);
    c->v.f[2] = c->v.f[10] + c->v.f[26];
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[4]);
    ST32(c->r[4] + 36u, c->v.s[0]);
    c->v.f[2] = c->v.f[2] + c->v.f[2];
    c->v.f[2] = c->v.f[22] - c->v.f[2];
    ST32(c->r[4] + 40u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_af79f4:;
    c->r[0] = 0xf421d0u;
    { uint32_t ea = 0xaf7a00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_af7760;
}
void f_af7a10(Cpu *restrict c) {
    FN_ENTER(0xaf7a10u);
L_af7a10:;
    return;
}
void f_af7a14(Cpu *restrict c) {
    FN_ENTER(0xaf7a14u);
L_af7a14:;
    return;
}
void f_af7a18(Cpu *restrict c) {
    FN_ENTER(0xaf7a18u);
L_af7a18:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xf4a740u;
    { uint32_t ea = 0xaf7a28u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf7a2cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8830u;
    c->pc = c->r[4]; c->r[14] = 0xaf7a44u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_af7a54(c);
}
void f_af7a50(Cpu *restrict c) {
    FN_ENTER(0xaf7a50u);
L_af7a50:;
    return;
}
void f_af7a54(Cpu *restrict c) {
    FN_ENTER(0xaf7a54u);
L_af7a54:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x34u;
    c->r[9] = c->r[0];
    c->r[14] = 0xaf7a64u; f_b396a8(c);
    c->r[0] = 0xf4a6f0u;
    c->r[1] = 0x2ad0u;
    c->r[2] = c->r[9];
    c->r[8] = 0xfd0u;
    { uint32_t ea = 0xaf7a7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); c->r[2] = c->r[2] + c->r[1]; }
    c->r[0] = 0xf410b8u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = 0xaf7a94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf42128u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xaf7aa8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4a688u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xaf7abcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf42104u;
    { uint32_t ea = 0xaf7accu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xf41078u;
    { uint32_t ea = 0xaf7ad4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_af7ad4:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[9];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[8]; ST32(ea, c->r[0]); c->r[7] = ea; }
    c->r[8] = c->r[8] + 0x100u;
    { uint32_t ea = c->r[7] + 0xdcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0xefu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7] + 0x34u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7] + 0x4cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0xf8u; ST32(ea, c->r[3]); }
    c->r[3] = 0xffu;
    { uint32_t ea = c->r[7] + 0xf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x58u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x5cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x60u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[7] + 0x68u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x78u;
    { uint32_t ea = c->r[7] + 0x6cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x70u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[7] + 0x74u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); }
    c->r[3] = c->r[7] + 0x84u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[12]); }
    c->r[3] = 0xffu;
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + 0xf0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xecu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xedu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xe4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0xeeu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xe8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[7] + 0x100u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_af7ad4; }
    c->r[0] = 0x2ad0u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7c4cu; f_bd1128(c);
    c->r[0] = 0x3830u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7c58u; f_bd1128(c);
    c->r[0] = 0x4590u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7c64u; f_bd1128(c);
    c->r[0] = 0x52f0u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7c70u; f_bd1128(c);
    c->r[7] = 0x6050u;
    c->r[0] = c->r[9] + c->r[7];
    c->r[14] = 0xaf7c7cu; f_a87958(c);
    c->r[1] = 0xf4a134u;
    { uint32_t ea = 0xaf7c88u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[1] + 0x8u;
    c->r[1] = 0xf4a128u;
    { uint32_t ea = c->r[9] + c->r[7]; ST32(ea, c->r[8]); }
    { uint32_t ea = 0xaf7c98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[1] + 0x8u;
    c->r[1] = 0x6080u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[5]); }
    c->r[14] = 0xaf7ca4u; f_bf4e20(c);
    c->r[0] = 0xf4a4a8u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0xaf7cb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x8u;
    c->r[0] = 0x60c0u;
    { uint32_t ea = c->r[9] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x60bcu;
    c->r[7] = 0x60c8u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x60b8u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x60b4u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[9] + c->r[7];
    c->r[14] = 0xaf7ce4u; f_a87958(c);
    c->r[1] = 0x60f8u;
    { uint32_t ea = c->r[9] + c->r[7]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[5]); }
    c->r[14] = 0xaf7cf4u; f_bf4e20(c);
    c->r[0] = 0x6138u;
    { uint32_t ea = c->r[9] + c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x6140u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x6134u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x6130u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x612cu;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[9] + c->r[7];
    c->r[14] = 0xaf7d24u; f_a87958(c);
    c->r[1] = 0x6170u;
    { uint32_t ea = c->r[9] + c->r[7]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[5]); }
    c->r[14] = 0xaf7d34u; f_bf4e20(c);
    c->r[0] = 0x61b0u;
    { uint32_t ea = c->r[9] + c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x61b8u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x61acu;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x61a8u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x61a4u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[9] + c->r[7];
    c->r[14] = 0xaf7d64u; f_a87958(c);
    c->r[1] = 0x61e8u;
    { uint32_t ea = c->r[9] + c->r[7]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[5]); }
    c->r[14] = 0xaf7d74u; f_bf4e20(c);
    c->r[0] = 0x6228u;
    { uint32_t ea = c->r[9] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x6224u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x6220u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x621cu;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x6230u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7da4u; f_bdd82c(c);
    c->r[0] = 0x62e0u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7db0u; f_bdd82c(c);
    c->r[0] = 0x6390u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7dbcu; f_bdd82c(c);
    c->r[0] = 0x6440u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7dc8u; f_bdd82c(c);
    c->r[0] = 0x64f0u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7dd4u; f_bdd82c(c);
    c->r[0] = 0x65a0u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7de0u; f_bdd82c(c);
    c->r[0] = 0x6650u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7decu; f_bdd82c(c);
    c->r[0] = c->r[9] + 0x6700u;
    c->r[14] = 0xaf7df4u; f_bdd82c(c);
    c->r[0] = 0x67b0u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7e00u; f_bdd82c(c);
    c->r[0] = 0x6860u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7e0cu; f_bdd82c(c);
    c->r[0] = 0x6910u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7e18u; f_bdd82c(c);
    c->r[0] = 0x69c0u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7e24u; f_bdd82c(c);
    c->r[0] = 0x6a70u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7e30u; f_bdd82c(c);
    c->r[0] = 0x6b20u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7e3cu; f_bdd82c(c);
    c->r[0] = 0x6bd0u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7e48u; f_bdd82c(c);
    c->r[0] = 0x6c80u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xaf7e54u; f_bdc4ac(c);
    c->r[0] = 0x8820u;
    c->r[0] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7230u;
    c->r[5] = c->r[9] + c->r[0];
    c->r[0] = 0x6f20u;
    c->r[0] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf49f3cu;
    { uint32_t ea = 0xaf7e80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf49f30u;
    { uint32_t ea = 0xaf7e90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4a2acu;
    { uint32_t ea = 0xaf7ea0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf41d20u;
    { uint32_t ea = 0xaf7eb0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
L_af7eac:;
    c->r[0] = c->r[5];
    c->r[14] = 0xaf7eb4u; f_a87958(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xaf7eccu; f_bf4e20(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x0u;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xbcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[5] + 0x70u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x80u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5] + 0x98u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x9cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0xa0u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0xa8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0xacu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x63u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x62u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0xc0u; ST32(ea, c->r[14]); }
    c->r[5] = c->r[5] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_af7eac; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = 0x6d54u;
    c->r[5] = 0x0u;
    c->r[14] = 0x6d34u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x6d58u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    c->r[4] = 0x6d28u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x6d24u;
    c->r[5] = 0x1eu;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x6d20u;
    c->r[5] = 0x2710u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[5] = 0xcccdu;
    c->r[4] = 0x6d2cu;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x3ecc0000u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[5] = 0x999au;
    c->r[4] = 0x6d30u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x3e990000u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x3f000000u;
    { uint32_t ea = c->r[6] + c->r[14]; ST32(ea, c->r[4]); }
    c->r[4] = 0xcccdu;
    c->r[14] = 0x6d38u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x3e4c0000u;
    { uint32_t ea = c->r[6] + c->r[14]; ST32(ea, c->r[4]); }
    c->r[4] = 0xcccdu;
    c->r[14] = 0x6d3cu;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x3dcc0000u;
    { uint32_t ea = c->r[6] + c->r[14]; ST32(ea, c->r[4]); }
    c->r[4] = 0x6d40u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x6d44u;
    c->r[5] = 0x3f000000u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[5] = 0xd70au;
    c->r[4] = 0x6d48u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x3c230000u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x6d4cu;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    c->r[4] = 0x6d50u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x41f00000u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x6e20u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[11]); }
    c->r[4] = 0x6e24u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x6e28u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x6e2cu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x6e30u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[7]); }
    c->r[4] = 0x6e34u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x6e38u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[14]); }
    c->r[5] = c->r[14];
    c->r[4] = 0x6e3cu;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[14]); }
    c->r[4] = 0x6e40u;
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6e44u;
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x6e48u;
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[8]); }
    c->r[0] = 0x6e4cu;
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = 0x6e50u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[10]); }
    c->r[0] = 0x6e54u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x6e58u;
    c->r[2] = 0x6f60u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[3]); }
    c->r[0] = 0x6e5cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = 0x6f24u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x6f28u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x6f2cu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x6f30u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x6f34u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x6f38u;
    c->r[1] = 0x6f5cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x6f3cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[14]); }
    c->r[0] = 0xf41a6cu;
    { uint32_t ea = 0xaf8164u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x6f40u;
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[12]); }
    c->r[0] = 0x6f44u;
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[14]); }
    c->r[0] = 0x6f48u;
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[8]); }
    c->r[0] = 0x6f4cu;
    { uint32_t ea = c->r[3] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = 0x6f50u;
    { uint32_t ea = c->r[3] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x6f54u;
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x6f58u;
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x6f64u;
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x6f68u;
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x6f6cu;
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x6f70u;
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x6f74u;
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x6f78u;
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x6f7cu;
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xd78ee4u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6f80u;
    c->r[2] = 0x10c4u;
    c->r[3] = 0xaf822cu + c->r[3];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[12]); }
    c->r[1] = 0x6f84u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[14]); }
    c->r[1] = 0x6f88u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[8]); }
    c->r[1] = 0x6f8cu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[9]); }
    c->r[1] = 0x6f90u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[6]); }
    c->r[1] = 0x6f94u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[7]); }
    c->r[7] = 0xd78e98u;
    c->r[1] = 0x6f98u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[5]); }
    c->r[1] = 0x6f9cu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[1] = 0x72f4u;
    c->r[7] = 0xaf8278u + c->r[7];
    goto L_af8298;
L_af8278:;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x200u;
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5] + 0x100u; ST32(ea, c->r[6]); }
    c->r[5] = c->r[4] + c->r[1];
    c->r[1] = c->r[1] + 0x1a0u;
    { uint32_t ea = c->r[5] + 0xd0u; ST32(ea, c->r[6]); }
L_af8298:;
    c->r[6] = c->r[3] + c->r[0];
    (void)f_subs(c, c->r[0], 0x6cu);
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[6]); }
    if (COND_NE) { goto L_af8278; }
    c->r[0] = 0x8824u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[3] = 0x71e4u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x71e0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x40800000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = 0x3f000000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x71e8u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x720cu;
    { uint32_t ea = c->r[4] + c->r[3]; ST8(ea, c->r[1]); }
    c->r[3] = 0x7210u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0x7214u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    c->r[3] = 0x7218u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x40400000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0x721cu;
    c->r[7] = 0x40000000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0x7220u;
    c->r[7] = 0x3f800000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0x7224u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0x7228u;
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[2] = 0x999au;
    c->r[1] = 0x71ecu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3e990000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[7]); }
    c->r[1] = 0x71f0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x71f4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x71f8u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x71fcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[7]); }
    c->r[1] = 0x7200u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x7204u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7208u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_af83c8(Cpu *restrict c) {
    FN_ENTER(0xaf83c8u);
L_af83c8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[0];
    c->r[0] = 0xf49d8cu;
    c->r[5] = c->r[8];
    { uint32_t ea = 0xaf83e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d58u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af8400; }
    c->r[14] = 0xaf83f8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_af8400:;
    c->r[0] = 0x8750u;
    c->r[6] = 0xea10u;
    c->r[5] = c->r[8] + c->r[0];
    c->r[0] = 0xf49d30u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = 0xaf841cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + 0x8u;
L_af841c:;
    c->r[4] = c->r[5];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[7]); c->r[4] = c->r[4] - 0xd0u; }
    c->r[14] = 0xaf842cu; f_bf5058(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xaf8434u; f_a879b4(c);
    c->r[6] = f_adds(c, c->r[6], 0xd0u);
    c->r[5] = c->r[4];
    if (COND_NE) { goto L_af841c; }
    c->r[0] = 0x6c80u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf844cu; f_bdc5d0(c);
    c->r[0] = 0x6bd0u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf8458u; f_bdd928(c);
    c->r[0] = 0x6b20u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf8464u; f_bdd928(c);
    c->r[0] = 0x6a70u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf8470u; f_bdd928(c);
    c->r[0] = 0x69c0u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf847cu; f_bdd928(c);
    c->r[0] = 0x6910u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf8488u; f_bdd928(c);
    c->r[0] = 0x6860u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf8494u; f_bdd928(c);
    c->r[0] = 0x67b0u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf84a0u; f_bdd928(c);
    c->r[0] = c->r[8] + 0x6700u;
    c->r[14] = 0xaf84a8u; f_bdd928(c);
    c->r[0] = 0x6650u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf84b4u; f_bdd928(c);
    c->r[0] = 0x65a0u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf84c0u; f_bdd928(c);
    c->r[0] = 0x64f0u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf84ccu; f_bdd928(c);
    c->r[0] = 0x6440u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf84d8u; f_bdd928(c);
    c->r[0] = 0x6390u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf84e4u; f_bdd928(c);
    c->r[0] = 0x62e0u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf84f0u; f_bdd928(c);
    c->r[0] = 0x6230u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf84fcu; f_bdd928(c);
    c->r[0] = 0x61b8u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf8508u; f_a879b4(c);
    c->r[0] = 0x6140u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf8514u; f_a879b4(c);
    c->r[0] = 0x60c8u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf8520u; f_a879b4(c);
    c->r[0] = 0x6050u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf852cu; f_a879b4(c);
    c->r[0] = 0x52f0u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf8538u; f_bd16b4(c);
    c->r[0] = 0x4590u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf8544u; f_bd16b4(c);
    c->r[0] = 0x3830u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf8550u; f_bd16b4(c);
    c->r[0] = 0x2ad0u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xaf855cu; f_bd16b4(c);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_b3992c(c);
}
void f_af8570(Cpu *restrict c) {
    FN_ENTER(0xaf8570u);
L_af8570:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xaf857cu; f_af83c8(c);
    c->r[0] = 0xf49be0u;
    { uint32_t ea = 0xaf8588u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaf8588u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_af85a0(Cpu *restrict c) {
    FN_ENTER(0xaf85a0u);
L_af85a0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x64u;
    c->r[8] = c->r[1];
    c->r[11] = c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0xaf85b8u; f_9bb638(c);
    c->r[1] = 0xc79cd1u;
    c->r[9] = 0x0u;
    c->r[4] = c->r[13] + 0x28u;
    c->r[1] = 0xaf85ccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x900000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0xf49b8cu;
    { uint32_t ea = 0xaf85e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xf49b78u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = 0xaf85fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf49b20u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[11];
    { uint32_t ea = 0xaf8658u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf49b18u;
    { uint32_t ea = 0xaf8664u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0xc6b9adu;
    c->r[2] = 0xaf8670u + c->r[0];
    c->r[0] = 0xc65395u;
    c->r[3] = 0xaf8678u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xaf867cu; f_9af6e4(c);
    c->r[0] = c->r[8];
    c->r[14] = 0xaf8684u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[4]); }
    c->r[12] = c->r[4];
    c->r[2] = c->r[0];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf86e8u; f_9bb638(c);
    c->r[1] = 0xc7b3dau;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf86fcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8000000u;
    c->r[9] = c->r[1] - 0x6u;
    c->r[1] = 0x6d20u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[11]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf8768u; f_9bb638(c);
    c->r[1] = 0xc7b35fu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf877cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x6d24u;
    c->r[9] = 0x0u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf87dcu; f_9bb638(c);
    c->r[1] = 0xc7b2eeu;
    c->r[10] = 0xcu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x8000000u;
    c->r[1] = 0xaf87f8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6d2cu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[10]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf8858u; f_9bb638(c);
    c->r[1] = 0xc7b28cu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf886cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x6d30u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf88ccu; f_9bb638(c);
    c->r[1] = 0xc7b22cu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf88e0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x6d34u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf893cu; f_9bb638(c);
    c->r[1] = 0xc7b1cfu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8950u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x6d38u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf89b0u; f_9bb638(c);
    c->r[1] = 0xc7b16du;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf89c4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x6d3cu;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf8a20u; f_9bb638(c);
    c->r[1] = 0xc7b111u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8a34u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x6d40u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf8a94u; f_9bb638(c);
    c->r[1] = 0xc7b0b0u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8aa8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x6d44u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf8b04u; f_9bb638(c);
    c->r[1] = 0xc7b050u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8b18u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x6d48u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf8b78u; f_9bb638(c);
    c->r[1] = 0xc7aff1u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8b8cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x6d4cu;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf8be8u; f_9bb638(c);
    c->r[1] = 0xc7af96u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8bfcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x6d50u;
    c->r[10] = 0x0u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf8c5cu; f_9bb638(c);
    c->r[1] = 0xc7af34u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8c70u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8000000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x6d28u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf8cd8u; f_9bb638(c);
    c->r[1] = 0xc7aec7u;
    c->r[9] = 0xcu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8cf0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x71e4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf8d54u; f_9bb638(c);
    c->r[1] = 0xc7ae60u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8d68u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x71e8u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf8dc4u; f_9bb638(c);
    c->r[1] = 0xc7adfdu;
    c->r[9] = 0xcu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8ddcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x71ecu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf8e40u; f_9bb638(c);
    c->r[1] = 0xc7ad95u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8e54u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x71f0u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf8eb0u; f_9bb638(c);
    c->r[1] = 0xc7ad33u;
    c->r[9] = 0xcu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8ec8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x71f4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf8f2cu; f_9bb638(c);
    c->r[1] = 0xc7acceu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8f40u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x71f8u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf8f9cu; f_9bb638(c);
    c->r[1] = 0xc7ac6cu;
    c->r[9] = 0xcu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf8fb4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x71fcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf9018u; f_9bb638(c);
    c->r[1] = 0xc7ac04u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf902cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = c->r[11] + 0x7200u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf9084u; f_9bb638(c);
    c->r[1] = 0xc7aba6u;
    c->r[9] = 0xcu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf909cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7204u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf9100u; f_9bb638(c);
    c->r[1] = 0xc7ab41u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf9114u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x7208u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf9170u; f_9bb638(c);
    c->r[1] = 0xc7aae3u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf9184u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x720cu;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf91ecu; f_9bb638(c);
    c->r[1] = 0xc7aa70u;
    c->r[9] = 0xcu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf9204u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7210u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf9264u; f_9bb638(c);
    c->r[1] = 0xc7aa0fu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf9278u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x7214u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf92d8u; f_9bb638(c);
    c->r[1] = 0xc7a9a6u;
    c->r[9] = 0xcu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf92f0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7218u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf9350u; f_9bb638(c);
    c->r[1] = 0xc7a941u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf9364u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x721cu;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf93c4u; f_9bb638(c);
    c->r[1] = 0xc7a8d8u;
    c->r[9] = 0xcu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf93dcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7220u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf943cu; f_9bb638(c);
    c->r[1] = 0xc7a873u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf9450u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x7224u;
    c->r[9] = 0x0u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf94b0u; f_9bb638(c);
    c->r[1] = 0xc7a80eu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf94c4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x7228u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xaf9528u; f_9bb638(c);
    c->r[1] = 0xc7a7abu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf953cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x8000003u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x8824u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xaf9584u; f_9bb638(c);
    c->r[1] = 0xc7a75eu;
    c->r[4] = 0x2u;
    c->r[7] = 0x0u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x900000u;
    c->r[1] = 0xaf959cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x100000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0xf48bd0u;
    { uint32_t ea = 0xaf95b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    goto L_af95e8;
L_af95e8:;
    c->r[1] = 0xf48b8cu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaf95f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0xf48b80u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaf9608u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0xf48b74u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaf9618u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xaf9648u; f_9bb638(c);
    c->r[1] = 0xc7a6b0u;
    c->r[10] = 0x0u;
    c->r[1] = 0xaf9658u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x110000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0xf48b24u;
    { uint32_t ea = 0xaf966cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xf48b18u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaf967cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0xf48b0cu;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaf968cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0xf48b00u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaf969cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf96e8u; f_9bb638(c);
    c->r[1] = 0xc7a610u;
    c->r[9] = 0x1u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x20000u;
    c->r[1] = 0xaf9704u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2ad0u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf9764u; f_9bb638(c);
    c->r[1] = 0xc7a5a2u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf9778u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x3830u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf97d8u; f_9bb638(c);
    c->r[1] = 0xc7a534u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf97ecu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x4590u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf9848u; f_9bb638(c);
    c->r[1] = 0xc7a4cau;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf985cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x52f0u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf98bcu; f_9bb638(c);
    c->r[1] = 0xc7a45cu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaf98d0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); }
    c->r[1] = 0x6c80u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xaf992cu; f_9bb638(c);
    c->r[1] = 0xc61e19u;
    c->r[1] = 0xaf9938u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x8820u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[1] = c->r[8];
    c->r[14] = 0xaf9990u; f_b3b1a8(c);
    c->r[13] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_af9a40(Cpu *restrict c) {
    FN_ENTER(0xaf9a40u);
L_af9a40:;
    c->r[1] = 0x6d54u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_af9a4c(Cpu *restrict c) {
    FN_ENTER(0xaf9a4cu);
L_af9a4c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af9a88; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 3) & 0x7fu;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] >> 3) & 0x7fu;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CS) { return; }
    c->r[2] = 0x6d54u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6d58u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af9a88; }
    __attribute__((musttail)) return f_af9a98(c);
L_af9a88:;
    return;
}
void f_af9a8c(Cpu *restrict c) {
    FN_ENTER(0xaf9a8cu);
L_af9a8c:;
    c->r[1] = 0x6d58u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_af9a98(Cpu *restrict c) {
    FN_ENTER(0xaf9a98u);
L_af9a98:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x6d54u;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af9acc; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] >> 3) & 0x7fu;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 3) & 0x7fu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
L_af9acc:;
    c->r[0] = 0x6d58u;
    c->r[6] = c->r[4];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_af9b10; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af9af8; }
    c->r[14] = 0xaf9af0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_af9af8:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_af9cd8; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    c->r[14] = 0xaf9b0cu; f_a87648(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
L_af9b10:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_af9cd8; }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6d24u;
    c->r[7] = 0xc0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6d2cu;
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6d30u;
    { uint32_t ea = c->r[5] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6d34u;
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6d38u;
    { uint32_t ea = c->r[5] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6d3cu;
    { uint32_t ea = c->r[5] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6d40u;
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6d50u;
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6d44u;
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6d48u;
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6d4cu;
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x71e4u;
    { uint32_t ea = c->r[5] + 0x5b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x71e8u;
    { uint32_t ea = c->r[5] + 0x5b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x71ecu;
    { uint32_t ea = c->r[5] + 0x5b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x71f0u;
    { uint32_t ea = c->r[5] + 0x5bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x71f4u;
    { uint32_t ea = c->r[5] + 0x5c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x71f8u;
    { uint32_t ea = c->r[5] + 0x5c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x71fcu;
    { uint32_t ea = c->r[5] + 0x5c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7200u;
    { uint32_t ea = c->r[5] + 0x5ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7204u;
    { uint32_t ea = c->r[5] + 0x5d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7208u;
    { uint32_t ea = c->r[5] + 0x5d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7210u;
    { uint32_t ea = c->r[5] + 0x5d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7214u;
    { uint32_t ea = c->r[5] + 0x5dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7218u;
    { uint32_t ea = c->r[5] + 0x5e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x721cu;
    { uint32_t ea = c->r[5] + 0x5e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7220u;
    { uint32_t ea = c->r[5] + 0x5e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7224u;
    { uint32_t ea = c->r[5] + 0x5ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x10a0u;
    c->r[5] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
L_af9c70:;
    c->r[2] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[2] - 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { { uint32_t ea = c->r[2] - 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0xffu); }
    if (COND_EQ) { goto L_af9cbc; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf9c90u; f_afa51c(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1du; ST8(ea, c->r[1]); }
L_af9cbc:;
    c->r[7] = c->r[7] + 0x30u;
    c->r[5] = c->r[5] + 0x100u;
    (void)f_subs(c, c->r[7], 0x540u);
    if (COND_NE) { goto L_af9c70; }
    c->r[0] = 0x29c0u;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
L_af9cd8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_af9cdc(Cpu *restrict c) {
    FN_ENTER(0xaf9cdcu);
L_af9cdc:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_af9cfc; }
    c->r[2] = 0xd7748cu;
    c->r[2] = 0xaf9cf4u + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 8);
    c->r[2] = c->r[0] + 0xfd0u;
L_af9cfc:;
    c->r[0] = c->r[2];
    return;
}
void f_af9d08(Cpu *restrict c) {
    FN_ENTER(0xaf9d08u);
L_af9d08:;
    return;
}
void f_af9d0c(Cpu *restrict c) {
    FN_ENTER(0xaf9d0cu);
L_af9d0c:;
    c->r[0] = 0x6u;
    return;
}
void f_af9d14(Cpu *restrict c) {
    FN_ENTER(0xaf9d14u);
L_af9d14:;
    return;
}
void f_af9d18(Cpu *restrict c) {
    FN_ENTER(0xaf9d18u);
L_af9d18:;
    c->r[0] = c->r[0] + (c->r[1] << 8);
    c->r[0] = c->r[0] + 0xfd0u;
    return;
}
void f_af9d24(Cpu *restrict c) {
    FN_ENTER(0xaf9d24u);
L_af9d24:;
    return;
}
void f_af9d28(Cpu *restrict c) {
    FN_ENTER(0xaf9d28u);
L_af9d28:;
    c->r[0] = 0x18u;
    return;
}
void f_af9d30(Cpu *restrict c) {
    FN_ENTER(0xaf9d30u);
L_af9d30:;
    return;
}
void f_af9d34(Cpu *restrict c) {
    FN_ENTER(0xaf9d34u);
L_af9d34:;
    __attribute__((musttail)) return f_b3b1a4(c);
}
void f_af9d38(Cpu *restrict c) {
    FN_ENTER(0xaf9d38u);
L_af9d38:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[5] = c->r[0];
    c->r[0] = 0xf3f6f0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[9] = c->r[1];
    c->r[2] = 0xc79fd0u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0xaf9d60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xaf9d64u + c->r[2];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0xf3f5dcu;
    { uint32_t ea = 0xaf9d78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[7]; c->r[14] = 0xaf9d78u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xaf9d90u; rt_dispatch(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_af9da0; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaf9da0u; f_a87660(c);
L_af9da0:;
    c->r[0] = 0xf3ed98u;
    c->r[10] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xaf9db4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3fdd4u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[10]); }
    { uint32_t ea = 0xaf9dd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2ad0u;
    c->r[7] = c->r[5] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xaf9e08u; f_bd39a8(c);
    c->r[0] = 0x2c70u;
    c->r[1] = 0xbu;
    c->r[11] = 0xbu;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xaf9e1cu; f_bd1030(c);
    c->r[0] = 0x2ed0u;
    c->r[1] = 0xcu;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xaf9e2cu; f_bd1030(c);
    c->r[0] = 0x3130u;
    c->r[1] = 0xdu;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xaf9e3cu; f_bd1030(c);
    c->r[0] = 0x2c54u;
    c->r[1] = 0x3u;
    c->r[6] = 0x5u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2c58u;
    c->r[1] = 0x3e8u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xaf9e60u; f_bd3944(c);
    c->r[0] = 0x6050u;
    c->r[4] = c->r[5];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xaf9e7cu; rt_dispatch(c);
    c->r[0] = 0x60b8u;
    c->r[1] = 0x320u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x60bcu;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x60c0u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xaf9ea8u; rt_dispatch(c);
    c->r[0] = 0x60b4u;
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[11]); c->r[7] = ea; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xaf9ec4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af9eec; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xaf9edcu; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xaf9eecu; f_bf5104(c);
L_af9eec:;
    c->r[0] = 0x3830u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[7] = c->r[5] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xaf9f04u; f_bd39a8(c);
    c->r[0] = 0x39d0u;
    c->r[1] = 0x15u;
    c->r[11] = 0x15u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xaf9f18u; f_bd1030(c);
    c->r[0] = 0x3c30u;
    c->r[1] = 0x16u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xaf9f28u; f_bd1030(c);
    c->r[0] = 0x3e90u;
    c->r[1] = 0x17u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xaf9f38u; f_bd1030(c);
    c->r[0] = 0x39b4u;
    c->r[1] = 0x3e8u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[10]); }
    c->r[0] = 0x39b8u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xaf9f54u; f_bd3944(c);
    c->r[0] = 0x60c8u;
    c->r[4] = c->r[5];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xaf9f70u; rt_dispatch(c);
    c->r[0] = 0x6130u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x6134u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x6138u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x320u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xaf9fa0u; rt_dispatch(c);
    c->r[0] = 0x612cu;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[11]); c->r[6] = ea; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xaf9fbcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_af9fe4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xaf9fd4u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xaf9fe4u; f_bf5104(c);
L_af9fe4:;
    c->r[0] = 0x4590u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[7] = c->r[5] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xaf9ffcu; f_bd39a8(c);
    c->r[0] = 0x4730u;
    c->r[1] = 0x1eu;
    c->r[6] = 0x1eu;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa010u; f_bd1030(c);
    c->r[0] = 0x4990u;
    c->r[1] = 0x1fu;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa020u; f_bd1030(c);
    c->r[0] = 0x4bf0u;
    c->r[1] = 0x20u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa030u; f_bd1030(c);
    c->r[0] = 0x4714u;
    c->r[10] = 0x4u;
    c->r[11] = 0x2u;
    c->r[1] = 0x3e8u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[10]); }
    c->r[0] = 0x4718u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xafa054u; f_bd3944(c);
    c->r[0] = 0x6140u;
    c->r[4] = c->r[5];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xafa070u; rt_dispatch(c);
    c->r[0] = 0x61a8u;
    c->r[1] = 0x320u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x61acu;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x61b0u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xafa09cu; rt_dispatch(c);
    c->r[0] = 0x61a4u;
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[6]); c->r[7] = ea; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xafa0b8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_afa0e0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xafa0d0u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xafa0e0u; f_bf5104(c);
L_afa0e0:;
    c->r[0] = 0x52f0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    c->r[7] = c->r[5] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xafa0fcu; f_bd39a8(c);
    c->r[0] = 0x5490u;
    c->r[1] = 0x28u;
    c->r[8] = 0x28u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa110u; f_bd1030(c);
    c->r[0] = 0x56f0u;
    c->r[1] = 0x29u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa120u; f_bd1030(c);
    c->r[0] = 0x5950u;
    c->r[1] = 0x2au;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa130u; f_bd1030(c);
    c->r[0] = 0x5474u;
    c->r[1] = 0x3e8u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[10]); }
    c->r[0] = 0x5478u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[11]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xafa14cu; f_bd3944(c);
    c->r[0] = 0x61b8u;
    c->r[4] = c->r[5];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xafa168u; rt_dispatch(c);
    c->r[0] = 0x6220u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x6224u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x6228u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x320u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xafa198u; rt_dispatch(c);
    c->r[0] = 0x621cu;
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[8]); c->r[7] = ea; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xafa1b4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_afa1dc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xafa1ccu; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xafa1dcu; f_bf5104(c);
L_afa1dc:;
    c->r[0] = 0x6230u;
    c->r[1] = c->r[5];
    c->r[2] = 0x2u;
    c->r[3] = 0x3e8u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa1f4u; f_bddbc8(c);
    c->r[0] = 0x6390u;
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    c->r[3] = 0x3e8u;
    c->r[4] = 0x1u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa210u; f_bddbc8(c);
    c->r[0] = 0x6440u;
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    c->r[3] = 0x3e8u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa228u; f_bddbc8(c);
    c->r[0] = 0x62e0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x3e8u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa240u; f_bddbc8(c);
    c->r[0] = 0x64f0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x3cu;
    c->r[3] = 0x3e8u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa258u; f_bddbc8(c);
    c->r[0] = 0x65a0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x3du;
    c->r[3] = 0x3e8u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa270u; f_bddbc8(c);
    c->r[0] = 0x6650u;
    c->r[1] = c->r[5];
    c->r[2] = 0x3eu;
    c->r[3] = 0x3e8u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa288u; f_bddbc8(c);
    c->r[0] = c->r[5] + 0x6700u;
    c->r[1] = c->r[5];
    c->r[2] = 0x3fu;
    c->r[3] = 0x3e8u;
    c->r[14] = 0xafa29cu; f_bddbc8(c);
    c->r[0] = 0x67b0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x40u;
    c->r[3] = 0x3e8u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa2b4u; f_bddbc8(c);
    c->r[0] = 0x6860u;
    c->r[1] = c->r[5];
    c->r[2] = 0xdu;
    c->r[3] = 0x4b0u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa2ccu; f_bddbc8(c);
    c->r[0] = 0x68c2u;
    c->r[1] = c->r[5];
    c->r[2] = 0x17u;
    c->r[3] = 0x4b0u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x68c3u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[4]); }
    c->r[0] = 0x6910u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa2f4u; f_bddbc8(c);
    c->r[0] = 0x6972u;
    c->r[1] = c->r[5];
    c->r[2] = 0x20u;
    c->r[3] = 0x4b0u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x6973u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[4]); }
    c->r[0] = 0x69c0u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa31cu; f_bddbc8(c);
    c->r[0] = 0x6a22u;
    c->r[1] = c->r[5];
    c->r[2] = 0x2au;
    c->r[3] = 0x4b0u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x6a23u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[4]); }
    c->r[0] = 0x6a70u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa344u; f_bddbc8(c);
    c->r[0] = 0x6ad2u;
    c->r[1] = c->r[5];
    c->r[2] = 0xau;
    c->r[3] = 0x3e8u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x6ad3u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[4]); }
    c->r[0] = 0x6b20u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa36cu; f_bddbc8(c);
    c->r[0] = 0x6b82u;
    c->r[1] = c->r[5];
    c->r[2] = 0x14u;
    c->r[3] = 0x3e8u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x6b83u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[4]); }
    c->r[0] = 0x6bd0u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xafa394u; f_bddbc8(c);
    c->r[0] = 0x6c32u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x6c33u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[4]); }
    c->r[0] = 0x6c80u;
    c->r[4] = c->r[5] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xafa3c0u; f_bdce40(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x33u;
    c->r[14] = 0xafa3ccu; f_bdcdf0(c);
    c->r[0] = 0x6d14u;
    c->r[1] = 0x102u;
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[5] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x6d18u;
    c->r[1] = 0x142u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x10bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x11bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x12bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x13bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x14bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x15bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x16bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x17bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x18bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x19bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1abfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1bbfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1cbfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1dbfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1ebfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1fbfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x20bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x21bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x22bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x23bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x24bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x25bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x26bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x27bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x28bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x29bfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2abfu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[6]); }
    if (COND_EQ) { goto L_afa4f8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 3) & 0x7fu;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] >> 3) & 0x7fu;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_afa4f8; }
    c->r[0] = 0x6d54u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = 0x6d58u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = c->r[5]; }
    if (COND_NE) { c->r[14] = 0xafa4f8u; f_af9a98(c); }
L_afa4f8:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[13] = c->r[13] + 0x4u; c->r[1] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_af9a98(c);
}
void f_afa51c(Cpu *restrict c) {
    FN_ENTER(0xafa51cu);
L_afa51c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x6d54u;
    c->r[9] = c->r[1];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_afabec; }
    { uint32_t ea = c->r[1] + 0x498u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[9]);
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_afabec; }
    { uint32_t ea = c->r[1] + 0x494u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[2] = c->r[3] + (c->r[2] << 5);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_afabec; }
    { uint32_t ea = c->r[2] + 0x93u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[8], 0xffu);
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    if (COND_HI) { goto L_afa988; }
    c->r[3] = (c->r[8] << 2);
    c->r[7] = 0xafa580u + 0x8u;
    c->r[2] = 0xdu;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3] + c->r[7]; switch (c->pc) { case 0xafa988u: goto L_afa988; case 0xafa998u: goto L_afa998; case 0xafa9a8u: goto L_afa9a8; case 0xafa9b8u: goto L_afa9b8; case 0xafa9c8u: goto L_afa9c8; case 0xafa9d8u: goto L_afa9d8; case 0xafa9e8u: goto L_afa9e8; case 0xafa9f8u: goto L_afa9f8; case 0xafaa08u: goto L_afaa08; case 0xafaa18u: goto L_afaa18; case 0xafaa28u: goto L_afaa28; case 0xafaa38u: goto L_afaa38; case 0xafaa48u: goto L_afaa48; case 0xafaa58u: goto L_afaa58; case 0xafaa68u: goto L_afaa68; case 0xafaa78u: goto L_afaa78; case 0xafaa88u: goto L_afaa88; case 0xafaa98u: goto L_afaa98; case 0xafaaa8u: goto L_afaaa8; case 0xafaab8u: goto L_afaab8; case 0xafaac8u: goto L_afaac8; case 0xafaad8u: goto L_afaad8; case 0xafaae8u: goto L_afaae8; case 0xafaaf8u: goto L_afaaf8; case 0xafab08u: goto L_afab08; case 0xafab18u: goto L_afab18; case 0xafab1cu: goto L_afab1c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_afa988:;
    c->r[2] = 0x1au;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afa998:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afa9a8:;
    c->r[2] = 0x16u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afa9b8:;
    c->r[2] = 0x18u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afa9c8:;
    c->r[2] = 0x17u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afa9d8:;
    c->r[2] = 0xfu;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afa9e8:;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afa9f8:;
    c->r[2] = 0x2u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaa08:;
    c->r[2] = 0x3u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaa18:;
    c->r[2] = 0x10u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaa28:;
    c->r[2] = 0x4u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaa38:;
    c->r[2] = 0x5u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaa48:;
    c->r[2] = 0x6u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaa58:;
    c->r[2] = 0x7u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaa68:;
    c->r[2] = 0x8u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaa78:;
    c->r[2] = 0x9u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaa88:;
    c->r[2] = 0xau;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaa98:;
    c->r[2] = 0xbu;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaaa8:;
    c->r[2] = 0xcu;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaab8:;
    c->r[2] = 0xeu;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaac8:;
    c->r[2] = 0x11u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaad8:;
    c->r[2] = 0x12u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaae8:;
    c->r[2] = 0x13u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afaaf8:;
    c->r[2] = 0x14u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afab08:;
    c->r[2] = 0x15u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_afab24; }
    goto L_afabec;
L_afab18:;
    c->r[2] = 0x19u;
L_afab1c:;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_EQ) { goto L_afabec; }
L_afab24:;
    c->r[0] = c->r[4] + (c->r[2] << 8);
    c->r[3] = 0x10c0u;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[3]; ST32(ea, c->r[9]); }
    c->r[3] = 0x10bfu;
    { uint32_t ea = c->r[0] + c->r[3]; ST8(ea, c->r[7]); }
    c->r[0] = 0xd0u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    c->r[0] = 0x7230u;
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xafab5cu; rt_dispatch(c);
    c->r[0] = 0x72f0u;
    c->r[1] = 0x3e8u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xafab80u; rt_dispatch(c);
    c->r[0] = 0x7294u;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[9]); c->r[6] = ea; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xafab9cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_afabc4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xafabb4u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xafabc4u; f_bf5104(c);
L_afabc4:;
    c->r[0] = 0x7291u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x6d20u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_afabec:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_afabf0(Cpu *restrict c) {
    FN_ENTER(0xafabf0u);
L_afabf0:;
    c->r[1] = 0x6d58u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x6d54u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    __attribute__((musttail)) return f_af9d38(c);
}
void f_afac04(Cpu *restrict c) {
    FN_ENTER(0xafac04u);
L_afac04:;
    __attribute__((musttail)) return f_afac08(c);
}
void f_afac08(Cpu *restrict c) {
    FN_ENTER(0xafac08u);
L_afac08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x6d54u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_afadcc; }
    c->r[0] = 0x10bfu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x11bfu; }
    if (COND_NE) { { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_afadcc; }
    c->r[0] = 0x12bfu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x13bfu; }
    if (COND_NE) { { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_afadcc; }
    c->r[0] = 0x14bfu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x15bfu; }
    if (COND_NE) { { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_afadcc; }
    c->r[0] = 0x16bfu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x17bfu; }
    if (COND_NE) { { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_afadcc; }
    c->r[0] = 0x18bfu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x19bfu; }
    if (COND_NE) { { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_afadcc; }
    c->r[0] = 0x1abfu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1bbfu; }
    if (COND_NE) { { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_afadcc; }
    c->r[0] = 0x1cbfu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_afadcc; }
    c->r[0] = 0x6390u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafacf8u; f_bf552c(c);
    c->r[0] = 0x6440u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad04u; f_bf552c(c);
    c->r[0] = 0x62e0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad10u; f_bf552c(c);
    c->r[0] = 0x2ad0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad1cu; f_bf552c(c);
    c->r[0] = 0x3830u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad28u; f_bf552c(c);
    c->r[0] = 0x4590u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad34u; f_bf552c(c);
    c->r[0] = 0x52f0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad40u; f_bf552c(c);
    c->r[0] = 0x6860u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad4cu; f_bf552c(c);
    c->r[0] = 0x6910u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad58u; f_bf552c(c);
    c->r[0] = 0x69c0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad64u; f_bf552c(c);
    c->r[0] = 0x6a70u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad70u; f_bf552c(c);
    c->r[0] = 0x6c80u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad7cu; f_bdcd88(c);
    c->r[0] = 0x6b20u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad88u; f_bf552c(c);
    c->r[0] = 0x6bd0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xafad94u; f_bf552c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xafad9cu; f_afadd4(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xafada4u; f_afcac8(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xafadacu; f_b09120(c);
    c->r[0] = 0x8824u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = c->r[1] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_afadcc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_afadd0(Cpu *restrict c) {
    FN_ENTER(0xafadd0u);
L_afadd0:;
    return;
}
void f_afadd4(Cpu *restrict c) {
    FN_ENTER(0xafadd4u);
L_afadd4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x120u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1au;
    c->r[4] = c->r[0];
    c->r[14] = 0xafadfcu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[14] = 0xafae0cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x1au;
    c->r[14] = 0xafae1cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x1au;
    c->r[14] = 0xafae2cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[2] = 0x1au;
    c->r[14] = 0xafae3cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[2] = 0x1au;
    c->r[14] = 0xafae4cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[2] = 0x1au;
    c->r[14] = 0xafae5cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x7u;
    c->r[2] = 0x1au;
    c->r[14] = 0xafae6cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x8u;
    c->r[2] = 0x1au;
    c->r[14] = 0xafae7cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[2] = 0x1au;
    c->r[14] = 0xafae8cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x1au;
    c->r[14] = 0xafae9cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xbu;
    c->r[2] = 0x1au;
    c->r[14] = 0xafaeacu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[2] = 0x1au;
    c->r[14] = 0xafaebcu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xfu;
    c->r[2] = 0x1u;
    c->r[14] = 0xafaeccu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x4u;
    c->r[14] = 0xafaedcu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x16u;
    c->r[2] = 0x0u;
    c->r[14] = 0xafaeecu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x17u;
    c->r[2] = 0x0u;
    c->r[14] = 0xafaefcu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x11u;
    c->r[2] = 0x16u;
    c->r[14] = 0xafaf0cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x12u;
    c->r[2] = 0x11u;
    c->r[14] = 0xafaf1cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x13u;
    c->r[2] = 0x12u;
    c->r[14] = 0xafaf2cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x14u;
    c->r[2] = 0x13u;
    c->r[14] = 0xafaf3cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x15u;
    c->r[2] = 0x14u;
    c->r[14] = 0xafaf4cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x15u;
    c->r[14] = 0xafaf5cu; f_b0a2c0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0xeu;
    c->r[14] = 0xafaf6cu; f_b0a2c0(c);
    c->r[0] = 0x6d54u;
    c->r[3] = c->r[4];
    c->r[1] = 0xb06cu;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_afcab4; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[14] = c->r[0] + (c->r[1] << 5);
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_afcab4; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[3]); }
    c->r[12] = c->r[14] + 0x10u;
    c->r[7] = 0x2960u;
    c->v.s[8] = 0x42c80000u;
    { uint32_t ea = c->r[14] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[14] + 64u);
    c->v.s[4] = LD32(c->r[14] + 68u);
    c->v.s[2] = LD32(c->r[14] + 72u);
    c->v.s[0] = LD32(c->r[14] + 76u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[14] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[14] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[14] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = c->r[14] + 0x20u;
    { uint32_t ea = c->r[14]; c->r[5] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[0]); }
    c->r[7] = 0x2964u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[1]); }
    c->r[7] = 0x2968u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[12]); }
    c->r[7] = 0x296cu;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[8]); }
    c->r[7] = 0x2970u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[5]); }
    c->r[7] = 0x2974u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[9]); }
    c->r[7] = 0x2978u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[10]); }
    c->r[7] = 0x297cu;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[14]); }
    c->r[7] = 0x2980u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.s[10] = c->r[14];
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[14]); }
    c->r[7] = 0x2984u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x2988u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[7] = 0x298cu;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.s[10] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[2]); }
    c->r[7] = 0x2990u;
    c->r[7] = c->r[4] + c->r[7];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.s[10] = c->r[3];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.s[10] = c->r[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[7], c->v.s[6]);
    c->r[7] = 0x2994u;
    c->r[7] = c->r[4] + c->r[7];
    ST32(c->r[7], c->v.s[4]);
    c->r[7] = 0x2998u;
    c->r[7] = c->r[4] + c->r[7];
    ST32(c->r[7], c->v.s[2]);
    c->r[7] = 0x299cu;
    c->r[7] = c->r[4] + c->r[7];
    ST32(c->r[7], c->v.s[0]);
    c->r[7] = 0x2920u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[0]); }
    c->r[7] = 0x2924u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[1]); }
    c->r[7] = 0x2928u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[12]); }
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[12]); }
    c->r[7] = 0x292cu;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[12] = c->r[2];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[8]); }
    c->r[7] = 0x2930u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[5]); }
    c->r[7] = 0x2934u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[9]); }
    c->r[7] = 0x2938u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[10]); }
    c->r[7] = 0x293cu;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[7] = 0x2940u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[14]); }
    c->r[7] = 0x2944u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[2]); }
    c->r[7] = 0x2948u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[1]); }
    c->r[7] = 0x294cu;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[12]); }
    c->r[7] = 0x2950u;
    c->r[7] = c->r[4] + c->r[7];
    ST32(c->r[7], c->v.s[6]);
    c->r[7] = 0x2954u;
    c->r[7] = c->r[4] + c->r[7];
    ST32(c->r[7], c->v.s[4]);
    c->r[7] = 0x2958u;
    c->r[7] = c->r[4] + c->r[7];
    ST32(c->r[7], c->v.s[2]);
    c->r[7] = 0x295cu;
    c->r[7] = c->r[4] + c->r[7];
    ST32(c->r[7], c->v.s[0]);
    c->r[7] = 0x28d0u;
    c->r[8] = c->r[4] + c->r[7];
    c->r[7] = 0x29bcu;
    { uint32_t ea = c->r[4] + c->r[7]; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_afb228; }
    goto L_afb17c;
L_afb17c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x28e0u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[0]); }
    c->r[7] = 0x28e4u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[0]); }
    c->r[7] = 0x28e8u;
    c->r[0] = 0x2910u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[5]); }
    c->r[7] = 0x28ecu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[5]); }
    c->r[7] = 0x28f0u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[5]); }
    c->r[7] = 0x28f4u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[5]); }
    c->r[7] = 0x28f8u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[5]); }
    c->r[7] = 0x28fcu;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[7] = 0x2900u;
    c->r[3] = 0x2904u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0x2908u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x290cu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[12]); }
    ST32(c->r[0], c->v.s[6]);
    c->r[0] = 0x2914u;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[4]);
    c->r[0] = 0x2918u;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[2]);
    c->r[0] = 0x291cu;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
L_afb228:;
    c->r[0] = 0x12d0u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[14] = 0xafb234u; f_b0a8fc(c);
    c->r[0] = 0x15d0u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[14] = 0xafb240u; f_b0a8fc(c);
    c->r[0] = 0x18d0u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[14] = 0xafb24cu; f_b0a8fc(c);
    c->r[0] = 0x1bd0u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[14] = 0xafb258u; f_b0a8fc(c);
    c->r[1] = c->r[4] + 0xfd0u;
    c->r[14] = 0xafb260u; f_b0a8fc(c);
    c->r[1] = c->r[8];
    c->r[14] = 0xafb268u; f_b0a8fc(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0xafb280u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x2a20u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a24u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a28u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a2cu;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a30u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a34u;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a38u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a3cu;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a40u;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a44u;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a48u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a4cu;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a50u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a54u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a58u;
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2a5cu;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0xafb354u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x2a60u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a64u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a68u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a6cu;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a70u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a74u;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a78u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a7cu;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a80u;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a84u;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a88u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a8cu;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a90u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a94u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a98u;
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2a9cu;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0xafb428u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x29e0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x29e4u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x29e8u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x29ecu;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x29f0u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x29f4u;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x29f8u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x29fcu;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a00u;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a04u;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a08u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a0cu;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a10u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a14u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x2a18u;
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2a1cu;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0xafb53cu; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x1a58u;
    c->r[2] = 0x1450u;
    c->r[3] = 0x1154u;
    c->r[6] = 0x1454u;
    c->r[10] = 0x6d60u;
    c->r[5] = c->r[4] + c->r[5];
    c->r[2] = c->r[4] + c->r[2];
    c->r[3] = c->r[4] + c->r[3];
    c->r[6] = c->r[4] + c->r[6];
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1150u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[7]); }
    c->r[0] = 0x1060u;
    c->v.s[0] = LD32(c->r[5]);
    c->r[5] = 0x1758u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[7] = LD32(c->r[1]);
    c->r[1] = 0x6de0u;
    c->v.s[5] = LD32(c->r[2]);
    c->v.s[1] = LD32(c->r[6]);
    c->v.s[3] = LD32(c->r[3]);
    c->r[2] = 0x6e14u;
    c->r[3] = 0x6e18u;
    c->r[6] = 0x6e1cu;
    c->r[5] = c->r[4] + c->r[5];
    c->v.s[2] = LD32(c->r[5]);
    c->r[5] = 0x1a54u;
    c->r[5] = c->r[4] + c->r[5];
    c->v.s[4] = LD32(c->r[5]);
    c->r[5] = 0x1754u;
    c->r[5] = c->r[4] + c->r[5];
    c->v.f[9] = c->v.f[5] - c->v.f[7];
    c->v.f[11] = c->v.f[1] - c->v.f[3];
    c->v.f[1] = c->v.f[3] + c->v.f[1];
    c->v.f[5] = c->v.f[7] + c->v.f[5];
    c->v.s[6] = LD32(c->r[5]);
    c->r[5] = 0x1a50u;
    c->r[5] = c->r[4] + c->r[5];
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.s[8] = LD32(c->r[5]);
    c->r[5] = 0x1750u;
    c->r[5] = c->r[4] + c->r[5];
    c->v.s[10] = LD32(c->r[5]);
    c->r[5] = 0x1458u;
    c->r[5] = c->r[4] + c->r[5];
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    c->v.s[12] = LD32(c->r[5]);
    c->r[5] = 0x1158u;
    c->r[5] = c->r[4] + c->r[5];
    c->v.s[14] = LD32(c->r[5]);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1064u;
    c->r[1] = 0x6de4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[10] + c->v.f[8];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1068u;
    c->r[1] = 0x6de8u;
    c->v.f[10] = c->v.f[14] + c->v.f[12];
    c->v.f[7] = c->v.f[12] - c->v.f[14];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x106cu;
    c->r[1] = 0x6decu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1070u;
    c->r[1] = 0x6df0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1074u;
    c->r[1] = 0x6df4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1078u;
    c->r[1] = 0x6df8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x107cu;
    c->r[1] = 0x6dfcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1080u;
    c->r[1] = 0x6e00u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1084u;
    c->r[1] = 0x6e04u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1088u;
    c->r[1] = 0x6e08u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x108cu;
    c->r[1] = 0x6e0cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1090u;
    c->r[1] = 0x6e10u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1094u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x1098u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0x109cu;
    { uint32_t ea = c->r[4] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[6]; ST32(ea, c->r[3]); }
    ST32(c->r[13] + 256u, c->v.s[9]);
    c->v.s[9] = 0x3f000000u;
    c->r[3] = c->r[13] + 0xc0u;
    ST32(c->r[13] + 260u, c->v.s[11]);
    ST32(c->r[13] + 264u, c->v.s[7]);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[7]); }
    c->v.f[18] = c->v.f[1] * c->v.f[9];
    c->v.f[16] = c->v.f[5] * c->v.f[9];
    c->v.f[20] = c->v.f[10] * c->v.f[9];
    c->v.s[2] = c->v.s[18];
    c->v.s[6] = c->v.s[16];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[9]);
    c->v.s[4] = c->v.s[20];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[8] * c->v.f[9]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[0] * c->v.f[9]);
    ST32(c->r[13] + 272u, c->v.s[6]);
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[13] + 0x110u;
    c->r[2] = c->r[13] + 0x100u;
    c->r[3] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + c->r[10];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[14] = 0xafb7ecu; f_bf5c58(c);
    c->r[0] = 0x6d8cu;
    c->r[3] = 0x6d64u;
    c->r[2] = 0x6d68u;
    c->r[1] = 0x6d6cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d88u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d84u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d80u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x6d7cu;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x6d78u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x6d74u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = 0x6d70u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + c->r[10]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + c->r[3]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2860u;
    c->r[3] = 0x2880u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[10]); }
    c->r[0] = 0x2864u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[8]); }
    c->r[0] = 0x2868u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x286cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2870u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x2874u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[12]); }
    c->r[0] = 0x2878u;
    c->r[12] = 0x288cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[14]); }
    c->r[0] = 0x287cu;
    c->r[14] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[9]); }
    c->r[9] = 0x2884u;
    c->r[3] = 0x2898u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[4] + c->r[3];
    c->r[3] = 0x2894u;
    c->r[0] = c->r[4] + c->r[3];
    c->r[3] = 0x2890u;
    c->r[3] = c->r[4] + c->r[3];
    { uint32_t ea = c->r[4] + c->r[9]; ST32(ea, c->r[2]); }
    c->r[2] = 0x2888u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    ST32(c->r[3], c->v.s[16]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    ST32(c->r[0], c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    ST32(c->r[5], c->v.s[20]);
    c->r[0] = 0x289cu;
    c->r[3] = c->r[4];
    c->r[5] = 0x3f800000u;
    { uint32_t ea = c->r[3] + c->r[0]; ST32(ea, c->r[5]); c->r[3] = ea; }
    c->r[0] = c->r[10];
    c->r[5] = 0x3f800000u;
    { uint32_t ea = c->r[3] - 0x7cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[3] - 0x78u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] - 0x74u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] - 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] - 0x6cu; ST32(ea, c->r[6]); }
    c->r[10] = c->r[8];
    c->r[8] = c->r[7];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] - 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] - 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3] - 0x60u; ST32(ea, c->r[14]); }
    c->r[14] = c->r[2];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] - 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[3] - 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[3] - 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] - 0x40u; ST32(ea, c->r[5]); }
    ST32(c->r[3] - 76u, c->v.s[16]);
    ST32(c->r[3] - 72u, c->v.s[18]);
    ST32(c->r[3] - 68u, c->v.s[20]);
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_afba38; }
    c->r[5] = 0x27e0u;
    c->r[6] = 0x27e8u;
    c->r[2] = 0x27ecu;
    c->r[1] = 0x27f0u;
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[0]); }
    c->r[5] = 0x27e4u;
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + c->r[6]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x27f4u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x27f8u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x27fcu;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2800u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2804u;
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[12]); }
    c->r[0] = 0x2808u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = 0x280cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[14]); }
    c->r[0] = 0x2810u;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[16]);
    c->r[0] = 0x2814u;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[18]);
    c->r[0] = 0x2818u;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[20]);
    c->r[0] = 0x281cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
L_afba38:;
    c->r[2] = 0x6e1cu;
    c->r[0] = 0x288cu;
    c->r[1] = 0x2870u;
    c->r[12] = c->r[4] + 0x2880u;
    c->r[7] = 0x0u;
    c->r[2] = c->r[4] + c->r[2];
    c->r[10] = c->r[4] + c->r[0];
    c->r[0] = 0x2888u;
    c->r[6] = c->r[4] + c->r[1];
    c->r[1] = 0x286cu;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    c->r[2] = 0x6e18u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[5] = c->r[4] + c->r[1];
    c->r[1] = 0x2868u;
    c->r[2] = c->r[4] + c->r[2];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2884u;
    c->r[14] = c->r[4] + c->r[1];
    c->r[1] = 0x2864u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    c->r[2] = 0x6e14u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[2] = c->r[4] + c->r[2];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x287cu;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    c->r[2] = 0x6e10u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[2] = c->r[4] + c->r[2];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2878u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[3] - 0x7cu;
    c->r[9] = c->r[4] + c->r[0];
    c->r[0] = 0x2874u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    c->r[8] = c->r[4] + c->r[0];
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x2860u;
    { uint32_t ea = c->r[4] + 0x498u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_afbaf8; }
    { uint32_t ea = c->r[4] + 0x494u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[7] = c->r[7] + (c->r[2] << 5);
L_afbaf8:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x6d84u;
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x6ddcu;
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x6dd8u;
    c->r[14] = c->r[4] + c->r[6];
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x6da4u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x6d78u;
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x6d80u;
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x6da0u;
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = 0x6d88u;
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x6d74u;
    { uint32_t ea = c->r[7] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2760u;
    c->r[7] = 0x6d70u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[12]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2764u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2768u;
    c->r[1] = 0x6da8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x276cu;
    c->r[1] = 0x6dacu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2770u;
    c->r[1] = 0x6db0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2774u;
    c->r[1] = 0x6db4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2778u;
    c->r[1] = 0x6db8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x277cu;
    c->r[1] = 0x6dbcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2780u;
    c->r[1] = 0x6dc0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2784u;
    c->r[1] = 0x6dc4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2788u;
    c->r[1] = 0x6dc8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x278cu;
    c->r[1] = 0x6dccu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x6dd0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x6dd4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    c->v.s[5] = c->r[1];
    c->r[1] = 0x6da4u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[5]); }
    c->v.s[7] = c->r[5];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x6d98u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[6]); }
    c->v.s[3] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[7]); }
    c->v.s[8] = c->r[7];
    { uint32_t ea = c->r[4] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[3]); }
    c->v.s[14] = c->r[3];
    { uint32_t ea = c->r[4] + c->r[8]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[8]); }
    c->v.s[2] = c->r[8];
    c->r[8] = 0x3f800000u;
    { uint32_t ea = c->r[4] + c->r[9]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[9]); }
    c->v.s[4] = c->r[9];
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[2]); }
    c->v.s[10] = c->r[2];
    { uint32_t ea = c->r[4] + c->r[10]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[10]); }
    c->v.s[0] = c->r[10];
    c->v.s[6] = LD32(c->r[0]);
    c->r[0] = 0x6d90u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[12] = LD32(c->r[0]);
    c->r[0] = 0x6d94u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[1] = LD32(c->r[0]);
    c->v.f[7] = c->v.f[7] * c->v.f[1];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] * c->v.f[1];
    c->v.f[10] = c->v.f[10] * c->v.f[1];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.s[2] = c->v.s[7] ^ 0x80000000u;
    ST32(c->r[13] + 240u, c->v.s[2]);
    c->v.s[0] = c->v.s[14] ^ 0x80000000u;
    c->v.s[2] = c->v.s[10] ^ 0x80000000u;
    ST32(c->r[13] + 244u, c->v.s[0]);
    ST32(c->r[13] + 248u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->v.s[6] = c->r[0];
    c->r[0] = 0x6dd4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x6da8u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[2]); }
    c->v.s[12] = c->r[2];
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = 0x6db0u;
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[10]); }
    c->v.s[1] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x6db4u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    c->v.s[14] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x6db8u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[7]); }
    c->v.s[8] = c->r[7];
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x6dc0u;
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x6dc4u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x6dc8u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[3]); }
    c->v.s[2] = c->r[3];
    c->r[3] = 0x6dd0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[4] + c->r[3];
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->v.s[10] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[3]);
    c->v.s[0] = LD32(c->r[14]);
    c->r[0] = 0x1e20u;
    c->v.f[12] = c->v.f[12] * c->v.f[10];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[6] * c->v.f[4]);
    c->v.s[6] = c->r[5];
    c->v.f[8] = c->v.f[8] * c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.s[10] = c->r[12];
    c->v.s[14] = c->r[1];
    c->r[5] = c->r[13] + 0xc0u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[13] + 0x40u;
    c->r[2] = c->r[5];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[1] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[0]);
    c->v.s[4] = c->v.s[12] ^ 0x80000000u;
    c->v.s[0] = c->v.s[8] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 176u, c->v.s[4]);
    ST32(c->r[13] + 180u, c->v.s[0]);
    ST32(c->r[13] + 184u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[8]); }
    c->r[14] = 0xafbea0u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6e20u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e24u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e28u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e2cu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e30u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e34u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e38u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e3cu;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e40u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e44u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e48u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e4cu;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e50u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e54u;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e58u;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e5cu;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xafbf70u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6e60u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e64u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e68u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e6cu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e70u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e74u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e78u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e7cu;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e80u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e84u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e88u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e8cu;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e90u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e94u;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e98u;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6e9cu;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f20u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0xafc044u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6ea0u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ea4u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ea8u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6eacu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6eb0u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6eb4u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6eb8u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ebcu;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ec0u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ec4u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ec8u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6eccu;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ed0u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ed4u;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ed8u;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6edcu;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2020u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0xafc118u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6ee0u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ee4u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ee8u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6eecu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ef0u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ef4u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ef8u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6efcu;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f00u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f04u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f08u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f0cu;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f10u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f14u;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f18u;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f1cu;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2120u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0xafc1ecu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6fa0u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fa4u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fa8u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6facu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fb0u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fb4u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fb8u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fbcu;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fc0u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fc4u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fc8u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fccu;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fd0u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fd4u;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fd8u;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fdcu;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2220u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0xafc2c0u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6fe0u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fe4u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fe8u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6fecu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ff0u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ff4u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ff8u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ffcu;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7000u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7004u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7008u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x700cu;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7010u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7014u;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7018u;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x701cu;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2320u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0xafc394u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7020u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7024u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7028u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x702cu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7030u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7034u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7038u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x703cu;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7040u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7044u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7048u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x704cu;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7050u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7054u;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7058u;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x705cu;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2420u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0xafc468u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7060u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7064u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7068u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x706cu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7070u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7074u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7078u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x707cu;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7080u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7084u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7088u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x708cu;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7090u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7094u;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7098u;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x709cu;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2520u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0xafc53cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x70a0u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70a4u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70a8u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70acu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70b0u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70b4u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70b8u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70bcu;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70c0u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70c4u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70c8u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70ccu;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70d0u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70d4u;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70d8u;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70dcu;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2620u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0xafc610u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6f20u;
    c->r[2] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f24u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f28u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f2cu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f30u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f34u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f38u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f3cu;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f40u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f44u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f48u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f4cu;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f50u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f54u;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f58u;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f5cu;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2720u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0xafc6e4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6f60u;
    c->r[10] = 0x711cu;
    c->r[5] = 0x7120u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f64u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f68u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f6cu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f70u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f74u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f78u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f7cu;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f80u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f84u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f88u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f8cu;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f90u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f94u;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f98u;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f9cu;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3d414u;
    c->r[1] = 0x70e0u;
    { uint32_t ea = 0xafc7bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x70e4u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x70e8u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x70ecu;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x70f0u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x70f4u;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x70f8u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x70fcu;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x7100u;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[9]); }
    c->r[1] = 0x7104u;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[8]); }
    c->r[1] = 0x7108u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[6]); }
    c->r[1] = 0x710cu;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[14]); }
    c->r[1] = 0x7110u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[12]); }
    c->r[1] = 0x7114u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x7118u;
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[10]; ST32(ea, c->r[1]); }
    c->r[10] = 0x7198u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x7124u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x7128u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x712cu;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x7130u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x7134u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x7138u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x713cu;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x7140u;
    c->r[7] = 0x7150u;
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[9]); }
    c->r[5] = 0x7144u;
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[8]); }
    c->r[5] = 0x7148u;
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[6]); }
    c->r[5] = 0x714cu;
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[12]); }
    c->r[7] = 0x7154u;
    c->r[5] = 0x719cu;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[3] = 0x7158u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0x715cu;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7160u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x7164u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x7168u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x716cu;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x7170u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x7174u;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x7178u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x717cu;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[9]); }
    c->r[1] = 0x7180u;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[8]); }
    c->r[1] = 0x7184u;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[14]); }
    c->r[1] = 0x7188u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[6]); }
    c->r[1] = 0x718cu;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[12]); }
    c->r[1] = 0x7190u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x7194u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[10]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[0]); }
    c->r[5] = 0x71a0u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x71a4u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x71a8u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x71acu;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x71b0u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x71b4u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x71b8u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[7]); }
    c->r[5] = 0x71bcu;
    c->r[7] = 0x71c8u;
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[9]); }
    c->r[5] = 0x71c0u;
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[8]); }
    c->r[5] = 0x71c4u;
    { uint32_t ea = c->r[4] + c->r[5]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x71ccu;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[12]); }
    c->r[7] = 0x71d0u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[3] = 0x71d4u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0x71d8u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x71dcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xafcab4u; rt_dispatch(c);
L_afcab4:;
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
