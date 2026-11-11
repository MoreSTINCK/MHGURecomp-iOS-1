#include "cpu.h"
#include "neon_rt.h"
void f_200288(Cpu *c);
void f_23c9d4(Cpu *c);
void f_2e715c(Cpu *c);
void f_2e82e0(Cpu *c);
void f_2e8458(Cpu *c);
void f_2e8478(Cpu *c);
void f_2e925c(Cpu *c);
void f_2e92a8(Cpu *c);
void f_2e9e8c(Cpu *c);
void f_38e4ec(Cpu *c);
void f_394228(Cpu *c);
void f_39443c(Cpu *c);
void f_39542c(Cpu *c);
void f_395448(Cpu *c);
void f_395464(Cpu *c);
void f_3954cc(Cpu *c);
void f_3955b8(Cpu *c);
void f_395f48(Cpu *c);
void f_3961a8(Cpu *c);
void f_3961bc(Cpu *c);
void f_3990dc(Cpu *c);
void f_399390(Cpu *c);
void f_39974c(Cpu *c);
void f_399830(Cpu *c);
void f_399934(Cpu *c);
void f_39b7fc(Cpu *c);
void f_39c21c(Cpu *c);
void f_39c58c(Cpu *c);
void f_3ac3c0(Cpu *c);
void f_3c9378(Cpu *c);
void f_45d4d4(Cpu *c);
void f_45e378(Cpu *c);
void f_45eaf0(Cpu *c);
void f_45f098(Cpu *c);
void f_45f0a8(Cpu *c);
void f_45f144(Cpu *c);
void f_45f54c(Cpu *c);
void f_45f5b0(Cpu *c);
void f_45f5e8(Cpu *c);
void f_45f8e4(Cpu *c);
void f_4603fc(Cpu *c);
void f_460440(Cpu *c);
void f_460464(Cpu *c);
void f_4604cc(Cpu *c);
void f_460a7c(Cpu *c);
void f_46fcac(Cpu *c);
void f_5f8534(Cpu *c);
void f_5f856c(Cpu *c);
void f_5f85fc(Cpu *c);
void f_6ad0e8(Cpu *c);
void f_6af894(Cpu *c);
void f_6c9528(Cpu *c);
void f_6c9e30(Cpu *c);
void f_70d9b4(Cpu *c);
void f_70dd30(Cpu *c);
void f_70fdf8(Cpu *c);
void f_723150(Cpu *c);
void f_723194(Cpu *c);
void f_7231c4(Cpu *c);
void f_723da4(Cpu *c);
void f_724bd8(Cpu *c);
void f_724c00(Cpu *c);
void f_724c28(Cpu *c);
void f_724c50(Cpu *c);
void f_724c78(Cpu *c);
void f_724ca0(Cpu *c);
void f_724cc8(Cpu *c);
void f_724cf0(Cpu *c);
void f_724d18(Cpu *c);
void f_724d40(Cpu *c);
void f_724d68(Cpu *c);
void f_725e38(Cpu *c);
void f_725e44(Cpu *c);
void f_74ecc0(Cpu *c);
void f_74edec(Cpu *c);
void f_74ee34(Cpu *c);
void f_74ee98(Cpu *c);
void f_74f260(Cpu *c);
void f_74fa74(Cpu *c);
void f_74fbb0(Cpu *c);
void f_74fd94(Cpu *c);
void f_74fe48(Cpu *c);
void f_74fe8c(Cpu *c);
void f_74ff80(Cpu *c);
void f_7500e4(Cpu *c);
void f_751bf4(Cpu *c);
void f_7530b8(Cpu *c);
void f_753a74(Cpu *c);
void f_757ac4(Cpu *c);
void f_75bc4c(Cpu *c);
void f_75bc7c(Cpu *c);
void f_760d3c(Cpu *c);
void f_761460(Cpu *c);
void f_7614c0(Cpu *c);
void f_761b28(Cpu *c);
void f_797d24(Cpu *c);
void f_797d38(Cpu *c);
void f_7d0d28(Cpu *c);
void f_7d0d44(Cpu *c);
void f_7d0d60(Cpu *c);
void f_7d0d7c(Cpu *c);
void f_7f0ce8(Cpu *c);
void f_7f3d24(Cpu *c);
void f_83ebd8(Cpu *c);
void f_83ebec(Cpu *c);
void f_83ef00(Cpu *c);
void f_83f0b8(Cpu *c);
void f_83fd78(Cpu *c);
void f_83fd8c(Cpu *c);
void f_83fdac(Cpu *c);
void f_83fdc0(Cpu *c);
void f_83fdd4(Cpu *c);
void f_840524(Cpu *c);
void f_840e84(Cpu *c);
void f_845390(Cpu *c);
void f_85cb3c(Cpu *c);
void f_85cba0(Cpu *c);
void f_85cbc4(Cpu *c);
void f_85e5bc(Cpu *c);
void f_85e67c(Cpu *c);
void f_85e794(Cpu *c);
void f_85e938(Cpu *c);
void f_85efc8(Cpu *c);
void f_85efcc(Cpu *c);
void f_85f98c(Cpu *c);
void f_85f9dc(Cpu *c);
void f_99dbf4(Cpu *c);
void f_99f314(Cpu *c);
void f_99f620(Cpu *c);
void f_99f6f4(Cpu *c);
void f_9a0b74(Cpu *c);
void f_9a0e70(Cpu *c);
void f_9a3480(Cpu *c);
void f_9a3ff4(Cpu *c);
void f_9a40cc(Cpu *c);
void f_9a41e8(Cpu *c);
void f_9a461c(Cpu *c);
void f_9a4738(Cpu *c);
void f_9a4834(Cpu *c);
void f_9a488c(Cpu *c);
void f_9a49a8(Cpu *c);
void f_9a4a78(Cpu *c);
void f_9a4b7c(Cpu *c);
void f_9a4f54(Cpu *c);
void f_9a5060(Cpu *c);
void f_9a5328(Cpu *c);
void f_9a53f0(Cpu *c);
void f_9a55b0(Cpu *c);
void f_9a565c(Cpu *c);
void f_9a5b40(Cpu *c);
void f_9a5dd4(Cpu *c);
void f_9a5ed8(Cpu *c);
void f_9a5fb0(Cpu *c);
void f_9a60dc(Cpu *c);
void f_9a6554(Cpu *c);
void f_9a69cc(Cpu *c);
void f_9a77e8(Cpu *c);
void f_9a7d30(Cpu *c);
void f_9a8214(Cpu *c);
void f_9a82d4(Cpu *c);
void f_9a83b0(Cpu *c);
void f_9a84a0(Cpu *c);
void f_9a85ac(Cpu *c);
void f_9a952c(Cpu *c);
void f_9a9a0c(Cpu *c);
void f_9a9abc(Cpu *c);
void f_9a9bd4(Cpu *c);
void f_9a9d50(Cpu *c);
void f_9a9f80(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aa588(Cpu *c);
void f_9aa8dc(Cpu *c);
void f_9aab08(Cpu *c);
void f_9aaf00(Cpu *c);
void f_9ac2e0(Cpu *c);
void f_9ac3ec(Cpu *c);
void f_9ac4ec(Cpu *c);
void f_9ac6b8(Cpu *c);
void f_9ac87c(Cpu *c);
void f_9ad840(Cpu *c);
void f_9adc80(Cpu *c);
void f_9aeaf8(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9aeebc(Cpu *c);
void f_9aef08(Cpu *c);
void f_9aefa8(Cpu *c);
void f_9af09c(Cpu *c);
void f_9af100(Cpu *c);
void f_9af1a8(Cpu *c);
void f_9af2dc(Cpu *c);
void f_9af344(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af55c(Cpu *c);
void f_9bb638(Cpu *c);
void f_9cbdb4(Cpu *c);
void f_d84114(Cpu *c);
void f_15b3580(Cpu *c);
void f_15b35d4(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efd88(Cpu *c);
void f_15efd94(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15efe00(Cpu *c);
void f_15efe0c(Cpu *c);
void f_15eff2c(Cpu *c);
void f_15effa4(Cpu *c);
void f_15effb0(Cpu *c);
void f_15effd4(Cpu *c);
void f_15efff8(Cpu *c);
void f_15f004c(Cpu *c);
void f_15f0124(Cpu *c);
void f_15f0130(Cpu *c);
void f_9a0230(Cpu *restrict c) {
    FN_ENTER(0x9a0230u);
L_9a0230:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_9a0310; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x9a0258u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x9a0270u: goto L_9a0270; case 0x9a02b4u: goto L_9a02b4; case 0x9a0318u: goto L_9a0318; case 0x9a0418u: goto L_9a0418; case 0x9a0488u: goto L_9a0488; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9a0270:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x2u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a0574; }
    c->r[5] = c->r[4] + 0x154u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a050c; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a0298u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a0580; }
    { uint32_t ea = c->r[4] + 0x161u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a02acu; f_99f620(c);
    c->r[5] = 0x0u;
    goto L_9a0574;
L_9a02b4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x9a02bcu; f_9a77e8(c);
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_9a0574; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xcu;
    c->r[0] = c->r[0] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a02e0u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a02ecu; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a02fcu; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x9a0308u; f_85cba0(c);
    c->r[0] = c->r[4] + 0x178u;
    goto L_9a047c;
L_9a0310:;
    c->r[5] = 0x0u;
    goto L_9a0574;
L_9a0318:;
    c->r[0] = c->r[4];
    c->r[14] = 0x9a0320u; f_9a60dc(c);
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_9a0574; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[0] = c->r[0] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a0344u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x9a0350u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a035cu; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a0368u; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x9a0374u; f_85cba0(c);
    c->r[0] = c->r[4] + 0x274u;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a0380u; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x9a0388u; f_99f314(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[14] = 0x9a0394u; f_99dbf4(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb0880u;
    { uint32_t ea = c->r[4] + 0x161u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x9a03b0u + c->r[0];
    c->r[1] = c->r[1] + 0x32u;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0x5u;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a03d0; }
    c->r[0] = 0x1au;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0xfu; }
L_9a03d0:;
    c->r[3] = 0xff3fu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[3] = 0xeb0848u;
    (void)f_subs(c, c->r[2], 0x4u);
    c->r[3] = 0x9a03e8u + c->r[3];
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a0530; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_9a0548; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9a0564; }
    c->r[1] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    goto L_9a055c;
L_9a0418:;
    c->r[0] = c->r[4];
    c->r[14] = 0x9a0420u; f_9a6554(c);
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_9a0574; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[0] = c->r[0] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a0444u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x9a0450u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a045cu; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a046cu; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x9a0478u; f_85cba0(c);
    c->r[0] = c->r[4] + 0x274u;
L_9a047c:;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a0484u; f_74ecc0(c);
    goto L_9a04dc;
L_9a0488:;
    c->r[0] = c->r[4];
    c->r[14] = 0x9a0490u; f_9a69cc(c);
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_9a0574; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    c->r[0] = c->r[0] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x154u;
    c->r[14] = 0x9a04c0u; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x162u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x164u;
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[4] + c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x161u; ST8(ea, c->r[0]); }
L_9a04dc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x9a04e4u; f_99f314(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[14] = 0x9a04f0u; f_99dbf4(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x161u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a0508u; f_99f620(c);
    goto L_9a0568;
L_9a050c:;
    { uint32_t ea = c->r[4] + 0x161u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9a0588; }
    c->r[5] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
    goto L_9a0570;
L_9a0530:;
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    goto L_9a0554;
L_9a0548:;
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_9a0554:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14u;
L_9a055c:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a0564u; f_85e5bc(c);
L_9a0564:;
    c->r[5] = 0x0u;
L_9a0568:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
L_9a0570:;
    c->r[14] = 0x9a0574u; f_74f260(c);
L_9a0574:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9a0580:;
    c->r[5] = 0x0u;
    goto L_9a0574;
L_9a0588:;
    c->r[2] = 0x100u;
    c->r[0] = c->r[0] & 0xff0000ffu;
    { uint32_t ea = c->r[4] + 0x3cu; ST8(ea, c->r[1]); }
    (void)f_subs(c, c->r[1], 0x2u);
    c->r[2] = c->r[2] + (c->r[1] << 8);
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    if (COND_EQ) { goto L_9a06ec; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_9a075c; }
    c->r[1] = 0xcu;
    c->r[14] = 0x9a05ccu; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a05d8u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a05e8; }
    c->r[1] = 0x3u;
    c->r[14] = 0x9a05e8u; f_7d0d28(c);
L_9a05e8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a05f4u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a0610; }
    c->r[1] = 0x1098780u;
    { uint32_t ea = 0x9a0608u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a0610u; f_7d0d60(c);
L_9a0610:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a0620u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x9a062cu; f_85cbc4(c);
    c->r[0] = 0x188u;
    c->r[7] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[0]; ST16(ea, c->r[5]); c->r[7] = ea; }
    { uint32_t ea = c->r[4] + 0x185u; ST8(ea, c->r[5]); }
    c->r[5] = c->r[4] + 0x178u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9a064cu; f_74ecc0(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->r[1] = 0x8u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[8] = 0x1u;
    c->r[14] = 0x9a0670u; f_74edec(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[2] = 0x3u;
    c->r[14] = 0x9a0680u; f_74ee34(c);
    { uint32_t r = c->r[6] * c->r[9] + c->r[10]; c->r[0] = r; }
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[7]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x185u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a06a4u; f_9a5b40(c);
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] + 0x4acu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a07f0; }
    c->r[2] = 0x10986bcu;
    c->r[1] = 0x4b2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a06ccu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x3598u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[2] & ~sh_lsl(c->r[8], c->r[0]);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_9a07f0;
L_9a06ec:;
    c->r[14] = 0x9a06f0u; f_99f314(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x46u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x4cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x4du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4au; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x4eu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a0744u; f_99dbf4(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x9a0758u; f_74edec(c);
    goto L_9a07f0;
L_9a075c:;
    c->r[1] = 0x3u;
    c->r[14] = 0x9a0764u; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x9a0770u; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a077cu; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a078c; }
    c->r[1] = 0x3u;
    c->r[14] = 0x9a078cu; f_7d0d28(c);
L_9a078c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a0798u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a07b4; }
    c->r[1] = 0x10985dcu;
    { uint32_t ea = 0x9a07acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a07b4u; f_7d0d60(c);
L_9a07b4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a07c4u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x9a07d0u; f_85cbc4(c);
    c->r[0] = c->r[4] + 0x274u;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a07dcu; f_74ecc0(c);
    c->r[0] = 0x284u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x281u; ST8(ea, c->r[5]); }
    c->r[14] = 0x9a07f0u; f_9a565c(c);
L_9a07f0:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_9a0818; }
    if (COND_EQ) { goto L_9a0828; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_9a0834; }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a0814u; f_9a5fb0(c);
    goto L_9a0834;
L_9a0818:;
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a0824u; f_9a5dd4(c);
    goto L_9a0834;
L_9a0828:;
    { uint32_t ea = c->r[4] + 0x161u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a0834u; f_9a5ed8(c);
L_9a0834:;
    c->r[5] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    goto L_9a0570;
}
void f_9a0858(Cpu *restrict c) {
    FN_ENTER(0x9a0858u);
L_9a0858:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_9a091c; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9a0afc; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x2u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a0afc; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a0a54; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x178u;
    c->r[14] = 0x9a08a4u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0x0u;
    if (COND_EQ) { goto L_9a0afc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a08bcu; f_99f6f4(c);
    c->r[0] = 0x550u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x548u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_9a0adc; }
    c->r[0] = 0x560u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x558u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_9a0adc; }
    c->r[0] = 0x570u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x568u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_9a0adc; }
    c->r[6] = 0x0u;
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x55u;
    goto L_9a0af0;
L_9a091c:;
    c->r[5] = c->r[4];
    c->r[6] = 0x0u;
    c->r[2] = 0x80u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[5] + 0x39u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x47u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x9a0940u; f_74fd94(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a09b8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a0ab4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a0958u; f_9a82d4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[14] = 0x9a0964u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a0974; }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a0974u; f_840e84(c);
L_9a0974:;
    c->r[0] = 0x188u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x185u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[4] + 0x178u;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a0990u; f_74ecc0(c);
    c->r[0] = 0x4u;
    c->r[14] = 0x9a0998u; f_85e67c(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[6] = 0x1u;
    c->r[14] = 0x9a09a8u; f_85e794(c);
    c->r[14] = 0x9a09acu; f_85e938(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x20u;
    goto L_9a0ab0;
L_9a09b8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x178u;
    c->r[14] = 0x9a09d0u; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[14] = 0x9a09dcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a09ec; }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a09ecu; f_840e84(c);
L_9a09ec:;
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x550u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x548u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_9a0a84; }
    c->r[0] = 0x560u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x558u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_9a0a84; }
    c->r[0] = 0x570u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x568u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_9a0a84; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x55u;
    goto L_9a0a94;
L_9a0a54:;
    { uint32_t ea = c->r[4] + 0x548u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x558u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x568u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_9a0b08; }
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
    c->r[6] = 0x0u;
    c->r[14] = 0x9a0a80u; f_74f260(c);
    goto L_9a0afc;
L_9a0a84:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x56u;
L_9a0a94:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[14] = 0x9a0aa4u; f_85e5bc(c);
    c->r[6] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
L_9a0ab0:;
    c->r[14] = 0x9a0ab4u; f_74f260(c);
L_9a0ab4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { goto L_9a0afc; }
    c->r[1] = 0x0u;
    c->r[2] = 0x1au;
    c->r[3] = 0x57u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = 0x14u;
    c->r[1] = 0x1u;
    goto L_9a0af8;
L_9a0adc:;
    c->r[6] = 0x0u;
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x56u;
L_9a0af0:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
L_9a0af8:;
    c->r[14] = 0x9a0afcu; f_85e5bc(c);
L_9a0afc:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9a0b08:;
    c->r[1] = 0x1u;
    c->r[6] = 0x0u;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0xdu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x39u; ST8(ea, c->r[6]); }
    c->r[14] = 0x9a0b28u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a0b38; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a0b38u; f_840e84(c);
L_9a0b38:;
    c->r[0] = c->r[4] + 0x178u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a0b44u; f_74ecc0(c);
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x57u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = 0x14u;
    c->r[14] = 0x9a0b60u; f_85e5bc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a0b6cu; f_74f260(c);
    goto L_9a0afc;
}
void f_9a0b70(Cpu *restrict c) {
    FN_ENTER(0x9a0b70u);
L_9a0b70:;
    return;
}
void f_9a0b74(Cpu *restrict c) {
    FN_ENTER(0x9a0b74u);
L_9a0b74:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[4] = c->r[1];
    c->r[1] = 0x7u;
    c->r[5] = c->r[0];
    c->r[14] = 0x9a0b8cu; f_85cb3c(c);
    c->r[11] = c->r[0];
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { goto L_9a0e48; }
    c->r[0] = 0x109801cu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    c->r[8] = 0x2u;
    c->r[10] = 0x1u;
    { uint32_t ea = 0x9a0bb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1099c5cu;
    { uint32_t ea = 0x9a0bc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1099c5cu;
    { uint32_t ea = 0x9a0bccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1099c50u;
    { uint32_t ea = 0x9a0bd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1099c38u;
    { uint32_t ea = 0x9a0be4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1099c2cu;
    { uint32_t ea = 0x9a0bf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1099c2cu;
    { uint32_t ea = 0x9a0bfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_9a0bfc:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a0c0cu; f_395448(c);
    c->r[9] = c->r[0];
    c->r[0] = (c->r[4] << 4) - c->r[4];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    c->r[7] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
L_9a0c24:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], (c->r[0] >> 24));
    if (COND_EQ) { goto L_9a0c54; }
    c->r[0] = (c->r[0] >> 24);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a0c84; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[9] + c->r[6];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a0c50u; f_39c58c(c);
    goto L_9a0c68;
L_9a0c54:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[9] + c->r[6];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a0c68u; f_399830(c);
L_9a0c68:;
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_9a0c84; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[7];
    c->r[2] = 0x0u;
    goto L_9a0c90;
L_9a0c84:;
    c->r[0] = c->r[11];
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
L_9a0c90:;
    c->r[14] = 0x9a0c94u; f_83ebec(c);
    c->r[6] = c->r[6] + 0x4u;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[6], 0x28u);
    if (COND_NE) { goto L_9a0c24; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = 0x0u;
    c->r[7] = c->r[0] + 0xau;
L_9a0cb4:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], (c->r[0] >> 24));
    if (COND_EQ) { goto L_9a0ce4; }
    c->r[0] = (c->r[0] >> 24);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a0d10; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[9] + c->r[8];
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a0ce0u; f_399830(c);
    goto L_9a0cf4;
L_9a0ce4:;
    c->r[4] = c->r[9] + c->r[8];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0x9a0cf4u; f_39c58c(c);
L_9a0cf4:;
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_9a0d10; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[7];
    c->r[2] = 0x0u;
    goto L_9a0d1c;
L_9a0d10:;
    c->r[0] = c->r[11];
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
L_9a0d1c:;
    c->r[14] = 0x9a0d20u; f_83ebec(c);
    c->r[8] = c->r[8] + 0x4u;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[8], 0x28u);
    if (COND_NE) { goto L_9a0cb4; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[8] = 0x2u;
    c->r[7] = c->r[0] + 0x14u;
L_9a0d40:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], (c->r[0] >> 24));
    if (COND_EQ) { goto L_9a0d70; }
    c->r[0] = (c->r[0] >> 24);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a0da0; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[9] + c->r[6];
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a0d6cu; f_399830(c);
    goto L_9a0d84;
L_9a0d70:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[9] + c->r[6];
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a0d84u; f_39c58c(c);
L_9a0d84:;
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_9a0da0; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[7];
    c->r[2] = 0x0u;
    goto L_9a0dac;
L_9a0da0:;
    c->r[0] = c->r[11];
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
L_9a0dac:;
    c->r[14] = 0x9a0db0u; f_83ebec(c);
    c->r[6] = c->r[6] + 0x4u;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[6], 0x28u);
    if (COND_NE) { goto L_9a0d40; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_NE) { goto L_9a0bfc; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a0e34; }
    { uint32_t ea = c->r[5] + 0x2adu; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = 0xaaabu;
    { uint32_t ea = c->r[5] + 0x2acu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xaaaa0000u;
    { uint64_t r = (uint64_t)c->r[6] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = 0x1097dd4u;
    { uint32_t ea = 0x9a0dfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[1] >> 1);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a0e08u; f_395448(c);
    c->r[1] = c->r[5] + (c->r[5] << 1);
    c->r[1] = c->r[6] - c->r[1];
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 3);
    c->r[0] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a0e34; }
    c->r[0] = c->r[11];
    c->r[1] = 0x1u;
    goto L_9a0e3c;
L_9a0e34:;
    c->r[0] = c->r[11];
    c->r[1] = 0x0u;
L_9a0e3c:;
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_83ebd8(c);
L_9a0e48:;
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9a0e70(Cpu *restrict c) {
    FN_ENTER(0x9a0e70u);
L_9a0e70:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0x9au; ST16(ea, c->r[0]); }
    c->r[0] = 0xa46u;
    c->r[14] = 0x9a0e9cu; f_74fe8c(c);
    c->r[8] = c->r[0];
    c->r[6] = 0x63u;
    (void)f_subs(c, c->r[8], 0x63u);
    if (COND_CS) { c->r[8] = c->r[6]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_9a0ec8; }
    c->r[0] = 0x1u;
    c->r[5] = 0x2u;
    { uint32_t ea = c->r[4] + 0x9cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x9eu; ST16(ea, c->r[8]); }
    goto L_9a0ecc;
L_9a0ec8:;
    c->r[5] = 0x1u;
L_9a0ecc:;
    c->r[0] = 0xa47u;
    c->r[14] = 0x9a0ed4u; f_74fe8c(c);
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_CC) { c->r[6] = c->r[0]; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[0] = c->r[4] + (c->r[5] << 2); }
    if (COND_NE) { c->r[1] = 0x2u; }
    if (COND_NE) { c->r[5] = c->r[5] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x98u; ST16(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x9au; ST16(ea, c->r[6]); } }
    c->r[0] = 0xa48u;
    c->r[14] = 0x9a0efcu; f_74fe8c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x63u);
    if (COND_CS) { c->r[7] = 0x63u; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9a0f30; }
    c->r[0] = c->r[4] + (c->r[5] << 2);
    c->r[1] = 0x3u;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x3u);
    { uint32_t ea = c->r[0] + 0x98u; ST16(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x9au; ST16(ea, c->r[7]); }
    if (COND_HI) { goto L_9a0fa0; }
L_9a0f30:;
    c->r[0] = 0x0u - c->r[5];
    c->r[12] = 0x3u - c->r[5];
    c->r[1] = c->r[5];
    { uint32_t r = c->r[0] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_9a0f68; }
    c->r[1] = c->r[4] + (c->r[5] << 2);
    c->r[3] = 0x0u - c->r[0];
    c->r[0] = 0x4u;
    c->r[2] = c->r[1] + 0x98u;
    c->r[1] = c->r[5];
L_9a0f58:;
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); c->r[2] = c->r[2] + 0x4u; }
    c->r[3] = f_adds(c, c->r[3], 0x1u);
    c->r[1] = c->r[1] + 0x1u;
    if (COND_NE) { goto L_9a0f58; }
L_9a0f68:;
    (void)f_subs(c, c->r[12], 0x3u);
    if (COND_CC) { goto L_9a0f9c; }
    c->r[0] = c->r[4] + (c->r[1] << 2);
    c->r[1] = 0x4u - c->r[1];
    c->r[2] = 0x4u;
    c->r[0] = c->r[0] + 0xa4u;
L_9a0f80:;
    { uint32_t ea = c->r[0] - 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x10u;
    c->r[1] = f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { goto L_9a0f80; }
L_9a0f9c:;
    c->r[1] = c->r[5];
L_9a0fa0:;
    c->r[0] = c->r[4] + 0x1c0u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[2] = 0x3u;
    c->r[14] = 0x9a0fb0u; f_74ee34(c);
    c->r[1] = 0x1d0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); c->r[0] = ea; }
    c->r[1] = 0xfec8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] - 0x3u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0xfcu; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); } }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1cdu; ST8(ea, c->r[2]); } }
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_9a1008; }
    { uint32_t ea = c->r[4] + 0x1ceu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { c->r[2] = 0x0u; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[2] = 0x0u;
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x1cdu; ST8(ea, c->r[2]); }
L_9a1008:;
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_9a1030; }
    { uint32_t ea = c->r[4] + 0x1ceu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = 0x2u;
    c->r[3] = udiv32(c->r[3], c->r[2]);
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    { uint32_t ea = c->r[0]; ST16(ea, c->r[3]); }
    c->r[2] = 0x2u - c->r[2];
    { uint32_t ea = c->r[4] + 0x1cdu; ST8(ea, c->r[2]); }
L_9a1030:;
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_9a1058; }
    { uint32_t ea = c->r[4] + 0x1ceu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x3u;
    c->r[2] = udiv32(c->r[2], c->r[1]);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[0] = 0x3u - c->r[0];
    { uint32_t ea = c->r[4] + 0x1cdu; ST8(ea, c->r[0]); }
L_9a1058:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[8];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_9a83b0(c);
}
void f_9a1070(Cpu *restrict c) {
    FN_ENTER(0x9a1070u);
L_9a1070:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[10] = c->r[0];
    c->r[0] = 0x1097b2cu;
    { uint32_t ea = 0x9a1088u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a108cu; f_5f85fc(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a10a4; }
L_9a1098:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9a10a4:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x0u;
    c->r[0] = (c->r[3] >> 16) & 0xffu;
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_HI) { goto L_9a1098; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x9a10c4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x9a110cu: goto L_9a110c; case 0x9a113cu: goto L_9a113c; case 0x9a1260u: goto L_9a1260; case 0x9a1360u: goto L_9a1360; case 0x9a13e8u: goto L_9a13e8; case 0x9a1450u: goto L_9a1450; case 0x9a15a0u: goto L_9a15a0; case 0x9a1620u: goto L_9a1620; case 0x9a16f0u: goto L_9a16f0; case 0x9a17b8u: goto L_9a17b8; case 0x9a1838u: goto L_9a1838; case 0x9a1884u: goto L_9a1884; case 0x9a18e8u: goto L_9a18e8; case 0x9a1920u: goto L_9a1920; case 0x9a199cu: goto L_9a199c; case 0x9a19e8u: goto L_9a19e8; case 0x9a1a34u: goto L_9a1a34; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9a110c:;
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x2u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a1098; }
    c->r[5] = c->r[10] + 0x2bcu;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a2160; }
    { uint32_t ea = c->r[10] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a1134u; f_74ee98(c);
    c->r[5] = 0x0u;
    goto L_9a1098;
L_9a113c:;
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1144u; f_9a3480(c);
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_9a1098; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[10] + 0x2bcu;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[10] + 0x41u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a1178u; f_74edec(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a1184u; f_74ecc0(c);
    { uint32_t ea = c->r[10] + 0x2c4u; ST32(ea, c->r[4]); }
    c->r[3] = 0x2ccu;
    { uint32_t ea = c->r[10] + 0x2cau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    { uint32_t ea = c->r[10] + c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x2c9u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1097a20u;
    { uint32_t ea = 0x9a11b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a11b4u; f_3955b8(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a11c0u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a11d0; }
    c->r[1] = 0x2u;
    c->r[14] = 0x9a11d0u; f_7d0d28(c);
L_9a11d0:;
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a11dcu; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a11f8; }
    c->r[1] = 0x1097b98u;
    { uint32_t ea = 0x9a11f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a11f8u; f_7d0d60(c);
L_9a11f8:;
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1200u; f_9a0e70(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x7u;
    c->r[14] = 0x9a120cu; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x8u;
    c->r[14] = 0x9a1218u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x6u;
    c->r[14] = 0x9a1224u; f_85cba0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a1234u; f_9a0b74(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x8u;
    c->r[14] = 0x9a1240u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a1250; }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a1250u; f_83ef00(c);
L_9a1250:;
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    goto L_9a1b34;
L_9a1260:;
    c->r[5] = c->r[10];
    c->r[4] = 0x0u;
    c->r[2] = 0x80u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[5] + 0x39u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x47u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x9a1284u; f_74fd94(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a1fb0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a1ffc; }
    c->r[0] = 0xfu;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[10] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1097920u;
    { uint32_t ea = c->r[10] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a12b0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a12b4u; f_3954cc(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a12bcu; f_3955b8(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a12c8u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a12e4; }
    c->r[1] = 0x1097aacu;
    { uint32_t ea = 0x9a12dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a12e4u; f_7d0d60(c);
L_9a12e4:;
    c->r[0] = c->r[10] + 0x2bcu;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x9a12f4u; f_74ecc0(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x25u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[14] = 0x9a131cu; f_85e5bc(c);
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a1354; }
    c->r[0] = 0x1097870u;
    c->v.s[0] = 0x41a00000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x9a1344u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a1348u; f_5f856c(c);
    c->r[0] = 0x1u;
    c->r[1] = 0xc2u;
    c->r[14] = 0x9a1354u; f_74f260(c);
L_9a1354:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    goto L_9a1ff8;
L_9a1360:;
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a1b64; }
    c->r[6] = c->r[10] + 0x178u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a2228; }
    { uint32_t ea = c->r[10] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a1384u; f_74ee98(c);
    { uint32_t ea = c->r[10] + 0x185u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a2990; }
    c->r[6] = c->r[10] + 0x19cu;
    c->r[1] = 0x2u;
    c->r[0] = c->r[6];
    c->r[14] = 0x9a13a0u; f_74ecc0(c);
    c->r[7] = c->r[10] + 0x1c0u;
    c->r[1] = 0x2u;
    c->r[0] = c->r[7];
    c->r[14] = 0x9a13b0u; f_74ecc0(c);
    (void)f_subs(c, c->r[4], 0x4u);
    if (COND_HI) { goto L_9a1098; }
    c->r[0] = (c->r[4] << 2);
    c->r[1] = 0x9a13c4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x9a13dcu: goto L_9a13dc; case 0x9a3114u: goto L_9a3114; case 0x9a312cu: goto L_9a312c; case 0x9a3138u: goto L_9a3138; case 0x9a319cu: goto L_9a319c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9a13dc:;
    c->r[0] = c->r[10];
    c->r[14] = 0x9a13e4u; f_9a40cc(c);
    goto L_9a1098;
L_9a13e8:;
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a1c5c; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a2334; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a2734; }
    c->r[0] = 0x1f4u;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[4] = ea; c->r[8] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1420u; f_9a4b7c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[6] * c->r[8] + c->r[7]; c->r[0] = r; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[3] * c->r[1] + c->r[2]; c->r[1] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_9a1098; }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a144cu; f_9a461c(c);
    goto L_9a1098;
L_9a1450:;
    c->r[5] = c->r[10];
    c->r[0] = 0x0u;
    c->r[2] = 0x80u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[5] + 0x39u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x47u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a1474u; f_74fbb0(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a2020; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a26fc; }
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x1097714u;
    { uint32_t ea = 0x9a14a8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a14acu; f_460440(c);
    { uint32_t ea = c->r[10] + 0x3fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a14b8u; f_45f098(c);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x3fu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & 0xff00ffffu;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { goto L_9a26b8; }
    c->r[0] = c->r[1] | 0x30000u;
    c->r[6] = c->r[10] + 0x1e4u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10976d8u;
    { uint32_t ea = 0x9a14e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a14e8u; f_45f0a8(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a14f0u; f_9a49a8(c);
    c->r[0] = 0x10976ccu;
    c->r[1] = c->r[10] + 0xccu;
    c->r[2] = c->r[13] + 0xcu;
    { uint32_t ea = 0x9a1504u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a1508u; f_395f48(c);
    { uint32_t ea = c->r[10] + 0xcdu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a1518u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a1528; }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a1528u; f_83fdc0(c);
L_9a1528:;
    c->r[0] = c->r[10] + 0x178u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x9a1538u; f_74ecc0(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a1544u; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a1550u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[14] = 0x9a155cu; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x11u;
    c->r[14] = 0x9a1568u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a1574u; f_85cba0(c);
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x2fu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[14] = 0x9a1590u; f_85e5bc(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x6u;
    c->r[14] = 0x9a159cu; f_85cba0(c);
    goto L_9a26fc;
L_9a15a0:;
    c->r[0] = 0x7u;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = 0x1097600u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x3fu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a15bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a15c0u; f_45f144(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a15c8u; f_9a49a8(c);
    c->r[0] = 0x10975f4u;
    c->r[1] = c->r[10] + 0xccu;
    c->r[2] = c->r[13] + 0xcu;
    { uint32_t ea = 0x9a15dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a15e0u; f_395f48(c);
    { uint32_t ea = c->r[10] + 0xcdu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a15f0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a1600; }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a1600u; f_83fdc0(c);
L_9a1600:;
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a1098; }
    c->r[0] = 0x10979a8u;
    { uint32_t ea = 0x9a1618u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a161cu; f_70d9b4(c);
    goto L_9a1098;
L_9a1620:;
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a166c; }
    c->r[0] = 0x1097988u;
    { uint32_t ea = 0x9a1638u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a163cu; f_70dd30(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_9a1098; }
    c->r[0] = 0x1097550u;
    c->v.s[0] = 0x41a00000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x9a1664u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a1668u; f_5f8534(c);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
L_9a166c:;
    c->r[0] = 0x3u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = c->r[10] + 0x178u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    c->r[14] = 0x9a1688u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x1e4u;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a1694u; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a16a0u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[14] = 0x9a16acu; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x11u;
    c->r[14] = 0x9a16b8u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a16c4u; f_85cba0(c);
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x2fu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a16e0u; f_85e5bc(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x6u;
    c->r[14] = 0x9a16ecu; f_85cba0(c);
    goto L_9a1098;
L_9a16f0:;
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a1d30; }
    c->r[6] = c->r[10] + 0x250u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a23dc; }
    { uint32_t ea = c->r[10] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a1714u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a1098; }
    c->r[0] = 0x109748cu;
    c->r[1] = 0x384du;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x9a1730u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x25du; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[0] = 0xeaf4e0u;
    if (COND_EQ) { c->r[1] = c->r[1] + 0x4u; }
    c->r[1] = c->r[1] + 0x2au;
    c->r[0] = 0x9a1750u + c->r[0];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0x5u;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a176c; }
    c->r[0] = 0x1au;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0xfu; }
L_9a176c:;
    c->r[3] = 0xff3fu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[3] = 0xeaf4acu;
    (void)f_subs(c, c->r[2], 0x4u);
    c->r[3] = 0x9a1784u + c->r[3];
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a2ff4; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_9a300c; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_9a1098; }
    c->r[5] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    goto L_9a214c;
L_9a17b8:;
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a1dc4; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a184c; }
    c->r[0] = 0xau;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[10] + 0x8cu; ST32(ea, c->r[1]); }
    c->r[14] = 0x9a17fcu; f_9a41e8(c);
    c->r[0] = 0x0u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5u;
    c->r[3] = 0x70u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a1828u; f_85e5bc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xfu;
    c->r[14] = 0x9a1834u; f_74f260(c);
    goto L_9a1098;
L_9a1838:;
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a1e38; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a246c; }
L_9a184c:;
    { uint32_t ea = c->r[10] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0x1e4u;
    c->r[14] = 0x9a1858u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a1098; }
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1880u; f_9a41e8(c);
    goto L_9a1098;
L_9a1884:;
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a1e84; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a25ac; }
    { uint32_t ea = c->r[10] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0x178u;
    c->r[14] = 0x9a18a4u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = 0x0u;
    if (COND_EQ) { goto L_9a1098; }
    { uint32_t ea = c->r[10] + 0x185u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x4u;
    if (COND_EQ) { c->r[3] = 0x8bu; }
    if (COND_NE) { c->r[3] = 0x34u; }
    c->r[14] = 0x9a18e4u; f_85e5bc(c);
    goto L_9a1098;
L_9a18e8:;
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a1f44; }
    c->r[7] = c->r[10] + 0x274u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a2644; }
    { uint32_t ea = c->r[10] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x9a190cu; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a1098; }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a191cu; f_9a5060(c);
    goto L_9a1098;
L_9a1920:;
    c->r[5] = c->r[10];
    c->r[6] = 0x0u;
    c->r[2] = 0x80u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[5] + 0x39u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x47u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x9a1944u; f_74fd94(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a2090; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a2120; }
    c->r[0] = 0xeu;
    { uint32_t ea = c->r[10] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1964u; f_9a5328(c);
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a1990; }
    c->r[0] = 0x1097228u;
    c->v.s[0] = 0x41a00000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x9a198cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a1990u; f_5f856c(c);
L_9a1990:;
    c->r[0] = 0x1u;
    c->r[1] = 0x7bu;
    goto L_9a211c;
L_9a199c:;
    c->r[0] = 0x109720cu;
    { uint32_t ea = 0x9a19a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a19acu; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a1098; }
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a1a24; }
    c->r[0] = 0x10975ecu;
    { uint32_t ea = c->r[10] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = 0x9a19d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a19d8u; f_70fdf8(c);
    c->r[0] = 0x1u;
    c->r[1] = 0xc1u;
    c->r[14] = 0x9a19e4u; f_74f260(c);
    goto L_9a1a24;
L_9a19e8:;
    c->r[0] = 0x10971c0u;
    { uint32_t ea = 0x9a19f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a19f8u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a1098; }
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a1a24; }
    c->r[0] = 0x10975a0u;
    { uint32_t ea = c->r[10] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = 0x9a1a20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a1a24u; f_70fdf8(c);
L_9a1a24:;
    c->r[0] = 0x10u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[10] + 0x6u; ST8(ea, c->r[0]); }
    goto L_9a1098;
L_9a1a34:;
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a1a64; }
    c->r[0] = 0x1097158u;
    c->v.s[0] = 0x41a00000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x9a1a5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a1a60u; f_5f8534(c);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
L_9a1a64:;
    c->r[3] = c->r[3] & 0xff00ffffu;
    c->r[6] = c->r[10] + 0x2bcu;
    c->r[2] = 0x1u;
    c->r[5] = 0x0u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[10] + 0x41u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a1a88u; f_74edec(c);
    { uint32_t ea = c->r[10] + 0x2cau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x2ccu;
    c->r[2] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    { uint32_t ea = c->r[10] + c->r[3]; ST16(ea, c->r[2]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x2c9u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a1ab0u; f_74ecc0(c);
    c->r[0] = 0x1097114u;
    { uint32_t ea = 0x9a1abcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a1ac0u; f_3955b8(c);
    { uint32_t ea = c->r[10] + 0xceu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0xcfu; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_EQ) { goto L_9a1af4; }
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xd0u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    c->r[0] = 0x109729cu;
    { uint32_t ea = 0x9a1aecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a1af0u; f_7231c4(c);
    c->r[5] = c->r[0];
L_9a1af4:;
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a1b00u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a1b10; }
    c->r[1] = c->r[5];
    c->r[14] = 0x9a1b10u; f_83fdac(c);
L_9a1b10:;
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1b18u; f_9a0e70(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a1b24u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x6u;
    c->r[14] = 0x9a1b30u; f_85cba0(c);
    c->r[5] = 0x0u;
L_9a1b34:;
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x25u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a1b50u; f_85e5bc(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a1b5cu; f_85e794(c);
    c->r[14] = 0x9a1b60u; f_85e938(c);
    goto L_9a1098;
L_9a1b64:;
    c->r[3] = c->r[3] & 0xff00ffffu;
    c->r[5] = c->r[10] + 0x2bcu;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    c->r[14] = 0x9a1b80u; f_74ecc0(c);
    { uint32_t ea = c->r[10] + 0x41u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x9a1b94u; f_74edec(c);
    { uint32_t ea = c->r[10] + 0x2cau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x2ccu;
    c->r[2] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    { uint32_t ea = c->r[10] + c->r[3]; ST16(ea, c->r[2]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[10] + 0x2c9u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x19cu;
    { uint32_t ea = c->r[10] + 0x2c4u; ST32(ea, c->r[4]); }
    c->r[14] = 0x9a1bc0u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x1c0u;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a1bccu; f_74ecc0(c);
    c->r[0] = 0x1096ff4u;
    { uint32_t ea = c->r[10] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a1bdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a1be0u; f_395448(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a1bf4; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_9a1c04; }
L_9a1bf4:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); } }
L_9a1c04:;
    c->r[0] = 0x1096fc0u;
    { uint32_t ea = 0x9a1c10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a1c14u; f_3955b8(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a1c20u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x6u;
    c->r[14] = 0x9a1c2cu; f_85cba0(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    c->r[5] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x9a1c48u; f_74f260(c);
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x25u;
    goto L_9a1f34;
L_9a1c5c:;
    { uint32_t ea = c->r[10] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a26ac; }
    c->r[0] = 0x1u;
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1c7cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x72u; ST8(ea, c->r[1]); } }
    c->r[0] = c->r[10];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a1c94u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a1ca4; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a1ca4u; f_7f0ce8(c);
L_9a1ca4:;
    c->r[0] = c->r[10] + 0x1e4u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a1cb4u; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x11u;
    c->r[14] = 0x9a1cc0u; f_85cba0(c);
    c->r[0] = 0x1096efcu;
    c->r[1] = c->r[10] + 0xccu;
    c->r[2] = c->r[13] + 0xcu;
    { uint32_t ea = 0x9a1cd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a1cd8u; f_395f48(c);
    { uint32_t ea = c->r[10] + 0xcdu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[10] + 0xceu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[14] = 0x9a1cecu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a1d04; }
    (void)f_subs(c, c->r[4], 0x54u);
    if (COND_NE) { c->r[5] = 0x1u; }
    c->r[1] = c->r[5];
    c->r[14] = 0x9a1d04u; f_83fdc0(c);
L_9a1d04:;
    c->r[0] = 0x218u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_9a2840; }
    c->r[0] = 0x49u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a1d28u; f_85e794(c);
    c->r[14] = 0x9a1d2cu; f_85e938(c);
    goto L_9a2848;
L_9a1d30:;
    c->r[0] = 0x4u;
    c->r[5] = 0x0u;
    c->r[1] = 0x0u;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = c->r[10] + 0x1e4u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x3au; ST8(ea, c->r[5]); }
    c->r[14] = 0x9a1d50u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x208u;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a1d5cu; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x22cu;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a1d68u; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x12u;
    c->r[14] = 0x9a1d74u; f_85cbc4(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1d88u; f_9a461c(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a1d94u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[14] = 0x9a1da0u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a1dacu; f_85cba0(c);
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1db8u; f_9a4738(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1dc0u; f_9a4834(c);
    goto L_9a284c;
L_9a1dc4:;
    c->r[0] = 0x8u;
    c->r[1] = 0x1u;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x1e4u;
    c->r[14] = 0x9a1de4u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x250u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a1df4u; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[14] = 0x9a1e04u; f_9a4a78(c);
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1e24u; f_9a41e8(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5u;
    c->r[3] = 0x6eu;
    goto L_9a1f94;
L_9a1e38:;
    c->r[0] = 0x9u;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1e6cu; f_9a41e8(c);
    c->r[0] = 0x0u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5u;
    c->r[3] = 0x6fu;
    goto L_9a1f94;
L_9a1e84:;
    c->r[0] = 0x3u;
    c->r[5] = 0x0u;
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = c->r[10] + 0x178u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[10] + 0x180u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a1eacu; f_74edec(c);
    { uint32_t ea = c->r[10] + 0x186u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0x188u;
    c->r[1] = udiv32(c->r[1], c->r[0]);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    { uint32_t ea = c->r[10] + c->r[2]; ST16(ea, c->r[1]); }
    c->r[1] = 0xbu;
    c->r[0] = 0x2u - c->r[0];
    { uint32_t ea = c->r[10] + 0x185u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a1ed8u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xau;
    c->r[14] = 0x9a1ee4u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a1ef0u; f_85cba0(c);
    c->r[0] = 0x1096cccu;
    c->r[1] = c->r[10] + 0xccu;
    c->r[2] = c->r[13] + 0xcu;
    { uint32_t ea = 0x9a1f04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a1f08u; f_395f48(c);
    { uint32_t ea = c->r[10] + 0xcdu; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x9a1f24u; f_74f260(c);
L_9a1f24:;
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x33u;
L_9a1f34:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a1f40u; f_85e5bc(c);
    goto L_9a1098;
L_9a1f44:;
    c->r[0] = 0xbu;
    c->r[1] = 0x2u;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = c->r[10] + 0x274u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    c->r[14] = 0x9a1f5cu; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x3u;
    c->r[14] = 0x9a1f68u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x4u;
    c->r[14] = 0x9a1f74u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xbu;
    c->r[14] = 0x9a1f80u; f_85cba0(c);
    c->r[0] = 0x0u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x34u;
L_9a1f94:;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a1facu; f_85e5bc(c);
    goto L_9a284c;
L_9a1fb0:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x2bcu;
    c->r[14] = 0x9a1fc8u; f_74ecc0(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x25u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[14] = 0x9a1ff0u; f_85e5bc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
L_9a1ff8:;
    c->r[14] = 0x9a1ffcu; f_74f260(c);
L_9a1ffc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_9a1098; }
    { uint32_t ea = c->r[10] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[3] = 0x29u;
    goto L_9a213c;
L_9a2020:;
    c->r[0] = 0x4u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x1e4u;
    c->r[14] = 0x9a2034u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x208u;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a2040u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x22cu;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a204cu; f_74ecc0(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a2064u; f_9a4738(c);
    c->r[0] = 0x218u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_9a26f4; }
    c->r[0] = 0x49u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a2088u; f_85e794(c);
    c->r[14] = 0x9a208cu; f_85e938(c);
    goto L_9a26fc;
L_9a2090:;
    c->r[0] = 0x3u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x178u;
    c->r[14] = 0x9a20a4u; f_74ecc0(c);
    { uint32_t ea = c->r[10] + 0xceu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0xcfu; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_EQ) { goto L_9a20d8; }
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xd0u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    c->r[0] = 0x1096cb8u;
    { uint32_t ea = 0x9a20d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a20d4u; f_7231c4(c);
    c->r[6] = c->r[0];
L_9a20d8:;
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a20e4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a20f4; }
    c->r[1] = c->r[6];
    c->r[14] = 0x9a20f4u; f_83fdac(c);
L_9a20f4:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x2au;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[14] = 0x9a2114u; f_85e5bc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
L_9a211c:;
    c->r[14] = 0x9a2120u; f_74f260(c);
L_9a2120:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { goto L_9a1098; }
    { uint32_t ea = c->r[10] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[3] = 0x58u;
L_9a213c:;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x14u;
    c->r[2] = 0x1au;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
L_9a214c:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a2154u; f_85e5bc(c);
    goto L_9a1098;
L_9a2160:;
    c->r[0] = 0x1096a60u;
    { uint32_t ea = c->r[10] + 0x2c9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a2170u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x3du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2178u; f_39542c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a2860; }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[10] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a2194u; f_9a3ff4(c);
    c->r[6] = c->r[10] + 0x178u;
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x9a21b0u; f_74edec(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a21bcu; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x19cu;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[10] + 0x180u; ST32(ea, c->r[4]); }
    c->r[14] = 0x9a21ccu; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x1c0u;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a21d8u; f_74ecc0(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a21e4u; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a21f0u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a2200; }
    { uint32_t ea = c->r[10] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a2200u; f_83fd78(c);
L_9a2200:;
    c->r[0] = 0x10969bcu;
    c->r[1] = c->r[10] + 0xccu;
    c->r[2] = c->r[13] + 0xcu;
    { uint32_t ea = 0x9a2214u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2218u; f_395f48(c);
    { uint32_t ea = c->r[10] + 0xcdu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a2224u; f_9a40cc(c);
    goto L_9a296c;
L_9a2228:;
    { uint32_t ea = c->r[10] + 0x185u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_9a2bbc; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x9a2240u + 0x8u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x9a1098u: goto L_9a1098; case 0x9a2268u: goto L_9a2268; case 0x9a2da0u: goto L_9a2da0; case 0x9a2e00u: goto L_9a2e00; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9a2268:;
    { uint32_t ea = c->r[10] + 0xceu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0xcfu; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_EQ) { goto L_9a2bbc; }
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xd0u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    c->r[0] = 0x1096af4u;
    { uint32_t ea = 0x9a2294u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2298u; f_7231c4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a2bbc; }
    c->r[0] = 0xdu;
    c->r[5] = 0x0u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[10] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x39u; ST8(ea, c->r[5]); }
    c->r[0] = 0x1acu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1a9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1aau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = 0x1d0u;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0xd0u; ST16(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1cdu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x1ceu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[1] + c->r[2]; c->r[1] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = c->r[10] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x98u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xd4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[10] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a2310u; f_74ecc0(c);
    { uint32_t ea = c->r[10] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1au;
    c->r[3] = 0x58u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14u;
    c->r[1] = 0x1u;
    goto L_9a2d8c;
L_9a2334:;
    { uint32_t ea = c->r[10] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a2bbc; }
    c->r[0] = 0x1f4u;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x1b5u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x1096850u;
    { uint32_t ea = 0x9a236cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2370u; f_460440(c);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_9a2afc; }
    c->r[0] = 0x1096830u;
    { uint32_t ea = c->r[10] + 0x3fu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x80000u;
    { uint32_t ea = 0x9a238cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2390u; f_45f54c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a2bbc; }
    c->r[0] = 0x54u;
    { uint32_t ea = c->r[10] + 0x3fu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a23a8u; f_9a49a8(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a23b0u; f_9a461c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a23ccu; f_9a41e8(c);
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a23d8u; f_9a4738(c);
    goto L_9a2848;
L_9a23dc:;
    c->r[0] = 0x10967c8u;
    c->r[4] = 0x384du;
    { uint32_t ea = c->r[10] + 0x25du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x9a23f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { goto L_9a2a90; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_9a2bbc; }
    c->r[14] = 0x9a240cu; f_45eaf0(c);
    c->r[0] = 0x10967a4u;
    { uint32_t ea = 0x9a2418u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x414u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a2440u; f_9a41e8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a3080; }
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    goto L_9a308c;
L_9a246c:;
    c->r[0] = 0x1f4u;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[4] - 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_9a2bbc; }
    c->r[0] = 0x9u;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = 0x1096710u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = 0x9a24acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a24b0u; f_4604cc(c);
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + 0xceu; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_EQ) { goto L_9a24e8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x8cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[7] * c->r[0] + c->r[3]; c->r[0] = r; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = 0x10966d8u;
    { uint32_t ea = 0x9a24e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a24e8u; f_460a7c(c);
L_9a24e8:;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + 0x3fu; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_EQ) { goto L_9a2520; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x8cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[7] * c->r[0] + c->r[3]; c->r[0] = r; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = 0x10966a0u;
    { uint32_t ea = 0x9a251cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2520u; f_460a7c(c);
L_9a2520:;
    c->r[0] = 0xffu;
    c->r[1] = 0x384du;
    { uint32_t ea = c->r[10] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1096680u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x9a253cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a2544u; f_45eaf0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a2560u; f_9a41e8(c);
    c->r[0] = 0x0u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5u;
    c->r[3] = 0x6fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a258cu; f_85e5bc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x10u;
    c->r[14] = 0x9a2598u; f_74f260(c);
    goto L_9a1098;
L_9a25ac:;
    c->r[0] = 0x188u;
    { uint32_t ea = c->r[10] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x186u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = c->r[10] + (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a2bbc; }
    c->r[1] = 0xcu;
    c->r[5] = 0x0u;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[1] << 16) & 0xff0000u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x274u;
    c->r[14] = 0x9a25f0u; f_74ecc0(c);
    c->r[0] = 0x284u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[10] + 0x281u; ST8(ea, c->r[5]); }
    c->r[14] = 0x9a2604u; f_9a4f54(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a260cu; f_9a5060(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xbu;
    c->r[14] = 0x9a2618u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x3u;
    c->r[14] = 0x9a2624u; f_85cba0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x4u;
    c->r[14] = 0x9a2630u; f_85cba0(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    goto L_9a2d90;
L_9a2644:;
    { uint32_t ea = c->r[10] + 0x281u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[1] = c->r[10] + (c->r[1] << 3);
    { uint32_t ea = c->r[1] + 0x33au; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a2bbc; }
    c->r[1] = 0x284u;
    { uint32_t ea = c->r[10] + 0x282u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = c->r[10] + (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1096550u;
    { uint32_t ea = 0x9a2680u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2684u; f_3961a8(c);
    { uint32_t ea = c->r[10] + 0x3eu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[8] = c->r[10] + 0xccu;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0xcfu; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_9a2c38; }
    c->r[0] = c->r[0] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xd6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    goto L_9a2c40;
L_9a26ac:;
    c->r[0] = c->r[10];
    c->r[14] = 0x9a26b4u; f_9a488c(c);
    goto L_9a2848;
L_9a26b8:;
    c->r[0] = c->r[1] | 0x60000u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a26fc; }
    c->r[0] = 0x10964ccu;
    c->v.s[0] = 0x41a00000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x9a26e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a26ecu; f_5f856c(c);
    goto L_9a26fc;
L_9a26f4:;
    c->r[0] = c->r[10];
    c->r[14] = 0x9a26fcu; f_9a4834(c);
L_9a26fc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { goto L_9a1098; }
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5u;
    c->r[3] = 0x68u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x14u;
    c->r[14] = 0x9a2728u; f_85e5bc(c);
    goto L_9a1098;
L_9a2734:;
    { uint32_t ea = c->r[10] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a1098; }
    c->r[0] = 0x8u;
    c->r[4] = 0x384du;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = 0x1u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = 0x1096448u;
    c->r[3] = 0x260u;
    { uint32_t ea = c->r[10] + 0x25eu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a2774u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[10] + c->r[3]; ST16(ea, c->r[2]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[10] + 0x25du; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x1e4u;
    c->r[14] = 0x9a2794u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x208u;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a27a0u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x22cu;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a27acu; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a27b8u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[14] = 0x9a27c4u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x12u;
    c->r[14] = 0x9a27d0u; f_85cba0(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x9u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a27e8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a27f8; }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a27f8u; f_83fdc0(c);
L_9a27f8:;
    c->r[0] = 0x10963b8u;
    { uint32_t ea = 0x9a2804u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a31c0; }
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x9a2824u; f_9a4a78(c);
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5u;
    c->r[3] = 0x71u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    goto L_9a31ec;
L_9a2840:;
    c->r[0] = c->r[10];
    c->r[14] = 0x9a2848u; f_9a4834(c);
L_9a2848:;
    c->r[5] = 0x0u;
L_9a284c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a2858u; f_74f260(c);
    goto L_9a1098;
L_9a2860:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a2bd8; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[4] = 0x0u;
    c->r[0] = c->r[10] + 0x178u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[10] + 0x180u; ST32(ea, c->r[4]); }
    c->r[14] = 0x9a2894u; f_74edec(c);
    { uint32_t ea = c->r[10] + 0x41u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0x298u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[1] = (c->r[2] << 4) - c->r[2];
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (c->r[1] << 1);
    c->r[2] = 0xau;
    c->r[14] = 0x9a28bcu; f_753a74(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a28c8u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a28d8; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a28d8u; f_7d0d28(c);
L_9a28d8:;
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a28e4u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a2900; }
    c->r[1] = 0x1096490u;
    { uint32_t ea = 0x9a28f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a2900u; f_7d0d44(c);
L_9a2900:;
    c->r[0] = c->r[10];
    c->r[1] = 0x7u;
    c->r[14] = 0x9a290cu; f_85cba0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x8u;
    c->r[14] = 0x9a2918u; f_85cba0(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a2924u; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x9a2934u; f_9a0b74(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x8u;
    c->r[14] = 0x9a2940u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a2950; }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a2950u; f_83ef00(c);
L_9a2950:;
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x3cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[14] = 0x9a296cu; f_85e5bc(c);
L_9a296c:;
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    goto L_9a2c2c;
L_9a2990:;
    (void)f_subs(c, c->r[4], 0x4u);
    if (COND_EQ) { goto L_9a3024; }
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_NE) { goto L_9a1098; }
    { uint32_t ea = c->r[10] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0x19cu;
    c->r[14] = 0x9a29acu; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = 0x0u;
    if (COND_EQ) { goto L_9a1098; }
    c->r[0] = 0x1acu;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = c->r[4] - 0xe0u;
    c->r[2] = c->r[13] + 0xcu;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] - 0xdcu; ST16(ea, c->r[0]); }
    c->r[0] = 0x10961e4u;
    { uint32_t ea = 0x9a29ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a29f0u; f_395f48(c);
    { uint32_t ea = c->r[4] - 0xdfu; ST8(ea, c->r[0]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] - 0xdeu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0xcfu; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_EQ) { goto L_9a2a2c; }
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xd0u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    c->r[0] = 0x1096364u;
    { uint32_t ea = 0x9a2a24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2a28u; f_7231c4(c);
    c->r[5] = c->r[0];
L_9a2a2c:;
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a2a38u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a2a48; }
    c->r[1] = c->r[5];
    c->r[14] = 0x9a2a48u; f_83fdac(c);
L_9a2a48:;
    { uint32_t ea = c->r[10] + 0x1a9u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1aau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[1] + (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    c->r[0] = 0x1096314u;
    { uint32_t ea = 0x9a2a74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2a78u; f_7231c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a3184; }
    c->r[5] = 0x0u;
    goto L_9a3208;
L_9a2a90:;
    c->r[0] = 0x9u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = c->r[10] + 0x1e4u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    c->r[14] = 0x9a2aacu; f_74ecc0(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a2ab8u; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x9a2ac8u; f_9a4a78(c);
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a2ae8u; f_9a41e8(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5u;
    c->r[3] = 0x6fu;
    goto L_9a2d78;
L_9a2afc:;
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[10] + (c->r[0] << 4);
    { uint32_t ea = c->r[1] + 0x44cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a2bbc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x1096090u;
    { uint32_t ea = 0x9a2b2cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2b30u; f_460440(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x9a2b40u; f_45d4d4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a2bbc; }
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xff00ffffu;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_9a333c; }
    c->r[0] = c->r[0] | 0x50000u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5u;
    c->r[3] = 0x68u;
    c->r[5] = c->r[4] - 0x10u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x39u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14u;
    c->r[14] = 0x9a2b94u; f_85e5bc(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a2ba0u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x208u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a2bacu; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x22cu;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a2bb8u; f_74ecc0(c);
    goto L_9a33fc;
L_9a2bbc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
L_9a2bc4:;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a2bccu; f_74f260(c);
    goto L_9a1098;
L_9a2bd8:;
    c->r[2] = 0x2u;
    c->r[4] = 0x1u;
    c->r[1] = (c->r[1] & 0xff00ffffu) | ((c->r[2] << 16) & 0xff0000u);
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x39u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[10] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a2c08u; f_74ecc0(c);
    { uint32_t ea = c->r[10] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1au;
    c->r[3] = 0x29u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a2c2cu; f_85e5bc(c);
L_9a2c2c:;
    c->r[5] = 0x0u;
    goto L_9a2d90;
L_9a2c38:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0xd6u; ST16(ea, c->r[0]); }
L_9a2c40:;
    { uint32_t ea = c->r[10] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1095f78u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[10] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a2c58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2c5cu; f_395464(c);
    { uint32_t ea = c->r[10] + 0xceu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0xcfu; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_EQ) { goto L_9a2c94; }
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xd0u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    c->r[0] = 0x10960fcu;
    { uint32_t ea = 0x9a2c8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2c90u; f_7231c4(c);
    c->r[5] = c->r[0];
L_9a2c94:;
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a2ca0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a2cb0; }
    c->r[1] = c->r[5];
    c->r[14] = 0x9a2cb0u; f_83fdac(c);
L_9a2cb0:;
    c->r[0] = 0x3u;
    c->r[6] = c->r[10] + 0x178u;
    c->r[5] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[10] + 0x180u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a2cd0u; f_74ecc0(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x9a2ce4u; f_74edec(c);
    { uint32_t ea = c->r[10] + 0x186u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0x188u;
    c->r[1] = udiv32(c->r[1], c->r[0]);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    { uint32_t ea = c->r[10] + c->r[2]; ST16(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[0] = 0x2u - c->r[0];
    { uint32_t ea = c->r[10] + 0x185u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x9a2d10u; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xbu;
    c->r[14] = 0x9a2d1cu; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xau;
    c->r[14] = 0x9a2d28u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x3u;
    c->r[14] = 0x9a2d34u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x4u;
    c->r[14] = 0x9a2d40u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a2d4cu; f_85cba0(c);
    c->r[0] = 0x1095e70u;
    c->r[2] = c->r[13] + 0xcu;
    c->r[1] = c->r[8];
    { uint32_t ea = 0x9a2d60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2d64u; f_395f48(c);
    { uint32_t ea = c->r[10] + 0xcdu; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x33u;
L_9a2d78:;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
L_9a2d8c:;
    c->r[14] = 0x9a2d90u; f_85e5bc(c);
L_9a2d90:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a2d9cu; f_74f260(c);
    goto L_9a1098;
L_9a2da0:;
    c->r[0] = 0x4u;
    c->r[4] = 0x0u;
    c->r[1] = 0x1u;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x3au; ST8(ea, c->r[4]); }
    c->r[14] = 0x9a2dc0u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x1e4u;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a2dccu; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x208u;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a2dd8u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x22cu;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a2de4u; f_74ecc0(c);
    { uint32_t ea = c->r[10] + 0xceu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x54u);
    { uint32_t ea = c->r[10] + 0x3fu; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_9a3220; }
    c->r[0] = 0x0u;
    goto L_9a323c;
L_9a2e00:;
    c->r[1] = 0x1095f68u;
    c->r[0] = 0xbu;
    c->r[3] = (c->r[3] & 0xff00ffffu) | ((c->r[0] << 16) & 0xff0000u);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = 0x9a2e20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x959u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a2e58; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[10] + 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x959u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a2e58; }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[10] + 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x958u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0x4u; }
    { uint32_t ea = c->r[10] + 0x42u; ST8(ea, c->r[0]); }
L_9a2e58:;
    c->r[4] = 0x0u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[6];
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[10] + 0x180u; ST32(ea, c->r[4]); }
    c->r[14] = 0x9a2e74u; f_74edec(c);
    { uint32_t ea = c->r[10] + 0xcfu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_9a2e98; }
    { uint32_t ea = c->r[10] + 0x186u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x188u;
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[10] + c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x185u; ST8(ea, c->r[0]); }
L_9a2e98:;
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x42u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a2f8c; }
    c->r[0] = 0x1095d18u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a2eb8u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x1095d10u;
    { uint32_t ea = 0x9a2ec0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x1095d08u;
    { uint32_t ea = 0x9a2ec8u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_9a2ec4:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2eccu; f_3961bc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x6u);
    if (COND_CC) { goto L_9a2f50; }
    c->r[7] = 0x5u;
    c->r[8] = 0x0u;
L_9a2ee0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x9a2eecu; f_3961a8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a2f14; }
    c->r[0] = c->r[0] + (c->r[5] << 1);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a2f14; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a2f0cu; f_39443c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[8] = c->r[8] + 0x1u; }
L_9a2f14:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_9a2ee0; }
    c->r[0] = c->r[10] + c->r[5];
    { uint32_t r = c->r[8] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x54u; ST8(ea, c->r[8]); }
    if (COND_EQ) { goto L_9a2f5c; }
    c->r[0] = c->r[10];
    c->r[1] = 0xbu;
    c->r[14] = 0x9a2f3cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a2f7c; }
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    goto L_9a2f78;
L_9a2f50:;
    c->r[0] = c->r[10] + c->r[5];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x54u; ST8(ea, c->r[1]); }
L_9a2f5c:;
    c->r[0] = c->r[10];
    c->r[1] = 0xbu;
    c->r[14] = 0x9a2f68u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a2f7c; }
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
L_9a2f78:;
    c->r[14] = 0x9a2f7cu; f_840524(c);
L_9a2f7c:;
    { uint32_t ea = c->r[10] + 0x42u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_9a2ec4; }
L_9a2f8c:;
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a2f98u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xbu;
    c->r[14] = 0x9a2fa4u; f_85cba0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xau;
    c->r[14] = 0x9a2fb0u; f_85cba0(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x185u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[3] = 0x8bu; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    if (COND_NE) { c->r[3] = 0x34u; }
    c->r[14] = 0x9a2ff0u; f_85e5bc(c);
    goto L_9a32c4;
L_9a2ff4:;
    { uint32_t ea = c->r[10] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    goto L_9a3018;
L_9a300c:;
    { uint32_t ea = c->r[10] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
L_9a3018:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14u;
    goto L_9a214c;
L_9a3024:;
    { uint32_t ea = c->r[10] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0x1c0u;
    c->r[14] = 0x9a3030u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a1098; }
    c->r[0] = 0x1d0u;
    { uint32_t ea = c->r[10] + 0x1cdu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1ceu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = c->r[10] + 0xccu;
    c->r[2] = c->r[13] + 0xcu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[10] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xd4u; ST16(ea, c->r[0]); }
    c->r[0] = 0x1095b60u;
    { uint32_t ea = 0x9a3070u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3074u; f_395f48(c);
    { uint32_t ea = c->r[10] + 0xcdu; ST8(ea, c->r[0]); }
    goto L_9a1098;
L_9a3080:;
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
L_9a308c:;
    c->r[14] = 0x9a3090u; f_9a4a78(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeadb84u;
    { uint32_t ea = c->r[10] + 0x414u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x9a30acu + c->r[0];
    c->r[1] = c->r[1] + 0x2eu;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0x5u;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a30cc; }
    c->r[0] = 0x1au;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0xfu; }
L_9a30cc:;
    c->r[3] = 0xff3fu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[3] = 0xeadb4cu;
    (void)f_subs(c, c->r[2], 0x4u);
    c->r[3] = 0x9a30e4u + c->r[3];
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a32d0; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_9a32e8; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9a3304; }
    c->r[1] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    goto L_9a32fc;
L_9a3114:;
    c->r[5] = 0x0u;
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x2fu;
    goto L_9a1f34;
L_9a312c:;
    c->r[5] = 0x0u;
    goto L_9a1f24;
L_9a3138:;
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a3148u; f_74ecc0(c);
    c->r[0] = 0x1acu;
    { uint32_t ea = c->r[10] + 0x1a9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1aau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[1] + (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    c->r[0] = 0x1095c10u;
    { uint32_t ea = 0x9a3178u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a317cu; f_7231c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a3208; }
L_9a3184:;
    c->r[5] = 0x0u;
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x37u;
    goto L_9a1f34;
L_9a319c:;
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a31acu; f_74ecc0(c);
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x39u;
    goto L_9a1f34;
L_9a31c0:;
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[14] = 0x9a31d0u; f_9a4a78(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5u;
    c->r[3] = 0x6eu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
L_9a31ec:;
    c->r[14] = 0x9a31f0u; f_85e5bc(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a31fcu; f_85e794(c);
    c->r[14] = 0x9a3200u; f_85e938(c);
    goto L_9a32c4;
L_9a3208:;
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x38u;
    goto L_9a1f34;
L_9a3220:;
    c->r[0] = 0x1095990u;
    { uint32_t ea = 0x9a322cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3230u; f_460464(c);
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[4] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[4] * c->r[1];
L_9a323c:;
    c->r[1] = 0x1f4u;
    c->r[5] = c->r[10];
    { uint32_t ea = c->r[5] + c->r[1]; ST16(ea, c->r[4]); c->r[5] = ea; }
    { uint32_t ea = c->r[10] + 0x1f1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x109595cu;
    c->r[1] = 0x384du;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x9a3260u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a3268u; f_45eaf0(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a3284u; f_9a41e8(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x11u;
    c->r[14] = 0x9a3290u; f_85cba0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x6u;
    c->r[14] = 0x9a329cu; f_85cbc4(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a32b0u; f_9a461c(c);
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a32bcu; f_9a4738(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x9a32c4u; f_9a4834(c);
L_9a32c4:;
    c->r[0] = 0x0u;
    c->r[1] = 0x6u;
    goto L_9a2bc4;
L_9a32d0:;
    { uint32_t ea = c->r[10] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    goto L_9a32f4;
L_9a32e8:;
    { uint32_t ea = c->r[10] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_9a32f4:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14u;
L_9a32fc:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a3304u; f_85e5bc(c);
L_9a3304:;
    c->r[0] = 0x0u;
    c->r[1] = 0xeu;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a3314u; f_74f260(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x11u;
    c->r[14] = 0x9a3320u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a1098; }
    c->r[14] = 0x9a332cu; f_7f3d24(c);
    goto L_9a1098;
L_9a333c:;
    c->r[0] = c->r[0] | 0x30000u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[10] + 0x3fu; ST8(ea, c->r[5]); }
    c->r[14] = 0x9a3350u; f_9a49a8(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x2fu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[14] = 0x9a3370u; f_85e5bc(c);
    c->r[0] = c->r[10] + 0x178u;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a337cu; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a3388u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[14] = 0x9a3394u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x11u;
    c->r[14] = 0x9a33a0u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a33acu; f_85cba0(c);
    c->r[0] = 0x1095810u;
    c->r[1] = c->r[10] + 0xccu;
    c->r[2] = c->r[13] + 0xcu;
    { uint32_t ea = 0x9a33c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a33c4u; f_395f48(c);
    { uint32_t ea = c->r[10] + 0xcdu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a33d4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a33e4; }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a33e4u; f_83fdc0(c);
L_9a33e4:;
    c->r[0] = 0x0u;
    c->r[1] = 0x6u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x9a33fcu; f_85cba0(c);
L_9a33fc:;
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a3408u; f_85e794(c);
    c->r[14] = 0x9a340cu; f_85e938(c);
    goto L_9a2c2c;
}
void f_9a3480(Cpu *restrict c) {
    FN_ENTER(0x9a3480u);
L_9a3480:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x34u;
    c->r[6] = c->r[0];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[1] >> 24);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_9a3d74; }
    c->r[2] = 0x9a34a8u + 0xcu;
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x9a34ccu: goto L_9a34cc; case 0x9a356cu: goto L_9a356c; case 0x9a36b0u: goto L_9a36b0; case 0x9a36f8u: goto L_9a36f8; case 0x9a3920u: goto L_9a3920; case 0x9a392cu: goto L_9a392c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9a34cc:;
    { uint32_t ea = c->r[6] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a3944; }
    c->r[0] = c->r[6] + 0x178u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a3b28; }
    { uint32_t ea = c->r[6] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a34ecu; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a3d74; }
    c->r[0] = 0xead72cu;
    { uint32_t ea = c->r[6] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x9a3504u + c->r[0];
    c->r[1] = c->r[1] + 0x1du;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0x5u;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a3524; }
    c->r[0] = 0x1au;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0xfu; }
L_9a3524:;
    c->r[3] = 0xff3fu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[3] = 0xead6f4u;
    (void)f_subs(c, c->r[2], 0x4u);
    c->r[3] = 0x9a353cu + c->r[3];
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a3f24; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_9a3f14; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9a3d74; }
    c->r[5] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    goto L_9a3e44;
L_9a356c:;
    { uint32_t ea = c->r[6] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a394c; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a36c4; }
    { uint32_t ea = c->r[6] + 0x2adu; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = 0xaaabu;
    { uint32_t ea = c->r[6] + 0x2acu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xaaaa0000u;
    { uint64_t r = (uint64_t)c->r[7] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = 0x1095630u;
    { uint32_t ea = 0x9a35a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[1] >> 1);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a35acu; f_395448(c);
    c->r[1] = c->r[5] + (c->r[5] << 1);
    c->r[1] = c->r[7] - c->r[1];
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 3);
    c->r[4] = c->r[0] + (c->r[4] << 2);
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD16(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a3d20; }
    c->r[0] = 0x109724cu;
    { uint32_t ea = 0x9a35dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a35e0u; f_39c58c(c);
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { goto L_9a3d20; }
    c->r[0] = 0x1097224u;
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x9a3604u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3608u; f_39b7fc(c);
    c->r[0] = 0x10955b4u;
    { uint32_t ea = c->r[5]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[7]); }
    { uint32_t ea = 0x9a361cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3620u; f_3955b8(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a362cu; f_9a0b74(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a3638u; f_39542c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x6u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a3690; }
    c->r[0] = 0x1095578u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x9a3658u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a365cu; f_39542c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x6u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a3690; }
    c->r[0] = 0x1095554u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x9a367cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3680u; f_39542c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x6u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a3f44; }
L_9a3690:;
    { uint32_t ea = c->r[6] + 0x2acu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x2adu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a36a0u; f_9a53f0(c);
L_9a36a0:;
    c->r[5] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x9u;
    goto L_9a3d70;
L_9a36b0:;
    { uint32_t ea = c->r[6] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a39c8; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a3cb4; }
L_9a36c4:;
    { uint32_t ea = c->r[6] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0x298u;
    c->r[14] = 0x9a36d0u; f_7530b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a3d74; }
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a36e4u; f_9a0b74(c);
    { uint32_t ea = c->r[6] + 0x2acu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x2adu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a36f4u; f_9a53f0(c);
    goto L_9a3d74;
L_9a36f8:;
    c->r[5] = c->r[6];
    c->r[0] = 0x0u;
    c->r[2] = 0x80u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[5] + 0x39u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x47u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a371cu; f_74fd94(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a3a8c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a3e18; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    c->r[8] = 0x0u;
    c->r[1] = 0x0u;
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[6] + 0x7u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1095470u;
    { uint32_t ea = 0x9a3760u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1095464u;
    { uint32_t ea = 0x9a376cu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1095614u;
    { uint32_t ea = 0x9a3774u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1095450u;
    { uint32_t ea = 0x9a3780u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10955fcu;
    { uint32_t ea = 0x9a378cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1095438u;
    { uint32_t ea = 0x9a3798u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x10955e4u;
    { uint32_t ea = 0x9a37a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_9a37a4:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a37b4u; f_395448(c);
    c->r[9] = c->r[0];
    c->r[6] = 0x0u;
L_9a37bc:;
    c->r[4] = c->r[9] + c->r[6];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a3804; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a37d8u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a3804; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[5] * c->r[7]; c->r[1] = r; }
    c->r[14] = 0x9a37f8u; f_723150(c);
    { uint32_t r = c->r[5] * c->r[7] + c->r[11]; c->r[11] = r; }
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[8]); }
L_9a3804:;
    c->r[6] = c->r[6] + 0x4u;
    (void)f_subs(c, c->r[6], 0x28u);
    if (COND_NE) { goto L_9a37bc; }
    c->r[7] = c->r[10];
    c->r[10] = 0x0u;
L_9a3818:;
    c->r[4] = c->r[9] + c->r[10];
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a3860; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3834u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a3860; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[5] * c->r[6]; c->r[1] = r; }
    c->r[14] = 0x9a3854u; f_723150(c);
    { uint32_t r = c->r[5] * c->r[6] + c->r[11]; c->r[11] = r; }
    { uint32_t ea = c->r[4] + 0x38u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x3au; ST16(ea, c->r[8]); }
L_9a3860:;
    c->r[10] = c->r[10] + 0x4u;
    (void)f_subs(c, c->r[10], 0x28u);
    if (COND_NE) { goto L_9a3818; }
    c->r[6] = 0x0u;
    c->r[10] = c->r[7];
L_9a3874:;
    c->r[4] = c->r[9] + c->r[6];
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a38b8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a388cu; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a38b8; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[5] * c->r[7]; c->r[1] = r; }
    c->r[14] = 0x9a38acu; f_723150(c);
    { uint32_t r = c->r[5] * c->r[7] + c->r[11]; c->r[11] = r; }
    { uint32_t ea = c->r[4] + 0x60u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x62u; ST16(ea, c->r[8]); }
L_9a38b8:;
    c->r[6] = c->r[6] + 0x4u;
    (void)f_subs(c, c->r[6], 0x28u);
    if (COND_NE) { goto L_9a3874; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_9a37a4; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[6];
    c->r[14] = 0x9a38e4u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a3900; }
    c->r[1] = 0x1095490u;
    { uint32_t ea = 0x9a38f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a3900u; f_7d0d44(c);
L_9a3900:;
    (void)f_subs(c, c->r[11], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[1] = 0xau; }
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[14] = 0x9a3914u; f_74f260(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_9a3e18;
L_9a3920:;
    c->r[0] = c->r[6];
    c->r[14] = 0x9a3928u; f_9a55b0(c);
    goto L_9a3d74;
L_9a392c:;
    { uint32_t ea = c->r[6] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a3a78; }
    { uint32_t r = c->r[0] & 0x50u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a3d20; }
    goto L_9a3d74;
L_9a3944:;
    c->r[5] = 0x2u;
    goto L_9a3d68;
L_9a394c:;
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[6] + 0x178u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a3960u; f_74ecc0(c);
    c->r[0] = c->r[6] + 0x298u;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a396cu; f_74ecc0(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a3978u; f_9a0b74(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0xead29cu;
    { uint32_t ea = c->r[6] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x9a3994u + c->r[0];
    c->r[1] = c->r[1] + 0x1du;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0x5u;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a39b4; }
    c->r[0] = 0x1au;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0xfu; }
L_9a39b4:;
    c->r[3] = 0xff3fu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[3] = 0xead268u;
    c->r[3] = 0x9a39c8u + c->r[3];
    goto L_9a3a40;
L_9a39c8:;
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[6] + 0x178u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a39dcu; f_74ecc0(c);
    c->r[0] = c->r[6] + 0x298u;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a39e8u; f_74ecc0(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a39f4u; f_9a0b74(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0xead220u;
    { uint32_t ea = c->r[6] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x9a3a10u + c->r[0];
    c->r[1] = c->r[1] + 0x1du;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0x5u;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a3a30; }
    c->r[0] = 0x1au;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0xfu; }
L_9a3a30:;
    c->r[3] = 0xff3fu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[3] = 0xead1ecu;
    c->r[3] = 0x9a3a44u + c->r[3];
L_9a3a40:;
    c->r[1] = c->r[3] + (c->r[1] << 2);
    (void)f_subs(c, c->r[2], 0x4u);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a3d30; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_9a3d48; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9a3d64; }
    c->r[1] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    goto L_9a3d5c;
L_9a3a78:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a3a84u; f_74f260(c);
    c->r[5] = 0x2u;
    goto L_9a3d74;
L_9a3a8c:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x178u;
    c->r[14] = 0x9a3aa4u; f_74ecc0(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0xead170u;
    { uint32_t ea = c->r[6] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x9a3ac0u + c->r[0];
    c->r[1] = c->r[1] + 0x1du;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0x5u;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a3ae0; }
    c->r[0] = 0x1au;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0xfu; }
L_9a3ae0:;
    c->r[3] = 0xff3fu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[3] = 0xead138u;
    (void)f_subs(c, c->r[2], 0x4u);
    c->r[3] = 0x9a3af8u + c->r[3];
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a3dd8; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_9a3df0; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9a3e0c; }
    c->r[1] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    goto L_9a3e04;
L_9a3b28:;
    c->r[2] = 0x188u;
    { uint32_t ea = c->r[6] + 0x185u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x186u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[6] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t r = c->r[7] * c->r[2] + c->r[3]; c->r[4] = r; }
    c->r[2] = 0x1000000u;
    c->r[2] = c->r[2] + (c->r[4] << 24);
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a3b58u; f_74ecc0(c);
    c->r[0] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a3d80; }
    c->r[0] = 0x1095054u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[6] + 0x39u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x90u; ST32(ea, c->r[9]); }
    { uint32_t ea = 0x9a3b7cu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x109504cu;
    { uint32_t ea = 0x9a3b84u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1095044u;
    { uint32_t ea = 0x9a3b8cu + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x109503cu;
    { uint32_t ea = 0x9a3b94u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
L_9a3b90:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[14] = 0x9a3b9cu; f_395448(c);
    c->r[6] = c->r[0];
    c->r[7] = 0x0u;
L_9a3ba4:;
    c->r[4] = c->r[6] + c->r[7];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a3bdc; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3bbcu; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a3bdc; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[3] + 0x90u; ST32(ea, c->r[0]); }
L_9a3bdc:;
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[7], 0x28u);
    if (COND_NE) { goto L_9a3ba4; }
    c->r[7] = 0x0u;
L_9a3bec:;
    c->r[4] = c->r[6] + c->r[7];
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a3c24; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3c04u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a3c24; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[3] + 0x90u; ST32(ea, c->r[0]); }
L_9a3c24:;
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[7], 0x28u);
    if (COND_NE) { goto L_9a3bec; }
    c->r[7] = 0x0u;
L_9a3c34:;
    c->r[4] = c->r[6] + c->r[7];
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a3c6c; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3c4cu; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a3c6c; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[3] + 0x90u; ST32(ea, c->r[0]); }
L_9a3c6c:;
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[7], 0x28u);
    if (COND_NE) { goto L_9a3c34; }
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], 0x3u);
    if (COND_NE) { goto L_9a3b90; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[3] = 0x1fu;
    { uint32_t ea = c->r[1] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14u;
    c->r[1] = 0x1u;
    c->r[2] = 0xfu;
    c->r[14] = 0x9a3cb0u; f_85e5bc(c);
    goto L_9a3dc8;
L_9a3cb4:;
    { uint32_t ea = c->r[6] + 0x2adu; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = 0xaaabu;
    { uint32_t ea = c->r[6] + 0x2acu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xaaaa0000u;
    { uint64_t r = (uint64_t)c->r[7] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = 0x1094efcu;
    { uint32_t ea = 0x9a3cd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[1] >> 1);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3ce0u; f_395448(c);
    c->r[1] = c->r[5] + (c->r[5] << 1);
    c->r[1] = c->r[7] - c->r[1];
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 3);
    c->r[4] = c->r[0] + (c->r[4] << 2);
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD16(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a3d20; }
    c->r[0] = 0x1096b0cu;
    { uint32_t ea = 0x9a3d10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3d14u; f_399390(c);
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_GE) { goto L_9a3e50; }
L_9a3d20:;
    c->r[5] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
    goto L_9a3d70;
L_9a3d30:;
    { uint32_t ea = c->r[6] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    goto L_9a3d54;
L_9a3d48:;
    { uint32_t ea = c->r[6] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_9a3d54:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14u;
L_9a3d5c:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a3d64u; f_85e5bc(c);
L_9a3d64:;
    c->r[5] = 0x0u;
L_9a3d68:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
L_9a3d70:;
    c->r[14] = 0x9a3d74u; f_74f260(c);
L_9a3d74:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9a3d80:;
    c->r[0] = c->r[6] + 0x298u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x9a3d90u; f_74ecc0(c);
    c->r[0] = 0x2b0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[6] + c->r[0]; ST16(ea, c->r[4]); }
    c->r[0] = 0x2acu;
    { uint32_t ea = c->r[6] + c->r[0]; ST16(ea, c->r[4]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a3dacu; f_9a0b74(c);
    { uint32_t ea = c->r[6] + 0x2acu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x2adu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a3dbcu; f_9a53f0(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[0]); }
L_9a3dc8:;
    c->r[5] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    goto L_9a3d70;
L_9a3dd8:;
    { uint32_t ea = c->r[6] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    goto L_9a3dfc;
L_9a3df0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_9a3dfc:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14u;
L_9a3e04:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a3e0cu; f_85e5bc(c);
L_9a3e0c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a3e18u; f_74f260(c);
L_9a3e18:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_EQ) { goto L_9a3d74; }
    { uint32_t ea = c->r[6] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[3] = 0x1fu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x14u;
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
L_9a3e44:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a3e4cu; f_85e5bc(c);
    goto L_9a3d74;
L_9a3e50:;
    c->r[0] = 0x10969b4u;
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x9a3e68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3e6cu; f_3990dc(c);
    c->r[0] = 0x1094d50u;
    { uint32_t ea = c->r[5]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[7]); }
    { uint32_t ea = 0x9a3e80u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3e84u; f_3955b8(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a3e90u; f_9a0b74(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a3e9cu; f_39542c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x6u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a3ef4; }
    c->r[0] = 0x1094d14u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x9a3ebcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3ec0u; f_39542c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x6u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a3ef4; }
    c->r[0] = 0x1094cf0u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x9a3ee0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a3ee4u; f_39542c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x6u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a3f5c; }
L_9a3ef4:;
    { uint32_t ea = c->r[6] + 0x2acu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x2adu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a3f04u; f_9a53f0(c);
L_9a3f04:;
    c->r[5] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x1fu;
    goto L_9a3d70;
L_9a3f14:;
    { uint32_t ea = c->r[6] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    goto L_9a3f38;
L_9a3f24:;
    { uint32_t ea = c->r[6] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
L_9a3f38:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14u;
    goto L_9a3e44;
L_9a3f44:;
    c->r[0] = c->r[6];
    c->r[14] = 0x9a3f4cu; f_9a55b0(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[0]); }
    goto L_9a36a0;
L_9a3f5c:;
    c->r[0] = c->r[6];
    c->r[14] = 0x9a3f64u; f_9a55b0(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[0]); }
    goto L_9a3f04;
}
void f_9a3ff4(Cpu *restrict c) {
    FN_ENTER(0x9a3ff4u);
L_9a3ff4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1094bc4u;
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a400cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4010u; f_39542c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4] + 0xccu;
    c->r[2] = 0x88u;
    c->r[14] = 0x9a4020u; f_15efdd0(c);
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4048; }
    { uint32_t ea = c->r[4] + 0x1aau; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = 0xffffu;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = udiv32(c->r[1], c->r[2]);
    c->r[1] = c->r[1] - c->r[0] * c->r[2];
    goto L_9a4058;
L_9a4048:;
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0xd0u; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_9a4058:;
    c->r[2] = 0x1acu;
    { uint32_t ea = c->r[4] + c->r[2]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x1a9u; ST8(ea, c->r[1]); }
    c->r[14] = 0x9a406cu; f_9a0e70(c);
    { uint32_t ea = c->r[4] + 0xceu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xcfu; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_EQ) { goto L_9a40a4; }
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    c->r[0] = 0x1094cecu;
    { uint32_t ea = 0x9a409cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a40a0u; f_7231c4(c);
    c->r[5] = c->r[0];
L_9a40a4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a40b0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_83fdac(c);
}
void f_9a40cc(Cpu *restrict c) {
    FN_ENTER(0x9a40ccu);
L_9a40cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[4] + 0xcfu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_9a412c; }
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xceu; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[6] = 0x0u;
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    c->r[0] = 0x1094c78u;
    (void)f_subs(c, c->r[5], 0x54u);
    if (COND_EQ) { c->r[6] = 0x2u; }
    { uint32_t ea = 0x9a4110u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4114u; f_7231c4(c);
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[5], 0x54u);
    if (COND_EQ) { c->r[1] = 0x4u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[6]; }
    c->r[1] = c->r[1] + 0xau;
L_9a412c:;
    c->r[0] = 0xeacaf8u;
    c->r[0] = 0x9a4138u + c->r[0];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0x5u;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a4154; }
    c->r[0] = 0x1au;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0xfu; }
L_9a4154:;
    c->r[3] = 0xff3fu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[3] = 0xeacac4u;
    (void)f_subs(c, c->r[2], 0x4u);
    c->r[3] = 0x9a416cu + c->r[3];
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a41a0; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_9a41b8; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[13] = c->r[13] + 0x10u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    goto L_9a41cc;
L_9a41a0:;
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    goto L_9a41c4;
L_9a41b8:;
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_9a41c4:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14u;
L_9a41cc:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a41d4u; f_85e5bc(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9a41e8(Cpu *restrict c) {
    FN_ENTER(0x9a41e8u);
L_9a41e8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x34u;
    c->r[10] = c->r[0];
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[1], 0x53u);
    if (COND_HI) { goto L_9a4228; }
    c->r[0] = 0x10949b0u;
    { uint32_t ea = 0x9a420cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4210u; f_4603fc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9a4228; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a4224u; f_46fcac(c);
    c->r[6] = c->r[5];
L_9a4228:;
    c->r[0] = c->r[10];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a4234u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xa4u; ST32(ea, c->r[6]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x75u; ST8(ea, c->r[1]); } }
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[14] = 0x9a4250u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4270; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x68u; ST8(ea, c->r[1]); }
L_9a4270:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1f4u;
    { uint32_t ea = c->r[10] + 0x44cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x45cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x46cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x47cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x48cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x49cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f6u;
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + 0x1u;
    c->r[5] = c->r[7];
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_9a42cc; }
    c->r[0] = c->r[10] + 0x1e4u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9a42c8u; rt_dispatch(c);
    c->r[5] = c->r[0];
L_9a42cc:;
    c->r[0] = 0x10948e0u;
    { uint32_t ea = c->r[10] + 0x6u; uint32_t v = LD8(ea); c->r[8] = v; }
    { uint32_t ea = 0x9a42dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a42e0u; f_45e378(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a45d0; }
    { uint32_t r = c->r[7] * c->r[6]; c->r[0] = r; }
    c->r[7] = 0x0u;
    c->r[6] = 0x0u;
    c->r[11] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[8] - 0x9u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10948acu;
    c->r[9] = c->r[5] + c->r[11];
    { uint32_t ea = 0x9a4310u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x10948a0u;
    { uint32_t ea = 0x9a431cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1094a58u;
    { uint32_t ea = 0x9a4328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1094888u;
    { uint32_t ea = 0x9a4334u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x109487cu;
    { uint32_t ea = 0x9a4340u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1094870u;
    { uint32_t ea = 0x9a434cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1094864u;
    { uint32_t ea = 0x9a4358u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x109484cu;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[10]); }
    { uint32_t ea = 0x9a4370u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
L_9a4370:;
    (void)f_subs(c, c->r[6], 0x53u);
    if (COND_HI) { goto L_9a45bc; }
    (void)f_subs(c, c->r[11], c->r[6]);
    if (COND_LS) { (void)f_subs(c, c->r[6], c->r[9]); }
    if (COND_CS) { goto L_9a45bc; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4394u; f_4603fc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9a45bc; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a43b0u; f_460440(c);
    c->r[8] = c->r[0];
    c->r[0] = 0x514u;
    c->r[11] = c->r[10] + (c->r[7] << 4);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[5] + c->r[0];
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[11] + 0x458u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a43d4u; f_45f8e4(c);
    { uint32_t ea = c->r[11] + 0x450u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4dau; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[11] + 0x451u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a43ecu; f_2e715c(c);
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = 0x9c5cu;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[11] + 0x452u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a4428; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a441cu; f_45f098(c);
    (void)f_subs(c, c->r[0], c->r[8]);
    c->r[10] = 0x0u;
    if (COND_EQ) { c->r[10] = 0x1u; }
L_9a4428:;
    c->r[0] = 0x44cu;
    c->r[9] = c->r[11] + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x9a4438u; f_2e92a8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4478; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_9a44b0; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[10] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_9a4518; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_9a4518; }
    c->r[0] = c->r[0] | 0x9u;
    goto L_9a44f4;
L_9a4478:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_9a4518; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_9a4518; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_9a4518; }
    c->r[0] = c->r[0] | 0xc0u;
    goto L_9a44f4;
L_9a44b0:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x201bu;
    c->r[1] = c->r[8];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x380000u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a44c8u; f_45f54c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a44fc; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[10] + 0x3fu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); } }
    if (COND_EQ) { c->r[1] = 0x9u; }
    c->r[0] = c->r[1] | c->r[0];
L_9a44f4:;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    goto L_9a4518;
L_9a44fc:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[0] = 0x1u;
    if (COND_NE) { c->r[0] = 0x2u; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
L_9a4518:;
    c->r[0] = c->r[5];
    c->r[14] = 0x9a4520u; f_2e8458(c);
    { uint32_t ea = c->r[11] + 0x453u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a452cu; f_2e82e0(c);
    { uint32_t ea = c->r[11] + 0x454u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a4578; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x201bu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x380000u;
    c->r[2] = c->r[1] + 0x1000u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4558u; f_45f54c(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a4590; }
    c->r[0] = c->r[10] + c->r[7];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x4cu; ST8(ea, c->r[1]); }
    goto L_9a45b0;
L_9a4578:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[10] + c->r[7];
    { uint32_t ea = c->r[0] + 0x4cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_9a45b0;
L_9a4590:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a459cu; f_45f098(c);
    (void)f_subs(c, c->r[0], c->r[8]);
    c->r[0] = 0x0u;
    c->r[1] = c->r[10] + c->r[7];
    if (COND_EQ) { c->r[0] = 0x2u; }
    { uint32_t ea = c->r[1] + 0x4cu; ST8(ea, c->r[0]); }
L_9a45b0:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[7] + 0x1u;
L_9a45bc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[14] = 0x9a45c8u; f_45e378(c);
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_9a4370; }
L_9a45d0:;
    c->r[0] = c->r[10];
    c->r[1] = 0x11u;
    c->r[14] = 0x9a45dcu; f_85cb3c(c);
    c->r[13] = c->r[13] + 0x34u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a45f0; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_7f3d24(c);
L_9a45f0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9a461c(Cpu *restrict c) {
    FN_ENTER(0x9a461cu);
L_9a461c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x90u;
    c->r[4] = c->r[0];
    c->r[6] = c->r[13];
    c->r[2] = 0x88u;
    c->r[5] = c->r[4] + 0xccu;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x9a4640u; f_15efdd0(c);
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[4] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x1094558u;
    { uint32_t ea = 0x9a4664u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4668u; f_460440(c);
    { uint32_t ea = c->r[13] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1094550u;
    c->r[2] = c->r[13] + 0x88u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x9a4680u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4684u; f_395f48(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcdu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xceu; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x54u);
    if (COND_EQ) { goto L_9a46e4; }
    c->r[6] = c->r[13];
    c->r[1] = c->r[5];
    c->r[2] = 0x88u;
    c->r[0] = c->r[6];
    c->r[14] = 0x9a46acu; f_15efdd0(c);
    c->r[0] = 0x1094510u;
    c->r[2] = c->r[13] + 0x88u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x9a46c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a46c4u; f_395f48(c);
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a46d4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4700; }
    c->r[1] = c->r[5];
    goto L_9a46fc;
L_9a46e4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a46f0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4700; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[6]);
L_9a46fc:;
    c->r[14] = 0x9a4700u; f_83fdd4(c);
L_9a4700:;
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a470cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4724; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[7], 0x54u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[14] = 0x9a4724u; f_83fdc0(c);
L_9a4724:;
    c->r[13] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9a4738(Cpu *restrict c) {
    FN_ENTER(0x9a4738u);
L_9a4738:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[2] = c->r[0] + (c->r[1] << 4);
    { uint32_t ea = c->r[2] + 0x44cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a47d0; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[12] = 0x5u;
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x10u;
    c->r[1] = 0xeac4c4u;
    c->r[1] = 0x9a476cu + c->r[1];
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a4784; }
    c->r[12] = 0x1au;
    { uint32_t r = c->r[3] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[12] = 0xfu; }
L_9a4784:;
    c->r[1] = 0xff3fu;
    c->r[1] = c->r[3] & c->r[1];
    c->r[3] = 0xeac494u;
    (void)f_subs(c, c->r[1], 0x4u);
    c->r[3] = 0x9a479cu + c->r[3];
    c->r[2] = c->r[3] + (c->r[2] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a47f0; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_9a4808; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[13] = c->r[13] + 0x10u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[12]);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    goto L_9a481c;
L_9a47d0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x6eu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    goto L_9a4820;
L_9a47f0:;
    { uint32_t ea = c->r[0] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    goto L_9a4814;
L_9a4808:;
    { uint32_t ea = c->r[0] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_9a4814:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[12]);
    c->r[0] = 0x14u;
L_9a481c:;
    c->r[1] = 0x1u;
L_9a4820:;
    c->r[14] = 0x9a4824u; f_85e5bc(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9a4834(Cpu *restrict c) {
    FN_ENTER(0x9a4834u);
L_9a4834:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x1f4u;
    { uint32_t ea = c->r[0] + 0x1f1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1f2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[1] + c->r[2]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x1094360u;
    { uint32_t ea = 0x9a485cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4860u; f_460440(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a486cu; f_45d4d4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[1] = 0x1u;
    if (COND_EQ) { c->r[0] = 0x68u; }
    if (COND_NE) { c->r[0] = 0x48u; }
    c->r[14] = 0x9a4880u; f_85e794(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_85e938(c);
}
void f_9a488c(Cpu *restrict c) {
    FN_ENTER(0x9a488cu);
L_9a488c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a48d8; }
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x208u;
    c->r[14] = 0x9a48b8u; f_74ecc0(c);
    c->r[0] = c->r[4] + 0x22cu;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a48c4u; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x9a48ccu; f_9a461c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x9a48d4u; f_9a4834(c);
    goto L_9a4978;
L_9a48d8:;
    c->r[0] = 0x3u;
    c->r[1] = c->r[4] + 0xccu;
    c->r[2] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x10942dcu;
    { uint32_t ea = 0x9a48f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a48f8u; f_395f48(c);
    { uint32_t ea = c->r[4] + 0xcdu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x178u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a490cu; f_74ecc0(c);
    c->r[0] = c->r[4] + 0x1e4u;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a4918u; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x11u;
    c->r[14] = 0x9a4924u; f_85cbc4(c);
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x2fu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a4940u; f_85e5bc(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a494cu; f_85e794(c);
    c->r[14] = 0x9a4950u; f_85e938(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a495cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a496c; }
    c->r[1] = 0x0u;
    c->r[14] = 0x9a496cu; f_83fdc0(c);
L_9a496c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x9a4978u; f_85cba0(c);
L_9a4978:;
    c->r[0] = c->r[4];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a4984u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[14] = 0x9a4990u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a499cu; f_85cba0(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9a49a8(Cpu *restrict c) {
    FN_ENTER(0x9a49a8u);
L_9a49a8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xceu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x53u);
    if (COND_HI) { goto L_9a49d0; }
    c->r[0] = 0x10941f0u;
    c->r[2] = 0x80000u;
    { uint32_t ea = 0x9a49ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a49d0u; f_45f5e8(c);
L_9a49d0:;
    { uint32_t ea = c->r[4] + 0x3fu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[5] = c->r[4] + 0xccu;
    (void)f_subs(c, c->r[1], 0x54u);
    { uint32_t ea = c->r[4] + 0xceu; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_9a49f8; }
    c->r[0] = 0x10941c8u;
    c->r[2] = 0x80000u;
    { uint32_t ea = 0x9a49f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a49f8u; f_45f5b0(c);
L_9a49f8:;
    c->r[0] = 0x10941c4u;
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = 0x9a4a0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4a10u; f_395464(c);
    { uint32_t ea = c->r[4] + 0xceu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xcfu; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_EQ) { goto L_9a4a48; }
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    c->r[0] = 0x1094348u;
    { uint32_t ea = 0x9a4a40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4a44u; f_7231c4(c);
    c->r[5] = c->r[0];
L_9a4a48:;
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a4a54u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_83fdac(c);
}
void f_9a4a78(Cpu *restrict c) {
    FN_ENTER(0x9a4a78u);
L_9a4a78:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[1];
    c->r[1] = 0x12u;
    c->r[5] = c->r[2];
    c->r[4] = c->r[0];
    c->r[14] = 0x9a4a90u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4aa0; }
    c->r[1] = c->r[6];
    c->r[14] = 0x9a4aa0u; f_845390(c);
L_9a4aa0:;
    { uint32_t ea = c->r[4] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { c->r[2] = 0x41u; }
    if (COND_EQ) { c->r[2] = 0x13u; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST8(ea, c->r[1]); }
    c->r[0] = 0x10940f0u;
    if (COND_NE) { c->r[1] = 0xau; }
    if (COND_EQ) { c->r[1] = 0x1u; }
    { uint32_t ea = 0x9a4ae4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4ae8u; f_75bc4c(c);
    { uint32_t ea = c->r[4] + 0x2e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x42u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10940d0u;
    c->r[1] = 0xau;
    { uint32_t ea = 0x9a4b04u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4b08u; f_75bc4c(c);
    { uint32_t ea = c->r[4] + 0x2e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x43u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4b20u; f_75bc4c(c);
    { uint32_t ea = c->r[4] + 0x2e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x44u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4b38u; f_75bc4c(c);
    { uint32_t ea = c->r[4] + 0x2e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x109405cu;
    c->r[1] = 0x384du;
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x9a4b60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 3); ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9a4b7c(Cpu *restrict c) {
    FN_ENTER(0x9a4b7cu);
L_9a4b7c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1f4u;
    c->r[4] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x109400cu;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x9a4bb0u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4bb4u; f_460440(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4bc0u; f_45d4d4(c);
    { uint32_t ea = c->r[4] - 0x173u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[4] - 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[8] = c->r[4] - 0x10u;
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a4c28; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a4cb4; }
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x9a4becu; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4e74; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[5];
    c->r[14] = 0x9a4c10u; f_9a41e8(c);
    { uint32_t ea = c->r[5] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a4ed0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a4c24u; f_9a952c(c);
    goto L_9a4ed8;
L_9a4c28:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a4d58; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a4dd4; }
    c->r[0] = 0x218u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_9a4ee8; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_9a4ec0; }
    c->r[0] = 0x2u;
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[5] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a4c6cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x72u; ST8(ea, c->r[1]); } }
    c->r[0] = c->r[5];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a4c84u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4c94; }
    c->r[1] = 0x7u;
    c->r[14] = 0x9a4c94u; f_7f0ce8(c);
L_9a4c94:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a4ca0u; f_74ecc0(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x11u;
    c->r[14] = 0x9a4cacu; f_85cbc4(c);
    c->r[0] = 0x61u;
    goto L_9a4e4c;
L_9a4cb4:;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[0] = 0x1094650u;
    c->r[1] = 0x6c34u;
    { uint32_t ea = 0x9a4cccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[5] + 0x208u;
    c->r[14] = 0x9a4ce0u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4eb0; }
    c->r[0] = 0x218u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_9a4e98; }
    c->r[0] = 0x1u;
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[5] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a4d14u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x72u; ST8(ea, c->r[1]); } }
    c->r[0] = c->r[5];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a4d2cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4d3c; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a4d3cu; f_7f0ce8(c);
L_9a4d3c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x11u;
    c->r[14] = 0x9a4d48u; f_85cba0(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a4d54u; f_74ecc0(c);
    goto L_9a4e98;
L_9a4d58:;
    c->r[0] = 0x1u;
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[5] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a4d6cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x72u; ST8(ea, c->r[1]); } }
    c->r[0] = c->r[5];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a4d84u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4d94; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a4d94u; f_7f0ce8(c);
L_9a4d94:;
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a4da0u; f_74ecc0(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x11u;
    c->r[14] = 0x9a4dacu; f_85cba0(c);
    c->r[0] = 0x218u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_9a4e68; }
    c->r[0] = 0x49u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a4dccu; f_85e794(c);
    c->r[14] = 0x9a4dd0u; f_85e938(c);
    goto L_9a4f0c;
L_9a4dd4:;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_9a4ec0; }
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x208u;
    c->r[14] = 0x9a4df4u; f_74ecc0(c);
    c->r[0] = c->r[5] + 0x22cu;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a4e00u; f_74ecc0(c);
    c->r[0] = 0x218u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[5] + c->r[0]; ST16(ea, c->r[4]); }
    c->r[0] = 0x23cu;
    { uint32_t ea = c->r[5] + 0x215u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + c->r[0]; ST16(ea, c->r[4]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[5] + 0x239u; ST8(ea, c->r[4]); }
    c->r[14] = 0x9a4e24u; f_9a41e8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x9a4e2cu; f_9a952c(c);
    c->r[0] = c->r[5];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a4e38u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4e48; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a4e48u; f_7f0ce8(c);
L_9a4e48:;
    c->r[0] = 0xceu;
L_9a4e4c:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a4e54u; f_85e794(c);
    c->r[14] = 0x9a4e58u; f_85e938(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_74f260(c);
L_9a4e68:;
    c->r[0] = c->r[5];
    c->r[14] = 0x9a4e70u; f_9a4834(c);
    goto L_9a4f0c;
L_9a4e74:;
    { uint32_t ea = c->r[5] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t r = c->r[7] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_9a4f1c; }
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + 0x208u;
    c->r[14] = 0x9a4e90u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4f20; }
L_9a4e98:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x9a4ea4u; f_9a41e8(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_9a952c(c);
L_9a4eb0:;
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_9a9d50(c);
L_9a4ec0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_74f260(c);
L_9a4ed0:;
    c->r[0] = c->r[5];
    c->r[14] = 0x9a4ed8u; f_9a4834(c);
L_9a4ed8:;
    { uint32_t ea = c->r[5] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_9a4738(c);
L_9a4ee8:;
    c->r[0] = c->r[5];
    c->r[14] = 0x9a4ef0u; f_9a488c(c);
    c->r[0] = c->r[5];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a4efcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a4f0c; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a4f0cu; f_7f0ce8(c);
L_9a4f0c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_74f260(c);
L_9a4f1c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9a4f20:;
    c->r[0] = 0x10943ecu;
    c->r[1] = 0x6c3cu;
    { uint32_t ea = 0x9a4f30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_9a9bd4(c);
}
void f_9a4f54(Cpu *restrict c) {
    FN_ENTER(0x9a4f54u);
L_9a4f54:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1093c68u;
    { uint32_t ea = 0x9a4f68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4f6cu; f_3961bc(c);
    c->r[5] = c->r[0];
    c->r[0] = ~0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], 0x6u);
    { uint32_t ea = c->r[4] + 0x3eu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[0] + 0x54u; ST8(ea, c->r[1]); }
    if (COND_CC) { goto L_9a5040; }
    c->r[0] = 0x1093c14u;
    c->r[6] = 0x5u;
    { uint32_t ea = 0x9a4fbcu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x1093c0cu;
    { uint32_t ea = 0x9a4fc4u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
L_9a4fc0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x9a4fccu; f_3961a8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a5018; }
    { uint32_t ea = c->r[4] + 0x3eu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a5028; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a4ff0u; f_39443c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a5018; }
    { uint32_t ea = c->r[4] + 0x3eu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1] + 0x58u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x54u; ST8(ea, c->r[1]); }
L_9a5018:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_CC) { goto L_9a4fc0; }
    { uint32_t ea = c->r[4] + 0x3eu; uint32_t v = LD8(ea); c->r[2] = v; }
L_9a5028:;
    c->r[0] = c->r[4] + c->r[2];
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x274u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_9a5048;
L_9a5040:;
    c->r[0] = c->r[4] + 0x274u;
    c->r[1] = 0x1u;
L_9a5048:;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_74ee34(c);
}
void f_9a5060(Cpu *restrict c) {
    FN_ENTER(0x9a5060u);
L_9a5060:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x3cu;
    c->r[4] = c->r[0];
    c->r[0] = 0x284u;
    c->r[2] = 0x21u;
    c->r[6] = 0x0u;
    c->r[11] = 0x0u;
    c->r[10] = 0x0u;
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD16(ea); c->r[9] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xadu; ST8(ea, c->r[2]); }
    c->r[2] = 0x58u;
    { uint32_t ea = c->r[9] + 0xa1u; ST8(ea, c->r[6]); }
    c->r[5] = c->r[9] + 0x2u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    c->r[7] = c->r[2] + (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = 0x172u;
    c->r[1] = c->r[9] + c->r[1];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9] - 0x10u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1093b04u;
    { uint32_t ea = 0x9a50ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1093af8u;
    { uint32_t ea = 0x9a50d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1093af4u;
    { uint32_t ea = 0x9a50e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1095b3cu;
    { uint32_t ea = 0x9a50f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1093c8cu;
    { uint32_t ea = 0x9a50fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1095b24u;
    { uint32_t ea = 0x9a5108u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    goto L_9a5120;
L_9a5114:;
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[11] = c->r[11] + 0x18u;
L_9a5120:;
    c->r[8] = c->r[4] + c->r[11];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x33au; ST8(ea, c->r[6]); }
    c->r[0] = c->r[1] + (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_9a514c; }
    { uint32_t ea = c->r[4] + 0x282u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_CC) { goto L_9a5164; }
    goto L_9a52d4;
L_9a514c:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9a515cu; rt_dispatch(c);
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_CS) { goto L_9a52d4; }
L_9a5164:;
    c->r[0] = c->r[4] + c->r[10];
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_9a52d4; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5180u; f_3961a8(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9a52d0; }
    { uint32_t ea = c->r[4] + 0x3eu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[5] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9a52cc; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a51b0u; f_394228(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9a52c8; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    c->r[1] = 0x338u;
    { uint32_t ea = c->r[2] + c->r[1]; ST16(ea, c->r[0]); c->r[2] = ea; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[6] + 0x19u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a51e4u; f_760d3c(c);
    { uint32_t ea = c->r[8] + 0x334u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 1);
    c->r[14] = 0x9a51fcu; f_d84114(c);
    { uint32_t ea = c->r[8] + 0x344u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x348u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3eu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[5] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x33cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x340u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5224u; f_7231c4(c);
    { uint32_t ea = c->r[8] + 0x33au; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x2u;
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[8] + 0x33au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_NE) { goto L_9a52c8; }
    { uint32_t ea = c->r[6] + 0xdu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[4] + 0x324u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a525cu; f_9a9a0c(c);
    { uint32_t ea = c->r[4] + 0x325u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 7);
    { uint32_t ea = c->r[4] + 0x3f4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x324u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3f5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x334u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x344u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a52a8u; f_d84114(c);
    { uint32_t ea = c->r[4] + 0x400u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x33au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[1] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
L_9a52c8:;
    c->r[6] = 0x0u;
L_9a52cc:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_9a52d0:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
L_9a52d4:;
    (void)f_subs(c, c->r[11], 0xa8u);
    if (COND_NE) { goto L_9a5114; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[3] = 0x36u; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    if (COND_NE) { c->r[3] = 0x35u; }
    c->r[14] = 0x9a5308u; f_85e5bc(c);
    c->r[13] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9a5328(Cpu *restrict c) {
    FN_ENTER(0x9a5328u);
L_9a5328:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x6u;
    c->r[2] = c->r[13];
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0xccu; ST8(ea, c->r[0]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[5] + 0x6u; ST16(ea, c->r[0]); }
    c->r[0] = 0x1093874u;
    { uint32_t ea = 0x9a535cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5360u; f_395f48(c);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[5] - 0x8fu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5374u; f_395464(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a5394; }
    c->r[1] = 0xa45u;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[14] = 0x9a5394u; f_74ff80(c);
L_9a5394:;
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x0u - c->r[1];
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    c->r[0] = 0x10939d8u;
    { uint32_t ea = 0x9a53b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a53b4u; f_723194(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a53c0u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a53dc; }
    c->r[1] = 0x10939b4u;
    { uint32_t ea = 0x9a53d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a53dcu; f_7d0d60(c);
L_9a53dc:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9a53f0(Cpu *restrict c) {
    FN_ENTER(0x9a53f0u);
L_9a53f0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0xaaabu;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xaaaa0000u;
    { uint64_t r = (uint64_t)c->r[5] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = 0x10937b4u;
    { uint32_t ea = 0x9a541cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = (c->r[1] >> 1);
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5428u; f_395448(c);
    c->r[1] = c->r[7] + (c->r[7] << 1);
    c->r[1] = c->r[5] - c->r[1];
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 3);
    c->r[6] = c->r[0] + (c->r[6] << 2);
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD16(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a5498; }
    c->r[5] = 0x24u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a54e0; }
    c->r[0] = 0x10953b4u;
    { uint32_t ea = 0x9a5468u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a546cu; f_399830(c);
    { uint32_t ea = c->r[6] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_9a54e0; }
    c->r[0] = 0x1095398u;
    { uint32_t ea = 0x9a5484u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5488u; f_399934(c);
    c->r[5] = 0x25u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { c->r[5] = 0x26u; }
    goto L_9a54e0;
L_9a5498:;
    c->r[5] = 0x21u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a54e0; }
    c->r[0] = 0x1095378u;
    { uint32_t ea = 0x9a54b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a54b4u; f_39c58c(c);
    { uint32_t ea = c->r[6] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_9a54e0; }
    c->r[0] = 0x1095358u;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a54d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a54d4u; f_39c21c(c);
    c->r[5] = 0x22u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { c->r[5] = 0x23u; }
L_9a54e0:;
    c->r[0] = 0xeab744u;
    c->r[0] = 0x9a54ecu + c->r[0];
    c->r[0] = c->r[0] + (c->r[5] << 2);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x5u;
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a5508; }
    c->r[0] = 0x1au;
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0xfu; }
L_9a5508:;
    c->r[2] = 0xff3fu;
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = 0xeab710u;
    (void)f_subs(c, c->r[1], 0x4u);
    c->r[2] = 0x9a5520u + c->r[2];
    c->r[2] = c->r[2] + (c->r[5] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a5550; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_9a5568; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9a558c; }
    c->r[1] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    goto L_9a557c;
L_9a5550:;
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    goto L_9a5574;
L_9a5568:;
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_9a5574:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14u;
L_9a557c:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a5584u; f_85e5bc(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9a558c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9a55b0(Cpu *restrict c) {
    FN_ENTER(0x9a55b0u);
L_9a55b0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x5u;
    c->r[1] = 0x2u;
    c->r[2] = 0x188u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = udiv32(c->r[1], c->r[0]);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    { uint32_t ea = c->r[4] + c->r[2]; ST16(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[0] = 0x2u - c->r[0];
    { uint32_t ea = c->r[4] + 0x185u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x178u;
    c->r[14] = 0x9a55f4u; f_74ecc0(c);
    c->r[0] = c->r[4] + 0x298u;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a5600u; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a560cu; f_9a0b74(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x8u;
    c->r[14] = 0x9a5618u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a5628; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a5628u; f_83ef00(c);
L_9a5628:;
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x3fu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a5644u; f_85e5bc(c);
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a5650u; f_85e794(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_85e938(c);
}
void f_9a565c(Cpu *restrict c) {
    FN_ENTER(0x9a565cu);
L_9a565c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[4] = c->r[0];
    c->r[0] = 0x22u;
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[4] + 0x331u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x325u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x33au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x352u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x36au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x382u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x39au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3b2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3e2u; ST8(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a56dc; }
    c->r[0] = 0x1093518u;
    { uint32_t ea = 0x9a56c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a56c4u; f_761460(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a56dc; }
    { uint32_t ea = c->r[4] + 0x325u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[0] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[4] + 0x325u; ST8(ea, c->r[0]); }
L_9a56dc:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = c->r[4] + 0x284u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a57bc; }
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x282u; uint32_t v = LD8(ea); c->r[10] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9a57cc; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = 0x8u;
    c->r[2] = c->r[2] + (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f6u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1093480u;
    { uint32_t ea = 0x9a5750u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1093474u;
    { uint32_t ea = 0x9a575cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1093470u;
    { uint32_t ea = 0x9a5768u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x10954b8u;
    { uint32_t ea = 0x9a5774u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1093608u;
    { uint32_t ea = 0x9a5780u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1095090u;
    { uint32_t ea = 0x9a578cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x10935f0u;
    { uint32_t ea = 0x9a5798u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1095488u;
    { uint32_t ea = 0x9a57a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x10935d8u;
    { uint32_t ea = 0x9a57b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    goto L_9a57f4;
L_9a57bc:;
    c->r[0] = 0x282u;
    c->r[11] = 0x0u;
    c->r[10] = c->r[4] + c->r[0];
    goto L_9a5ac0;
L_9a57cc:;
    c->r[11] = 0x0u;
    goto L_9a5ac0;
L_9a57d4:;
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_9a5850; }
    goto L_9a5aa4;
L_9a57e4:;
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a5aa4; }
    goto L_9a5850;
L_9a57f4:;
    c->r[1] = c->r[5];
    c->r[14] = 0x9a57fcu; f_6c9e30(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[7] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_9a5aa4; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5820u; f_394228(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_9a5aa4; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x9a583cu; f_9a9abc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a5aa4; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a5938; }
L_9a5850:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[11]);
    if (COND_LS) { { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_LS) { (void)f_subs(c, c->r[11], c->r[0]); }
    if (COND_CS) { goto L_9a5aa0; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[0] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[0] + 0x78u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[1] + (c->r[1] << 1);
    c->r[1] = 0x338u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[9] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[10] = c->r[9];
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[0]); c->r[10] = ea; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x19u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a58a0u; f_760d3c(c);
    { uint32_t ea = c->r[10] - 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 1);
    c->r[14] = 0x9a58b8u; f_d84114(c);
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t r = c->r[2] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_9a58f8; }
    c->r[1] = (c->r[1] >> 1);
    c->r[0] = c->r[10] + 0x4u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x33au; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x8u;
    { uint32_t ea = c->r[9] + 0x33au; ST8(ea, c->r[0]); }
L_9a58f8:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5904u; f_7231c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a5964; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a591cu; f_399830(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[9];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x33au; uint32_t v = LD8(ea); c->r[0] = ea; c->r[2] = v; }
    if (COND_LT) { c->r[1] = 0x2u; }
    c->r[1] = c->r[2] | c->r[1];
    goto L_9a5970;
L_9a5938:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x69u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9a57d4; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a57e4; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_EQ) { goto L_9a5850; }
    goto L_9a5aa4;
L_9a5964:;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[0] + 0x33au; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
L_9a5970:;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a599c; }
    c->r[1] = c->r[5];
    c->r[14] = 0x9a5990u; f_724c50(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9a59ac; }
    goto L_9a59b8;
L_9a599c:;
    c->r[1] = c->r[5];
    c->r[14] = 0x9a59a4u; f_724c00(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a59b8; }
L_9a59ac:;
    { uint32_t ea = c->r[9] + 0x33au; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[9] + 0x33au; ST8(ea, c->r[0]); }
L_9a59b8:;
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_9a5a8c; }
    c->r[0] = c->r[10] + 0xcu;
    c->r[9] = c->r[4];
    c->r[1] = c->r[7];
    c->r[6] = c->r[10] - 0x4u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xdu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x324u; ST8(ea, c->r[0]); c->r[9] = ea; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a59ecu; f_9a9a0c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[9] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a5a3c; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = (c->r[5] >> 5);
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x3490u;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x349cu;
    c->r[1] = c->r[0] + c->r[1];
    if (COND_EQ) { c->r[1] = c->r[0] + c->r[2]; }
    c->r[2] = c->r[5] & 0x1fu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & ~sh_lsl(c->r[3], c->r[2]);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_9a5a3c:;
    { uint32_t ea = c->r[4] + 0x325u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 7);
    { uint32_t ea = c->r[4] + 0x3f4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x324u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3f5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5a88u; f_d84114(c);
    { uint32_t ea = c->r[4] + 0x400u; ST32(ea, c->r[0]); }
L_9a5a8c:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
L_9a5aa0:;
    c->r[11] = c->r[11] + 0x1u;
L_9a5aa4:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_9a57f4; }
L_9a5ac0:;
    (void)f_subs(c, c->r[11], 0x0u);
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0x274u;
    c->r[2] = 0x3u;
    if (COND_EQ) { c->r[11] = c->r[11] + 0x1u; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[11]);
    c->r[14] = 0x9a5ae4u; f_74ee34(c);
    { uint32_t r = c->r[5] * c->r[6] + c->r[7]; c->r[0] = r; }
    c->r[2] = 0xffffu;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[11]);
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[1] = v; }
    if (COND_CS) { c->r[0] = c->r[11] + c->r[2]; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[9]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x281u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9a5b40(Cpu *restrict c) {
    FN_ENTER(0x9a5b40u);
L_9a5b40:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[8] = c->r[0];
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4acu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4bcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4ccu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4dcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4ecu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4fcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x50cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x51cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a5d98; }
    c->r[1] = 0x188u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD16(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] - 0x2u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[4] = c->r[7] - 0x10u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a5d54; }
    { uint32_t r = c->r[5] * c->r[6]; c->r[1] = r; }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[7]); }
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
    c->r[2] = c->r[2] + (uint32_t)(uint16_t)(c->r[1]);
    c->r[10] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = 0x10931c0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = 0x9a5bc8u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xeab03cu;
    c->r[1] = 0x9a5bd0u + c->r[1];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1092ff4u;
    { uint32_t ea = 0x9a5be0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x109319cu;
    { uint32_t ea = 0x9a5becu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1093190u;
    { uint32_t ea = 0x9a5bf8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1093184u;
    { uint32_t ea = 0x9a5c04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
L_9a5c0c:;
    c->r[1] = c->r[6];
    c->r[14] = 0x9a5c14u; f_6c9e30(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9a5d30; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->r[1] = (c->r[7] >> 5) & 0x7ffu;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = c->r[7] & 0x1fu;
    { uint32_t ea = c->r[0] + 0x9b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a5d30; }
    c->r[11] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[10]);
    if (COND_CC) { goto L_9a5d2c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CS) { goto L_9a5d2c; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x15u;
    c->r[4] = c->r[8] + (c->r[0] << 4);
    c->r[0] = 0x4b2u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[6]); }
    c->r[0] = 0x4b0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5c90u; f_75bc7c(c);
    { uint32_t ea = c->r[4] + 0x4b8u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4b4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4b4u;
    c->r[9] = c->r[4] + c->r[0];
    c->r[0] = 0x4acu;
    c->r[5] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5cbcu; f_724d68(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a5cd0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_9a5cd0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5ce0u; f_7231c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a5d10; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5cf8u; f_725e38(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x63u);
    c->r[0] = 0x1u;
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_9a5d18;
L_9a5d10:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
L_9a5d18:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_9a5d2c:;
    c->r[9] = c->r[11];
L_9a5d30:;
    { uint32_t ea = c->r[8] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_9a5c0c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x186u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[6] = v; }
L_9a5d54:;
    { uint32_t ea = c->r[8] + 0x185u; uint32_t v = LD8(ea); c->r[10] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x8u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x9a5d6cu; f_74edec(c);
    c->r[1] = (uint32_t)(uint16_t)(c->r[9]);
    c->r[0] = c->r[4];
    c->r[2] = 0x3u;
    c->r[14] = 0x9a5d7cu; f_74ee34(c);
    { uint32_t r = c->r[5] * c->r[6] + c->r[10]; c->r[0] = r; }
    { uint32_t ea = c->r[8] + 0x186u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[7]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x185u; ST8(ea, c->r[0]); }
L_9a5d98:;
    c->r[0] = c->r[8];
    c->r[1] = 0xcu;
    c->r[14] = 0x9a5da4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[1] = c->r[1] | 0x2u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); } }
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9a5dd4(Cpu *restrict c) {
    FN_ENTER(0x9a5dd4u);
L_9a5dd4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[1] + (c->r[1] << 1);
    c->r[1] = 0x4eu;
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x33au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a5e1c; }
    c->r[1] = 0x340u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x1094a10u;
    { uint32_t ea = 0x9a5e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a5e10u; f_399830(c);
    c->r[1] = 0x4fu;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { c->r[1] = 0x50u; }
L_9a5e1c:;
    c->r[0] = 0xeaae08u;
    c->r[0] = 0x9a5e28u + c->r[0];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0x5u;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a5e44; }
    c->r[0] = 0x1au;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0xfu; }
L_9a5e44:;
    c->r[3] = 0xff3fu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[3] = 0xeaadd4u;
    (void)f_subs(c, c->r[2], 0x4u);
    c->r[3] = 0x9a5e5cu + c->r[3];
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a5e90; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_9a5ea8; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[13] = c->r[13] + 0x10u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[1] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    goto L_9a5ebc;
L_9a5e90:;
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    goto L_9a5eb4;
L_9a5ea8:;
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_9a5eb4:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14u;
L_9a5ebc:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a5ec4u; f_85e5bc(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9a5ed8(Cpu *restrict c) {
    FN_ENTER(0x9a5ed8u);
L_9a5ed8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[2] = c->r[0] + (c->r[1] << 1);
    c->r[3] = 0x38u;
    c->r[12] = 0x5u;
    { uint32_t ea = c->r[2] + 0x46u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[3] = 0x3bu; }
    c->r[2] = c->r[3] + c->r[1];
    c->r[1] = 0xeaad28u;
    c->r[1] = 0x9a5f08u + c->r[1];
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a5f20; }
    c->r[12] = 0x1au;
    { uint32_t r = c->r[3] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[12] = 0xfu; }
L_9a5f20:;
    c->r[1] = 0xff3fu;
    c->r[1] = c->r[3] & c->r[1];
    c->r[3] = 0xeaacf8u;
    (void)f_subs(c, c->r[1], 0x4u);
    c->r[3] = 0x9a5f38u + c->r[3];
    c->r[2] = c->r[3] + (c->r[2] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a5f6c; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_9a5f84; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[13] = c->r[13] + 0x10u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[12]);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    goto L_9a5f98;
L_9a5f6c:;
    { uint32_t ea = c->r[0] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    goto L_9a5f90;
L_9a5f84:;
    { uint32_t ea = c->r[0] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_9a5f90:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[12]);
    c->r[0] = 0x14u;
L_9a5f98:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a5fa0u; f_85e5bc(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9a5fb0(Cpu *restrict c) {
    FN_ENTER(0x9a5fb0u);
L_9a5fb0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[5] = 0x47u;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_9a5fd8; }
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = 0x3eu;
    c->r[5] = c->r[3] + (c->r[2] << 1);
L_9a5fd8:;
    c->r[1] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = c->r[1] + 0x4acu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a6020; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_9a601c; }
    c->r[0] = 0x4b0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x1092d84u;
    { uint32_t ea = 0x9a6004u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a6008u; f_725e38(c);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_EQ) { c->r[1] = 0x2u; }
    c->r[5] = c->r[1] + c->r[5];
    goto L_9a6020;
L_9a601c:;
    c->r[5] = c->r[5] + 0x1u;
L_9a6020:;
    c->r[0] = 0xeaac04u;
    c->r[0] = 0x9a602cu + c->r[0];
    c->r[0] = c->r[0] + (c->r[5] << 2);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x5u;
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a6048; }
    c->r[0] = 0x1au;
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0xfu; }
L_9a6048:;
    c->r[2] = 0xff3fu;
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = 0xeaabd0u;
    (void)f_subs(c, c->r[1], 0x4u);
    c->r[2] = 0x9a6060u + c->r[2];
    c->r[2] = c->r[2] + (c->r[5] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a6094; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_9a60ac; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[13] = c->r[13] + 0x10u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    goto L_9a60c0;
L_9a6094:;
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    goto L_9a60b8;
L_9a60ac:;
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_9a60b8:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14u;
L_9a60c0:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a60c8u; f_85e5bc(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9a60dc(Cpu *restrict c) {
    FN_ENTER(0x9a60dcu);
L_9a60dc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 16) & 0xffu;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_9a615c; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x9a6104u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x9a6118u: goto L_9a6118; case 0x9a6164u: goto L_9a6164; case 0x9a61e4u: goto L_9a61e4; case 0x9a62ecu: goto L_9a62ec; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9a6118:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x2u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a64e0; }
    c->r[5] = c->r[4] + 0x274u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a6418; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a6140u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a64ec; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6150u; f_9a565c(c);
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a615cu; f_9a5dd4(c);
L_9a615c:;
    c->r[5] = 0x0u;
    goto L_9a64e0;
L_9a6164:;
    c->r[5] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x410u; ST32(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] - 0x390u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x38cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[6] = c->r[0] - 0xau;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a618cu; f_74fa74(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a6350; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a64e0; }
    c->r[0] = 0x2u;
    c->r[5] = 0x0u;
    c->r[3] = 0x58u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x39u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x404u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x1au;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = 0x14u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a61e0u; f_85e5bc(c);
    goto L_9a6344;
L_9a61e4:;
    c->r[5] = c->r[4];
    c->r[7] = 0x0u;
    c->r[2] = 0x80u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[5] + 0x39u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x47u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x9a6208u; f_74fd94(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a63ac; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a63e0; }
    c->r[0] = 0x3u;
    c->r[7] = c->r[4];
    c->r[3] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x406u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x340u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x10945ccu;
    { uint32_t ea = 0x9a6250u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a6254u; f_3990dc(c);
    { uint32_t ea = c->r[4] + 0x40cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = 0x0u - c->r[1];
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    c->r[0] = 0x1092b18u;
    { uint32_t ea = 0x9a6270u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a6274u; f_723194(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6280u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a629c; }
    c->r[1] = 0x1092af4u;
    { uint32_t ea = 0x9a6294u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a629cu; f_7d0d60(c);
L_9a629c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x9a62a8u; f_85cbc4(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    c->r[14] = 0x9a62c0u; f_85e794(c);
    c->r[14] = 0x9a62c4u; f_85e938(c);
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x69u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x9a62e0u; f_85e5bc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xau;
    goto L_9a63dc;
L_9a62ec:;
    { uint32_t ea = c->r[4] + 0x81u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a64e0; }
    c->r[0] = c->r[0] & 0xff00ffffu;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x274u;
    c->r[14] = 0x9a6314u; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x9a631cu; f_9a565c(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a6334u; f_9a5dd4(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6340u; f_85e794(c);
    c->r[14] = 0x9a6344u; f_85e938(c);
L_9a6344:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    goto L_9a64dc;
L_9a6350:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x274u;
    c->r[14] = 0x9a636cu; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x9a6378u; f_85cbc4(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x42u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a63a0u; f_85e5bc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    goto L_9a64dc;
L_9a63ac:;
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x44u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x404u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x9a63d4u; f_85e5bc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
L_9a63dc:;
    c->r[14] = 0x9a63e0u; f_74f260(c);
L_9a63e0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_9a64e0; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[3] = 0x58u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x14u;
    c->r[2] = 0x1au;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6414u; f_85e5bc(c);
    goto L_9a64e0;
L_9a6418:;
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x33cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x340u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x10943e4u;
    { uint32_t ea = 0x9a6438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a643cu; f_399390(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x1092938u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x9a6450u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a6454u; f_7231c4(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9a64d0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a64d0; }
    c->r[8] = 0x1u;
    c->r[0] = 0x284u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x282u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a6490u; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x9a649cu; f_85cba0(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9a64f4; }
    c->r[0] = 0x10928d8u;
    { uint32_t ea = 0x9a64b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_HI) { goto L_9a64f8; }
    c->r[0] = udiv32(c->r[1], c->r[6]);
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_CS) { c->r[0] = 0x63u; }
    goto L_9a64f8;
L_9a64d0:;
    c->r[5] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
L_9a64dc:;
    c->r[14] = 0x9a64e0u; f_74f260(c);
L_9a64e0:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9a64ec:;
    c->r[5] = 0x0u;
    goto L_9a64e0;
L_9a64f4:;
    c->r[0] = 0x63u;
L_9a64f8:;
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[5] = 0x0u;
    c->r[1] = 0x406u;
    c->r[2] = 0x1au;
    c->r[3] = 0x44u;
    { uint32_t ea = c->r[4] + 0x404u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[8]); }
    if (COND_HI) { c->r[0] = c->r[7]; }
    c->r[1] = 0x408u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a6538u; f_85e5bc(c);
    goto L_9a6344;
}
void f_9a6554(Cpu *restrict c) {
    FN_ENTER(0x9a6554u);
L_9a6554:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 16) & 0xffu;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_9a65d4; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x9a657cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x9a6590u: goto L_9a6590; case 0x9a65dcu: goto L_9a65dc; case 0x9a665cu: goto L_9a665c; case 0x9a6764u: goto L_9a6764; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9a6590:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x2u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a6958; }
    c->r[5] = c->r[4] + 0x274u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a6890; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a65b8u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a6964; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a65c8u; f_9a565c(c);
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a65d4u; f_9a5dd4(c);
L_9a65d4:;
    c->r[5] = 0x0u;
    goto L_9a6958;
L_9a65dc:;
    c->r[5] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x410u; ST32(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] - 0x390u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x38cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[6] = c->r[0] - 0xau;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a6604u; f_74fa74(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a67c8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a6958; }
    c->r[0] = 0x2u;
    c->r[5] = 0x0u;
    c->r[3] = 0x58u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x39u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x404u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x1au;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = 0x14u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6658u; f_85e5bc(c);
    goto L_9a67bc;
L_9a665c:;
    c->r[5] = c->r[4];
    c->r[7] = 0x0u;
    c->r[2] = 0x80u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[5] + 0x39u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x47u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x9a6680u; f_74fd94(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a6824; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a6858; }
    c->r[0] = 0x3u;
    c->r[7] = c->r[4];
    c->r[3] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x406u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x340u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1094154u;
    { uint32_t ea = 0x9a66c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a66ccu; f_3990dc(c);
    { uint32_t ea = c->r[4] + 0x40cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = 0x0u - c->r[1];
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    c->r[0] = 0x10926a0u;
    { uint32_t ea = 0x9a66e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a66ecu; f_723194(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a66f8u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a6714; }
    c->r[1] = 0x109267cu;
    { uint32_t ea = 0x9a670cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a6714u; f_7d0d60(c);
L_9a6714:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x9a6720u; f_85cbc4(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x69u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x9a6748u; f_85e5bc(c);
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6754u; f_85e794(c);
    c->r[14] = 0x9a6758u; f_85e938(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xau;
    goto L_9a6854;
L_9a6764:;
    { uint32_t ea = c->r[4] + 0x81u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a6958; }
    c->r[0] = c->r[0] & 0xff00ffffu;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x274u;
    c->r[14] = 0x9a678cu; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6794u; f_9a565c(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a67acu; f_9a5dd4(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a67b8u; f_85e794(c);
    c->r[14] = 0x9a67bcu; f_85e938(c);
L_9a67bc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    goto L_9a6954;
L_9a67c8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x274u;
    c->r[14] = 0x9a67e4u; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x9a67f0u; f_85cbc4(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x42u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a6818u; f_85e5bc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    goto L_9a6954;
L_9a6824:;
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x44u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x404u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x9a684cu; f_85e5bc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
L_9a6854:;
    c->r[14] = 0x9a6858u; f_74f260(c);
L_9a6858:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_9a6958; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[3] = 0x58u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x14u;
    c->r[2] = 0x1au;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a688cu; f_85e5bc(c);
    goto L_9a6958;
L_9a6890:;
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x33cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x340u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1093f6cu;
    { uint32_t ea = 0x9a68b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a68b4u; f_399390(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x10924c0u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x9a68c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a68ccu; f_7231c4(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9a6948; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a6948; }
    c->r[8] = 0x1u;
    c->r[0] = 0x284u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x281u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x282u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a6908u; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x9a6914u; f_85cba0(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9a696c; }
    c->r[0] = 0x1092460u;
    { uint32_t ea = 0x9a6928u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_HI) { goto L_9a6970; }
    c->r[0] = udiv32(c->r[1], c->r[6]);
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_CS) { c->r[0] = 0x63u; }
    goto L_9a6970;
L_9a6948:;
    c->r[5] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
L_9a6954:;
    c->r[14] = 0x9a6958u; f_74f260(c);
L_9a6958:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9a6964:;
    c->r[5] = 0x0u;
    goto L_9a6958;
L_9a696c:;
    c->r[0] = 0x63u;
L_9a6970:;
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[5] = 0x0u;
    c->r[1] = 0x406u;
    c->r[2] = 0x1au;
    c->r[3] = 0x44u;
    { uint32_t ea = c->r[4] + 0x404u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[8]); }
    if (COND_HI) { c->r[0] = c->r[7]; }
    c->r[1] = 0x408u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a69b0u; f_85e5bc(c);
    goto L_9a67bc;
}
void f_9a69cc(Cpu *restrict c) {
    FN_ENTER(0x9a69ccu);
L_9a69cc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 16) & 0xffu;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_9a6b3c; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x9a69f4u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x9a6a10u: goto L_9a6a10; case 0x9a6b44u: goto L_9a6b44; case 0x9a6b84u: goto L_9a6b84; case 0x9a6c78u: goto L_9a6c78; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9a6a10:;
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_9a6ac8; }
    c->r[14] = 0x9a6a24u; f_85f98c(c);
    c->r[5] = c->r[0];
    c->r[14] = 0x9a6a2cu; f_85f9dc(c);
    c->r[0] = c->r[5] | c->r[0];
    c->r[1] = 0xf309u;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t r = c->r[0] & c->r[6]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a6a5c; }
    c->r[0] = 0x10928ccu;
    c->r[1] = 0x6ba4u;
    { uint32_t ea = 0x9a6a50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a6f18; }
L_9a6a5c:;
    c->r[0] = 0x0u;
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[4] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6a70u; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6a7cu; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6a88u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a6aa4; }
    c->r[1] = 0x10922ecu;
    { uint32_t ea = 0x9a6a9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a6aa4u; f_7d0d60(c);
L_9a6aa4:;
    c->r[0] = 0x56u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6ab0u; f_85e794(c);
    c->r[14] = 0x9a6ab4u; f_85e938(c);
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6ac0u; f_9a5fb0(c);
    c->r[14] = 0x9a6ac4u; f_85efcc(c);
    goto L_9a6f18;
L_9a6ac8:;
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a6c90; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9a6f18; }
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a6fa4; }
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a72f8; }
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a72f8; }
    c->r[0] = 0x2u;
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[4] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6b08u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6b14u; f_85cbc4(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x6u;
    c->r[14] = 0x9a6b20u; f_74f260(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6b2cu; f_85e794(c);
    c->r[0] = 0x1u;
    c->r[14] = 0x9a6b34u; f_85e67c(c);
    c->r[14] = 0x9a6b38u; f_85efc8(c);
    goto L_9a6f18;
L_9a6b3c:;
    c->r[5] = 0x0u;
    goto L_9a7580;
L_9a6b44:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x2u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a7580; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a6e54; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x154u;
    c->r[14] = 0x9a6b68u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a6fc4; }
    { uint32_t ea = c->r[4] + 0x161u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6b7cu; f_9a5ed8(c);
    c->r[5] = 0x0u;
    goto L_9a7580;
L_9a6b84:;
    c->r[5] = c->r[4];
    c->r[0] = 0x0u;
    c->r[2] = 0x80u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[5] + 0x39u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x47u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a6ba8u; f_74fd94(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a6df4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a72b0; }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = c->r[7] + 0x4b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u - c->r[0];
    c->r[0] = 0x10921acu;
    { uint32_t ea = 0x9a6bdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a6be0u; f_723194(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6becu; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a6c08; }
    c->r[1] = 0x1092188u;
    { uint32_t ea = 0x9a6c00u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a6c08u; f_7d0d60(c);
L_9a6c08:;
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a7130; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9a7184; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a71e0; }
    c->r[2] = 0x109214cu;
    c->r[0] = 0x4b0u;
    c->r[12] = 0x1u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a6c3cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[0] & 0x1fu;
    c->r[0] = (c->r[0] >> 5);
    c->r[1] = sh_lsl(c->r[12], c->r[7]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + (c->r[0] << 2);
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[0] + 0x9d0u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[12], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a71d4; }
    { uint32_t ea = c->r[3] + 0xa74u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[1];
    { uint32_t ea = c->r[3] + 0xa74u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0xb18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[1];
    { uint32_t ea = c->r[3] + 0xb18u; ST32(ea, c->r[7]); }
    goto L_9a71d4;
L_9a6c78:;
    { uint32_t ea = c->r[4] + 0x81u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a6cfc; }
    c->r[8] = c->r[4] + 0x3du;
    c->r[5] = 0x0u;
    goto L_9a7568;
L_9a6c90:;
    c->r[0] = c->r[0] & 0xff00ffffu;
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6ca4u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6cb0u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a6cbcu; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x9a6cc8u; f_85cba0(c);
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9a6e7c; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a6e88; }
    c->r[0] = c->r[4];
    c->r[1] = 0x14u;
    c->r[14] = 0x9a6ce8u; f_85cbc4(c);
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a6e88; }
    c->r[14] = 0x9a6cf8u; f_6af894(c);
    goto L_9a6e88;
L_9a6cfc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6d04u; f_99f314(c);
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[8] + 0x3du; uint32_t v = LD8(ea); c->r[8] = ea; c->r[1] = v; }
    c->r[0] = c->r[4] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + 0x46u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9a6f38; }
    c->r[2] = 0x10000u;
    c->r[5] = c->r[4];
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[1] = (c->r[1] >> 16);
    c->r[0] = (c->r[0] & 0xff00ffffu) | ((c->r[1] << 16) & 0xff0000u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x188u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[5] = ea; c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6d50u; f_9a7d30(c);
    c->r[0] = 0x18cu;
    { uint32_t r = c->r[7] * c->r[9] + c->r[6]; c->r[1] = r; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_9a6d8c; }
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[7] = c->r[0] - 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[5]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x185u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6d8cu; f_9a7d30(c);
L_9a6d8c:;
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[2] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    { uint32_t ea = c->r[5]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x185u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] + 0x4acu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a74a4; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_9a744c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_9a7470; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9a74a4; }
    c->r[2] = 0x1091fa4u;
    c->r[1] = 0x4b2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a6de4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x3510u;
    goto L_9a7490;
L_9a6df4:;
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x10000u;
    c->r[0] = c->r[1] + (c->r[0] << 16);
    c->r[1] = 0x0u;
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x178u;
    c->r[14] = 0x9a6e14u; f_74ecc0(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a6e2cu; f_9a5fb0(c);
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a6e48; }
    c->r[0] = 0x56u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6e44u; f_85e794(c);
    c->r[14] = 0x9a6e48u; f_85e938(c);
L_9a6e48:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    goto L_9a72ac;
L_9a6e54:;
    { uint32_t ea = c->r[4] + 0x161u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9a6fcc; }
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a6e78u; f_74f260(c);
    goto L_9a7580;
L_9a6e7c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x13u;
    c->r[14] = 0x9a6e88u; f_85cbc4(c);
L_9a6e88:;
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6e90u; f_99f314(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x46u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x4cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x4du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4au; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x4eu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6ee4u; f_99dbf4(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a6efcu; f_9a5ed8(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6f08u; f_85e794(c);
    c->r[14] = 0x9a6f0cu; f_85e938(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
L_9a6f14:;
    c->r[14] = 0x9a6f18u; f_74f260(c);
L_9a6f18:;
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a6f30; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6f30u; f_9a8214(c);
L_9a6f30:;
    c->r[5] = 0x0u;
    goto L_9a7580;
L_9a6f38:;
    c->r[0] = c->r[0] & 0xff00ffffu;
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a6f4cu; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a6f58u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a6f64u; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x9a6f70u; f_85cba0(c);
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9a7428; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a7434; }
    c->r[0] = c->r[4];
    c->r[1] = 0x14u;
    c->r[14] = 0x9a6f90u; f_85cbc4(c);
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a7434; }
    c->r[14] = 0x9a6fa0u; f_6af894(c);
    goto L_9a7434;
L_9a6fa4:;
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = c->r[1] + 0x4acu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a73ac; }
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
    goto L_9a6f14;
L_9a6fc4:;
    c->r[5] = 0x0u;
    goto L_9a7580;
L_9a6fcc:;
    c->r[2] = 0x164u;
    { uint32_t ea = c->r[4] + 0x162u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[5] = c->r[4] + 0x178u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] * c->r[2] + c->r[1]; c->r[1] = r; }
    c->r[2] = 0x10000u;
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[1] = (c->r[1] >> 16);
    c->r[0] = (c->r[0] & 0xff00ffffu) | ((c->r[1] << 16) & 0xff0000u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a700cu; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[14] = 0x9a7018u; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a7024u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a7034; }
    c->r[1] = 0x3u;
    c->r[14] = 0x9a7034u; f_7d0d28(c);
L_9a7034:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a7040u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a705c; }
    c->r[1] = 0x1091d34u;
    { uint32_t ea = 0x9a7054u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a705cu; f_7d0d60(c);
L_9a705c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a7068u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x9a7074u; f_85cbc4(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x8u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x9a7088u; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x3u;
    c->r[0] = c->r[4] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + 0x46u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a70a0u; f_74ee34(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x9a70a8u; f_9a7d30(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a70c0u; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a70dc; }
    c->r[1] = 0x1091cb4u;
    { uint32_t ea = 0x9a70d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a70dcu; f_7d0d60(c);
L_9a70dc:;
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] + 0x4acu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a75f4; }
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_9a759c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_9a75c0; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9a75f4; }
    c->r[2] = 0x1091c68u;
    c->r[1] = 0x4b2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a7120u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x3510u;
    goto L_9a75e0;
L_9a7130:;
    c->r[2] = 0x1091c40u;
    c->r[0] = 0x4b0u;
    c->r[12] = 0x1u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a7148u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[0] & 0x1fu;
    c->r[0] = (c->r[0] >> 5);
    c->r[1] = sh_lsl(c->r[12], c->r[7]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + (c->r[0] << 2);
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[0] + 0x994u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[12], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a71d4; }
    { uint32_t ea = c->r[3] + 0x99cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[1];
    { uint32_t ea = c->r[3] + 0x99cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x9a4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[1];
    { uint32_t ea = c->r[3] + 0x9a4u; ST32(ea, c->r[7]); }
    goto L_9a71d4;
L_9a7184:;
    c->r[2] = 0x1091becu;
    c->r[0] = 0x4b0u;
    c->r[12] = 0x1u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a719cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[0] & 0x1fu;
    c->r[0] = (c->r[0] >> 5);
    c->r[1] = sh_lsl(c->r[12], c->r[7]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + (c->r[0] << 2);
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[0] + 0xbecu; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[12], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a71d4; }
    { uint32_t ea = c->r[3] + 0xc00u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[1];
    { uint32_t ea = c->r[3] + 0xc00u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0xc14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[1];
    { uint32_t ea = c->r[3] + 0xc14u; ST32(ea, c->r[7]); }
L_9a71d4:;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
L_9a71e0:;
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x44u;
    c->r[0] = 0xea9a34u;
    c->r[0] = 0x9a71fcu + c->r[0];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0x5u;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a7218; }
    c->r[0] = 0x1au;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0xfu; }
L_9a7218:;
    c->r[3] = 0xff3fu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[3] = 0xea9a00u;
    (void)f_subs(c, c->r[2], 0x4u);
    c->r[3] = 0x9a7230u + c->r[3];
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_9a7260; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_9a7278; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9a7294; }
    c->r[1] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    goto L_9a728c;
L_9a7260:;
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    goto L_9a7284;
L_9a7278:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_9a7284:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14u;
L_9a728c:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a7294u; f_85e5bc(c);
L_9a7294:;
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a72a0u; f_85e794(c);
    c->r[14] = 0x9a72a4u; f_85e938(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xau;
L_9a72ac:;
    c->r[14] = 0x9a72b0u; f_74f260(c);
L_9a72b0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_9a72e0; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[3] = 0x58u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x14u;
    c->r[2] = 0x1au;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a72e0u; f_85e5bc(c);
L_9a72e0:;
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a7580; }
    c->r[5] = 0x0u;
    goto L_9a7574;
L_9a72f8:;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x178u;
    c->r[14] = 0x9a7304u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a6f18; }
    c->r[0] = 0x188u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[5] = ea; c->r[8] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a7328u; f_9a7d30(c);
    c->r[0] = 0x18cu;
    { uint32_t r = c->r[6] * c->r[8] + c->r[7]; c->r[2] = r; }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_CS) { c->r[2] = c->r[0] + c->r[1]; }
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[5]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x185u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] + 0x4acu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a770c; }
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_9a76b4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_9a76d8; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9a770c; }
    c->r[2] = 0x10919ecu;
    c->r[1] = 0x4b2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a739cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x3510u;
    goto L_9a76f8;
L_9a73ac:;
    c->r[2] = 0x4u;
    c->r[5] = 0x0u;
    c->r[6] = 0x1u;
    c->r[0] = (c->r[0] & 0xff00ffffu) | ((c->r[2] << 16) & 0xff0000u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x39u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x4b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x178u;
    c->r[14] = 0x9a73d8u; f_74ecc0(c);
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a73f0; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a73f0u; f_9a8214(c);
L_9a73f0:;
    { uint32_t ea = c->r[4] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1au;
    c->r[3] = 0x58u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a7414u; f_85e5bc(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a7420u; f_85e794(c);
    c->r[14] = 0x9a7424u; f_85e938(c);
    goto L_9a76a4;
L_9a7428:;
    c->r[0] = c->r[4];
    c->r[1] = 0x13u;
    c->r[14] = 0x9a7434u; f_85cbc4(c);
L_9a7434:;
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[5] = 0x2u;
    c->r[14] = 0x9a7444u; f_85e794(c);
    c->r[14] = 0x9a7448u; f_85e938(c);
    goto L_9a7550;
L_9a744c:;
    c->r[2] = 0x1091928u;
    c->r[1] = 0x4b2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a7460u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x358cu;
    goto L_9a7490;
L_9a7470:;
    c->r[2] = 0x1091904u;
    c->r[1] = 0x4b2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a7484u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x3570u;
L_9a7490:;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[3] = 0x1u;
    c->r[0] = c->r[2] & ~sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_9a74a4:;
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[14] = 0x9a74b0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[1] = c->r[1] | 0x2u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); } }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a74d8u; f_9a5fb0(c);
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a751c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a753c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x13u;
    c->r[14] = 0x9a74f8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a7514; }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x4b0u;
    c->r[1] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0x9a7514u; f_797d24(c);
L_9a7514:;
    c->r[0] = 0x56u;
    goto L_9a7540;
L_9a751c:;
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a753c; }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x4b0u;
    c->r[1] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
L_9a753c:;
    c->r[0] = 0x2u;
L_9a7540:;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a7548u; f_85e794(c);
    c->r[14] = 0x9a754cu; f_85e938(c);
    c->r[5] = 0x0u;
L_9a7550:;
    c->r[0] = c->r[4] + 0x178u;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a755cu; f_74ecc0(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a7568u; f_74f260(c);
L_9a7568:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a7580; }
L_9a7574:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a7580u; f_9a8214(c);
L_9a7580:;
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a7590; }
    c->r[14] = 0x9a7590u; f_6ad0e8(c);
L_9a7590:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9a759c:;
    c->r[2] = 0x10917d8u;
    c->r[1] = 0x4b2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a75b0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x358cu;
    goto L_9a75e0;
L_9a75c0:;
    c->r[2] = 0x10917b4u;
    c->r[1] = 0x4b2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a75d4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x3570u;
L_9a75e0:;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[3] = 0x1u;
    c->r[0] = c->r[2] & ~sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_9a75f4:;
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a7600u; f_9a5fb0(c);
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9a7650; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a76a0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x14u;
    c->r[14] = 0x9a7620u; f_85cba0(c);
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a76a0; }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x4b0u;
    c->r[1] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    goto L_9a76a0;
L_9a7650:;
    c->r[0] = c->r[4];
    c->r[1] = 0x13u;
    c->r[14] = 0x9a765cu; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a7668; }
    c->r[14] = 0x9a7668u; f_797d38(c);
L_9a7668:;
    c->r[0] = c->r[4];
    c->r[1] = 0x13u;
    c->r[14] = 0x9a7674u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a7690; }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x4b0u;
    c->r[1] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0x9a7690u; f_797d24(c);
L_9a7690:;
    c->r[0] = 0x56u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a769cu; f_85e794(c);
    c->r[14] = 0x9a76a0u; f_85e938(c);
L_9a76a0:;
    c->r[5] = 0x0u;
L_9a76a4:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a76b0u; f_74f260(c);
    goto L_9a7580;
L_9a76b4:;
    c->r[2] = 0x10916c0u;
    c->r[1] = 0x4b2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a76c8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x358cu;
    goto L_9a76f8;
L_9a76d8:;
    c->r[2] = 0x109169cu;
    c->r[1] = 0x4b2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a76ecu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x3570u;
L_9a76f8:;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[3] = 0x1u;
    c->r[0] = c->r[2] & ~sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_9a770c:;
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[14] = 0x9a7718u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[1] = c->r[1] | 0x2u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a7734u; f_9a5fb0(c);
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a776c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x13u;
    c->r[14] = 0x9a774cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a7768; }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x4b0u;
    c->r[1] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0x9a7768u; f_797d24(c);
L_9a7768:;
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
L_9a776c:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9a6f18; }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a6f18; }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x4b0u;
    c->r[1] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    goto L_9a6f18;
}
void f_9a77e8(Cpu *restrict c) {
    FN_ENTER(0x9a77e8u);
L_9a77e8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_9a78f4; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x9a780cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x9a7820u: goto L_9a7820; case 0x9a78fcu: goto L_9a78fc; case 0x9a797cu: goto L_9a797c; case 0x9a7a78u: goto L_9a7a78; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9a7820:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x2u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a7cb8; }
    c->r[5] = c->r[4] + 0x178u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a7bf8; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a7848u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a7cc4; }
    c->r[0] = 0x188u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[5] = ea; c->r[8] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a786cu; f_9a5b40(c);
    c->r[0] = 0x18cu;
    { uint32_t r = c->r[6] * c->r[8] + c->r[7]; c->r[2] = r; }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_CS) { c->r[2] = c->r[0] + c->r[1]; }
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[5]; ST16(ea, c->r[2]); }
    c->r[1] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = c->r[4] + 0x185u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4acu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a78e8; }
    c->r[2] = 0x10914c0u;
    c->r[0] = 0x4b2u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a78c8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x3598u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[2] & ~sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[0] = v; }
L_9a78e8:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0x9a78f4u; f_9a5fb0(c);
L_9a78f4:;
    c->r[5] = 0x0u;
    goto L_9a7cb8;
L_9a78fc:;
    c->r[5] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x410u; ST32(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] - 0x390u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x38cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[6] = c->r[0] - 0xau;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a7924u; f_74fa74(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a7b40; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a7cb8; }
    c->r[0] = 0x2u;
    c->r[5] = 0x0u;
    c->r[3] = 0x58u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x39u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x404u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x1au;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = 0x14u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a7978u; f_85e5bc(c);
    goto L_9a7b34;
L_9a797c:;
    c->r[5] = c->r[4];
    c->r[7] = 0x0u;
    c->r[2] = 0x80u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[5] + 0x39u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x47u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x9a79a0u; f_74fd94(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a7b8c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a7bc0; }
    c->r[0] = 0x3u;
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a79c4u; f_85cbc4(c);
    c->r[0] = 0x10913b0u;
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = 0x9a79d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u - c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a79e0u; f_723194(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a79ecu; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a7a08; }
    c->r[1] = 0x1091388u;
    { uint32_t ea = 0x9a7a00u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a7a08u; f_7d0d60(c);
L_9a7a08:;
    c->r[0] = 0x406u;
    c->r[1] = 0x4b0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + (c->r[7] << 4);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x109135cu;
    { uint32_t ea = 0x9a7a2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a7a30u; f_725e44(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x6du;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[14] = 0x9a7a5cu; f_85e5bc(c);
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a7a68u; f_85e794(c);
    c->r[14] = 0x9a7a6cu; f_85e938(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xau;
    goto L_9a7bbc;
L_9a7a78:;
    { uint32_t ea = c->r[4] + 0x81u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a7cb8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a7a90u; f_99f314(c);
    { uint32_t ea = c->r[4] + 0x4fu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a7b18; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a7ab4u; f_9a5b40(c);
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + (c->r[1] << 4);
    { uint32_t ea = c->r[0] + 0x4acu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a7b00; }
    c->r[2] = 0x10912a8u;
    c->r[1] = 0x4b2u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a7ae0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x3598u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[2] & ~sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
L_9a7b00:;
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9a7b14u; f_9a5fb0(c);
    c->r[5] = 0x0u;
L_9a7b18:;
    c->r[0] = c->r[4] + 0x178u;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a7b24u; f_74ecc0(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a7b30u; f_85e794(c);
    c->r[14] = 0x9a7b34u; f_85e938(c);
L_9a7b34:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    goto L_9a7cb4;
L_9a7b40:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x178u;
    c->r[14] = 0x9a7b5cu; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x9a7b68u; f_85cbc4(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40f00000u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x9a7b80u; f_9a5fb0(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    goto L_9a7cb4;
L_9a7b8c:;
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    c->r[3] = 0x44u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x404u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x9a7bb4u; f_85e5bc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
L_9a7bbc:;
    c->r[14] = 0x9a7bc0u; f_74f260(c);
L_9a7bc0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_9a7cb8; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[3] = 0x58u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x14u;
    c->r[2] = 0x1au;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[14] = 0x9a7bf4u; f_85e5bc(c);
    goto L_9a7cb8;
L_9a7bf8:;
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x4b0u;
    c->r[0] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] + 0x4b4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x1091170u;
    { uint32_t ea = 0x9a7c18u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a7c1cu; f_725e38(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[14] = 0x9a7c2cu; f_7231c4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a7ca8; }
    c->r[7] = f_subs(c, 0x63u, c->r[7]);
    if (COND_EQ) { goto L_9a7ca8; }
    c->r[8] = 0x1u;
    c->r[0] = 0x188u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x185u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a7c68u; f_74ecc0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x9a7c74u; f_85cba0(c);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_9a7ccc; }
    c->r[0] = 0x1091100u;
    { uint32_t ea = 0x9a7c88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_HI) { goto L_9a7cd0; }
    c->r[0] = udiv32(c->r[1], c->r[9]);
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_CS) { c->r[0] = 0x63u; }
    goto L_9a7cd0;
L_9a7ca8:;
    c->r[5] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
L_9a7cb4:;
    c->r[14] = 0x9a7cb8u; f_74f260(c);
L_9a7cb8:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9a7cc4:;
    c->r[5] = 0x0u;
    goto L_9a7cb8;
L_9a7ccc:;
    c->r[0] = 0x63u;
L_9a7cd0:;
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[5] = 0x0u;
    c->r[1] = 0x406u;
    c->r[2] = 0x1au;
    c->r[3] = 0x44u;
    { uint32_t ea = c->r[4] + 0x404u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[8]); }
    if (COND_HI) { c->r[0] = c->r[7]; }
    c->r[1] = 0x408u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9a7d10u; f_85e5bc(c);
    goto L_9a7b34;
}
void f_9a7d30(Cpu *restrict c) {
    FN_ENTER(0x9a7d30u);
L_9a7d30:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x3cu;
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[1] = 0x4b0u;
    { uint32_t ea = c->r[4] + 0x4acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x4c0u;
    { uint32_t ea = c->r[4] + 0x4bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x4d0u;
    { uint32_t ea = c->r[4] + 0x4ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x4e0u;
    { uint32_t ea = c->r[4] + 0x4dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x4f0u;
    { uint32_t ea = c->r[4] + 0x4ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x500u;
    { uint32_t ea = c->r[4] + 0x4fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x510u;
    { uint32_t ea = c->r[4] + 0x50cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x520u;
    { uint32_t ea = c->r[4] + 0x51cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[1] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9a81c0; }
    c->r[7] = c->r[4] + (c->r[3] << 1);
    c->r[2] = 0x188u;
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x46u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x178u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9a8190; }
    { uint32_t r = c->r[3] * c->r[2]; c->r[1] = r; }
    c->r[2] = 0x8u;
    c->r[6] = 0x0u;
    c->r[11] = 0x1u;
    c->r[10] = 0x0u;
    c->r[2] = c->r[2] + (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1090dc0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1090f70u;
    { uint32_t ea = 0x9a7e14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a7e18u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1090f5cu;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1090f58u;
    { uint32_t ea = 0x9a7e2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a7e30u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1090f44u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1090f6cu;
    { uint32_t ea = 0x9a7e44u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a7e48u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1090d7cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = 0x9a7e58u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1090f24u;
    { uint32_t ea = 0x9a7e64u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1090d64u;
    { uint32_t ea = 0x9a7e70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1090f0cu;
    { uint32_t ea = 0x9a7e7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1090f00u;
    { uint32_t ea = 0x9a7e88u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1090ef4u;
    { uint32_t ea = 0x9a7e94u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    goto L_9a7f08;
L_9a7e98:;
    c->r[9] = 0x1u;
L_9a7e9c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[6] >> 5);
    c->r[0] = c->r[6] & 0x1fu;
    c->r[14] = 0x1u;
    c->r[11] = 0x1u;
    c->r[12] = sh_lsl(c->r[14], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + (c->r[2] << 2);
    c->r[2] = 0x3584u;
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a7ef4; }
    c->r[14] = c->r[3];
    c->r[0] = 0x3588u;
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[14] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[12];
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    c->r[0] = 0x358cu;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[12];
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
L_9a7ef4:;
    c->r[0] = c->r[2] | c->r[12];
    (void)f_subs(c, c->r[9], 0x1u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_9a8040; }
    goto L_9a8174;
L_9a7f08:;
    c->r[1] = c->r[6];
    c->r[14] = 0x9a7f10u; f_6c9528(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9a8174; }
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a7f70; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9a8004; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a8044; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[5] >> 5) & 0x7ffu;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = c->r[5] & 0x1fu;
    { uint32_t ea = c->r[0] + 0x9d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[11], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a8174; }
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x9a7f6cu; f_9a84a0(c);
    goto L_9a8038;
L_9a7f70:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5] & 0x1fu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[5] >> 5) & 0x7ffu;
    c->r[1] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x994u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[11], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a8174; }
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD16(ea); c->r[8] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x9a7f9cu; f_724d18(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_9a8040; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_9a7e98; }
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_NE) { goto L_9a7ff4; }
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x9a7fc4u; f_23c9d4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a7ff4; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0xa0u;
    c->r[2] = (c->r[0] >> 5);
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0xf54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[1] & sh_lsl(c->r[11], c->r[0]);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { c->r[9] = 0x1u; }
L_9a7ff4:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { c->r[9] = 0x1u; }
    if (COND_NE) { goto L_9a7e9c; }
    goto L_9a8174;
L_9a8004:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[5] >> 5) & 0x7ffu;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = c->r[5] & 0x1fu;
    { uint32_t ea = c->r[0] + 0xbecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[11], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a8174; }
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x9a8038u; f_9a85ac(c);
L_9a8038:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a8174; }
L_9a8040:;
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
L_9a8044:;
    c->r[2] = c->r[4] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + 0x46u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + 0x46u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_9a8174; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_9a8174; }
    c->r[8] = c->r[4] + (c->r[10] << 4);
    c->r[1] = 0x4b2u;
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[8] + c->r[1]; ST16(ea, c->r[6]); }
    c->r[1] = 0x4b0u;
    { uint32_t ea = c->r[8] + c->r[1]; ST16(ea, c->r[5]); }
    c->r[1] = 0x4acu;
    c->r[9] = c->r[8] + c->r[1];
    if (COND_EQ) { goto L_9a80d4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9a8108; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a8144; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a80b4u; f_75bc7c(c);
    { uint32_t ea = c->r[8] + 0x4b8u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a80c8u; f_724ca0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9a8138; }
    goto L_9a8144;
L_9a80d4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5] + 0x14u;
    c->r[1] = 0x1du;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a80e8u; f_75bc7c(c);
    { uint32_t ea = c->r[8] + 0x4b8u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a80fcu; f_724d40(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9a8138; }
    goto L_9a8144;
L_9a8108:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xau;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a811cu; f_75bc7c(c);
    { uint32_t ea = c->r[8] + 0x4b8u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8130u; f_724cf0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a8144; }
L_9a8138:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
L_9a8144:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8158u; f_7231c4(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x2u;
    c->r[10] = c->r[10] + 0x1u;
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
L_9a8174:;
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_9a7f08; }
L_9a8190:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x8u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9a81a8u; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x3u;
    c->r[0] = c->r[4] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + 0x46u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a81c0u; f_74ee34(c);
L_9a81c0:;
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[14] = 0x9a81ccu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[1] = c->r[1] | 0x2u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); } }
    c->r[13] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9a8214(Cpu *restrict c) {
    FN_ENTER(0x9a8214u);
L_9a8214:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a82d0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x14u;
    c->r[14] = 0x9a8238u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_NE) { goto L_9a8274; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9a8250u; f_7500e4(c);
    c->r[6] = c->r[0];
    c->r[14] = 0x9a8258u; f_85f98c(c);
    { uint32_t r = c->r[0] & c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a8268; }
    c->r[6] = c->r[6] | 0x8u;
    goto L_9a8274;
L_9a8268:;
    c->r[14] = 0x9a826cu; f_85f9dc(c);
    { uint32_t r = c->r[0] & c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = c->r[6] | 0x4u; }
L_9a8274:;
    c->r[0] = 0x18au;
    c->r[1] = 0x188u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[1] = c->r[1] + 0x1u;
    if (COND_HI) { c->r[7] = 0xa0u; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_9a82a4; }
    { uint32_t ea = c->r[4] + 0x186u; uint32_t v = LD8(ea); c->r[0] = v; }
    goto L_9a82b4;
L_9a82a4:;
    c->r[0] = c->r[4] + 0x178u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9a82b4u; rt_dispatch(c);
L_9a82b4:;
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { c->r[7] = c->r[7] | 0x50u; }
    c->r[0] = c->r[7] & c->r[5];
    { uint32_t ea = c->r[1] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; ST32(ea, c->r[0]); }
L_9a82d0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9a82d4(Cpu *restrict c) {
    FN_ENTER(0x9a82d4u);
L_9a82d4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x550u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x54cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x9a82f0u; f_74ff80(c);
    c->r[0] = 0x560u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x55cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x9a8304u; f_74ff80(c);
    c->r[0] = 0x570u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x56cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x9a8318u; f_74ff80(c);
    c->r[0] = 0x1090a60u;
    { uint32_t ea = c->r[4] + 0x530u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a8328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a832cu; f_723194(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[5] = 0x1u;
    c->r[14] = 0x9a833cu; f_85cba0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a8358; }
    c->r[1] = 0x1090a38u;
    { uint32_t ea = 0x9a8350u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9a8358u; f_7d0d60(c);
L_9a8358:;
    c->r[0] = 0x1090a20u;
    { uint32_t ea = c->r[4] + 0x52cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a8368u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 5);
    c->r[1] = c->r[1] & 0x1fu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[2] << 2);
    c->r[2] = 0x35a8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[2] | sh_lsl(c->r[5], c->r[1]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1090d50u;
    { uint32_t ea = 0x9a8390u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9a83b0(Cpu *restrict c) {
    FN_ENTER(0x9a83b0u);
L_9a83b0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[1];
    c->r[1] = 0x1u;
    c->r[8] = c->r[3];
    c->r[6] = c->r[2];
    c->r[7] = c->r[0];
    c->r[14] = 0x9a83ccu; f_85cba0(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9a8408; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = c->r[5];
    c->r[14] = 0x9a83e8u; f_7d0d7c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = c->r[6];
    c->r[14] = 0x9a83f8u; f_7d0d7c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = c->r[8];
    c->r[14] = 0x9a8408u; f_7d0d7c(c);
L_9a8408:;
    c->r[0] = c->r[7];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a8414u; f_85cb3c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9a849c; }
    c->r[0] = c->r[7];
    c->r[14] = 0x9a8428u; f_83f0b8(c);
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x9a8438u; f_83fd8c(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9a8460; }
    c->r[0] = c->r[7];
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[14] = 0x9a8450u; f_83fd8c(c);
    c->r[6] = 0x2u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9a846c; }
    goto L_9a8480;
L_9a8460:;
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9a8480; }
L_9a846c:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = 0x2u;
    c->r[14] = 0x9a847cu; f_83fd8c(c);
    c->r[6] = c->r[6] + 0x1u;
L_9a8480:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_9a849c; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_83fd8c(c);
L_9a849c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9a84a0(Cpu *restrict c) {
    FN_ENTER(0x9a84a0u);
L_9a84a0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x10908ccu;
    c->r[7] = c->r[3];
    c->r[6] = c->r[2];
    c->r[4] = c->r[1];
    { uint32_t ea = 0x9a84bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a84c0u; f_724c78(c);
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a8598; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_EQ) { goto L_9a8524; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_9a8538; }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9a84ecu; f_23c9d4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a8598; }
    c->r[1] = 0x10908a8u;
    c->r[0] = c->r[0] - 0xaau;
    c->r[2] = (c->r[0] >> 5);
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = 0x9a850cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + 0xf58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a8538; }
    goto L_9a8598;
L_9a8524:;
    c->r[0] = 0x14u;
    c->r[14] = 0x9a852cu; f_7614c0(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a8598; }
L_9a8538:;
    c->r[1] = 0x1090830u;
    c->r[2] = (c->r[4] >> 5);
    c->r[3] = 0x34a0u;
    c->r[7] = c->r[4] & 0x1fu;
    c->r[5] = 0x1u;
    c->r[0] = sh_lsl(c->r[5], c->r[7]);
    { uint32_t ea = 0x9a8558u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + (c->r[2] << 2);
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[5], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a8590; }
    c->r[7] = 0x34d8u;
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[6] + c->r[7]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[0];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    c->r[7] = 0x3510u;
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[0];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
L_9a8590:;
    c->r[0] = c->r[3] | c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_9a8598:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9a85ac(Cpu *restrict c) {
    FN_ENTER(0x9a85acu);
L_9a85ac:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x10907c0u;
    c->r[7] = c->r[3];
    c->r[6] = c->r[2];
    c->r[4] = c->r[1];
    { uint32_t ea = 0x9a85c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a85ccu; f_724cc8(c);
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9a91b4; }
    c->r[8] = 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[5] = 0x1u;
    if (COND_EQ) { goto L_9a9158; }
    c->r[2] = c->r[7] - 0x1u;
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[2], 0x3eu);
    if (COND_HI) { goto L_9a9000; }
    c->r[0] = 0x10909b0u;
    c->r[1] = 0x3e2u;
    c->r[3] = 0x3e0u;
    c->r[2] = (c->r[2] << 2);
    { uint32_t ea = 0x9a8610u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x9a8620u + 0x4u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x9a8720u: goto L_9a8720; case 0x9a8768u: goto L_9a8768; case 0x9a8774u: goto L_9a8774; case 0x9a8778u: goto L_9a8778; case 0x9a8784u: goto L_9a8784; case 0x9a879cu: goto L_9a879c; case 0x9a87b4u: goto L_9a87b4; case 0x9a87ccu: goto L_9a87cc; case 0x9a87d8u: goto L_9a87d8; case 0x9a87f8u: goto L_9a87f8; case 0x9a8814u: goto L_9a8814; case 0x9a887cu: goto L_9a887c; case 0x9a88e4u: goto L_9a88e4; case 0x9a894cu: goto L_9a894c; case 0x9a89b4u: goto L_9a89b4; case 0x9a8a1cu: goto L_9a8a1c; case 0x9a8a84u: goto L_9a8a84; case 0x9a8aecu: goto L_9a8aec; case 0x9a8b54u: goto L_9a8b54; case 0x9a8bbcu: goto L_9a8bbc; case 0x9a8c24u: goto L_9a8c24; case 0x9a8c8cu: goto L_9a8c8c; case 0x9a8cf4u: goto L_9a8cf4; case 0x9a8d5cu: goto L_9a8d5c; case 0x9a8d80u: goto L_9a8d80; case 0x9a8da4u: goto L_9a8da4; case 0x9a8dc8u: goto L_9a8dc8; case 0x9a8decu: goto L_9a8dec; case 0x9a8e54u: goto L_9a8e54; case 0x9a8ebcu: goto L_9a8ebc; case 0x9a8f24u: goto L_9a8f24; case 0x9a8f3cu: goto L_9a8f3c; case 0x9a8f48u: goto L_9a8f48; case 0x9a8f54u: goto L_9a8f54; case 0x9a8f64u: goto L_9a8f64; case 0x9a8f7cu: goto L_9a8f7c; case 0x9a8f9cu: goto L_9a8f9c; case 0x9a8fb8u: goto L_9a8fb8; case 0x9a8fd8u: goto L_9a8fd8; case 0x9a9000u: goto L_9a9000; case 0x9a901cu: goto L_9a901c; case 0x9a9084u: goto L_9a9084; case 0x9a90ecu: goto L_9a90ec; case 0x9a91bcu: goto L_9a91bc; case 0x9a9224u: goto L_9a9224; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9a8720:;
    c->r[0] = c->r[6];
    c->r[1] = 0x2u;
    c->r[14] = 0x9a872cu; f_23c9d4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a9000; }
    c->r[1] = 0x1090668u;
    c->r[0] = c->r[0] - 0x50u;
    c->r[2] = (c->r[0] >> 5);
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = 0x9a874cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + 0xf48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[1] & sh_lsl(c->r[2], c->r[0]);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[5] = 0x1u; }
    goto L_9a9000;
L_9a8768:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x2u);
    goto L_9a8f5c;
L_9a8774:;
    c->r[0] = c->r[1] | c->r[0];
L_9a8778:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    goto L_9a8f5c;
L_9a8784:;
    (void)f_subs(c, c->r[1], 0x1u);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    if (COND_HI) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x2u);
    goto L_9a8f90;
L_9a879c:;
    (void)f_subs(c, c->r[1], 0x2u);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    if (COND_HI) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x3u);
    goto L_9a8f90;
L_9a87b4:;
    (void)f_subs(c, c->r[1], 0x3u);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    if (COND_HI) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x4u);
    goto L_9a8f90;
L_9a87cc:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[1], 0x4u);
    goto L_9a8f5c;
L_9a87d8:;
    c->r[0] = 0x10905a0u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x9a87e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x88fau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    goto L_9a8fd0;
L_9a87f8:;
    c->r[0] = 0x1090580u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x9a8808u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0xe5u;
    goto L_9a8fd0;
L_9a8814:;
    c->r[0] = 0x1092038u;
    { uint32_t ea = 0x9a8820u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8824u; f_3c9378(c);
    c->r[0] = 0x10920acu;
    c->r[2] = 0x1092148u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a883cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8840u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8844:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x38u);
    if (COND_NE) { goto L_9a886c; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a886c:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8844; }
    goto L_9a91b4;
L_9a887c:;
    c->r[0] = 0x1091fd0u;
    { uint32_t ea = 0x9a8888u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a888cu; f_3c9378(c);
    c->r[0] = 0x1092044u;
    c->r[2] = 0x10920e0u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a88a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a88a8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a88ac:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1bu);
    if (COND_NE) { goto L_9a88d4; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a88d4:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a88ac; }
    goto L_9a91b4;
L_9a88e4:;
    c->r[0] = 0x1091f68u;
    { uint32_t ea = 0x9a88f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a88f4u; f_3c9378(c);
    c->r[0] = 0x1091fdcu;
    c->r[2] = 0x1092078u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a890cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8910u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8914:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x35u);
    if (COND_NE) { goto L_9a893c; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a893c:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8914; }
    goto L_9a91b4;
L_9a894c:;
    c->r[0] = 0x1091f00u;
    { uint32_t ea = 0x9a8958u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a895cu; f_3c9378(c);
    c->r[0] = 0x1091f74u;
    c->r[2] = 0x1092010u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a8974u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8978u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a897c:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x3cu);
    if (COND_NE) { goto L_9a89a4; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a89a4:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a897c; }
    goto L_9a91b4;
L_9a89b4:;
    c->r[0] = 0x1091e98u;
    { uint32_t ea = 0x9a89c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a89c4u; f_3c9378(c);
    c->r[0] = 0x1091f0cu;
    c->r[2] = 0x1091fa8u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a89dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a89e0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a89e4:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_NE) { goto L_9a8a0c; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a8a0c:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a89e4; }
    goto L_9a91b4;
L_9a8a1c:;
    c->r[0] = 0x1091e30u;
    { uint32_t ea = 0x9a8a28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8a2cu; f_3c9378(c);
    c->r[0] = 0x1091ea4u;
    c->r[2] = 0x1091f40u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a8a44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8a48u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8a4c:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x3eu);
    if (COND_NE) { goto L_9a8a74; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a8a74:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8a4c; }
    goto L_9a91b4;
L_9a8a84:;
    c->r[0] = 0x1091dc8u;
    { uint32_t ea = 0x9a8a90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8a94u; f_3c9378(c);
    c->r[0] = 0x1091e3cu;
    c->r[2] = 0x1091ed8u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a8aacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8ab0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8ab4:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xau);
    if (COND_NE) { goto L_9a8adc; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a8adc:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8ab4; }
    goto L_9a91b4;
L_9a8aec:;
    c->r[0] = 0x1091d60u;
    { uint32_t ea = 0x9a8af8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8afcu; f_3c9378(c);
    c->r[0] = 0x1091dd4u;
    c->r[2] = 0x1091e70u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a8b14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8b18u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8b1c:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xbu);
    if (COND_NE) { goto L_9a8b44; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a8b44:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8b1c; }
    goto L_9a91b4;
L_9a8b54:;
    c->r[0] = 0x1091cf8u;
    { uint32_t ea = 0x9a8b60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8b64u; f_3c9378(c);
    c->r[0] = 0x1091d6cu;
    c->r[2] = 0x1091e08u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a8b7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8b80u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8b84:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x3au);
    if (COND_NE) { goto L_9a8bac; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a8bac:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8b84; }
    goto L_9a91b4;
L_9a8bbc:;
    c->r[0] = 0x1091c90u;
    { uint32_t ea = 0x9a8bc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8bccu; f_3c9378(c);
    c->r[0] = 0x1091d04u;
    c->r[2] = 0x1091da0u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a8be4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8be8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8bec:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x40u);
    if (COND_NE) { goto L_9a8c14; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a8c14:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8bec; }
    goto L_9a91b4;
L_9a8c24:;
    c->r[0] = 0x1091c28u;
    { uint32_t ea = 0x9a8c30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8c34u; f_3c9378(c);
    c->r[0] = 0x1091c9cu;
    c->r[2] = 0x1091d38u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a8c4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8c50u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8c54:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x43u);
    if (COND_NE) { goto L_9a8c7c; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a8c7c:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8c54; }
    goto L_9a91b4;
L_9a8c8c:;
    c->r[0] = 0x1091bc0u;
    { uint32_t ea = 0x9a8c98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8c9cu; f_3c9378(c);
    c->r[0] = 0x1091c34u;
    c->r[2] = 0x1091cd0u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a8cb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8cb8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8cbc:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x42u);
    if (COND_NE) { goto L_9a8ce4; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a8ce4:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8cbc; }
    goto L_9a91b4;
L_9a8cf4:;
    c->r[0] = 0x1091b58u;
    { uint32_t ea = 0x9a8d00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8d04u; f_3c9378(c);
    c->r[0] = 0x1091bccu;
    c->r[2] = 0x1091c68u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a8d1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8d20u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8d24:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x44u);
    if (COND_NE) { goto L_9a8d4c; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a8d4c:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8d24; }
    goto L_9a91b4;
L_9a8d5c:;
    c->r[0] = 0x1091af0u;
    { uint32_t ea = 0x9a8d68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8d6cu; f_3c9378(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a9010; }
    c->r[1] = 0x1u;
    c->r[2] = 0x50u;
    goto L_9a8ff8;
L_9a8d80:;
    c->r[0] = 0x1091accu;
    { uint32_t ea = 0x9a8d8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8d90u; f_3c9378(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a9010; }
    c->r[1] = 0x1u;
    c->r[2] = 0x51u;
    goto L_9a8ff8;
L_9a8da4:;
    c->r[0] = 0x1091aa8u;
    { uint32_t ea = 0x9a8db0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8db4u; f_3c9378(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a9010; }
    c->r[1] = 0x1u;
    c->r[2] = 0x52u;
    goto L_9a8ff8;
L_9a8dc8:;
    c->r[0] = 0x1091a84u;
    { uint32_t ea = 0x9a8dd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8dd8u; f_3c9378(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a9010; }
    c->r[1] = 0x1u;
    c->r[2] = 0x53u;
    goto L_9a8ff8;
L_9a8dec:;
    c->r[0] = 0x1091a60u;
    { uint32_t ea = 0x9a8df8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8dfcu; f_3c9378(c);
    c->r[0] = 0x1091ad4u;
    c->r[2] = 0x1091b70u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a8e14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8e18u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8e1c:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x46u);
    if (COND_NE) { goto L_9a8e44; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a8e44:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8e1c; }
    goto L_9a91b4;
L_9a8e54:;
    c->r[0] = 0x10919f8u;
    { uint32_t ea = 0x9a8e60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8e64u; f_3c9378(c);
    c->r[0] = 0x1091a6cu;
    c->r[2] = 0x1091b08u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a8e7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8e80u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8e84:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1fu);
    if (COND_NE) { goto L_9a8eac; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a8eac:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8e84; }
    goto L_9a91b4;
L_9a8ebc:;
    c->r[0] = 0x1091990u;
    { uint32_t ea = 0x9a8ec8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8eccu; f_3c9378(c);
    c->r[0] = 0x1091a04u;
    c->r[2] = 0x1091aa0u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a8ee4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a8ee8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a8eec:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x26u);
    if (COND_NE) { goto L_9a8f14; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a8f14:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a8eec; }
    goto L_9a91b4;
L_9a8f24:;
    c->r[0] = 0x10901b0u;
    { uint32_t ea = 0x9a8f30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50eu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[0] & 0x1u;
    goto L_9a9000;
L_9a8f3c:;
    c->r[0] = 0x9u;
    c->r[14] = 0x9a8f44u; f_757ac4(c);
    goto L_9a8ffc;
L_9a8f48:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[1], 0x8u);
    goto L_9a8f5c;
L_9a8f54:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x6u);
L_9a8f5c:;
    if (COND_HI) { c->r[5] = 0x1u; }
    goto L_9a9000;
L_9a8f64:;
    (void)f_subs(c, c->r[1], 0x8u);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    if (COND_HI) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x6u);
    goto L_9a8f90;
L_9a8f7c:;
    (void)f_subs(c, c->r[1], 0x9u);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    if (COND_HI) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x7u);
L_9a8f90:;
    if (COND_HI) { c->r[2] = 0x1u; }
    c->r[5] = c->r[2] | c->r[1];
    goto L_9a9000;
L_9a8f9c:;
    c->r[0] = 0x108fddcu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x9a8facu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x3edu;
    goto L_9a8fd0;
L_9a8fb8:;
    c->r[0] = 0x108fdc0u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x9a8fc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x385u;
L_9a8fd0:;
    c->r[14] = 0x9a8fd4u; f_723da4(c);
    goto L_9a8ffc;
L_9a8fd8:;
    c->r[0] = 0x1091874u;
    { uint32_t ea = 0x9a8fe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a8fe8u; f_3c9378(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a9010; }
    c->r[1] = 0x2u;
    c->r[2] = 0x56u;
L_9a8ff8:;
    c->r[14] = 0x9a8ffcu; f_3ac3c0(c);
L_9a8ffc:;
    c->r[5] = c->r[0];
L_9a9000:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[5] = 0x1u; }
    if (COND_NE) { goto L_9a9158; }
    goto L_9a91b4;
L_9a9010:;
    c->r[5] = 0x0u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9a901c:;
    c->r[0] = 0x1091830u;
    { uint32_t ea = 0x9a9028u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a902cu; f_3c9378(c);
    c->r[0] = 0x10918a4u;
    c->r[2] = 0x1091940u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a9044u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a9048u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a904c:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x84u);
    if (COND_NE) { goto L_9a9074; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a9074:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a904c; }
    goto L_9a91b4;
L_9a9084:;
    c->r[0] = 0x10917c8u;
    { uint32_t ea = 0x9a9090u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a9094u; f_3c9378(c);
    c->r[0] = 0x109183cu;
    c->r[2] = 0x10918d8u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a90acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a90b0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a90b4:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x74u);
    if (COND_NE) { goto L_9a90dc; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a90dc:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a90b4; }
    goto L_9a91b4;
L_9a90ec:;
    c->r[0] = 0x1091760u;
    { uint32_t ea = 0x9a90f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a90fcu; f_3c9378(c);
    c->r[0] = 0x10917d4u;
    c->r[2] = 0x1091870u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a9114u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a9118u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a911c:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x73u);
    if (COND_NE) { goto L_9a9144; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9154; }
L_9a9144:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a911c; }
    goto L_9a91b4;
L_9a9154:;
    c->r[5] = 0x1u;
L_9a9158:;
    c->r[1] = 0x108fc14u;
    c->r[2] = (c->r[4] >> 5);
    c->r[3] = 0x3548u;
    c->r[7] = c->r[4] & 0x1fu;
    c->r[0] = sh_lsl(c->r[8], c->r[7]);
    { uint32_t ea = 0x9a9174u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + (c->r[2] << 2);
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[8], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a91ac; }
    c->r[7] = 0x355cu;
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[6] + c->r[7]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[0];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    c->r[7] = 0x3570u;
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[0];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
L_9a91ac:;
    c->r[0] = c->r[3] | c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_9a91b4:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9a91bc:;
    c->r[0] = 0x1091690u;
    { uint32_t ea = 0x9a91c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a91ccu; f_3c9378(c);
    c->r[0] = 0x1091704u;
    c->r[2] = 0x10917a0u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a91e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a91e8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a91ec:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x41u);
    if (COND_NE) { goto L_9a9214; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a928c; }
L_9a9214:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a91ec; }
    goto L_9a91b4;
L_9a9224:;
    c->r[0] = 0x1091628u;
    { uint32_t ea = 0x9a9230u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a9234u; f_3c9378(c);
    c->r[0] = 0x109169cu;
    c->r[2] = 0x1091738u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a924cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a9250u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a9254:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x7bu);
    if (COND_NE) { goto L_9a927c; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a92f4; }
L_9a927c:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a9254; }
    goto L_9a91b4;
L_9a928c:;
    c->r[0] = 0x10915c0u;
    { uint32_t ea = 0x9a9298u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a929cu; f_3c9378(c);
    c->r[0] = 0x1091634u;
    c->r[2] = 0x10916d0u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a92b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a92b8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a92bc:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x82u);
    if (COND_NE) { goto L_9a92e4; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a92fc; }
L_9a92e4:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a92bc; }
    goto L_9a91b4;
L_9a92f4:;
    c->r[5] = 0x1u;
    goto L_9a9158;
L_9a92fc:;
    c->r[0] = 0x1091550u;
    { uint32_t ea = 0x9a9308u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a930cu; f_3c9378(c);
    c->r[0] = 0x10915c4u;
    c->r[2] = 0x1091660u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a9324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a9328u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a932c:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x83u);
    if (COND_NE) { goto L_9a9354; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a9364; }
L_9a9354:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a932c; }
    goto L_9a91b4;
L_9a9364:;
    c->r[0] = 0x10914e8u;
    { uint32_t ea = 0x9a9370u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a9374u; f_3c9378(c);
    c->r[0] = 0x109155cu;
    c->r[2] = 0x10915f8u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9a938cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9a9390u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xf90u;
L_9a9394:;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x81u);
    if (COND_NE) { goto L_9a93bc; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[7] = (c->r[7] >> 14) & 0x3fffu;
    c->r[3] = c->r[3] & 0x3fffu;
    (void)f_adds(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_9a93cc; }
L_9a93bc:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_CC) { goto L_9a9394; }
    goto L_9a91b4;
L_9a93cc:;
    c->r[5] = 0x1u;
    goto L_9a9158;
}
void f_9a952c(Cpu *restrict c) {
    FN_ENTER(0x9a952cu);
L_9a952c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[10] = c->r[0];
    c->r[0] = 0x218u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x215u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x216u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[9] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[9], 0x3u);
    if (COND_EQ) { goto L_9a9664; }
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_EQ) { goto L_9a9670; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_9a9850; }
    c->r[8] = c->r[10] + 0x22cu;
    c->r[1] = 0x8u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[5] = 0x8u;
    c->r[0] = c->r[8];
    c->r[14] = 0x9a9584u; f_74edec(c);
    c->r[0] = 0x1f4u;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x53u);
    if (COND_HI) { goto L_9a95cc; }
    c->r[0] = 0x108f608u;
    { uint32_t ea = 0x9a95b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a95b8u; f_4603fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a95cc; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[14] = 0x9a95c8u; f_2e8478(c);
    c->r[5] = c->r[0];
L_9a95cc:;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x53u);
    if (COND_HI) { goto L_9a9638; }
    c->r[0] = 0x108f5c4u;
    { uint32_t ea = 0x9a95f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a95fcu; f_4603fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a9638; }
    c->r[7] = c->r[0] + 0x4u;
    c->r[4] = 0x0u;
L_9a960c:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[0] = c->r[7];
    c->r[14] = 0x9a9618u; f_2e925c(c);
    (void)f_subs(c, c->r[0], 0x38u);
    if (COND_HI) { goto L_9a962c; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
L_9a962c:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x10u);
    if (COND_NE) { goto L_9a960c; }
L_9a9638:;
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    c->r[2] = 0x8u;
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { c->r[0] = c->r[0] + 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); } }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = c->r[8];
    goto L_9a9894;
L_9a9664:;
    c->r[0] = c->r[10] + 0x22cu;
    c->r[1] = 0x3u;
    goto L_9a9858;
L_9a9670:;
    c->r[5] = c->r[10] + 0x22cu;
    c->r[1] = 0x8u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[4] = 0x8u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9a968cu; f_74edec(c);
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[4]); }
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x53u);
    if (COND_HI) { goto L_9a9868; }
    c->r[0] = 0x108f500u;
    { uint32_t ea = 0x9a96bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a96c0u; f_4603fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a9868; }
    c->r[7] = c->r[0] + 0x4u;
    c->r[1] = 0x0u;
    c->r[0] = c->r[7];
    c->r[14] = 0x9a96d8u; f_2e9e8c(c);
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_HI) { goto L_9a96ec; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
L_9a96ec:;
    c->r[0] = c->r[7];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a96f8u; f_2e9e8c(c);
    (void)f_subs(c, c->r[0], 0x60u);
    if (COND_CS) { goto L_9a970c; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
L_9a970c:;
    c->r[0] = c->r[7];
    c->r[1] = 0x2u;
    c->r[14] = 0x9a9718u; f_2e9e8c(c);
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_HI) { goto L_9a972c; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
L_9a972c:;
    c->r[0] = c->r[7];
    c->r[1] = 0x3u;
    c->r[14] = 0x9a9738u; f_2e9e8c(c);
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_HI) { goto L_9a974c; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
L_9a974c:;
    c->r[0] = c->r[7];
    c->r[1] = 0x4u;
    c->r[14] = 0x9a9758u; f_2e9e8c(c);
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_HI) { goto L_9a976c; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
L_9a976c:;
    c->r[0] = c->r[7];
    c->r[1] = 0x5u;
    c->r[14] = 0x9a9778u; f_2e9e8c(c);
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_HI) { goto L_9a978c; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
L_9a978c:;
    c->r[0] = c->r[7];
    c->r[1] = 0x6u;
    c->r[14] = 0x9a9798u; f_2e9e8c(c);
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_HI) { goto L_9a97ac; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
L_9a97ac:;
    c->r[0] = c->r[7];
    c->r[1] = 0x7u;
    c->r[14] = 0x9a97b8u; f_2e9e8c(c);
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_HI) { goto L_9a97cc; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
L_9a97cc:;
    c->r[0] = c->r[7];
    c->r[1] = 0x8u;
    c->r[14] = 0x9a97d8u; f_2e9e8c(c);
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_HI) { goto L_9a97ec; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
L_9a97ec:;
    c->r[0] = c->r[7];
    c->r[1] = 0x9u;
    c->r[14] = 0x9a97f8u; f_2e9e8c(c);
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_HI) { goto L_9a980c; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
L_9a980c:;
    c->r[0] = c->r[7];
    c->r[1] = 0xau;
    c->r[14] = 0x9a9818u; f_2e9e8c(c);
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_HI) { goto L_9a982c; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
L_9a982c:;
    c->r[0] = c->r[7];
    c->r[1] = 0xbu;
    c->r[14] = 0x9a9838u; f_2e9e8c(c);
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_HI) { goto L_9a9868; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); }
    goto L_9a986c;
L_9a9850:;
    c->r[0] = c->r[10] + 0x22cu;
    c->r[1] = 0x1u;
L_9a9858:;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x9a9864u; f_74edec(c);
    goto L_9a989c;
L_9a9868:;
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
L_9a986c:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[2] = 0x8u;
    c->r[3] = 0x8u;
    (void)f_subs(c, c->r[1], 0x8u);
    c->r[1] = 0x7u;
    if (COND_EQ) { c->r[0] = 0x9u; }
    if (COND_EQ) { { uint32_t ea = c->r[10] + 0x40u; ST8(ea, c->r[0]); } }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = c->r[5];
L_9a9894:;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a989cu; f_751bf4(c);
L_9a989c:;
    c->r[0] = c->r[9] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_9a9900; }
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + 0x1f2u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[6] = c->r[7];
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[6] - 0x1u; uint32_t v = LD8(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[4] = ea; c->r[2] = v; }
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x108f2e8u;
    { uint32_t ea = 0x9a98d4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a98d8u; f_460440(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a98e4u; f_45d4d4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[1] = 0x1u;
    if (COND_EQ) { c->r[0] = 0x49u; }
    if (COND_NE) { c->r[0] = 0x48u; }
    c->r[14] = 0x9a98f8u; f_85e794(c);
    c->r[14] = 0x9a98fcu; f_85e938(c);
    goto L_9a9924;
L_9a9900:;
    c->r[0] = 0xceu;
    c->r[1] = 0x1u;
    c->r[14] = 0x9a990cu; f_85e794(c);
    c->r[0] = 0x1f2u;
    c->r[7] = c->r[10] + c->r[0];
    c->r[0] = 0x1f1u;
    c->r[6] = c->r[10] + c->r[0];
    c->r[14] = 0x9a9920u; f_85e938(c);
    c->r[4] = c->r[10] + 0x1f4u;
L_9a9924:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[5] = c->r[10] + 0x208u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x108f274u;
    { uint32_t ea = 0x9a9948u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a994cu; f_460440(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[10] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a9974; }
    c->r[0] = 0x108f254u;
    { uint32_t ea = 0x9a9968u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a996cu; f_45d4d4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a99bc; }
L_9a9974:;
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x9a9980u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x22cu;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a998cu; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xfu;
    (void)f_subs(c, c->r[9], 0x3u);
    if (COND_NE) { goto L_9a99b4; }
    c->r[14] = 0x9a99a0u; f_85cbc4(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_85cba0(c);
L_9a99b4:;
    c->r[14] = 0x9a99b8u; f_85cba0(c);
    goto L_9a99e0;
L_9a99bc:;
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[14] = 0x9a99c8u; f_74ecc0(c);
    c->r[0] = c->r[10] + 0x22cu;
    c->r[1] = 0x2u;
    c->r[14] = 0x9a99d4u; f_74ecc0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0xfu;
    c->r[14] = 0x9a99e0u; f_85cbc4(c);
L_9a99e0:;
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_85cbc4(c);
}
void f_9a9a0c(Cpu *restrict c) {
    FN_ENTER(0x9a9a0cu);
L_9a9a0c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x9a9a20u; f_38e4ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a9a34; }
    { uint32_t ea = c->r[4] + 0x325u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x80u;
    { uint32_t ea = c->r[4] + 0x325u; ST8(ea, c->r[0]); }
L_9a9a34:;
    c->r[5] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[1] = 0x0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9a9a44u; f_74fe48(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GT) { goto L_9a9a58; }
    { uint32_t ea = c->r[4] + 0x325u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x325u; ST8(ea, c->r[0]); }
L_9a9a58:;
    c->r[0] = 0x1090dc0u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x9a9a68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a9a6cu; f_39c21c(c);
    c->r[1] = 0x328u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[14] = 0x9a9a80u; f_74fe48(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GT) { goto L_9a9a94; }
    { uint32_t ea = c->r[4] + 0x325u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[4] + 0x325u; ST8(ea, c->r[0]); }
L_9a9a94:;
    c->r[0] = 0x1090d78u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x9a9aa4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a9aa8u; f_39974c(c);
    c->r[1] = 0x32au;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9a9abc(Cpu *restrict c) {
    FN_ENTER(0x9a9abcu);
L_9a9abc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x108f2acu;
    c->r[4] = c->r[1];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x9a9adcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_9a9af0; }
    c->r[1] = c->r[4];
    c->r[14] = 0x9a9aecu; f_724c28(c);
    goto L_9a9af8;
L_9a9af0:;
    c->r[1] = c->r[4];
    c->r[14] = 0x9a9af8u; f_724bd8(c);
L_9a9af8:;
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9a9bc8; }
    c->r[0] = c->r[6];
    c->r[14] = 0x9a9b10u; f_761b28(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x108f258u;
    c->r[2] = (c->r[4] >> 5);
    { uint32_t ea = 0x9a9b30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[4] & 0x1fu;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9a9b7c; }
    c->r[3] = c->r[3] + (c->r[2] << 2);
    c->r[6] = 0x3494u;
    c->r[0] = 0x1u;
    c->r[1] = sh_lsl(c->r[0], c->r[5]);
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[6] = v; }
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[0], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a9bc0; }
    c->r[5] = 0x3498u;
    c->r[4] = c->r[3];
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    c->r[5] = c->r[5] | c->r[1];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    c->r[5] = 0x349cu;
    goto L_9a9bb4;
L_9a9b7c:;
    c->r[3] = c->r[3] + (c->r[2] << 2);
    c->r[6] = 0x3488u;
    c->r[0] = 0x1u;
    c->r[1] = sh_lsl(c->r[0], c->r[5]);
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[6] = v; }
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[0], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a9bc0; }
    c->r[5] = 0x348cu;
    c->r[4] = c->r[3];
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    c->r[5] = c->r[5] | c->r[1];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    c->r[5] = 0x3490u;
L_9a9bb4:;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[5] = v; }
    c->r[5] = c->r[5] | c->r[1];
    { uint32_t ea = c->r[3]; ST32(ea, c->r[5]); }
L_9a9bc0:;
    c->r[1] = c->r[6] | c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_9a9bc8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9a9bd4(Cpu *restrict c) {
    FN_ENTER(0x9a9bd4u);
L_9a9bd4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[9] = c->r[0];
    c->r[0] = 0x218u;
    c->r[8] = c->r[1];
    c->r[1] = 0x6c34u;
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD16(ea); c->r[6] = ea; c->r[7] = v; }
    c->r[0] = 0x108f714u;
    { uint32_t ea = c->r[6] - 0x3u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] - 0x2u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = 0x9a9c08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[8];
    c->r[0] = c->r[6] - 0x10u;
    c->r[14] = 0x9a9c18u; f_74ee98(c);
    { uint32_t r = c->r[4] * c->r[7] + c->r[5]; c->r[0] = r; }
    { uint32_t ea = c->r[6] - 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] - 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_NE) { goto L_9a9d0c; }
    c->r[0] = 0x108f6ccu;
    c->r[1] = 0x6c3cu;
    c->r[5] = c->r[9] + 0x22cu;
    { uint32_t ea = 0x9a9c50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[8];
    c->r[0] = c->r[5];
    c->r[14] = 0x9a9c60u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a9d3c; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xa0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a9ce4; }
    c->r[6] = 0x8u;
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_EQ) { goto L_9a9cc0; }
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[9] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x53u);
    if (COND_HI) { goto L_9a9cc0; }
    c->r[0] = 0x108ef14u;
    { uint32_t ea = 0x9a9ca8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a9cacu; f_4603fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a9cc0; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[14] = 0x9a9cbcu; f_2e8478(c);
    c->r[6] = c->r[0];
L_9a9cc0:;
    c->r[0] = 0x23cu;
    c->r[2] = 0x7u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = c->r[5];
    c->r[2] = 0x8u;
    c->r[14] = 0x9a9ce4u; f_751bf4(c);
L_9a9ce4:;
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[9] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[9];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_9a41e8(c);
L_9a9d0c:;
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[9] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[9];
    c->r[14] = 0x9a9d2cu; f_9a41e8(c);
    c->r[0] = c->r[9];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_9a952c(c);
L_9a9d3c:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_9a9d50(Cpu *restrict c) {
    FN_ENTER(0x9a9d50u);
L_9a9d50:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9a9d74; }
    c->r[0] = 0x20000u;
    c->r[0] = c->r[0] & (c->r[1] << 12);
    c->r[0] = c->r[0] | c->r[1];
    goto L_9a9d78;
L_9a9d74:;
    c->r[0] = c->r[1] | 0x80000u;
L_9a9d78:;
    c->r[1] = 0x108f590u;
    c->r[2] = 0x6c3cu;
    c->r[5] = c->r[4] + 0x22cu;
    { uint32_t ea = 0x9a9d8cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x9a9d9cu; f_74ee98(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xa0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9a9e20; }
    c->r[0] = 0x218u;
    c->r[6] = 0x8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9a9dfc; }
    c->r[0] = 0x1f4u;
    { uint32_t ea = c->r[4] + 0x1f1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1f2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x53u);
    if (COND_HI) { goto L_9a9dfc; }
    c->r[0] = 0x108edd8u;
    { uint32_t ea = 0x9a9de4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9a9de8u; f_4603fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9a9dfc; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[14] = 0x9a9df8u; f_2e8478(c);
    c->r[6] = c->r[0];
L_9a9dfc:;
    c->r[0] = 0x23cu;
    c->r[2] = 0x7u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = c->r[5];
    c->r[2] = 0x8u;
    c->r[14] = 0x9a9e20u; f_751bf4(c);
L_9a9e20:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9a9e30(Cpu *restrict c) {
    FN_ENTER(0x9a9e30u);
L_9a9e30:;
    c->r[0] = 0x108f224u;
    { uint32_t ea = 0x9a9e3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9a9e40(Cpu *restrict c) {
    FN_ENTER(0x9a9e40u);
L_9a9e40:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x10fada8u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x9a9e68u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x68u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x80000000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x9a9ebcu; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x9a9ed4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x9a9eecu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x3cu; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[7]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x42u; ST16(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xc8u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff000000u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + 0x6e00u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = ~0xff0000u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd200u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff500000u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd2d2u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffd20000u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x32cdu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfff00000u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2323u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff230000u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7f7fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff7f0000u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9a9f80(Cpu *restrict c) {
    FN_ENTER(0x9a9f80u);
L_9a9f80:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[1] = 0x1000u;
    c->r[4] = c->r[0];
    c->r[6] = 0x1000u;
    c->r[14] = 0x9a9f94u; f_15efd7c(c);
    c->r[0] = 0xdba99eu;
    c->r[1] = 0x40u;
    c->r[5] = 0x9a9fa4u + c->r[0];
    c->r[0] = 0xdc3523u;
    c->r[2] = c->r[5];
    c->r[3] = 0x9a9fb0u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x9a9fb4u; f_15eff2c(c);
    c->r[1] = 0xdc350bu;
    c->r[7] = 0x0u;
    c->r[0] = c->r[4] + 0x40u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + 0x3fu; ST8(ea, c->r[7]); }
    c->r[3] = 0x9a9fd0u + c->r[1];
    c->r[1] = 0x40u;
    c->r[14] = 0x9a9fd4u; f_15eff2c(c);
    c->r[1] = 0xdc34f6u;
    c->r[0] = c->r[4] + 0x80u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + 0x7fu; ST8(ea, c->r[7]); }
    c->r[3] = 0x9a9fecu + c->r[1];
    c->r[1] = 0x40u;
    c->r[14] = 0x9a9ff0u; f_15eff2c(c);
    c->r[1] = 0xdc34e1u;
    c->r[0] = c->r[4] + 0xc0u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + 0xbfu; ST8(ea, c->r[7]); }
    c->r[3] = 0x9aa008u + c->r[1];
    c->r[1] = 0x40u;
    c->r[14] = 0x9aa00cu; f_15eff2c(c);
    c->r[1] = 0xdc34cbu;
    c->r[0] = c->r[4] + 0x100u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + 0xffu; ST8(ea, c->r[7]); }
    c->r[3] = 0x9aa024u + c->r[1];
    c->r[1] = 0x40u;
    c->r[14] = 0x9aa028u; f_15eff2c(c);
    c->r[1] = 0xdc34b9u;
    c->r[0] = c->r[4] + 0x140u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + 0x13fu; ST8(ea, c->r[7]); }
    c->r[3] = 0x9aa040u + c->r[1];
    c->r[1] = 0x40u;
    c->r[14] = 0x9aa044u; f_15eff2c(c);
    c->r[1] = 0xdc34a8u;
    c->r[0] = c->r[4] + 0x180u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + 0x17fu; ST8(ea, c->r[7]); }
    c->r[3] = 0x9aa05cu + c->r[1];
    c->r[1] = 0x40u;
    c->r[14] = 0x9aa060u; f_15eff2c(c);
    c->r[1] = 0xdc3498u;
    c->r[0] = c->r[4] + 0x1c0u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + 0x1bfu; ST8(ea, c->r[7]); }
    c->r[3] = 0x9aa078u + c->r[1];
    c->r[1] = 0x40u;
    c->r[14] = 0x9aa07cu; f_15eff2c(c);
    c->r[1] = 0xdc3483u;
    c->r[0] = c->r[4] + 0x200u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + 0x1ffu; ST8(ea, c->r[7]); }
    c->r[3] = 0x9aa094u + c->r[1];
    c->r[1] = 0x40u;
    c->r[14] = 0x9aa098u; f_15eff2c(c);
    c->r[1] = 0xdc3471u;
    c->r[0] = c->r[4] + 0x240u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + 0x23fu; ST8(ea, c->r[7]); }
    c->r[3] = 0x9aa0b0u + c->r[1];
    c->r[1] = 0x40u;
    c->r[14] = 0x9aa0b4u; f_15eff2c(c);
    c->r[1] = 0xdc345du;
    c->r[0] = c->r[4] + 0x280u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + 0x27fu; ST8(ea, c->r[7]); }
    c->r[3] = 0x9aa0ccu + c->r[1];
    c->r[1] = 0x40u;
    c->r[14] = 0x9aa0d0u; f_15eff2c(c);
    c->r[1] = 0xdc3444u;
    c->r[0] = c->r[4] + 0x2c0u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + 0x2bfu; ST8(ea, c->r[7]); }
    c->r[3] = 0x9aa0e8u + c->r[1];
    c->r[1] = 0x40u;
    c->r[14] = 0x9aa0ecu; f_15eff2c(c);
    c->r[1] = 0xdc3430u;
    c->r[0] = c->r[4] + 0x300u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + 0x2ffu; ST8(ea, c->r[7]); }
    c->r[3] = 0x9aa104u + c->r[1];
    c->r[1] = 0x40u;
    c->r[14] = 0x9aa108u; f_15eff2c(c);
    c->r[0] = 0xdu;
    { uint32_t ea = c->r[4] + 0x33fu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9aa154(Cpu *restrict c) {
    FN_ENTER(0x9aa154u);
L_9aa154:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1096b64u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x9aa16cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x108f2c8u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] << 2);
    { uint32_t ea = 0x9aa184u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0x9aa194u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9aa1a8(Cpu *restrict c) {
    FN_ENTER(0x9aa1a8u);
L_9aa1a8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1096b14u;
    { uint32_t ea = 0x9aa1bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aa220; }
    c->r[1] = 0x108f270u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x9aa1dcu + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
L_9aa1d8:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9aa214; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9aa1fcu; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x9aa210u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_9aa214:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_9aa1d8; }
L_9aa220:;
    c->r[0] = 0x108f21cu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x9aa230u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9aa23cu; rt_dispatch(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9aa250(Cpu *restrict c) {
    FN_ENTER(0x9aa250u);
L_9aa250:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1096a6cu;
    { uint32_t ea = 0x9aa264u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aa2c8; }
    c->r[1] = 0x108f1c8u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x9aa284u + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
L_9aa280:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9aa2bc; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9aa2a4u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x9aa2b8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_9aa2bc:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_9aa280; }
L_9aa2c8:;
    c->r[0] = 0x108f174u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x9aa2d8u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9aa2e4u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9aa308(Cpu *restrict c) {
    FN_ENTER(0x9aa308u);
L_9aa308:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[8] = c->r[2];
    c->r[5] = c->r[1];
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_9aa38c; }
    c->r[0] = 0x108f114u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x9aa338u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x9aa348u; rt_dispatch(c);
    c->r[7] = c->r[0];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[7] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5] + 0x1u;
    c->pc = c->r[3]; c->r[14] = 0x9aa368u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[7]); }
L_9aa38c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9aa394(Cpu *restrict c) {
    FN_ENTER(0x9aa394u);
L_9aa394:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[8] = c->r[2];
    c->r[5] = c->r[1];
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_9aa420; }
    c->r[0] = 0x108f088u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x9aa3c4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x9aa3d4u; rt_dispatch(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x9aa3e0u; f_15efd88(c);
    { uint32_t ea = c->r[7] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[2];
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0x9aa400u; rt_dispatch(c);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[14] = 0x9aa40cu; f_15efd94(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[7]); }
L_9aa420:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9aa428(Cpu *restrict c) {
    FN_ENTER(0x9aa428u);
L_9aa428:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[9] = c->r[1];
    c->r[8] = ~0x80000000u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9aa474; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = 0x0u;
L_9aa448:;
    { uint32_t ea = c->r[7] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9aa458u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aa470; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_CC) { goto L_9aa448; }
    goto L_9aa474;
L_9aa470:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
L_9aa474:;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_9aa47c(Cpu *restrict c) {
    FN_ENTER(0x9aa47cu);
L_9aa47c:;
    c->r[1] = 0x108efc0u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9aa48cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] >> 23) & 0x3fu;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9aa498(Cpu *restrict c) {
    FN_ENTER(0x9aa498u);
L_9aa498:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x108e6b0u;
    { uint32_t ea = 0x9aa4b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x9aa4bcu; rt_dispatch(c);
    (void)f_adds(c, c->r[0], 0x80000001u);
    if (COND_EQ) { goto L_9aa4e0; }
    c->r[1] = 0x108e694u;
    { uint32_t ea = 0x9aa4d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0xe07fffffu) | ((c->r[0] << 23) & 0x1f800000u);
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[14] = 0x9aa4e0u; f_9af09c(c);
L_9aa4e0:;
    c->r[0] = 0x108ef5cu;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x9aa4f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x200u;
    c->pc = c->r[3]; c->r[14] = 0x9aa500u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x10fb784u;
    { uint32_t ea = 0x9aa510u + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x108e64cu;
    { uint32_t ea = 0x9aa518u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9aa540; }
L_9aa520:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x9aa52cu; f_9aa588(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9aa520; }
    c->r[0] = 0x10fb750u;
    { uint32_t ea = 0x9aa544u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_9aa540:;
    c->r[0] = 0x108ef00u;
    { uint32_t ea = 0x9aa54cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9aa558u; rt_dispatch(c);
    c->r[0] = 0x10fb72cu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x9aa568u + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9aa588(Cpu *restrict c) {
    FN_ENTER(0x9aa588u);
L_9aa588:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[4] = c->r[1];
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x9aa5b0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[6], 0x80000001u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_NE) { goto L_9aa610; }
    c->r[1] = 0x108e594u;
    { uint32_t ea = 0x9aa5d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_EQ) { goto L_9aa610; }
    c->r[0] = 0x108e584u;
    { uint32_t ea = 0x9aa5e0u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
L_9aa5dc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x9aa5f0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[6], 0x80000001u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_NE) { goto L_9aa610; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_9aa5dc; }
L_9aa610:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9aa758; }
    c->r[0] = 0x10fb66cu;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x9aa628u + c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9aa62cu; f_15efd94(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x9aa638u; f_15efd88(c);
    c->r[1] = f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9aa76c; }
    c->r[2] = 0x1096518u;
    c->r[11] = 0x10fb5b0u;
    c->r[6] = ~0x80000000u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9aa658u + c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x108e504u;
    { uint32_t ea = 0x9aa660u + c->r[2]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = 0x108e4fcu;
    { uint32_t ea = 0x9aa668u + c->r[2]; uint32_t v = LD32(ea); c->r[10] = v; }
L_9aa664:;
    c->r[2] = 0x0u;
L_9aa668:;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3cu);
    if (COND_EQ) { goto L_9aa684; }
    (void)f_subs(c, c->r[1], 0x3eu);
    if (COND_EQ) { c->r[2] = c->r[2] + 0x1u; }
    goto L_9aa688;
L_9aa684:;
    c->r[2] = c->r[2] - 0x1u;
L_9aa688:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[2] = 0x0u; }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x3au); }
    if (COND_EQ) { goto L_9aa6a8; }
    c->r[1] = f_subs(c, c->r[3], 0x1u);
    c->r[0] = c->r[3];
    if (COND_NE) { goto L_9aa668; }
    goto L_9aa750;
L_9aa6a8:;
    c->r[0] = c->r[7] + c->r[0];
    (void)f_adds(c, c->r[6], 0x80000001u);
    { uint32_t ea = c->r[0] - 0x2u; ST8(ea, c->r[5]); }
    if (COND_NE) { goto L_9aa758; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x9aa6d0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_adds(c, c->r[6], 0x80000001u);
    if (COND_NE) { goto L_9aa730; }
    { uint32_t ea = 0x9aa6e4u + c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9aa6e8u; f_9aeebc(c);
    c->r[7] = c->r[0];
    c->r[6] = ~0x80000000u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[7], c->r[8]); }
    if (COND_EQ) { goto L_9aa730; }
L_9aa6fc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x9aa710u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_adds(c, c->r[6], 0x80000001u);
    if (COND_NE) { goto L_9aa730; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9aa730; }
    (void)f_subs(c, c->r[7], c->r[10]);
    if (COND_NE) { goto L_9aa6fc; }
L_9aa730:;
    c->r[0] = 0x10fb558u;
    { uint32_t ea = 0x9aa73cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x9aa740u; f_15efd88(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = f_subs(c, c->r[0], 0x1u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_9aa664; }
L_9aa750:;
    (void)f_adds(c, c->r[6], 0x80000001u);
    if (COND_EQ) { goto L_9aa76c; }
L_9aa758:;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0xe07fffffu) | ((c->r[6] << 23) & 0x1f800000u);
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x9aa76cu; f_9af09c(c);
L_9aa76c:;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9aa790; }
L_9aa778:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x9aa784u; f_9aa588(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9aa778; }
L_9aa790:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9aa7b8(Cpu *restrict c) {
    FN_ENTER(0x9aa7b8u);
L_9aa7b8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[3] = c->r[1];
    c->r[1] = 0x10fa4c4u;
    c->r[1] = 0x9aa7ccu + c->r[1];
    c->r[4] = c->r[1] + (c->r[0] << 6);
    c->r[0] = 0xdba166u;
    c->r[1] = 0x40u;
    c->r[2] = 0x9aa7dcu + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x9aa7e0u; f_15eff2c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9aa7f4(Cpu *restrict c) {
    FN_ENTER(0x9aa7f4u);
L_9aa7f4:;
    c->r[1] = 0x10fa48cu;
    c->r[2] = 0x1000u;
    c->r[1] = 0x9aa804u + c->r[1];
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_9aa80c(Cpu *restrict c) {
    FN_ENTER(0x9aa80cu);
L_9aa80c:;
    c->r[0] = 0x10fa478u;
    c->r[0] = 0x9aa818u + c->r[0];
    __attribute__((musttail)) return f_9a9f80(c);
}
void f_9aa81c(Cpu *restrict c) {
    FN_ENTER(0x9aa81cu);
L_9aa81c:;
    c->r[0] = 0x0u;
    return;
}
void f_9aa824(Cpu *restrict c) {
    FN_ENTER(0x9aa824u);
L_9aa824:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x109002cu;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x9aa83cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x3cu; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9aa848u; f_9af1a8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x9aa850u; f_15f004c(c);
    c->r[0] = 0x1096478u;
    { uint32_t ea = 0x9aa85cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9aa85cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9aa878(Cpu *restrict c) {
    FN_ENTER(0x9aa878u);
L_9aa878:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    c->r[6] = c->r[0];
    c->r[14] = 0x9aa88cu; f_9af100(c);
    c->r[0] = 0xdba09eu;
    c->r[7] = c->r[6] + 0x10u;
    c->r[1] = 0x20u;
    c->r[3] = c->r[5];
    c->r[2] = 0x9aa8a4u + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x9aa8a8u; f_15eff2c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x2fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x34u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x36u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    c->r[14] = 0x9aa8d0u; f_15effd4(c);
    { uint32_t ea = c->r[6] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9aa8dc(Cpu *restrict c) {
    FN_ENTER(0x9aa8dcu);
L_9aa8dc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[10] = c->r[1];
    c->r[9] = c->r[0];
    c->r[11] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[14] = 0x9aa914u; f_9bb638(c);
    c->r[1] = 0xda7248u;
    c->r[2] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x9aa928u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x30u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    c->r[1] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[4] = c->r[1];
    c->r[8] = c->r[4] | 0x4u;
    c->r[14] = 0x9aa99cu; f_9bb638(c);
    c->r[1] = 0xda6375u;
    c->r[2] = c->r[4];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x9aa9b0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x34u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[11]); }
    c->r[14] = 0x9aaa18u; f_9bb638(c);
    c->r[1] = 0xda77cfu;
    c->r[1] = 0x9aaa24u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x36u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[1] = c->r[10];
    c->r[14] = 0x9aaa74u; f_9aab08(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x9aaa7cu; f_9bb638(c);
    c->r[1] = 0xdc2bf3u;
    c->r[1] = 0x9aaa88u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = 0x1096238u;
    { uint32_t ea = 0x9aaaa0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1096224u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0x9aaab8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9aab08(Cpu *restrict c) {
    FN_ENTER(0x9aab08u);
L_9aab08:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[9] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x9aab40u; f_9bb638(c);
    c->r[1] = 0xdc2af0u;
    c->r[10] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0x9aab58u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xcu;
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
    c->r[14] = 0x9aabbcu; f_9bb638(c);
    c->r[1] = 0xdc2a83u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x9aabd0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x4u;
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
    c->r[14] = 0x9aac38u; f_9bb638(c);
    c->r[1] = 0xdc2a19u;
    c->r[1] = 0x9aac44u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x9aac90u; f_9bb638(c);
    c->r[1] = 0xdc29c6u;
    c->r[6] = 0x7u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x810000u;
    c->r[1] = 0x9aaca4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x109602cu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = 0x9aacb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1096010u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = 0x9aacccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
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
    c->r[14] = 0x9aad04u; f_9bb638(c);
    c->r[1] = 0xdc295cu;
    c->r[7] = 0x0u;
    c->r[1] = 0x9aad14u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0x1095fb8u;
    { uint32_t ea = 0x9aad20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1095fa4u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x9aad38u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x9aad70u; f_9bb638(c);
    c->r[1] = 0xdc28f9u;
    c->r[1] = 0x9aad7cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0x1095f5cu;
    { uint32_t ea = 0x9aad88u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1095f3cu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x9aada0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9aae08(Cpu *restrict c) {
    FN_ENTER(0x9aae08u);
L_9aae08:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9aae10(Cpu *restrict c) {
    FN_ENTER(0x9aae10u);
L_9aae10:;
    return;
}
void f_9aae14(Cpu *restrict c) {
    FN_ENTER(0x9aae14u);
L_9aae14:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9aae1c(Cpu *restrict c) {
    FN_ENTER(0x9aae1cu);
L_9aae1c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    return;
}
void f_9aae2c(Cpu *restrict c) {
    FN_ENTER(0x9aae2cu);
L_9aae2c:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_9aae30(Cpu *restrict c) {
    FN_ENTER(0x9aae30u);
L_9aae30:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1095ea8u;
    { uint32_t ea = 0x9aae40u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9aae44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x58u;
    c->pc = c->r[6]; c->r[14] = 0x9aae5cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x108f9f0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x9aae78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9aae84u; f_15effb0(c);
    c->r[0] = 0x1095e5cu;
    { uint32_t ea = 0x9aae90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9aae9cu; f_9af100(c);
    c->r[0] = 0xdb9a92u;
    c->r[5] = c->r[4] + 0x10u;
    c->r[1] = 0x20u;
    c->r[2] = 0x9aaeb0u + c->r[0];
    c->r[0] = 0xdc27dau;
    c->r[3] = 0x9aaeb8u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x9aaebcu; f_15eff2c(c);
    c->r[0] = 0x46u;
    { uint32_t ea = c->r[4] + 0x2fu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x36u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[6]); }
    c->r[14] = 0x9aaee0u; f_15effd4(c);
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9aaf00(Cpu *restrict c) {
    FN_ENTER(0x9aaf00u);
L_9aaf00:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x108f948u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x9aaf20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9aaf2cu; f_15effb0(c);
    c->r[0] = 0x1095db4u;
    { uint32_t ea = 0x9aaf38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9aaf44u; f_9af100(c);
    c->r[0] = 0xdb99eau;
    c->r[5] = c->r[4] + 0x10u;
    c->r[1] = 0x20u;
    c->r[2] = 0x9aaf58u + c->r[0];
    c->r[0] = 0xdc2732u;
    c->r[3] = 0x9aaf60u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x9aaf64u; f_15eff2c(c);
    c->r[0] = 0x46u;
    { uint32_t ea = c->r[4] + 0x2fu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x36u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[6]); }
    c->r[14] = 0x9aaf88u; f_15effd4(c);
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9aafa4(Cpu *restrict c) {
    FN_ENTER(0x9aafa4u);
L_9aafa4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    c->r[6] = c->r[0];
    c->r[14] = 0x9aafb8u; f_9af100(c);
    c->r[0] = 0xdb9972u;
    c->r[7] = c->r[6] + 0x10u;
    c->r[1] = 0x20u;
    c->r[3] = c->r[5];
    c->r[2] = 0x9aafd0u + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x9aafd4u; f_15eff2c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x2fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x34u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x36u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    c->r[14] = 0x9aaffcu; f_15effd4(c);
    { uint32_t ea = c->r[6] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9ab008(Cpu *restrict c) {
    FN_ENTER(0x9ab008u);
L_9ab008:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ab040; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ab048; }
    c->r[0] = 0x1095cb8u;
    { uint32_t ea = 0x9ab038u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ab048; }
L_9ab040:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ab048u; f_15efe00(c);
L_9ab048:;
    c->r[0] = c->r[6] + c->r[5];
    c->r[0] = c->r[0] + 0xcu;
    c->r[14] = 0x9ab054u; f_15b3580(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ab0c0; }
    c->r[1] = c->r[5] + c->r[0];
    c->r[2] = 0x0u - c->r[5];
    c->r[1] = c->r[1] + 0x8u;
    c->r[5] = c->r[1] & c->r[2];
    { uint32_t ea = c->r[5] - 8u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ab0b0; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ab0b8; }
    c->r[0] = 0x1095c48u;
    { uint32_t ea = 0x9ab0a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ab0b8; }
L_9ab0b0:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ab0b8u; f_15efe0c(c);
L_9ab0b8:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9ab0c0:;
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ab0ec; }
    c->r[5] = 0x0u;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ab0b8; }
    c->r[0] = 0x1095c0cu;
    { uint32_t ea = 0x9ab0e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ab0b8; }
L_9ab0ec:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ab0f4u; f_15efe0c(c);
    c->r[5] = 0x0u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9ab10c(Cpu *restrict c) {
    FN_ENTER(0x9ab10cu);
L_9ab10c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] - 8u; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ab148; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ab150; }
    c->r[0] = 0x1095bb0u;
    { uint32_t ea = 0x9ab140u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ab150; }
L_9ab148:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ab150u; f_15efe00(c);
L_9ab150:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[6];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[6];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9ab170u; f_15b35d4(c);
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ab198; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ab1a4; }
    c->r[0] = 0x1095b60u;
    { uint32_t ea = 0x9ab190u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ab1a4; }
L_9ab198:;
    c->r[0] = c->r[4] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_9ab1a4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9ab1b0(Cpu *restrict c) {
    FN_ENTER(0x9ab1b0u);
L_9ab1b0:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { c->r[0] = 0x0u; }
    return;
}
void f_9ab1c0(Cpu *restrict c) {
    FN_ENTER(0x9ab1c0u);
L_9ab1c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1095b24u;
    { uint32_t ea = 0x9ab1d0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9ab1d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x2a4u;
    c->pc = c->r[4]; c->r[14] = 0x9ab1ecu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x108f668u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x9ab200u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x3cu; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9ab210u; f_15effb0(c);
    c->r[0] = 0x1095adcu;
    { uint32_t ea = 0x9ab21cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9ab234(Cpu *restrict c) {
    FN_ENTER(0x9ab234u);
L_9ab234:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[3];
    c->r[6] = c->r[2];
    c->r[7] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x9ab24cu; f_9af100(c);
    c->r[0] = 0xdb96deu;
    c->r[5] = c->r[4] + 0x10u;
    c->r[1] = 0x20u;
    c->r[3] = c->r[7];
    c->r[2] = 0x9ab264u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x9ab268u; f_15eff2c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2fu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x36u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[7]); }
    c->r[14] = 0x9ab290u; f_15effd4(c);
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x29cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2a0u; ST32(ea, c->r[7]); }
    c->r[2] = c->r[4] + 0x54u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x9ab2b4u; f_9af2dc(c);
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    c->r[5] = c->r[4] + 0x5cu;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffff0000u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8] - 0x20u;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] >> 4);
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x240u;
    c->r[14] = 0x9ab324u; f_15efd7c(c);
    c->r[0] = c->r[4] + 0x7cu;
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x9cu;
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xbcu;
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xdcu;
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xfcu;
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x11cu;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x13cu;
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x15cu;
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x17cu;
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1a4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x19cu;
    { uint32_t ea = c->r[4] + 0x188u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x1bcu;
    { uint32_t ea = c->r[4] + 0x1a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1e4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x1dcu;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x204u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x1fcu;
    { uint32_t ea = c->r[4] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x224u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x21cu;
    { uint32_t ea = c->r[4] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x244u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x23cu;
    { uint32_t ea = c->r[4] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x264u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x25cu;
    { uint32_t ea = c->r[4] + 0x248u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[4] + 0x27cu;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x284u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x268u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9ab408(Cpu *restrict c) {
    FN_ENTER(0x9ab408u);
L_9ab408:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x10958d8u;
    c->r[2] = c->r[4] + 0x54u;
    { uint32_t ea = 0x9ab420u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x9ab430u; f_9af344(c);
    c->r[0] = 0x108f42cu;
    { uint32_t ea = 0x9ab43cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9ab448u; f_9af1a8(c);
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ab450u; f_15f004c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9ab460(Cpu *restrict c) {
    FN_ENTER(0x9ab460u);
L_9ab460:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1095880u;
    c->r[2] = c->r[4] + 0x54u;
    { uint32_t ea = 0x9ab478u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x9ab488u; f_9af344(c);
    c->r[0] = 0x108f3d4u;
    { uint32_t ea = 0x9ab494u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9ab4a0u; f_9af1a8(c);
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ab4a8u; f_15f004c(c);
    c->r[0] = 0x1095840u;
    { uint32_t ea = 0x9ab4b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9ab4b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9ab4d4(Cpu *restrict c) {
    FN_ENTER(0x9ab4d4u);
L_9ab4d4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0x9ab4e8u; f_9aa8dc(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x9ab510u; f_9bb638(c);
    c->r[1] = 0xdc2182u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x9ab528u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x29cu;
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
    c->r[14] = 0x9ab58cu; f_9bb638(c);
    c->r[1] = 0xdc2114u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x9ab5a0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x2a0u;
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
    { uint32_t ea = c->r[10] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x9ab608u; f_9bb638(c);
    c->r[1] = 0xdc20a9u;
    c->r[1] = 0x9ab614u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[4] + 0x1cu;
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
void f_9ab66c(Cpu *restrict c) {
    FN_ENTER(0x9ab66cu);
L_9ab66c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[9] = c->r[0];
    c->r[10] = c->r[2];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[9] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ab6a4; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ab6ac; }
    c->r[0] = 0x1095654u;
    { uint32_t ea = 0x9ab69cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ab6ac; }
L_9ab6a4:;
    c->r[0] = c->r[9] + 0x3cu;
    c->r[14] = 0x9ab6acu; f_15efe00(c);
L_9ab6ac:;
    c->r[0] = c->r[8] + c->r[10];
    c->r[3] = 0x0u;
    c->r[1] = 0x10u;
    c->r[2] = c->r[0] + 0x2fu;
    (void)f_subs(c, c->r[3], (c->r[2] >> 20));
    c->r[0] = (c->r[2] >> 4);
    if (COND_NE) { goto L_9ab6dc; }
    c->v.s[0] = c->r[0];
    c->r[2] = ~0x7eu;
    c->v.f[0] = (float)c->v.s[0];
    c->r[1] = c->v.s[0];
    c->r[1] = c->r[2] + (c->r[1] >> 23);
L_9ab6dc:;
    c->r[1] = c->r[9] + (c->r[1] << 5);
    c->r[1] = c->r[1] + 0x5cu;
L_9ab6e4:;
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ab7b4; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_CC) { goto L_9ab6e4; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[10] + c->r[1];
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[5] + (c->r[7] << 4);
    c->r[6] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[7] = c->r[1] + (c->r[7] << 4);
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[5] = c->r[5] + 0x1fu;
    c->r[7] = c->r[4] - c->r[7];
    c->r[6] = c->r[5] - c->r[6];
    c->r[5] = 0x0u - c->r[10];
    c->r[6] = c->r[6] & c->r[5];
    { uint32_t ea = c->r[6] - 0x1cu; ST32(ea, c->r[3]); }
    c->r[6] = c->r[6] - 0x20u;
    c->r[5] = c->r[7] + c->r[6];
    if (COND_NE) { { uint32_t ea = c->r[3]; ST32(ea, c->r[6]); } }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    c->r[3] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t ea = c->r[6] + 0x18u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = (c->r[0] << 4) - c->r[8];
    c->r[0] = (c->r[0] << 4);
    c->r[3] = (c->r[5] & 0xFFFFu) | ((c->r[3] << 16) & 0xFFFF0000u);
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ab7f4; }
    (void)f_subs(c, c->r[1], 0x10000u);
    if (COND_CC) { goto L_9ab7fc; }
    c->r[2] = c->r[9] + 0x25cu;
    c->r[1] = c->r[9] + 0x27cu;
    c->r[3] = 0x11u;
    goto L_9ab82c;
L_9ab7b4:;
    { uint32_t ea = c->r[9] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ab7e0; }
    c->r[6] = 0x0u;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ab8bc; }
    c->r[0] = 0x1095518u;
    { uint32_t ea = 0x9ab7d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ab8bc; }
L_9ab7e0:;
    c->r[0] = c->r[9] + 0x3cu;
    c->r[14] = 0x9ab7e8u; f_15efe0c(c);
    c->r[6] = 0x0u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9ab7f4:;
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[3]); }
    goto L_9ab870;
L_9ab7fc:;
    c->v.s[0] = c->r[1];
    c->r[3] = ~0x7du;
    c->r[2] = ~0x7eu;
    c->r[5] = c->r[9] + 0x5cu;
    c->v.f[0] = (float)c->v.s[0];
    c->r[1] = c->v.s[0];
    c->r[3] = c->r[3] + (c->r[1] >> 23);
    c->r[2] = c->r[2] + (c->r[1] >> 23);
    c->r[1] = c->r[5] + (c->r[3] << 5);
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_CC) { goto L_9ab854; }
    c->r[2] = c->r[5] + (c->r[2] << 5);
L_9ab82c:;
    c->r[3] = c->r[9] + (c->r[3] << 5);
    c->r[5] = c->r[3] + 0x64u;
L_9ab834:;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_9ab858; }
    c->r[5] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CS) { goto L_9ab834; }
    goto L_9ab858;
L_9ab854:;
    c->r[3] = c->r[1];
L_9ab858:;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
L_9ab870:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ab8a4; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ab8b0; }
    c->r[1] = 0x1095454u;
    { uint32_t ea = 0x9ab89cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ab8b0; }
L_9ab8a4:;
    c->r[0] = c->r[9] + 0x3cu;
    c->r[14] = 0x9ab8acu; f_15efe0c(c);
    { uint32_t ea = c->r[9] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
L_9ab8b0:;
    c->r[6] = c->r[6] + 0x20u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ab8c4; }
L_9ab8bc:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9ab8c4:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[8];
    c->r[14] = 0x9ab8d0u; f_15efdac(c);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_9ab8e4(Cpu *restrict c) {
    FN_ENTER(0x9ab8e4u);
L_9ab8e4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9ab96c; }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ab920; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ab92c; }
    c->r[1] = 0x10953d8u;
    { uint32_t ea = 0x9ab918u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ab92c; }
L_9ab920:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ab928u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
L_9ab92c:;
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] - 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[5] = (c->r[1] << 4) - c->r[2];
    if (COND_NE) { goto L_9ab95c; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ab964; }
    c->r[0] = 0x109539cu;
    { uint32_t ea = 0x9ab954u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ab964; }
L_9ab95c:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ab964u; f_15efe0c(c);
L_9ab964:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9ab96c:;
    c->r[5] = 0x0u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9ab980(Cpu *restrict c) {
    FN_ENTER(0x9ab980u);
L_9ab980:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ab9bc; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ab9c4; }
    c->r[0] = 0x109533cu;
    { uint32_t ea = 0x9ab9b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ab9c4; }
L_9ab9bc:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ab9c4u; f_15efe00(c);
L_9ab9c4:;
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[3] - (c->r[2] << 4);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_9aba68; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[3];
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] - 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); } }
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] - 0x14u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); } }
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9aba4c; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
L_9aba4c:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x10000u);
    if (COND_CC) { goto L_9aba88; }
    c->r[2] = c->r[4] + 0x25cu;
    c->r[1] = c->r[4] + 0x27cu;
    c->r[3] = 0x11u;
    goto L_9abab8;
L_9aba68:;
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9abb24; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9abb30; }
    c->r[0] = 0x1095268u;
    { uint32_t ea = 0x9aba88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9abb18;
L_9aba88:;
    c->v.s[0] = c->r[1];
    c->r[3] = ~0x7du;
    c->r[2] = ~0x7eu;
    c->r[5] = c->r[4] + 0x5cu;
    c->v.f[0] = (float)c->v.s[0];
    c->r[1] = c->v.s[0];
    c->r[3] = c->r[3] + (c->r[1] >> 23);
    c->r[2] = c->r[2] + (c->r[1] >> 23);
    c->r[1] = c->r[5] + (c->r[3] << 5);
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_CC) { goto L_9abae0; }
    c->r[2] = c->r[5] + (c->r[2] << 5);
L_9abab8:;
    c->r[3] = c->r[4] + (c->r[3] << 5);
    c->r[5] = c->r[3] + 0x64u;
L_9abac0:;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_9abae4; }
    c->r[5] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_9abac0; }
    goto L_9abae4;
L_9abae0:;
    c->r[3] = c->r[1];
L_9abae4:;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9abb24; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9abb30; }
    c->r[0] = 0x10951d4u;
    { uint32_t ea = 0x9abb1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_9abb18:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9abb30; }
L_9abb24:;
    c->r[0] = c->r[4] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_9abb30:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9abb40(Cpu *restrict c) {
    FN_ENTER(0x9abb40u);
L_9abb40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x10951acu;
    { uint32_t ea = 0x9abb50u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9abb54u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x6cu;
    c->pc = c->r[4]; c->r[14] = 0x9abb6cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x108ece8u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x9abb80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x3cu; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9abb90u; f_15effb0(c);
    c->r[0] = 0x1095164u;
    { uint32_t ea = 0x9abb9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9abbb4(Cpu *restrict c) {
    FN_ENTER(0x9abbb4u);
L_9abbb4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1095134u;
    c->r[2] = c->r[4] + 0x54u;
    { uint32_t ea = 0x9abbccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x9abbdcu; f_9af344(c);
    c->r[0] = 0x108ec80u;
    { uint32_t ea = 0x9abbe8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9abbf4u; f_9af1a8(c);
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9abbfcu; f_15f004c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9abc0c(Cpu *restrict c) {
    FN_ENTER(0x9abc0cu);
L_9abc0c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x10950dcu;
    c->r[2] = c->r[4] + 0x54u;
    { uint32_t ea = 0x9abc24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x9abc34u; f_9af344(c);
    c->r[0] = 0x108ec28u;
    { uint32_t ea = 0x9abc40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9abc4cu; f_9af1a8(c);
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9abc54u; f_15f004c(c);
    c->r[0] = 0x109509cu;
    { uint32_t ea = 0x9abc60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9abc60u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9abc80(Cpu *restrict c) {
    FN_ENTER(0x9abc80u);
L_9abc80:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[3];
    c->r[8] = c->r[2];
    c->r[7] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x9abc98u; f_9af100(c);
    c->r[0] = 0xdb8c92u;
    c->r[6] = c->r[4] + 0x10u;
    c->r[1] = 0x20u;
    c->r[3] = c->r[7];
    c->r[2] = 0x9abcb0u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x9abcb4u; f_15eff2c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2fu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x36u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[7]); }
    c->r[14] = 0x9abcdcu; f_15effd4(c);
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x9abcf0u; f_9af2dc(c);
    c->r[1] = 0xfffcu;
    c->r[0] = c->r[4] + 0x54u;
    c->r[6] = 0x400u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xff0000u;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] & (c->r[5] >> 8);
    c->r[2] = c->r[5] - c->r[1];
    (void)f_subs(c, c->r[7], (c->r[2] >> 10));
    c->r[1] = c->r[0] + c->r[2];
    c->r[3] = (c->r[2] >> 10);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_9abd70; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[0] = 0x1u;
    c->r[1] = 0x400u;
L_9abd4c:;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[1];
    c->r[1] = c->r[1] + 0x400u;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { goto L_9abd4c; }
L_9abd70:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9abd78(Cpu *restrict c) {
    FN_ENTER(0x9abd78u);
L_9abd78:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[3];
    c->r[8] = c->r[2];
    c->r[7] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x9abd90u; f_9af100(c);
    c->r[0] = 0xdb8b9au;
    c->r[6] = c->r[4] + 0x10u;
    c->r[1] = 0x20u;
    c->r[3] = c->r[7];
    c->r[2] = 0x9abda8u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x9abdacu; f_15eff2c(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2fu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[8]); }
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[4] + 0x36u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[7]); }
    c->r[14] = 0x9abdd8u; f_15effd4(c);
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[4] + 0x54u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x9abdecu; f_9af2dc(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[2] = udiv32(c->r[5], c->r[1]);
    c->r[3] = c->r[5] - (c->r[2] << 2);
    c->r[7] = udiv32(c->r[3], c->r[1]);
    c->r[2] = c->r[0] + c->r[3];
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[7]); }
    if (COND_CC) { goto L_9abe60; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[0] = 0x1u;
    c->r[2] = c->r[1];
L_9abe3c:;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[7] + (c->r[0] << 2); ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CC) { goto L_9abe3c; }
L_9abe60:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9abe68(Cpu *restrict c) {
    FN_ENTER(0x9abe68u);
L_9abe68:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0x9abe7cu; f_9aa8dc(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x9abea4u; f_9bb638(c);
    c->r[1] = 0xdc181bu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x9abebcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x60u;
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
    c->r[14] = 0x9abf20u; f_9bb638(c);
    c->r[1] = 0xdc17adu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x9abf34u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x5cu;
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
    c->r[14] = 0x9abf9cu; f_9bb638(c);
    c->r[1] = 0xdc1744u;
    c->r[1] = 0x9abfa8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x64u;
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
void f_9ac000(Cpu *restrict c) {
    FN_ENTER(0x9ac000u);
L_9ac000:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ac034; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ac03c; }
    c->r[0] = 0x1094cc4u;
    { uint32_t ea = 0x9ac02cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ac03c; }
L_9ac034:;
    c->r[0] = c->r[5] + 0x3cu;
    c->r[14] = 0x9ac03cu; f_15efe00(c);
L_9ac03c:;
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CC) { goto L_9ac074; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ac074; }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
L_9ac074:;
    { uint32_t ea = c->r[5] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ac09c; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ac0a8; }
    c->r[1] = 0x1094c5cu;
    { uint32_t ea = 0x9ac094u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ac0a8; }
L_9ac09c:;
    c->r[0] = c->r[5] + 0x3cu;
    c->r[14] = 0x9ac0a4u; f_15efe0c(c);
    { uint32_t ea = c->r[5] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
L_9ac0a8:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_9ac0c0; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0x9ac0c0u; f_15efdac(c);
L_9ac0c0:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9ac0d0(Cpu *restrict c) {
    FN_ENTER(0x9ac0d0u);
L_9ac0d0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ac10c; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ac114; }
    c->r[0] = 0x1094becu;
    { uint32_t ea = 0x9ac104u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ac114; }
L_9ac10c:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ac114u; f_15efe00(c);
L_9ac114:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ac160; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ac16c; }
    c->r[0] = 0x1094b98u;
    { uint32_t ea = 0x9ac158u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ac16c; }
L_9ac160:;
    c->r[0] = c->r[4] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_9ac16c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9ac178(Cpu *restrict c) {
    FN_ENTER(0x9ac178u);
L_9ac178:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1094b7cu;
    { uint32_t ea = 0x9ac188u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9ac18cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8cu;
    c->pc = c->r[4]; c->r[14] = 0x9ac1a4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x108e6b0u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x9ac1b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x3cu; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9ac1c8u; f_15effb0(c);
    c->r[0] = 0x1094b34u;
    { uint32_t ea = 0x9ac1d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9ac1ec(Cpu *restrict c) {
    FN_ENTER(0x9ac1ecu);
L_9ac1ec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1094b08u;
    { uint32_t ea = 0x9ac200u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ac21c; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[14] = 0x9ac21cu; f_9af344(c);
L_9ac21c:;
    c->r[0] = 0x108e63cu;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x9ac22cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x3cu; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9ac238u; f_9af1a8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x9ac240u; f_15f004c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9ac250(Cpu *restrict c) {
    FN_ENTER(0x9ac250u);
L_9ac250:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1094aa4u;
    { uint32_t ea = 0x9ac264u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ac280; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[14] = 0x9ac280u; f_9af344(c);
L_9ac280:;
    c->r[0] = 0x108e5d8u;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x9ac290u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x3cu; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9ac29cu; f_9af1a8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x9ac2a4u; f_15f004c(c);
    c->r[0] = 0x1094a54u;
    { uint32_t ea = 0x9ac2b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9ac2b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9ac2d0(Cpu *restrict c) {
    FN_ENTER(0x9ac2d0u);
L_9ac2d0:;
    c->r[12] = 0xfffu;
    c->r[1] = c->r[1] + c->r[12];
    c->r[1] = c->r[1] & 0xfffff000u;
    __attribute__((musttail)) return f_9ac2e0(c);
}
void f_9ac2e0(Cpu *restrict c) {
    FN_ENTER(0x9ac2e0u);
L_9ac2e0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[8] = c->r[3];
    c->r[7] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ac320; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ac328; }
    c->r[0] = 0x10949d8u;
    { uint32_t ea = 0x9ac318u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ac328; }
L_9ac320:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ac328u; f_15efe00(c);
L_9ac328:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ac370; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x0u - c->r[7];
    c->r[3] = c->r[7] - 0x1u;
L_9ac340:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[3] + c->r[1];
    c->r[7] = c->r[7] & c->r[2];
    c->r[7] = c->r[7] - c->r[1];
    c->r[1] = f_subs(c, c->r[5], c->r[7]);
    if (COND_LS) { c->r[1] = 0x0u; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CS) { goto L_9ac378; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9ac340; }
L_9ac370:;
    c->r[5] = 0x0u;
    goto L_9ac398;
L_9ac378:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[3] = c->r[8];
    c->r[14] = 0x9ac394u; f_9ac4ec(c);
    c->r[5] = c->r[0];
L_9ac398:;
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ac3c0; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ac3c8; }
    c->r[0] = 0x1094938u;
    { uint32_t ea = 0x9ac3b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ac3c8; }
L_9ac3c0:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ac3c8u; f_15efe0c(c);
L_9ac3c8:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9ac3dc(Cpu *restrict c) {
    FN_ENTER(0x9ac3dcu);
L_9ac3dc:;
    c->r[12] = 0xfffu;
    c->r[1] = c->r[1] + c->r[12];
    c->r[1] = c->r[1] & 0xfffff000u;
    __attribute__((musttail)) return f_9ac3ec(c);
}
void f_9ac3ec(Cpu *restrict c) {
    FN_ENTER(0x9ac3ecu);
L_9ac3ec:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[8] = c->r[3];
    c->r[7] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ac42c; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ac434; }
    c->r[0] = 0x10948ccu;
    { uint32_t ea = 0x9ac424u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ac434; }
L_9ac42c:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ac434u; f_15efe00(c);
L_9ac434:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ac47c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[7] - 0x1u;
    c->r[3] = 0x0u - c->r[6];
L_9ac44c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[1] + c->r[5];
    c->r[7] = c->r[1] + c->r[3];
    c->r[1] = c->r[7] & c->r[2];
    c->r[5] = f_subs(c, c->r[5], c->r[1]);
    if (COND_LS) { c->r[5] = 0x0u; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_CS) { goto L_9ac484; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9ac44c; }
L_9ac47c:;
    c->r[5] = 0x0u;
    goto L_9ac4a8;
L_9ac484:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[14] = 0x9ac4a4u; f_9ac6b8(c);
    c->r[5] = c->r[0];
L_9ac4a8:;
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ac4d0; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ac4d8; }
    c->r[0] = 0x1094828u;
    { uint32_t ea = 0x9ac4c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ac4d8; }
L_9ac4d0:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ac4d8u; f_15efe0c(c);
L_9ac4d8:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9ac4ec(Cpu *restrict c) {
    FN_ENTER(0x9ac4ecu);
L_9ac4ec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[12]);
    if (COND_CS) { goto L_9ac6b0; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_9ac6b0; }
    c->r[14] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + c->r[4];
    { uint32_t ea = c->r[12] + 0x10u; ST32(ea, c->r[6]); }
    c->r[6] = 0x2u;
    { uint32_t ea = c->r[12] + 0x14u; ST32(ea, c->r[1]); }
    c->r[4] = (c->r[4] & 0x3fffffffu) | ((c->r[6] << 30) & 0xc0000000u);
    { uint32_t ea = c->r[12] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x84u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[12] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[12] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[12] + 0x28u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[12] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[3]; ST32(ea, c->r[12]); } }
    c->r[1] = f_subs(c, c->r[14], c->r[1]);
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_9ac604; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CC) { goto L_9ac604; }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + 0xcu;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[3] = c->r[0] + 0x68u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[12] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] & 0x3fffffffu;
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { c->r[1] = c->r[2]; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    goto L_9ac6ac;
L_9ac604:;
    { uint32_t ea = c->r[12] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[12] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + 0xcu;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[3] = c->r[0] + 0x68u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[3] = c->r[0] + 0x6cu; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[6] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[0] + 0x60u; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[3] = c->r[0] + 0x64u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[12] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] & 0x3fffffffu;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CC) { c->r[1] = c->r[3]; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
L_9ac6ac:;
    { uint32_t ea = c->r[12] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
L_9ac6b0:;
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9ac6b8(Cpu *restrict c) {
    FN_ENTER(0x9ac6b8u);
L_9ac6b8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[12]);
    if (COND_CS) { goto L_9ac874; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_9ac874; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[4] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[12] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[12] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[12] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x84u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[12] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[12] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[12] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); } }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = f_subs(c, c->r[14], c->r[1]);
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_9ac7c0; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CC) { goto L_9ac7c0; }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[3] = c->r[0] + 0x6cu; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[12] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] & 0x3fffffffu;
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { c->r[1] = c->r[2]; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    goto L_9ac870;
L_9ac7c0:;
    { uint32_t ea = c->r[12] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] + c->r[1];
    c->r[3] = (c->r[3] >> 30);
    c->r[1] = (c->r[1] & 0x3fffffffu) | ((c->r[3] << 30) & 0xc0000000u);
    { uint32_t ea = c->r[12] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + 0xcu;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[3] = c->r[0] + 0x68u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[3] = c->r[0] + 0x6cu; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[5] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[5] = c->r[0] + 0x60u; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[3] = c->r[0] + 0x64u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[12] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] & 0x3fffffffu;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CC) { c->r[1] = c->r[3]; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
L_9ac870:;
    { uint32_t ea = c->r[12] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
L_9ac874:;
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9ac87c(Cpu *restrict c) {
    FN_ENTER(0x9ac87cu);
L_9ac87c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[6] = c->r[1];
    c->r[11] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9aca5c; }
    { uint32_t ea = c->r[11] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ac8bc; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ac8c4; }
    c->r[0] = 0x109443cu;
    { uint32_t ea = 0x9ac8b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ac8c4; }
L_9ac8bc:;
    c->r[0] = c->r[11] + 0x3cu;
    c->r[14] = 0x9ac8c4u; f_15efe00(c);
L_9ac8c4:;
    c->r[1] = c->r[11];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9ac8e8; }
    goto L_9acbe4;
L_9ac8dc:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9acbe4; }
L_9ac8e8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_NE) { goto L_9ac8dc; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[1] = c->r[2] + 0x4u; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); } }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x1bu; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_9aca64; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x1bu; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_9acab8; }
    { uint32_t ea = c->r[11] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_9ac964; }
    { uint32_t ea = c->r[11] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] + 0x78u; ST32(ea, c->r[1]); }
L_9ac964:;
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[0];
    c->r[9] = c->r[11];
    { uint32_t ea = c->r[12] + 0x18u; uint32_t v = LD32(ea); c->r[12] = ea; c->r[2] = v; }
    c->r[2] = c->r[2] & 0x3fffffffu;
    c->r[1] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0x3fffffffu;
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0xc0000000u;
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0xcu;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[2] = c->r[11] + 0x68u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[2] = c->r[11] + 0x6cu; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[7] = v; }
    c->r[14] = c->r[9];
    { uint32_t ea = c->r[14] - 0x4u; uint32_t v = LD32(ea); c->r[14] = ea; c->r[4] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9acb70; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_9acb90; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
L_9aca18:;
    c->r[5] = c->r[4];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[2], c->r[4]);
    if (COND_CC) { goto L_9acb78; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[2], c->r[4]);
    if (COND_HI) { goto L_9acb80; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9acb8c; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1];
    c->r[6] = c->r[5];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_9aca18; }
    goto L_9acb90;
L_9aca5c:;
    c->r[5] = 0x0u;
    goto L_9acc14;
L_9aca64:;
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[2] = v; }
    c->r[12] = c->r[8];
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[12] = ea; c->r[3] = v; }
    c->r[3] = c->r[3] & 0x3fffffffu;
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] - 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[3] + 0x1bu; uint32_t v = LD8(ea); c->r[7] = v; } }
    if (COND_NE) { { uint32_t r = c->r[7] & 0x40u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_9acb18; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + 0x8u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[3] = c->r[11] + 0x6cu; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    goto L_9acbb0;
L_9acab8:;
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[2] = v; }
    c->r[12] = c->r[8];
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[12] = ea; c->r[3] = v; }
    c->r[3] = c->r[3] & 0x3fffffffu;
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] & 0x3fffffffu;
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] - c->r[2];
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] - 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] - 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + 0xcu;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[3] = c->r[11] + 0x68u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    goto L_9acbb0;
L_9acb18:;
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[7] + c->r[2];
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[2] + 0x8u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[7] = c->r[11] + 0x6cu; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[2] = c->r[11] + 0x64u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[11] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    goto L_9acbb0;
L_9acb70:;
    c->r[1] = 0x0u;
    goto L_9acb90;
L_9acb78:;
    c->r[1] = c->r[5];
    goto L_9acb90;
L_9acb80:;
    c->r[6] = c->r[1];
    c->r[1] = c->r[3];
    goto L_9acb90;
L_9acb8c:;
    c->r[6] = c->r[5];
L_9acb90:;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[1]); }
    if (COND_NE) { c->r[14] = c->r[6] + 0x4u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[9] = c->r[1]; }
    { uint32_t ea = c->r[14]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[10]); }
L_9acbb0:;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x1u;
    c->r[2] = c->r[2] & 0x3fffffffu;
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] - c->r[1];
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[11] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
L_9acbe4:;
    { uint32_t ea = c->r[11] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9acc0c; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9acc14; }
    c->r[0] = 0x10940ecu;
    { uint32_t ea = 0x9acc04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9acc14; }
L_9acc0c:;
    c->r[0] = c->r[11] + 0x3cu;
    c->r[14] = 0x9acc14u; f_15efe0c(c);
L_9acc14:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9acc28(Cpu *restrict c) {
    FN_ENTER(0x9acc28u);
L_9acc28:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9acc5c; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9acc64; }
    c->r[0] = 0x109409cu;
    { uint32_t ea = 0x9acc54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9acc64; }
L_9acc5c:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9acc64u; f_15efe00(c);
L_9acc64:;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9acc84; }
    goto L_9acc94;
L_9acc78:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9acc94; }
L_9acc84:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_NE) { goto L_9acc78; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
L_9acc94:;
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9accbc; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9accc4; }
    c->r[0] = 0x109403cu;
    { uint32_t ea = 0x9accb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9accc4; }
L_9accbc:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9accc4u; f_15efe0c(c);
L_9accc4:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9accd4(Cpu *restrict c) {
    FN_ENTER(0x9accd4u);
L_9accd4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1094028u;
    { uint32_t ea = 0x9acce4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9acce8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x2b8u;
    c->pc = c->r[4]; c->r[14] = 0x9acd00u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x108db54u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x9acd14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x3cu; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9acd24u; f_15effb0(c);
    c->r[0] = 0x1093fe0u;
    { uint32_t ea = 0x9acd30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9acd48(Cpu *restrict c) {
    FN_ENTER(0x9acd48u);
L_9acd48:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1093fb0u;
    c->r[2] = c->r[4] + 0x54u;
    { uint32_t ea = 0x9acd60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9acd70u; f_9af344(c);
    c->r[0] = 0x108daecu;
    { uint32_t ea = 0x9acd7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9acd88u; f_9af1a8(c);
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9acd90u; f_15f004c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9acda0(Cpu *restrict c) {
    FN_ENTER(0x9acda0u);
L_9acda0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1093f58u;
    c->r[2] = c->r[4] + 0x54u;
    { uint32_t ea = 0x9acdb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x9acdc8u; f_9af344(c);
    c->r[0] = 0x108da94u;
    { uint32_t ea = 0x9acdd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9acde0u; f_9af1a8(c);
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9acde8u; f_15f004c(c);
    c->r[0] = 0x1093f18u;
    { uint32_t ea = 0x9acdf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9acdf4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9ace14(Cpu *restrict c) {
    FN_ENTER(0x9ace14u);
L_9ace14:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[3];
    c->r[6] = c->r[2];
    c->r[7] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x9ace2cu; f_9af100(c);
    c->r[0] = 0xdb7afeu;
    c->r[5] = c->r[4] + 0x10u;
    c->r[1] = 0x20u;
    c->r[3] = c->r[7];
    c->r[2] = 0x9ace44u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x9ace48u; f_15eff2c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2fu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x36u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[7]); }
    c->r[14] = 0x9ace70u; f_15effd4(c);
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    c->r[1] = 0x20000000u;
    c->r[2] = c->r[4] + 0x54u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[0] = c->r[0] & 0xffff0000u;
    { uint32_t ea = c->r[4] + 0x2a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2acu; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x400u;
    c->r[14] = 0x9ace9cu; f_9af2dc(c);
    { uint32_t ea = c->r[4] + 0x2a4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2a0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_9aceb4:;
    c->r[1] = c->r[4] + c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = c->r[0];
    if (COND_NE) { c->r[2] = c->r[1] + 0x40u; }
    (void)f_subs(c, c->r[0], 0x220u);
    c->r[0] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[1] + 0x68u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    if (COND_NE) { c->r[2] = c->r[1] + 0x80u; }
    (void)f_subs(c, c->r[0], 0x240u);
    { uint32_t ea = c->r[1] + 0x6cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x60u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x70u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x74u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x7cu; ST32(ea, c->r[7]); }
    if (COND_NE) { goto L_9aceb4; }
    { uint32_t ea = c->r[4] + 0x2acu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] >> 19);
    c->r[14] = 0x9acf08u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x2a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { goto L_9acf34; }
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x2b0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { { uint32_t ea = c->r[4] + 0x2b4u; ST32(ea, c->r[1]); } }
L_9acf34:;
    c->r[1] = 0x0u;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2acu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 4);
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x2acu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x20u;
    c->r[3] = (c->r[2] >> 4);
    c->r[2] = c->r[4] + 0x4cu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
L_9acf64:;
    c->r[2] = c->r[2] + 0x20u;
    (void)f_subs(c, c->r[1], 0xeu);
    if (COND_HI) { goto L_9acf80; }
    c->r[6] = sh_lsl(c->r[7], c->r[1]);
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_HI) { goto L_9acf64; }
L_9acf80:;
    c->r[1] = c->r[2] - 0xcu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9acfb0(Cpu *restrict c) {
    FN_ENTER(0x9acfb0u);
L_9acfb0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[3];
    c->r[6] = c->r[2];
    c->r[7] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x9acfc8u; f_9af100(c);
    c->r[0] = 0xdb7962u;
    c->r[5] = c->r[4] + 0x10u;
    c->r[1] = 0x20u;
    c->r[3] = c->r[7];
    c->r[2] = 0x9acfe0u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x9acfe4u; f_15eff2c(c);
    c->r[7] = 0x0u;
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2fu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x36u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[7]); }
    c->r[14] = 0x9ad00cu; f_15effd4(c);
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    c->r[2] = c->r[4] + 0x54u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[0] = c->r[0] & 0xffff0000u;
    { uint32_t ea = c->r[4] + 0x2a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0xf0000001u;
    c->r[0] = c->r[0] & 0xf0000000u;
    { uint32_t ea = c->r[4] + 0x2acu; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[0] >> 19);
    c->r[0] = 0x0u;
    c->r[14] = 0x9ad040u; f_9af2dc(c);
    { uint32_t ea = c->r[4] + 0x2a4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2a0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_9ad058:;
    c->r[1] = c->r[4] + c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = c->r[0];
    if (COND_NE) { c->r[2] = c->r[1] + 0x40u; }
    (void)f_subs(c, c->r[0], 0x220u);
    c->r[0] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[1] + 0x68u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    if (COND_NE) { c->r[2] = c->r[1] + 0x80u; }
    (void)f_subs(c, c->r[0], 0x240u);
    { uint32_t ea = c->r[1] + 0x6cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x60u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x70u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x74u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x7cu; ST32(ea, c->r[7]); }
    if (COND_NE) { goto L_9ad058; }
    { uint32_t ea = c->r[4] + 0x2acu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] >> 19);
    c->r[14] = 0x9ad0acu; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x2a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { goto L_9ad0d8; }
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x2b0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { { uint32_t ea = c->r[4] + 0x2b4u; ST32(ea, c->r[1]); } }
L_9ad0d8:;
    c->r[1] = 0x0u;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2acu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 4);
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x2acu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x20u;
    c->r[3] = (c->r[2] >> 4);
    c->r[2] = c->r[4] + 0x4cu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
L_9ad108:;
    c->r[2] = c->r[2] + 0x20u;
    (void)f_subs(c, c->r[1], 0xeu);
    if (COND_HI) { goto L_9ad124; }
    c->r[6] = sh_lsl(c->r[7], c->r[1]);
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_HI) { goto L_9ad108; }
L_9ad124:;
    c->r[1] = c->r[2] - 0xcu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9ad154(Cpu *restrict c) {
    FN_ENTER(0x9ad154u);
L_9ad154:;
    __attribute__((musttail)) return f_9aa8dc(c);
}
void f_9ad158(Cpu *restrict c) {
    FN_ENTER(0x9ad158u);
L_9ad158:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[9] = c->r[0];
    c->r[6] = c->r[2];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[9] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ad190; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ad198; }
    c->r[0] = 0x1093b68u;
    { uint32_t ea = 0x9ad188u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ad198; }
L_9ad190:;
    c->r[0] = c->r[9] + 0x3cu;
    c->r[14] = 0x9ad198u; f_15efe00(c);
L_9ad198:;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[2] = c->r[6] - 0x1u;
    c->r[3] = 0x0u - c->r[6];
    c->r[7] = 0x0u;
    if (COND_EQ) { c->r[8] = 0x1u; }
    c->r[0] = c->r[8] + c->r[2];
    c->r[0] = c->r[0] & c->r[3];
    c->r[0] = c->r[0] + 0xfu;
    c->r[1] = (c->r[0] >> 4);
    c->r[0] = 0x1u;
L_9ad1c0:;
    c->r[6] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0xeu);
    if (COND_HI) { goto L_9ad1dc; }
    c->r[7] = sh_lsl(c->r[0], c->r[7]);
    (void)f_subs(c, c->r[7], c->r[1]);
    c->r[7] = c->r[6];
    if (COND_CC) { goto L_9ad1c0; }
L_9ad1dc:;
    c->r[0] = c->r[9] + (c->r[6] << 5);
    c->r[5] = c->r[9] + 0x280u;
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_9ad200; }
    goto L_9ad2fc;
L_9ad1f4:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_9ad2fc; }
L_9ad200:;
    c->r[10] = c->r[0] + 0x20u;
    c->r[7] = c->r[10] + c->r[2];
    c->r[7] = c->r[7] & c->r[3];
    (void)f_subs(c, c->r[10], c->r[7]);
    if (COND_CS) { goto L_9ad230; }
    c->r[4] = c->r[7] - 0x20u;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[4] - c->r[0];
    c->r[4] = c->r[1] + (c->r[4] >> 4);
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_CC) { goto L_9ad1f4; }
    goto L_9ad23c;
L_9ad230:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_9ad1f4; }
L_9ad23c:;
    (void)f_subs(c, c->r[10], c->r[7]);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_CS) { c->r[7] = c->r[0] + 0x20u; }
    c->r[1] = c->r[7] + (c->r[1] << 4);
    c->r[2] = c->r[0] - c->r[1];
    c->r[12] = c->r[1] - c->r[0];
    c->r[2] = c->r[2] + (c->r[3] << 4);
    { uint32_t ea = c->r[9] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[12];
    (void)f_subs(c, c->r[2], 0x2fu);
    c->r[2] = c->r[0] - 0x1u;
    if (COND_HI) { c->r[1] = c->r[1] + 0x20u; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[0] - c->r[3];
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = 0x1u;
    c->r[3] = (c->r[3] >> 16);
    c->r[7] = c->r[2] + (c->r[1] >> 16);
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_CS) { goto L_9ad340; }
    c->r[1] = (c->r[1] >> 16);
    c->r[7] = 0x0u;
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x2a4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_9ad29c:;
    c->r[6] = (c->r[3] >> 5);
    c->r[4] = c->r[3] & 0x1fu;
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[2], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[7] = c->r[7] + 0x1u; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_NE) { goto L_9ad29c; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9ad340; }
    { uint32_t ea = c->r[9] + 0x2b4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x2b0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[7];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_9ad33c; }
    { uint32_t ea = c->r[9] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ad328; }
    c->r[10] = 0x0u;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ad4e8; }
    c->r[0] = 0x10939f4u;
    { uint32_t ea = 0x9ad2fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9ad31c;
L_9ad2fc:;
    { uint32_t ea = c->r[9] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ad328; }
    c->r[10] = 0x0u;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ad4e8; }
    c->r[0] = 0x10939d0u;
    { uint32_t ea = 0x9ad320u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_9ad31c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ad4e8; }
L_9ad328:;
    c->r[0] = c->r[9] + 0x3cu;
    c->r[14] = 0x9ad330u; f_15efe0c(c);
    c->r[10] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9ad33c:;
    { uint32_t ea = c->r[9] + 0x2b4u; ST32(ea, c->r[1]); }
L_9ad340:;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ad35c; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { { uint32_t ea = c->r[9] + 0x5cu; ST32(ea, c->r[0]); } }
    goto L_9ad360;
L_9ad35c:;
    { uint32_t ea = c->r[9] + 0x5cu; ST32(ea, c->r[0]); }
L_9ad360:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ad37c; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
L_9ad37c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ad398; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
L_9ad398:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ad3d0; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); } }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); } }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x20u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_9ad3d0:;
    c->r[2] = 0x0u;
    c->r[3] = (c->r[12] >> 4);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] - (c->r[12] >> 4);
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + c->r[7];
    (void)f_subs(c, c->r[1], 0x3u);
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_CC) { goto L_9ad48c; }
    c->r[1] = c->r[0];
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[1] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] - 0x2u;
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[9] + 0x4cu;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[7]); }
L_9ad428:;
    c->r[3] = c->r[3] + 0x20u;
    (void)f_subs(c, c->r[2], 0xeu);
    if (COND_HI) { goto L_9ad444; }
    c->r[6] = sh_lsl(c->r[5], c->r[2]);
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_HI) { goto L_9ad428; }
L_9ad444:;
    c->r[2] = c->r[3] - 0xcu;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x20u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); } }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_9ad490;
L_9ad48c:;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
L_9ad490:;
    c->r[0] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 4);
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ad4c8; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ad4d4; }
    c->r[1] = 0x1093830u;
    { uint32_t ea = 0x9ad4c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ad4d4; }
L_9ad4c8:;
    c->r[0] = c->r[9] + 0x3cu;
    c->r[14] = 0x9ad4d0u; f_15efe0c(c);
    { uint32_t ea = c->r[9] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
L_9ad4d4:;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ad4e8; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[8];
    c->r[14] = 0x9ad4e8u; f_15efdac(c);
L_9ad4e8:;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_9ad500(Cpu *restrict c) {
    FN_ENTER(0x9ad500u);
L_9ad500:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[1];
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9ad768; }
    { uint32_t ea = c->r[8] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ad53c; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ad544; }
    c->r[0] = 0x10937bcu;
    { uint32_t ea = 0x9ad534u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ad544; }
L_9ad53c:;
    c->r[0] = c->r[8] + 0x3cu;
    c->r[14] = 0x9ad544u; f_15efe00(c);
L_9ad544:;
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); } }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); } }
    { uint32_t ea = c->r[8] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_9ad57c; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x5cu; ST32(ea, c->r[0]); }
L_9ad57c:;
    c->r[5] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ad5d8; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9ad5e4; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); } }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[3]); } }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x20u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = (c->r[2] << 4);
    goto L_9ad5e8;
L_9ad5d8:;
    c->r[0] = c->r[5] + c->r[3];
    c->r[2] = c->r[1] + (c->r[0] << 4);
    goto L_9ad5ec;
L_9ad5e4:;
    c->r[2] = 0x0u;
L_9ad5e8:;
    c->r[2] = c->r[2] + c->r[0];
L_9ad5ec:;
    c->r[0] = c->r[5] + c->r[3];
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] - (c->r[0] << 4);
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_9ad64c; }
    { uint32_t ea = c->r[12] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9ad640; }
    { uint32_t ea = c->r[12] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[12] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[6]); } }
    { uint32_t ea = c->r[12] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[12] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); } }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] - 0x20u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[3]); }
L_9ad640:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
    goto L_9ad650;
L_9ad64c:;
    c->r[12] = c->r[1];
L_9ad650:;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[12] + 0x20u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[12]); } }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[12]); } }
    c->r[1] = c->r[2] - c->r[12];
    c->r[6] = c->r[1] - 0x20u;
    c->r[2] = (c->r[1] >> 4);
    c->r[1] = (c->r[6] >> 4);
    { uint32_t ea = c->r[12] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    c->r[6] = c->r[6] + c->r[4];
    { uint32_t ea = c->r[12] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[4] - c->r[5];
    c->r[6] = c->r[6] - c->r[5];
    c->r[3] = c->r[2] + (c->r[3] >> 16);
    (void)f_subs(c, c->r[3], (c->r[6] >> 16));
    if (COND_CS) { goto L_9ad6e8; }
    c->r[4] = (c->r[6] >> 16);
    { uint32_t ea = c->r[8] + 0x2a4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
L_9ad6b0:;
    c->r[7] = (c->r[3] >> 5);
    c->r[0] = c->r[3] & 0x1fu;
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[6] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[5] = c->r[5] + 0x1u; }
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_NE) { goto L_9ad6b0; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9ad6e8; }
    { uint32_t ea = c->r[8] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[5];
    { uint32_t ea = c->r[8] + 0x2b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
L_9ad6e8:;
    c->r[3] = c->r[8] + 0x4cu;
    c->r[6] = 0x0u;
L_9ad6f0:;
    c->r[3] = c->r[3] + 0x20u;
    (void)f_subs(c, c->r[6], 0xeu);
    if (COND_HI) { goto L_9ad70c; }
    c->r[0] = sh_lsl(c->r[2], c->r[6]);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { goto L_9ad6f0; }
L_9ad70c:;
    c->r[0] = c->r[3] - 0xcu;
    { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ad75c; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ad768; }
    c->r[0] = 0x109359cu;
    { uint32_t ea = 0x9ad754u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ad768; }
L_9ad75c:;
    c->r[0] = c->r[8] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_9ad768:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9ad774(Cpu *restrict c) {
    FN_ENTER(0x9ad774u);
L_9ad774:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9ad7fc; }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ad7b0; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ad7bc; }
    c->r[1] = 0x1093548u;
    { uint32_t ea = 0x9ad7a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ad7bc; }
L_9ad7b0:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ad7b8u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
L_9ad7bc:;
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = ~0x1fu;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[5] = c->r[2] + (c->r[1] << 4);
    if (COND_NE) { goto L_9ad7ec; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ad7f4; }
    c->r[0] = 0x109350cu;
    { uint32_t ea = 0x9ad7e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ad7f4; }
L_9ad7ec:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9ad7f4u; f_15efe0c(c);
L_9ad7f4:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9ad7fc:;
    c->r[5] = 0x0u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9ad810(Cpu *restrict c) {
    FN_ENTER(0x9ad810u);
L_9ad810:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9ad814(Cpu *restrict c) {
    FN_ENTER(0x9ad814u);
L_9ad814:;
    c->r[0] = 0x10934b4u;
    { uint32_t ea = 0x9ad820u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9ad824(Cpu *restrict c) {
    FN_ENTER(0x9ad824u);
L_9ad824:;
    c->r[0] = 0x0u;
    return;
}
void f_9ad82c(Cpu *restrict c) {
    FN_ENTER(0x9ad82cu);
L_9ad82c:;
    c->r[0] = 0x0u;
    return;
}
void f_9ad834(Cpu *restrict c) {
    FN_ENTER(0x9ad834u);
L_9ad834:;
    c->r[0] = 0x0u;
    return;
}
void f_9ad83c(Cpu *restrict c) {
    FN_ENTER(0x9ad83cu);
L_9ad83c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9ad840(Cpu *restrict c) {
    FN_ENTER(0x9ad840u);
L_9ad840:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x108d010u;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x9ad858u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x3cu; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9ad864u; f_9af1a8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x9ad86cu; f_15f004c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9ad878(Cpu *restrict c) {
    FN_ENTER(0x9ad878u);
L_9ad878:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x108cfd8u;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x9ad890u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x3cu; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9ad89cu; f_9af1a8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x9ad8a4u; f_15f004c(c);
    c->r[0] = 0x1093438u;
    { uint32_t ea = 0x9ad8b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9ad8b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9ad8cc(Cpu *restrict c) {
    FN_ENTER(0x9ad8ccu);
L_9ad8cc:;
    c->r[0] = 0x1093410u;
    { uint32_t ea = 0x9ad8d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9ad8dc(Cpu *restrict c) {
    FN_ENTER(0x9ad8dcu);
L_9ad8dc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->pc = c->r[12]; c->r[14] = 0x9ad8fcu; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9ad904(Cpu *restrict c) {
    FN_ENTER(0x9ad904u);
L_9ad904:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[12] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[14]); }
    c->pc = c->r[12]; c->r[14] = 0x9ad920u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9ad928(Cpu *restrict c) {
    FN_ENTER(0x9ad928u);
L_9ad928:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9ad92c(Cpu *restrict c) {
    FN_ENTER(0x9ad92cu);
L_9ad92c:;
    c->r[0] = 0x10933bcu;
    { uint32_t ea = 0x9ad938u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9ad93c(Cpu *restrict c) {
    FN_ENTER(0x9ad93cu);
L_9ad93c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9ad948(Cpu *restrict c) {
    FN_ENTER(0x9ad948u);
L_9ad948:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9ad954(Cpu *restrict c) {
    FN_ENTER(0x9ad954u);
L_9ad954:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9ad958(Cpu *restrict c) {
    FN_ENTER(0x9ad958u);
L_9ad958:;
    c->r[0] = 0x1093398u;
    { uint32_t ea = 0x9ad964u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9ad968(Cpu *restrict c) {
    FN_ENTER(0x9ad968u);
L_9ad968:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9ad974(Cpu *restrict c) {
    FN_ENTER(0x9ad974u);
L_9ad974:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9ad980(Cpu *restrict c) {
    FN_ENTER(0x9ad980u);
L_9ad980:;
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9ad988(Cpu *restrict c) {
    FN_ENTER(0x9ad988u);
L_9ad988:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9ad98c(Cpu *restrict c) {
    FN_ENTER(0x9ad98cu);
L_9ad98c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9ad990(Cpu *restrict c) {
    FN_ENTER(0x9ad990u);
L_9ad990:;
    c->r[0] = 0x1093370u;
    { uint32_t ea = 0x9ad99cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9ad9a0(Cpu *restrict c) {
    FN_ENTER(0x9ad9a0u);
L_9ad9a0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9ad9ac(Cpu *restrict c) {
    FN_ENTER(0x9ad9acu);
L_9ad9ac:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9ad9b8(Cpu *restrict c) {
    FN_ENTER(0x9ad9b8u);
L_9ad9b8:;
    c->r[0] = 0x1093340u;
    { uint32_t ea = 0x9ad9c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9ad9c8(Cpu *restrict c) {
    FN_ENTER(0x9ad9c8u);
L_9ad9c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[14] = 0x9ad9e0u; f_9ac2e0(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9ad9e8(Cpu *restrict c) {
    FN_ENTER(0x9ad9e8u);
L_9ad9e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[14] = 0x9ad9fcu; f_9ac2e0(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9ada04(Cpu *restrict c) {
    FN_ENTER(0x9ada04u);
L_9ada04:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->pc = c->r[12]; c->r[14] = 0x9ada24u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9ada2c(Cpu *restrict c) {
    FN_ENTER(0x9ada2cu);
L_9ada2c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[12] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[14]); }
    c->pc = c->r[12]; c->r[14] = 0x9ada48u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9ada50(Cpu *restrict c) {
    FN_ENTER(0x9ada50u);
L_9ada50:;
    __attribute__((musttail)) return f_9ac87c(c);
}
void f_9ada54(Cpu *restrict c) {
    FN_ENTER(0x9ada54u);
L_9ada54:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = 0x0u;
    c->r[0] = 0x1u;
    c->r[3] = 0x58u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x1093258u;
    { uint32_t ea = 0x9ada7cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x108b0e0u;
    { uint32_t ea = 0x9ada84u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xda85fcu;
    c->r[1] = 0x9ada8cu + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x9ada90u; f_9aedcc(c);
    c->r[0] = 0x1093260u;
    c->r[1] = 0xdbfbc7u;
    c->r[2] = c->r[4];
    c->r[3] = 0x58u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x9adab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9adab8u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1093220u;
    { uint32_t ea = 0x9adac8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9adac8u; f_9aedcc(c);
    c->r[1] = 0x1093230u;
    c->r[2] = c->r[4];
    c->r[3] = 0x2a4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x9adae8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x10931f8u;
    c->r[1] = 0xdbfb9au;
    { uint32_t ea = 0x9adafcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9adb00u + c->r[1];
    c->r[14] = 0x9adb00u; f_9aedcc(c);
    c->r[1] = 0x10931fcu;
    c->r[2] = c->r[4];
    c->r[3] = 0x6cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x9adb20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x10931c8u;
    c->r[1] = 0xdbfb8eu;
    { uint32_t ea = 0x9adb34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9adb38u + c->r[1];
    c->r[14] = 0x9adb38u; f_9aedcc(c);
    c->r[1] = 0x10931c8u;
    c->r[2] = c->r[4];
    c->r[3] = 0x8cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x9adb58u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1093198u;
    c->r[1] = 0xdbfb85u;
    { uint32_t ea = 0x9adb6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9adb70u + c->r[1];
    c->r[14] = 0x9adb70u; f_9aedcc(c);
    c->r[1] = 0x1093194u;
    c->r[2] = c->r[4];
    c->r[3] = 0x2b8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x9adb90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1093168u;
    c->r[1] = 0xdbfb61u;
    { uint32_t ea = 0x9adba4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9adba8u + c->r[1];
    c->r[14] = 0x9adba8u; f_9aedcc(c);
    c->r[1] = 0x1093174u;
    { uint32_t ea = 0x9adbb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9adc0c(Cpu *restrict c) {
    FN_ENTER(0x9adc0cu);
L_9adc0c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1093110u;
    { uint32_t ea = 0x9adc1cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9adc20u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x98u;
    c->pc = c->r[4]; c->r[14] = 0x9adc38u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x108cc1cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x9adc4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x3cu; }
    c->r[1] = 0x1u;
    c->r[14] = 0x9adc5cu; f_15effb0(c);
    c->r[0] = 0x10930c8u;
    { uint32_t ea = 0x9adc68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9adc80(Cpu *restrict c) {
    FN_ENTER(0x9adc80u);
L_9adc80:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x109309cu;
    { uint32_t ea = 0x9adc94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9add48; }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9adccc; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9adcd4; }
    c->r[0] = 0x109302cu;
    { uint32_t ea = 0x9adcc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9adcd4; }
L_9adccc:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9adcd4u; f_15efe00(c);
L_9adcd4:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9add08; }
    c->r[5] = 0x0u;
L_9adce4:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x9adcf0u; f_9aeaf8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9add08; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_9adce4; }
L_9add08:;
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9add30; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9add38; }
    c->r[0] = 0x1092fc8u;
    { uint32_t ea = 0x9add28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9add38; }
L_9add30:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9add38u; f_15efe0c(c);
L_9add38:;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[4] + 0x54u;
    c->r[14] = 0x9add48u; f_9af344(c);
L_9add48:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_9ad840(c);
}
void f_9add60(Cpu *restrict c) {
    FN_ENTER(0x9add60u);
L_9add60:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x9add6cu; f_9adc80(c);
    c->r[0] = 0x1092fb4u;
    { uint32_t ea = 0x9add78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9add78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9add90(Cpu *restrict c) {
    FN_ENTER(0x9add90u);
L_9add90:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[11] = c->r[0];
    c->r[4] = c->r[3];
    c->r[6] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[11] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9addd0; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9addd8; }
    c->r[0] = 0x1092f28u;
    { uint32_t ea = 0x9addc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9addd8; }
L_9addd0:;
    c->r[0] = c->r[11] + 0x3cu;
    c->r[14] = 0x9addd8u; f_15efe00(c);
L_9addd8:;
    { uint32_t ea = c->r[11] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_9addf0; }
    c->r[0] = c->r[11] + 0x5cu;
    goto L_9ade04;
L_9addf0:;
    { uint32_t ea = c->r[11] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[11] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[2] << 5);
L_9ade04:;
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9ade7c; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[10] = c->r[7] + 0x3u;
    c->r[12] = c->r[4];
    c->r[1] = 0x0u - c->r[6];
    c->r[3] = c->r[6] - 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[10] = c->r[10] & 0xfffffffcu;
L_9ade30:;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[2] - 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[3] + c->r[4];
    c->r[6] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[0] = c->r[0] & c->r[1];
    c->r[0] = c->r[0] - c->r[4];
    c->r[8] = f_subs(c, c->r[0], c->r[7]);
    c->r[6] = f_sbcs(c, 0x0u, c->r[6]);
    c->r[6] = 0x0u;
    if (COND_CC) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[7] - c->r[0]; }
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_CS) { goto L_9ade84; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9ade30; }
L_9ade7c:;
    c->r[5] = 0x0u;
    goto L_9ae168;
L_9ade84:;
    c->r[1] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = c->r[14] & 0x3fffu;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[12]); }
    c->r[12] = (c->r[0] << 8);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[10]); }
    c->r[7] = c->r[1] - c->r[7];
    c->r[0] = c->r[14] | (c->r[3] << 16);
    c->r[4] = c->r[0] | 0x8000u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] + 0x90u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = c->r[0] + 0x18u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_9adf14; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[14]; c->r[0] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    { uint32_t ea = c->r[14] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_9adf1c;
L_9adf14:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[10];
L_9adf1c:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[7]); }
    c->r[7] = c->r[6] - c->r[10];
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], (c->r[3] << 1));
    if (COND_CC) { goto L_9ae064; }
    c->r[6] = f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_9ae064; }
    c->r[7] = c->r[1] + c->r[0];
    c->r[4] = 0x3u;
    c->r[0] = c->r[7] + c->r[3];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[0] = (c->r[0] & 0x3fffu) | ((c->r[4] << 14) & 0xffffc000u);
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] & 0xffff0000u;
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[1] | c->r[4];
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xc000u;
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[6]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | (c->r[1] & 0xFFFF0000u);
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[3]); }
    c->r[3] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0xcu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[8] + 0xcu; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[7]); } }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[7]); } }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[9] = c->r[0] + 0x4u; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[7]); } }
    if (COND_NE) { { uint32_t ea = c->r[1]; ST32(ea, c->r[7]); } }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[14] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_NE) { goto L_9ae128; }
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[3] + c->r[2];
    c->r[0] = c->r[7] + c->r[0];
    c->r[0] = c->r[0] + (c->r[1] >> 8);
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CC) { c->r[0] = c->r[7]; }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[0]); }
    goto L_9ae12c;
L_9ae064:;
    c->r[0] = f_adds(c, c->r[0], c->r[7]);
    c->r[2] = (c->r[12] >> 8);
    c->r[1] = c->r[12] + 0x0u + c->cf;
    c->r[1] = (c->r[1] & 0xffu) | ((c->r[2] << 8) & 0xffffff00u);
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[14] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0xcu;
    if (COND_EQ) { c->r[1] = c->r[8] + 0xcu; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[4]); } }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[4]); } }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[9] = c->r[0] + 0x4u; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[2]); } }
    if (COND_NE) { { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); } }
    c->r[3] = 0xffffu;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = (c->r[0] >> 8);
    c->r[2] = c->r[0] | (c->r[2] << 24);
    { uint32_t ea = c->r[11] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_NE) { goto L_9ae11c; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[2];
    c->r[3] = c->r[3] & 0xffffffu;
    c->r[0] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CC) { c->r[0] = c->r[3]; }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[0]); }
L_9ae11c:;
    c->r[2] = c->r[2] & 0xffffffu;
    c->r[1] = c->r[2] + c->r[1];
    goto L_9ae138;
L_9ae128:;
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
L_9ae12c:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[3] + c->r[2];
    c->r[1] = c->r[0] + (c->r[1] >> 8);
L_9ae138:;
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { c->r[0] = c->r[1]; }
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x9ae164u; f_15efff8(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
L_9ae168:;
    { uint32_t ea = c->r[11] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ae190; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ae198; }
    c->r[0] = 0x1092b68u;
    { uint32_t ea = 0x9ae188u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ae198; }
L_9ae190:;
    c->r[0] = c->r[11] + 0x3cu;
    c->r[14] = 0x9ae198u; f_15efe0c(c);
L_9ae198:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9ae1ac(Cpu *restrict c) {
    FN_ENTER(0x9ae1acu);
L_9ae1ac:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x44u;
    c->r[11] = c->r[0];
    c->r[8] = c->r[3];
    c->r[6] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[11] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ae1ec; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ae1f4; }
    c->r[0] = 0x1092b0cu;
    { uint32_t ea = 0x9ae1e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ae1f4; }
L_9ae1ec:;
    c->r[0] = c->r[11] + 0x3cu;
    c->r[14] = 0x9ae1f4u; f_15efe00(c);
L_9ae1f4:;
    { uint32_t ea = c->r[11] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_9ae20c; }
    c->r[9] = c->r[11] + 0x5cu;
    goto L_9ae220;
L_9ae20c:;
    { uint32_t ea = c->r[11] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[11] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + (c->r[2] << 5);
L_9ae220:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9ae28c; }
    c->r[12] = c->r[7] + 0x3u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[14] = c->r[6] - 0x1u;
    c->r[12] = c->r[12] & 0xfffffffcu;
    c->r[3] = 0x0u - c->r[12];
L_9ae240:;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[2] - 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[6] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[4] = c->r[0] + c->r[3];
    c->r[0] = c->r[4] & c->r[14];
    c->r[1] = f_subs(c, c->r[0], c->r[7]);
    c->r[1] = f_sbcs(c, 0x0u, c->r[6]);
    c->r[6] = 0x0u;
    if (COND_CC) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[7] - c->r[0]; }
    (void)f_subs(c, c->r[6], c->r[12]);
    if (COND_CS) { goto L_9ae294; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9ae240; }
L_9ae28c:;
    c->r[5] = 0x0u;
    goto L_9ae4c0;
L_9ae294:;
    c->r[3] = c->r[4] - c->r[0];
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = c->r[10] & 0x3fffu;
    c->r[14] = c->r[0] + c->r[12];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x8cu; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[14]); }
    c->r[8] = c->r[10] | (c->r[4] << 16);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] + 0x90u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[3] - c->r[7];
    c->r[3] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[3] + 0x18u;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_9ae314; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[3] + 4u; c->r[1] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); }
    goto L_9ae318;
L_9ae314:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
L_9ae318:;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->r[6] = c->r[6] - c->r[12];
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_9ae3c8; }
    c->r[7] = (c->r[4] << 1);
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_CC) { goto L_9ae3c8; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 4u; c->r[6] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    c->r[4] = f_adds(c, c->r[14], c->r[4]);
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[1] + 0x0u + c->cf;
    c->r[7] = f_subs(c, c->r[7], c->r[4]);
    c->r[1] = c->r[6] - c->r[1] - 1u + c->cf;
    c->r[6] = (c->r[6] >> 8);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
    c->r[7] = 0xffffu;
    c->r[1] = (c->r[1] & 0xffu) | ((c->r[6] << 8) & 0xffffff00u);
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_EQ) { { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_NE) { goto L_9ae488; }
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[3] + c->r[2];
    c->r[7] = c->r[6] + c->r[7];
    c->r[7] = c->r[7] + (c->r[1] >> 8);
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_CC) { c->r[7] = c->r[6]; }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[7]); }
    goto L_9ae48c;
L_9ae3c8:;
    c->r[2] = c->r[6] + (c->r[1] >> 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[14]); }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0xcu;
    if (COND_EQ) { c->r[2] = c->r[9] + 0xcu; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[7] = c->r[9] + 0x4u; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    c->r[7] = 0xffffu;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[2]); } }
    if (COND_NE) { { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); } }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[2] = (c->r[2] >> 8);
    c->r[6] = c->r[2] | (c->r[3] << 24);
    { uint32_t ea = c->r[11] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_NE) { goto L_9ae47c; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[6];
    c->r[2] = c->r[2] & 0xffffffu;
    c->r[3] = c->r[3] + c->r[1];
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { c->r[2] = c->r[3]; }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[2]); }
L_9ae47c:;
    c->r[6] = c->r[6] & 0xffffffu;
    c->r[1] = c->r[6] + c->r[1];
    goto L_9ae494;
L_9ae488:;
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
L_9ae48c:;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[2] + (c->r[1] >> 8);
L_9ae494:;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { c->r[1] = c->r[2]; }
    { uint32_t ea = c->r[9] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x9ae4bcu; f_15efff8(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
L_9ae4c0:;
    { uint32_t ea = c->r[11] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ae4e8; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ae4f0; }
    c->r[0] = 0x1092810u;
    { uint32_t ea = 0x9ae4e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ae4f0; }
L_9ae4e8:;
    c->r[0] = c->r[11] + 0x3cu;
    c->r[14] = 0x9ae4f0u; f_15efe0c(c);
L_9ae4f0:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9ae504(Cpu *restrict c) {
    FN_ENTER(0x9ae504u);
L_9ae504:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x44u;
    c->r[5] = c->r[1];
    c->r[11] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9aea4c; }
    { uint32_t ea = c->r[11] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ae544; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ae54c; }
    c->r[0] = 0x10927b4u;
    { uint32_t ea = 0x9ae53cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ae54c; }
L_9ae544:;
    c->r[0] = c->r[11] + 0x3cu;
    c->r[14] = 0x9ae54cu; f_15efe00(c);
L_9ae54c:;
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0xffffu;
    c->r[2] = c->r[5] - c->r[0];
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_NE) { goto L_9ae578; }
    c->r[8] = c->r[11] + 0x5cu;
    goto L_9ae594;
L_9ae578:;
    { uint32_t ea = c->r[11] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xffe0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x1f0000u;
    c->r[0] = c->r[3] & (c->r[0] >> 11);
    c->r[8] = c->r[1] + c->r[0];
L_9ae594:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[3] = c->r[8];
    c->r[14] = 0x4000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[3] = c->r[0] + 0x4u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9ae68c; }
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & c->r[14]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ae68c; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[6] = v; c->r[7] = v2; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = f_adds(c, c->r[6], c->r[4]);
    c->r[6] = c->r[7] + c->r[12] + c->cf;
    c->r[4] = f_adds(c, c->r[4], c->r[5]);
    c->r[5] = c->r[6] + 0x0u + c->cf;
    c->r[10] = f_adds(c, c->r[4], (c->r[7] >> 8));
    c->r[4] = (c->r[12] >> 8);
    c->r[6] = c->r[5] + 0x0u + c->cf;
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[10]); }
    c->r[5] = (c->r[5] & 0xffu) | ((c->r[4] << 8) & 0xffffff00u);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; } }
    if (COND_NE) { { uint32_t r = c->r[4] & c->r[14]; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_9ae888; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = c->r[12] & 0xffffff00u;
    c->r[2] = f_adds(c, c->r[2], c->r[10]);
    c->r[7] = c->r[7] + c->r[6] + c->cf;
    c->r[2] = f_adds(c, c->r[2], c->r[4]);
    c->r[7] = c->r[7] + 0x0u + c->cf;
    c->r[7] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[7] = c->r[7] | c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ae8c4; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_9ae8cc;
L_9ae68c:;
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = 0xc000u;
    c->r[10] = ~0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & c->r[14]; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_9ae7a4; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[8];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[10] = 0x0u;
    c->r[0] = c->r[2] - (c->r[5] >> 8);
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    c->r[7] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    c->r[6] = c->r[6] & c->r[7];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[6] = 0xc000u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    c->r[6] = f_adds(c, c->r[4], c->r[8]);
    c->r[4] = c->r[14] + c->r[5] + c->cf;
    c->r[6] = f_adds(c, c->r[6], (c->r[5] >> 8));
    c->r[5] = c->r[4] + 0x0u + c->cf;
    c->r[2] = f_adds(c, c->r[6], c->r[2]);
    c->r[6] = c->r[5] + 0x0u + c->cf;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[6] = (uint32_t)(uint8_t)(c->r[6]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[3] + 0xcu;
    if (COND_EQ) { c->r[2] = c->r[12] + 0xcu; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[12] + 0x10u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] + 0x4u;
    c->r[2] = 0xffffu;
    if (COND_EQ) { c->r[3] = c->r[12] + 0x4u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[11] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_9ae8a4; }
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[1] + c->r[2];
    c->r[2] = c->r[6] - c->r[2];
    c->r[2] = c->r[2] - (c->r[3] >> 8);
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[2]); }
    goto L_9ae8a8;
L_9ae7a4:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[4] = v; c->r[5] = v2; }
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = c->r[8];
    c->r[0] = c->r[2] - (c->r[5] >> 8);
    c->r[7] = c->r[7] & c->r[10];
    c->r[6] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    c->r[7] = f_adds(c, c->r[4], (c->r[5] >> 8));
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[12]); }
    c->r[5] = c->r[5] + 0x0u + c->cf;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[5] = (uint32_t)(uint8_t)(c->r[5]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + 0xcu;
    c->r[5] = 0x0u;
    if (COND_EQ) { c->r[1] = c->r[8] + 0xcu; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[14] + 0x4u; uint32_t v = LD32(ea); c->r[14] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9ae92c; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_9ae9b0; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = 0x0u;
    c->r[5] = 0x0u;
L_9ae844:;
    c->r[6] = c->r[1];
    c->r[7] = c->r[3];
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_9ae998; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_HI) { goto L_9ae9a0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9ae9ac; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[7];
    c->r[5] = c->r[6];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9ae844; }
    goto L_9ae9b0;
L_9ae888:;
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ae934; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_9ae93c;
L_9ae8a4:;
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
L_9ae8a8:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[12] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] - c->r[1];
    c->r[1] = c->r[1] - (c->r[3] >> 8);
    { uint32_t ea = c->r[12] + 0x18u; ST32(ea, c->r[1]); }
    goto L_9aea08;
L_9ae8c4:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[3]); }
L_9ae8cc:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); } }
    { uint32_t ea = c->r[11] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_9ae91c; }
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[4] = v; c->r[5] = v2; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] - (c->r[0] << 1);
    c->r[2] = c->r[2] - c->r[4];
    c->r[1] = c->r[2] + c->r[1];
    c->r[1] = c->r[1] - (c->r[5] >> 8);
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[1]); }
    goto L_9ae920;
L_9ae91c:;
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
L_9ae920:;
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    goto L_9ae978;
L_9ae92c:;
    c->r[7] = 0x0u;
    goto L_9ae9b0;
L_9ae934:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[3]); }
L_9ae93c:;
    { uint32_t ea = c->r[11] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_9ae96c; }
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + c->r[2];
    c->r[1] = c->r[1] - c->r[2];
    c->r[1] = c->r[1] - (c->r[3] >> 8);
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[1]); }
    goto L_9ae970;
L_9ae96c:;
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
L_9ae970:;
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + c->r[1];
L_9ae978:;
    c->r[1] = (c->r[2] >> 8);
    c->r[1] = c->r[1] | (c->r[3] << 24);
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    goto L_9aea14;
L_9ae998:;
    c->r[7] = c->r[6];
    goto L_9ae9b0;
L_9ae9a0:;
    c->r[5] = c->r[7];
    c->r[7] = c->r[4];
    goto L_9ae9b0;
L_9ae9ac:;
    c->r[5] = c->r[6];
L_9ae9b0:;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[2] = 0xffffu;
    if (COND_NE) { c->r[14] = c->r[5] + 0x4u; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[11] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_9ae9f4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[1] = c->r[1] - (c->r[3] >> 8);
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[1]); }
L_9ae9f4:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[1] = c->r[1] - (c->r[3] >> 8);
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[1]); }
L_9aea08:;
    { uint32_t ea = c->r[11] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x8u;
    c->r[14] = 0x9aea14u; f_15efff8(c);
L_9aea14:;
    { uint32_t ea = c->r[11] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9aea3c; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9aea4c; }
    c->r[0] = 0x10922bcu;
    { uint32_t ea = 0x9aea34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aea4c; }
L_9aea3c:;
    c->r[0] = c->r[11] + 0x3cu;
    c->r[13] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_9aea4c:;
    c->r[13] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9aea5c(Cpu *restrict c) {
    FN_ENTER(0x9aea5cu);
L_9aea5c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9aeae4; }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9aea98; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9aeaa4; }
    c->r[1] = 0x1092260u;
    { uint32_t ea = 0x9aea90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9aeaa4; }
L_9aea98:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9aeaa0u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
L_9aeaa4:;
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[5] - c->r[1];
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_NE) { goto L_9aead4; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9aeadc; }
    c->r[0] = 0x1092224u;
    { uint32_t ea = 0x9aeaccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aeadc; }
L_9aead4:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9aeadcu; f_15efe0c(c);
L_9aeadc:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9aeae4:;
    c->r[5] = 0x0u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9aeaf8(Cpu *restrict c) {
    FN_ENTER(0x9aeaf8u);
L_9aeaf8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LS) { goto L_9aeca8; }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9aeb3c; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9aeb44; }
    c->r[0] = 0x10921bcu;
    { uint32_t ea = 0x9aeb34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aeb44; }
L_9aeb3c:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9aeb44u; f_15efe00(c);
L_9aeb44:;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_9aec78; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[7] + (c->r[8] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aec74; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_LS) { goto L_9aec78; }
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9aeba0; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9aebb8; }
    c->r[1] = 0x1092158u;
    { uint32_t ea = 0x9aeb98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9aebb8; }
L_9aeba0:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9aeba8u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + (c->r[8] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aebf0; }
L_9aebb8:;
    c->r[1] = c->r[7] + (c->r[8] << 3);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9aebf8; }
    c->r[2] = 0x0u;
L_9aebcc:;
    { uint32_t ea = c->r[0] + (c->r[2] << 5); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[6] = 0x1u; }
    if (COND_NE) { goto L_9aebfc; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_9aebcc; }
    goto L_9aebfc;
L_9aebf0:;
    c->r[6] = 0x0u;
    goto L_9aebfc;
L_9aebf8:;
    c->r[6] = 0x1u;
L_9aebfc:;
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9aec24; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9aec3c; }
    c->r[0] = 0x10920d4u;
    { uint32_t ea = 0x9aec1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aec3c; }
L_9aec24:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9aec2cu; f_15efe0c(c);
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_9aec78; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_9aec44;
L_9aec3c:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_9aec78; }
L_9aec44:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + (c->r[8] << 3); uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x9aec58u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[0]); }
L_9aec74:;
    c->r[5] = 0x1u;
L_9aec78:;
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9aeca0; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9aeca8; }
    c->r[0] = 0x1092058u;
    { uint32_t ea = 0x9aec98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aeca8; }
L_9aeca0:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x9aeca8u; f_15efe0c(c);
L_9aeca8:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9aecc0(Cpu *restrict c) {
    FN_ENTER(0x9aecc0u);
L_9aecc0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9aecc4(Cpu *restrict c) {
    FN_ENTER(0x9aecc4u);
L_9aecc4:;
    c->r[0] = 0x109205cu;
    { uint32_t ea = 0x9aecd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9aecd4(Cpu *restrict c) {
    FN_ENTER(0x9aecd4u);
L_9aecd4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->pc = c->r[12]; c->r[14] = 0x9aecf4u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9aecfc(Cpu *restrict c) {
    FN_ENTER(0x9aecfcu);
L_9aecfc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[12] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[14]); }
    c->pc = c->r[12]; c->r[14] = 0x9aed18u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9aed20(Cpu *restrict c) {
    FN_ENTER(0x9aed20u);
L_9aed20:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->pc = c->r[12]; c->r[14] = 0x9aed40u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9aed48(Cpu *restrict c) {
    FN_ENTER(0x9aed48u);
L_9aed48:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[12] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[14]); }
    c->pc = c->r[12]; c->r[14] = 0x9aed64u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9aed6c(Cpu *restrict c) {
    FN_ENTER(0x9aed6cu);
L_9aed6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[1] = 0x1091f3cu;
    c->r[3] = 0x98u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1091f8cu;
    { uint32_t ea = 0x9aed98u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xdbe978u;
    { uint32_t ea = 0x9aeda0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9aeda4u + c->r[1];
    c->r[14] = 0x9aeda4u; f_9aedcc(c);
    c->r[1] = 0x1091f84u;
    { uint32_t ea = 0x9aedb0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9aedcc(Cpu *restrict c) {
    FN_ENTER(0x9aedccu);
L_9aedcc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1091f4cu;
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0x9aedecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = (c->r[3] >> 2) & 0x7fffffu;
    c->r[0] = c->r[0] | (c->r[2] << 29);
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x1f800000u;
    c->r[2] = c->r[0] | c->r[2];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9aee30; }
    c->r[0] = c->r[1];
    c->r[1] = ~0x0u;
    c->r[14] = 0x9aee28u; f_9cbdb4(c);
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0x7fffffffu;
L_9aee30:;
    c->r[2] = (c->r[2] & 0xe07fffffu) | ((c->r[6] << 23) & 0x1f800000u);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1091d24u;
    if (COND_EQ) { { uint32_t ea = 0x9aee4cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; } }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aee78; }
L_9aee58:;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9aee58; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    goto L_9aee7c;
L_9aee78:;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[4]); }
L_9aee7c:;
    c->r[0] = 0x1091eb0u;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x9aee8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9aeea4; }
L_9aee94:;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9aee94; }
L_9aeea4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9aeebc(Cpu *restrict c) {
    FN_ENTER(0x9aeebcu);
L_9aeebc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9aeefc; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aeeec; }
    c->r[1] = c->r[5];
    c->r[14] = 0x9aeee4u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aef00; }
L_9aeeec:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_9aef08(c);
L_9aeefc:;
    c->r[4] = 0x0u;
L_9aef00:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9aef08(Cpu *restrict c) {
    FN_ENTER(0x9aef08u);
L_9aef08:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9aef2c; }
    goto L_9aef58;
L_9aef20:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9aef58; }
L_9aef2c:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x9aef38u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aef60; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x9aef4cu; f_9aef08(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aef20; }
    goto L_9aef5c;
L_9aef58:;
    c->r[0] = 0x0u;
L_9aef5c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9aef60:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9aef68(Cpu *restrict c) {
    FN_ENTER(0x9aef68u);
L_9aef68:;
    c->r[1] = c->r[0];
    c->r[0] = 0x1091dc0u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = 0x9aef7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    goto L_9aef88;
L_9aef84:;
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
L_9aef88:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_9aef84; }
    c->r[0] = c->r[2];
    return;
}
void f_9aefa8(Cpu *restrict c) {
    FN_ENTER(0x9aefa8u);
L_9aefa8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[10] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9af07c; }
    c->r[9] = 0x0u;
    c->r[5] = 0x0u;
L_9aefc8:;
    c->r[8] = c->r[5];
    c->r[11] = c->r[8];
L_9aefd0:;
    c->r[6] = 0x0u;
    c->r[4] = 0x0u;
    c->r[5] = c->r[7];
L_9aefdc:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9aefe8u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_GT) { c->r[4] = c->r[6]; }
    if (COND_GT) { c->r[5] = c->r[7]; }
    c->r[6] = c->r[7];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->r[0];
    if (COND_NE) { goto L_9aefdc; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[0] = c->r[10];
    if (COND_NE) { c->r[0] = c->r[4] + 0x8u; }
    (void)f_subs(c, c->r[11], 0x0u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_9af040; }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[5]); }
    c->r[11] = c->r[5];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_9aefd0; }
    goto L_9af050;
L_9af040:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_9aefc8; }
    goto L_9af054;
L_9af050:;
    c->r[5] = c->r[8];
L_9af054:;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9af074; }
L_9af060:;
    c->r[0] = c->r[5];
    c->r[14] = 0x9af068u; f_9aefa8(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9af060; }
L_9af074:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9af07c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9af08c(Cpu *restrict c) {
    FN_ENTER(0x9af08cu);
L_9af08c:;
    c->r[0] = 0x1091ad8u;
    { uint32_t ea = 0x9af098u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    __attribute__((musttail)) return f_9aefa8(c);
}
void f_9af09c(Cpu *restrict c) {
    FN_ENTER(0x9af09cu);
L_9af09c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9af0d8; }
L_9af0b0:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] >> 23);
    c->r[0] = (c->r[0] & 0xe07fffffu) | ((c->r[1] << 23) & 0x1f800000u);
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9af0ccu; f_9af09c(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9af0b0; }
L_9af0d8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9af0dc(Cpu *restrict c) {
    FN_ENTER(0x9af0dcu);
L_9af0dc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9af0e0(Cpu *restrict c) {
    FN_ENTER(0x9af0e0u);
L_9af0e0:;
    c->r[0] = 0x0u;
    return;
}
void f_9af0e8(Cpu *restrict c) {
    FN_ENTER(0x9af0e8u);
L_9af0e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x9af0f4u; f_15f004c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9af0fc(Cpu *restrict c) {
    FN_ENTER(0x9af0fcu);
L_9af0fc:;
    __attribute__((musttail)) return f_9ad840(c);
}
void f_9af100(Cpu *restrict c) {
    FN_ENTER(0x9af100u);
L_9af100:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1091c2cu;
    { uint32_t ea = 0x9af114u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9af114u; f_15efe00(c);
    c->r[0] = 0x1091c24u;
    { uint32_t ea = 0x9af120u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_9af154; }
    c->r[1] = 0x1091c10u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x9af138u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x4u;
L_9af138:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9af178; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_9af138; }
L_9af154:;
    c->r[1] = 0x1091bdcu;
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x9af168u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x1091bd4u;
    { uint32_t ea = 0x9af174u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 2);
    goto L_9af17c;
L_9af178:;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[2]); }
L_9af17c:;
    c->r[0] = 0x1091bb4u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x9af18cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_15efe0c(c);
}
void f_9af1a8(Cpu *restrict c) {
    FN_ENTER(0x9af1a8u);
L_9af1a8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1091b84u;
    { uint32_t ea = 0x9af1bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9af1bcu; f_15efe00(c);
    c->r[0] = 0x1091b7cu;
    { uint32_t ea = 0x9af1c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_9af208; }
    c->r[2] = 0x1091b68u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x9af1e0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9af1dc:;
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_EQ) { goto L_9af1f8; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_9af1dc; }
    goto L_9af208;
L_9af1f8:;
    c->r[0] = 0x1091b40u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x9af208u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
L_9af208:;
    c->r[0] = 0x1091b2cu;
    { uint32_t ea = 0x9af214u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_15efe0c(c);
}
void f_9af22c(Cpu *restrict c) {
    FN_ENTER(0x9af22cu);
L_9af22c:;
    c->r[1] = 0x108a210u;
    c->r[0] = 0x0u;
    { uint32_t ea = 0x9af23cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_9af238:;
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + (c->r[0] << 2); c->r[3] = v; }
    c->r[0] = c->r[0] + 0x3u;
    (void)f_subs(c, c->r[0], 0x3fu);
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_9af238; }
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1091ad4u;
    { uint32_t ea = 0x9af270u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_9af2b4; }
    c->r[0] = 0x1091ac0u;
    c->r[4] = 0x1u;
    { uint32_t ea = 0x9af288u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1091ab4u;
    { uint32_t ea = 0x9af290u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9af28c:;
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9af2a8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9af2a4u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
L_9af2a8:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_9af28c; }
L_9af2b4:;
    c->r[0] = 0x1091a80u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x9af2c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9af2dc(Cpu *restrict c) {
    FN_ENTER(0x9af2dcu);
L_9af2dc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0x1091a48u;
    c->r[8] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = 0x9af2f8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x9af2fcu; f_15efe00(c);
    c->r[0] = 0xffffu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x1f0000u;
    c->r[5] = c->r[5] + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[5] = c->r[5] & 0xffe00000u;
    c->r[1] = c->r[5];
    c->r[14] = 0x9af318u; f_15f0124(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[5]); }
    c->r[14] = 0x9af32cu; f_15efe0c(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { c->r[4] = 0x0u; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9af344(Cpu *restrict c) {
    FN_ENTER(0x9af344u);
L_9af344:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x10919e4u;
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = 0x9af35cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x9af360u; f_15efe00(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9af36cu; f_15f0130(c);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
}
void f_9af37c(Cpu *restrict c) {
    FN_ENTER(0x9af37cu);
L_9af37c:;
    c->r[1] = c->r[0];
    c->r[0] = 0x108a0c0u;
    { uint32_t ea = 0x9af38cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9af3a0(Cpu *restrict c) {
    FN_ENTER(0x9af3a0u);
L_9af3a0:;
    c->r[1] = c->r[0];
    c->r[0] = 0x108a09cu;
    { uint32_t ea = 0x9af3b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9af3c4(Cpu *restrict c) {
    FN_ENTER(0x9af3c4u);
L_9af3c4:;
    c->r[1] = c->r[0];
    c->r[0] = 0x108a078u;
    { uint32_t ea = 0x9af3d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9af3e4(Cpu *restrict c) {
    FN_ENTER(0x9af3e4u);
L_9af3e4:;
    c->r[1] = c->r[0];
    c->r[0] = 0x108a058u;
    { uint32_t ea = 0x9af3f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9af404(Cpu *restrict c) {
    FN_ENTER(0x9af404u);
L_9af404:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1091920u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9af420u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9af424u; f_15effb0(c);
    c->r[0] = 0x1091914u;
    c->r[1] = 0x108a984u;
    { uint32_t ea = 0x9af434u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x9af438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x9af43cu; f_200288(c);
    c->r[0] = 0x1091908u;
    { uint32_t ea = 0x9af448u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9af448u; f_9aaf00(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x9af450u; f_15efe00(c);
    c->r[0] = 0x1089fecu;
    c->r[1] = 0x10918ecu;
    { uint32_t ea = 0x9af460u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9af464u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_9af460:;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + c->r[5]; ST32(ea, c->r[1]); c->r[2] = ea; }
    c->r[5] = c->r[5] + 0x10u;
    (void)f_subs(c, c->r[5], 0x100u);
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_9af460; }
    c->r[0] = 0x10918b4u;
    { uint32_t ea = 0x9af48cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9af48cu; f_15efe0c(c);
    c->r[0] = 0x10918b4u;
    c->r[1] = 0x10918acu;
    c->r[2] = 0x108a910u;
    { uint32_t ea = 0x9af4a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9af4a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x9af4a8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_200288(c);
}
void f_9af4d4(Cpu *restrict c) {
    FN_ENTER(0x9af4d4u);
L_9af4d4:;
    c->r[1] = c->r[0];
    c->r[0] = 0x1089f68u;
    { uint32_t ea = 0x9af4e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9af4f8(Cpu *restrict c) {
    FN_ENTER(0x9af4f8u);
L_9af4f8:;
    c->r[1] = c->r[0];
    c->r[0] = 0x1089f44u;
    { uint32_t ea = 0x9af508u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9af518(Cpu *restrict c) {
    FN_ENTER(0x9af518u);
L_9af518:;
    c->r[1] = c->r[0];
    c->r[0] = 0x1089f24u;
    { uint32_t ea = 0x9af528u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9af53c(Cpu *restrict c) {
    FN_ENTER(0x9af53cu);
L_9af53c:;
    c->r[1] = c->r[0];
    c->r[0] = 0x1089f00u;
    { uint32_t ea = 0x9af54cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9af55c(Cpu *restrict c) {
    FN_ENTER(0x9af55cu);
L_9af55c:;
    c->r[0] = 0x0u;
    return;
}
void f_9af564(Cpu *restrict c) {
    FN_ENTER(0x9af564u);
L_9af564:;
    c->r[1] = c->r[0];
    c->r[0] = 0x1089ed8u;
    { uint32_t ea = 0x9af574u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9af584(Cpu *restrict c) {
    FN_ENTER(0x9af584u);
L_9af584:;
    c->r[0] = 0x10895d4u;
    { uint32_t ea = 0x9af590u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9af594(Cpu *restrict c) {
    FN_ENTER(0x9af594u);
L_9af594:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9af598(Cpu *restrict c) {
    FN_ENTER(0x9af598u);
L_9af598:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1089ea0u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x9af5acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x4u;
    c->pc = c->r[3]; c->r[14] = 0x9af5bcu; rt_dispatch(c);
    c->r[1] = 0x108f518u;
    { uint32_t ea = 0x9af5c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9af5d8(Cpu *restrict c) {
    FN_ENTER(0x9af5d8u);
L_9af5d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108955cu;
    c->r[1] = 0xdbe131u;
    { uint32_t ea = 0x9af608u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9af60cu + c->r[1];
    c->r[14] = 0x9af60cu; f_9aedcc(c);
    c->r[1] = 0x1091740u;
    { uint32_t ea = 0x9af618u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9af630(Cpu *restrict c) {
    FN_ENTER(0x9af630u);
L_9af630:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[3];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    c->r[2] = 0x80u;
    c->r[0] = c->r[2] | (c->r[0] << 16);
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10916d0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x9af68cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_9af688:;
    { uint32_t ea = c->r[7] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9af6b0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9af6a0u; rt_dispatch(c);
    c->r[1] = c->r[5];
    c->r[14] = 0x9af6a8u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9af6c4; }
L_9af6b0:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x10u);
    if (COND_CC) { goto L_9af688; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9af6c4:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0x80u;
    c->r[1] = c->r[1] & 0xffff0000u;
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9af6e4(Cpu *restrict c) {
    FN_ENTER(0x9af6e4u);
L_9af6e4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[3];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    c->r[2] = 0x80u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x800000u;
    c->r[0] = c->r[2] | (c->r[0] << 16);
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10915f8u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x9af764u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_9af760:;
    { uint32_t ea = c->r[7] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9af788; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9af778u; rt_dispatch(c);
    c->r[1] = c->r[5];
    c->r[14] = 0x9af780u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9af79c; }
L_9af788:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x10u);
    if (COND_CC) { goto L_9af760; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9af79c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0x80u;
    c->r[1] = c->r[1] & 0xffff0000u;
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9af7bc(Cpu *restrict c) {
    FN_ENTER(0x9af7bcu);
L_9af7bc:;
    c->r[1] = 0x1091594u;
    { uint32_t ea = 0x9af7c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x1091580u;
    { uint32_t ea = 0x9af7dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x109156cu;
    { uint32_t ea = 0x9af7f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x1091558u;
    { uint32_t ea = 0x9af804u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x1091544u;
    { uint32_t ea = 0x9af818u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x1091530u;
    { uint32_t ea = 0x9af82cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x109151cu;
    { uint32_t ea = 0x9af840u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x1091508u;
    { uint32_t ea = 0x9af854u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x10914f4u;
    { uint32_t ea = 0x9af868u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x10914e0u;
    { uint32_t ea = 0x9af87cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x10914ccu;
    { uint32_t ea = 0x9af890u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x10914b8u;
    { uint32_t ea = 0x9af8a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x10914a4u;
    { uint32_t ea = 0x9af8b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x1091490u;
    { uint32_t ea = 0x9af8ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x109147cu;
    { uint32_t ea = 0x9af8e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9af900; }
    c->r[1] = 0x1091468u;
    { uint32_t ea = 0x9af8f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); } }
    return;
L_9af900:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    return;
}
void f_9af948(Cpu *restrict c) {
    FN_ENTER(0x9af948u);
L_9af948:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x10913fcu;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9af960u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9af95c:;
    { uint32_t ea = c->r[6] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9af984; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9af974u; rt_dispatch(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x9af97cu; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9af998; }
L_9af984:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x10u);
    if (COND_CC) { goto L_9af95c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9af998:;
    c->r[0] = 0x10913b8u;
    { uint32_t ea = 0x9af9a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9af9b0(Cpu *restrict c) {
    FN_ENTER(0x9af9b0u);
L_9af9b0:;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x80u);
    if (COND_LT) { goto L_9af9cc; }
    c->r[1] = 0x1091394u;
    { uint32_t ea = 0x9af9c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] - 0x200u; uint32_t v = LD32(ea); c->r[1] = v; }
L_9af9cc:;
    c->r[0] = c->r[1];
    return;
}
void f_9af9d8(Cpu *restrict c) {
    FN_ENTER(0x9af9d8u);
L_9af9d8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1091370u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9af9f0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9af9ec:;
    { uint32_t ea = c->r[6] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x9af9f8u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9afa30; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x4bu);
    if (COND_CC) { goto L_9af9ec; }
    c->r[0] = 0xdbdf54u;
    c->r[1] = 0x9afa18u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x9afa1cu; f_15effa4(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = 0x80u; }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9afa30:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9afa40(Cpu *restrict c) {
    FN_ENTER(0x9afa40u);
L_9afa40:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1cu);
    if (COND_EQ) { goto L_9afa78; }
    (void)f_subs(c, c->r[1], 0x18u);
    if (COND_NE) { return; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9afa74; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_9afa74:;
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
L_9afa78:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[1] + (uint32_t)((int32_t)c->r[2] >> 1);
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9afa98; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9afa98:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[12];
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9afaa4(Cpu *restrict c) {
    FN_ENTER(0x9afaa4u);
L_9afaa4:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x7fu);
    if (COND_HI) { c->r[0] = 0x0u; }
    if (COND_HI) { return; }
    c->r[1] = 0xea12ccu;
    c->r[1] = 0x9afac4u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9afacc(Cpu *restrict c) {
    FN_ENTER(0x9afaccu);
L_9afacc:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4au);
    if (COND_HI) { goto L_9afae8; }
    c->r[1] = 0x109127cu;
    { uint32_t ea = 0x9afae4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    return;
L_9afae8:;
    c->r[0] = 0xdbde78u;
    c->r[0] = 0x9afaf4u + c->r[0];
    return;
}
