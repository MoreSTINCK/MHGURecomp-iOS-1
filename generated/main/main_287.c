#include "cpu.h"
#include "neon_rt.h"
void f_a1f7a4(Cpu *c);
void f_1426eb8(Cpu *c);
void f_1428fb8(Cpu *c);
void f_1429008(Cpu *c);
void f_14297a4(Cpu *c);
void f_14297ec(Cpu *c);
void f_142b194(Cpu *c);
void f_142ca44(Cpu *c);
void f_142cb94(Cpu *c);
void f_142ce4c(Cpu *c);
void f_1452ca0(Cpu *c);
void f_1455408(Cpu *c);
void f_14556d4(Cpu *c);
void f_14580ec(Cpu *c);
void f_14584b8(Cpu *c);
void f_14585e8(Cpu *c);
void f_145ccc0(Cpu *c);
void f_145f3bc(Cpu *c);
void f_145f5d8(Cpu *c);
void f_145ff9c(Cpu *c);
void f_14600a4(Cpu *c);
void f_1488914(Cpu *c);
void f_1488cdc(Cpu *c);
void f_148a2e4(Cpu *c);
void f_148aa30(Cpu *c);
void f_148ab58(Cpu *c);
void f_148f0ec(Cpu *c);
void f_148f0f4(Cpu *c);
void f_148f164(Cpu *c);
void f_148f234(Cpu *c);
void f_148f390(Cpu *c);
void f_148f424(Cpu *c);
void f_148f42c(Cpu *c);
void f_148f434(Cpu *c);
void f_148f490(Cpu *c);
void f_1455b3c(Cpu *restrict c) {
    FN_ENTER(0x1455b3cu);
L_1455b3c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x3f4u;
    c->r[10] = c->r[0];
    c->r[0] = 0x5eb4c4u;
    { uint32_t ea = 0x1455b54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1455ba4; }
    c->r[0] = 0x5eb4b8u;
    { uint32_t ea = 0x1455b68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1455b6cu; f_a1f7a4(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1455bb0; }
    c->r[1] = 0x5eb498u;
    { uint32_t ea = 0x1455b84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 2);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { goto L_1455bdc; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    goto L_1455bbc;
L_1455ba4:;
    c->r[0] = 0x5eb46cu;
    { uint32_t ea = 0x1455bb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_1455bb8;
L_1455bb0:;
    c->r[0] = 0x5eb460u;
    { uint32_t ea = 0x1455bbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_1455bb8:;
    c->r[0] = c->r[0] + 0x14u;
L_1455bbc:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1455bf8; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; } }
    goto L_1455bf8;
L_1455bdc:;
    c->r[0] = 0x33083du;
    c->r[1] = 0x47u;
    c->r[2] = 0xe0000003u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[0] = 0x1455bf8u + c->r[0];
    c->r[14] = 0x1455bf8u; f_1429008(c);
L_1455bf8:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x1455c08u; rt_dispatch(c);
    c->r[0] = 0x5eb400u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x1455c18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1455c68; }
    c->r[0] = 0x5eb3f4u;
    { uint32_t ea = 0x1455c2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1455c30u; f_a1f7a4(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1455c74; }
    c->r[1] = 0x5eb3d4u;
    { uint32_t ea = 0x1455c48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 2);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { goto L_1457f80; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    goto L_1455c80;
L_1455c68:;
    c->r[0] = 0x5eb3a8u;
    { uint32_t ea = 0x1455c74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_1455c7c;
L_1455c74:;
    c->r[0] = 0x5eb39cu;
    { uint32_t ea = 0x1455c80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_1455c7c:;
    c->r[0] = c->r[0] + 0xcu;
L_1455c80:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xe9u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_1457f44; }
    c->r[0] = c->r[13] + 0x310u;
    c->r[8] = c->r[13] + 0x3c4u;
    c->r[7] = c->r[10] + 0x2cu;
    c->r[6] = c->r[13] + 0x304u;
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[10]); }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x278u;
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x32cu;
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x348u;
    c->r[2] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x28u;
    { uint32_t ea = c->r[13] + 0x250u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x24u;
    { uint32_t ea = c->r[13] + 0x254u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x380u;
    c->r[3] = c->r[2] + 0xcu;
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] + 0x24u;
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] + 0x18u;
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] + 0x28u;
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] + 0x1cu;
    c->r[2] = c->r[2] + 0x10u;
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x14u;
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x2cu;
    c->r[0] = c->r[0] + 0x30u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x24u;
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x28u;
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x4u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0xccu;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x4607aau;
    c->r[9] = 0x1455dc8u + c->r[0];
    c->r[0] = 0x46078bu;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[9]); }
    c->r[0] = 0x1455dd4u + c->r[0];
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb23cu;
    { uint32_t ea = 0x1455de0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb228u;
    { uint32_t ea = 0x1455df0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f11f8u;
    { uint32_t ea = 0x1455dfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb19cu;
    { uint32_t ea = 0x1455e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x460743u;
    c->r[0] = 0x1455e1cu + c->r[0];
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb1f4u;
    { uint32_t ea = 0x1455e28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb1e0u;
    { uint32_t ea = 0x1455e38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f11d4u;
    { uint32_t ea = 0x1455e44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f11c4u;
    { uint32_t ea = 0x1455e54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f11b4u;
    { uint32_t ea = 0x1455e64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f11a4u;
    { uint32_t ea = 0x1455e74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb124u;
    { uint32_t ea = 0x1455e84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f123cu;
    { uint32_t ea = 0x1455e94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f1178u;
    { uint32_t ea = 0x1455ea0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4606a0u;
    c->r[0] = 0x1455eb0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4610eeu;
    c->r[0] = 0x1455ebcu + c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f1150u;
    { uint32_t ea = 0x1455ec8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f1140u;
    { uint32_t ea = 0x1455ed8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x460662u;
    c->r[0] = 0x1455ee8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    c->r[0] = 0x46066bu;
    c->r[0] = 0x1455ef4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    c->r[0] = 0x460650u;
    c->r[0] = 0x1455f00u + c->r[0];
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb110u;
    { uint32_t ea = 0x1455f0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb0fcu;
    { uint32_t ea = 0x1455f1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f10f0u;
    { uint32_t ea = 0x1455f28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    c->r[0] = 0x46063au;
    c->r[0] = 0x1455f38u + c->r[0];
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    c->r[0] = 0x46064cu;
    c->r[0] = 0x1455f44u + c->r[0];
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x460622u;
    c->r[0] = 0x1455f50u + c->r[0];
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb0bcu;
    { uint32_t ea = 0x1455f5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xeece08u;
    c->r[0] = 0x1455f68u + c->r[0];
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb0a8u;
    { uint32_t ea = 0x1455f78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeecdecu;
    c->r[0] = 0x1455f84u + c->r[0];
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeecddcu;
    c->r[0] = 0x1455f94u + c->r[0];
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb07cu;
    { uint32_t ea = 0x1455fa0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb068u;
    { uint32_t ea = 0x1455fb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f1038u;
    { uint32_t ea = 0x1455fbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eafdcu;
    { uint32_t ea = 0x1455fccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f1018u;
    { uint32_t ea = 0x1455fdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eafbcu;
    { uint32_t ea = 0x1455fecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb024u;
    { uint32_t ea = 0x1455ffcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb014u;
    { uint32_t ea = 0x1456008u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eb004u;
    { uint32_t ea = 0x1456018u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x330411u;
    c->r[0] = 0x1456024u + c->r[0];
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x460542u;
    c->r[0] = 0x1456030u + c->r[0];
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f0fdcu;
    { uint32_t ea = 0x145603cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eaf5cu;
    { uint32_t ea = 0x145604cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[0]); }
    c->r[0] = 0x46053cu;
    c->r[0] = 0x145605cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4604e2u;
    c->r[0] = 0x1456068u + c->r[0];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f0fa4u;
    { uint32_t ea = 0x1456074u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4604eeu;
    c->r[0] = 0x1456084u + c->r[0];
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eaf18u;
    { uint32_t ea = 0x1456090u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4604d7u;
    c->r[0] = 0x14560a0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = 0x460efeu;
    c->r[0] = 0x14560acu + c->r[0];
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x4604ceu;
    c->r[0] = 0x14560b8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4604ccu;
    c->r[0] = 0x14560c4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f0f48u;
    { uint32_t ea = 0x14560d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eaf3cu;
    { uint32_t ea = 0x14560e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eaf28u;
    { uint32_t ea = 0x14560f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f0ef8u;
    { uint32_t ea = 0x14560fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eae9cu;
    { uint32_t ea = 0x145610cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x460474u;
    c->r[0] = 0x145611cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f0eccu;
    { uint32_t ea = 0x1456128u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eae70u;
    { uint32_t ea = 0x1456138u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eaed4u;
    { uint32_t ea = 0x1456148u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eaec0u;
    { uint32_t ea = 0x1456158u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f0e90u;
    { uint32_t ea = 0x1456164u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eae34u;
    { uint32_t ea = 0x1456174u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f0f40u;
    { uint32_t ea = 0x1456184u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eae90u;
    { uint32_t ea = 0x1456190u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eae80u;
    { uint32_t ea = 0x145619cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eae70u;
    { uint32_t ea = 0x14561acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x33027du;
    c->r[0] = 0x14561b8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f0e30u;
    { uint32_t ea = 0x14561c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eadd4u;
    { uint32_t ea = 0x14561d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eae3cu;
    { uint32_t ea = 0x14561e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eae2cu;
    { uint32_t ea = 0x14561f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eae1cu;
    { uint32_t ea = 0x1456200u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    c->r[0] = 0x330229u;
    c->r[0] = 0x145620cu + c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eae04u;
    { uint32_t ea = 0x1456218u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eadf0u;
    { uint32_t ea = 0x1456228u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5ead74u;
    { uint32_t ea = 0x1456234u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x460346u;
    c->r[0] = 0x1456244u + c->r[0];
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x460d5au;
    c->r[0] = 0x1456250u + c->r[0];
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x460331u;
    c->r[0] = 0x145625cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x1d0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eadb8u;
    { uint32_t ea = 0x1456268u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eada8u;
    { uint32_t ea = 0x1456274u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5ead98u;
    { uint32_t ea = 0x1456284u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5ead90u;
    { uint32_t ea = 0x1456290u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5ead80u;
    { uint32_t ea = 0x145629cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5ead70u;
    { uint32_t ea = 0x14562acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f0d60u;
    { uint32_t ea = 0x14562b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eace0u;
    { uint32_t ea = 0x14562c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x4602bau;
    c->r[0] = 0x14562d8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x460cc6u;
    c->r[0] = 0x14562e4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4602a8u;
    c->r[0] = 0x14562f0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eacacu;
    { uint32_t ea = 0x14562fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f0d0cu;
    { uint32_t ea = 0x145630cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f0cfcu;
    { uint32_t ea = 0x145631cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x460253u;
    c->r[0] = 0x145632cu + c->r[0];
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x46023au;
    c->r[0] = 0x1456338u + c->r[0];
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[0]); }
    c->r[0] = 0x46022eu;
    c->r[0] = 0x1456344u + c->r[0];
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4601fau;
    c->r[0] = 0x1456350u + c->r[0];
    { uint32_t ea = c->r[13] + 0x260u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4601eeu;
    c->r[0] = 0x145635cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eacb8u;
    { uint32_t ea = 0x1456368u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eaca8u;
    { uint32_t ea = 0x1456374u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eac98u;
    { uint32_t ea = 0x1456384u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3300a5u;
    c->r[0] = 0x1456390u + c->r[0];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eac84u;
    { uint32_t ea = 0x145639cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eac74u;
    { uint32_t ea = 0x14563a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5eac64u;
    { uint32_t ea = 0x14563b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x330071u;
    c->r[0] = 0x14563c4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
L_14563c4:;
    { uint32_t ea = c->r[10] + 0xf6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_1456420; }
    { uint32_t ea = c->r[10] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { goto L_1456408; }
L_14563e0:;
    c->r[0] = c->r[5] + 0xcu;
    c->r[1] = c->r[9];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x14563f4u; f_14600a4(c);
    c->r[0] = (c->r[0] >> 1) & 0x1u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[0] + c->r[4];
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_14563e0; }
L_1456408:;
    c->r[14] = 0x145640cu; f_1455408(c);
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_1457f44; }
    { uint32_t ea = c->r[10] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_1457f44; }
L_1456420:;
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[7] + 0x8u;
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    c->r[14] = 0x145643cu; f_14600a4(c);
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[13] + 0x304u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x308u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30cu; ST32(ea, c->r[11]); }
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_14564c0; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x145648cu; f_a1f7a4(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_14564c0; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 2);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { goto L_14564e0; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
L_14564c0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_14564f8; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[4] = v; } }
    goto L_14564f8;
L_14564e0:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x47u;
    c->r[2] = 0xe0000003u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x14564f8u; f_1429008(c);
L_14564f8:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x10u;
    c->r[7] = 0x10u;
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x280u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x294u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x224u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x145652cu; f_142ca44(c);
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[14] + 0x98u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a0u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2b4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[11];
    c->r[14] = 0x145655cu; f_142ca44(c);
    c->r[0] = c->r[4] + 0x110u;
    { uint32_t ea = c->r[13] + 0x228u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3c4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3d8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0x3c8u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3dcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x145659cu; f_142ca44(c);
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x14565acu; f_142cb94(c);
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x14565b8u; f_142cb94(c);
    { uint32_t ea = c->r[13] + 0x24cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x14565ccu; f_14600a4(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[11] = c->r[13] + 0x3b8u;
    { uint32_t ea = c->r[13] + 0x3b8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3bcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3c0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456640; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x145660cu; f_a1f7a4(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456640; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 2);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { goto L_145665c; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
L_1456640:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456654; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_1456674;
L_1456654:;
    c->r[4] = 0x0u;
    goto L_1456674;
L_145665c:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x47u;
    c->r[2] = 0xe0000003u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x1456674u; f_1429008(c);
L_1456674:;
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[4] + 0x54u;
    c->r[1] = c->r[11];
    c->r[14] = 0x1456684u; f_145ccc0(c);
    { uint32_t ea = c->r[13] + 0x3bcu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[10], c->r[11]);
    if (COND_EQ) { goto L_1456728; }
L_1456694:;
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[10] + 0x8u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x14566acu; f_14600a4(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_145671c; }
    { uint32_t ea = c->r[13] + 0x220u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x14566c8u; f_14600a4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_145671c; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x3c0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x14566fcu; rt_dispatch(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x1456704u; f_14297ec(c);
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[10] = c->r[7];
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[10], c->r[11]);
    if (COND_NE) { goto L_1456694; }
    goto L_1456728;
L_145671c:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], c->r[11]);
    if (COND_NE) { goto L_1456694; }
L_1456728:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x380u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x38cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x39cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3a0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x398u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x248u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3a8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3acu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3a4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x37cu;
    { uint32_t ea = c->r[13] + 0x3b0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x38u; ST16(ea, c->r[1]); }
    c->r[0] = 0x88u;
    { uint32_t ea = c->r[13] + 0x3b6u; ST8(ea, c->r[1]); }
    c->r[14] = 0x1456780u; f_1426eb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456790; }
    c->r[14] = 0x145678cu; f_148f0f4(c);
    c->r[4] = c->r[0];
L_1456790:;
    { uint32_t ea = c->r[13] + 0x384u; ST32(ea, c->r[4]); }
    c->r[10] = c->r[13] + 0x348u;
    { uint32_t ea = c->r[13] + 0x3b4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[13] + 0x380u; }
    if (COND_EQ) { c->r[14] = 0x14567a8u; f_145f5d8(c); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x388u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3b5u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x358u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x35cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x354u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x364u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x368u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x360u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x370u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x374u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x36cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x37cu;
    { uint32_t ea = c->r[13] + 0x378u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x88u;
    { uint32_t ea = c->r[13] + 0x37eu; ST8(ea, c->r[1]); }
    c->r[14] = 0x1456808u; f_1426eb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456818; }
    c->r[14] = 0x1456814u; f_148f0f4(c);
    c->r[4] = c->r[0];
L_1456818:;
    { uint32_t ea = c->r[13] + 0x34cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x37cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[10]; }
    if (COND_EQ) { c->r[14] = 0x145682cu; f_145f5d8(c); }
    { uint32_t ea = c->r[13] + 0x3bcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x350u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x37du; ST8(ea, c->r[7]); }
    (void)f_subs(c, c->r[5], c->r[11]);
    if (COND_EQ) { goto L_14568c0; }
L_1456844:;
    c->r[4] = c->r[5] + 0x8u;
    c->r[1] = c->r[6];
    c->r[2] = ~0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x145685cu; f_14600a4(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_14568b4; }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x145687cu; f_14600a4(c);
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_14568a8; }
    { uint32_t ea = c->r[13] + 0x1f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x1456898u; f_14600a4(c);
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_14568b4; }
    c->r[0] = c->r[10];
    goto L_14568ac;
L_14568a8:;
    c->r[0] = c->r[13] + 0x380u;
L_14568ac:;
    c->r[1] = c->r[4];
    c->r[14] = 0x14568b4u; f_145f3bc(c);
L_14568b4:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[11]);
    if (COND_NE) { goto L_1456844; }
L_14568c0:;
    { uint32_t ea = c->r[13] + 0x3b4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[13] + 0x380u; }
    if (COND_EQ) { c->r[14] = 0x14568d0u; f_145f5d8(c); }
    { uint32_t ea = c->r[13] + 0x384u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x14568d8u; f_148f0ec(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456abc; }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_1456af8; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST8(ea, c->r[7]); }
    c->r[4] = c->r[13] + 0x278u;
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_1456910; }
    { uint32_t ea = c->r[13] + 0x24cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1456910u; f_145f5d8(c);
L_1456910:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1456918u; f_148f42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456930; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x80u;
    c->r[14] = 0x1456930u; f_148f434(c);
L_1456930:;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[7] = 0x0u;
    c->r[4] = c->r[13] + 0x310u;
    { uint32_t ea = c->r[13] + 0x310u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x324u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0x314u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x328u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x1456960u; f_142ca44(c);
    { uint32_t ea = c->r[13] + 0x3d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x324u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x145696cu; f_142ce4c(c);
    c->r[10] = c->r[0];
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x310u; ST32(ea, c->r[5]); }
    c->r[14] = 0x145697cu; f_142cb94(c);
    c->r[0] = 0x40u;
    c->r[14] = 0x1456984u; f_14297a4(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST16(ea, c->r[0]); }
    c->r[0] = 0x88u;
    { uint32_t ea = c->r[4] + 0x3eu; ST8(ea, c->r[7]); }
    c->r[14] = 0x14569dcu; f_1426eb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_14569ec; }
    c->r[14] = 0x14569e8u; f_148f0f4(c);
    c->r[7] = c->r[0];
L_14569ec:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[13] + 0x380u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x14569fcu; f_145f3bc(c);
    c->r[0] = c->r[13] + 0x304u;
    c->r[9] = 0x1u;
    (void)f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x304u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x304u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x30cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x30cu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_1456edc; }
    c->r[0] = 0x40u;
    c->r[14] = 0x1456a34u; f_14297a4(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST16(ea, c->r[0]); }
    c->r[0] = 0x88u;
    { uint32_t ea = c->r[4] + 0x3eu; ST8(ea, c->r[7]); }
    c->r[14] = 0x1456a90u; f_1426eb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = c->r[13] + 0x348u;
    if (COND_EQ) { goto L_1456aa4; }
    c->r[14] = 0x1456aa0u; f_148f0f4(c);
    c->r[7] = c->r[0];
L_1456aa4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x1456ab4u; f_145f3bc(c);
    c->r[6] = c->r[13] + 0x304u;
    goto L_1456cec;
L_1456abc:;
    c->r[10] = c->r[9];
    c->r[6] = c->r[13] + 0x304u;
    c->r[9] = 0x0u;
    goto L_1456ee8;
L_1456af8:;
    { uint32_t ea = c->r[13] + 0x37cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[8] = c->r[13] + 0x278u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[10]; }
    if (COND_EQ) { c->r[14] = 0x1456b0cu; f_145f5d8(c); }
    { uint32_t ea = c->r[13] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1456b14u; f_148f0ec(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456c60; }
    { uint32_t ea = c->r[13] + 0x37cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST8(ea, c->r[7]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[10]; }
    if (COND_EQ) { c->r[14] = 0x1456b30u; f_145f5d8(c); }
    { uint32_t ea = c->r[13] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1456b38u; f_148f42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456b50; }
    { uint32_t ea = c->r[13] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x80u;
    c->r[14] = 0x1456b50u; f_148f434(c);
L_1456b50:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x10u;
    c->r[1] = c->r[8];
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x32cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x340u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x330u; ST8(ea, c->r[7]); }
    c->r[7] = c->r[13] + 0x32cu;
    { uint32_t ea = c->r[13] + 0x344u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x1456b80u; f_142ca44(c);
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[4]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x27cu; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[9];
    c->r[14] = 0x1456ba4u; f_142ca44(c);
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[8];
    c->r[0] = c->r[7];
    c->r[14] = 0x1456bb4u; f_148aa30(c);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[4]); }
    c->r[14] = 0x1456bc0u; f_142cb94(c);
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x27cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[6]); }
    c->r[14] = 0x1456be0u; f_142ca44(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[13] + 0x3e4u;
    c->r[1] = c->r[7];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x3e4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x3e0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x3e8u;
    c->r[14] = 0x1456c08u; f_148ab58(c);
    { uint32_t ea = c->r[13] + 0x3e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x32cu;
    c->r[1] = c->r[6];
    c->r[0] = c->r[0] + 0x2cu;
    c->r[14] = 0x1456c1cu; f_142b194(c);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[4]); }
    c->r[14] = 0x1456c28u; f_142cb94(c);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x32cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x1456c34u; f_142cb94(c);
    { uint32_t ea = c->r[13] + 0x37cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[10]; }
    if (COND_EQ) { c->r[14] = 0x1456c44u; f_145f5d8(c); }
    { uint32_t ea = c->r[13] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1456c4cu; f_148f0ec(c);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[13] + 0x380u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x1456c60u; f_145ff9c(c);
L_1456c60:;
    c->r[0] = 0x40u;
    c->r[14] = 0x1456c68u; f_14297a4(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST16(ea, c->r[0]); }
    c->r[0] = 0x88u;
    { uint32_t ea = c->r[4] + 0x3eu; ST8(ea, c->r[7]); }
    c->r[14] = 0x1456cc4u; f_1426eb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456cd4; }
    c->r[14] = 0x1456cd0u; f_148f0f4(c);
    c->r[7] = c->r[0];
L_1456cd4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[13] + 0x380u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x1456ce4u; f_145f3bc(c);
    c->r[6] = c->r[13] + 0x304u;
    c->r[9] = 0x1u;
L_1456cec:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x304u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x304u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x30cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x30cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[7] = 0x0u;
    c->r[8] = c->r[13] + 0x3c4u;
    goto L_1456ee8;
L_1456edc:;
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[7] = 0x0u;
    c->r[6] = c->r[13] + 0x304u;
L_1456ee8:;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x378u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456f0c; }
    c->r[0] = c->r[0] - 0x4u;
    c->r[14] = 0x1456f04u; f_14297ec(c);
    { uint32_t ea = c->r[13] + 0x378u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x37du; ST8(ea, c->r[7]); }
L_1456f0c:;
    { uint32_t ea = c->r[13] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456f24; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x1456f24u; rt_dispatch(c);
L_1456f24:;
    { uint32_t ea = c->r[13] + 0x370u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1456f30u; f_1488cdc(c);
    { uint32_t ea = c->r[13] + 0x364u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1456f3cu; f_1488cdc(c);
    { uint32_t ea = c->r[13] + 0x358u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1456f48u; f_1488914(c);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x380u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456f6c; }
    c->r[0] = c->r[0] - 0x4u;
    c->r[14] = 0x1456f64u; f_14297ec(c);
    { uint32_t ea = c->r[13] + 0x3b0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3b5u; ST8(ea, c->r[7]); }
L_1456f6c:;
    { uint32_t ea = c->r[13] + 0x384u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1456f84; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x1456f84u; rt_dispatch(c);
L_1456f84:;
    { uint32_t ea = c->r[13] + 0x3a8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x238u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1456f90u; f_1488cdc(c);
    { uint32_t ea = c->r[13] + 0x39cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1456f9cu; f_1488cdc(c);
    { uint32_t ea = c->r[13] + 0x390u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1456fa8u; f_1488914(c);
    { uint32_t ea = c->r[13] + 0x3c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457004; }
    { uint32_t ea = c->r[13] + 0x3bcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x3b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[4], c->r[11]);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3c0u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_1457004; }
L_1456fdc:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x1456ff0u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x1456ff8u; f_14297ec(c);
    (void)f_subs(c, c->r[5], c->r[11]);
    c->r[4] = c->r[5];
    if (COND_NE) { goto L_1456fdc; }
L_1457004:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3c4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x1457014u; f_142cb94(c);
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_1457ed0; }
    { uint32_t ea = c->r[13] + 0x308u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[11] = c->r[13] + 0x380u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_1457d14; }
L_1457030:;
    { uint32_t ea = c->r[13] + 0x21cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[1]); }
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x380u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x38cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x39cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3a0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x398u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x248u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3a8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3acu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3a4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x37cu;
    { uint32_t ea = c->r[13] + 0x3b0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x38u; ST16(ea, c->r[2]); }
    c->r[0] = 0x88u;
    { uint32_t ea = c->r[13] + 0x3b6u; ST8(ea, c->r[4]); }
    c->r[14] = 0x1457090u; f_1426eb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_14570a0; }
    c->r[14] = 0x145709cu; f_148f0f4(c);
    c->r[4] = c->r[0];
L_14570a0:;
    c->r[0] = c->r[11];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x384u; ST32(ea, c->r[4]); }
    c->r[14] = 0x14570b0u; f_145f3bc(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[13] + 0x278u;
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x14570ccu; f_145ff9c(c);
    { uint32_t ea = c->r[13] + 0x234u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x214u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x14570e4u; f_145ff9c(c);
    { uint32_t ea = c->r[13] + 0x210u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[5];
    c->r[14] = 0x14570fcu; f_14600a4(c);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[11];
    c->r[2] = c->r[5];
    c->r[14] = 0x1457110u; f_145ff9c(c);
    { uint32_t ea = c->r[13] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457164; }
    { uint32_t ea = c->r[13] + 0x1f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457130u; f_a1f7a4(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457164; }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 2);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { goto L_1457f5c; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
L_1457164:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x145717cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_145730c; }
    { uint32_t ea = c->r[13] + 0x1e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_14571e0; }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x14571acu; f_a1f7a4(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_14571e0; }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 2);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { goto L_1457f68; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
L_14571e0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x14571f8u; rt_dispatch(c);
    c->r[1] = c->r[0] + 0x10u;
    c->r[0] = c->r[4];
    c->r[14] = 0x1457204u; f_148f164(c);
    c->r[0] = c->r[8];
    c->r[1] = c->r[4];
    c->r[14] = 0x1457210u; f_148f490(c);
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1d8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x1dcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[5] = c->r[13] + 0x348u;
    c->r[11] = 0x10u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x35cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34cu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x360u; ST32(ea, c->r[11]); }
    c->r[14] = 0x1457244u; f_142ca44(c);
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[5];
    c->r[6] = 0x0u;
    c->r[0] = c->r[7];
    c->r[14] = 0x1457258u; f_148aa30(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[9]); }
    c->r[14] = 0x1457264u; f_142cb94(c);
    c->r[1] = c->r[8];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x35cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34cu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x360u; ST32(ea, c->r[11]); }
    c->r[8] = c->r[4];
    c->r[14] = 0x1457284u; f_142ca44(c);
    { uint32_t ea = c->r[13] + 0x1d4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[13] + 0x310u;
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x310u; ST32(ea, c->r[5]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x3b8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x32cu;
    c->r[14] = 0x14572b0u; f_148ab58(c);
    { uint32_t ea = c->r[13] + 0x32cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[0] = c->r[0] + 0x2cu;
    c->r[14] = 0x14572c0u; f_142b194(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[9]); }
    c->r[14] = 0x14572ccu; f_142cb94(c);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x3c4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x14572d8u; f_142cb94(c);
    c->r[4] = c->r[13] + 0x278u;
    c->r[0] = c->r[4];
    c->r[14] = 0x14572e4u; f_148f0ec(c);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[11] = c->r[13] + 0x380u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x1d0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[11];
    c->r[14] = 0x14572fcu; f_145ff9c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x1457304u; f_148f424(c);
    { uint32_t ea = c->r[13] + 0x24cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[6] = v; }
L_145730c:;
    c->r[0] = 0x40u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3c4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3c8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3ccu; ST32(ea, c->r[7]); }
    c->r[14] = 0x1457324u; f_14297a4(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST16(ea, c->r[0]); }
    c->r[0] = 0x88u;
    { uint32_t ea = c->r[4] + 0x3eu; ST8(ea, c->r[7]); }
    c->r[14] = 0x145737cu; f_1426eb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_145738c; }
    c->r[14] = 0x1457388u; f_148f0f4(c);
    c->r[7] = c->r[0];
L_145738c:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x145739cu; f_145f3bc(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[8]); }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3c4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x3ccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x14573d0u; f_14600a4(c);
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_1457608; }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x224u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457438; }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457404u; f_a1f7a4(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457438; }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 2);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { goto L_1457458; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
L_1457438:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457470; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[4] = v; } }
    goto L_1457470;
L_1457458:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x47u;
    c->r[2] = 0xe0000003u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x1457470u; f_1429008(c);
L_1457470:;
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x0u;
    c->r[5] = 0x10u;
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x22cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x294u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x14574a4u; f_142ca44(c);
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[10] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[10] + 0x98u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[8];
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x2b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a0u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2b4u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x14574d8u; f_142ca44(c);
    c->r[0] = c->r[4] + 0x110u;
    { uint32_t ea = c->r[13] + 0x228u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_14575d0; }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x1457510u; f_14600a4(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[7]); }
    c->r[14] = 0x1457530u; f_142cb94(c);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[7]); }
    c->r[14] = 0x145753cu; f_142cb94(c);
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[4] | c->r[5]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[11] = c->r[13] + 0x380u;
    c->r[7] = 0x0u;
    c->r[8] = c->r[13] + 0x3c4u;
    if (COND_NE) { goto L_1457608; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_14575ac; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457578u; f_a1f7a4(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_14575ac; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 2);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { goto L_1457b54; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
L_14575ac:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457b4c; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[4] = v; } }
    goto L_1457b70;
L_14575d0:;
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x14575e8u; f_142cb94(c);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x14575f4u; f_142cb94(c);
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[11] = c->r[13] + 0x380u;
    c->r[7] = 0x0u;
    c->r[8] = c->r[13] + 0x3c4u;
L_1457608:;
    { uint32_t ea = c->r[13] + 0x1f8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x145761cu; f_14600a4(c);
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_1457640; }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x1457638u; f_14600a4(c);
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_1457738; }
L_1457640:;
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x1457654u; f_14600a4(c);
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_14576c0; }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_1457698; }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x145767cu; f_a1f7a4(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_1457698; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 1);
L_1457698:;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x3b4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[11]; }
    if (COND_EQ) { c->r[14] = 0x14576acu; f_145f5d8(c); }
    { uint32_t ea = c->r[13] + 0x384u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x14576b8u; f_148f390(c);
    { uint32_t ea = c->r[13] + 0x3b5u; ST8(ea, c->r[7]); }
    goto L_1457958;
L_14576c0:;
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x224u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457718; }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x14576e4u; f_a1f7a4(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457718; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 2);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { goto L_1457864; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
L_1457718:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_145787c; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[4] = v; } }
    goto L_145787c;
L_1457738:;
    c->r[8] = c->r[13] + 0x348u;
    c->r[1] = c->r[9];
    c->r[0] = c->r[8];
    c->r[14] = 0x1457748u; f_14556d4(c);
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x10u;
    c->r[4] = c->r[13] + 0x278u;
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x27cu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[14] = 0x1457778u; f_142ca44(c);
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[4];
    c->r[0] = c->r[7];
    c->r[14] = 0x1457788u; f_148aa30(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[6]); }
    c->r[14] = 0x1457794u; f_142cb94(c);
    c->r[1] = c->r[9];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x27cu; ST8(ea, c->r[0]); }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x14577bcu; f_142ca44(c);
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[13] + 0x310u;
    c->r[1] = c->r[7];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x310u; ST32(ea, c->r[4]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x3b8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x32cu;
    c->r[14] = 0x14577e8u; f_148ab58(c);
    { uint32_t ea = c->r[13] + 0x32cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[0] = c->r[0] + 0x2cu;
    c->r[14] = 0x14577f8u; f_142b194(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[6]); }
    c->r[14] = 0x1457804u; f_142cb94(c);
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[8];
    c->r[8] = c->r[13] + 0x3c4u;
    c->r[14] = 0x1457818u; f_142cb94(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[5];
    c->r[14] = 0x1457830u; f_14600a4(c);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[1] = c->r[11];
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x1457848u; f_145ff9c(c);
    c->r[0] = 0x1u;
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x1457860u; f_145ff9c(c);
    goto L_1457958;
L_1457864:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x47u;
    c->r[2] = 0xe0000003u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x145787cu; f_1429008(c);
L_145787c:;
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x188u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x10u;
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x22cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x294u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x14578acu; f_142ca44(c);
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[11] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[11] + 0x98u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a0u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2b4u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x14578dcu; f_142ca44(c);
    c->r[0] = c->r[4] + 0x110u;
    { uint32_t ea = c->r[13] + 0x228u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[13] + 0x200u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3b4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + 0xb8u; uint32_t v = LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[13] + 0x380u; }
    if (COND_EQ) { c->r[14] = 0x1457910u; f_145f5d8(c); }
    { uint32_t ea = c->r[13] + 0x384u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x145791cu; f_148f390(c);
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x180u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x3b5u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x1457938u; f_142cb94(c);
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x1457944u; f_142cb94(c);
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[11] = c->r[13] + 0x380u;
    c->r[7] = 0x0u;
    c->r[8] = c->r[13] + 0x3c4u;
L_1457958:;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[11];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x1457970u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x230u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457c44; }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x1457990u; f_14600a4(c);
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_1457b3c; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[5] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x288u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x284u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x294u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x298u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2a0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2a4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x2a8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xacu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2aeu; ST8(ea, c->r[0]); }
    c->r[0] = 0x88u;
    c->r[14] = 0x14579f0u; f_1426eb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457a00; }
    c->r[14] = 0x14579fcu; f_148f0f4(c);
    c->r[4] = c->r[0];
L_1457a00:;
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[4]); }
    c->r[5] = c->r[13] + 0x348u;
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[13] + 0x278u; }
    if (COND_EQ) { c->r[14] = 0x1457a18u; f_145f5d8(c); }
    c->r[0] = 0x1u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x280u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x2adu; ST8(ea, c->r[7]); }
    c->r[14] = 0x1457a30u; f_14585e8(c);
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x35cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[13] + 0x278u; }
    if (COND_EQ) { c->r[14] = 0x1457a44u; f_145f5d8(c); }
    { uint32_t ea = c->r[13] + 0x2adu; ST8(ea, c->r[7]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457a54u; f_148f234(c);
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x1457a64u; f_142cb94(c);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x1457a78u; f_14600a4(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[13] + 0x278u; }
    if (COND_EQ) { c->r[14] = 0x1457a8cu; f_145f5d8(c); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[14] = 0x1457a98u; f_148f390(c);
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2adu; ST8(ea, c->r[7]); }
    c->r[1] = c->r[6];
    c->r[14] = 0x1457ab4u; f_14600a4(c);
    c->r[4] = c->r[13] + 0x278u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = c->r[5];
    c->r[2] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0x1457accu; f_145ff9c(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[4];
    c->r[14] = 0x1457ad8u; f_1452ca0(c);
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457afc; }
    c->r[0] = c->r[0] - 0x4u;
    c->r[14] = 0x1457af4u; f_14297ec(c);
    { uint32_t ea = c->r[13] + 0x2a8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2adu; ST8(ea, c->r[7]); }
L_1457afc:;
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457b14; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x1457b14u; rt_dispatch(c);
L_1457b14:;
    { uint32_t ea = c->r[13] + 0x2a0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457b20u; f_1488cdc(c);
    { uint32_t ea = c->r[13] + 0x294u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457b2cu; f_1488cdc(c);
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457b38u; f_1488914(c);
    goto L_1457c44;
L_1457b3c:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[9];
    c->r[14] = 0x1457b48u; f_1452ca0(c);
    goto L_1457c44;
L_1457b4c:;
    { uint32_t ea = c->r[13] + 0x22cu; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_1457b70;
L_1457b54:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x47u;
    c->r[2] = 0xe0000003u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x1457b70u; f_1429008(c);
L_1457b70:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x224u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[5]); }
    c->r[5] = 0x10u;
    { uint32_t ea = c->r[13] + 0x280u; ST8(ea, c->r[7]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x294u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x1457ba0u; f_142ca44(c);
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[14] + 0x98u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a0u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2b4u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x1457bd0u; f_142ca44(c);
    c->r[0] = c->r[4] + 0x110u;
    { uint32_t ea = c->r[13] + 0x228u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x1457bfcu; f_142cb94(c);
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x1457c08u; f_142cb94(c);
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_1457c2c; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x1457c2cu; f_14580ec(c);
L_1457c2c:;
    c->r[11] = c->r[13] + 0x380u;
    c->r[0] = c->r[10];
    c->r[1] = c->r[8];
    c->r[2] = c->r[11];
    c->r[14] = 0x1457c40u; f_14584b8(c);
    c->r[7] = 0x0u;
L_1457c44:;
    { uint32_t ea = c->r[13] + 0x3ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457ca0; }
    { uint32_t ea = c->r[13] + 0x3c8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x3c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[4], c->r[8]);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3ccu; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_1457ca0; }
L_1457c78:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x1457c8cu; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x1457c94u; f_14297ec(c);
    (void)f_subs(c, c->r[5], c->r[8]);
    c->r[4] = c->r[5];
    if (COND_NE) { goto L_1457c78; }
L_1457ca0:;
    { uint32_t ea = c->r[13] + 0x1fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x304u;
    { uint32_t ea = c->r[13] + 0x380u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457cc8; }
    c->r[0] = c->r[0] - 0x4u;
    c->r[14] = 0x1457cc0u; f_14297ec(c);
    { uint32_t ea = c->r[13] + 0x3b0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3b5u; ST8(ea, c->r[7]); }
L_1457cc8:;
    { uint32_t ea = c->r[13] + 0x384u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457ce0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x1457ce0u; rt_dispatch(c);
L_1457ce0:;
    { uint32_t ea = c->r[13] + 0x3a8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x238u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457cecu; f_1488cdc(c);
    { uint32_t ea = c->r[13] + 0x39cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457cf8u; f_1488cdc(c);
    { uint32_t ea = c->r[13] + 0x390u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457d04u; f_1488914(c);
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_NE) { goto L_1457030; }
L_1457d14:;
    { uint32_t ea = c->r[13] + 0x230u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0x348u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_1457e98; }
    c->r[0] = c->r[13] + 0x270u;
    c->r[14] = 0x1457d2cu; f_1428fb8(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_1457d50; }
    c->r[0] = f_adds(c, c->r[0], c->r[1]);
    c->r[1] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 31) + c->cf;
    goto L_1457d5c;
L_1457d50:;
    c->r[1] = 0x0u - c->r[1];
    c->r[0] = f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[2] - (uint32_t)((int32_t)c->r[1] >> 31) - 1u + c->cf;
L_1457d5c:;
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[1]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[13] + 0x280u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x294u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2a0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x298u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2a8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2acu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2a4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x2b0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[14] + 0xb4u; ST16(ea, c->r[0]); }
    c->r[0] = 0x88u;
    { uint32_t ea = c->r[13] + 0x2b6u; ST8(ea, c->r[4]); }
    c->r[14] = 0x1457dbcu; f_1426eb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457dcc; }
    c->r[14] = 0x1457dc8u; f_148f0f4(c);
    c->r[4] = c->r[0];
L_1457dcc:;
    { uint32_t ea = c->r[13] + 0x284u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x22cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[9];
    c->r[0] = c->r[4];
    c->r[14] = 0x1457de0u; f_145f3bc(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x1457df4u; f_14600a4(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3c4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x32cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x1457e1cu; f_148a2e4(c);
    { uint32_t ea = c->r[13] + 0x380u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    c->r[0] = c->r[0] + 0x20u;
    c->r[14] = 0x1457e38u; f_145f3bc(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x280u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457e5c; }
    c->r[0] = c->r[0] - 0x4u;
    c->r[14] = 0x1457e54u; f_14297ec(c);
    { uint32_t ea = c->r[13] + 0x2b0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2b5u; ST8(ea, c->r[7]); }
L_1457e5c:;
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457e74; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x1457e74u; rt_dispatch(c);
L_1457e74:;
    { uint32_t ea = c->r[13] + 0x2a8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457e80u; f_1488cdc(c);
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457e8cu; f_1488cdc(c);
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x1457e98u; f_1488914(c);
L_1457e98:;
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[10] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x1457ec8u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x1457ed0u; f_14297ec(c);
L_1457ed0:;
    { uint32_t ea = c->r[13] + 0x30cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_1457f34; }
    { uint32_t ea = c->r[13] + 0x308u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x304u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[4], c->r[6]);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30cu; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_1457f34; }
L_1457f0c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x1457f20u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x1457f28u; f_14297ec(c);
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[4] = c->r[5];
    if (COND_NE) { goto L_1457f0c; }
L_1457f34:;
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_14563c4; }
L_1457f44:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x1457f54u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x3f4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_1457f5c:;
    c->r[0] = 0x32e4cdu;
    c->r[0] = 0x1457f68u + c->r[0];
    goto L_1457f70;
L_1457f68:;
    c->r[0] = 0x32e4c1u;
    c->r[0] = 0x1457f74u + c->r[0];
L_1457f70:;
    c->r[1] = 0x47u;
    c->r[2] = 0xe0000003u;
    c->r[3] = 0x0u;
    c->r[14] = 0x1457f80u; f_1429008(c);
L_1457f80:;
    c->r[0] = 0x32e4a9u;
    c->r[0] = 0x1457f8cu + c->r[0];
    goto L_1457f70;
}
