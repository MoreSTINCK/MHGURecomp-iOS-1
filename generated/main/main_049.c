#include "cpu.h"
#include "neon_rt.h"
void f_200690(Cpu *c);
void f_21ebe8(Cpu *c);
void f_22b8f0(Cpu *c);
void f_22b908(Cpu *c);
void f_51be70(Cpu *c);
void f_51beb4(Cpu *c);
void f_51c03c(Cpu *c);
void f_51c1a0(Cpu *c);
void f_51c280(Cpu *c);
void f_51cc6c(Cpu *c);
void f_51cd7c(Cpu *c);
void f_51cdb8(Cpu *c);
void f_51d6b4(Cpu *c);
void f_51d6f0(Cpu *c);
void f_51d7e8(Cpu *c);
void f_51d834(Cpu *c);
void f_51d92c(Cpu *c);
void f_5214f0(Cpu *c);
void f_5215c0(Cpu *c);
void f_521f9c(Cpu *c);
void f_522344(Cpu *c);
void f_52257c(Cpu *c);
void f_523264(Cpu *c);
void f_523804(Cpu *c);
void f_523ee4(Cpu *c);
void f_5241bc(Cpu *c);
void f_524300(Cpu *c);
void f_524588(Cpu *c);
void f_525580(Cpu *c);
void f_525778(Cpu *c);
void f_525b48(Cpu *c);
void f_525e80(Cpu *c);
void f_526390(Cpu *c);
void f_5267d0(Cpu *c);
void f_5268cc(Cpu *c);
void f_5268d8(Cpu *c);
void f_526c78(Cpu *c);
void f_5273b4(Cpu *c);
void f_5273f0(Cpu *c);
void f_5288c4(Cpu *c);
void f_528900(Cpu *c);
void f_529308(Cpu *c);
void f_52a104(Cpu *c);
void f_52af48(Cpu *c);
void f_52af84(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af37c(Cpu *c);
void f_9af3a0(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af3e4(Cpu *c);
void f_9af55c(Cpu *c);
void f_9bb638(Cpu *c);
void f_9c6514(Cpu *c);
void f_9c65e0(Cpu *c);
void f_9c66ac(Cpu *c);
void f_9c6778(Cpu *c);
void f_9c6844(Cpu *c);
void f_9c6914(Cpu *c);
void f_9c8ce0(Cpu *c);
void f_9ca854(Cpu *c);
void f_9cbde0(Cpu *c);
void f_9cc110(Cpu *c);
void f_a260d4(Cpu *c);
void f_a26130(Cpu *c);
void f_a261fc(Cpu *c);
void f_a263f8(Cpu *c);
void f_a26fb8(Cpu *c);
void f_a26fe4(Cpu *c);
void f_a2710c(Cpu *c);
void f_a2772c(Cpu *c);
void f_a277c4(Cpu *c);
void f_a27998(Cpu *c);
void f_a27ad4(Cpu *c);
void f_a27bbc(Cpu *c);
void f_a27cd0(Cpu *c);
void f_a870b8(Cpu *c);
void f_a87100(Cpu *c);
void f_a871d8(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_a87810(Cpu *c);
void f_a8784c(Cpu *c);
void f_a878e4(Cpu *c);
void f_a878e8(Cpu *c);
void f_a87958(Cpu *c);
void f_a879ac(Cpu *c);
void f_a879b0(Cpu *c);
void f_a879b4(Cpu *c);
void f_a87a24(Cpu *c);
void f_a8f62c(Cpu *c);
void f_a90adc(Cpu *c);
void f_aa7b50(Cpu *c);
void f_aa7dc4(Cpu *c);
void f_b396a8(Cpu *c);
void f_b3992c(Cpu *c);
void f_b3af60(Cpu *c);
void f_b3b124(Cpu *c);
void f_b3b1a4(Cpu *c);
void f_b3b1a8(Cpu *c);
void f_bb5254(Cpu *c);
void f_bb575c(Cpu *c);
void f_bb62e0(Cpu *c);
void f_bb67e4(Cpu *c);
void f_bb8dbc(Cpu *c);
void f_bb8df8(Cpu *c);
void f_bb8ef8(Cpu *c);
void f_bb8f78(Cpu *c);
void f_bb90f8(Cpu *c);
void f_bba704(Cpu *c);
void f_bbcdf0(Cpu *c);
void f_bbd50c(Cpu *c);
void f_bbd5a0(Cpu *c);
void f_bbd638(Cpu *c);
void f_bbd7b8(Cpu *c);
void f_bbda64(Cpu *c);
void f_cf16cc(Cpu *c);
void f_cf1774(Cpu *c);
void f_e067ec(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efd88(Cpu *c);
void f_15efd94(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_15efe00(Cpu *c);
void f_15efe0c(Cpu *c);
void f_520188(Cpu *restrict c) {
    FN_ENTER(0x520188u);
L_520188:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x58u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[2];
    c->r[8] = c->r[1];
    c->r[9] = c->r[0];
    c->v.s[18] = c->r[7];
    c->v.s[16] = c->r[5];
    c->v.s[20] = c->r[4];
    c->v.f[2] = c->v.f[18] * c->v.f[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_5201e4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x5201e4u; f_15efddc(c);
L_5201e4:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_520214; }
    c->v.s[4] = 0x3f800000u;
    c->v.f[0] = c->v.f[4] / c->v.f[0];
    c->v.f[4] = c->v.f[18] * c->v.f[0];
    c->v.f[6] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->r[7] = c->v.s[4];
    c->r[5] = c->v.s[6];
    c->r[4] = c->v.s[0];
L_520214:;
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.s[8] = c->r[5];
    c->v.s[10] = c->r[4];
    c->v.s[12] = c->r[7];
    c->v.f[16] = c->v.f[8] * c->v.f[6];
    c->v.f[18] = c->v.f[4] * c->v.f[10];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[20] = c->v.f[12] * c->v.f[0];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_520304; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_520274; }
    c->r[14] = 0x520270u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_520274:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.s[2] = LD32(c->r[6]);
    c->v.f[8] = c->v.f[18] * c->v.f[0];
    c->v.f[10] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.f[12] = c->v.f[6] * c->v.f[10];
    c->v.f[14] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 16u, c->v.s[8]);
    ST32(c->r[13] + 20u, c->v.s[10]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[6] * c->v.f[8]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[4] * c->v.f[8];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[10] * c->v.f[2]);
    ST32(c->r[13] + 32u, c->v.s[2]);
    ST32(c->r[13] + 36u, c->v.s[4]);
    ST32(c->r[13] + 40u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 48u, c->v.s[12]);
    ST32(c->r[13] + 52u, c->v.s[14]);
    ST32(c->r[13] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1518860u;
    { uint32_t ea = 0x5202ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    goto L_520388;
L_520304:;
    c->r[0] = 0x15198c0u;
    { uint32_t ea = 0x520310u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
L_520388:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x37u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_5203d0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x5203a8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5203c0u: goto L_5203c0; case 0x5203e0u: goto L_5203e0; case 0x5203f0u: goto L_5203f0; case 0x520400u: goto L_520400; case 0x520410u: goto L_520410; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5203c0:;
    c->r[0] = c->r[13];
    c->r[1] = c->r[13] + 0x10u;
    c->r[14] = 0x5203ccu; f_9c65e0(c);
    goto L_52041c;
L_5203d0:;
    c->r[0] = c->r[13];
    c->r[1] = c->r[13] + 0x10u;
    c->r[14] = 0x5203dcu; f_9c6514(c);
    goto L_52041c;
L_5203e0:;
    c->r[0] = c->r[13];
    c->r[1] = c->r[13] + 0x10u;
    c->r[14] = 0x5203ecu; f_9c66ac(c);
    goto L_52041c;
L_5203f0:;
    c->r[0] = c->r[13];
    c->r[1] = c->r[13] + 0x10u;
    c->r[14] = 0x5203fcu; f_9c6778(c);
    goto L_52041c;
L_520400:;
    c->r[0] = c->r[13];
    c->r[1] = c->r[13] + 0x10u;
    c->r[14] = 0x52040cu; f_9c6914(c);
    goto L_52041c;
L_520410:;
    c->r[0] = c->r[13];
    c->r[1] = c->r[13] + 0x10u;
    c->r[14] = 0x52041cu; f_9c6844(c);
L_52041c:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_520454(Cpu *restrict c) {
    FN_ENTER(0x520454u);
L_520454:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[13] = c->r[13] - 0xc8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[7] = c->r[3];
    c->r[6] = c->r[2];
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->v.s[2] = LD32(c->r[7] + 4u);
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[4] = LD32(c->r[7] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_5204a8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x5204a8u; f_15efddc(c);
L_5204a8:;
    c->v.s[16] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_5204d0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5204fc;
L_5204d0:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[7]);
    c->v.s[4] = LD32(c->r[7] + 4u);
    c->v.s[6] = LD32(c->r[7] + 8u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[0];
    ST32(c->r[13] + 128u, c->v.s[2]);
    ST32(c->r[13] + 132u, c->v.s[4]);
L_5204fc:;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_520538; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x520538u; f_15efddc(c);
L_520538:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_52055c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_520588;
L_52055c:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[0];
    ST32(c->r[13], c->v.s[2]);
    ST32(c->r[13] + 4u, c->v.s[4]);
L_520588:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15185a4u;
    c->r[6] = 0x0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x5205a8u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0x5205acu; f_9cbde0(c);
    { uint32_t ea = c->r[5] + 0x37u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_5205f0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x5205c8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5205e0u: goto L_5205e0; case 0x52061cu: goto L_52061c; case 0x52062cu: goto L_52062c; case 0x52063cu: goto L_52063c; case 0x52064cu: goto L_52064c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5205e0:;
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[14] = 0x5205ecu; f_9c65e0(c);
    goto L_520658;
L_5205f0:;
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[14] = 0x5205fcu; f_9c6514(c);
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    goto L_520678;
L_52061c:;
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[14] = 0x520628u; f_9c66ac(c);
    goto L_520658;
L_52062c:;
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[14] = 0x520638u; f_9c6778(c);
    goto L_520658;
L_52063c:;
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[14] = 0x520648u; f_9c6914(c);
    goto L_520658;
L_52064c:;
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[14] = 0x520658u; f_9c6844(c);
L_520658:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_520678:;
    { uint32_t ea = c->r[5] + 0x37u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_520908; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x520698u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5206b4u: goto L_5206b4; case 0x520b5cu: goto L_520b5c; case 0x520da8u: goto L_520da8; case 0x520ff8u: goto L_520ff8; case 0x521258u: goto L_521258; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5206b4:;
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x5206bcu; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x5206c8u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x5206d4u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x5206e0u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x5206ecu; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x5206f8u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[16] * c->v.f[18];
    c->v.f[6] = c->v.f[20] * c->v.f[22];
    c->r[6] = 0x0u;
    c->v.f[8] = c->v.f[16] * c->v.f[24];
    c->v.f[10] = c->v.f[22] * c->v.f[0];
    c->r[7] = 0x3f800000u;
    c->r[2] = 0x1518b68u;
    c->r[8] = c->r[13];
    { uint32_t ea = 0x520724u + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    ST32(c->r[13], c->v.s[2]);
    c->v.f[2] = -(float)(c->v.f[18] * c->v.f[0]);
    ST32(c->r[13] + 4u, c->v.s[20]);
    c->v.f[0] = -(float)(c->v.f[16] * c->v.f[0]);
    ST32(c->r[13] + 8u, c->v.s[2]);
    c->v.s[2] = c->v.s[4];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[6] * c->v.f[24]);
    c->v.f[6] = c->v.f[18] * c->v.f[22];
    c->v.s[18] = 0x4b400000u;
    ST32(c->r[13] + 16u, c->v.s[2]);
    c->v.f[2] = c->v.f[16] * c->v.f[20];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[20] * c->v.f[6]);
    ST32(c->r[13] + 20u, c->v.s[10]);
    c->v.s[16] = 0x4422f983u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[24]);
    c->v.f[2] = c->v.f[22] * c->v.f[24];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[20]);
    ST32(c->r[13] + 24u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 32u, c->v.s[6]);
    ST32(c->r[13] + 36u, c->v.s[0]);
    ST32(c->r[13] + 40u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    c->v.s[2] = c->v.s[18];
    c->v.s[0] = LD32(c->r[4]);
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 152u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 164u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x520808u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[4] + 8u);
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 144u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x520880u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[18];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 160u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x5208f4u; f_21ebe8(c);
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[8];
    c->r[14] = 0x520900u; f_9c65e0(c);
    goto L_5214a4;
L_520908:;
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x520910u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x52091cu; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x520928u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x520934u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x520940u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x52094cu; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[20] * c->v.f[24];
    c->v.s[6] = c->v.s[18] ^ 0x80000000u;
    c->v.f[8] = c->v.f[22] * c->v.f[0];
    c->r[6] = 0x0u;
    c->r[7] = 0x3f800000u;
    c->r[2] = 0x1518918u;
    c->r[8] = c->r[13];
    { uint32_t ea = 0x520974u + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    ST32(c->r[13], c->v.s[2]);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    ST32(c->r[13] + 4u, c->v.s[4]);
    ST32(c->r[13] + 8u, c->v.s[6]);
    c->v.f[6] = c->v.f[18] * c->v.f[20];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->v.s[18] = 0x4b400000u;
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[20] * c->v.f[22]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[2] = c->v.f[22] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[20]);
    ST32(c->r[13] + 16u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[24];
    ST32(c->r[13] + 20u, c->v.s[8]);
    ST32(c->r[13] + 24u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] * c->v.f[22];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 32u, c->v.s[2]);
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    c->v.s[16] = 0x4422f983u;
    c->v.s[2] = c->v.s[18];
    ST32(c->r[13] + 36u, c->v.s[4]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    c->v.s[0] = LD32(c->r[4]);
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 152u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 164u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x520a5cu; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 160u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x520ad4u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[4] + 8u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[18];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 144u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x520b48u; f_21ebe8(c);
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[8];
    c->r[14] = 0x520b54u; f_9c6514(c);
    goto L_5214a4;
L_520b5c:;
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x520b64u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x520b70u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x520b7cu; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x520b88u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x520b94u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->v.f[26] = c->v.f[16] * c->v.f[18];
    c->r[14] = 0x520ba4u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[26] * c->v.f[20]);
    c->r[6] = 0x0u;
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[20] * c->v.f[24]);
    c->r[7] = 0x3f800000u;
    c->v.f[6] = c->v.f[18] * c->v.f[20];
    c->r[2] = 0x15186bcu;
    c->r[8] = c->r[13];
    { uint32_t ea = 0x520bd0u + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    ST32(c->r[13], c->v.s[2]);
    c->v.f[2] = -(float)(c->v.f[22] * c->v.f[18]);
    ST32(c->r[13] + 4u, c->v.s[4]);
    c->v.f[4] = c->v.f[22] * c->v.f[0];
    ST32(c->r[13] + 8u, c->v.s[2]);
    c->v.f[2] = -(float)(c->v.f[22] * c->v.f[20]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 16u, c->v.s[2]);
    c->v.f[2] = c->v.f[16] * c->v.f[24];
    ST32(c->r[13] + 20u, c->v.s[4]);
    c->v.f[4] = c->v.f[18] * c->v.f[0];
    c->v.s[18] = 0x4b400000u;
    ST32(c->r[13] + 24u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->v.s[16] = 0x4422f983u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[20] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[2] * c->v.f[0]);
    c->v.s[2] = c->v.s[18];
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    ST32(c->r[13] + 32u, c->v.s[4]);
    ST32(c->r[13] + 36u, c->v.s[6]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 160u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x520cacu; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[4]);
    c->v.s[2] = c->v.s[18];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 152u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 164u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x520d24u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[4] + 8u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[18];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 144u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x520d98u; f_21ebe8(c);
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[8];
    c->r[14] = 0x520da4u; f_9c66ac(c);
    goto L_5214a4;
L_520da8:;
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x520db0u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x520dbcu; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x520dc8u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x520dd4u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x520de0u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->v.f[26] = c->v.f[16] * c->v.f[18];
    c->v.f[28] = c->v.f[22] * c->v.f[24];
    c->r[14] = 0x520df4u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[18] * c->v.f[22];
    c->v.f[6] = c->v.f[20] * c->v.f[24];
    c->v.s[8] = c->v.s[26];
    c->r[6] = 0x0u;
    c->r[7] = 0x3f800000u;
    c->r[2] = 0x1518468u;
    c->r[8] = c->r[13];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[20] * c->v.f[28]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[26] * c->v.f[20]);
    { uint32_t ea = 0x520e24u + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    ST32(c->r[13], c->v.s[2]);
    c->v.f[2] = c->v.f[20] * c->v.f[4];
    c->v.f[4] = -c->v.f[4] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[16] * c->v.f[24]);
    c->v.f[6] = c->v.f[22] * c->v.f[0];
    ST32(c->r[13] + 4u, c->v.s[8]);
    ST32(c->r[13] + 8u, c->v.s[4]);
    c->v.s[4] = c->v.s[20] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 16u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.s[18] = 0x4b400000u;
    ST32(c->r[13] + 20u, c->v.s[6]);
    c->v.s[16] = 0x4422f983u;
    ST32(c->r[13] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 32u, c->v.s[0]);
    ST32(c->r[13] + 36u, c->v.s[2]);
    ST32(c->r[13] + 40u, c->v.s[28]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    c->v.s[2] = c->v.s[18];
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 160u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x520efcu; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[4] + 8u);
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 144u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x520f74u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[4]);
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[18];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 152u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 164u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x520fe8u; f_21ebe8(c);
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[8];
    c->r[14] = 0x520ff4u; f_9c6778(c);
    goto L_5214a4;
L_520ff8:;
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x521000u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x52100cu; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x521018u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x521024u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x521030u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->v.f[26] = c->v.f[16] * c->v.f[18];
    c->r[14] = 0x521040u; f_15efdf4(c);
    c->v.f[4] = c->v.f[16] * c->v.f[20];
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[20]);
    c->r[6] = 0x0u;
    c->v.f[6] = c->v.f[20] * c->v.f[22];
    c->r[7] = 0x3f800000u;
    c->r[2] = 0x1518224u;
    c->r[8] = c->r[13];
    { uint32_t ea = 0x521068u + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.f[4] = c->v.f[4] * c->v.f[24];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[18] * c->v.f[0]);
    ST32(c->r[13], c->v.s[2]);
    c->v.f[2] = c->v.f[16] * c->v.f[0];
    ST32(c->r[13] + 4u, c->v.s[6]);
    ST32(c->r[13] + 8u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[24];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[20] * c->v.f[24]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[20]);
    ST32(c->r[13] + 16u, c->v.s[2]);
    c->v.s[2] = c->v.s[16] ^ 0x80000000u;
    c->v.s[16] = 0x4422f983u;
    ST32(c->r[13] + 20u, c->v.s[0]);
    c->v.f[0] = c->v.f[18] * c->v.f[22];
    c->v.s[18] = 0x4b400000u;
    ST32(c->r[13] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    ST32(c->r[13] + 36u, c->v.s[2]);
    c->v.s[2] = c->v.s[18];
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    c->v.s[0] = LD32(c->r[4] + 8u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 144u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x521154u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[4]);
    c->v.s[2] = c->v.s[18];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 152u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 164u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x5211ccu; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[18];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 160u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x521240u; f_21ebe8(c);
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[8];
    c->r[14] = 0x52124cu; f_9c6914(c);
    goto L_5214a4;
L_521258:;
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x521260u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x52126cu; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x521278u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x521284u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x521290u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x52129cu; f_15efdf4(c);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[8] = c->v.f[22] * c->v.f[0];
    c->v.f[6] = c->v.f[16] * c->v.f[20];
    c->v.f[4] = c->v.f[24] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[6] = 0x0u;
    c->r[7] = 0x3f800000u;
    c->r[2] = 0x1517fc4u;
    c->r[8] = c->r[13];
    { uint32_t ea = 0x5212c8u + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[22]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[18] * c->v.f[8]);
    ST32(c->r[13], c->v.s[4]);
    c->v.f[4] = -(float)(c->v.f[20] * c->v.f[24]);
    ST32(c->r[13] + 4u, c->v.s[2]);
    ST32(c->r[13] + 8u, c->v.s[6]);
    c->v.f[2] = c->v.f[16] * c->v.f[18];
    c->v.f[6] = c->v.f[18] * c->v.f[22];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 16u, c->v.s[4]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[2] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[6]);
    c->v.f[2] = c->v.f[22] * c->v.f[24];
    ST32(c->r[13] + 20u, c->v.s[8]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->v.f[0] = -(float)(c->v.f[16] * c->v.f[24]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 32u, c->v.s[18]);
    c->v.s[18] = 0x4b400000u;
    c->v.s[16] = 0x4422f983u;
    ST32(c->r[13] + 36u, c->v.s[0]);
    ST32(c->r[13] + 40u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    c->v.s[2] = c->v.s[18];
    c->v.s[0] = LD32(c->r[4] + 8u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 144u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x5213acu; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 160u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x521424u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[4]);
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[18];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 152u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 164u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x521498u; f_21ebe8(c);
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[8];
    c->r[14] = 0x5214a4u; f_9c6844(c);
L_5214a4:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    c->r[13] = c->r[11] - 0x50u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5214f0(Cpu *restrict c) {
    FN_ENTER(0x5214f0u);
L_5214f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[2] + 0x96u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_521548; }
    c->r[1] = 0x1517f9cu;
    { uint32_t ea = c->r[2] + 0xa4u; uint32_t v = LD16(ea); c->r[14] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = 0x521514u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[14], c->r[2]);
    if (COND_CS) { goto L_5215b0; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[3]); }
    if (COND_LS) { goto L_5215b0; }
    { uint32_t ea = c->r[2] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5215a8;
L_521548:;
    { uint32_t ea = c->r[2] + 0xb3u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5215a4; }
    c->r[1] = 0x1517f48u;
    { uint32_t ea = c->r[2] + 0xa4u; uint32_t v = LD16(ea); c->r[14] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = 0x521568u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[14], c->r[3]);
    if (COND_CS) { goto L_5215b0; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_5215b0; }
    { uint32_t ea = c->r[2] + 0xa6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CS) { goto L_5215b0; }
    { uint32_t ea = c->r[3] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5215a8;
L_5215a4:;
    { uint32_t ea = c->r[2] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5215a8:;
    c->r[12] = 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_5215b0:;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5215c0(Cpu *restrict c) {
    FN_ENTER(0x5215c0u);
L_5215c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[2] + 0x97u; uint32_t v = LD8(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_521618; }
    { uint32_t ea = c->r[2] + 0xc4u; uint32_t v = LD16(ea); c->r[14] = v; }
    c->r[2] = 0x1517eccu;
    c->r[12] = 0x0u;
    { uint32_t ea = 0x5215e4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[14], c->r[1]);
    if (COND_CS) { goto L_521684; }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[3]); }
    if (COND_LS) { goto L_521684; }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_52167c;
L_521618:;
    { uint32_t ea = c->r[2] + 0xc3u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_521678; }
    { uint32_t ea = c->r[2] + 0xc4u; uint32_t v = LD16(ea); c->r[14] = v; }
    c->r[2] = 0x1517e78u;
    c->r[12] = 0x0u;
    { uint32_t ea = 0x521638u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[14], c->r[3]);
    if (COND_CS) { goto L_521684; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_521684; }
    { uint32_t ea = c->r[1] + 0x43u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfu;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_521684; }
    { uint32_t ea = c->r[3] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_52167c;
L_521678:;
    { uint32_t ea = c->r[2] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_52167c:;
    c->r[12] = 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_521684:;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_521694(Cpu *restrict c) {
    FN_ENTER(0x521694u);
L_521694:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_HI) { goto L_521784; }
    c->r[0] = (c->r[2] << 2);
    c->r[1] = 0x5216b8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5216d4u: goto L_5216d4; case 0x521814u: goto L_521814; case 0x5218c0u: goto L_5218c0; case 0x52196cu: goto L_52196c; case 0x521a20u: goto L_521a20; case 0x521adcu: goto L_521adc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5216d4:;
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0x5216dcu; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x5216e8u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x5216f4u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0x521700u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x52170cu; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x521718u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[20] * c->v.f[24];
    c->v.s[6] = c->v.s[18] ^ 0x80000000u;
    c->v.f[8] = c->v.f[22] * c->v.f[0];
    c->r[0] = 0x0u;
    ST32(c->r[4], c->v.s[2]);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    ST32(c->r[4] + 4u, c->v.s[4]);
    ST32(c->r[4] + 8u, c->v.s[6]);
    c->v.f[6] = c->v.f[18] * c->v.f[20];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[20] * c->v.f[22]);
    c->v.f[2] = c->v.f[22] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[20]);
    ST32(c->r[4] + 16u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[24];
    ST32(c->r[4] + 20u, c->v.s[8]);
    ST32(c->r[4] + 24u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] * c->v.f[22];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[0]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[2]);
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    ST32(c->r[4] + 36u, c->v.s[4]);
    goto L_521ad4;
L_521784:;
    c->r[0] = 0x1518440u;
    { uint32_t ea = 0x521790u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
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
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_521814:;
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0x52181cu; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x521828u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x521834u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0x521840u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x52184cu; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x521858u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[16] * c->v.f[18];
    c->v.f[6] = c->v.f[20] * c->v.f[22];
    c->r[0] = 0x0u;
    c->v.f[8] = c->v.f[16] * c->v.f[24];
    c->v.f[10] = c->v.f[22] * c->v.f[0];
    ST32(c->r[4], c->v.s[2]);
    c->v.f[2] = -(float)(c->v.f[18] * c->v.f[0]);
    ST32(c->r[4] + 4u, c->v.s[20]);
    c->v.f[0] = -(float)(c->v.f[16] * c->v.f[0]);
    ST32(c->r[4] + 8u, c->v.s[2]);
    c->v.s[2] = c->v.s[4];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[6] * c->v.f[24]);
    c->v.f[6] = c->v.f[18] * c->v.f[22];
    ST32(c->r[4] + 16u, c->v.s[2]);
    c->v.f[2] = c->v.f[16] * c->v.f[20];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[20] * c->v.f[6]);
    ST32(c->r[4] + 20u, c->v.s[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[24]);
    c->v.f[2] = c->v.f[22] * c->v.f[24];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[20]);
    ST32(c->r[4] + 24u, c->v.s[8]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[6]);
    goto L_521b84;
L_5218c0:;
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0x5218c8u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x5218d4u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x5218e0u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0x5218ecu; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x5218f8u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->v.f[26] = c->v.f[16] * c->v.f[18];
    c->r[14] = 0x521908u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[26] * c->v.f[20]);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[20] * c->v.f[24]);
    c->v.f[6] = c->v.f[18] * c->v.f[20];
    ST32(c->r[4], c->v.s[2]);
    c->v.f[2] = -(float)(c->v.f[22] * c->v.f[18]);
    ST32(c->r[4] + 4u, c->v.s[4]);
    c->v.f[4] = c->v.f[22] * c->v.f[0];
    ST32(c->r[4] + 8u, c->v.s[2]);
    c->v.f[2] = -(float)(c->v.f[22] * c->v.f[20]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[2]);
    c->v.f[2] = c->v.f[16] * c->v.f[24];
    ST32(c->r[4] + 20u, c->v.s[4]);
    c->v.f[4] = c->v.f[18] * c->v.f[0];
    ST32(c->r[4] + 24u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[2] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[20] * c->v.f[2]);
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    ST32(c->r[4] + 32u, c->v.s[4]);
    ST32(c->r[4] + 36u, c->v.s[6]);
    goto L_521ad4;
L_52196c:;
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0x521974u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x521980u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x52198cu; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0x521998u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x5219a4u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->v.f[26] = c->v.f[16] * c->v.f[18];
    c->v.f[28] = c->v.f[22] * c->v.f[24];
    c->r[14] = 0x5219b8u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[18] * c->v.f[22];
    c->v.f[6] = c->v.f[20] * c->v.f[24];
    c->v.s[8] = c->v.s[26];
    c->r[0] = 0x0u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[20] * c->v.f[28]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[26] * c->v.f[20]);
    ST32(c->r[4], c->v.s[2]);
    c->v.f[2] = c->v.f[20] * c->v.f[4];
    c->v.f[4] = -c->v.f[4] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[16] * c->v.f[24]);
    c->v.f[6] = c->v.f[22] * c->v.f[0];
    ST32(c->r[4] + 4u, c->v.s[8]);
    ST32(c->r[4] + 8u, c->v.s[4]);
    c->v.s[4] = c->v.s[20] ^ 0x80000000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    ST32(c->r[4] + 20u, c->v.s[6]);
    ST32(c->r[4] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    ST32(c->r[4] + 36u, c->v.s[2]);
    ST32(c->r[4] + 40u, c->v.s[28]);
    goto L_521b8c;
L_521a20:;
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0x521a28u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x521a34u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x521a40u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0x521a4cu; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x521a58u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->v.f[26] = c->v.f[16] * c->v.f[18];
    c->r[14] = 0x521a68u; f_15efdf4(c);
    c->v.f[4] = c->v.f[16] * c->v.f[20];
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[20]);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[20] * c->v.f[22];
    c->v.f[4] = c->v.f[4] * c->v.f[24];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[18] * c->v.f[0]);
    ST32(c->r[4], c->v.s[2]);
    c->v.f[2] = c->v.f[16] * c->v.f[0];
    ST32(c->r[4] + 4u, c->v.s[6]);
    ST32(c->r[4] + 8u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[24];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[20] * c->v.f[24]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[20]);
    ST32(c->r[4] + 16u, c->v.s[2]);
    c->v.s[2] = c->v.s[16] ^ 0x80000000u;
    ST32(c->r[4] + 20u, c->v.s[0]);
    c->v.f[0] = c->v.f[18] * c->v.f[22];
    ST32(c->r[4] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    ST32(c->r[4] + 36u, c->v.s[2]);
L_521ad4:;
    ST32(c->r[4] + 40u, c->v.s[0]);
    goto L_521b8c;
L_521adc:;
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0x521ae4u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x521af0u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x521afcu; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0x521b08u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x521b14u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x521b20u; f_15efdf4(c);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[8] = c->v.f[22] * c->v.f[0];
    c->v.f[6] = c->v.f[16] * c->v.f[20];
    c->v.f[4] = c->v.f[24] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[0] = 0x0u;
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[22]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[18] * c->v.f[8]);
    ST32(c->r[4], c->v.s[4]);
    c->v.f[4] = -(float)(c->v.f[20] * c->v.f[24]);
    ST32(c->r[4] + 4u, c->v.s[2]);
    ST32(c->r[4] + 8u, c->v.s[6]);
    c->v.f[2] = c->v.f[16] * c->v.f[18];
    c->v.f[6] = c->v.f[18] * c->v.f[22];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[4]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[2] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[6]);
    c->v.f[2] = c->v.f[22] * c->v.f[24];
    ST32(c->r[4] + 20u, c->v.s[8]);
    ST32(c->r[4] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[0] = -(float)(c->v.f[16] * c->v.f[24]);
    ST32(c->r[4] + 32u, c->v.s[18]);
L_521b84:;
    ST32(c->r[4] + 36u, c->v.s[0]);
    ST32(c->r[4] + 40u, c->v.s[2]);
L_521b8c:;
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_521bb0(Cpu *restrict c) {
    FN_ENTER(0x521bb0u);
L_521bb0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x151aac0u;
    { uint32_t ea = 0x521bc0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x521bc4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xcu;
    c->pc = c->r[4]; c->r[14] = 0x521bdcu; rt_dispatch(c);
    c->r[1] = 0x151aa98u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x521becu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_521bfc(Cpu *restrict c) {
    FN_ENTER(0x521bfcu);
L_521bfc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x15172b8u;
    { uint32_t ea = 0x521c0cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x521c10u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x78u;
    c->pc = c->r[4]; c->r[14] = 0x521c28u; rt_dispatch(c);
    c->r[14] = 0x521c2cu; f_a870b8(c);
    c->r[1] = 0x151aa50u;
    { uint32_t ea = 0x521c38u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    c->r[1] = 0x151aa34u;
    { uint32_t ea = 0x521c58u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_521c7c(Cpu *restrict c) {
    FN_ENTER(0x521c7cu);
L_521c7c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[1];
    c->r[8] = c->r[0];
    c->r[11] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x521cb4u; f_9bb638(c);
    c->r[1] = 0x123c47du;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x521cccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x521d2cu; f_9bb638(c);
    c->r[1] = 0x123c41cu;
    c->r[1] = 0x521d38u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_521d88(Cpu *restrict c) {
    FN_ENTER(0x521d88u);
L_521d88:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151a8ecu;
    { uint32_t ea = 0x521d9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x64u; }
    c->r[14] = 0x521da8u; f_200690(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_521db8(Cpu *restrict c) {
    FN_ENTER(0x521db8u);
L_521db8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151a8bcu;
    { uint32_t ea = 0x521dccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x64u; }
    c->r[14] = 0x521dd8u; f_200690(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x521de0u; f_a87100(c);
    c->r[0] = 0x15170d8u;
    { uint32_t ea = 0x521decu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x521decu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_521e08(Cpu *restrict c) {
    FN_ENTER(0x521e08u);
L_521e08:;
    __attribute__((musttail)) return f_a871d8(c);
}
void f_521e0c(Cpu *restrict c) {
    FN_ENTER(0x521e0cu);
L_521e0c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    c->r[5] = c->r[13] + 0x4u;
    c->r[4] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x521e28u; f_a260d4(c);
    c->r[14] = 0x521e2cu; f_a263f8(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x521e38u; f_a263f8(c);
    c->r[0] = 0x4550u;
    c->r[5] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x430000u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_521f7c; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_521e88; }
    c->r[5] = 0x0u;
L_521e5c:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_521e7c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x521e78u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_521e7c:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_521e5c; }
L_521e88:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[4] + 0x64u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_521eb4; }
    c->r[0] = 0x1516cb8u;
    { uint32_t ea = 0x521ea4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x521ea4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x521eb4u; rt_dispatch(c);
L_521eb4:;
    c->r[8] = 0x0u;
    c->r[0] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[8]); }
    c->r[14] = 0x521eccu; f_a263f8(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[14] = 0x521edcu; f_521f9c(c);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_521f68; }
    c->r[0] = 0x151a788u;
    c->r[11] = c->r[13] + 0x4u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x521ef8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x151a784u;
    { uint32_t ea = 0x521f00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[0] + 0x8u;
L_521f00:;
    c->r[0] = c->r[6];
    c->r[14] = 0x521f08u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0xcu;
    c->pc = c->r[7]; c->r[14] = 0x521f20u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[5] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[11];
    c->r[14] = 0x521f48u; f_a2710c(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x521f50u; f_a263f8(c);
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[5]);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_521f00; }
L_521f68:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x521f78u; rt_dispatch(c);
    c->r[5] = 0x1u;
L_521f7c:;
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x521f84u; f_a26130(c);
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_521f9c(Cpu *restrict c) {
    FN_ENTER(0x521f9cu);
L_521f9c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_522024; }
    c->r[0] = 0x1516b9cu;
    { uint32_t ea = 0x521fc0u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x521fc4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = (c->r[4] << 2);
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x521fdcu; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[6] = c->r[0];
    c->r[14] = 0x521fe8u; f_15efd7c(c);
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0x522000u; f_15efdd0(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x522008u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x522018u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[4]); }
    goto L_522028;
L_522024:;
    c->r[7] = c->r[5] + 0x4u;
L_522028:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_CS) { goto L_5220cc; }
    c->r[0] = c->r[4] - 0x1u;
    c->r[1] = c->r[4] - c->r[6];
    c->r[0] = c->r[0] - c->r[6];
    { uint32_t r = c->r[1] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_522064; }
    c->r[1] = 0x0u - c->r[1];
    c->r[2] = 0x0u;
L_522050:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = f_adds(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] + 0x1u;
    if (COND_NE) { goto L_522050; }
L_522064:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_CC) { goto L_5220c4; }
    c->r[0] = c->r[6] - c->r[4];
    c->r[1] = (c->r[6] << 2);
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
L_52207c:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[6] - (c->r[3] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + c->r[1];
    c->r[6] = c->r[6] - (c->r[3] << 2);
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + c->r[1];
    c->r[6] = c->r[6] - (c->r[3] << 2);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + c->r[1];
    c->r[6] = c->r[6] - (c->r[3] << 2);
    c->r[3] = c->r[3] - 0x4u;
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_52207c; }
L_5220c4:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5220cc:;
    if (COND_LS) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
L_5220d0:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_522124; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6] - 0x1u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_522124; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x522104u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CS) { goto L_52212c; }
L_522110:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_522124:;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_522110; }
L_52212c:;
    c->r[6] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[6], c->r[4]);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    if (COND_HI) { goto L_5220d0; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_522144(Cpu *restrict c) {
    FN_ENTER(0x522144u);
L_522144:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x328u;
    c->r[6] = c->r[13];
    c->r[4] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[6];
    c->r[14] = 0x522164u; f_a2772c(c);
    c->r[1] = 0x4550u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x430000u;
    c->r[14] = 0x522170u; f_a27998(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x522180u; f_a27998(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x522190u; f_a27998(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5221d4; }
    c->r[6] = c->r[13];
L_52219c:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[6];
    c->r[14] = 0x5221b4u; f_a27cd0(c);
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5221c8u; f_a27998(c);
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_52219c; }
L_5221d4:;
    c->r[0] = c->r[13];
    c->r[14] = 0x5221dcu; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x328u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5221e8(Cpu *restrict c) {
    FN_ENTER(0x5221e8u);
L_5221e8:;
    return;
}
void f_5221ec(Cpu *restrict c) {
    FN_ENTER(0x5221ecu);
L_5221ec:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5221f0(Cpu *restrict c) {
    FN_ENTER(0x5221f0u);
L_5221f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151a47cu;
    { uint32_t ea = 0x522204u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x522204u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52221c(Cpu *restrict c) {
    FN_ENTER(0x52221cu);
L_52221c:;
    c->r[0] = 0x151a458u;
    { uint32_t ea = 0x522228u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_52222c(Cpu *restrict c) {
    FN_ENTER(0x52222cu);
L_52222c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_522230(Cpu *restrict c) {
    FN_ENTER(0x522230u);
L_522230:;
    c->r[0] = 0x1516c88u;
    { uint32_t ea = 0x52223cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_522240(Cpu *restrict c) {
    FN_ENTER(0x522240u);
L_522240:;
    c->r[0] = 0x123bf0fu;
    c->r[0] = 0x52224cu + c->r[0];
    return;
}
void f_522250(Cpu *restrict c) {
    FN_ENTER(0x522250u);
L_522250:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x522258u; f_200690(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9ca854(c);
}
void f_522260(Cpu *restrict c) {
    FN_ENTER(0x522260u);
L_522260:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[1] = 0x15168d8u;
    c->r[0] = 0x151a3ecu;
    c->r[4] = 0x0u;
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x52228cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x123be72u;
    { uint32_t ea = 0x522294u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x522298u + c->r[1];
    c->r[14] = 0x522298u; f_9aedcc(c);
    c->r[1] = 0x151a3dcu;
    c->r[3] = 0x78u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x5222b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x15168b4u;
    c->r[0] = 0x1516bf4u;
    { uint32_t ea = 0x5222c8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x123be5cu;
    { uint32_t ea = 0x5222d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5222d4u + c->r[1];
    c->r[14] = 0x5222d4u; f_9aedcc(c);
    c->r[1] = 0x151a3b4u;
    { uint32_t ea = 0x5222e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_52230c(Cpu *restrict c) {
    FN_ENTER(0x52230cu);
L_52230c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1517318u;
    { uint32_t ea = 0x52231cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x522320u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xb0u;
    c->pc = c->r[4]; c->r[14] = 0x522338u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_522344(c);
}
void f_522344(Cpu *restrict c) {
    FN_ENTER(0x522344u);
L_522344:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x522350u; f_a870b8(c);
    c->r[0] = 0x151a32cu;
    c->r[5] = 0x0u;
    c->r[1] = 0x16u;
    c->r[9] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x52236cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x15167e4u;
    { uint32_t ea = 0x52237cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x84u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x98u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[5]); c->r[0] = ea; }
    c->r[8] = c->r[0];
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[5]); c->r[8] = ea; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[5]); c->r[6] = ea; }
    { uint32_t ea = c->r[0] - 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = 0x123bd90u;
    { uint32_t ea = c->r[0] - 0x30u; ST8(ea, c->r[9]); }
    c->r[7] = 0x5223e0u + c->r[1];
    c->r[1] = c->r[7];
    c->r[14] = 0x5223e4u; f_9c8ce0(c);
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + 0x84u; ST8(ea, c->r[9]); }
    c->r[14] = 0x5223f8u; f_9c8ce0(c);
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[4] + 0x98u; ST8(ea, c->r[9]); }
    c->r[14] = 0x52240cu; f_9c8ce0(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_522444; }
L_522418:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_522438; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x522434u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_522438:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_522418; }
L_522444:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52246c; }
    c->r[0] = 0x1516700u;
    { uint32_t ea = 0x52245cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52245cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x52246cu; rt_dispatch(c);
L_52246c:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5224b4; }
L_522488:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5224a8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5224a4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_5224a8:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_522488; }
L_5224b4:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5224dc; }
    c->r[0] = 0x1516690u;
    { uint32_t ea = 0x5224ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5224ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5224dcu; rt_dispatch(c);
L_5224dc:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_522524; }
L_5224f8:;
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_522518; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x522514u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
L_522518:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5224f8; }
L_522524:;
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52254c; }
    c->r[0] = 0x1516620u;
    { uint32_t ea = 0x52253cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52253cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x52254cu; rt_dispatch(c);
L_52254c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_52257c(Cpu *restrict c) {
    FN_ENTER(0x52257cu);
L_52257c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151a108u;
    { uint32_t ea = 0x522590u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5225e0; }
L_5225a0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5225a0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5225d8; }
    c->r[0] = 0x15165bcu;
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5225ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5225d8u; rt_dispatch(c);
L_5225d8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[0]); }
L_5225e0:;
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52262c; }
L_5225ec:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5225ec; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_522624; }
    c->r[0] = 0x1516570u;
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x522618u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x522624u; rt_dispatch(c);
L_522624:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[0]); }
L_52262c:;
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_522678; }
L_522638:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_522638; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_522670; }
    c->r[0] = 0x1516524u;
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x522664u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x522670u; rt_dispatch(c);
L_522670:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[0]); }
L_522678:;
    c->r[0] = c->r[4] + 0x8cu;
    c->r[14] = 0x522680u; f_200690(c);
    c->r[0] = c->r[4] + 0x78u;
    c->r[14] = 0x522688u; f_200690(c);
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x522690u; f_200690(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_5226ac(Cpu *restrict c) {
    FN_ENTER(0x5226acu);
L_5226ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5226b8u; f_52257c(c);
    c->r[0] = 0x1516f70u;
    { uint32_t ea = 0x5226c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5226c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5226dc(Cpu *restrict c) {
    FN_ENTER(0x5226dcu);
L_5226dc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[0];
    c->r[0] = c->r[2] + 0x1u;
    c->r[11] = c->r[1];
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_522960; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x522704u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x522718u: goto L_522718; case 0x522860u: goto L_522860; case 0x5228a4u: goto L_5228a4; case 0x5228e8u: goto L_5228e8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_522718:;
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x522740u; f_9bb638(c);
    c->r[1] = 0x123ba2cu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x522758u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
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
    c->r[14] = 0x5227b8u; f_9bb638(c);
    c->r[1] = 0x123b9beu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5227ccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x78u;
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
    c->r[14] = 0x522830u; f_9bb638(c);
    c->r[1] = 0x123b957u;
    c->r[1] = 0x52283cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    goto L_522940;
L_522860:;
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x522888u; f_9bb638(c);
    c->r[1] = 0x123b8f0u;
    c->r[1] = 0x522894u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x64u;
    goto L_522928;
L_5228a4:;
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5228ccu; f_9bb638(c);
    c->r[1] = 0x123b8b2u;
    c->r[1] = 0x5228d8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x78u;
    goto L_522928;
L_5228e8:;
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x522910u; f_9bb638(c);
    c->r[1] = 0x123b877u;
    c->r[1] = 0x52291cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8cu;
L_522928:;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
L_522940:;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
L_522960:;
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_522980(Cpu *restrict c) {
    FN_ENTER(0x522980u);
L_522980:;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_HI) { return; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_LS) { goto L_5229b0; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_5229b0:;
    return;
}
void f_5229b4(Cpu *restrict c) {
    FN_ENTER(0x5229b4u);
L_5229b4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[4] = c->r[0];
    c->r[11] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_NE) { c->r[11] = 0x2u; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_522ac4; }
    c->r[0] = 0x1516a64u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5229ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x151695cu;
    { uint32_t ea = 0x5229f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1516a4cu;
    { uint32_t ea = 0x522a04u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1519c90u;
    { uint32_t ea = 0x522a0cu + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_522a08:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_522a6c; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_522ab4; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_522ab4; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[11];
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x122e322u;
    if (COND_EQ) { c->r[2] = 0x522a54u + c->r[0]; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[12]; c->r[14] = 0x522a64u; rt_dispatch(c);
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    goto L_522ab0;
L_522a6c:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_522ab4; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[11];
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x122e2deu;
    if (COND_EQ) { c->r[2] = 0x522a98u + c->r[0]; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[12]; c->r[14] = 0x522aacu; rt_dispatch(c);
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); }
L_522ab0:;
    c->r[0] = 0x1u;
L_522ab4:;
    c->r[5] = c->r[5] + 0x1u;
    c->r[6] = c->r[6] | c->r[0];
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_522a08; }
L_522ac4:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_522bb8; }
    c->r[0] = 0x1516970u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x522ae0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1519bb0u;
    { uint32_t ea = 0x522aecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1516958u;
    { uint32_t ea = 0x522af8u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1516854u;
    { uint32_t ea = 0x522b00u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_522afc:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_522b60; }
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_522ba8; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_522ba8; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[11];
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x122e22eu;
    if (COND_EQ) { c->r[2] = 0x522b48u + c->r[0]; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[12]; c->r[14] = 0x522b58u; rt_dispatch(c);
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); }
    goto L_522ba4;
L_522b60:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_522ba8; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[11];
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x122e1eau;
    if (COND_EQ) { c->r[2] = 0x522b8cu + c->r[0]; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[12]; c->r[14] = 0x522ba0u; rt_dispatch(c);
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
L_522ba4:;
    c->r[0] = 0x1u;
L_522ba8:;
    c->r[5] = c->r[5] + 0x1u;
    c->r[6] = c->r[6] | c->r[0];
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_522afc; }
L_522bb8:;
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_522cac; }
    c->r[0] = 0x151687cu;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x522bd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1519abcu;
    { uint32_t ea = 0x522be0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1516864u;
    { uint32_t ea = 0x522becu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1516760u;
    { uint32_t ea = 0x522bf4u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_522bf0:;
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_522c54; }
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_522c9c; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_522c9c; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[11];
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x122e13au;
    if (COND_EQ) { c->r[2] = 0x522c3cu + c->r[0]; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[12]; c->r[14] = 0x522c4cu; rt_dispatch(c);
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); }
    goto L_522c98;
L_522c54:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_522c9c; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[11];
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x122e0f6u;
    if (COND_EQ) { c->r[2] = 0x522c80u + c->r[0]; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[12]; c->r[14] = 0x522c94u; rt_dispatch(c);
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
L_522c98:;
    c->r[0] = 0x1u;
L_522c9c:;
    c->r[5] = c->r[5] + 0x1u;
    c->r[6] = c->r[6] | c->r[0];
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_522bf0; }
L_522cac:;
    c->r[0] = c->r[6] & 0x1u;
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_522d00(Cpu *restrict c) {
    FN_ENTER(0x522d00u);
L_522d00:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_522d58; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x0u;
L_522d18:;
    { uint32_t ea = c->r[12] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_522d34; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x11u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_522e08; }
L_522d34:;
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_522d4c; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x11u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_522e08; }
L_522d4c:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[14]);
    if (COND_CC) { goto L_522d18; }
L_522d58:;
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_522dac; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x0u;
L_522d6c:;
    { uint32_t ea = c->r[12] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_522d88; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x11u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_522e08; }
L_522d88:;
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_522da0; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x11u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_522e08; }
L_522da0:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[14]);
    if (COND_CC) { goto L_522d6c; }
L_522dac:;
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_522e10; }
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x0u;
L_522dc0:;
    { uint32_t ea = c->r[12] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_522ddc; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x11u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_522e08; }
L_522ddc:;
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_522df4; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x11u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_522e08; }
L_522df4:;
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_522dc0; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_522e08:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_522e10:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_522e18(Cpu *restrict c) {
    FN_ENTER(0x522e18u);
L_522e18:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0x522e2cu; f_a871d8(c);
    { uint32_t ea = c->r[10] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x122df0eu;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[6] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[11];
    if (COND_EQ) { c->r[6] = 0x522e68u + c->r[1]; }
    c->r[14] = 0x522e68u; f_9bb638(c);
    c->r[1] = 0x1u;
    c->r[14] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x64u;
    c->r[2] = c->r[14];
    c->r[8] = c->r[14] | 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = 0x122de82u;
    { uint32_t ea = c->r[10] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[9]); }
    c->r[4] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[11];
    if (COND_EQ) { c->r[4] = 0x522ef4u + c->r[1]; }
    c->r[14] = 0x522ef4u; f_9bb638(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[2] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x78u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = 0x122ddfeu;
    { uint32_t ea = c->r[10] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[9]); }
    c->r[5] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[11];
    if (COND_EQ) { c->r[5] = 0x522f78u + c->r[1]; }
    c->r[14] = 0x522f78u; f_9bb638(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_522fd4(Cpu *restrict c) {
    FN_ENTER(0x522fd4u);
L_522fd4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x34u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->pc = c->r[1]; c->r[14] = 0x522ff0u; rt_dispatch(c);
    c->r[5] = c->r[13] + 0x1cu;
    c->r[1] = c->r[4];
    c->r[2] = 0x80000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x523004u; f_a260d4(c);
    c->r[14] = 0x523008u; f_a263f8(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x523014u; f_a263f8(c);
    c->r[1] = 0x4550u;
    c->r[4] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4c0000u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_52323c; }
    c->r[1] = 0x1519668u;
    c->r[8] = 0x0u;
    { uint32_t ea = 0x523038u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1519660u;
    { uint32_t ea = 0x523044u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x151965cu;
    { uint32_t ea = 0x52304cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1515afcu;
    { uint32_t ea = 0x523060u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_523064:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[5] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + 0x70u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = c->r[5] + 0x68u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5230d8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[5] + 0x74u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5230c8; }
    c->r[6] = 0x0u;
L_523098:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5230b8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5230b4u; rt_dispatch(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
L_5230b8:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_523098; }
    goto L_5230cc;
L_5230c8:;
    c->r[1] = 0x0u;
L_5230cc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 2);
    c->r[14] = 0x5230d8u; f_15efd7c(c);
L_5230d8:;
    c->r[0] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[8]); }
    c->r[14] = 0x5230e4u; f_a263f8(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_523218; }
    c->r[10] = c->r[5] + 0x6cu;
    c->r[0] = c->r[5] + 0x74u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[10]); }
L_523100:;
    c->r[0] = c->r[11];
    c->r[14] = 0x523108u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0xc0u;
    c->pc = c->r[7]; c->r[14] = 0x523120u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x523154u; f_523ee4(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[13] + 0x1cu;
    c->r[14] = 0x523160u; f_523264(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_CS) { goto L_523188; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_52320c;
L_523188:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x523194u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[11] = c->r[6] + 0x10u;
    c->r[2] = 0x10u;
    c->r[6] = (c->r[11] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x5231b0u; rt_dispatch(c);
    c->r[1] = c->r[6];
    c->r[7] = c->r[0];
    c->r[14] = 0x5231bcu; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0x5231d4u; f_15efdd0(c);
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[14] = 0x5231e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5231f0u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
L_52320c:;
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    if (COND_NE) { goto L_523100; }
L_523218:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_523064; }
    c->r[0] = 0x1519464u;
    c->r[4] = 0x1u;
    c->r[1] = ~0x0u;
    { uint32_t ea = 0x52323cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_52323c:;
    c->r[0] = c->r[13] + 0x1cu;
    c->r[14] = 0x523244u; f_a26130(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_523264(Cpu *restrict c) {
    FN_ENTER(0x523264u);
L_523264:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[5] = c->r[1];
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_523298; }
    c->r[0] = c->r[5];
    c->r[14] = 0x523288u; f_a261fc(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5232a8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_523298:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5232a8:;
    c->r[0] = 0x1516194u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x5232b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0x1u;
    c->pc = c->r[3]; c->r[14] = 0x5232c8u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x5232e4u; rt_dispatch(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[6] + c->r[4]; ST8(ea, c->r[7]); }
    if (COND_EQ) { goto L_523348; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5232fcu; f_15efd88(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_523344; }
    c->r[0] = 0x1515870u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x523318u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x523328u; rt_dispatch(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x1u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = c->r[7] + 0x8u;
    c->r[14] = 0x523340u; f_15efd94(c);
    goto L_523348;
L_523344:;
    c->r[7] = 0x0u;
L_523348:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_5233c0; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52339c; }
L_52335c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_52335c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_523394; }
    c->r[0] = 0x1515800u;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x523388u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x523394u; rt_dispatch(c);
L_523394:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
L_52339c:;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_523400; }
L_5233a8:;
    c->r[0] = ldrex32(c, c->r[7]);
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = strex32(c, c->r[7], c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5233a8; }
    goto L_5233c8;
L_5233c0:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_523400; }
L_5233c8:;
    c->r[0] = ldrex32(c, c->r[7]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[7], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5233c8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_523400; }
    c->r[0] = 0x1515798u;
    { uint32_t ea = 0x5233f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x523400u; rt_dispatch(c);
L_523400:;
    c->r[0] = 0x1516040u;
    { uint32_t ea = 0x52340cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x52341cu; rt_dispatch(c);
    c->r[0] = 0x1519278u;
    { uint32_t ea = 0x523428u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_CC) { goto L_5235d8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_523458; }
    c->r[0] = c->r[5];
    c->r[14] = 0x523448u; f_a261fc(c);
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_523468; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_523458:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_523468:;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523480; }
    c->r[14] = 0x523478u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[0]); }
L_523480:;
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_CC) { goto L_523524; }
    c->r[0] = 0x1515fb4u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x523498u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] + 0x1u;
    c->pc = c->r[3]; c->r[14] = 0x5234a8u; rt_dispatch(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x5234c4u; rt_dispatch(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[8] + c->r[6]; ST8(ea, c->r[7]); }
    if (COND_EQ) { goto L_523538; }
    c->r[0] = c->r[8];
    c->r[14] = 0x5234dcu; f_15efd88(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_523534; }
    c->r[0] = 0x1515690u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x5234f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x523508u; rt_dispatch(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x1u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = c->r[7] + 0x8u;
    c->r[14] = 0x523520u; f_15efd94(c);
    goto L_523538;
L_523524:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x523530u; f_a26fe4(c);
    goto L_5235cc;
L_523534:;
    c->r[7] = 0x0u;
L_523538:;
    c->r[0] = 0x122d826u;
    c->r[2] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[3] = 0x1u;
    if (COND_EQ) { c->r[2] = 0x523550u + c->r[0]; }
    c->r[0] = 0x1515ef8u;
    { uint32_t ea = 0x523558u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1519140u;
    { uint32_t ea = 0x52356cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[6]; c->r[14] = 0x52356cu; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1515ed0u;
    { uint32_t ea = 0x52357cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0x52358cu; rt_dispatch(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5235cc; }
L_523594:;
    c->r[0] = ldrex32(c, c->r[7]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[7], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_523594; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5235cc; }
    c->r[0] = 0x15155ccu;
    { uint32_t ea = 0x5235bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x5235ccu; rt_dispatch(c);
L_5235cc:;
    c->r[0] = 0x15190c8u;
    { uint32_t ea = 0x5235d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5235d8:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_5235fc; }
    c->r[2] = 0xa0u;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_NE) { goto L_523600; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9] + 0x20u;
    c->r[2] = 0xa0u;
    goto L_523680;
L_5235fc:;
    c->r[2] = 0x40u;
L_523600:;
    (void)f_subs(c, c->r[0], 0x3u);
    c->r[1] = c->r[0] | 0x1u;
    if (COND_EQ) { c->r[2] = 0x50u; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { c->r[2] = 0x60u; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_EQ) { c->r[2] = 0x70u; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_EQ) { c->r[2] = 0x90u; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_EQ) { c->r[2] = 0xa0u; }
    (void)f_subs(c, c->r[0], 0xeu);
    if (COND_EQ) { goto L_523650; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_EQ) { goto L_52365c; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { c->r[2] = 0xb0u; }
    if (COND_EQ) { { uint32_t ea = c->r[9] + 0x7cu; ST32(ea, c->r[0]); } }
    goto L_523670;
L_523650:;
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[9] + 0xbcu; ST32(ea, c->r[0]); }
    goto L_52366c;
L_52365c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x92u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x61u; ST8(ea, c->r[0]); }
L_52366c:;
    c->r[2] = 0xa0u;
L_523670:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0xa0u);
    c->r[1] = c->r[9] + 0x20u;
    if (COND_CS) { c->r[2] = 0xa0u; }
L_523680:;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x52368cu; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x5du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[1] = 0x2u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x1u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5236e8(Cpu *restrict c) {
    FN_ENTER(0x5236e8u);
L_5236e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    c->pc = c->r[2]; c->r[14] = 0x5236fcu; rt_dispatch(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_523704(Cpu *restrict c) {
    FN_ENTER(0x523704u);
L_523704:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x328u;
    c->r[6] = c->r[13];
    c->r[4] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[6];
    c->r[14] = 0x523724u; f_a2772c(c);
    c->r[1] = 0x4550u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4c0000u;
    c->r[14] = 0x523730u; f_a27998(c);
    c->r[0] = c->r[6];
    c->r[1] = 0xfu;
    c->r[14] = 0x52373cu; f_a27998(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x52374cu; f_a27998(c);
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_523778; }
    c->r[7] = 0x0u;
    c->r[6] = c->r[13];
L_52375c:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52376cu; f_523804(c);
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_52375c; }
L_523778:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[13];
    c->r[1] = c->r[5];
    c->r[14] = 0x523788u; f_a27998(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LE) { goto L_5237b4; }
    c->r[7] = 0x0u;
    c->r[6] = c->r[13];
L_523798:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5237a8u; f_523804(c);
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_523798; }
L_5237b4:;
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[13];
    c->r[1] = c->r[5];
    c->r[14] = 0x5237c4u; f_a27998(c);
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_5237f0; }
    c->r[7] = 0x0u;
    c->r[6] = c->r[13];
L_5237d4:;
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5237e4u; f_523804(c);
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_5237d4; }
L_5237f0:;
    c->r[0] = c->r[13];
    c->r[14] = 0x5237f8u; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x328u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_523804(Cpu *restrict c) {
    FN_ENTER(0x523804u);
L_523804:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[8] = c->r[0];
    c->r[4] = c->r[1];
    c->r[9] = 0x1u;
    { uint32_t ea = c->r[8] + 0x5du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52386c; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5239d4; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523944; }
L_523838:;
    c->r[7] = c->r[0] + 0x8u;
    c->r[0] = 0x122d52eu;
    c->r[0] = 0x523848u + c->r[0];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { goto L_5239d0; }
    c->r[0] = c->r[7];
    c->r[14] = 0x523854u; f_15efd88(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5239d0; }
    c->r[0] = 0x151531cu;
    { uint32_t ea = 0x52386cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5238a8;
L_52386c:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5239bc; }
L_523878:;
    c->r[7] = c->r[0] + 0x8u;
    c->r[0] = 0x122d4eeu;
    c->r[0] = 0x523888u + c->r[0];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { goto L_5239d0; }
    c->r[0] = c->r[7];
    c->r[14] = 0x523894u; f_15efd88(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5239d0; }
    c->r[0] = 0x15152dcu;
    { uint32_t ea = 0x5238acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5238a8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x5238c0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x1u;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x5238dcu; f_15efd94(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5239d0; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_523c60; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_523914; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x523910u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_523914:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[1] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x523940u; rt_dispatch(c);
    goto L_523a34;
L_523944:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5239d0; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_523c68; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5239d4; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5239d4; }
    c->r[0] = 0x1515abcu;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x523994u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1518cf4u;
    { uint32_t ea = 0x5239a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[7]; c->r[14] = 0x5239a8u; rt_dispatch(c);
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_523838; }
    goto L_5239d0;
L_5239bc:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_523c10; }
L_5239d0:;
    c->r[6] = 0x0u;
L_5239d4:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5239f8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5239f4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5239f8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x122d34eu;
    c->r[1] = 0x523a28u + c->r[0];
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x523a2cu; rt_dispatch(c);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_523a6c; }
L_523a34:;
    c->r[0] = ldrex32(c, c->r[6]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[6], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_523a34; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_523a6c; }
    c->r[0] = 0x151512cu;
    { uint32_t ea = 0x523a5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x523a6cu; rt_dispatch(c);
L_523a6c:;
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523b4c; }
    c->r[5] = c->r[0] + 0x8u;
    c->r[0] = 0x122d2eau;
    c->r[0] = 0x523a8cu + c->r[0];
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_523b4c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x523a98u; f_15efd88(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_523b4c; }
    c->r[0] = 0x15150d4u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x523ab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x523ac4u; rt_dispatch(c);
    c->r[6] = c->r[0];
    c->r[9] = 0x1u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[6] + 0x8u;
    c->r[0] = c->r[7];
    c->r[14] = 0x523ae4u; f_15efd94(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_523b4c; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_523c08; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_523b1c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x523b18u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_523b1c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x523b48u; rt_dispatch(c);
    goto L_523bb0;
L_523b4c:;
    c->r[6] = 0x0u;
L_523b50:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_523b74; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x523b70u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_523b74:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x122d1d2u;
    c->r[1] = 0x523ba4u + c->r[0];
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x523ba8u; rt_dispatch(c);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_523be8; }
L_523bb0:;
    c->r[0] = ldrex32(c, c->r[6]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[6], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_523bb0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_523be8; }
    c->r[0] = 0x1514fb0u;
    { uint32_t ea = 0x523bd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x523be8u; rt_dispatch(c);
L_523be8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8] + 0x20u;
    c->r[2] = 0xa0u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x523c00u; rt_dispatch(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_523c08:;
    c->r[9] = 0x0u;
    goto L_523b50;
L_523c10:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_523ca0; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5239d4; }
    c->r[0] = 0x1515814u;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x523c3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1518a4cu;
    { uint32_t ea = 0x523c50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[7]; c->r[14] = 0x523c50u; rt_dispatch(c);
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_523878; }
    goto L_5239d0;
L_523c60:;
    c->r[9] = 0x0u;
    goto L_5239d4;
L_523c68:;
    c->r[0] = 0x15157d4u;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x523c7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x15156c4u;
    { uint32_t ea = 0x523c90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[7]; c->r[14] = 0x523c90u; rt_dispatch(c);
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_523838; }
    goto L_5239d0;
L_523ca0:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5239d4; }
    c->r[0] = 0x151578cu;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x523cc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x151567cu;
    { uint32_t ea = 0x523cd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[7]; c->r[14] = 0x523cd8u; rt_dispatch(c);
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_523878; }
    goto L_5239d0;
}
void f_523d34(Cpu *restrict c) {
    FN_ENTER(0x523d34u);
L_523d34:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523d98; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_523d88; }
    c->r[5] = 0x0u;
L_523d58:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523d78; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x523d74u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_523d78:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_523d58; }
    goto L_523d8c;
L_523d88:;
    c->r[1] = 0x0u;
L_523d8c:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 2);
    c->r[14] = 0x523d98u; f_15efd7c(c);
L_523d98:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523df8; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523dec; }
    c->r[5] = 0x0u;
    c->r[1] = c->r[0];
L_523dc0:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523de0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x523ddcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_523de0:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_523dc0; }
L_523dec:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 2);
    c->r[14] = 0x523df8u; f_15efd7c(c);
L_523df8:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523e58; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523e4c; }
    c->r[5] = 0x0u;
    c->r[1] = c->r[0];
L_523e20:;
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523e40; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x523e3cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
L_523e40:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_523e20; }
L_523e4c:;
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 2);
    c->r[14] = 0x523e58u; f_15efd7c(c);
L_523e58:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_523e64(Cpu *restrict c) {
    FN_ENTER(0x523e64u);
L_523e64:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1518830u;
    { uint32_t ea = 0x523e74u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x523e78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xc0u;
    c->pc = c->r[4]; c->r[14] = 0x523e90u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x1518808u;
    { uint32_t ea = 0x523ea0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x523ed4u; f_523ee4(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_523ee4(Cpu *restrict c) {
    FN_ENTER(0x523ee4u);
L_523ee4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[2] = 0x123a29eu;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x523efcu + c->r[2];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[0];
    c->r[3] = c->r[0] + 0x8u;
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_523f18; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_523fa8; }
L_523f18:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523f60; }
L_523f20:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_523f20; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_523f58; }
    c->r[0] = 0x1514c3cu;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x523f4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x523f58u; rt_dispatch(c);
L_523f58:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_523f60:;
    c->r[0] = 0x1514c18u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x523f70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xdu;
    c->pc = c->r[3]; c->r[14] = 0x523f80u; rt_dispatch(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    c->r[1] = 0x2du;
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
L_523fa8:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_523fd0; }
    c->r[14] = 0x523fb8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_523fdc; }
    goto L_523fe8;
L_523fd0:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_524044; }
L_523fdc:;
    c->r[14] = 0x523fe0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_523fe8:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[2] = 0x122cd76u; }
    if (COND_NE) { c->r[1] = c->r[0] + 0x8u; }
    if (COND_NE) { c->r[2] = 0x524000u + c->r[2]; }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[2]); }
    if (COND_EQ) { goto L_524044; }
L_524004:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_524004; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_52403c; }
    c->r[0] = 0x1514b58u;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x524030u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x52403cu; rt_dispatch(c);
L_52403c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
L_524044:;
    c->r[0] = 0x1514af4u;
    c->r[5] = 0x0u;
    c->r[6] = ~0x0u;
    { uint32_t ea = 0x524058u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1515b4cu;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[5]); }
    c->r[2] = 0x3f000000u;
    { uint32_t ea = 0x524090u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x50u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x52u; ST16(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x54u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x56u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x57u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST16(ea, c->r[0]); }
    c->r[0] = 0x6u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5eu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x44610000u;
    { uint32_t ea = c->r[0] + 0x63u; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] - 0x4u; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x7u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x6u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x9u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xdu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x15u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x11u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x19u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1515128u;
    { uint32_t ea = c->r[0] + 0x1du; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x52412cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x21u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x25u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x27u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x29u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x31u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2du; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x35u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x39u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3du; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x45u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x41u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x47u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x49u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4du; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x51u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x55u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x59u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x5du; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x47u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_524190; }
    c->r[14] = 0x52418cu; f_a87660(c);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
L_524190:;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5241bc(Cpu *restrict c) {
    FN_ENTER(0x5241bcu);
L_5241bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15184d8u;
    { uint32_t ea = 0x5241d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5241ec; }
    c->r[14] = 0x5241e4u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
L_5241ec:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_524204; }
    c->r[14] = 0x5241fcu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_524204:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52421c; }
    c->r[14] = 0x524214u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_52421c:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_524268; }
L_524228:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_524228; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_524260; }
    c->r[0] = 0x1514934u;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x524254u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x524260u; rt_dispatch(c);
L_524260:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
L_524268:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5242b4; }
L_524274:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_524274; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5242ac; }
    c->r[0] = 0x15148e8u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5242a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5242acu; rt_dispatch(c);
L_5242ac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5242b4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5242c8(Cpu *restrict c) {
    FN_ENTER(0x5242c8u);
L_5242c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5242d4u; f_5241bc(c);
    c->r[0] = 0x15183c4u;
    { uint32_t ea = 0x5242e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5242e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5242f8(Cpu *restrict c) {
    FN_ENTER(0x5242f8u);
L_5242f8:;
    return;
}
void f_5242fc(Cpu *restrict c) {
    FN_ENTER(0x5242fcu);
L_5242fc:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_524300(Cpu *restrict c) {
    FN_ENTER(0x524300u);
L_524300:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x5du; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_52432c; }
    c->r[5] = c->r[2] + (c->r[1] << 4);
    c->r[4] = c->r[5];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_524330; }
L_52432c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_524330:;
    c->r[7] = c->r[5];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_52432c; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[4] - 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5243b0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_5243a0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5243b0; }
    c->r[0] = 0x15150d4u;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x52437cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x151830cu;
    { uint32_t ea = 0x524390u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[6]; c->r[14] = 0x524390u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_52432c; }
    goto L_5244f8;
L_5243a0:;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5244c0; }
L_5243b0:;
    c->r[0] = 0x0u;
L_5243b4:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_524414; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_52441c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_52445c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_52432c; }
    c->r[0] = 0x1515060u;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0x5243f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1518298u;
    { uint32_t ea = 0x524404u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[6]; c->r[14] = 0x524404u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_52432c; }
    goto L_524464;
L_524414:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_52441c:;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_52445c; }
    c->r[0] = 0x1515010u;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0x524440u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x1514f00u;
    { uint32_t ea = 0x524454u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[12]; c->r[14] = 0x524454u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
L_52445c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_52432c; }
L_524464:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_52450c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_524514; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_52432c; }
    c->r[0] = 0x1514facu;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x5244a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x15181e4u;
    { uint32_t ea = 0x5244b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[7]; c->r[14] = 0x5244b8u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5244c0:;
    c->r[0] = 0x1514f7cu;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x5244d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x1514e6cu;
    { uint32_t ea = 0x5244e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[12]; c->r[14] = 0x5244e8u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_52432c; }
L_5244f8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5243b4; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_52450c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_524514:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[0] = 0x1514f18u;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x524538u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1514e08u;
    { uint32_t ea = 0x52454cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[7]; c->r[14] = 0x52454cu; rt_dispatch(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_524588(Cpu *restrict c) {
    FN_ENTER(0x524588u);
L_524588:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x5du; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_5245b4; }
    c->r[5] = c->r[2] + (c->r[1] << 4);
    c->r[4] = c->r[5];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5245b8; }
L_5245b4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5245b8:;
    c->r[7] = c->r[5];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_5245b4; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[4] - 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_524600; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_524678; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_524600; }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_524760; }
L_524600:;
    c->r[0] = 0x0u;
L_524604:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_524670; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_5246b0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5246e4; }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5246e4; }
    c->r[0] = 0x1514e08u;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0x524648u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x1518040u;
    { uint32_t ea = 0x52465cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[12]; c->r[14] = 0x52465cu; rt_dispatch(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5245b4; }
    goto L_5246ec;
L_524670:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_524678:;
    c->r[0] = 0x1514dc4u;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x52468cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1514cb4u;
    { uint32_t ea = 0x5246a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[6]; c->r[14] = 0x5246a0u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5245b4; }
    goto L_524798;
L_5246b0:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5245b4; }
    c->r[0] = 0x1514d84u;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0x5246ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1514c74u;
    { uint32_t ea = 0x5246e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[6]; c->r[14] = 0x5246e0u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_5246e4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5245b4; }
L_5246ec:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_524758; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_5247ac; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_524758; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[0] = 0x1514d18u;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x524738u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1517f50u;
    { uint32_t ea = 0x52474cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[7]; c->r[14] = 0x52474cu; rt_dispatch(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_524758:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_524760:;
    c->r[0] = 0x1514cdcu;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x524774u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x1517f14u;
    { uint32_t ea = 0x524788u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[12]; c->r[14] = 0x524788u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5245b4; }
L_524798:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_524604; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5247ac:;
    c->r[0] = 0x1514c90u;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x5247c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1514b80u;
    { uint32_t ea = 0x5247d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[7]; c->r[14] = 0x5247d4u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_52480c(Cpu *restrict c) {
    FN_ENTER(0x52480cu);
L_52480c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_524810(Cpu *restrict c) {
    FN_ENTER(0x524810u);
L_524810:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_524814(Cpu *restrict c) {
    FN_ENTER(0x524814u);
L_524814:;
    c->r[0] = 0x1517e84u;
    { uint32_t ea = 0x524820u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_524824(Cpu *restrict c) {
    FN_ENTER(0x524824u);
L_524824:;
    c->r[0] = 0x1514e04u;
    { uint32_t ea = 0x524830u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_524834(Cpu *restrict c) {
    FN_ENTER(0x524834u);
L_524834:;
    c->r[0] = 0x123995cu;
    c->r[0] = 0x524840u + c->r[0];
    return;
}
void f_524844(Cpu *restrict c) {
    FN_ENTER(0x524844u);
L_524844:;
    c->r[0] = 0x0u;
    return;
}
void f_52484c(Cpu *restrict c) {
    FN_ENTER(0x52484cu);
L_52484c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x15657b0u;
    c->r[4] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5u;
    c->r[3] = 0x6u;
    c->r[0] = 0x524870u + c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[12] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[1] = 0x3f800000u;
    c->r[3] = 0xb0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x15142b0u;
    c->r[0] = 0x1514d60u;
    { uint32_t ea = 0x5248ccu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1239887u;
    { uint32_t ea = 0x5248d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5248d8u + c->r[1];
    c->r[14] = 0x5248d8u; f_9aedcc(c);
    c->r[1] = 0x1517dbcu;
    c->r[3] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x5248f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x151425cu;
    c->r[0] = 0x1517d94u;
    { uint32_t ea = 0x524908u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1231f74u;
    { uint32_t ea = 0x524910u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x524914u + c->r[1];
    c->r[14] = 0x524914u; f_9aedcc(c);
    c->r[1] = 0x1517d94u;
    { uint32_t ea = 0x524920u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_524950(Cpu *restrict c) {
    FN_ENTER(0x524950u);
L_524950:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1514cd8u;
    { uint32_t ea = 0x524960u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x524964u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->r[5] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x68u;
    c->pc = c->r[4]; c->r[14] = 0x524980u; rt_dispatch(c);
    c->r[14] = 0x524984u; f_a870b8(c);
    c->r[1] = 0x1517d28u;
    { uint32_t ea = 0x524990u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5249ac(Cpu *restrict c) {
    FN_ENTER(0x5249acu);
L_5249ac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1517cf8u;
    { uint32_t ea = 0x5249c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1514c64u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0x5249d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5249d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5249e4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_524a00(Cpu *restrict c) {
    FN_ENTER(0x524a00u);
L_524a00:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1517ca4u;
    { uint32_t ea = 0x524a14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1514c10u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0x524a28u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x524a2cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x524a3cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x524a4cu; f_a87100(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x524a54u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_524a70(Cpu *restrict c) {
    FN_ENTER(0x524a70u);
L_524a70:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1514bb0u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0x524a88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x524a88u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x524a98u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_524aa8(Cpu *restrict c) {
    FN_ENTER(0x524aa8u);
L_524aa8:;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x6u; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[1]); }
    if (COND_LS) { goto L_524ac8; }
    c->r[0] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_524ac8:;
    return;
}
void f_524acc(Cpu *restrict c) {
    FN_ENTER(0x524accu);
L_524acc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x524ae8u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x524af8u; rt_dispatch(c);
    c->r[7] = c->r[0];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_524be0; }
    c->r[0] = 0x1514b24u;
    { uint32_t ea = 0x524b14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x524b14u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x524b28u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x524b44u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x5350u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x4c0000u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x2u); }
    if (COND_NE) { goto L_524be0; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_524be0; }
    c->r[3] = 0x2u;
    c->r[2] = c->r[0];
L_524b7c:;
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_524bc8; }
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_524bc8; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x7u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_524bc8; }
    { uint32_t ea = c->r[2] + 0x148u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[2] + 0x148u; ST32(ea, c->r[3]); }
L_524bc8:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_524b7c; }
L_524be0:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_524bec(Cpu *restrict c) {
    FN_ENTER(0x524becu);
L_524bec:;
    c->r[0] = 0x0u;
    return;
}
void f_524bf4(Cpu *restrict c) {
    FN_ENTER(0x524bf4u);
L_524bf4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_524bf8(Cpu *restrict c) {
    FN_ENTER(0x524bf8u);
L_524bf8:;
    c->r[0] = 0x1514a34u;
    { uint32_t ea = 0x524c04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_524c08(Cpu *restrict c) {
    FN_ENTER(0x524c08u);
L_524c08:;
    c->r[0] = 0x12395a8u;
    c->r[0] = 0x524c14u + c->r[0];
    return;
}
void f_524c18(Cpu *restrict c) {
    FN_ENTER(0x524c18u);
L_524c18:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1565408u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x524c44u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[1] = 0x1513eecu;
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
    c->r[0] = 0x151499cu;
    { uint32_t ea = 0x524c90u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1239500u;
    c->r[3] = 0x68u;
    { uint32_t ea = 0x524c9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x524ca0u + c->r[1];
    c->r[14] = 0x524ca0u; f_9aedcc(c);
    c->r[1] = 0x1517a10u;
    { uint32_t ea = 0x524cacu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_524ccc(Cpu *restrict c) {
    FN_ENTER(0x524cccu);
L_524ccc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x15179e4u;
    { uint32_t ea = 0x524cdcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x524ce0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8u;
    c->pc = c->r[4]; c->r[14] = 0x524cf8u; rt_dispatch(c);
    c->r[1] = 0x15179bcu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x524d08u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_524d18(Cpu *restrict c) {
    FN_ENTER(0x524d18u);
L_524d18:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1517984u;
    { uint32_t ea = 0x524d28u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x524d2cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x70u;
    c->pc = c->r[4]; c->r[14] = 0x524d44u; rt_dispatch(c);
    c->r[14] = 0x524d48u; f_a870b8(c);
    c->r[1] = 0x1517974u;
    { uint32_t ea = 0x524d54u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x16u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_524d7c(Cpu *restrict c) {
    FN_ENTER(0x524d7cu);
L_524d7c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[0];
    c->r[11] = c->r[1];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x524db8u; f_9bb638(c);
    c->r[1] = 0x1238caau;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x524dd0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
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
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x524e30u; f_9bb638(c);
    c->r[1] = 0x12393b9u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x524e44u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[4] + 0x3u;
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
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x524eacu; f_9bb638(c);
    c->r[1] = 0x1239342u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x524ec0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[4] + 0x1u;
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
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x524f24u; f_9bb638(c);
    c->r[1] = 0x12392d1u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x524f38u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[5] + 0x4u;
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
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x524fa0u; f_9bb638(c);
    c->r[1] = 0x1239264u;
    c->r[1] = 0x524facu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[4] + 0x8u;
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
void f_525008(Cpu *restrict c) {
    FN_ENTER(0x525008u);
L_525008:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_52500c(Cpu *restrict c) {
    FN_ENTER(0x52500cu);
L_52500c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15176a8u;
    { uint32_t ea = 0x525020u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52503c; }
    c->r[14] = 0x525034u; f_9af3e4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
L_52503c:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_52506c; }
    c->r[0] = 0x151766cu;
    { uint32_t ea = 0x525054u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525054u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5] - 0x8u;
    c->pc = c->r[2]; c->r[14] = 0x525064u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
L_52506c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_525080(Cpu *restrict c) {
    FN_ENTER(0x525080u);
L_525080:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1517634u;
    { uint32_t ea = 0x525094u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5250b0; }
    c->r[14] = 0x5250a8u; f_9af3e4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
L_5250b0:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5250e0; }
    c->r[0] = 0x15175f8u;
    { uint32_t ea = 0x5250c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5250c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5] - 0x8u;
    c->pc = c->r[2]; c->r[14] = 0x5250d8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
L_5250e0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5250e8u; f_a87100(c);
    c->r[0] = 0x15175b8u;
    { uint32_t ea = 0x5250f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5250f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_525114(Cpu *restrict c) {
    FN_ENTER(0x525114u);
L_525114:;
    __attribute__((musttail)) return f_a871d8(c);
}
void f_525118(Cpu *restrict c) {
    FN_ENTER(0x525118u);
L_525118:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13];
    c->r[2] = 0x80000u;
    c->r[14] = 0x525130u; f_a260d4(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_525148; }
    c->r[14] = 0x525140u; f_9af3e4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
L_525148:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_525178; }
    c->r[0] = 0x1517560u;
    { uint32_t ea = 0x525160u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525160u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5] - 0x8u;
    c->pc = c->r[2]; c->r[14] = 0x525170u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
L_525178:;
    c->r[5] = c->r[13];
    c->r[0] = c->r[5];
    c->r[14] = 0x525184u; f_a263f8(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x525190u; f_a263f8(c);
    c->r[0] = 0x4550u;
    c->r[5] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x500000u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_525364; }
    c->r[5] = c->r[13];
    c->r[0] = c->r[5];
    c->r[14] = 0x5251b0u; f_a263f8(c);
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5251c4u; rt_dispatch(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x5251d0u; f_a26fb8(c);
    c->r[6] = c->r[6] - c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x5251dcu; f_9af3a0(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[1]); }
    c->r[14] = 0x5251f0u; f_a2710c(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = 0x8u;
    { uint64_t r = (uint64_t)c->r[7] * c->r[8]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[5] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[5], c->r[0]);
    c->r[0] = 0x15174a0u;
    if (COND_CC) { c->r[5] = ~0x0u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = 0x525220u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_NE) { c->r[5] = ~0x0u; }
    c->r[0] = c->r[6];
    c->r[14] = 0x525228u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[6]; c->r[14] = 0x525240u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5252e4; }
    c->r[1] = ~0x7u;
    c->r[2] = c->r[1] + (c->r[7] << 3);
    c->r[1] = 0x1u;
    c->r[1] = c->r[1] + (c->r[2] >> 3);
    { uint32_t r = c->r[1] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_52529c; }
    c->r[3] = 0x0u - c->r[1];
    c->r[1] = 0x1517444u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x525280u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + 0x8u;
    c->r[1] = c->r[0];
L_525284:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] + 0x8u;
    c->r[3] = f_adds(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_525284; }
    goto L_5252a0;
L_52529c:;
    c->r[1] = c->r[0];
L_5252a0:;
    (void)f_subs(c, c->r[2], 0x18u);
    if (COND_CC) { goto L_5252e4; }
    c->r[3] = 0x1517408u;
    c->r[2] = c->r[0] + (c->r[7] << 3);
    c->r[7] = 0x0u;
    { uint32_t ea = 0x5252bcu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
L_5252bc:;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] + 0x20u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_5252bc; }
L_5252e4:;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_525350; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
L_5252fc:;
    c->r[0] = c->r[0] + (c->r[2] << 3);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] + (c->r[2] << 3);
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_EQ) { goto L_52532c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_525334; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_52533c; }
L_52532c:;
    c->r[1] = c->r[1] + 0x8u;
    goto L_525340;
L_525334:;
    c->r[1] = c->r[1] + 0xcu;
    goto L_525340;
L_52533c:;
    c->r[1] = c->r[1] + 0x4u;
L_525340:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_5252fc; }
L_525350:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x525360u; rt_dispatch(c);
    c->r[5] = 0x1u;
L_525364:;
    c->r[0] = c->r[13];
    c->r[14] = 0x52536cu; f_a26130(c);
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_525388(Cpu *restrict c) {
    FN_ENTER(0x525388u);
L_525388:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x328u;
    c->r[5] = c->r[13];
    c->r[4] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5253a8u; f_a2772c(c);
    c->r[1] = 0x4550u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x500000u;
    c->r[14] = 0x5253b4u; f_a27998(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[14] = 0x5253c0u; f_a27998(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5253ccu; f_a27998(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_525568; }
    c->r[6] = 0x0u;
    c->r[5] = c->r[13];
L_5253e0:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_525414; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x525410u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_525414:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[6] << 3);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_525458; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x525454u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_525458:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[6] << 3);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_52549c; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x525498u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_52549c:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[6] << 3);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5254e0; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5254dcu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5254e0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_52554c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_525524; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_525558; }
    c->v.s[0] = LD32(c->r[0] + 4u);
    goto L_525540;
L_525524:;
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->r[0] = c->r[5];
    c->r[14] = 0x525530u; f_a27bbc(c);
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 8u);
L_525540:;
    c->r[0] = c->r[5];
    c->r[14] = 0x525548u; f_a27bbc(c);
    goto L_525558;
L_52554c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x525558u; f_a27ad4(c);
L_525558:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_5253e0; }
L_525568:;
    c->r[0] = c->r[13];
    c->r[14] = 0x525570u; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x328u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_52557c(Cpu *restrict c) {
    FN_ENTER(0x52557cu);
L_52557c:;
    return;
}
void f_525580(Cpu *restrict c) {
    FN_ENTER(0x525580u);
L_525580:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[2];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5255f4; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5255d4; }
    c->r[0] = 0x1514600u;
    { uint32_t ea = 0x5255b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5255b4u; f_9cc110(c);
    c->v.s[2] = c->r[0];
    c->v.s[0] = 0x2f800000u;
    c->v.s[4] = c->r[6];
    c->v.f[2] = (float)c->v.s[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->r[6] = c->v.s[0];
L_5255d4:;
    c->r[7] = 0x0u;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5255f4; }
    c->r[0] = 0x15145c8u;
    { uint32_t ea = 0x5255ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5255ecu; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = c->r[6] ^ 0x80000000u; }
L_5255f4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_52566c; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_525658; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_52563c; }
    c->r[0] = 0x1514598u;
    { uint32_t ea = 0x52561cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52561cu; f_9cc110(c);
    c->v.s[2] = c->r[0];
    c->v.s[0] = 0x2f800000u;
    c->v.s[4] = c->r[6];
    c->v.f[2] = (float)c->v.s[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->r[6] = c->v.s[0];
L_52563c:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525658; }
    c->r[0] = 0x1514564u;
    { uint32_t ea = 0x525650u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525650u; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = c->r[6] ^ 0x80000000u; }
L_525658:;
    c->v.s[0] = LD32(c->r[4]);
    c->v.s[2] = c->r[6];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[4], c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_52566c:;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5256e0; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_5256cc; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5256b0; }
    c->r[0] = 0x1514524u;
    { uint32_t ea = 0x525690u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525690u; f_9cc110(c);
    c->v.s[2] = c->r[0];
    c->v.s[0] = 0x2f800000u;
    c->v.s[4] = c->r[6];
    c->v.f[2] = (float)c->v.s[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->r[6] = c->v.s[0];
L_5256b0:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5256cc; }
    c->r[0] = 0x15144f0u;
    { uint32_t ea = 0x5256c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5256c4u; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = c->r[6] ^ 0x80000000u; }
L_5256cc:;
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.s[2] = c->r[6];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[4] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5256e0:;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_525740; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525724; }
    c->r[0] = 0x15144b0u;
    { uint32_t ea = 0x525704u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525704u; f_9cc110(c);
    c->v.s[2] = c->r[0];
    c->v.s[0] = 0x2f800000u;
    c->v.s[4] = c->r[6];
    c->v.f[2] = (float)c->v.s[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->r[6] = c->v.s[0];
L_525724:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525740; }
    c->r[0] = 0x151447cu;
    { uint32_t ea = 0x525738u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525738u; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = c->r[6] ^ 0x80000000u; }
L_525740:;
    c->v.s[0] = LD32(c->r[4] + 8u);
    c->v.s[2] = c->r[6];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[4] + 8u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_525778(Cpu *restrict c) {
    FN_ENTER(0x525778u);
L_525778:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[11] = v; }
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { goto L_525b04; }
    c->r[0] = c->r[5] + 0x20u;
    c->v.s[16] = 0x2f800000u;
    c->r[8] = c->r[5] + 0x30u;
    c->r[10] = 0x0u;
    c->r[9] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15143ecu;
    { uint32_t ea = 0x5257c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15143e0u;
    { uint32_t ea = 0x5257d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x15143d4u;
    { uint32_t ea = 0x5257e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x15143c8u;
    { uint32_t ea = 0x5257ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15143bcu;
    { uint32_t ea = 0x5257f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15143b0u;
    { uint32_t ea = 0x525804u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15143a4u;
    { uint32_t ea = 0x525810u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1514398u;
    { uint32_t ea = 0x52581cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x151438cu;
    { uint32_t ea = 0x525828u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1514380u;
    { uint32_t ea = 0x525834u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1514374u;
    { uint32_t ea = 0x525840u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1514368u;
    { uint32_t ea = 0x52584cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_52584c:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[10] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0xbu);
    if (COND_HI) { goto L_525af8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x525874u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x5258a8u: goto L_5258a8; case 0x5258bcu: goto L_5258bc; case 0x5258d0u: goto L_5258d0; case 0x5258ecu: goto L_5258ec; case 0x525900u: goto L_525900; case 0x525914u: goto L_525914; case 0x525930u: goto L_525930; case 0x525974u: goto L_525974; case 0x5259b8u: goto L_5259b8; case 0x525a0cu: goto L_525a0c; case 0x525a50u: goto L_525a50; case 0x525aacu: goto L_525aac; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5258a8:;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5258e0;
L_5258bc:;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5258e0;
L_5258d0:;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x4u;
    c->r[0] = c->r[8];
L_5258e0:;
    c->r[2] = c->r[9];
    c->r[14] = 0x5258e8u; f_525580(c);
    goto L_525af8;
L_5258ec:;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_525924;
L_525900:;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_525924;
L_525914:;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x4u;
    c->r[0] = c->r[8];
L_525924:;
    c->r[2] = c->r[9];
    c->r[14] = 0x52592cu; f_525b48(c);
    goto L_525af8;
L_525930:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[7] & 0x8u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_525954; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52594cu; f_9cc110(c);
    c->r[1] = udiv32(c->r[0], c->r[6]);
    c->r[6] = c->r[0] - c->r[1] * c->r[6];
L_525954:;
    { uint32_t r = c->r[7] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_52596c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525964u; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = 0x0u - c->r[6]; }
L_52596c:;
    { uint32_t ea = c->r[5] + 0x42u; ST16(ea, c->r[6]); }
    goto L_525af8;
L_525974:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[7] & 0x8u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_525998; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525990u; f_9cc110(c);
    c->r[1] = udiv32(c->r[0], c->r[6]);
    c->r[6] = c->r[0] - c->r[1] * c->r[6];
L_525998:;
    { uint32_t r = c->r[7] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5259b0; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5259a8u; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = 0x0u - c->r[6]; }
L_5259b0:;
    { uint32_t ea = c->r[5] + 0x4bu; ST8(ea, c->r[6]); }
    goto L_525af8;
L_5259b8:;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[6] & 0x8u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_5259e0; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5259d8u; f_9cc110(c);
    c->r[1] = udiv32(c->r[0], c->r[8]);
    c->r[8] = c->r[0] - c->r[1] * c->r[8];
L_5259e0:;
    { uint32_t r = c->r[6] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5259f8; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5259f0u; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[8] = 0x0u - c->r[8]; }
L_5259f8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { c->r[8] = 0x1u; }
    { uint32_t ea = c->r[5] + 0x52u; ST8(ea, c->r[8]); }
    c->r[8] = c->r[7];
    goto L_525af8;
L_525a0c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[7] & 0x8u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_525a30; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525a28u; f_9cc110(c);
    c->r[1] = udiv32(c->r[0], c->r[6]);
    c->r[6] = c->r[0] - c->r[1] * c->r[6];
L_525a30:;
    { uint32_t r = c->r[7] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525a48; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525a40u; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = 0x0u - c->r[6]; }
L_525a48:;
    { uint32_t ea = c->r[5] + 0x60u; ST16(ea, c->r[6]); }
    goto L_525af8;
L_525a50:;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[7] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525a80; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525a68u; f_9cc110(c);
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[6];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->r[6] = c->v.s[0];
L_525a80:;
    { uint32_t r = c->r[7] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525a98; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525a90u; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = c->r[6] ^ 0x80000000u; }
L_525a98:;
    c->v.s[0] = LD32(c->r[5] + 172u);
    c->v.s[2] = c->r[6];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[5] + 172u, c->v.s[0]);
    goto L_525af8;
L_525aac:;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[7] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525adc; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525ac4u; f_9cc110(c);
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[6];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->r[6] = c->v.s[0];
L_525adc:;
    { uint32_t r = c->r[7] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525af4; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525aecu; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = c->r[6] ^ 0x80000000u; }
L_525af4:;
    { uint32_t ea = c->r[5] + 0xacu; ST32(ea, c->r[6]); }
L_525af8:;
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[11], c->r[10]);
    if (COND_NE) { goto L_52584c; }
L_525b04:;
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_525b48(Cpu *restrict c) {
    FN_ENTER(0x525b48u);
L_525b48:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[2];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_525bbc; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525b9c; }
    c->r[0] = 0x1514038u;
    { uint32_t ea = 0x525b7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525b7cu; f_9cc110(c);
    c->v.s[2] = c->r[0];
    c->v.s[0] = 0x2f800000u;
    c->v.s[4] = c->r[6];
    c->v.f[2] = (float)c->v.s[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->r[6] = c->v.s[0];
L_525b9c:;
    c->r[7] = 0x0u;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525bbc; }
    c->r[0] = 0x1514000u;
    { uint32_t ea = 0x525bb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525bb4u; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = c->r[6] ^ 0x80000000u; }
L_525bbc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525c28; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_525c20; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525c04; }
    c->r[0] = 0x1513fd0u;
    { uint32_t ea = 0x525be4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525be4u; f_9cc110(c);
    c->v.s[2] = c->r[0];
    c->v.s[0] = 0x2f800000u;
    c->v.s[4] = c->r[6];
    c->v.f[2] = (float)c->v.s[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->r[6] = c->v.s[0];
L_525c04:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525c20; }
    c->r[0] = 0x1513f9cu;
    { uint32_t ea = 0x525c18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525c18u; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = c->r[6] ^ 0x80000000u; }
L_525c20:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_525c28:;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525c90; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_525c88; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525c6c; }
    c->r[0] = 0x1513f68u;
    { uint32_t ea = 0x525c4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525c4cu; f_9cc110(c);
    c->v.s[2] = c->r[0];
    c->v.s[0] = 0x2f800000u;
    c->v.s[4] = c->r[6];
    c->v.f[2] = (float)c->v.s[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->r[6] = c->v.s[0];
L_525c6c:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525c88; }
    c->r[0] = 0x1513f34u;
    { uint32_t ea = 0x525c80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525c80u; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = c->r[6] ^ 0x80000000u; }
L_525c88:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_525c90:;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_525cf0; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525cd4; }
    c->r[0] = 0x1513f00u;
    { uint32_t ea = 0x525cb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525cb4u; f_9cc110(c);
    c->v.s[2] = c->r[0];
    c->v.s[0] = 0x2f800000u;
    c->v.s[4] = c->r[6];
    c->v.f[2] = (float)c->v.s[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->r[6] = c->v.s[0];
L_525cd4:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_525cf0; }
    c->r[0] = 0x1513eccu;
    { uint32_t ea = 0x525ce8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525ce8u; f_9cc110(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = c->r[6] ^ 0x80000000u; }
L_525cf0:;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_525d1c(Cpu *restrict c) {
    FN_ENTER(0x525d1cu);
L_525d1c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_525d20(Cpu *restrict c) {
    FN_ENTER(0x525d20u);
L_525d20:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151698cu;
    { uint32_t ea = 0x525d34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x525d34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_525d4c(Cpu *restrict c) {
    FN_ENTER(0x525d4cu);
L_525d4c:;
    c->r[0] = 0x1516968u;
    { uint32_t ea = 0x525d58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_525d5c(Cpu *restrict c) {
    FN_ENTER(0x525d5cu);
L_525d5c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_525d60(Cpu *restrict c) {
    FN_ENTER(0x525d60u);
L_525d60:;
    c->r[0] = 0x1516940u;
    { uint32_t ea = 0x525d6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_525d70(Cpu *restrict c) {
    FN_ENTER(0x525d70u);
L_525d70:;
    c->r[0] = 0x123849bu;
    c->r[0] = 0x525d7cu + c->r[0];
    return;
}
void f_525d80(Cpu *restrict c) {
    FN_ENTER(0x525d80u);
L_525d80:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[1] = 0x1512db8u;
    c->r[0] = 0x151690cu;
    c->r[4] = 0x0u;
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x525dacu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1238408u;
    { uint32_t ea = 0x525db4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x525db8u + c->r[1];
    c->r[14] = 0x525db8u; f_9aedcc(c);
    c->r[1] = 0x15168f8u;
    c->r[3] = 0x70u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x525dd4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1512d94u;
    c->r[0] = 0x15168bcu;
    { uint32_t ea = 0x525de8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x12383f1u;
    { uint32_t ea = 0x525df0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x525df4u + c->r[1];
    c->r[14] = 0x525df4u; f_9aedcc(c);
    c->r[1] = 0x15168d0u;
    { uint32_t ea = 0x525e00u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_525e2c(Cpu *restrict c) {
    FN_ENTER(0x525e2cu);
L_525e2c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0x151368cu;
    { uint32_t ea = 0x525e40u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x525e44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x70u;
    c->pc = c->r[4]; c->r[14] = 0x525e5cu; rt_dispatch(c);
    c->r[1] = 0x8u;
    c->r[2] = 0x8u;
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    c->r[14] = 0x525e74u; f_525e80(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_525e80(Cpu *restrict c) {
    FN_ENTER(0x525e80u);
L_525e80:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[10] = c->r[3];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[4] = c->r[0];
    c->r[14] = 0x525e9cu; f_a87810(c);
    c->r[0] = 0x1516828u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x525eacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1512ca4u;
    { uint32_t ea = 0x525ebcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = c->r[0] + 0x8u;
    c->r[0] = 0x1512c84u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[5]); }
    { uint32_t ea = 0x525ed8u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x525edcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = (c->r[6] << 2);
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x525ef4u; rt_dispatch(c);
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[14] = 0x525f00u; f_15efd7c(c);
    c->r[0] = 0x15167ccu;
    { uint32_t ea = 0x525f0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x8u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST8(ea, c->r[5]); }
    c->r[14] = 0x525f28u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = (c->r[10] << 2);
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x525f40u; rt_dispatch(c);
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[14] = 0x525f4cu; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x50u; ST8(ea, c->r[5]); }
    c->r[14] = 0x525f6cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = (c->r[11] << 2);
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x525f84u; rt_dispatch(c);
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[14] = 0x525f90u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[8]); }
    c->r[0] = 0x8u;
    c->r[9] = 0x8u;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[5]); }
    c->r[14] = 0x525fb0u; f_9af37c(c);
    c->r[1] = 0x151671cu;
    c->r[8] = ~0x0u;
    { uint32_t ea = 0x525fc0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[5]); }
    { uint64_t r = (uint64_t)c->r[7] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    c->r[14] = 0x525fe8u; f_9af3a0(c);
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_526024; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_CC) { goto L_526024; }
    c->r[0] = 0x1u;
L_52600c:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CC) { goto L_52600c; }
L_526024:;
    { uint64_t r = (uint64_t)c->r[5] * c->r[9]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { c->r[8] = c->r[2]; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[8] = ~0x0u; }
    c->r[0] = c->r[8];
    c->r[14] = 0x52604cu; f_9af3a0(c);
    c->r[12] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_5260f4; }
    c->r[0] = ~0x7u;
    c->r[2] = c->r[0] + (c->r[5] << 3);
    c->r[0] = 0x1u;
    c->r[0] = c->r[0] + (c->r[2] >> 3);
    { uint32_t r = c->r[0] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_5260a8; }
    c->r[3] = 0x0u - c->r[0];
    c->r[0] = 0x1516650u;
    c->r[1] = c->r[12];
    { uint32_t ea = 0x52608cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + 0x8u;
    c->r[0] = ~0x0u;
L_526090:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] + 0x8u;
    c->r[3] = f_adds(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_526090; }
    goto L_5260ac;
L_5260a8:;
    c->r[1] = c->r[12];
L_5260ac:;
    (void)f_subs(c, c->r[2], 0x18u);
    if (COND_CC) { goto L_5260f0; }
    c->r[0] = 0x1516614u;
    c->r[2] = c->r[12] + (c->r[5] << 3);
    c->r[7] = ~0x0u;
    { uint32_t ea = 0x5260c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] + 0x8u;
L_5260c8:;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] + 0x20u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_5260c8; }
L_5260f0:;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_5260f4:;
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[12]); }
    { uint64_t r = (uint64_t)c->r[5] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    c->r[14] = 0x526114u; f_9af3a0(c);
    c->r[1] = (c->r[5] << 2);
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[14] = 0x526120u; f_15efd7c(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5261dc; }
    c->r[0] = 0x1512a24u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x526138u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
L_526134:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CS) { goto L_526158; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_5261d0;
L_526158:;
    c->r[0] = c->r[8];
    c->r[14] = 0x526160u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[5] + 0x10u;
    c->r[2] = 0x10u;
    c->r[5] = (c->r[9] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x52617cu; rt_dispatch(c);
    c->r[1] = c->r[5];
    c->r[7] = c->r[0];
    c->r[14] = 0x526188u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0x52619cu; f_15efdd0(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x5261a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5261b4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[9]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
L_5261d0:;
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_526134; }
L_5261dc:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_526294; }
    c->r[0] = 0x1512968u;
    c->r[8] = 0x0u;
    { uint32_t ea = 0x5261f4u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_5261f0:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CS) { goto L_526214; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_526288;
L_526214:;
    c->r[0] = c->r[9];
    c->r[14] = 0x52621cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[5] + 0x10u;
    c->r[2] = 0x10u;
    c->r[5] = (c->r[6] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x526238u; rt_dispatch(c);
    c->r[1] = c->r[5];
    c->r[7] = c->r[0];
    c->r[14] = 0x526244u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0x526258u; f_15efdd0(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x526260u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x526270u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[1]); }
L_526288:;
    c->r[10] = f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    if (COND_NE) { goto L_5261f0; }
L_526294:;
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { goto L_52634c; }
    c->r[0] = 0x15128b0u;
    c->r[8] = 0x0u;
    { uint32_t ea = 0x5262acu + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_5262a8:;
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CS) { goto L_5262cc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_526340;
L_5262cc:;
    c->r[0] = c->r[9];
    c->r[14] = 0x5262d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[5] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[5] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x5262f0u; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[6] = c->r[0];
    c->r[14] = 0x5262fcu; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0x526310u; f_15efdd0(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x526318u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x526328u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[1]); }
L_526340:;
    c->r[11] = f_subs(c, c->r[11], 0x1u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    if (COND_NE) { goto L_5262a8; }
L_52634c:;
    c->r[0] = 0x1513158u;
    { uint32_t ea = 0x526358u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_526390(Cpu *restrict c) {
    FN_ENTER(0x526390u);
L_526390:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151632cu;
    c->r[1] = 0x1512eb4u;
    { uint32_t ea = 0x5263a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x5263acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5263cc; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x5263ccu; f_15efe00(c);
L_5263cc:;
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_52640c; }
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_5263e0:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526400; }
    c->r[14] = 0x5263f4u; f_a87660(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
L_526400:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_5263e0; }
L_52640c:;
    c->r[1] = 0x1512e44u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x52641cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_52643c; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x52642cu; f_15efe0c(c);
    c->r[1] = 0x1512e24u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x52643cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
L_52643c:;
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_52644c; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x52644cu; f_15efe00(c);
L_52644c:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_52648c; }
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_526460:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526480; }
    c->r[14] = 0x526474u; f_a87660(c);
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
L_526480:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_526460; }
L_52648c:;
    c->r[1] = 0x1512dc4u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x52649cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_5264bc; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x5264acu; f_15efe0c(c);
    c->r[1] = 0x1512da4u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x5264bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
L_5264bc:;
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_5264cc; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x5264ccu; f_15efe00(c);
L_5264cc:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_52650c; }
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_5264e0:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526500; }
    c->r[14] = 0x5264f4u; f_a87660(c);
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
L_526500:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_5264e0; }
L_52650c:;
    c->r[1] = 0x1512d44u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x52651cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526530; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x526530u; f_15efe0c(c);
L_526530:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526540; }
    c->r[14] = 0x526540u; f_9af3e4(c);
L_526540:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526554; }
    c->r[0] = c->r[0] - 0x8u;
    c->r[14] = 0x526554u; f_9af3e4(c);
L_526554:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526564; }
    c->r[14] = 0x526564u; f_9af3e4(c);
L_526564:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52657c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x52657cu; rt_dispatch(c);
L_52657c:;
    c->r[0] = c->r[4] + 0x44u;
    c->r[14] = 0x526584u; f_200690(c);
    c->r[0] = c->r[4] + 0x30u;
    c->r[14] = 0x52658cu; f_200690(c);
    c->r[0] = c->r[4] + 0x1cu;
    c->r[14] = 0x526594u; f_200690(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_5265bc(Cpu *restrict c) {
    FN_ENTER(0x5265bcu);
L_5265bc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x1512c8cu;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x5265d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5265e8; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x5265e8u; f_15efe00(c);
L_5265e8:;
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_526628; }
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_5265fc:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52661c; }
    c->r[14] = 0x526610u; f_a87660(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
L_52661c:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_5265fc; }
L_526628:;
    c->r[1] = 0x1512c28u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526638u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
}
void f_526658(Cpu *restrict c) {
    FN_ENTER(0x526658u);
L_526658:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x1512bf0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526670u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526684; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x526684u; f_15efe00(c);
L_526684:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5266c4; }
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_526698:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5266b8; }
    c->r[14] = 0x5266acu; f_a87660(c);
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5266b8:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_526698; }
L_5266c4:;
    c->r[1] = 0x1512b8cu;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x5266d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
}
void f_5266f4(Cpu *restrict c) {
    FN_ENTER(0x5266f4u);
L_5266f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x1512b54u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x52670cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526720; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x526720u; f_15efe00(c);
L_526720:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_526760; }
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_526734:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526754; }
    c->r[14] = 0x526748u; f_a87660(c);
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
L_526754:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_526734; }
L_526760:;
    c->r[1] = 0x1512af0u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526770u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
}
void f_526790(Cpu *restrict c) {
    FN_ENTER(0x526790u);
L_526790:;
    return;
}
void f_526794(Cpu *restrict c) {
    FN_ENTER(0x526794u);
L_526794:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5267a0u; f_526390(c);
    c->r[0] = 0x1512d20u;
    { uint32_t ea = 0x5267acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5267acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5267c4(Cpu *restrict c) {
    FN_ENTER(0x5267c4u);
L_5267c4:;
    return;
}
void f_5267c8(Cpu *restrict c) {
    FN_ENTER(0x5267c8u);
L_5267c8:;
    __attribute__((musttail)) return f_a878e8(c);
}
void f_5267cc(Cpu *restrict c) {
    FN_ENTER(0x5267ccu);
L_5267cc:;
    __attribute__((musttail)) return f_a878e4(c);
}
void f_5267d0(Cpu *restrict c) {
    FN_ENTER(0x5267d0u);
L_5267d0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[7] = c->r[1];
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], c->r[2]); }
    if (COND_LS) { goto L_5268c0; }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5268c0; }
    c->r[2] = c->r[3] + (c->r[3] << 2);
    c->r[5] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_5268c0; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = 0x0u;
L_526828:;
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x50u; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_526850; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_CC) { goto L_526828; }
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_526850:;
    c->r[2] = 0xffffu;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_EQ) { goto L_5268c0; }
    c->r[2] = c->r[3];
    c->r[0] = c->r[7];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[14] = 0x526874u; f_529308(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x526884u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x526898u; rt_dispatch(c);
    c->r[1] = 0x1512484u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5268a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[2] = c->r[7];
    c->r[0] = c->r[1];
    c->r[1] = c->r[4];
    c->r[14] = 0x5268bcu; f_e067ec(c);
    c->r[0] = 0x1u;
L_5268c0:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5268cc(Cpu *restrict c) {
    FN_ENTER(0x5268ccu);
L_5268cc:;
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5268d8(Cpu *restrict c) {
    FN_ENTER(0x5268d8u);
L_5268d8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[1];
    c->r[1] = 0x151296cu;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x5268f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526908; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x526908u; f_15efe00(c);
L_526908:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5269b0; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    c->r[3] = 0x0u;
L_526924:;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_526944; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[1] = c->r[1] - 0x8u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_CC) { goto L_526924; }
    goto L_526958;
L_526944:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_526958; }
    c->r[5] = c->r[2] - c->r[1];
    goto L_5269b4;
L_526958:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
L_526964:;
    { uint32_t ea = c->r[1] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_526984; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] - 0x8u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_526964; }
    goto L_5269b0;
L_526984:;
    { uint32_t ea = c->r[1] + (c->r[7] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x526994u; f_a87648(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[7] << 3);
    (void)f_subs(c, c->r[0], c->r[6]);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_5269b0; }
    c->r[5] = c->r[0] - c->r[6];
    goto L_5269b4;
L_5269b0:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_5269b4:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_526a28; }
    c->r[1] = 0x1512ae0u;
    c->r[2] = 0x151288cu;
    { uint32_t ea = 0x5269d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5269d4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t r = c->r[1] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5269f4; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[14] = 0x5269f0u; f_15efe00(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5269f4:;
    { uint32_t ea = c->r[6] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x151284cu;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526a14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526a28; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[14] = 0x526a28u; f_15efe0c(c);
L_526a28:;
    c->r[1] = 0x1512828u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526a38u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526a4c; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x526a4cu; f_15efe0c(c);
L_526a4c:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_526a68(Cpu *restrict c) {
    FN_ENTER(0x526a68u);
L_526a68:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LS) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x15127ccu;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526a94u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526aa8; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x526aa8u; f_15efe00(c);
L_526aa8:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526acc; }
    c->r[14] = 0x526abcu; f_a87660(c);
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[5] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_526acc:;
    { uint32_t ea = c->r[1] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526ae4; }
    c->r[14] = 0x526ae4u; f_a87648(c);
L_526ae4:;
    c->r[1] = 0x151276cu;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526af4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526b0c; }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_526b0c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_526b18(Cpu *restrict c) {
    FN_ENTER(0x526b18u);
L_526b18:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LS) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x151271cu;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526b44u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526b58; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x526b58u; f_15efe00(c);
L_526b58:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526b7c; }
    c->r[14] = 0x526b6cu; f_a87660(c);
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[5] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
L_526b7c:;
    { uint32_t ea = c->r[1] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526b94; }
    c->r[14] = 0x526b94u; f_a87648(c);
L_526b94:;
    c->r[1] = 0x15126bcu;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526ba4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526bbc; }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_526bbc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_526bc8(Cpu *restrict c) {
    FN_ENTER(0x526bc8u);
L_526bc8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LS) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x151266cu;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526bf4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526c08; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x526c08u; f_15efe00(c);
L_526c08:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526c2c; }
    c->r[14] = 0x526c1cu; f_a87660(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[5] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
L_526c2c:;
    { uint32_t ea = c->r[1] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526c44; }
    c->r[14] = 0x526c44u; f_a87648(c);
L_526c44:;
    c->r[1] = 0x151260cu;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526c54u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526c6c; }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_526c6c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_526c78(Cpu *restrict c) {
    FN_ENTER(0x526c78u);
L_526c78:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x15125c0u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526ca0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526cb8; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x526cb4u; f_15efe00(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
L_526cb8:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_526d00; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x526ce4u; f_a87660(c);
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 3);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_526d00:;
    c->r[1] = 0x1512550u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x526d10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_526d28; }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_526d28:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_526d34(Cpu *restrict c) {
    FN_ENTER(0x526d34u);
L_526d34:;
    return;
}
void f_526d38(Cpu *restrict c) {
    FN_ENTER(0x526d38u);
L_526d38:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_526d3c(Cpu *restrict c) {
    FN_ENTER(0x526d3cu);
L_526d3c:;
    c->r[0] = 0x1512784u;
    { uint32_t ea = 0x526d48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_526d4c(Cpu *restrict c) {
    FN_ENTER(0x526d4cu);
L_526d4c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_526d50(Cpu *restrict c) {
    FN_ENTER(0x526d50u);
L_526d50:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x526d58u; f_200690(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9ca854(c);
}
void f_526d60(Cpu *restrict c) {
    FN_ENTER(0x526d60u);
L_526d60:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x156337cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x5u;
    c->r[12] = 0x6u;
    c->r[0] = 0x526d84u + c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[14] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1512164u;
    c->r[3] = 0x70u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x15126e4u;
    { uint32_t ea = 0x526de0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x123742fu;
    { uint32_t ea = 0x526de8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x526decu + c->r[1];
    c->r[14] = 0x526decu; f_9aedcc(c);
    c->r[1] = 0x15158e8u;
    { uint32_t ea = 0x526df8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_526e18(Cpu *restrict c) {
    FN_ENTER(0x526e18u);
L_526e18:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x15158bcu;
    { uint32_t ea = 0x526e28u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x526e2cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x11cu;
    c->pc = c->r[4]; c->r[14] = 0x526e44u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x526e4cu; f_a87810(c);
    c->r[0] = 0x1515890u;
    { uint32_t ea = 0x526e58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x1cu; }
    c->r[1] = 0x100u;
    c->r[14] = 0x526e68u; f_15efd7c(c);
    c->r[0] = 0x1512688u;
    { uint32_t ea = 0x526e74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_526e88(Cpu *restrict c) {
    FN_ENTER(0x526e88u);
L_526e88:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1515844u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x526ea0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x526ea4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_526ec4(Cpu *restrict c) {
    FN_ENTER(0x526ec4u);
L_526ec4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x526ed0u; f_a87810(c);
    c->r[0] = 0x151580cu;
    { uint32_t ea = 0x526edcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x1cu; }
    c->r[1] = 0x100u;
    c->r[14] = 0x526eecu; f_15efd7c(c);
    c->r[0] = 0x1512604u;
    { uint32_t ea = 0x526ef8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_526f08(Cpu *restrict c) {
    FN_ENTER(0x526f08u);
L_526f08:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15157c4u;
    c->r[5] = 0x7u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x526f24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_526f28:;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526f44; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x526f40u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + (c->r[5] << 2); ST32(ea, c->r[6]); }
L_526f44:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x47u);
    if (COND_NE) { goto L_526f28; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_526f60(Cpu *restrict c) {
    FN_ENTER(0x526f60u);
L_526f60:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1515768u;
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x526f80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x1cu; }
L_526f84:;
    { uint32_t ea = c->r[5] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_526fa0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x526f9cu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + (c->r[7] << 2); ST32(ea, c->r[6]); }
L_526fa0:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x40u);
    if (COND_NE) { goto L_526f84; }
    c->r[0] = c->r[4];
    c->r[14] = 0x526fb4u; f_a8784c(c);
    c->r[0] = 0x1515724u;
    { uint32_t ea = 0x526fc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x526fc0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_526fdc(Cpu *restrict c) {
    FN_ENTER(0x526fdcu);
L_526fdc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[7] = c->r[3];
    c->r[8] = c->r[2];
    c->r[0] = 0x7u;
    c->r[6] = c->r[5] + 0x20u;
L_526ff8:;
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_527030; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_52703c; }
    c->r[1] = c->r[0] + 0x2u;
    c->r[0] = c->r[0] - 0x5u;
    c->r[6] = c->r[6] + 0x8u;
    (void)f_subs(c, c->r[0], 0x40u);
    c->r[0] = c->r[1];
    if (COND_CC) { goto L_526ff8; }
    c->r[9] = ~0x0u;
    goto L_5270cc;
L_527030:;
    c->r[6] = c->r[6] - 0x4u;
    c->r[9] = c->r[0] - 0x7u;
    goto L_527040;
L_52703c:;
    c->r[9] = c->r[0] - 0x6u;
L_527040:;
    c->r[1] = 0x1512210u;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x527050u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_527064; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[14] = 0x527064u; f_15efe00(c);
L_527064:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_52708c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x52707cu; rt_dispatch(c);
    c->r[1] = c->r[8];
    c->r[7] = c->r[0];
    c->r[14] = 0x527088u; f_51d6f0(c);
    goto L_5270a4;
L_52708c:;
    c->r[0] = 0x154u;
    c->r[1] = 0x10u;
    c->r[14] = 0x527098u; f_51cd7c(c);
    c->r[1] = c->r[8];
    c->r[7] = c->r[0];
    c->r[14] = 0x5270a4u; f_51cdb8(c);
L_5270a4:;
    c->r[1] = 0x15121a8u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x5270b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5270cc; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[14] = 0x5270ccu; f_15efe0c(c);
L_5270cc:;
    c->r[0] = 0x1512aa4u;
    { uint32_t ea = 0x5270d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5270ec(Cpu *restrict c) {
    FN_ENTER(0x5270ecu);
L_5270ec:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3fu);
    if (COND_HI) { return; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = c->r[2];
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    __attribute__((musttail)) return f_51d6b4(c);
}
void f_52710c(Cpu *restrict c) {
    FN_ENTER(0x52710cu);
L_52710c:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3fu);
    if (COND_HI) { return; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x527130u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    return;
}
void f_527138(Cpu *restrict c) {
    FN_ENTER(0x527138u);
L_527138:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[2] = 0x1512100u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x527160u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t r = c->r[1] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_527178; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x527174u; f_15efe00(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_527178:;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5271a4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x527194u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
L_5271a4:;
    c->r[1] = 0x15120a4u;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x5271bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5271d4; }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_5271d4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5271e0(Cpu *restrict c) {
    FN_ENTER(0x5271e0u);
L_5271e0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0] + 0x1cu;
    c->r[5] = 0x0u;
L_5271ec:;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_527204; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x527204u; rt_dispatch(c);
L_527204:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x40u);
    if (COND_NE) { goto L_5271ec; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_527214(Cpu *restrict c) {
    FN_ENTER(0x527214u);
L_527214:;
    return;
}
void f_527218(Cpu *restrict c) {
    FN_ENTER(0x527218u);
L_527218:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_52721c(Cpu *restrict c) {
    FN_ENTER(0x52721cu);
L_52721c:;
    c->r[0] = 0x15154bcu;
    { uint32_t ea = 0x527228u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_52722c(Cpu *restrict c) {
    FN_ENTER(0x52722cu);
L_52722c:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x3fu);
    if (COND_HI) { return; }
    c->r[0] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_52724c(Cpu *restrict c) {
    FN_ENTER(0x52724cu);
L_52724c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1562ee0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x5u;
    c->r[12] = 0x6u;
    c->r[0] = 0x527270u + c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[14] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1511c78u;
    c->r[3] = 0x11cu;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x1515410u;
    { uint32_t ea = 0x5272ccu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1236f50u;
    { uint32_t ea = 0x5272d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5272d8u + c->r[1];
    c->r[14] = 0x5272d8u; f_9aedcc(c);
    c->r[1] = 0x1515408u;
    { uint32_t ea = 0x5272e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_527304(Cpu *restrict c) {
    FN_ENTER(0x527304u);
L_527304:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1512204u;
    { uint32_t ea = 0x527314u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x527318u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x380u;
    c->pc = c->r[4]; c->r[14] = 0x527330u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x527338u; f_bb8df8(c);
    c->r[0] = 0x15153a8u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x527348u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x250u;
    { uint32_t ea = c->r[4] + 0x23cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x527358u; f_51be70(c);
    c->r[6] = 0x3f800000u;
    c->r[0] = c->r[4] + 0x32cu;
    c->r[1] = 0x24u;
    { uint32_t ea = c->r[4] + 0x35cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x320u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x324u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x328u; ST32(ea, c->r[6]); }
    c->r[14] = 0x527378u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x360u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x210u; ST32(ea, c->r[5]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0xfc00ffffu) | ((c->r[1] << 16) & 0x3ff0000u);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x370u;
    { uint32_t ea = c->r[4] + 0x364u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x368u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x36cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5273b4(Cpu *restrict c) {
    FN_ENTER(0x5273b4u);
L_5273b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x151214cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x5273ccu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5273d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5273f0(Cpu *restrict c) {
    FN_ENTER(0x5273f0u);
L_5273f0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[5] = c->r[2];
    c->r[7] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x527404u; f_bb8df8(c);
    c->r[0] = 0x15152d8u;
    c->r[8] = c->r[4] + 0x250u;
    c->r[9] = 0x0u;
    { uint32_t ea = 0x527418u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[4] + 0x23cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x527428u; f_51be70(c);
    c->r[6] = 0x3f800000u;
    c->r[0] = c->r[4] + 0x32cu;
    c->r[1] = 0x24u;
    { uint32_t ea = c->r[4] + 0x35cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x320u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x324u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x328u; ST32(ea, c->r[6]); }
    c->r[14] = 0x527448u; f_15efd7c(c);
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4] + 0x360u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x210u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_52746c; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3ff0000u;
    c->r[0] = c->r[0] & c->r[1];
    goto L_527470;
L_52746c:;
    c->r[0] = 0x10000u;
L_527470:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[1] = c->r[1] & 0xfc00ffffu;
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5274dc; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x30u;
    { uint32_t ea = c->r[4] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x238u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x240u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x244u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x248u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x5274dcu; f_51c1a0(c);
L_5274dc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x370u;
    { uint32_t ea = c->r[4] + 0x364u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x368u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x36cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_527500(Cpu *restrict c) {
    FN_ENTER(0x527500u);
L_527500:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15151dcu;
    { uint32_t ea = 0x527514u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x250u; }
    c->r[14] = 0x527520u; f_51c03c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_bb8ef8(c);
}
void f_527530(Cpu *restrict c) {
    FN_ENTER(0x527530u);
L_527530:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15151acu;
    { uint32_t ea = 0x527544u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x250u; }
    c->r[14] = 0x527550u; f_51c03c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x527558u; f_bb8ef8(c);
    c->r[0] = 0x1511fb4u;
    { uint32_t ea = 0x527564u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x527564u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_527580(Cpu *restrict c) {
    FN_ENTER(0x527580u);
L_527580:;
    __attribute__((musttail)) return f_bba704(c);
}
void f_527584(Cpu *restrict c) {
    FN_ENTER(0x527584u);
L_527584:;
    __attribute__((musttail)) return f_bbcdf0(c);
}
void f_527588(Cpu *restrict c) {
    FN_ENTER(0x527588u);
L_527588:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x527594u; f_a879ac(c);
    c->r[0] = 0x1511f10u;
    { uint32_t ea = 0x5275a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[4] + 0x371u; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_5275d8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_5275f8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x12cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_5275d8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[0] + 0x12cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x5275f0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x370u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5275f8:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x370u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_527608(Cpu *restrict c) {
    FN_ENTER(0x527608u);
L_527608:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xbcu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = c->r[5] | 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_527698; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + 0x320u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x324u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x328u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x32cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x330u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x334u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x338u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[4] + 0x33cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x527674u; f_aa7b50(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x340u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x344u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x348u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x360u; ST32(ea, c->r[0]); }
L_527698:;
    c->r[0] = c->r[5] | 0x2u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_52781c; }
    { uint32_t ea = c->r[4] + 0x310u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5276e0; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x5276c4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5276e0; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x5276dcu; rt_dispatch(c);
    c->r[8] = c->r[0];
L_5276e0:;
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = c->r[4] + 0x220u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_527714; }
    { uint32_t ea = c->r[4] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[4] + 0x330u;
    c->r[7] = c->r[4] + 0x350u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x527710u; rt_dispatch(c);
    goto L_52771c;
L_527714:;
    c->r[7] = c->r[4] + 0x350u;
    c->r[10] = c->r[4] + 0x330u;
L_52771c:;
    c->r[5] = 0x0u;
    c->r[3] = c->r[4] + 0x270u;
    c->r[0] = 0x1u;
    c->r[2] = c->r[4] + 0x320u;
    c->r[6] = c->r[4] + 0x340u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[5]); }
    c->v.s[0] = LD32(c->r[4] + 864u);
    { uint32_t ea = c->r[4] + 0x210u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[7] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[3] = c->r[4] + 0x260u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x52777cu; f_51d92c(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] + 0x30u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x5277a4u; f_aa7dc4(c);
    { uint32_t ea = c->r[13] + 0xa1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5277c8; }
    { uint32_t ea = c->r[4] + 0x297u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[7] + 0x60u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[7];
    c->r[14] = 0x5277c4u; f_bb62e0(c);
    goto L_5277f4;
L_5277c8:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5277f4; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
L_5277f4:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
L_52781c:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_527824(Cpu *restrict c) {
    FN_ENTER(0x527824u);
L_527824:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x527830u; f_bb8f78(c);
    { uint32_t ea = c->r[4] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_527854; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x210u; ST32(ea, c->r[0]); } }
L_527854:;
    c->r[0] = c->r[4] + 0x220u;
    c->r[14] = 0x52785cu; f_51d7e8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_527874; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x527874u; rt_dispatch(c);
L_527874:;
    { uint32_t ea = c->r[4] + 0x364u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_527904; }
    { uint32_t ea = c->r[4] + 0x368u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_52789c; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->v.s[0] = LD32(c->r[4] + 876u);
    goto L_5278b0;
L_52789c:;
    c->v.s[0] = 0x0u;
    c->r[1] = 0xau;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x368u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x36cu; ST32(ea, c->r[0]); }
L_5278b0:;
    c->v.s[2] = LD32(c->r[4] + 28u);
    c->r[0] = 0x2a6u;
    c->v.s[4] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 876u, c->v.s[0]);
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[6] = c->v.f[0] / c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.f[4] = c->v.f[4] - c->v.f[6];
    ST32(c->r[4] + 384u, c->v.s[4]);
    ST32(c->r[4] + 388u, c->v.s[4]);
    ST32(c->r[4] + 392u, c->v.s[4]);
    ST32(c->r[4] + 396u, c->v.s[4]);
    ST32(c->r[4] + 400u, c->v.s[4]);
    ST32(c->r[4] + 404u, c->v.s[4]);
    ST32(c->r[4] + 408u, c->v.s[4]);
    ST32(c->r[4] + 412u, c->v.s[4]);
    if (COND_LS) { goto L_527908; }
L_527904:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_527908:;
    c->r[0] = c->r[4] + 0x180u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_527948(Cpu *restrict c) {
    FN_ENTER(0x527948u);
L_527948:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0xb0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x370u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5279c4; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_5279bc; }
    { uint32_t ea = c->r[4] + 0x364u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5279bc; }
    { uint32_t ea = c->r[4] + 0x371u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_5279a8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5279bc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    goto L_5279b0;
L_5279a8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
L_5279b0:;
    { uint32_t ea = c->r[0] + 0x12cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x5279bcu; rt_dispatch(c);
L_5279bc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x370u; ST8(ea, c->r[0]); }
L_5279c4:;
    { uint32_t ea = c->r[4] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_527b98; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x3du;
    c->r[7] = c->r[4];
    c->r[2] = c->r[2] & (c->r[1] >> 10);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[1] & 0xffff03ffu;
    if (COND_NE) { c->r[2] = c->r[2] | 0x2u; }
    c->r[0] = c->r[1] | (c->r[2] << 10);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x220u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_527b98; }
    { uint32_t ea = c->r[4] + 0x310u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_527b98; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x527a20u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_527b98; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x527a38u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_527b98; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_527b98; }
    c->r[8] = 0x0u;
    c->r[5] = c->r[4] + 0x270u;
    c->r[2] = 0x1u;
    c->r[3] = c->r[4] + 0x320u;
    c->r[6] = c->r[4] + 0x340u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[8]); }
    c->v.s[0] = LD32(c->r[4] + 864u);
    { uint32_t ea = c->r[4] + 0x210u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[4] + 0x350u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[7]); }
    c->r[5] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[4] + 0x330u;
    c->r[3] = c->r[4] + 0x260u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x527ab8u; f_51d92c(c);
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x30u;
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[8]); }
    c->r[14] = 0x527ae8u; f_aa7dc4(c);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xa1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_527b28; }
    { uint32_t ea = c->r[4] + 0x297u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[5] + 0x60u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[5];
    c->r[14] = 0x527b24u; f_bb62e0(c);
    goto L_527b54;
L_527b28:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_527b54; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
L_527b54:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_527b80; }
    { uint32_t ea = c->r[4] + 0x210u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3du;
    { uint32_t ea = c->r[2] + 0x18cu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & (c->r[0] >> 10);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] | 0x2u; }
    goto L_527b8c;
L_527b80:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3du;
    c->r[1] = c->r[1] & (c->r[0] >> 10);
L_527b8c:;
    c->r[0] = c->r[0] & 0xffff03ffu;
    c->r[0] = c->r[0] | (c->r[1] << 10);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_527b98:;
    c->r[0] = c->r[4];
    c->r[14] = 0x527ba0u; f_bb90f8(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_527ba8(Cpu *restrict c) {
    FN_ENTER(0x527ba8u);
L_527ba8:;
    __attribute__((musttail)) return f_bb5254(c);
}
void f_527bac(Cpu *restrict c) {
    FN_ENTER(0x527bacu);
L_527bac:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = c->r[1];
    c->r[1] = c->r[0];
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[1] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_527cb0; }
    { uint32_t ea = c->r[1] + 0x2e2u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_527cb0; }
    { uint32_t ea = c->r[6] + 0x43u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_527cb0; }
    c->r[7] = c->r[1] + 0x220u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x527bf8u; rt_dispatch(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    c->r[14] = 0x527c0cu; f_5215c0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_527cb0; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_527cb0; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = 0xff000000u;
    c->r[14] = 0xff00u;
    c->r[8] = 0xfeu;
    c->r[10] = (c->r[3] >> 16) & 0xffu;
    c->r[9] = (c->r[3] >> 24);
    c->r[2] = (c->r[3] >> 8) & 0xffu;
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
L_527c3c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = (c->r[6] >> 8) & 0xffu;
    c->r[7] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[1] = (c->r[6] >> 24);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[9] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0));
    c->r[0] = c->r[0] & 0xff00u;
    c->r[1] = c->r[12] & (c->r[1] << 16);
    (void)f_subs(c, c->r[8], (c->r[7] >> 8));
    c->r[0] = c->r[0] | (c->r[7] >> 8);
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = c->r[14] & (c->r[6] >> 8);
    { uint32_t r = c->r[10] * c->r[1]; c->r[1] = r; }
    c->r[1] = uxtb16(c->r[1]);
    c->r[0] = c->r[0] | c->r[1];
    if (COND_EQ) { c->r[0] = c->r[0] | 0xffu; }
    c->r[1] = c->r[0] & 0xff00u;
    (void)f_subs(c, c->r[1], 0xfe00u);
    if (COND_EQ) { c->r[0] = c->r[0] | 0xff00u; }
    c->r[1] = c->r[0] & 0xff0000u;
    (void)f_subs(c, c->r[1], 0xfe0000u);
    if (COND_EQ) { c->r[0] = c->r[0] | 0xff0000u; }
    c->r[1] = c->r[0] & 0xff000000u;
    (void)f_subs(c, c->r[1], 0xfe000000u);
    if (COND_EQ) { c->r[0] = c->r[0] | 0xff000000u; }
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x4u; }
    if (COND_NE) { goto L_527c3c; }
L_527cb0:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_527cb8(Cpu *restrict c) {
    FN_ENTER(0x527cb8u);
L_527cb8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[11] = c->r[0];
    c->r[14] = 0x527cd0u; f_bbda64(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_52860c; }
    { uint32_t ea = c->r[11] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52860c; }
    { uint32_t ea = c->r[11] + 0x2d0u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[9] = c->r[11] + 0x220u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_528464; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x527d08u; rt_dispatch(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[13] + 0x2cu;
    c->r[2] = c->r[9];
    c->r[14] = 0x527d1cu; f_5214f0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_528608; }
    { uint32_t ea = c->r[11] + 0x1f0u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_528608; }
    c->r[0] = 0x15117d0u;
    c->v.s[16] = 0x43800000u;
    { uint32_t ea = 0x527d40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15117c8u;
    { uint32_t ea = 0x527d4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15117bcu;
    { uint32_t ea = 0x527d58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15117b0u;
    { uint32_t ea = 0x527d64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15117a4u;
    { uint32_t ea = 0x527d70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1511790u;
    { uint32_t ea = 0x527d7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_527d7c:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[1]; c->r[14] = 0x527d8cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_527db0; }
    goto L_527e00;
L_527da4:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_527e00; }
L_527db0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_527da4; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[1]; c->r[14] = 0x527dccu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_527df0; }
    goto L_5281e8;
L_527de4:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_5281e8; }
L_527df0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_527de4; }
    goto L_528454;
L_527e00:;
    c->r[7] = 0x0u;
L_527e04:;
    { uint32_t ea = c->r[11] + 0x2d1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_527e80; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_527f88; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5280ac; }
    { uint32_t ea = c->r[10] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[13] + 0x30u;
    c->r[5] = c->r[13] + 0x28u;
    c->r[1] = c->r[11];
    c->r[2] = c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = c->r[4];
    if (COND_NE) { c->r[3] = c->r[0] + c->r[7]; }
    c->r[0] = c->r[5];
    c->r[14] = 0x527e4cu; f_bb67e4(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[4];
    c->r[1] = c->r[11];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[3] = c->r[0] + c->r[7]; }
    c->r[0] = c->r[5];
    c->r[14] = 0x527e74u; f_bb67e4(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5281cc;
L_527e80:;
    { uint32_t ea = c->r[10] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->v.s[0] = LD32(c->r[11] + 712u);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[9];
    if (COND_NE) { c->r[1] = c->r[0] + c->r[7]; }
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[5] = (c->r[0] >> 8);
    c->r[12] = (c->r[4] >> 8) & 0xffu;
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[14] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[3] = c->r[12] - c->r[1];
    c->r[6] = c->r[14] - c->r[6];
    c->r[1] = c->v.s[0];
    { uint32_t r = c->r[3] * c->r[1]; c->r[3] = r; }
    { uint32_t r = c->r[1] * c->r[6]; c->r[6] = r; }
    c->r[3] = c->r[3] + (c->r[5] << 8);
    c->r[6] = c->r[0] + (c->r[6] >> 8);
    c->r[5] = c->r[3] & 0xff00u;
    c->r[6] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = (c->r[4] >> 24);
    c->r[4] = (c->r[4] >> 16) & 0xffu;
    c->r[2] = c->r[5] - (c->r[0] >> 24);
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = (c->r[2] >> 8);
    c->r[2] = c->r[2] + (c->r[0] >> 24);
    c->r[2] = c->r[6] | (c->r[2] << 24);
    c->r[6] = (c->r[0] >> 16) & 0xffu;
    c->r[6] = c->r[4] - c->r[6];
    { uint32_t r = c->r[6] * c->r[1]; c->r[6] = r; }
    c->r[6] = (c->r[6] >> 8);
    c->r[0] = c->r[6] + (c->r[0] >> 16);
    c->r[6] = c->r[9];
    c->r[0] = (c->r[0] << 16);
    c->r[0] = uxtb16(c->r[0]);
    c->r[0] = c->r[2] | c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x184u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[6] = c->r[2] + c->r[7]; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = (c->r[2] >> 8) & 0xffu;
    c->r[3] = (c->r[2] >> 8);
    c->r[6] = c->r[12] - c->r[6];
    { uint32_t r = c->r[6] * c->r[1]; c->r[6] = r; }
    c->r[3] = c->r[6] + (c->r[3] << 8);
    c->r[6] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[6] = c->r[14] - c->r[6];
    { uint32_t r = c->r[1] * c->r[6]; c->r[6] = r; }
    c->r[3] = c->r[3] & 0xff00u;
    c->r[6] = c->r[2] + (c->r[6] >> 8);
    c->r[6] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[3] = c->r[6] | c->r[3];
    c->r[6] = c->r[5] - (c->r[2] >> 24);
    { uint32_t r = c->r[1] * c->r[6]; c->r[6] = r; }
    c->r[6] = (c->r[6] >> 8);
    c->r[6] = c->r[6] + (c->r[2] >> 24);
    c->r[3] = c->r[3] | (c->r[6] << 24);
    c->r[6] = (c->r[2] >> 16) & 0xffu;
    c->r[6] = c->r[4] - c->r[6];
    goto L_5281b4;
L_527f88:;
    { uint32_t ea = c->r[10] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[9] = 0xff000000u;
    c->r[8] = 0xfeu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[14];
    c->r[12] = (uint32_t)(uint8_t)(c->r[6]);
    if (COND_NE) { c->r[1] = c->r[0] + c->r[7]; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = (c->r[0] >> 8) & 0xffu;
    c->r[1] = (c->r[0] >> 24);
    c->r[4] = (uint32_t)((int32_t)(int16_t)(c->r[12] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[2] = (c->r[6] >> 8) & 0xffu;
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    (void)f_subs(c, c->r[8], (c->r[4] >> 8));
    c->r[3] = c->r[3] & 0xff00u;
    c->r[5] = c->r[3] | (c->r[4] >> 8);
    c->r[3] = (c->r[6] >> 24);
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[1] = c->r[9] & (c->r[1] << 16);
    c->r[1] = c->r[5] | c->r[1];
    c->r[5] = 0xff00u;
    c->r[0] = c->r[5] & (c->r[0] >> 8);
    c->r[5] = (c->r[6] >> 16) & 0xffu;
    c->r[6] = c->r[14];
    { uint32_t r = c->r[5] * c->r[0]; c->r[0] = r; }
    c->r[0] = uxtb16(c->r[0]);
    c->r[0] = c->r[1] | c->r[0];
    if (COND_EQ) { c->r[0] = c->r[0] | 0xffu; }
    c->r[1] = c->r[0] & 0xff00u;
    (void)f_subs(c, c->r[1], 0xfe00u);
    if (COND_EQ) { c->r[0] = c->r[0] | 0xff00u; }
    c->r[1] = c->r[0] & 0xff0000u;
    (void)f_subs(c, c->r[1], 0xfe0000u);
    if (COND_EQ) { c->r[0] = c->r[0] | 0xff0000u; }
    c->r[1] = c->r[0] & 0xff000000u;
    (void)f_subs(c, c->r[1], 0xfe000000u);
    if (COND_EQ) { c->r[0] = c->r[0] | 0xff000000u; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x184u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[6] = c->r[1] + c->r[7]; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = (c->r[1] >> 8) & 0xffu;
    c->r[6] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[4] >> 0));
    c->r[4] = (c->r[1] >> 24);
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[12] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[4] >> 0));
    c->r[2] = c->r[2] & 0xff00u;
    (void)f_subs(c, c->r[8], (c->r[6] >> 8));
    c->r[2] = c->r[2] | (c->r[6] >> 8);
    c->r[3] = c->r[9] & (c->r[3] << 16);
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = 0xff00u;
    c->r[1] = c->r[3] & (c->r[1] >> 8);
    { uint32_t r = c->r[5] * c->r[1]; c->r[1] = r; }
    c->r[1] = uxtb16(c->r[1]);
    c->r[1] = c->r[2] | c->r[1];
    if (COND_EQ) { c->r[1] = c->r[1] | 0xffu; }
    c->r[2] = c->r[1] & 0xff00u;
    (void)f_subs(c, c->r[2], 0xfe00u);
    if (COND_EQ) { c->r[1] = c->r[1] | 0xff00u; }
    c->r[2] = c->r[1] & 0xff0000u;
    (void)f_subs(c, c->r[2], 0xfe0000u);
    if (COND_EQ) { c->r[1] = c->r[1] | 0xff0000u; }
    c->r[2] = c->r[1] & 0xff000000u;
    (void)f_subs(c, c->r[2], 0xfe000000u);
    if (COND_EQ) { c->r[1] = c->r[1] | 0xff000000u; }
    goto L_5281cc;
L_5280ac:;
    { uint32_t ea = c->r[10] + 0x180u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->v.s[0] = LD32(c->r[11] + 712u);
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[8];
    if (COND_NE) { c->r[0] = c->r[1] + c->r[7]; }
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = (c->r[4] >> 8) & 0xffu;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[5] = (c->r[4] >> 8);
    c->r[12] = (c->r[6] >> 8) & 0xffu;
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[14] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[3] = c->r[12] - c->r[1];
    c->r[2] = c->r[14] - c->r[2];
    c->r[1] = c->v.s[0];
    { uint32_t r = c->r[3] * c->r[1]; c->r[3] = r; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[3] = c->r[3] + (c->r[5] << 8);
    c->r[2] = c->r[4] + (c->r[2] >> 8);
    c->r[5] = c->r[3] & 0xff00u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[3] = (c->r[4] >> 16) & 0xffu;
    c->r[2] = c->r[2] | c->r[5];
    c->r[5] = (c->r[6] >> 16) & 0xffu;
    c->r[3] = c->r[5] - c->r[3];
    { uint32_t r = c->r[3] * c->r[1]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[3] = c->r[3] + (c->r[4] >> 16);
    c->r[3] = (c->r[3] << 16);
    c->r[3] = uxtb16(c->r[3]);
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = (c->r[6] >> 24);
    c->r[3] = c->r[3] - (c->r[4] >> 24);
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[3] = c->r[3] + (c->r[4] >> 24);
    c->r[3] = c->r[2] | (c->r[3] << 24);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xff000000u;
    c->r[0] = c->r[2] | c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x184u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[3] = c->r[2] + c->r[7]; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[6] = (c->r[2] >> 8);
    c->r[3] = c->r[12] - c->r[3];
    { uint32_t r = c->r[3] * c->r[1]; c->r[3] = r; }
    c->r[3] = c->r[3] + (c->r[6] << 8);
    c->r[6] = c->r[2] & 0xff000000u;
    c->r[3] = c->r[3] & 0xff00u;
    c->r[3] = c->r[3] | c->r[6];
    c->r[6] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[6] = c->r[14] - c->r[6];
    { uint32_t r = c->r[1] * c->r[6]; c->r[6] = r; }
    c->r[6] = c->r[2] + (c->r[6] >> 8);
    c->r[6] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[3] = c->r[3] | c->r[6];
    c->r[6] = (c->r[2] >> 16) & 0xffu;
    c->r[6] = c->r[5] - c->r[6];
L_5281b4:;
    { uint32_t r = c->r[6] * c->r[1]; c->r[1] = r; }
    c->r[1] = (c->r[1] >> 8);
    c->r[1] = c->r[1] + (c->r[2] >> 16);
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    c->r[1] = c->r[3] | c->r[1];
L_5281cc:;
    c->r[2] = c->r[10] + c->r[7];
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[7], 0x8u);
    { uint32_t ea = c->r[2] + 0x170u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x178u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_527e04; }
    goto L_528454;
L_5281e8:;
    c->r[9] = 0x0u;
L_5281ec:;
    { uint32_t ea = c->r[11] + 0x2d1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52823c; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_5282e0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_528380; }
    c->r[4] = c->r[13] + 0x24u;
    c->r[1] = c->r[10];
    c->r[2] = c->r[9];
    c->r[0] = c->r[4];
    c->r[14] = 0x52821cu; f_cf16cc(c);
    c->r[0] = c->r[13] + 0x28u;
    c->r[1] = c->r[11];
    c->r[2] = c->r[13] + 0x30u;
    c->r[3] = c->r[4];
    c->r[14] = 0x528230u; f_bb67e4(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    goto L_528438;
L_52823c:;
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[10];
    c->r[2] = c->r[9];
    c->r[14] = 0x52824cu; f_cf16cc(c);
    c->v.s[0] = LD32(c->r[11] + 712u);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->r[1] = c->r[3] - c->r[1];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[7] = (c->r[0] >> 8) & 0xffu;
    c->r[6] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = c->r[6] - c->r[7];
    c->r[6] = (c->r[0] >> 8);
    c->r[3] = c->v.s[0];
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    { uint32_t r = c->r[7] * c->r[3]; c->r[7] = r; }
    c->r[1] = c->r[0] + (c->r[1] >> 8);
    c->r[7] = c->r[7] + (c->r[6] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[7] = c->r[7] & 0xff00u;
    c->r[1] = c->r[7] | c->r[1];
    c->r[7] = (c->r[2] >> 24);
    c->r[7] = c->r[7] - (c->r[0] >> 24);
    { uint32_t r = c->r[7] * c->r[3]; c->r[7] = r; }
    c->r[7] = (c->r[7] >> 8);
    c->r[7] = c->r[7] + (c->r[0] >> 24);
    c->r[1] = c->r[1] | (c->r[7] << 24);
    c->r[7] = (c->r[0] >> 16) & 0xffu;
    c->r[2] = (c->r[2] >> 16) & 0xffu;
    c->r[2] = c->r[2] - c->r[7];
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    c->r[2] = (c->r[2] >> 8);
    c->r[0] = c->r[2] + (c->r[0] >> 16);
    c->r[0] = (c->r[0] << 16);
    c->r[0] = uxtb16(c->r[0]);
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    goto L_528438;
L_5282e0:;
    c->r[0] = c->r[13] + 0x28u;
    c->r[1] = c->r[10];
    c->r[2] = c->r[9];
    c->r[14] = 0x5282f0u; f_cf16cc(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[6] = (c->r[2] >> 24);
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[3] = (c->r[0] >> 8) & 0xffu;
    c->r[7] = (c->r[2] >> 8) & 0xffu;
    c->r[2] = (c->r[2] >> 16) & 0xffu;
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    c->r[7] = (c->r[0] >> 24);
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0));
    c->r[6] = 0xff000000u;
    c->r[3] = c->r[3] & 0xff00u;
    c->r[3] = c->r[3] | (c->r[1] >> 8);
    c->r[7] = c->r[6] & (c->r[7] << 16);
    c->r[3] = c->r[3] | c->r[7];
    c->r[7] = 0xff00u;
    c->r[0] = c->r[7] & (c->r[0] >> 8);
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    c->r[2] = 0xfeu;
    (void)f_subs(c, c->r[2], (c->r[1] >> 8));
    c->r[0] = uxtb16(c->r[0]);
    c->r[0] = c->r[3] | c->r[0];
    if (COND_EQ) { c->r[0] = c->r[0] | 0xffu; }
    c->r[1] = c->r[0] & 0xff00u;
    (void)f_subs(c, c->r[1], 0xfe00u);
    if (COND_EQ) { c->r[0] = c->r[0] | 0xff00u; }
    c->r[1] = c->r[0] & 0xff0000u;
    (void)f_subs(c, c->r[1], 0xfe0000u);
    if (COND_EQ) { c->r[0] = c->r[0] | 0xff0000u; }
    c->r[1] = c->r[0] & 0xff000000u;
    (void)f_subs(c, c->r[1], 0xfe000000u);
    if (COND_EQ) { c->r[0] = c->r[0] | 0xff000000u; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    goto L_528438;
L_528380:;
    c->r[0] = c->r[13] + 0x1cu;
    c->r[1] = c->r[10];
    c->r[2] = c->r[9];
    c->r[14] = 0x528390u; f_cf16cc(c);
    c->v.s[0] = LD32(c->r[11] + 712u);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->r[1] = c->r[3] - c->r[1];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[7] = (c->r[0] >> 8) & 0xffu;
    c->r[6] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = c->r[6] - c->r[7];
    c->r[6] = (c->r[0] >> 8);
    c->r[3] = c->v.s[0];
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    { uint32_t r = c->r[7] * c->r[3]; c->r[7] = r; }
    c->r[1] = c->r[0] + (c->r[1] >> 8);
    c->r[7] = c->r[7] + (c->r[6] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[7] = c->r[7] & 0xff00u;
    c->r[1] = c->r[7] | c->r[1];
    c->r[7] = (c->r[2] >> 24);
    c->r[7] = c->r[7] - (c->r[0] >> 24);
    { uint32_t r = c->r[7] * c->r[3]; c->r[7] = r; }
    c->r[7] = (c->r[7] >> 8);
    c->r[7] = c->r[7] + (c->r[0] >> 24);
    c->r[1] = c->r[1] | (c->r[7] << 24);
    c->r[7] = (c->r[0] >> 16) & 0xffu;
    c->r[2] = (c->r[2] >> 16) & 0xffu;
    c->r[2] = c->r[2] - c->r[7];
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    c->r[2] = (c->r[2] >> 8);
    c->r[0] = c->r[2] + (c->r[0] >> 16);
    c->r[2] = c->r[9];
    c->r[0] = (c->r[0] << 16);
    c->r[0] = uxtb16(c->r[0]);
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x28u;
    c->r[14] = 0x528430u; f_cf16cc(c);
    { uint32_t ea = c->r[13] + 0x2bu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x37u; ST8(ea, c->r[0]); }
L_528438:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0x34u;
    c->r[2] = c->r[9];
    c->r[14] = 0x528448u; f_cf1774(c);
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], 0x4u);
    if (COND_NE) { goto L_5281ec; }
L_528454:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_527d7c; }
    goto L_528608;
L_528464:;
    { uint32_t ea = c->r[11] + 0x2e2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_528608; }
    { uint32_t ea = c->r[11] + 0x1f0u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_528608; }
    c->r[0] = 0x1511074u;
    c->r[8] = c->r[13] + 0x30u;
    c->r[5] = c->r[13] + 0x28u;
    c->r[10] = c->r[13] + 0x2cu;
    c->r[4] = c->r[13] + 0x34u;
    { uint32_t ea = 0x528498u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_528494:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x5284a4u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_5284c4; }
    goto L_5284d4;
L_5284b8:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_5284d4; }
L_5284c4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5284b8; }
    goto L_5285fc;
L_5284d4:;
    { uint32_t ea = c->r[6] + 0x43u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5285fc; }
    { uint32_t ea = c->r[11] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5284f0u; rt_dispatch(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x528504u; f_5215c0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5285fc; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[14] = 0x52851cu; f_cf16cc(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[11];
    c->r[2] = c->r[8];
    c->r[3] = c->r[5];
    c->r[14] = 0x528530u; f_bb67e4(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x528548u; f_cf1774(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = 0x1u;
    c->r[14] = 0x528558u; f_cf16cc(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[11];
    c->r[2] = c->r[8];
    c->r[3] = c->r[5];
    c->r[14] = 0x52856cu; f_bb67e4(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x528584u; f_cf1774(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = 0x2u;
    c->r[14] = 0x528594u; f_cf16cc(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[11];
    c->r[2] = c->r[8];
    c->r[3] = c->r[5];
    c->r[14] = 0x5285a8u; f_bb67e4(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x5285c0u; f_cf1774(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = 0x3u;
    c->r[14] = 0x5285d0u; f_cf16cc(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[11];
    c->r[2] = c->r[8];
    c->r[3] = c->r[5];
    c->r[14] = 0x5285e4u; f_bb67e4(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x5285fcu; f_cf1774(c);
L_5285fc:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_528494; }
L_528608:;
    c->r[1] = 0x1u;
L_52860c:;
    c->r[0] = c->r[1];
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_52863c(Cpu *restrict c) {
    FN_ENTER(0x52863cu);
L_52863c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_5286a8; }
    c->r[1] = 0x407u;
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = 0x402u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_528698; }
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x364u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[4];
    c->r[14] = 0x528684u; f_bb575c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5286b0; }
L_52868c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5286c8;
L_528698:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5286a8u; rt_dispatch(c);
L_5286a8:;
    c->r[5] = c->r[4] + 0x364u;
    goto L_5286d0;
L_5286b0:;
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_5286dc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5286c8:;
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5286d0u; rt_dispatch(c);
L_5286d0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5286dc:;
    { uint32_t ea = c->r[4] + 0x29bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_52868c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x368u; ST32(ea, c->r[0]); }
    goto L_5286d0;
}
void f_5286f4(Cpu *restrict c) {
    FN_ENTER(0x5286f4u);
L_5286f4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5286f8(Cpu *restrict c) {
    FN_ENTER(0x5286f8u);
L_5286f8:;
    c->r[0] = 0x1510e14u;
    { uint32_t ea = 0x528704u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_528708(Cpu *restrict c) {
    FN_ENTER(0x528708u);
L_528708:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0x528718u; f_bb8dbc(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_bb8df8(c);
}
void f_528720(Cpu *restrict c) {
    FN_ENTER(0x528720u);
L_528720:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1561a5cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x5u;
    c->r[12] = 0x6u;
    c->r[0] = 0x528744u + c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[14] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1513f54u;
    c->r[3] = 0x380u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x1510d70u;
    { uint32_t ea = 0x5287a0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1235a91u;
    { uint32_t ea = 0x5287a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5287acu + c->r[1];
    c->r[14] = 0x5287acu; f_9aedcc(c);
    c->r[1] = 0x1513f40u;
    { uint32_t ea = 0x5287b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5287d8(Cpu *restrict c) {
    FN_ENTER(0x5287d8u);
L_5287d8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1510cf8u;
    { uint32_t ea = 0x5287e8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5287ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x1a0u;
    c->pc = c->r[5]; c->r[14] = 0x528804u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x52880cu; f_a87958(c);
    c->r[0] = 0x1513ee0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x52881cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x80u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x52882cu; f_51be70(c);
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[5]); }
    c->r[14] = 0x528844u; f_51beb4(c);
    c->r[0] = 0x1u;
    c->r[1] = 0x17cu;
    { uint32_t ea = c->r[4] + 0x18cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x158u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[5]); }
    c->r[1] = 0x17eu;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[5]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[4] + 0x180u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18eu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x188u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x190u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x194u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5288c4(Cpu *restrict c) {
    FN_ENTER(0x5288c4u);
L_5288c4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1510c04u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x5288dcu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5288e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_528900(Cpu *restrict c) {
    FN_ENTER(0x528900u);
L_528900:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x52890cu; f_a87958(c);
    c->r[0] = 0x1513de0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x52891cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x80u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x52892cu; f_51be70(c);
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[5]); }
    c->r[14] = 0x528944u; f_51beb4(c);
    c->r[0] = 0x1u;
    c->r[1] = 0x17cu;
    { uint32_t ea = c->r[4] + 0x18cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x158u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[5]); }
    c->r[1] = 0x17eu;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[5]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[4] + 0x180u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18eu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x188u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x190u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x30u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x194u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x33u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x32u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x31u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5289cc(Cpu *restrict c) {
    FN_ENTER(0x5289ccu);
L_5289cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1513d18u;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x5289e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x80u; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5289f0u; f_52a104(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x5289f8u; f_51c03c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a879b4(c);
}
void f_528a08(Cpu *restrict c) {
    FN_ENTER(0x528a08u);
L_528a08:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1513cdcu;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x528a20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x80u; }
    c->r[0] = c->r[4];
    c->r[14] = 0x528a2cu; f_52a104(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x528a34u; f_51c03c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x528a3cu; f_a879b4(c);
    c->r[0] = 0x1510a98u;
    { uint32_t ea = 0x528a48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x528a48u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_528a64(Cpu *restrict c) {
    FN_ENTER(0x528a64u);
L_528a64:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[8] = c->r[1];
    c->r[11] = c->r[0];
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x528a9cu; f_9bb638(c);
    c->r[1] = 0x12357a7u;
    c->r[10] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0x528ab4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x34u;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x528b14u; f_9bb638(c);
    c->r[1] = 0x1235745u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x528b28u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x38u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x528b94u; f_9bb638(c);
    c->r[1] = 0x12356d7u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x528ba8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x3cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x528c10u; f_9bb638(c);
    c->r[1] = 0x123566eu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x528c24u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x18cu;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x528c8cu; f_9bb638(c);
    c->r[1] = 0x12355fbu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x528ca0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x18eu;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x528d08u; f_9bb638(c);
    c->r[1] = 0x123558au;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x528d1cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x18fu;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x528d88u; f_9bb638(c);
    c->r[1] = 0x1235514u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x528d9cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x190u;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x528e00u; f_9bb638(c);
    c->r[1] = 0x12354a7u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x528e14u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x198u;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x528e7cu; f_9bb638(c);
    c->r[1] = 0x1235441u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x528e90u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x199u;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x528ef8u; f_9bb638(c);
    c->r[1] = 0x12353d9u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x528f0cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x19au;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x528f78u; f_9bb638(c);
    c->r[1] = 0x123536eu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x528f8cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] + 0x3u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x40u;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x528ff8u; f_9bb638(c);
    c->r[1] = 0x12352fau;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x52900cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x44u;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x529070u; f_9bb638(c);
    c->r[1] = 0x123528cu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x529084u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x158u;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x5290ecu; f_9bb638(c);
    c->r[1] = 0x123521eu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x529100u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] + 0x7u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x15cu;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x52916cu; f_9bb638(c);
    c->r[1] = 0x12351a6u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x529180u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x160u;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x5291e0u; f_9bb638(c);
    c->r[1] = 0x123513cu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5291f4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x164u;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x529258u; f_9bb638(c);
    c->r[1] = 0x1234ef0u;
    c->r[1] = 0x529264u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x168u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[1] = c->r[8];
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_a87a24(c);
}
void f_529304(Cpu *restrict c) {
    FN_ENTER(0x529304u);
L_529304:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_529308(Cpu *restrict c) {
    FN_ENTER(0x529308u);
L_529308:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[3];
    c->r[8] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52933c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x52933cu; rt_dispatch(c);
L_52933c:;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_529378; }
    c->r[0] = c->r[6];
    c->r[14] = 0x529358u; f_a87648(c);
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST8(ea, c->r[0]); }
L_529378:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_529390; }
    c->r[0] = c->r[4] + 0x80u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_51c280(c);
L_529390:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_529394(Cpu *restrict c) {
    FN_ENTER(0x529394u);
L_529394:;
    c->v.s[0] = 0x0u;
    return;
}
void f_5293a0(Cpu *restrict c) {
    FN_ENTER(0x5293a0u);
L_5293a0:;
    c->r[0] = 0x150fe58u;
    { uint32_t ea = 0x5293acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    return;
}
void f_5293d0(Cpu *restrict c) {
    FN_ENTER(0x5293d0u);
L_5293d0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xe2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529458; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529464; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x529410u; rt_dispatch(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_529464; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0xacu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[13];
    c->pc = c->r[5]; c->r[14] = 0x529434u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_529480;
L_529458:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_529464:;
    { uint32_t ea = c->r[4] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
L_529480:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x529494u; rt_dispatch(c);
    c->v.s[2] = LD32(c->r[13] + 20u);
    c->v.s[4] = LD32(c->r[4] + 232u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = 0x1u; }
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5294b8(Cpu *restrict c) {
    FN_ENTER(0x5294b8u);
L_5294b8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[1];
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[13];
    c->pc = c->r[3]; c->r[14] = 0x5294e0u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->v.s[4] = LD32(c->r[13] + 4u);
    c->v.s[2] = LD32(c->r[13]);
    c->v.s[12] = LD32(c->r[13] + 48u);
    c->v.s[10] = LD32(c->r[13] + 20u);
    c->v.s[8] = LD32(c->r[13] + 16u);
    c->v.s[14] = LD32(c->r[13] + 36u);
    c->v.s[3] = LD32(c->r[13] + 32u);
    c->v.s[6] = LD32(c->r[13] + 8u);
    c->v.s[1] = LD32(c->r[13] + 56u);
    c->v.s[5] = LD32(c->r[13] + 24u);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.s[2] = LD32(c->r[13] + 40u);
    c->v.f[10] = c->v.f[10] * c->v.f[0];
    c->v.f[0] = c->v.f[14] * c->v.f[0];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[3] * c->v.f[12]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[1]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[1]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[1]);
    c->v.s[4] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[10] ^ 0x80000000u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4], c->v.s[4]);
    ST32(c->r[4] + 4u, c->v.s[2]);
    ST32(c->r[4] + 8u, c->v.s[0]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_52955c(Cpu *restrict c) {
    FN_ENTER(0x52955cu);
L_52955c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x18u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[5] = 0x1u;
    c->v.s[0] = LD32(c->r[4] + 232u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_52965c; }
    c->r[0] = c->r[4] + 0x50u;
    c->r[14] = 0x52958cu; f_51d834(c);
    c->r[7] = c->r[0];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_52965c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5295b0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_52965c; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[13];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x5295dcu; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[6] + 64u);
    c->v.s[6] = LD32(c->r[13]);
    c->v.s[4] = LD32(c->r[6] + 68u);
    c->v.s[8] = LD32(c->r[13] + 4u);
    c->v.s[2] = LD32(c->r[6] + 72u);
    c->v.s[10] = LD32(c->r[13] + 8u);
    { uint32_t ea = c->r[4] + 0xd2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    if (COND_NE) { goto L_529624; }
    c->v.s[6] = LD32(c->r[6] + 96u);
    c->v.s[8] = LD32(c->r[6] + 100u);
    c->v.s[10] = LD32(c->r[6] + 104u);
    c->v.f[2] = c->v.f[2] / c->v.f[10];
    c->v.f[4] = c->v.f[4] / c->v.f[8];
    c->v.f[0] = c->v.f[0] / c->v.f[6];
L_529624:;
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_529648; }
    c->r[14] = 0x529644u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_529648:;
    c->v.s[0] = LD32(c->r[4] + 232u);
    c->r[5] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[5] = 0x1u; }
L_52965c:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_529668(Cpu *restrict c) {
    FN_ENTER(0x529668u);
L_529668:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = c->r[4] + 0x50u;
    c->r[14] = 0x529678u; f_51d7e8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_52969c; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x194u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x52969cu; rt_dispatch(c);
L_52969c:;
    { uint32_t ea = c->r[4] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5296ec; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5296c0; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x198u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_5296c0:;
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5296d4; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x199u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_5296d4:;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5296ec; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x19au; ST8(ea, c->r[0]); } }
L_5296ec:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_529740; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x529704u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x529718u: goto L_529718; case 0x529724u: goto L_529724; case 0x529730u: goto L_529730; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_529718:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_529738;
L_529724:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_529738;
L_529730:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
L_529738:;
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529740u; rt_dispatch(c);
L_529740:;
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5297e8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_529878; }
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_529878; }
    c->r[14] = 0x0u;
    c->r[1] = 0x56u;
    c->r[2] = 0x0u;
L_52976c:;
    c->r[3] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x154u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5297d4; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_5297d4; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[14]); }
    c->r[6] = c->r[2] + 0x1u;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_5297cc; }
L_5297a8:;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + (c->r[5] << 2); ST32(ea, c->r[14]); }
    c->r[5] = c->r[5] - 0x54u;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    c->r[5] = c->r[6];
    if (COND_CC) { goto L_5297a8; }
L_5297cc:;
    c->r[12] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[12]); }
L_5297d4:;
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_CC) { goto L_52976c; }
    goto L_529878;
L_5297e8:;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[14] = 0x0u;
    c->r[6] = 0x55u;
    c->r[2] = 0x0u;
L_529800:;
    c->r[3] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x150u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529868; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_529868; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[14]); }
    c->r[1] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[1] = c->r[6];
    if (COND_CS) { goto L_529860; }
L_52983c:;
    { uint32_t ea = c->r[4] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + (c->r[1] << 2); ST32(ea, c->r[14]); }
    c->r[1] = c->r[1] - 0x53u;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[1] = c->r[5];
    if (COND_CC) { goto L_52983c; }
L_529860:;
    c->r[12] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[12]); }
L_529868:;
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_CC) { goto L_529800; }
L_529878:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_52987c(Cpu *restrict c) {
    FN_ENTER(0x52987cu);
L_52987c:;
    return;
}
void f_529880(Cpu *restrict c) {
    FN_ENTER(0x529880u);
L_529880:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529898u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[1] = c->r[0] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LS) { c->r[1] = 0x3u; }
    if (COND_LS) { c->r[0] = (c->r[0] & 0xfffffff8u) | ((c->r[1] << 0) & 0x7u); }
    if (COND_LS) { { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5298c0(Cpu *restrict c) {
    FN_ENTER(0x5298c0u);
L_5298c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x380u;
    c->r[1] = 0x10u;
    c->r[14] = 0x5298d4u; f_5273b4(c);
    c->r[2] = c->r[4] + 0x50u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_5273f0(c);
}
void f_5298e4(Cpu *restrict c) {
    FN_ENTER(0x5298e4u);
L_5298e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1130u;
    c->r[1] = 0x10u;
    c->r[14] = 0x5298f8u; f_52af48(c);
    c->r[2] = c->r[4] + 0x50u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_52af84(c);
}
void f_529908(Cpu *restrict c) {
    FN_ENTER(0x529908u);
L_529908:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529d80; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529d80; }
    { uint32_t ea = c->r[4] + 0x31u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[4] + 0x50u;
    c->r[6] = 0x1u;
    goto L_52994c;
L_529948:;
    { uint32_t ea = c->r[4] + 0x31u; ST8(ea, c->r[0]); }
L_52994c:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x1eu);
    if (COND_HI) { goto L_529d78; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x529964u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5299e4u: goto L_5299e4; case 0x529a50u: goto L_529a50; case 0x529a74u: goto L_529a74; case 0x529b34u: goto L_529b34; case 0x529d78u: goto L_529d78; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5299e4:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1eu;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_529948; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_529d80; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529d80; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_529b10; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_529d80; }
    c->r[1] = 0x0u;
    c->r[14] = 0x529a40u; f_524588(c);
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_529b24; }
    goto L_529d80;
L_529a50:;
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529ac4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_529aec; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_529ad0; }
    goto L_529aec;
L_529a74:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LS) { goto L_529aa8; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = c->r[2] + 0x20u; }
L_529aa8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x529abcu; rt_dispatch(c);
    c->r[0] = 0x1eu;
    goto L_529948;
L_529ac4:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529aec; }
L_529ad0:;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_529b00; }
    c->r[0] = c->r[0] + 0x50u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_529d78; }
L_529aec:;
    { uint32_t ea = c->r[4] + 0x32u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x14u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_529948; }
    goto L_529d80;
L_529b00:;
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[4] + 0x32u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x31u; ST8(ea, c->r[0]); }
    goto L_52994c;
L_529b10:;
    c->r[1] = 0x0u;
    c->r[14] = 0x529b18u; f_524300(c);
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529d80; }
L_529b24:;
    c->r[14] = 0x529b28u; f_a87648(c);
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0x31u; ST8(ea, c->r[0]); }
    goto L_52994c;
L_529b34:;
    { uint32_t ea = c->r[4] + 0xe3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529b50; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529b50u; rt_dispatch(c);
L_529b50:;
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529b80; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529b6cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_529b80; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    goto L_529d88;
L_529b80:;
    { uint32_t ea = c->r[4] + 0xc6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_529c68; }
L_529b94:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529ba4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_529bb8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    goto L_529d88;
L_529bb8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_529c94; }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_529d64; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_529d50; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529bfcu; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_529d50; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[7]; c->r[14] = 0x529c24u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[4] + 0x154u;
    { uint32_t ea = c->r[7] + (c->r[0] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529c40u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529c54u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x150f0c4u;
    { uint32_t ea = 0x529c68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_529d20;
L_529c68:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529c78u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x19bu; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_529b94; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_529c94:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_529d50; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529cb8u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_529d50; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[12]; c->r[14] = 0x529ce0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[4] + 0x150u;
    { uint32_t ea = c->r[7] + (c->r[0] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529cfcu; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529d10u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x150f008u;
    { uint32_t ea = 0x529d24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_529d20:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
    c->r[0] = c->r[1];
    c->r[1] = c->r[5];
    c->r[14] = 0x529d38u; f_e067ec(c);
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GT) { goto L_529d5c; }
    goto L_529d9c;
L_529d50:;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_529d9c; }
L_529d5c:;
    c->r[1] = 0x0u;
    c->r[0] = 0x1u;
L_529d64:;
    { uint32_t ea = c->r[4] + 0x18du; ST8(ea, c->r[0]); }
L_529d68:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_529d80; }
L_529d78:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_529d80:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8u;
L_529d88:;
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_529d9c:;
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_529dac; }
    c->r[1] = 0x0u;
    goto L_529d68;
L_529dac:;
    c->r[1] = 0x1u;
    goto L_529d64;
}
void f_529dbc(Cpu *restrict c) {
    FN_ENTER(0x529dbcu);
L_529dbc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xc6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_529eb8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529de0u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_529eb4; }
    { uint32_t ea = c->r[4] + 0x18du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529eb4; }
    { uint32_t ea = c->r[4] + 0xc6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_529e5c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_529eac; }
    c->r[6] = c->r[4] + 0x150u;
    c->r[7] = 0x0u;
L_529e18:;
    { uint32_t ea = c->r[6] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529e50; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7u;
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_CC) { goto L_529e50; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    c->pc = c->r[3]; c->r[14] = 0x529e4cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_529e50:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_LT) { goto L_529e18; }
L_529e5c:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_529eac; }
    c->r[6] = 0x0u;
L_529e68:;
    c->r[7] = c->r[4] + (c->r[6] << 2);
    { uint32_t ea = c->r[7] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529e84; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x529e84u; rt_dispatch(c);
L_529e84:;
    { uint32_t ea = c->r[7] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529e9c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x529e9cu; rt_dispatch(c);
L_529e9c:;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { goto L_529e68; }
L_529eac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18du; ST8(ea, c->r[0]); }
L_529eb4:;
    { uint32_t ea = c->r[4] + 0x19bu; ST8(ea, c->r[5]); }
L_529eb8:;
    { uint32_t ea = c->r[4] + 0xcau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_529f4c; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_529f9c; }
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_529fb4; }
    { uint32_t ea = c->r[4] + 0x199u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_529fb4; }
    { uint32_t ea = c->r[4] + 0xc6u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x19bu; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_529fe4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529fcc; }
    c->v.s[0] = LD32(c->r[4] + 28u);
    c->v.s[2] = LD32(c->r[4] + 388u);
    c->v.s[4] = LD32(c->r[4] + 392u);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[4]);
    c->r[1] = c->v.s[2];
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[4] + 388u, c->v.s[0]);
    c->r[2] = sdiv32(c->r[1], c->r[0]);
    c->r[3] = c->v.s[4];
    c->r[2] = c->r[1] - c->r[2] * c->r[0];
    c->r[1] = c->r[3] - c->r[1];
    c->r[1] = c->r[1] - c->r[2];
    c->r[0] = sdiv32(c->r[1], c->r[0]);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_529fe4; }
    ST32(c->r[4] + 392u, c->v.s[0]);
    goto L_529f90;
L_529f4c:;
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_529fb4; }
    { uint32_t ea = c->r[4] + 0x199u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_529fb4; }
    { uint32_t ea = c->r[4] + 0xc6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x19bu; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_529fe4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529f88u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
L_529f90:;
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_529f9c:;
    { uint32_t ea = c->r[4] + 0x199u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_529fb4; }
    { uint32_t ea = c->r[4] + 0x19au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529fcc; }
L_529fb4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_529fcc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x529fdcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_529fe8; }
L_529fe4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_529fe8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52a000(Cpu *restrict c) {
    FN_ENTER(0x52a000u);
L_52a000:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x52a018u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52a034(Cpu *restrict c) {
    FN_ENTER(0x52a034u);
L_52a034:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xc6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_52a0a0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_52a0f0; }
    c->r[5] = c->r[4] + 0x150u;
    c->r[6] = 0x0u;
L_52a05c:;
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a094; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7u;
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_CC) { goto L_52a094; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    c->pc = c->r[3]; c->r[14] = 0x52a090u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_52a094:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_LT) { goto L_52a05c; }
L_52a0a0:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_52a0f0; }
    c->r[5] = 0x0u;
L_52a0ac:;
    c->r[6] = c->r[4] + (c->r[5] << 2);
    { uint32_t ea = c->r[6] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a0c8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x52a0c8u; rt_dispatch(c);
L_52a0c8:;
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a0e0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x52a0e0u; rt_dispatch(c);
L_52a0e0:;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LT) { goto L_52a0ac; }
L_52a0f0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18du; ST8(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_52a104(Cpu *restrict c) {
    FN_ENTER(0x52a104u);
L_52a104:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a164; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_52a1a8; }
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x15cu; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_52a1ac; }
    c->r[6] = c->r[4] + 0x154u;
    c->r[7] = 0x0u;
L_52a138:;
    { uint32_t ea = c->r[6] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a154; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x52a150u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
L_52a154:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_LT) { goto L_52a138; }
    goto L_52a1ac;
L_52a164:;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x15cu; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_52a1ac; }
    c->r[6] = c->r[4] + 0x150u;
    c->r[7] = 0x0u;
L_52a17c:;
    { uint32_t ea = c->r[6] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a198; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x52a194u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
L_52a198:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_LT) { goto L_52a17c; }
    goto L_52a1ac;
L_52a1a8:;
    c->r[5] = c->r[4] + 0x15cu;
L_52a1ac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a1ec; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_52a1e0; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
L_52a1e0:;
    c->r[14] = 0x52a1e4u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
L_52a1ec:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a220; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_52a214; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_52a214:;
    c->r[14] = 0x52a218u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
L_52a220:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a254; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_52a248; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
L_52a248:;
    c->r[14] = 0x52a24cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
L_52a254:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_52a258(Cpu *restrict c) {
    FN_ENTER(0x52a258u);
L_52a258:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_52a2b4; }
    c->r[5] = 0x0u;
L_52a270:;
    c->r[6] = c->r[4] + (c->r[5] << 2);
    { uint32_t ea = c->r[6] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a28c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x52a28cu; rt_dispatch(c);
L_52a28c:;
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a2a4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x52a2a4u; rt_dispatch(c);
L_52a2a4:;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LT) { goto L_52a270; }
L_52a2b4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_52a2c0(Cpu *restrict c) {
    FN_ENTER(0x52a2c0u);
L_52a2c0:;
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x15cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_52a330; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_52a30c; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { return; }
    c->r[0] = c->r[1] + 0x154u;
    c->r[1] = 0x0u;
L_52a2f0:;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_52a334; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_52a2f0; }
    goto L_52a32c;
L_52a30c:;
    c->r[0] = c->r[1] + 0x150u;
    c->r[1] = 0x0u;
L_52a314:;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_52a334; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_52a314; }
L_52a32c:;
    c->r[0] = 0x0u;
L_52a330:;
    return;
L_52a334:;
    c->r[0] = 0x1u;
    return;
}
void f_52a33c(Cpu *restrict c) {
    FN_ENTER(0x52a33cu);
L_52a33c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x150e7fcu;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = 0x52a350u + c->r[1]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_52a3f8; }
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_52a3ac; }
    c->r[14] = c->r[2] + 0xe0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[14]; c->r[1] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
L_52a3ac:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_52a3f8; }
    { uint32_t ea = c->r[2] + 0x498u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_52a3f8; }
    { uint32_t ea = c->r[2] + 0x494u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[1] = c->r[2] + (c->r[1] << 5);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
L_52a3f8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_52a400(Cpu *restrict c) {
    FN_ENTER(0x52a400u);
L_52a400:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_52a438; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x52a420u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { c->r[0] = 0x2u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_52a438:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52a45c(Cpu *restrict c) {
    FN_ENTER(0x52a45cu);
L_52a45c:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GT) { goto L_52a4c0; }
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_52a494; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x48u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[2] + 0x4cu; ST32(ea, c->r[3]); }
L_52a494:;
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
L_52a4c0:;
    return;
}
void f_52a4c4(Cpu *restrict c) {
    FN_ENTER(0x52a4c4u);
L_52a4c4:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GT) { return; }
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->v.s[0] = 0x3c8efa36u;
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[1] + 4u);
    c->v.s[6] = LD32(c->r[1] + 8u);
    c->r[1] = 0x0u;
    c->r[4] = c->r[0] + (c->r[2] << 2);
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    ST32(c->r[13], c->v.s[2]);
    ST32(c->r[13] + 4u, c->v.s[4]);
    ST32(c->r[13] + 8u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a524; }
    c->r[1] = c->r[13];
    c->r[14] = 0x52a524u; f_aa7dc4(c);
L_52a524:;
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52a538; }
    c->r[1] = c->r[13];
    c->r[14] = 0x52a538u; f_aa7dc4(c);
L_52a538:;
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    return;
}
void f_52a548(Cpu *restrict c) {
    FN_ENTER(0x52a548u);
L_52a548:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[4] = c->r[1];
    c->r[1] = ~0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[1] = 0x150e5dcu;
    c->r[5] = c->r[4] + 0x30u;
    { uint32_t ea = 0x52a570u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x150f618u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x52a594u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LS) { goto L_52a5d4; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
L_52a5d4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[2];
    c->r[14] = 0x52a5e0u; f_51cc6c(c);
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[0]; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_52a600; }
    c->r[0] = c->r[5];
    c->r[14] = 0x52a600u; f_525778(c);
L_52a600:;
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_52a61c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x52a61cu; rt_dispatch(c);
L_52a61c:;
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x76u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_52a64c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_52a654; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_52a65c; }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { c->r[1] = 0x0u; }
    goto L_52a66c;
L_52a64c:;
    c->r[1] = 0x0u;
    goto L_52a66c;
L_52a654:;
    c->r[1] = 0x2u;
    goto L_52a66c;
L_52a65c:;
    { uint32_t ea = c->r[4] + 0x7eu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_52a678; }
L_52a66c:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_52a678:;
    c->r[1] = 0x4u;
    c->v.s[16] = 0x3f800000u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->v.s[0] = LD32(c->r[4] + 32u);
    c->v.s[2] = LD32(c->r[4] + 36u);
    c->v.s[4] = LD32(c->r[4] + 40u);
    c->v.s[8] = LD32(c->r[4] + 44u);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x150e4a4u;
    { uint32_t ea = 0x52a6a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[12] = c->v.f[0] + c->v.f[0];
    c->v.f[4] = c->v.f[4] + c->v.f[4];
    c->v.f[6] = c->v.f[10] * c->v.f[8];
    c->v.f[10] = c->v.f[2] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[12] * c->v.f[8]);
    ST32(c->r[4] + 16u, c->v.s[6]);
    c->v.f[4] = c->v.f[16] - c->v.f[10];
    ST32(c->r[4] + 20u, c->v.s[2]);
    ST32(c->r[4] + 24u, c->v.s[4]);
    c->v.s[18] = LD32(c->r[1]);
    c->v.s[0] = LD32(c->r[4] + 80u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_52a724; }
    c->r[1] = 0x150e450u;
    c->v.s[8] = LD32(c->r[4] + 84u);
    { uint32_t ea = 0x52a6fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[10] = LD32(c->r[1] + 4u);
    vfp_cmp_f(c, c->v.f[8], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_52a724; }
    c->r[1] = 0x150e434u;
    c->v.s[8] = LD32(c->r[4] + 88u);
    { uint32_t ea = 0x52a718u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[10] = LD32(c->r[1] + 8u);
    vfp_cmp_f(c, c->v.f[8], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_52a770; }
L_52a724:;
    vfp_cmp_f(c, c->v.f[6], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_EQ) { c->r[1] = 0x150e414u; }
    if (COND_EQ) { { uint32_t ea = 0x52a738u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_EQ) { c->v.s[6] = LD32(c->r[1] + 4u); }
    if (COND_EQ) { vfp_cmp_f(c, c->v.f[2], c->v.f[6]); }
    if (COND_EQ) { vfp_mrs_flags(c); }
    if (COND_NE) { goto L_52a778; }
    c->v.s[2] = LD32(c->r[1] + 8u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_52a778; }
    ST32(c->r[4] + 16u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_52a770:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_52a778:;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_52a7c4; }
    c->v.s[20] = 0x0u;
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x52a790u + 0xcu;
    c->v.s[18] = 0xbf800000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = c->v.s[20];
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x52a7b8u: goto L_52a7b8; case 0x52a7d0u: goto L_52a7d0; case 0x52a7dcu: goto L_52a7dc; case 0x52a7f0u: goto L_52a7f0; case 0x52a9e0u: goto L_52a9e0; case 0x52a9f0u: goto L_52a9f0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_52a7b8:;
    c->r[0] = 0x150ea94u;
    { uint32_t ea = 0x52a7c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_52a7e4;
L_52a7c4:;
    c->r[0] = 0x150e37cu;
    { uint32_t ea = 0x52a7d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_52a7e8;
L_52a7d0:;
    c->r[0] = 0x150ea2cu;
    { uint32_t ea = 0x52a7dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_52a7e4;
L_52a7dc:;
    c->r[0] = 0x150ea1cu;
    { uint32_t ea = 0x52a7e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_52a7e4:;
    c->v.s[18] = LD32(c->r[0]);
L_52a7e8:;
    c->v.s[20] = LD32(c->r[0] + 4u);
    c->v.s[22] = LD32(c->r[0] + 8u);
L_52a7f0:;
    c->v.s[2] = LD32(c->r[4] + 84u);
    c->v.s[4] = LD32(c->r[4] + 88u);
    c->v.s[6] = 0xbf7fbe77u;
    c->v.f[2] = c->v.f[20] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_52a83c; }
    c->v.s[0] = 0x3c23d70au;
    c->v.f[2] = fabsf(c->v.f[18]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_52a89c; }
    c->r[0] = 0x150e9d4u;
    { uint32_t ea = 0x52a834u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[2] = c->r[0] + 0x4u;
    goto L_52a8d8;
L_52a83c:;
    c->v.f[0] = c->v.f[2] + c->v.f[16];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_52a85c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x52a85cu; f_15efddc(c);
L_52a85c:;
    c->v.f[1] = c->v.f[16] / c->v.f[0];
    c->v.s[2] = LD32(c->r[4] + 80u);
    c->v.s[4] = LD32(c->r[4] + 84u);
    c->v.s[6] = LD32(c->r[4] + 88u);
    c->v.s[14] = 0x3f000000u;
    c->v.f[0] = c->v.f[0] * c->v.f[14];
    c->v.f[8] = c->v.f[18] * c->v.f[4];
    c->v.f[10] = c->v.f[22] * c->v.f[2];
    c->v.f[12] = c->v.f[20] * c->v.f[6];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[20] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[22] * c->v.f[4]);
    c->v.f[6] = c->v.f[1] * c->v.f[8];
    c->v.f[4] = c->v.f[1] * c->v.f[10];
    c->v.f[2] = c->v.f[1] * c->v.f[12];
    goto L_52a934;
L_52a89c:;
    c->r[0] = 0x150e954u;
    c->v.f[2] = fabsf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = 0x52a8b0u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x150e998u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = 0x52a8c0u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + 0x8u;
    c->r[0] = c->r[2];
    c->r[2] = c->r[2] + 0x4u;
    if (COND_MI) { c->r[0] = c->r[3]; }
    if (COND_MI) { c->r[1] = c->r[3] + 0x8u; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[3] + 0x4u; }
L_52a8d8:;
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[2]);
    c->v.f[26] = c->v.f[22] * c->v.f[2];
    c->v.f[24] = c->v.f[20] * c->v.f[0];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[22] * c->v.f[4]);
    c->v.f[18] = c->v.f[18] * c->v.f[4];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[20] * c->v.f[2]);
    c->v.f[0] = c->v.f[26] * c->v.f[26];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_52a920; }
    c->r[14] = 0x52a91cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_52a920:;
    c->v.f[2] = c->v.f[16] / c->v.f[2];
    c->v.s[0] = 0xb33bbd2eu;
    c->v.f[6] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = c->v.f[2] * c->v.f[26];
    c->v.f[2] = c->v.f[24] * c->v.f[2];
L_52a934:;
    c->v.f[8] = c->v.f[6] + c->v.f[6];
    c->v.f[10] = c->v.f[4] + c->v.f[4];
    c->v.f[12] = c->v.f[2] + c->v.f[2];
    c->v.s[5] = LD32(c->r[4] + 16u);
    c->v.s[7] = LD32(c->r[4] + 20u);
    c->v.s[9] = LD32(c->r[4] + 24u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[4] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.f[11] = c->v.f[8] * c->v.f[0];
    c->v.f[13] = c->v.f[2] * c->v.f[10];
    c->v.f[1] = c->v.f[2] * c->v.f[12];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[12] = c->v.f[12] * c->v.f[0];
    c->v.f[0] = c->v.f[10] * c->v.f[0];
    c->v.f[3] = c->v.f[14] + c->v.f[6];
    c->v.f[8] = c->v.f[13] - c->v.f[11];
    c->v.f[6] = c->v.f[1] + c->v.f[6];
    c->v.f[11] = c->v.f[13] + c->v.f[11];
    c->v.f[13] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[3] = c->v.f[16] - c->v.f[3];
    c->v.f[6] = c->v.f[16] - c->v.f[6];
    c->v.f[10] = c->v.f[5] * c->v.f[3];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[7]);
    c->v.f[8] = c->v.f[1] + c->v.f[14];
    c->v.f[3] = c->v.f[4] + c->v.f[12];
    c->v.f[4] = c->v.f[4] - c->v.f[12];
    c->v.f[6] = c->v.f[7] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[5] * c->v.f[11]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[13] * c->v.f[9]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[9]);
    c->v.f[8] = c->v.f[16] - c->v.f[8];
    c->v.f[2] = c->v.f[7] * c->v.f[3];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[5] * c->v.f[0]);
    ST32(c->r[4] + 16u, c->v.s[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[9]);
    ST32(c->r[4] + 20u, c->v.s[6]);
    ST32(c->r[4] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_52a9e0:;
    c->v.s[18] = 0x0u;
    c->v.s[20] = 0xbf800000u;
    c->v.s[22] = c->v.s[18];
    goto L_52a7f0;
L_52a9f0:;
    c->v.s[18] = 0x0u;
    c->v.s[22] = 0xbf800000u;
    c->v.s[20] = c->v.s[18];
    goto L_52a7f0;
}
void f_52aa44(Cpu *restrict c) {
    FN_ENTER(0x52aa44u);
L_52aa44:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[9]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[5] = c->r[3];
    c->r[6] = c->r[2];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_CS) { goto L_52aae0; }
    { uint32_t ea = c->r[5] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52ab70; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x52aa7cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52ab70; }
    { uint32_t ea = c->r[4] + 0x114u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x3u;
    c->r[2] = (c->r[2] & 0xfffffffu) | ((c->r[1] << 28) & 0xf0000000u);
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[3]); }
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x72u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5] + 0x40u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = 0x150f0d8u;
    c->r[1] = c->r[6];
    c->r[3] = c->r[7];
    { uint32_t ea = 0x52aad4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x52aadcu; f_bbd5a0(c);
    goto L_52ab70;
L_52aae0:;
    if (COND_EQ) { goto L_52ab24; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_52ab70; }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x77u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x7eu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[7] = c->r[5] + 0x40u;
    c->r[3] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x52ab20u; f_bbd7b8(c);
    goto L_52ab50;
L_52ab24:;
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x40u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x150f064u;
    { uint32_t ea = 0x52ab48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x52ab50u; f_bbd638(c);
L_52ab50:;
    { uint32_t ea = c->r[5] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
L_52ab70:;
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x52ab80u; f_bbd50c(c);
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x77u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[1] = (c->r[1] >> 3);
    (void)f_subs(c, c->r[1], 0x4au);
    if (COND_HI) { goto L_52abd8; }
    c->r[1] = 0x110u;
    { uint32_t ea = c->r[4] + 0x114u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 16);
    c->r[1] = c->r[4] + 0x110u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
L_52abd8:;
    { uint32_t ea = c->r[5] + 0x7bu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = ~0xfu;
    c->r[1] = ~0x0u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_52ac14; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_52ac30; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_52ac54; }
    c->r[7] = c->r[4] + 0x110u;
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    c->r[3] = c->r[3] & c->r[1];
    c->r[1] = c->r[2] & c->r[1];
    c->r[0] = c->r[7] & c->r[0];
    goto L_52ac48;
L_52ac14:;
    c->r[7] = c->r[4] + 0x110u;
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    c->r[3] = c->r[3] & c->r[1];
    c->r[1] = c->r[2] & c->r[1];
    c->r[0] = c->r[7] & c->r[0];
    c->r[0] = c->r[0] | 0x3u;
    goto L_52ac48;
L_52ac30:;
    c->r[7] = c->r[4] + 0x110u;
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    c->r[3] = c->r[3] & c->r[1];
    c->r[1] = c->r[2] & c->r[1];
    c->r[0] = c->r[7] & c->r[0];
    c->r[0] = c->r[0] | 0x1u;
L_52ac48:;
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
L_52ac54:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[9] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_52ac64(Cpu *restrict c) {
    FN_ENTER(0x52ac64u);
L_52ac64:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[7] = c->r[3];
    c->r[6] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_CS) { goto L_52ac9c; }
    { uint32_t ea = c->r[7] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52acc4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x52ac98u; rt_dispatch(c);
    goto L_52acc4;
L_52ac9c:;
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_NE) { goto L_52acc4; }
    { uint32_t ea = c->r[7] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
L_52acc4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x52acd8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
L_52ace0:;
    c->r[2] = (c->r[0] >> 5);
    c->r[4] = c->r[0] & 0x1fu;
    c->r[0] = c->r[0] + 0x1u;
    c->r[3] = c->r[5] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x110u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] & ~sh_lsl(c->r[1], c->r[4]);
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = c->r[6] | sh_lsl(c->r[1], c->r[4]); }
    (void)f_subs(c, c->r[0], 0x80u);
    { uint32_t ea = c->r[3] + 0x110u; ST32(ea, c->r[6]); }
    if (COND_NE) { goto L_52ace0; }
    { uint32_t ea = c->r[7] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x77u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x38u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_52ad40(Cpu *restrict c) {
    FN_ENTER(0x52ad40u);
L_52ad40:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_52ad44(Cpu *restrict c) {
    FN_ENTER(0x52ad44u);
L_52ad44:;
    c->r[0] = 0x150e790u;
    { uint32_t ea = 0x52ad50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_52ad54(Cpu *restrict c) {
    FN_ENTER(0x52ad54u);
L_52ad54:;
    c->r[0] = 0x10u;
    return;
}
void f_52ad5c(Cpu *restrict c) {
    FN_ENTER(0x52ad5cu);
L_52ad5c:;
    c->r[0] = 0x10u;
    return;
}
void f_52ad64(Cpu *restrict c) {
    FN_ENTER(0x52ad64u);
L_52ad64:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52ad70(Cpu *restrict c) {
    FN_ENTER(0x52ad70u);
L_52ad70:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52ad7c(Cpu *restrict c) {
    FN_ENTER(0x52ad7cu);
L_52ad7c:;
    c->r[0] = 0x0u;
    return;
}
void f_52ad84(Cpu *restrict c) {
    FN_ENTER(0x52ad84u);
L_52ad84:;
    return;
}
void f_52ad88(Cpu *restrict c) {
    FN_ENTER(0x52ad88u);
L_52ad88:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x155f444u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x5u;
    c->r[12] = 0x6u;
    c->r[0] = 0x52adacu + c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[14] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x150e4f8u;
    c->r[3] = 0x1a0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x150e6d0u;
    { uint32_t ea = 0x52ae08u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1233436u;
    { uint32_t ea = 0x52ae10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x52ae14u + c->r[1];
    c->r[14] = 0x52ae14u; f_9aedcc(c);
    c->r[1] = 0x15118e0u;
    { uint32_t ea = 0x52ae20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_52ae40(Cpu *restrict c) {
    FN_ENTER(0x52ae40u);
L_52ae40:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x150e6d8u;
    { uint32_t ea = 0x52ae50u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x52ae54u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x1130u;
    c->pc = c->r[5]; c->r[14] = 0x52ae6cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x52ae74u; f_b396a8(c);
    c->r[0] = 0x1511880u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x52ae84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1010u;
    { uint32_t ea = c->r[4] + 0xffcu; ST32(ea, c->r[5]); }
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x52ae98u; f_51be70(c);
    c->r[0] = 0x10e0u;
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x10e4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x10e8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x10ecu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x10f0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x10f4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x10f8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x111cu;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x110cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1108u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1104u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1100u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x10fcu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xfd0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0xfc00ffffu) | ((c->r[1] << 16) & 0x3ff0000u);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1120u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x112cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x1128u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1124u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_52af48(Cpu *restrict c) {
    FN_ENTER(0x52af48u);
L_52af48:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x150e5c8u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x52af60u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x52af64u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52af84(Cpu *restrict c) {
    FN_ENTER(0x52af84u);
L_52af84:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[2];
    c->r[8] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x52af98u; f_b396a8(c);
    c->r[0] = 0x1511758u;
    c->r[6] = 0x0u;
    c->r[7] = c->r[4];
    { uint32_t ea = 0x52afacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xffcu; ST32(ea, c->r[6]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x14u;
    c->r[14] = 0x52afbcu; f_51be70(c);
    c->r[1] = 0x3f800000u;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[7] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xe8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xf0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x120u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x108u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x10cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x110u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x104u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x100u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0x2cu; ST32(ea, c->r[8]); }
    if (COND_EQ) { goto L_52b014; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3ff0000u;
    c->r[1] = c->r[1] & c->r[2];
    goto L_52b018;
L_52b014:;
    c->r[1] = 0x10000u;
L_52b018:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[2] = c->r[2] & 0xfc00ffffu;
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_52b090; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[4] + 0xfe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xff0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xff4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xff8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x1004u;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x1008u;
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x100cu;
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x30u;
    c->r[14] = 0x52b090u; f_51c1a0(c);
L_52b090:;
    c->r[0] = 0x1120u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x112cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x1128u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1124u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_52b0c0(Cpu *restrict c) {
    FN_ENTER(0x52b0c0u);
L_52b0c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151162cu;
    c->r[2] = 0x1010u;
    { uint32_t ea = 0x52b0d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + c->r[2]; }
    c->r[14] = 0x52b0e4u; f_51c03c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_b3992c(c);
}
void f_52b0f4(Cpu *restrict c) {
    FN_ENTER(0x52b0f4u);
L_52b0f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15115f8u;
    c->r[2] = 0x1010u;
    { uint32_t ea = 0x52b10cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + c->r[2]; }
    c->r[14] = 0x52b118u; f_51c03c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x52b120u; f_b3992c(c);
    c->r[0] = 0x150e3fcu;
    { uint32_t ea = 0x52b12cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52b12cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52b148(Cpu *restrict c) {
    FN_ENTER(0x52b148u);
L_52b148:;
    __attribute__((musttail)) return f_b3b1a8(c);
}
void f_52b14c(Cpu *restrict c) {
    FN_ENTER(0x52b14cu);
L_52b14c:;
    __attribute__((musttail)) return f_b3b1a4(c);
}
void f_52b150(Cpu *restrict c) {
    FN_ENTER(0x52b150u);
L_52b150:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x52b15cu; f_a879ac(c);
    c->r[0] = 0x150da78u;
    c->r[1] = 0x112du;
    { uint32_t ea = 0x52b16cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_52b1a4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_52b1cc; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_52b1d8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x52b1a0u; rt_dispatch(c);
    goto L_52b1d8;
L_52b1a4:;
    c->r[0] = 0x112cu;
    c->r[5] = c->r[4];
    c->r[1] = 0x1u;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x52b1c4u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    goto L_52b1d8;
L_52b1cc:;
    c->r[0] = 0x112cu;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
L_52b1d8:;
    c->r[0] = 0x150da00u;
    { uint32_t ea = 0x52b1e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = 0x112cu; }
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); } }
    c->r[0] = 0x1120u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_52b210(Cpu *restrict c) {
    FN_ENTER(0x52b210u);
L_52b210:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0xb0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xfd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52b248; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0xfd0u; ST32(ea, c->r[0]); } }
L_52b248:;
    c->r[5] = c->r[4] + 0xfe0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x52b254u; f_51d7e8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_52b26c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x52b26cu; rt_dispatch(c);
L_52b26c:;
    { uint32_t ea = c->r[4] + 0xfd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52b440; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x3du;
    c->r[2] = c->r[2] & (c->r[1] >> 10);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[1] & 0xffff03ffu;
    if (COND_NE) { c->r[2] = c->r[2] | 0x2u; }
    c->r[0] = c->r[1] | (c->r[2] << 10);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfe0u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_HI) { goto L_52b440; }
    c->r[0] = 0x10d0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_52b440; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x52b2c8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_52b440; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x52b2e0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52b440; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_52b440; }
    c->r[1] = 0x50cu;
    c->r[8] = 0x0u;
    c->r[2] = 0x1030u;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[7] = 0x10e0u;
    c->r[3] = 0x0u;
    c->r[12] = 0x1u;
    c->r[6] = c->r[4] + 0x1100u;
    c->r[1] = c->r[4] + c->r[1];
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[7] = c->r[4] + c->r[7];
    c->r[2] = c->r[4] + c->r[2];
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0xfd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    c->r[5] = 0x1110u;
    c->r[5] = c->r[4] + c->r[5];
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x10f0u;
    c->r[5] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[2] = c->r[4] + c->r[0];
    c->r[0] = 0x1020u;
    c->r[3] = c->r[4] + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x52b384u; f_51d92c(c);
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x30u;
    { uint32_t ea = c->r[4] + 0x50cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[8]); }
    c->r[14] = 0x52b3b4u; f_aa7dc4(c);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52b3fc; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
L_52b3fc:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52b428; }
    { uint32_t ea = c->r[4] + 0xfd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3du;
    { uint32_t ea = c->r[2] + 0x18cu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & (c->r[0] >> 10);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] | 0x2u; }
    goto L_52b434;
L_52b428:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3du;
    c->r[1] = c->r[1] & (c->r[0] >> 10);
L_52b434:;
    c->r[0] = c->r[0] & 0xffff03ffu;
    c->r[0] = c->r[0] | (c->r[1] << 10);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_52b440:;
    c->r[0] = 0x1121u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52b4e8; }
    c->r[0] = 0x1124u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_52b47c; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_NE) { goto L_52b4e8; }
    c->r[0] = 0x1128u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    goto L_52b498;
L_52b47c:;
    c->v.s[0] = 0x0u;
    c->r[2] = 0x1128u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[3]); c->r[0] = ea; }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
L_52b498:;
    c->v.s[2] = LD32(c->r[4] + 28u);
    c->v.s[4] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x1066u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[6] = c->v.f[0] / c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.f[4] = c->v.f[4] - c->v.f[6];
    ST32(c->r[4] + 344u, c->v.s[4]);
    if (COND_HI) { goto L_52b4e8; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x52b4e8u; rt_dispatch(c);
L_52b4e8:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_52b4f4(Cpu *restrict c) {
    FN_ENTER(0x52b4f4u);
L_52b4f4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0xc0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = c->r[8] | 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_52b67c; }
    c->r[0] = 0x1090u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_52b5e8; }
    { uint32_t ea = c->r[4] + 0xfd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x52b538u; rt_dispatch(c);
    c->r[3] = c->r[0];
    c->r[2] = c->r[4] + 0xfe0u;
    c->r[0] = c->r[13] + 0xbcu;
    c->r[1] = c->r[13] + 0xb8u;
    c->r[14] = 0x52b54cu; f_5214f0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_52b5e8; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = 0x437f0000u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    c->v.s[0] = c->r[2];
    c->v.s[4] = c->r[1];
    c->r[1] = (c->r[0] >> 24);
    c->v.s[8] = c->r[1];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->r[0] = (c->r[0] >> 16) & 0xffu;
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.s[6] = c->r[0];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[4] = c->v.f[4] / c->v.f[2];
    c->v.f[6] = c->v.f[6] / c->v.f[2];
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.f[0] = (float)(int32_t)c->v.s[8];
    ST32(c->r[13] + 52u, c->v.s[4]);
    ST32(c->r[13] + 56u, c->v.s[6]);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    ST32(c->r[13] + 60u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_52b5e8; }
    c->r[6] = 0x0u;
    c->r[7] = c->r[13] + 0x30u;
L_52b5c0:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x52b5ccu; f_a90adc(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x52b5dcu; rt_dispatch(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_52b5c0; }
L_52b5e8:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10e0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x10e4u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x10e8u;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x10ecu;
    c->r[1] = 0x10f0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x10f4u;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x10f8u;
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x10fcu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0x52b650u; f_aa7b50(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1100u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1104u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1108u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x110cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
L_52b67c:;
    c->r[0] = c->r[8] | 0x2u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_52b804; }
    c->r[0] = 0x10d0u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_52b6c8; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x52b6acu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_52b6c8; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x52b6c4u; rt_dispatch(c);
    c->r[9] = c->r[0];
L_52b6c8:;
    c->r[0] = 0x1074u;
    c->r[5] = c->r[4] + 0xfe0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52b708; }
    c->r[0] = 0x1110u;
    c->r[7] = c->r[4] + c->r[0];
    c->r[0] = 0x10f0u;
    c->r[8] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[4] + 0xfd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x52b704u; rt_dispatch(c);
    goto L_52b718;
L_52b708:;
    c->r[0] = 0x1110u;
    c->r[7] = c->r[4] + c->r[0];
    c->r[0] = 0x10f0u;
    c->r[8] = c->r[4] + c->r[0];
L_52b718:;
    c->r[0] = 0x50cu;
    c->r[6] = 0x0u;
    c->r[2] = 0x10e0u;
    c->r[3] = 0x1030u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[2] = c->r[4] + c->r[2];
    c->r[3] = c->r[4] + c->r[3];
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0xfd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[4] + 0x1100u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    c->r[0] = 0x1020u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0x30u;
    c->r[3] = c->r[4] + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x52b78cu; f_51d92c(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x30u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x52b7b4u; f_aa7dc4(c);
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52b7e0; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
L_52b7e0:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50cu; ST32(ea, c->r[0]); }
L_52b804:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_52b810(Cpu *restrict c) {
    FN_ENTER(0x52b810u);
L_52b810:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x52b828u; rt_dispatch(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_b3af60(c);
}
void f_52b834(Cpu *restrict c) {
    FN_ENTER(0x52b834u);
L_52b834:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x112cu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_52b8b4; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_52b8ac; }
    c->r[0] = 0x1121u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_52b8ac; }
    c->r[0] = 0x112du;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_52b898; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_52b8ac; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    goto L_52b8a0;
L_52b898:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
L_52b8a0:;
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x52b8acu; rt_dispatch(c);
L_52b8ac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
L_52b8b4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a8f62c(c);
}
void f_52b8c0(Cpu *restrict c) {
    FN_ENTER(0x52b8c0u);
L_52b8c0:;
    c->r[2] = 0x1120u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { return; }
    __attribute__((musttail)) return f_b3b124(c);
}
void f_52b8d4(Cpu *restrict c) {
    FN_ENTER(0x52b8d4u);
L_52b8d4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_52b93c; }
    c->r[1] = 0x407u;
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = 0x402u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_52b92c; }
    c->r[0] = 0x1121u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x52b928u; rt_dispatch(c);
    goto L_52b944;
L_52b92c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x52b93cu; rt_dispatch(c);
L_52b93c:;
    c->r[0] = 0x1121u;
    c->r[5] = c->r[4] + c->r[0];
L_52b944:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_52b950(Cpu *restrict c) {
    FN_ENTER(0x52b950u);
L_52b950:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_52b954(Cpu *restrict c) {
    FN_ENTER(0x52b954u);
L_52b954:;
    c->r[0] = 0x150dbc8u;
    { uint32_t ea = 0x52b960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_52b964(Cpu *restrict c) {
    FN_ENTER(0x52b964u);
L_52b964:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x155e8b8u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x5u;
    c->r[12] = 0x6u;
    c->r[0] = 0x52b988u + c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[14] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x150d34cu;
    c->r[3] = 0x1130u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x150db3cu;
    { uint32_t ea = 0x52b9e4u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1232949u;
    { uint32_t ea = 0x52b9ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x52b9f0u + c->r[1];
    c->r[14] = 0x52b9f0u; f_9aedcc(c);
    c->r[1] = 0x1510d0cu;
    { uint32_t ea = 0x52b9fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_52ba1c(Cpu *restrict c) {
    FN_ENTER(0x52ba1cu);
L_52ba1c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0x1510cdcu;
    { uint32_t ea = 0x52ba30u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x52ba34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xff0u;
    c->pc = c->r[4]; c->r[14] = 0x52ba4cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x52ba54u; f_b396a8(c);
    c->r[0] = 0x1510ca8u;
    c->r[2] = c->r[4];
    c->r[3] = 0x0u;
    { uint32_t ea = 0x52ba68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1510c9cu;
    { uint32_t ea = 0x52ba78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0xfd0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1510c90u;
    { uint32_t ea = 0x52ba88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[2] + 0xfd8u; ST32(ea, c->r[0]); c->r[2] = ea; }
    c->r[0] = 0x150e0e4u;
    { uint32_t ea = 0x52ba98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0xfe4u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0xfe8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xfd4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0xfdcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0xfe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x150da3cu;
    { uint32_t ea = 0x52bac0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[13];
    c->pc = c->r[12]; c->r[14] = 0x52bad0u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xfe8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_52bafc(Cpu *restrict c) {
    FN_ENTER(0x52bafcu);
L_52bafc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1510c00u;
    { uint32_t ea = 0x52bb10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_52bb38; }
    c->r[0] = 0x150d984u;
    { uint32_t ea = 0x52bb2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52bb30u; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xfe0u; ST32(ea, c->r[0]); }
L_52bb38:;
    c->r[0] = 0xfe4u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = 0x150d9b0u;
    { uint32_t ea = 0x52bb4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x52bb58u; rt_dispatch(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_b3992c(c);
}
void f_52bb70(Cpu *restrict c) {
    FN_ENTER(0x52bb70u);
L_52bb70:;
    return;
}
void f_52bb74(Cpu *restrict c) {
    FN_ENTER(0x52bb74u);
L_52bb74:;
    return;
}
void f_52bb78(Cpu *restrict c) {
    FN_ENTER(0x52bb78u);
L_52bb78:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1510b84u;
    { uint32_t ea = 0x52bb8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_52bbb4; }
    c->r[0] = 0x150d908u;
    { uint32_t ea = 0x52bba8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52bbacu; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xfe0u; ST32(ea, c->r[0]); }
L_52bbb4:;
    c->r[0] = 0xfe4u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = 0x150d934u;
    { uint32_t ea = 0x52bbc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x52bbd4u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x52bbdcu; f_b3992c(c);
    c->r[0] = 0x1510b24u;
    { uint32_t ea = 0x52bbe8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52bbe8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bc0c(Cpu *restrict c) {
    FN_ENTER(0x52bc0cu);
L_52bc0c:;
    return;
}
void f_52bc10(Cpu *restrict c) {
    FN_ENTER(0x52bc10u);
L_52bc10:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0] + 0xfe0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[1];
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_52bca4; }
    c->r[0] = c->r[2] + (c->r[3] << 1);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[0] = 0x1a0u;
    c->r[14] = 0x52bc44u; f_5288c4(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x52bc4cu; f_528900(c);
    c->r[0] = 0x150d84cu;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->r[3] = c->r[5];
    { uint32_t ea = 0x52bc64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[8]); }
    c->r[14] = 0x52bc6cu; f_5267d0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_52bca4; }
    c->r[0] = 0x150d82cu;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x52bc84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52bc88u; f_5268cc(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_52bca4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x52bca0u; rt_dispatch(c);
    c->r[4] = 0x0u;
L_52bca4:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_52bcb8(Cpu *restrict c) {
    FN_ENTER(0x52bcb8u);
L_52bcb8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xfe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_52bce8; }
    c->r[0] = 0x150d7d4u;
    { uint32_t ea = 0x52bcdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52bce0u; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xfe0u; ST32(ea, c->r[0]); }
L_52bce8:;
    c->r[0] = 0x150d7b8u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x52bcf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52bcfcu; f_5268d8(c);
    { uint32_t ea = c->r[4] + 0xfe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_52bd0c(Cpu *restrict c) {
    FN_ENTER(0x52bd0cu);
L_52bd0c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_52bd10(Cpu *restrict c) {
    FN_ENTER(0x52bd10u);
L_52bd10:;
    c->r[0] = 0x15109f0u;
    { uint32_t ea = 0x52bd1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_52bd20(Cpu *restrict c) {
    FN_ENTER(0x52bd20u);
L_52bd20:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[1] = c->r[0] - 0x1u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { c->r[0] = 0x1u; }
    return;
}
void f_52bd3c(Cpu *restrict c) {
    FN_ENTER(0x52bd3cu);
L_52bd3c:;
    return;
}
void f_52bd40(Cpu *restrict c) {
    FN_ENTER(0x52bd40u);
L_52bd40:;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    return;
}
void f_52bd64(Cpu *restrict c) {
    FN_ENTER(0x52bd64u);
L_52bd64:;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    return;
}
void f_52bd88(Cpu *restrict c) {
    FN_ENTER(0x52bd88u);
L_52bd88:;
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_52bdcc; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[0] + (c->r[2] << 5);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[12]); }
L_52bdcc:;
    return;
}
void f_52bdd0(Cpu *restrict c) {
    FN_ENTER(0x52bdd0u);
L_52bdd0:;
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_52be78; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[0] + (c->r[2] << 5);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[0]); }
L_52be78:;
    return;
}
void f_52be7c(Cpu *restrict c) {
    FN_ENTER(0x52be7cu);
L_52be7c:;
    c->r[0] = c->r[0] + 0xfd0u;
    return;
}
void f_52be84(Cpu *restrict c) {
    FN_ENTER(0x52be84u);
L_52be84:;
    c->r[1] = 0xfd8u;
    c->r[0] = c->r[0] + c->r[1];
    return;
}
void f_52be90(Cpu *restrict c) {
    FN_ENTER(0x52be90u);
L_52be90:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[1] = c->r[0] - 0x1u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { c->r[0] = 0x1u; }
    return;
}
void f_52beac(Cpu *restrict c) {
    FN_ENTER(0x52beacu);
L_52beac:;
    c->r[1] = 0x4b4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    return;
}
void f_52beb8(Cpu *restrict c) {
    FN_ENTER(0x52beb8u);
L_52beb8:;
    c->r[0] = c->r[0] + 0x500u;
    c->v.s[0] = LD32(c->r[0]);
    return;
}
void f_52bec4(Cpu *restrict c) {
    FN_ENTER(0x52bec4u);
L_52bec4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[4] = c->v.s[0];
    c->v.s[0] = 0x0u;
    c->v.s[2] = 0x3f800000u;
    c->v.s[1] = c->v.s[4];
    { uint32_t ea = c->r[2] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bee8(Cpu *restrict c) {
    FN_ENTER(0x52bee8u);
L_52bee8:;
    c->v.s[2] = c->v.s[0];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = 0x0u;
    c->v.s[1] = c->v.s[2];
    { uint32_t ea = c->r[2] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
    c->v.s[2] = c->v.s[0];
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bf0c(Cpu *restrict c) {
    FN_ENTER(0x52bf0cu);
L_52bf0c:;
    c->r[1] = 0xfe4u;
    c->r[0] = c->r[0] + c->r[1];
    return;
}
void f_52bf18(Cpu *restrict c) {
    FN_ENTER(0x52bf18u);
L_52bf18:;
    c->r[0] = c->r[0] + 0xfd0u;
    return;
}
void f_52bf20(Cpu *restrict c) {
    FN_ENTER(0x52bf20u);
L_52bf20:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bf30(Cpu *restrict c) {
    FN_ENTER(0x52bf30u);
L_52bf30:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bf40(Cpu *restrict c) {
    FN_ENTER(0x52bf40u);
L_52bf40:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bf54(Cpu *restrict c) {
    FN_ENTER(0x52bf54u);
L_52bf54:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bf68(Cpu *restrict c) {
    FN_ENTER(0x52bf68u);
L_52bf68:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[2];
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = c->r[14];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bf8c(Cpu *restrict c) {
    FN_ENTER(0x52bf8cu);
L_52bf8c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[2];
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = c->r[14];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bfb0(Cpu *restrict c) {
    FN_ENTER(0x52bfb0u);
L_52bfb0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_52bfb4(Cpu *restrict c) {
    FN_ENTER(0x52bfb4u);
L_52bfb4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bfc4(Cpu *restrict c) {
    FN_ENTER(0x52bfc4u);
L_52bfc4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bfd8(Cpu *restrict c) {
    FN_ENTER(0x52bfd8u);
L_52bfd8:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bfe8(Cpu *restrict c) {
    FN_ENTER(0x52bfe8u);
L_52bfe8:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52bffc(Cpu *restrict c) {
    FN_ENTER(0x52bffcu);
L_52bffc:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->r[2] = c->r[3];
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c014(Cpu *restrict c) {
    FN_ENTER(0x52c014u);
L_52c014:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->r[2] = c->r[3];
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c02c(Cpu *restrict c) {
    FN_ENTER(0x52c02cu);
L_52c02c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c03c(Cpu *restrict c) {
    FN_ENTER(0x52c03cu);
L_52c03c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c04c(Cpu *restrict c) {
    FN_ENTER(0x52c04cu);
L_52c04c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c05c(Cpu *restrict c) {
    FN_ENTER(0x52c05cu);
L_52c05c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c070(Cpu *restrict c) {
    FN_ENTER(0x52c070u);
L_52c070:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c084(Cpu *restrict c) {
    FN_ENTER(0x52c084u);
L_52c084:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c094(Cpu *restrict c) {
    FN_ENTER(0x52c094u);
L_52c094:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[12] = c->r[2];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[12];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[14];
    c->pc = c->r[4]; c->r[14] = 0x52c0c8u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_52c0d0(Cpu *restrict c) {
    FN_ENTER(0x52c0d0u);
L_52c0d0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c0e0(Cpu *restrict c) {
    FN_ENTER(0x52c0e0u);
L_52c0e0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_52c0e4(Cpu *restrict c) {
    FN_ENTER(0x52c0e4u);
L_52c0e4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c0f4(Cpu *restrict c) {
    FN_ENTER(0x52c0f4u);
L_52c0f4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c104(Cpu *restrict c) {
    FN_ENTER(0x52c104u);
L_52c104:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c114(Cpu *restrict c) {
    FN_ENTER(0x52c114u);
L_52c114:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c128(Cpu *restrict c) {
    FN_ENTER(0x52c128u);
L_52c128:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c13c(Cpu *restrict c) {
    FN_ENTER(0x52c13cu);
L_52c13c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c14c(Cpu *restrict c) {
    FN_ENTER(0x52c14cu);
L_52c14c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->r[2] = c->r[3];
    c->r[3] = c->r[12];
    c->pc = c->r[14]; c->r[14] = 0x52c17cu; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_52c184(Cpu *restrict c) {
    FN_ENTER(0x52c184u);
L_52c184:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c194(Cpu *restrict c) {
    FN_ENTER(0x52c194u);
L_52c194:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x155e0d8u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x5u;
    c->r[12] = 0x6u;
    c->r[0] = 0x52c1b8u + c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[14] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x150cb1cu;
    c->r[3] = 0xff0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x15104f0u;
    { uint32_t ea = 0x52c214u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x123212bu;
    { uint32_t ea = 0x52c21cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x52c220u + c->r[1];
    c->r[14] = 0x52c220u; f_9aedcc(c);
    c->r[1] = 0x15104f0u;
    { uint32_t ea = 0x52c22cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_52c24c(Cpu *restrict c) {
    FN_ENTER(0x52c24cu);
L_52c24c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x15104c4u;
    { uint32_t ea = 0x52c25cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x52c260u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xb0u;
    c->pc = c->r[4]; c->r[14] = 0x52c278u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x52c280u; f_22b8f0(c);
    c->r[0] = 0x1510494u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x52c290u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[4] + 0xcu;
    c->r[1] = 0xa4u;
    c->r[14] = 0x52c2a4u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_52c2b4(Cpu *restrict c) {
    FN_ENTER(0x52c2b4u);
L_52c2b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1510454u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x52c2ccu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x52c2d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c2f0(Cpu *restrict c) {
    FN_ENTER(0x52c2f0u);
L_52c2f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151041cu;
    { uint32_t ea = 0x52c304u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52c304u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_52c31c(Cpu *restrict c) {
    FN_ENTER(0x52c31cu);
L_52c31c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x52c328u; f_22b8f0(c);
    c->r[0] = 0x15103ecu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x52c338u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[4] + 0xcu;
    c->r[1] = 0xa4u;
    c->r[14] = 0x52c34cu; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_52c358(Cpu *restrict c) {
    FN_ENTER(0x52c358u);
L_52c358:;
    __attribute__((musttail)) return f_22b908(c);
}
void f_52c35c(Cpu *restrict c) {
    FN_ENTER(0x52c35cu);
L_52c35c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x52c368u; f_22b908(c);
    c->r[0] = 0x15103acu;
    { uint32_t ea = 0x52c374u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x52c374u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
