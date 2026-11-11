#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_383d3c(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9c5e4c(Cpu *c);
void f_9c6440(Cpu *c);
void f_a82674(Cpu *c);
void f_a8a6a8(Cpu *c);
void f_a8aa2c(Cpu *c);
void f_a8ac84(Cpu *c);
void f_a8b7d4(Cpu *c);
void f_a8b8bc(Cpu *c);
void f_a8bb38(Cpu *c);
void f_a8bb60(Cpu *c);
void f_a8bbc0(Cpu *c);
void f_a8bbd8(Cpu *c);
void f_a8bc0c(Cpu *c);
void f_a8bc70(Cpu *c);
void f_a8bc84(Cpu *c);
void f_a8bc98(Cpu *c);
void f_a8bcac(Cpu *c);
void f_a8bcc0(Cpu *c);
void f_a8bfb0(Cpu *c);
void f_a8c0c8(Cpu *c);
void f_bb6b10(Cpu *c);
void f_bbd840(Cpu *c);
void f_c57e4c(Cpu *c);
void f_c57ee0(Cpu *c);
void f_c57f14(Cpu *c);
void f_c58d7c(Cpu *c);
void f_c58e70(Cpu *c);
void f_c58fa8(Cpu *c);
void f_c59268(Cpu *c);
void f_c59ce4(Cpu *c);
void f_c5a384(Cpu *c);
void f_c5b224(Cpu *c);
void f_c5b658(Cpu *c);
void f_c5b880(Cpu *c);
void f_c5ca24(Cpu *c);
void f_c62db8(Cpu *c);
void f_c6785c(Cpu *c);
void f_c69d00(Cpu *c);
void f_c6a004(Cpu *c);
void f_c6a2a4(Cpu *c);
void f_c6a2cc(Cpu *c);
void f_c6a2d0(Cpu *c);
void f_c6a434(Cpu *c);
void f_c6adac(Cpu *c);
void f_c6b3c0(Cpu *c);
void f_c6b824(Cpu *c);
void f_c6bc0c(Cpu *c);
void f_c6be40(Cpu *c);
void f_c6c268(Cpu *c);
void f_c6cab8(Cpu *c);
void f_c704b4(Cpu *c);
void f_c736a8(Cpu *c);
void f_c74838(Cpu *c);
void f_c74880(Cpu *c);
void f_c7491c(Cpu *c);
void f_c9ff8c(Cpu *c);
void f_ca0718(Cpu *c);
void f_ca0bc4(Cpu *c);
void f_ca0cdc(Cpu *c);
void f_ca130c(Cpu *c);
void f_ca1bac(Cpu *c);
void f_ca20fc(Cpu *c);
void f_ca36dc(Cpu *c);
void f_ca3ba0(Cpu *c);
void f_ca435c(Cpu *c);
void f_ca6628(Cpu *c);
void f_ca6b18(Cpu *c);
void f_ca8530(Cpu *c);
void f_cec454(Cpu *c);
void f_ced74c(Cpu *c);
void f_cef1e4(Cpu *c);
void f_cef728(Cpu *c);
void f_cf7958(Cpu *c);
void f_cf938c(Cpu *c);
void f_cfcce8(Cpu *c);
void f_cfd42c(Cpu *c);
void f_d798dc(Cpu *c);
void f_d799c4(Cpu *c);
void f_d91f28(Cpu *c);
void f_d925b0(Cpu *c);
void f_da5770(Cpu *c);
void f_dae520(Cpu *c);
void f_e08100(Cpu *c);
void f_e1703c(Cpu *c);
void f_e178c0(Cpu *c);
void f_e179e4(Cpu *c);
void f_e1bb28(Cpu *c);
void f_e1bf24(Cpu *c);
void f_e1c020(Cpu *c);
void f_e1c3b8(Cpu *c);
void f_e33cac(Cpu *c);
void f_e39f24(Cpu *c);
void f_e47f50(Cpu *c);
void f_e6d0bc(Cpu *c);
void f_e6d0f8(Cpu *c);
void f_e6d2c0(Cpu *c);
void f_e6d2e8(Cpu *c);
void f_ea99ec(Cpu *c);
void f_eab0ac(Cpu *c);
void f_eab1fc(Cpu *c);
void f_ead6d0(Cpu *c);
void f_ead764(Cpu *c);
void f_ead968(Cpu *c);
void f_eadaa0(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15efddc(Cpu *c);
void f_c9ff8c(Cpu *restrict c) {
    FN_ENTER(0xc9ff8cu);
L_c9ff8c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x78u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[2];
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0xc9ffb4u; f_c5ca24(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_ca05c8; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[6] = c->r[13] + 0x64u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[14] = 0xc9ffdcu; f_c69d00(c);
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc9fff0u; f_ead968(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ca0024; }
    { uint32_t ea = c->r[9] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca0024; }
    c->r[2] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[5] + 0xd6u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[6] = c->r[0] - 0x20u;
    c->r[0] = c->r[5];
    c->r[3] = c->r[6];
    c->r[14] = 0xca0020u; f_c6b824(c);
    { uint32_t ea = c->r[4] + 0xe6u; ST16(ea, c->r[6]); }
L_ca0024:;
    { uint32_t ea = c->r[5] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = c->r[1] & (c->r[2] >> 10);
    c->r[2] = (c->r[2] >> 8) & 0x3u;
    c->r[1] = c->r[2] | c->r[1];
    c->r[1] = (c->r[1] << 26);
    c->r[0] = c->r[1] | (c->r[0] >> 19);
    c->r[1] = 0x1fe0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1c000000u;
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xca006cu; f_c6a2a4(c);
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 16));
    if (COND_NE) { c->r[7] = c->r[9] + (c->r[0] >> 16); }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_ca00fc; }
    c->r[1] = 0xda2a44u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = 0xca0098u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xca00b0u; f_ced74c(c);
    c->r[6] = (uint32_t)(uint8_t)(c->r[10]);
    c->r[2] = c->r[0];
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[7];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[10] & 0x100u; }
    c->r[3] = c->r[6];
    c->r[14] = 0xca00d0u; f_cf938c(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_GE) { c->r[1] = c->r[1] | 0x20000u; }
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffff0000u;
    c->r[1] = c->r[1] | c->r[6];
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[1]); }
    goto L_ca010c;
L_ca00fc:;
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[5];
    c->r[14] = 0xca0108u; f_c6be40(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ca010c:;
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 12);
    c->r[1] = c->r[1] | (c->r[2] << 20);
    { uint32_t r = c->r[1] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca01c4; }
    c->v.s[0] = 0x43800000u;
    c->v.s[2] = LD32(c->r[8] + 32u);
    c->r[2] = c->r[1] & 0xfu;
    (void)f_subs(c, c->r[2], 0x8u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    if (COND_HI) { goto L_ca01c4; }
    c->r[1] = c->v.s[0];
    c->r[3] = 0x1u;
    c->r[7] = 0xaau;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca01a8; }
    c->r[7] = 0x154u;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca01c4; }
    c->r[2] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[0];
    c->r[7] = ~0xff0000u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[3] = c->r[3] & 0xffff0000u;
    c->r[2] = c->r[2] & 0xff00u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 8) & 0xffu;
    c->r[6] = c->r[2] | c->r[3];
    c->r[2] = (c->r[0] >> 16) & 0xffu;
    c->r[3] = 0x10u;
    c->r[0] = c->r[6];
    goto L_ca01b4;
L_ca01a8:;
    c->r[2] = (c->r[0] >> 24);
    c->r[7] = ~0xff000000u;
    c->r[3] = 0x18u;
L_ca01b4:;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[7] & c->r[0];
    c->r[1] = (c->r[1] >> 8) & 0xffu;
    c->r[0] = c->r[0] | sh_lsl(c->r[1], c->r[3]);
L_ca01c4:;
    c->v.s[16] = 0x0u;
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xca01e0u; f_c6a2d0(c);
    { uint32_t ea = c->r[9] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9] + 0x170u;
    c->r[3] = c->r[9] + 0x188u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xca01fcu; f_c6adac(c);
    { uint32_t ea = c->r[9] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[6] = f_adds(c, c->r[9], c->r[0]); }
    if (COND_EQ) { goto L_ca0268; }
    c->r[1] = 0xda28c0u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = 0xca0220u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = c->r[6];
    c->v.s[18] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    c->r[14] = 0xca023cu; f_ced74c(c);
    c->v.s[0] = c->v.s[18];
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xca024cu; f_cf7958(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[16]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[17]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_ca02b8; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2000000u;
    goto L_ca02f8;
L_ca0268:;
    c->r[2] = 0xda2868u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xca0278u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] & 0xfffu;
    c->v.s[0] = LD32(c->r[9] + 448u);
    c->v.s[2] = LD32(c->r[9] + 452u);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->v.s[4] = LD32(c->r[1]);
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[18] = LD32(c->r[9] + 464u);
    c->v.s[8] = LD32(c->r[9] + 468u);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->v.s[6] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[6] * c->v.f[8]);
    goto L_ca02e4;
L_ca02b8:;
    c->r[1] = 0xda2818u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xca02c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[18] = LD32(c->r[9] + 464u);
    c->v.s[2] = LD32(c->r[9] + 468u);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[4] * c->v.f[2]);
L_ca02e4:;
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_ca02fc; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
L_ca02f8:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_ca02fc:;
    ST32(c->r[4] + 196u, c->v.s[0]);
    ST32(c->r[4] + 192u, c->v.s[0]);
    ST32(c->r[4] + 244u, c->v.s[18]);
    { uint32_t ea = c->r[9] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[6] = f_adds(c, c->r[9], c->r[0]); }
    if (COND_EQ) { goto L_ca0374; }
    c->r[1] = 0xda27b4u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = 0xca032cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = c->r[6];
    c->v.s[18] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    c->r[14] = 0xca0348u; f_ced74c(c);
    c->v.s[0] = c->v.s[18];
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xca0358u; f_cf7958(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[16]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[17]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_ca03c4; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000000u;
    goto L_ca0404;
L_ca0374:;
    c->r[2] = 0xda275cu;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xca0384u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] & 0xfffu;
    c->v.s[0] = LD32(c->r[9] + 456u);
    c->v.s[2] = LD32(c->r[9] + 460u);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->v.s[4] = LD32(c->r[1]);
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[18] = LD32(c->r[9] + 472u);
    c->v.s[8] = LD32(c->r[9] + 476u);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->v.s[6] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[6] * c->v.f[8]);
    goto L_ca03f0;
L_ca03c4:;
    c->r[1] = 0xda270cu;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xca03d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[18] = LD32(c->r[9] + 472u);
    c->v.s[2] = LD32(c->r[9] + 476u);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[4] * c->v.f[2]);
L_ca03f0:;
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_ca0408; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4u;
L_ca0404:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_ca0408:;
    ST32(c->r[4] + 204u, c->v.s[0]);
    ST32(c->r[4] + 200u, c->v.s[0]);
    ST32(c->r[4] + 248u, c->v.s[18]);
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[5] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD16(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xdau; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[3] * c->r[2] + c->r[1]; c->r[1] = r; }
    c->r[6] = c->r[0] + c->r[1];
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca0460; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca0460u; f_15efddc(c);
L_ca0460:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca0484; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    goto L_ca04b0;
L_ca0484:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ca04b0:;
    c->r[3] = 0x0u;
    c->r[12] = c->r[4] + 0x84u;
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x94u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_ca0548; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + 0xd0u;
    c->r[2] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[3] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + (c->r[2] << 4);
    c->v.s[0] = LD32(c->r[3] + 64u);
    { uint32_t ea = c->r[9] + 0x3eu; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[0] + 0x80u;
    c->r[3] = c->r[0] + 0x60u;
    c->r[0] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = c->r[5];
    c->r[14] = 0xca0524u; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = c->r[13] + 0x20u;
    if (COND_NE) { c->r[6] = c->r[9] + c->r[6]; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[10]; c->r[0] = r; }
    c->r[1] = c->r[6];
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xca0548u; f_cec454(c);
L_ca0548:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca05b4; }
    { uint32_t ea = c->r[7] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xd0u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[3] = 0x1u;
    c->r[1] = c->r[1] & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x50u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->pc = c->r[6]; c->r[14] = 0xca059cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
L_ca05b4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xca05c0u; f_c74838(c);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 26) & 0x1u;
L_ca05c8:;
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ca05f8(Cpu *restrict c) {
    FN_ENTER(0xca05f8u);
L_ca05f8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[14] = 0xca0608u; f_c62db8(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ca070c; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ca0698; }
    c->r[6] = c->r[8] + 0xd0u;
L_ca0624:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca0644; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
L_ca0644:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xca0650u; f_ca0718(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ca0660; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_ca0670;
L_ca0660:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xca066cu; f_c5b224(c);
    c->r[5] = c->r[0];
L_ca0670:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); }
    c->r[14] = c->r[6] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[12] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->r[1] = c->r[0] + 0x10000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | (c->r[1] & 0xFFFF0000u);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); }
    c->r[0] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    if (COND_NE) { goto L_ca0624; }
L_ca0698:;
    { uint32_t ea = c->r[8] + 0x43u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca06ec; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ca06ec; }
L_ca06b0:;
    { uint32_t ea = c->r[5] + 0xfu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[1] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + 0x50u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0xd0u;
    c->r[1] = c->r[8];
    c->r[3] = 0x1u;
    c->pc = c->r[7]; c->r[14] = 0xca06e0u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_ca06b0; }
L_ca06ec:;
    { uint32_t ea = c->r[8] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca070c; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[8]; }
    if (COND_NE) { c->r[14] = 0xca070cu; f_ca0bc4(c); }
L_ca070c:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ca0718(Cpu *restrict c) {
    FN_ENTER(0xca0718u);
L_ca0718:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[1];
    c->r[9] = c->r[0];
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca076c; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_CC) { goto L_ca07a4; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[0] >> 16);
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[1] + 0x1a8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = c->r[1] + c->r[2]; }
    c->r[1] = c->r[4];
    c->r[14] = 0xca0768u; f_c6bc0c(c);
    goto L_ca07a4;
L_ca076c:;
    c->v.s[0] = LD32(c->r[4] + 252u);
    c->r[2] = c->r[4] + 0xb0u;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xca0780u; f_c6a004(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_ca0bb0; }
    { uint32_t ea = c->r[8] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[1]); }
L_ca07a4:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xca07b0u; f_c6a2cc(c);
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca0800; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], (c->r[1] >> 16));
    c->r[6] = (c->r[1] >> 16);
    c->r[2] = c->r[4];
    if (COND_NE) { c->r[6] = c->r[0] + (c->r[1] >> 16); }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[14] = 0xca07e4u; f_ced74c(c);
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    c->r[14] = 0xca07f8u; f_cf938c(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
L_ca0800:;
    { uint32_t r = c->r[7] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca0824; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[3] >> 24) & 0x1u;
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[1]); }
    goto L_ca0908;
L_ca0824:;
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = (c->r[0] >> 12);
    c->r[1] = c->r[0] | (c->r[1] << 20);
    { uint32_t r = c->r[1] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca08d4; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[9] + 0xc4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[9] + 0xd8u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = 0x43800000u;
    c->r[7] = (uint32_t)(uint16_t)(c->r[10]);
    { uint32_t r = c->r[2] * c->r[7] + c->r[6]; c->r[2] = r; }
    c->r[7] = c->r[1] & 0xfu;
    (void)f_subs(c, c->r[7], 0x8u);
    c->r[2] = c->r[12] + c->r[2];
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    if (COND_HI) { goto L_ca08fc; }
    c->r[1] = c->v.s[0];
    c->r[6] = 0x1u;
    c->r[2] = 0xaau;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[6], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca08e0; }
    c->r[2] = 0x154u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[6], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca08fc; }
    c->r[2] = (c->r[5] >> 8) & 0xffu;
    c->r[0] = c->r[5];
    c->r[7] = ~0xff0000u;
    c->r[6] = 0x10u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[0] = c->r[0] & 0xffff0000u;
    c->r[2] = c->r[2] & 0xff00u;
    c->r[0] = c->r[2] | c->r[0];
    c->r[2] = (uint32_t)(uint8_t)(c->r[5]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = (c->r[2] >> 8) & 0xffu;
    c->r[12] = (c->r[5] >> 16) & 0xffu;
    c->r[0] = c->r[0] | c->r[2];
    c->r[5] = c->r[0];
    goto L_ca08ec;
L_ca08d4:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_ca08fc;
L_ca08e0:;
    c->r[12] = (c->r[5] >> 24);
    c->r[7] = ~0xff000000u;
    c->r[6] = 0x18u;
L_ca08ec:;
    { uint32_t r = c->r[12] * c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[7] & c->r[5];
    c->r[1] = (c->r[1] >> 8) & 0xffu;
    c->r[5] = c->r[0] | sh_lsl(c->r[1], c->r[6]);
L_ca08fc:;
    c->r[0] = (c->r[3] >> 24) & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[5]); }
L_ca0908:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x100u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x100000u;
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca0954; }
    c->v.s[0] = 0x0u;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xca092cu; f_c6a434(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_ca0bb0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_ca0954:;
    c->r[0] = 0x400u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x200000u;
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca0994; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->v.s[0] = LD32(c->r[0] + 420u);
    { uint32_t ea = c->r[0] + 0x1acu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0xca097cu; f_c6b3c0(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_ca0994:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca09cc; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca0a2c; }
    c->r[0] = (c->r[3] >> 25) & 0x1u;
    c->v.s[0] = LD32(c->r[4] + 244u);
    c->r[0] = c->r[4] + (c->r[0] << 2);
    c->v.s[2] = LD32(c->r[0] + 192u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_ca0a10; }
    goto L_ca0bb0;
L_ca09cc:;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[0] + c->r[6]; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[14] = 0xca09ecu; f_ced74c(c);
    c->v.s[0] = LD32(c->r[4] + 244u);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xca09fcu; f_cf7958(c);
    c->v.s[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[0] = t0; c->v.f[1] = t1; }
L_ca0a10:;
    c->r[0] = (c->r[3] >> 24);
    c->r[3] = c->r[3] | 0x1000u;
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    ST32(c->r[0] + 192u, c->v.s[0]);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[3]); }
L_ca0a2c:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca0a64; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca0ac0; }
    c->r[0] = (c->r[3] >> 25) & 0x1u;
    c->v.s[0] = LD32(c->r[4] + 248u);
    c->r[0] = c->r[4] + (c->r[0] << 2);
    c->v.s[2] = LD32(c->r[0] + 200u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_ca0aa4; }
    goto L_ca0bb0;
L_ca0a64:;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[0] + c->r[6]; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[14] = 0xca0a84u; f_ced74c(c);
    c->v.s[0] = LD32(c->r[4] + 248u);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xca0a94u; f_cf7958(c);
    c->v.s[2] = 0x0u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[0] = t0; c->v.f[1] = t1; }
L_ca0aa4:;
    c->r[0] = (c->r[3] >> 24);
    c->r[1] = c->r[3] | 0x1000u;
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    ST32(c->r[0] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[1]); }
L_ca0ac0:;
    { uint32_t ea = c->r[9] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xdau; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[10]);
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[3] + c->r[1]; c->r[1] = r; }
    c->r[6] = c->r[0] + c->r[1];
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca0b08; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca0b08u; f_15efddc(c);
L_ca0b08:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca0b24; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 4u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    goto L_ca0b50;
L_ca0b24:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_ca0b50:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[6] = v; c->r[7] = v2; }
    c->r[14] = 0x10u;
    c->r[12] = 0x0u;
    c->r[0] = c->r[14] & (c->r[7] >> 20);
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x84u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca0b90; }
    { uint32_t ea = c->r[9] + 0x43u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = 0x1u;
    { uint32_t r = c->r[5] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca0bb0; }
L_ca0b90:;
    c->r[0] = c->r[14] & (c->r[7] >> 21);
    c->r[7] = c->r[7] | 0x1000u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x84u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[6]); ST32(ea + 4, c->r[7]); }
L_ca0bb0:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ca0bc4(Cpu *restrict c) {
    FN_ENTER(0xca0bc4u);
L_ca0bc4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x50u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_ca0cd4; }
    c->r[7] = c->r[4] + 0xd0u;
    c->r[5] = c->r[13] + 0x10u;
    c->r[8] = 0x0u;
L_ca0bf0:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca0c10; }
    /* pld */
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
L_ca0c10:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 24) & 0x1u;
    c->r[2] = c->r[6] + (c->r[1] << 4);
    c->r[1] = c->r[6] + (c->r[1] << 2);
    c->v.s[0] = LD32(c->r[1] + 64u);
    c->r[1] = c->r[2] + 0x80u;
    c->r[3] = c->r[2] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->r[14] = 0xca0c40u; f_c6c268(c);
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[13] + 20u);
    c->v.s[14] = LD32(c->r[13] + 36u);
    c->v.s[0] = LD32(c->r[13] + 16u);
    c->v.s[4] = LD32(c->r[13] + 24u);
    c->v.s[6] = LD32(c->r[13] + 32u);
    c->v.s[1] = LD32(c->r[13] + 40u);
    c->v.s[3] = LD32(c->r[13] + 48u);
    c->v.s[5] = LD32(c->r[13] + 52u);
    { uint32_t r = c->r[3] * c->r[2] + c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[6] + 0xfu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[12] = LD32(c->r[0] + 8u);
    c->r[1] = c->r[1] & 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.f[14] = c->v.f[10] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 56u);
    c->v.f[6] = c->v.f[6] * c->v.f[10];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[8]);
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[8]); }
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[5]);
    c->v.f[0] = c->v.f[10] * c->v.f[1];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[4]);
    ST32(c->r[0] + 16u, c->v.s[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[2]);
    ST32(c->r[0] + 20u, c->v.s[14]);
    ST32(c->r[0] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_ca0bf0; }
L_ca0cd4:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ca0cdc(Cpu *restrict c) {
    FN_ENTER(0xca0cdcu);
L_ca0cdc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x68u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[2] = LD32(c->r[0] + 152u);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_ca0d90; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[2] = 0x2001u;
    { uint32_t ea = c->r[1] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[5] = c->r[1] + 0xd0u;
    c->r[3] = c->r[0] & c->r[2];
    c->r[2] = (c->r[9] >> 25) & 0x1u;
    c->r[7] = (c->r[0] >> 16);
    c->r[6] = c->r[5] + (c->r[2] << 2);
    c->r[2] = (c->r[9] >> 24) & 0x1u;
    (void)f_subs(c, c->r[3], 0x1u);
    c->v.s[0] = LD32(c->r[6]);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    if (COND_NE) { goto L_ca0da8; }
    c->r[2] = c->r[5] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0xacu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[1];
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[0];
    c->v.s[4] = LD32(c->r[2]);
    if (COND_NE) { goto L_ca0db8; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    c->r[0] = c->r[1];
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca0dcc; }
    c->r[8] = c->r[6];
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca0dd8; }
    goto L_ca0dec;
L_ca0d90:;
    c->r[8] = c->r[1];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[8] + 0xa8u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_ca0e6c;
L_ca0da8:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[8] = c->r[1];
    c->r[3] = c->v.s[0];
    goto L_ca0e4c;
L_ca0db8:;
    c->v.s[6] = 0x3f800000u;
    c->r[0] = c->r[1];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->r[8] = c->r[6];
    goto L_ca0de0;
L_ca0dcc:;
    c->r[8] = c->r[6];
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ca0dec; }
L_ca0dd8:;
    c->v.s[6] = 0x3f800000u;
    c->v.f[4] = c->v.f[2] * c->v.f[4];
L_ca0de0:;
    c->v.f[6] = c->v.f[6] - c->v.f[2];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[0]);
    goto L_ca0dfc;
L_ca0dec:;
    c->v.s[6] = 0x3f000000u;
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    vfp_mrs_flags(c);
    c->v.s[4] = COND_GT ? c->v.s[0] : c->v.s[4];
L_ca0dfc:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[4]);
    c->v.s[6] = 0x3f000000u;
    c->r[6] = c->v.s[0];
    (void)f_subs(c, c->r[6], (c->r[3] >> 16));
    c->r[2] = c->r[6];
    if (COND_HI) { c->r[2] = (c->r[3] >> 16); }
    c->r[3] = (c->r[3] >> 16);
    c->v.s[0] = c->r[2];
    c->r[1] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[6]);
    c->r[5] = c->r[1];
    if (COND_HI) { c->r[3] = c->r[1]; }
    if (COND_LS) { c->r[5] = 0x0u; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[0] = (float)c->v.s[0];
    if (COND_NE) { c->r[3] = c->r[5]; }
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[3] = c->r[2]; }
L_ca0e4c:;
    { uint32_t ea = c->r[14] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 5); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = c->r[3] + (c->r[3] << 1);
    c->r[7] = c->r[1] + (c->r[2] << 3);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_ca0e6c:;
    c->r[2] = 0x0u;
    c->r[1] = c->r[1] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    c->r[2] = (c->r[9] >> 24) & 0x1u;
    c->r[0] = (c->r[9] >> 25) & 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[3] = c->r[1] + (c->r[2] << 2);
    c->r[1] = c->r[1] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[6] = LD32(c->r[3]);
    c->r[6] = c->r[6] + 0xc8u;
    c->r[2] = c->r[6] + (c->r[2] << 2);
    c->r[0] = c->r[6] + (c->r[0] << 2);
    c->r[6] = c->r[12];
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[6] + 0x10u;
    c->v.s[1] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[2]);
    { uint32_t ea = c->r[9] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 4) & 0xfu;
    c->r[2] = (c->r[0] >> 20) & 0xfu;
    c->r[0] = c->r[13] + 0x20u;
    c->v.f[4] = c->v.f[4] - c->v.f[1];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[4]);
    c->r[14] = 0xca0ef8u; f_bb6b10(c);
    c->r[2] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x40u;
    c->r[12] = c->r[4] + 0x80u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x50u;
    c->r[12] = c->r[4] + 0xc0u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0x50u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[2];
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[0] = c->r[2] + (c->r[0] >> 8);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0xd4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x94u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xf4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca115c; }
    c->r[0] = c->r[9] + 0xd0u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 20) & 0xfu;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_ca0ff0; }
    c->v.s[2] = 0x0u;
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xca0fbcu + 0xcu;
    c->v.s[0] = 0xbf800000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = c->v.s[2];
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xca0fe4u: goto L_ca0fe4; case 0xca0ffcu: goto L_ca0ffc; case 0xca1008u: goto L_ca1008; case 0xca101cu: goto L_ca101c; case 0xca12d0u: goto L_ca12d0; case 0xca12e0u: goto L_ca12e0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_ca0fe4:;
    c->r[0] = 0xd98268u;
    { uint32_t ea = 0xca0ff0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ca1010;
L_ca0ff0:;
    c->r[0] = 0xd97b50u;
    { uint32_t ea = 0xca0ffcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ca1010;
L_ca0ffc:;
    c->r[0] = 0xd98200u;
    { uint32_t ea = 0xca1008u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ca1010;
L_ca1008:;
    c->r[0] = 0xd981f0u;
    { uint32_t ea = 0xca1014u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_ca1010:;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
L_ca101c:;
    c->v.s[10] = LD32(c->r[10] + 20u);
    c->v.s[6] = LD32(c->r[10] + 16u);
    c->v.s[12] = LD32(c->r[10] + 4u);
    c->v.s[1] = LD32(c->r[10]);
    c->v.s[8] = LD32(c->r[10] + 24u);
    c->v.s[14] = LD32(c->r[10] + 8u);
    c->v.s[3] = LD32(c->r[10] + 36u);
    c->v.s[5] = LD32(c->r[10] + 40u);
    c->v.f[16] = c->v.f[2] * c->v.f[10];
    c->v.s[10] = LD32(c->r[10] + 32u);
    c->v.f[18] = c->v.f[2] * c->v.f[6];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[1]);
    c->v.f[20] = c->v.f[2] * c->v.f[8];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[4] * c->v.f[3]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[4] * c->v.f[5]);
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca108c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca1088u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_ca108c:;
    c->v.s[22] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca10b0; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_ca10b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[18]);
    ST32(c->r[4] + 36u, c->v.s[16]);
    ST32(c->r[4] + 40u, c->v.s[20]);
    c->v.s[0] = LD32(c->r[13] + 32u);
    c->v.s[6] = LD32(c->r[13] + 48u);
    c->v.s[2] = LD32(c->r[13] + 36u);
    c->v.s[8] = LD32(c->r[13] + 52u);
    c->v.s[4] = LD32(c->r[13] + 40u);
    c->v.s[10] = LD32(c->r[13] + 56u);
    c->v.f[16] = c->v.f[8] - c->v.f[2];
    c->v.f[18] = c->v.f[6] - c->v.f[0];
    c->v.f[20] = c->v.f[10] - c->v.f[4];
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca1110; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca110cu; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_ca1110:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca1130; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_ca1130:;
    c->v.s[0] = LD32(c->r[3] + 224u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[4] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[4] + 48u, c->v.s[2]);
    ST32(c->r[4] + 52u, c->v.s[4]);
    ST32(c->r[4] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[3] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x16u; ST8(ea, c->r[0]); }
L_ca115c:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_ca1178; }
    c->v.s[2] = LD32(c->r[7] + 8u);
    c->v.s[0] = LD32(c->r[7] + 12u);
    c->v.s[4] = LD32(c->r[7] + 16u);
    c->v.s[6] = LD32(c->r[7] + 20u);
    goto L_ca1280;
L_ca1178:;
    { uint32_t ea = c->r[3] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_CC) { goto L_ca1208; }
    { uint32_t ea = c->r[8] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[9] + 152u);
    c->r[0] = c->r[3] + (c->r[0] >> 16);
    c->v.s[4] = 0x3f800000u;
    c->r[1] = c->r[1] & 0x1u;
    c->r[2] = c->r[1] ^ 0x1u;
    c->v.f[12] = c->v.f[4] - c->v.f[0];
    c->r[2] = c->r[0] + (c->r[2] << 3);
    c->r[0] = c->r[0] + (c->r[1] << 3);
    c->r[1] = 0xd9edc8u;
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[6] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    { uint32_t ea = 0xca11c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.s[14] = LD32(c->r[1]);
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.s[1] = LD32(c->r[1] + 4u);
    c->v.f[2] = c->v.f[2] + c->v.f[14];
    c->v.f[0] = c->v.f[6] + c->v.f[1];
    c->v.s[6] = 0xbf800000u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca121c; }
    c->v.s[8] = c->v.s[2] ^ 0x80000000u;
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[8]);
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.f[8] = c->v.f[8] + c->v.f[4];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    goto L_ca1238;
L_ca1208:;
    c->v.s[0] = 0x0u;
    c->v.s[6] = 0x3f800000u;
    c->v.s[4] = c->v.s[6];
    c->v.s[2] = c->v.s[0];
    goto L_ca1280;
L_ca121c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ca1238; }
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.f[8] = c->v.f[8] + c->v.f[4];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
L_ca1238:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca125c; }
    c->v.s[6] = c->v.s[0] ^ 0x80000000u;
    c->v.s[6] = vcvt_s32_f64((double)c->v.f[6]);
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[6] = c->v.f[6] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    goto L_ca1278;
L_ca125c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ca1278; }
    c->v.s[6] = vcvt_s32_f64((double)c->v.f[0]);
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[6] = c->v.f[6] + c->v.f[4];
    c->v.f[0] = c->v.f[0] - c->v.f[6];
L_ca1278:;
    c->v.f[6] = c->v.f[0] + c->v.f[4];
    c->v.f[4] = c->v.f[2] + c->v.f[4];
L_ca1280:;
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->v.s[8] = COND_EQ ? c->v.s[2] : c->v.s[4];
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    c->v.s[10] = COND_EQ ? c->v.s[0] : c->v.s[6];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[2] = COND_EQ ? c->v.s[4] : c->v.s[2];
    (void)f_subs(c, c->r[1], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[6] : c->v.s[0];
    ST32(c->r[4] + 152u, c->v.s[8]);
    ST32(c->r[4] + 24u, c->v.s[8]);
    ST32(c->r[4] + 92u, c->v.s[10]);
    ST32(c->r[4] + 28u, c->v.s[10]);
    ST32(c->r[4] + 216u, c->v.s[2]);
    ST32(c->r[4] + 88u, c->v.s[2]);
    ST32(c->r[4] + 220u, c->v.s[0]);
    ST32(c->r[4] + 156u, c->v.s[0]);
    c->r[13] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_ca12d0:;
    c->v.s[0] = 0x0u;
    c->v.s[2] = 0xbf800000u;
    c->v.s[4] = c->v.s[0];
    goto L_ca101c;
L_ca12e0:;
    c->v.s[0] = 0x0u;
    c->v.s[4] = 0xbf800000u;
    c->v.s[2] = c->v.s[0];
    goto L_ca101c;
}
void f_ca130c(Cpu *restrict c) {
    FN_ENTER(0xca130cu);
L_ca130c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x2f8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[14] = c->r[13] + 0x1a0u;
    c->r[6] = c->r[13] + 0x134u;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[4] = v; c->r[5] = v2; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[2] + 0xeu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->v.s[2] = LD32(c->r[3] + 88u);
    { uint32_t ea = c->r[0] + 0xf4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[0] = LD32(c->r[3] + 24u);
    c->v.s[16] = LD32(c->r[3] + 28u);
    ST32(c->r[13] + 60u, c->v.s[2]);
    c->v.s[20] = LD32(c->r[3] + 156u);
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[4]); }
    c->r[2] = c->r[3] + 0x40u;
    c->r[14] = c->r[13] + 0x1b0u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[4]); }
    c->r[2] = c->r[3] + 0x80u;
    c->r[14] = c->r[13] + 0x1c0u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[4]); }
    c->r[2] = c->r[3] + 0xc0u;
    c->r[14] = c->r[13] + 0x1d0u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[4]); }
    c->r[14] = f_adds(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[2] = c->r[14];
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[0] & 0xff0000u;
    { uint32_t ea = c->r[6]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[6] - 0x40u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[6] & 0xff000000u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[4]); }
    c->v.f[12] = (float)c->v.s[2];
    if (COND_EQ) { goto L_ca1858; }
    c->v.s[14] = 0x3f800000u;
    c->v.s[1] = LD32(c->r[13] + 472u);
    c->v.s[4] = c->r[5];
    c->v.s[3] = LD32(c->r[13] + 468u);
    c->v.s[2] = c->r[6];
    c->v.s[17] = LD32(c->r[13] + 464u);
    c->v.s[6] = c->r[3];
    c->v.s[30] = LD32(c->r[13] + 440u);
    c->v.s[8] = c->r[0];
    c->v.s[28] = LD32(c->r[13] + 436u);
    c->v.s[10] = c->r[1];
    c->v.s[26] = LD32(c->r[13] + 432u);
    c->r[3] = c->r[13] + 0x60u;
    c->r[5] = c->r[3] + 0x40u;
    c->r[9] = c->r[3] + 0x80u;
    c->r[10] = c->r[3] + 0xc0u;
    c->r[3] = c->r[12] & 0x80u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x1f0u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[5]); }
    c->v.f[19] = c->v.f[14] / c->v.f[12];
    c->v.s[12] = c->r[2];
    c->r[7] = c->r[3] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[3] + 0x80u;
    c->r[3] = c->r[3] + 0x40u;
    c->v.f[14] = c->v.f[1] - c->v.f[4];
    ST32(c->r[13] + 56u, c->v.s[1]);
    c->v.f[1] = c->v.f[3] - c->v.f[2];
    ST32(c->r[13] + 52u, c->v.s[3]);
    c->v.f[3] = c->v.f[17] - c->v.f[6];
    c->v.f[5] = c->v.f[30] - c->v.f[8];
    c->v.f[7] = c->v.f[28] - c->v.f[10];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    c->v.f[14] = c->v.f[19] * c->v.f[14];
    ST32(c->r[13] + 48u, c->v.s[14]);
    c->v.f[14] = c->v.f[19] * c->v.f[1];
    ST32(c->r[13] + 44u, c->v.s[14]);
    c->v.f[14] = c->v.f[19] * c->v.f[3];
    ST32(c->r[13] + 40u, c->v.s[14]);
    c->v.f[14] = c->v.f[19] * c->v.f[5];
    ST32(c->r[13] + 36u, c->v.s[14]);
    c->v.f[14] = c->v.f[19] * c->v.f[7];
    ST32(c->r[13] + 32u, c->v.s[14]);
    c->v.f[14] = c->v.f[26] - c->v.f[12];
    c->v.f[14] = c->v.f[19] * c->v.f[14];
    ST32(c->r[13] + 28u, c->v.s[14]);
    c->v.f[14] = c->v.f[20] - c->v.f[16];
    c->v.f[18] = c->v.f[19] * c->v.f[14];
    c->v.s[14] = LD32(c->r[13] + 60u);
    c->v.f[14] = c->v.f[14] - c->v.f[0];
    c->v.f[14] = c->v.f[19] * c->v.f[14];
    ST32(c->r[13] + 24u, c->v.s[14]);
L_ca1560:;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CS) { goto L_ca15c0; }
    c->v.s[14] = LD32(c->r[13] + 28u);
    c->v.s[5] = LD32(c->r[13] + 40u);
    c->v.s[11] = LD32(c->r[13] + 24u);
    c->v.f[3] = c->v.f[14] + c->v.f[12];
    c->v.s[14] = LD32(c->r[13] + 32u);
    c->v.f[7] = c->v.f[5] + c->v.f[6];
    c->v.s[5] = LD32(c->r[13] + 48u);
    c->v.f[23] = c->v.f[11] + c->v.f[0];
    c->v.f[1] = c->v.f[14] + c->v.f[10];
    c->v.s[14] = LD32(c->r[13] + 36u);
    c->v.f[9] = c->v.f[5] + c->v.f[4];
    c->v.s[5] = LD32(c->r[13] + 44u);
    ST32(c->r[13] + 368u, c->v.s[3]);
    c->v.f[14] = c->v.f[14] + c->v.f[8];
    ST32(c->r[13] + 372u, c->v.s[1]);
    c->v.f[5] = c->v.f[5] + c->v.f[2];
    ST32(c->r[13] + 376u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 400u, c->v.s[7]);
    goto L_ca15f0;
L_ca15c0:;
    c->v.s[5] = LD32(c->r[13] + 52u);
    c->v.s[9] = LD32(c->r[13] + 56u);
    c->v.s[23] = LD32(c->r[13] + 60u);
    c->v.s[14] = c->v.s[30];
    c->v.s[1] = c->v.s[28];
    c->v.s[3] = c->v.s[26];
    c->v.s[7] = c->v.s[17];
    ST32(c->r[13] + 368u, c->v.s[26]);
    ST32(c->r[13] + 372u, c->v.s[28]);
    ST32(c->r[13] + 376u, c->v.s[30]);
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 400u, c->v.s[17]);
L_ca15f0:;
    ST32(c->r[13] + 404u, c->v.s[5]);
    ST32(c->r[13] + 248u, c->v.s[0]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    ST32(c->r[13] + 312u, c->v.s[23]);
    ST32(c->r[13] + 184u, c->v.s[23]);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 160u, c->v.s[3]);
    c->v.f[0] = c->v.f[9] - c->v.f[14];
    c->v.f[5] = c->v.f[5] - c->v.f[1];
    c->v.f[3] = c->v.f[7] - c->v.f[3];
    c->v.f[4] = c->v.f[4] - c->v.f[8];
    c->v.f[2] = c->v.f[2] - c->v.f[10];
    c->v.f[6] = c->v.f[6] - c->v.f[12];
    c->r[8] = 0x0u;
    ST32(c->r[13] + 408u, c->v.s[9]);
    ST32(c->r[13] + 164u, c->v.s[1]);
    ST32(c->r[13] + 168u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[8]); }
    c->v.f[25] = c->v.f[19] * c->v.f[0];
    c->v.f[27] = c->v.f[19] * c->v.f[5];
    c->v.f[29] = c->v.f[19] * c->v.f[3];
    c->v.f[22] = c->v.f[19] * c->v.f[4];
    c->v.f[31] = c->v.f[19] * c->v.f[2];
    c->v.f[24] = c->v.f[19] * c->v.f[6];
    c->v.s[0] = c->v.s[16];
L_ca165c:;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CS) { goto L_ca16c4; }
    c->r[0] = c->r[8] + 0x1u;
    c->v.s[2] = LD32(c->r[13] + 352u);
    c->v.s[4] = LD32(c->r[13] + 356u);
    c->v.s[6] = LD32(c->r[13] + 360u);
    c->v.f[21] = c->v.f[18] + c->v.f[0];
    c->v.s[8] = c->r[0];
    c->v.f[8] = (float)c->v.s[8];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[31] * c->v.f[8]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 224u, c->v.s[2]);
    ST32(c->r[13] + 228u, c->v.s[4]);
    c->v.s[2] = LD32(c->r[13] + 368u);
    c->v.s[4] = LD32(c->r[13] + 372u);
    ST32(c->r[13] + 232u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 376u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[25] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[27] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[8]);
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    goto L_ca16e4;
L_ca16c4:;
    c->r[2] = c->r[13] + 0x180u;
    c->r[3] = c->r[13] + 0xe0u;
    c->v.s[21] = c->v.s[20];
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ca16e4:;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 188u, c->v.s[0]);
    ST32(c->r[13] + 124u, c->v.s[0]);
    ST32(c->r[13] + 316u, c->v.s[21]);
    ST32(c->r[13] + 252u, c->v.s[21]);
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_ca17d4; }
    c->r[0] = c->r[13] + 0x60u;
    c->r[12] = c->r[13] + 0x1f0u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x1e8u;
    c->r[5] = c->r[14];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xca17d0u; f_a8c0c8(c);
    c->r[14] = c->r[5];
L_ca17d4:;
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = c->r[13] + 0x60u;
    c->v.s[0] = c->v.s[21];
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[14], c->r[8]);
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    if (COND_NE) { goto L_ca165c; }
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x174u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x170u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[6] = LD32(c->r[13] + 400u);
    c->v.s[2] = LD32(c->r[13] + 404u);
    c->v.s[4] = LD32(c->r[13] + 408u);
    c->v.s[0] = c->v.s[23];
    c->r[4] = 0x0u;
    c->v.s[8] = c->r[0];
    c->v.s[10] = c->r[1];
    c->v.s[12] = c->r[2];
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[7], c->r[14]);
    ST32(c->r[13] + 384u, c->v.s[6]);
    ST32(c->r[13] + 388u, c->v.s[2]);
    ST32(c->r[13] + 392u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[4]); }
    if (COND_NE) { goto L_ca1560; }
L_ca1858:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ca1868(Cpu *restrict c) {
    FN_ENTER(0xca1868u);
L_ca1868:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xda21d4u;
    { uint32_t ea = 0xca1878u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xca187cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1d0u;
    c->pc = c->r[4]; c->r[14] = 0xca1894u; rt_dispatch(c);
    c->r[14] = 0xca1898u; f_c58d7c(c);
    c->r[1] = 0xda21acu;
    { uint32_t ea = 0xca18a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_ca18b4(Cpu *restrict c) {
    FN_ENTER(0xca18b4u);
L_ca18b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xda2180u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xca18ccu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xca18d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_ca18f0(Cpu *restrict c) {
    FN_ENTER(0xca18f0u);
L_ca18f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0xca18f8u; f_c58d7c(c);
    c->r[1] = 0xda214cu;
    { uint32_t ea = 0xca1904u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_ca1910(Cpu *restrict c) {
    FN_ENTER(0xca1910u);
L_ca1910:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xca191cu; f_c58e70(c);
    c->r[0] = 0xda2124u;
    { uint32_t ea = 0xca1928u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca1928u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_ca1940(Cpu *restrict c) {
    FN_ENTER(0xca1940u);
L_ca1940:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xca194cu; f_c58fa8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[0] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 24);
    c->r[2] = c->r[1] + (uint32_t)(uint8_t)(ROR32(c->r[0], 16));
    c->r[1] = c->r[3] | (c->r[1] << 6);
    c->r[0] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[1] = 0xfff0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xff0000u;
    c->r[0] = c->r[0] + (c->r[2] << 2);
    c->r[0] = c->r[0] + 0xefu;
    c->r[2] = c->r[0] & c->r[1];
    c->r[0] = c->r[4];
    c->r[1] = 0x100u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c5b658(c);
}
void f_ca199c(Cpu *restrict c) {
    FN_ENTER(0xca199cu);
L_ca199c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xca19a8u; f_c59268(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[0] - 0x9cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x1a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 4) & 0xffffu;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[3] = (c->r[3] & 0xfff0ffffu) | ((c->r[2] << 16) & 0xf0000u);
    c->r[2] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[9]); }
    c->r[3] = c->r[3] & 0xff0fffffu;
    { uint32_t ea = c->r[7] + 0x1a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[2] = c->r[2] & 0xfu;
    c->r[2] = c->r[3] | (c->r[2] << 20);
    c->r[3] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[9]); }
    c->r[2] = c->r[2] & 0xf0ffffffu;
    { uint32_t ea = c->r[7] + 0x1a0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] >> 8) & 0xfu;
    c->r[7] = c->r[2] | (c->r[3] << 24);
    (void)f_subs(c, c->r[3], 0x6u);
    if (COND_EQ) { goto L_ca1a4c; }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbfff0000u;
    c->r[2] = c->r[1] & c->r[2];
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = c->r[1] | c->r[2];
    c->r[1] = c->r[1] | 0x40000000u;
L_ca1a4c:;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[9]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xca1a64u; f_c5b880(c);
    c->r[1] = 0x120000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x2a0000u; }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[4] + 0x46u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x194u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ca1a9c(Cpu *restrict c) {
    FN_ENTER(0xca1a9cu);
L_ca1a9c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1a0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 16) & 0xffu;
    c->r[1] = (c->r[1] >> 24);
    c->r[2] = c->r[3] + (c->r[2] << 1);
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[1] = (c->r[1] << 5);
    c->r[14] = 0xca1accu; f_bbd840(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c59ce4(c);
}
void f_ca1ae8(Cpu *restrict c) {
    FN_ENTER(0xca1ae8u);
L_ca1ae8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0xca1af8u; f_c5a384(c);
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[5] = c->r[5] + 0xd0u;
L_ca1b08:;
    c->v.s[0] = LD32(c->r[6] + 32u);
    c->v.s[2] = LD32(c->r[4]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[6] + 32u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[6] + 36u);
    c->v.s[2] = LD32(c->r[4] + 4u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[6] + 36u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[6] + 40u);
    c->v.s[2] = LD32(c->r[4] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[6] + 40u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[6] + 48u);
    c->v.s[2] = LD32(c->r[4]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[6] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[6] + 52u);
    c->v.s[2] = LD32(c->r[4] + 4u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[6] + 52u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[6] + 56u);
    c->v.s[2] = LD32(c->r[4] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[6] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xeau; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + c->r[0];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[4];
    c->r[14] = 0xca1b80u; f_ead6d0(c);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_ca1b08; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_ca1b90(Cpu *restrict c) {
    FN_ENTER(0xca1b90u);
L_ca1b90:;
    { uint32_t ea = c->r[0] + 0x46u; uint32_t v = LD8(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x2au);
    if (COND_EQ) { goto L_ca1ba8; }
    (void)f_subs(c, c->r[12], 0x12u);
    if (COND_NE) { return; }
    __attribute__((musttail)) return f_ca1bac(c);
L_ca1ba8:;
    __attribute__((musttail)) return f_ca20fc(c);
}
void f_ca1bac(Cpu *restrict c) {
    FN_ENTER(0xca1bacu);
L_ca1bac:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0xf0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[7] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_ca20e4; }
    c->r[0] = 0xd9afc4u;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xca1bf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[7];
    c->r[14] = 0xca1bfcu; f_dae520(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0xca1c10u; f_cef1e4(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xca1c20u; f_c74880(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[14] = 0xca1c34u; f_c7491c(c);
    c->r[2] = 0xd97600u;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = LD32(c->r[4] + 152u);
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = 0xca1c54u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 228u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[3]); }
    c->r[0] = (c->r[1] >> 7) & 0x1u;
    { uint32_t ea = c->r[13] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_ca1cb0; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_ca20e4; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x3u;
L_ca1c94:;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca1cc0; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca1c94; }
    goto L_ca20e4;
L_ca1cb0:;
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    if (COND_NE) { goto L_ca1cc4; }
    goto L_ca20e4;
L_ca1cc0:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
L_ca1cc4:;
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = 0x3f000000u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[9] = c->r[0] & 0x3u;
L_ca1cd8:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca1d20; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ca1d14; }
L_ca1cf4:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca1d14; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ca1cf4; }
    c->r[1] = 0x0u;
    goto L_ca1d20;
L_ca1d14:;
    c->r[1] = c->r[0];
    /* pld */
    /* pld */
L_ca1d20:;
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = c->r[8] + 0xc8u;
    c->r[14] = (c->r[12] >> 24) & 0x1u;
    { uint32_t ea = c->r[3] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = (c->r[12] >> 25) & 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[4] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[5] = c->r[5] - c->r[4];
    c->r[4] = (c->r[3] >> 8) & 0xffu;
    c->r[0] = (c->r[6] >> 8) & 0xffu;
    c->r[0] = c->r[0] - c->r[4];
    { uint32_t r = c->r[5] * c->r[7]; c->r[5] = r; }
    c->r[4] = (c->r[3] >> 8);
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[5] = c->r[3] + (c->r[5] >> 8);
    c->r[0] = c->r[0] + (c->r[4] << 8);
    c->r[5] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[0] = c->r[0] & 0xff00u;
    c->r[0] = c->r[0] | c->r[5];
    c->r[5] = (c->r[3] >> 16) & 0xffu;
    c->r[4] = (c->r[6] >> 16) & 0xffu;
    c->r[6] = (c->r[6] >> 24);
    c->r[6] = c->r[6] - (c->r[3] >> 24);
    c->r[5] = c->r[4] - c->r[5];
    { uint32_t r = c->r[5] * c->r[7]; c->r[5] = r; }
    { uint32_t r = c->r[6] * c->r[7]; c->r[6] = r; }
    c->r[5] = (c->r[5] >> 8);
    c->r[6] = (c->r[6] >> 8);
    c->r[5] = c->r[5] + (c->r[3] >> 16);
    c->r[3] = c->r[6] + (c->r[3] >> 24);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = (c->r[5] << 16);
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[5] = uxtb16(c->r[5]);
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    c->r[0] = c->r[0] | c->r[5];
    c->r[6] = (uint32_t)((int32_t)c->r[3] >> 8);
    c->r[0] = c->r[0] | (c->r[6] << 24);
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    { uint32_t sc = ((c->r[3] >> 7) & 1); uint32_t r = c->r[0] & (uint32_t)((int32_t)c->r[3] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca20d8; }
    c->r[0] = c->r[10] + 0x60u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[6] = 0x10u;
    c->r[3] = c->r[13] + 0x40u;
    c->r[2] = c->r[0] + (c->r[2] << 4);
    c->r[0] = c->r[0] + (c->r[14] << 4);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 68u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[2] = c->r[10] + 0x80u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[0] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 52u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 24) & 0x1u;
    c->r[1] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[0] + (c->r[2] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->r[0] = c->r[13] + 0x30u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[12]);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x50u;
    c->r[1] = c->r[4];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    c->r[14] = 0xca1ed0u; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + 0x20u;
    c->r[3] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[0] = c->r[6] & (c->r[0] >> 20);
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->r[0] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10];
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->r[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[2]);
    ST32(c->r[13] + 200u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xca1fc0u; f_ca435c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca20b8; }
    { uint32_t ea = c->r[10] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x2001u;
    c->r[6] = c->r[10] + 0xd8u;
    c->r[3] = c->r[2] & c->r[1];
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    c->r[7] = (c->r[1] >> 25) & 0x1u;
    c->r[5] = c->r[6] + (c->r[7] << 2);
    c->r[7] = (c->r[1] >> 24) & 0x1u;
    c->r[1] = (c->r[2] >> 16);
    c->v.s[0] = LD32(c->r[5]);
    if (COND_NE) { goto L_ca202c; }
    c->r[7] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[10] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->v.s[2] = LD32(c->r[7]);
    if (COND_NE) { goto L_ca2040; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca2038; }
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca2040; }
    goto L_ca204c;
L_ca202c:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[3] = c->v.s[0];
    goto L_ca20a4;
L_ca2038:;
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ca204c; }
L_ca2040:;
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[0]);
    goto L_ca2058;
L_ca204c:;
    vfp_cmp_f(c, c->v.f[20], c->v.f[16]);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[0] : c->v.s[2];
L_ca2058:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    c->r[6] = c->v.s[0];
    (void)f_subs(c, c->r[6], (c->r[3] >> 16));
    c->r[7] = c->r[6];
    if (COND_HI) { c->r[7] = (c->r[3] >> 16); }
    c->r[3] = (c->r[3] >> 16);
    c->v.s[0] = c->r[7];
    (void)f_subs(c, c->r[3], c->r[6]);
    c->r[5] = c->r[7] + 0x1u;
    c->r[6] = 0x0u;
    if (COND_HI) { c->r[6] = c->r[5]; }
    if (COND_HI) { c->r[3] = c->r[5]; }
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[3] = c->r[6]; }
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[3] = c->r[7]; }
L_ca20a4:;
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 5); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[3] + (c->r[3] << 1);
    c->r[5] = c->r[0] + (c->r[1] << 3);
L_ca20b8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0xd8u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xca20d4u; f_eadaa0(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
L_ca20d8:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[10] = c->r[1];
    if (COND_NE) { goto L_ca1cd8; }
L_ca20e4:;
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ca20fc(Cpu *restrict c) {
    FN_ENTER(0xca20fcu);
L_ca20fc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x138u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[1];
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_ca2a08; }
    c->r[1] = c->r[13] + 0x108u;
    c->r[0] = c->r[9];
    c->r[2] = 0x0u;
    c->r[14] = 0xca213cu; f_cef728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ca2a08; }
    c->r[0] = 0xd9aa5cu;
    { uint32_t ea = c->r[9] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xca2158u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[5];
    c->r[14] = 0xca2164u; f_dae520(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[9];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0xca2178u; f_cef1e4(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[9];
    c->r[1] = c->r[5];
    c->r[14] = 0xca2188u; f_c74880(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    c->r[14] = 0xca219cu; f_c7491c(c);
    c->r[2] = 0xd97098u;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = LD32(c->r[9] + 152u);
    { uint32_t ea = c->r[9] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = 0xca21bcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 252u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[3]); }
    c->r[0] = (c->r[1] >> 7) & 0x1u;
    { uint32_t ea = c->r[13] + 0x104u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xb0u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_ca2218; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_ca2214; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x3u;
L_ca21fc:;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca2218; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca21fc; }
L_ca2214:;
    c->r[10] = 0x0u;
L_ca2218:;
    c->r[0] = c->r[13] + 0xa0u;
    c->r[1] = c->r[5];
    c->r[14] = 0xca2224u; f_c57f14(c);
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[7]); }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca23d8; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 160u);
    c->v.s[2] = LD32(c->r[13] + 164u);
    c->v.s[4] = LD32(c->r[13] + 168u);
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 144u, c->v.s[6]);
    ST32(c->r[13] + 148u, c->v.s[2]);
    ST32(c->r[13] + 152u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca2298; }
    c->r[14] = 0xca2294u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_ca2298:;
    c->v.s[2] = LD32(c->r[13] + 148u);
    c->v.s[0] = LD32(c->r[13] + 144u);
    c->v.s[4] = LD32(c->r[13] + 152u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca22c8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca22c8u; f_15efddc(c);
L_ca22c8:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca22e8; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ca2314;
L_ca22e8:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 144u);
    c->v.s[4] = LD32(c->r[13] + 148u);
    c->v.s[6] = LD32(c->r[13] + 152u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ca2314:;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca2394; }
    { uint32_t ea = c->r[9] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[18];
    c->r[1] = (c->r[1] >> 8) & 0x1u;
    c->r[2] = c->r[0] + (c->r[1] << 4);
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 176u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 180u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 184u, c->v.s[0]);
    goto L_ca23b4;
L_ca2394:;
    c->r[0] = 0xd96eb8u;
    { uint32_t ea = 0xca23a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
L_ca23b4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x108u;
    c->r[14] = 0xca23d4u; f_ea99ec(c);
    c->r[7] = c->r[0];
L_ca23d8:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_ca2a08; }
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[26] = 0x34000000u;
    c->v.s[24] = 0x3f000000u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    c->v.f[22] = c->v.f[20] - c->v.f[18];
    c->r[8] = c->r[0] & 0x3u;
    c->r[0] = c->r[9] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_ca240c:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca2454; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ca2448; }
L_ca2428:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[8] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca2448; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ca2428; }
    c->r[1] = 0x0u;
    goto L_ca2454;
L_ca2448:;
    c->r[1] = c->r[0];
    /* pld */
    /* pld */
L_ca2454:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[6] = 0x10u;
    c->r[2] = c->r[10] + 0x20u;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[0] = c->r[6] & (c->r[0] >> 20);
    c->r[6] = c->r[10] + 0x8u;
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[28] = c->v.f[18] * c->v.f[4];
    c->v.f[30] = c->v.f[18] * c->v.f[2];
    c->v.f[17] = c->v.f[18] * c->v.f[0];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[22] * c->v.f[6]);
    if (COND_EQ) { goto L_ca2620; }
    c->v.s[2] = LD32(c->r[13] + 164u);
    c->v.s[0] = LD32(c->r[13] + 160u);
    c->v.s[4] = LD32(c->r[13] + 168u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[0] - c->v.f[17];
    c->v.f[2] = c->v.f[2] - c->v.f[30];
    c->v.f[4] = c->v.f[4] - c->v.f[28];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 144u, c->v.s[6]);
    ST32(c->r[13] + 148u, c->v.s[2]);
    ST32(c->r[13] + 152u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca2504; }
    c->r[14] = 0xca2500u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_ca2504:;
    c->v.s[2] = LD32(c->r[13] + 148u);
    c->v.s[0] = LD32(c->r[13] + 144u);
    c->v.s[4] = LD32(c->r[13] + 152u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca2534; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca2534u; f_15efddc(c);
L_ca2534:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca2554; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ca257c;
L_ca2554:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 144u);
    c->v.s[4] = LD32(c->r[13] + 148u);
    c->v.s[6] = LD32(c->r[13] + 152u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ca257c:;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x90u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x108u;
    c->r[2] = c->r[13] + 0x50u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xca261cu; f_ea99ec(c);
    c->r[7] = c->r[0];
L_ca2620:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_ca29fc; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[5] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[5] - c->r[3];
    { uint32_t r = c->r[1] * c->r[4]; c->r[1] = r; }
    c->r[5] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[4]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[5] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[5] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[5] - c->r[3];
    { uint32_t r = c->r[3] * c->r[4]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca29fc; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca275c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca2704; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_ca2708;
L_ca2704:;
    c->r[5] = 0x0u;
L_ca2708:;
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_ca272c; }
    c->r[0] = c->r[5];
    c->r[1] = 0x10u;
    c->r[14] = 0xca2728u; f_a82674(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ca272c:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ca275c; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[9]); }
    ST32(c->r[0], c->v.s[17]);
    ST32(c->r[0] + 4u, c->v.s[30]);
    ST32(c->r[0] + 8u, c->v.s[28]);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_ca275c:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x10u;
    c->r[9] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[3] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 68u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    c->r[2] = c->r[4] & (c->r[1] >> 21);
    c->r[1] = c->r[4] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 52u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[1] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x50u;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[3]);
    c->r[1] = c->r[13] + 0x30u;
    c->r[3] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    c->r[14] = 0xca285cu; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10];
    c->r[3] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    ST32(c->r[13] + 224u, c->v.s[17]);
    ST32(c->r[13] + 228u, c->v.s[30]);
    ST32(c->r[13] + 232u, c->v.s[28]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xca28e4u; f_ca435c(c);
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_ca29dc; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x2001u;
    c->r[5] = c->r[10] + 0xd8u;
    c->r[6] = (c->r[1] >> 25) & 0x1u;
    c->r[3] = c->r[2] & c->r[0];
    c->r[0] = c->r[5] + (c->r[6] << 2);
    c->r[6] = (c->r[1] >> 24) & 0x1u;
    c->r[1] = (c->r[2] >> 16);
    (void)f_subs(c, c->r[3], 0x1u);
    c->v.s[0] = LD32(c->r[0]);
    if (COND_NE) { goto L_ca2950; }
    c->r[0] = c->r[5] + (c->r[6] << 2);
    { uint32_t ea = c->r[10] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->v.s[2] = LD32(c->r[0]);
    if (COND_NE) { goto L_ca2964; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca295c; }
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca2964; }
    goto L_ca2970;
L_ca2950:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[3] = c->v.s[0];
    goto L_ca29c8;
L_ca295c:;
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ca2970; }
L_ca2964:;
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[0]);
    goto L_ca297c;
L_ca2970:;
    vfp_cmp_f(c, c->v.f[24], c->v.f[18]);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[0] : c->v.s[2];
L_ca297c:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    c->r[6] = c->v.s[0];
    (void)f_subs(c, c->r[6], (c->r[3] >> 16));
    c->r[0] = c->r[6];
    if (COND_HI) { c->r[0] = (c->r[3] >> 16); }
    c->r[3] = (c->r[3] >> 16);
    c->v.s[0] = c->r[0];
    (void)f_subs(c, c->r[3], c->r[6]);
    c->r[5] = c->r[0] + 0x1u;
    c->r[6] = 0x0u;
    if (COND_HI) { c->r[6] = c->r[5]; }
    if (COND_HI) { c->r[3] = c->r[5]; }
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[3] = c->r[6]; }
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[3] = c->r[0]; }
L_ca29c8:;
    { uint32_t ea = c->r[12] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 5); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[3] + (c->r[3] << 1);
    c->r[9] = c->r[0] + (c->r[1] << 3);
L_ca29dc:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0xf0u;
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xca29f8u; f_eadaa0(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
L_ca29fc:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca240c; }
L_ca2a08:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ca2a24(Cpu *restrict c) {
    FN_ENTER(0xca2a24u);
L_ca2a24:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0xf0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[2];
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0xca2a4cu; f_c5ca24(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_ca36a8; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1a2u;
    { uint32_t ea = c->r[5] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[13] + 0xdcu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[2] = (c->r[2] & 0xffffff00u) | ((c->r[0] << 0) & 0xffu);
    { uint32_t ea = c->r[5] + 0xe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8);
    c->r[2] = (c->r[2] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    { uint32_t ea = c->r[5] + 0xe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[1] = c->r[5];
    c->r[0] = (c->r[2] & 0xFFFFu) | ((c->r[0] << 21) & 0xFFFF0000u);
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[5] + 0xe8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xca2ab4u; f_c69d00(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xca2ac8u; f_ead968(c);
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = c->r[1] & (c->r[2] >> 10);
    c->r[2] = (c->r[2] >> 8) & 0x3u;
    c->r[1] = c->r[2] | c->r[1];
    c->r[1] = (c->r[1] << 26);
    c->r[0] = c->r[1] | (c->r[0] >> 19);
    c->r[1] = 0x1fe0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1c000000u;
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    c->r[14] = 0xca2b14u; f_c6a2a4(c);
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 16));
    if (COND_NE) { c->r[7] = c->r[10] + (c->r[0] >> 16); }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_ca2ba8; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[1] = 0xd9ff90u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xfffu;
    { uint32_t ea = 0xca2b4cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0xca2b58u; f_ced74c(c);
    c->r[6] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[2] = c->r[0];
    c->r[0] = c->r[13] + 0x90u;
    c->r[1] = c->r[7];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[4] & 0x100u; }
    c->r[3] = c->r[6];
    c->r[14] = 0xca2b78u; f_cf938c(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_GE) { c->r[1] = c->r[1] | 0x20000u; }
    if (COND_GE) { { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[5] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffff0000u;
    c->r[1] = c->r[1] | c->r[6];
    { uint32_t ea = c->r[5] + 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_ca2bbc;
L_ca2ba8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[13] + 0x90u;
    c->r[1] = c->r[4];
    c->r[14] = 0xca2bb8u; f_c6be40(c);
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ca2bbc:;
    { uint32_t ea = c->r[5] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 12);
    c->r[1] = c->r[1] | (c->r[2] << 20);
    { uint32_t r = c->r[1] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca2c58; }
    c->v.s[0] = 0x43800000u;
    c->v.s[2] = LD32(c->r[8] + 32u);
    c->r[2] = c->r[1] & 0xfu;
    (void)f_subs(c, c->r[2], 0x8u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    if (COND_HI) { goto L_ca36b8; }
    c->r[1] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x1u;
    c->r[6] = 0xaau;
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca2c60; }
    c->r[6] = 0x154u;
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca2c7c; }
    c->r[2] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[0];
    c->r[6] = ~0xff0000u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[3] = c->r[3] & 0xffff0000u;
    c->r[2] = c->r[2] & 0xff00u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 8) & 0xffu;
    c->r[4] = c->r[2] | c->r[3];
    c->r[2] = (c->r[0] >> 16) & 0xffu;
    c->r[3] = 0x10u;
    c->r[0] = c->r[4];
    goto L_ca2c6c;
L_ca2c58:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_ca2c7c;
L_ca2c60:;
    c->r[2] = (c->r[0] >> 24);
    c->r[6] = ~0xff000000u;
    c->r[3] = 0x18u;
L_ca2c6c:;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[6] & c->r[0];
    c->r[1] = (c->r[1] >> 8) & 0xffu;
    c->r[0] = c->r[0] | sh_lsl(c->r[1], c->r[3]);
L_ca2c7c:;
    c->v.s[16] = 0x0u;
    { uint32_t ea = c->r[5] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xca2c98u; f_c6a2d0(c);
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + 0x170u;
    c->r[3] = c->r[10] + 0x188u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xca2cb4u; f_c6adac(c);
    c->r[3] = 0xd9fe18u;
    { uint32_t ea = c->r[7] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xca2cc8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[7] + 0x4cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xfffu;
    if (COND_NE) { c->r[6] = f_adds(c, c->r[10], c->r[1]); }
    c->r[2] = c->r[3] + (c->r[2] << 2);
    c->v.s[18] = LD32(c->r[2]);
    if (COND_EQ) { goto L_ca2d20; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0xca2cf4u; f_ced74c(c);
    c->v.s[0] = c->v.s[18];
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xca2d04u; f_cf7958(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[16]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[17]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_ca2d70; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2000000u;
    goto L_ca2db0;
L_ca2d20:;
    c->r[1] = 0xd9fd98u;
    c->r[0] = c->r[0] + 0x2u;
    c->v.s[0] = LD32(c->r[10] + 480u);
    c->v.s[4] = LD32(c->r[10] + 484u);
    { uint32_t ea = c->r[7] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[2] = LD32(c->r[10] + 488u);
    c->v.s[6] = LD32(c->r[10] + 492u);
    { uint32_t ea = 0xca2d48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[4]);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[8] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[6]);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    c->v.s[18] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[0] = c->r[0] | 0x2u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); } }
    goto L_ca2db4;
L_ca2d70:;
    c->r[1] = 0xd9fd60u;
    { uint32_t ea = c->r[7] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xca2d80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[7] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[18] = LD32(c->r[10] + 488u);
    c->v.s[2] = LD32(c->r[10] + 492u);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[4] * c->v.f[2]);
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_ca2db4; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
L_ca2db0:;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
L_ca2db4:;
    c->r[0] = 0x0u;
    ST32(c->r[5] + 196u, c->v.s[0]);
    ST32(c->r[5] + 192u, c->v.s[0]);
    ST32(c->r[5] + 244u, c->v.s[18]);
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[5] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD16(ea); c->r[6] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xdau; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[3] * c->r[2] + c->r[1]; c->r[1] = r; }
    c->r[4] = c->r[0] + c->r[1];
    c->v.s[2] = LD32(c->r[4] + 4u);
    c->v.s[0] = LD32(c->r[4]);
    c->v.s[4] = LD32(c->r[4] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca2e1c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca2e1cu; f_15efddc(c);
L_ca2e1c:;
    c->v.s[18] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca2e40; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    goto L_ca2e6c;
L_ca2e40:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[4]);
    c->v.s[4] = LD32(c->r[4] + 4u);
    c->v.s[6] = LD32(c->r[4] + 8u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ca2e6c:;
    c->r[3] = 0x0u;
    c->r[12] = c->r[5] + 0x84u;
    { uint32_t ea = c->r[5] + 0x80u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[7] + 0xd0u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x94u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 24) & 0x1u;
    c->r[2] = c->r[5] + (c->r[1] << 4);
    c->r[1] = c->r[5] + (c->r[1] << 2);
    c->v.s[0] = LD32(c->r[1] + 64u);
    c->r[1] = c->r[2] + 0x80u;
    c->r[3] = c->r[2] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->r[14] = 0xca2ebcu; f_c6c268(c);
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca2ef0; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[10] + 0x3eu; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[10] + c->r[1]; }
    c->r[14] = 0xca2ef0u; f_cec454(c);
L_ca2ef0:;
    { uint32_t ea = c->r[9] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca2f58; }
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + 0xd0u;
    c->r[2] = c->r[13] + 0x50u;
    c->r[3] = 0x1u;
    c->r[1] = c->r[1] & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x50u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->pc = c->r[4]; c->r[14] = 0xca2f40u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x50u; ST32(ea, c->r[0]); }
L_ca2f58:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    c->r[2] = 0x2u;
    c->r[6] = 0x2000u;
    c->r[14] = c->r[5];
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD16(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5] + 0xe8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xff000000u;
    c->r[9] = c->r[5] + c->r[8];
    c->r[5] = 0x100000u;
    c->r[7] = c->r[9] + (c->r[12] >> 16);
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = (c->r[0] & 0xffff0fffu) | ((c->r[2] << 12) & 0xf000u);
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & c->r[6];
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x1a0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[4] = (c->r[6] >> 24);
    c->r[0] = c->r[0] | (c->r[4] << 16);
    c->r[5] = c->r[5] | (c->r[4] << 21);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[3]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x1a2u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[2] & 0xffffff00u;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[3] = c->r[4] | c->r[2];
    c->r[2] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[2] = c->r[5] | c->r[2];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = (c->r[5] >> 16);
    c->r[5] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[1] = 0xe0u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[1] = 0x3fcu;
    c->r[1] = c->r[1] & (c->r[3] << 2);
    c->r[3] = c->r[1] + (uint32_t)(uint16_t)(c->r[2]);
    c->r[1] = (c->r[2] & 0xFFFFu) | ((c->r[3] << 16) & 0xFFFF0000u);
    { uint32_t ea = c->r[7] + 0x94u; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    c->r[1] = c->r[1] + (c->r[6] >> 24);
    c->v.s[0] = c->r[1];
    c->r[1] = (c->r[12] >> 16);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    ST32(c->r[7] + 152u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ca308c; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x0u;
    c->r[5] = c->r[14];
    c->r[12] = c->r[8];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + c->r[8];
    c->r[0] = c->r[14] + c->r[0];
L_ca3060:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_ca3060; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] >> 16);
    goto L_ca30a0;
L_ca308c:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[5] = c->r[14];
    c->r[12] = c->r[8];
L_ca30a0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca30d8; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + c->r[12];
    c->r[0] = c->r[5] + c->r[0];
L_ca30c4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_ca30c4; }
L_ca30d8:;
    c->r[1] = 0xd9f9f8u;
    { uint32_t ea = c->r[8] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xca30e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[0] = LD32(c->r[10] + 464u);
    c->v.s[2] = LD32(c->r[10] + 468u);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    ST32(c->r[7] + 156u, c->v.s[0]);
    { uint32_t ea = c->r[10] + 0x1a2u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    ST32(c->r[7] + 128u, c->v.s[0]);
    { uint32_t ea = c->r[10] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca314c; }
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[0] = 0x40490fdbu;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[16] = c->v.f[0] / c->v.f[2];
L_ca314c:;
    ST32(c->r[7] + 136u, c->v.s[16]);
    c->r[2] = 0x100u;
    { uint32_t ea = c->r[10] + 0x1a8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    { uint32_t sc = ((c->r[1] >> 24) & 1); uint32_t r = c->r[2] & (c->r[1] << 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
    if (COND_NE) { goto L_ca317c; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + 0xa0u; ST32(ea, c->r[1]); }
    goto L_ca3218;
L_ca317c:;
    c->r[1] = 0xd9f950u;
    { uint32_t ea = c->r[8] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = 0x3f7d70a4u;
    { uint32_t ea = 0xca3190u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[0] = LD32(c->r[10] + 432u);
    c->v.s[2] = LD32(c->r[10] + 436u);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.s[2] = 0x3c23d70au;
    { uint64_t t0 = c->v.d[1] | c->v.d[1]; c->v.d[4] = t0; }
    ST32(c->r[7] + 160u, c->v.s[0]);
    c->v.s[0] = 0x3f7ae148u;
    { uint32_t ea = c->r[10] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1bcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xb4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x70a4u;
    { uint32_t ea = c->r[7] + 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd70au;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3c230000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x407d0000u;
    { uint32_t ea = c->r[7] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xc4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[0]);
    { float t0 = nftz(vmin_f(nftz(c->v.f[8]), nftz(c->v.f[6]))); float t1 = nftz(vmin_f(nftz(c->v.f[9]), nftz(c->v.f[7]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[8]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[2] : c->v.s[0];
    ST32(c->r[7] + 192u, c->v.s[0]);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
L_ca3218:;
    c->r[6] = c->r[10] + 0x1f0u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[12]); }
    if (COND_NE) { goto L_ca3234; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0xa4u; ST32(ea, c->r[0]); }
    goto L_ca32cc;
L_ca3234:;
    c->r[1] = 0xd9f898u;
    { uint32_t ea = c->r[8] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = 0x3f7d70a4u;
    { uint32_t ea = 0xca3248u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[0] = LD32(c->r[10] + 448u);
    c->v.s[2] = LD32(c->r[10] + 452u);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.s[2] = 0x3c23d70au;
    { uint64_t t0 = c->v.d[1] | c->v.d[1]; c->v.d[4] = t0; }
    ST32(c->r[7] + 164u, c->v.s[0]);
    c->v.s[0] = 0x3f7ae148u;
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1ccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xbcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x70a4u;
    { uint32_t ea = c->r[7] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd70au;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3c230000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x407d0000u;
    { uint32_t ea = c->r[7] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xccu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[0]);
    { float t0 = nftz(vmin_f(nftz(c->v.f[8]), nftz(c->v.f[6]))); float t1 = nftz(vmin_f(nftz(c->v.f[9]), nftz(c->v.f[7]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[8]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[2] : c->v.s[0];
    ST32(c->r[7] + 200u, c->v.s[0]);
L_ca32cc:;
    { uint32_t ea = c->r[6] + 0x84u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca3300; }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0xca32ecu; f_ced74c(c);
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[0] = (c->r[0] & 0xFFFFu) | (c->r[2] & 0xFFFF0000u);
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
L_ca3300:;
    { uint32_t ea = c->r[6] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca333c; }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0xca3320u; f_ced74c(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 16);
    c->r[1] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
L_ca333c:;
    { uint32_t ea = c->r[6] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca3370; }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0xca335cu; f_ced74c(c);
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[1] = c->r[1] | 0x10u;
    c->r[0] = (c->r[0] & 0xFFFFu) | (c->r[3] & 0xFFFF0000u);
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_ca3370:;
    { uint32_t ea = c->r[6] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[4], (c->r[0] >> 16));
    if (COND_EQ) { goto L_ca33b8; }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] >> 16);
    c->r[2] = c->r[5];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0xca339cu; f_ced74c(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[2] = c->r[2] | 0x20u;
    c->r[0] = c->r[1] | (c->r[0] << 16);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
L_ca33b8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    c->r[4] = c->r[5];
    c->r[2] = c->r[13] + 0x90u;
    c->v.s[1] = LD32(c->r[7] + 156u);
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    c->r[5] = c->r[13] + 0x50u;
    c->r[1] = c->r[5];
    c->v.s[0] = LD32(c->r[0] + 192u);
    c->r[0] = c->r[8];
    c->r[14] = 0xca33f8u; f_ca36dc(c);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[4] + 0x20u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[1] = c->r[4] + (c->r[0] << 4);
    c->r[0] = c->r[7];
    c->r[14] = 0xca3418u; f_eab0ac(c);
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xau; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] * c->r[1] + c->r[3]; c->r[1] = r; }
    c->r[6] = c->r[0] & 0x1u;
    c->r[5] = c->r[2] + c->r[1];
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca346c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca346cu; f_15efddc(c);
L_ca346c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    c->r[3] = c->r[4] + (c->r[6] << 4);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca3498; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ca34c0;
L_ca3498:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[5] + 8u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[0];
    ST32(c->r[13] + 64u, c->v.s[2]);
    ST32(c->r[13] + 68u, c->v.s[4]);
L_ca34c0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xca34f4u; f_c704b4(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[3] >> 16) & 0xffu;
    { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca3690; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca3658; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = (c->r[3] >> 16);
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[2] | (c->r[7] << 16);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[5] + c->r[1];
    c->r[5] = c->r[3] | (c->r[6] << 16);
    c->r[3] = c->r[2] + 0xe8u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] + 0xe4u;
    c->r[2] = c->r[2] + 0xe0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = (c->r[0] << 5);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    goto L_ca35a8;
L_ca3580:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[14] = c->r[14] + c->r[7];
    c->r[7] = (c->r[5] >> 16);
    c->r[4] = c->r[7] | (c->r[2] << 16);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[5] = c->r[7] | (c->r[2] << 16);
L_ca35a8:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[14]); }
    { uint32_t r = c->r[6] * c->r[4] + c->r[2]; c->r[7] = r; }
    c->r[2] = 0xff0u;
    c->r[5] = c->r[2] & (c->r[5] << 4);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[7] + c->r[5];
    c->r[12] = c->r[9] + c->r[7];
    { uint32_t r = c->r[6] * c->r[4] + c->r[2]; c->r[7] = r; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[7] + c->r[5];
    { uint32_t r = c->r[6] * c->r[4] + c->r[2]; c->r[4] = r; }
    c->r[8] = c->r[9] + c->r[7];
    c->r[4] = c->r[4] + c->r[5];
    c->r[5] = c->r[14];
    c->r[4] = c->r[9] + c->r[4];
L_ca35f4:;
    { uint32_t ea = c->r[4] + (c->r[10] << 4); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[1] + c->r[5]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + (c->r[10] << 4); uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[12] + (c->r[10] << 4); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], c->r[0]);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[3]); }
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[6] + c->r[5]; ST32(ea, c->r[7]); c->r[6] = ea; }
    c->r[7] = c->r[9] + c->r[5];
    c->r[5] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    if (COND_CC) { goto L_ca35f4; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_CC) { goto L_ca3580; }
    goto L_ca3690;
L_ca3658:;
    c->r[0] = ~0x0u;
    { uint32_t r = c->r[2] & 0x7u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    c->r[1] = c->r[0] + (uint32_t)(uint8_t)(c->r[2]);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_ca3678; }
L_ca366c:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_ca366c; }
L_ca3678:;
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_CC) { goto L_ca3690; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[2]);
L_ca3684:;
    c->r[0] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_ca3684; }
L_ca3690:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xca369cu; f_c74838(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 26) & 0x1u;
L_ca36a8:;
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_ca36b8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_ca2c7c;
}
void f_ca36dc(Cpu *restrict c) {
    FN_ENTER(0xca36dcu);
L_ca36dc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x30u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 20) & 0xfu;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_ca3784; }
    c->r[0] = (c->r[0] << 2);
    c->r[3] = 0xca3718u + 0xcu;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xbf800000u;
    c->pc = c->r[0] + c->r[3]; switch (c->pc) { case 0xca3740u: goto L_ca3740; case 0xca37d0u: goto L_ca37d0; case 0xca380cu: goto L_ca380c; case 0xca3850u: goto L_ca3850; case 0xca3898u: goto L_ca3898; case 0xca38d8u: goto L_ca38d8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_ca3740:;
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    c->v.s[4] = 0x0u;
    c->r[0] = 0x0u;
    ST32(c->r[13], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 16u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13];
    c->r[3] = c->r[0] + 0x20u;
    c->r[0] = 0x3f800000u;
    goto L_ca391c;
L_ca3784:;
    c->r[0] = 0xd953bcu;
    { uint32_t ea = 0xca3790u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->r[5];
    c->v.s[4] = c->r[12];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    goto L_ca391c;
L_ca37d0:;
    c->v.s[2] = 0x0u;
    c->v.s[4] = c->v.s[0] ^ 0x80000000u;
    c->r[0] = 0x0u;
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 4u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 20u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    goto L_ca38cc;
L_ca380c:;
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    c->r[0] = 0x0u;
    c->r[3] = c->r[13];
    c->v.s[4] = c->v.s[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[3] = c->r[3] + 0x20u;
    ST32(c->r[13] + 20u, c->v.s[2]);
    c->v.s[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    goto L_ca391c;
L_ca3850:;
    c->v.s[4] = 0x0u;
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    c->r[0] = 0x0u;
    c->r[3] = 0x3f800000u;
    ST32(c->r[13], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 16u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13];
    c->v.s[2] = c->v.s[0];
    c->r[3] = c->r[3] + 0x20u;
    goto L_ca391c;
L_ca3898:;
    c->v.s[4] = 0x0u;
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    c->r[0] = 0x0u;
    ST32(c->r[13], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 16u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[5]); }
L_ca38cc:;
    c->r[3] = c->r[13];
    c->r[3] = c->r[3] + 0x20u;
    goto L_ca391c;
L_ca38d8:;
    c->v.s[4] = 0x0u;
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    c->r[0] = 0x0u;
    ST32(c->r[13], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 16u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13];
    c->v.s[2] = c->v.s[0];
    c->r[3] = c->r[0] + 0x20u;
    c->r[0] = c->r[5];
L_ca391c:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[5]); }
    c->v.s[10] = LD32(c->r[2] + 20u);
    c->v.s[14] = LD32(c->r[2] + 16u);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[6] = LD32(c->r[2] + 8u);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[12] = LD32(c->r[2] + 24u);
    c->v.s[3] = LD32(c->r[2] + 32u);
    c->v.s[5] = LD32(c->r[2] + 36u);
    c->v.s[7] = LD32(c->r[2] + 40u);
    c->v.s[9] = LD32(c->r[13] + 8u);
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[5]); }
    c->v.f[14] = c->v.f[14] * c->v.f[4];
    c->v.f[10] = c->v.f[4] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] * c->v.f[12];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[9]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[9] * c->v.f[5]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[9] * c->v.f[7]);
    ST32(c->r[1], c->v.s[14]);
    ST32(c->r[1] + 4u, c->v.s[10]);
    ST32(c->r[1] + 8u, c->v.s[4]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[2]);
    c->v.s[6] = LD32(c->r[2] + 20u);
    c->v.s[14] = LD32(c->r[13] + 20u);
    c->v.s[10] = LD32(c->r[2] + 16u);
    c->v.s[8] = LD32(c->r[2] + 24u);
    c->v.s[12] = LD32(c->r[13] + 16u);
    c->v.s[3] = LD32(c->r[13] + 24u);
    c->v.s[5] = LD32(c->r[2] + 32u);
    c->v.s[7] = LD32(c->r[2] + 36u);
    c->v.s[9] = LD32(c->r[2] + 40u);
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[5]); }
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[3]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[7]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[3] * c->v.f[9]);
    ST32(c->r[1] + 16u, c->v.s[10]);
    ST32(c->r[1] + 20u, c->v.s[6]);
    ST32(c->r[1] + 24u, c->v.s[4]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[2]);
    c->v.s[6] = LD32(c->r[2] + 20u);
    c->v.s[14] = LD32(c->r[13] + 36u);
    c->v.s[10] = LD32(c->r[2] + 16u);
    c->v.s[8] = LD32(c->r[2] + 24u);
    c->v.s[12] = LD32(c->r[13] + 32u);
    c->v.s[3] = LD32(c->r[13] + 40u);
    c->v.s[5] = LD32(c->r[2] + 32u);
    c->v.s[7] = LD32(c->r[2] + 36u);
    c->v.s[9] = LD32(c->r[2] + 40u);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[3]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[7]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[3] * c->v.f[9]);
    ST32(c->r[1] + 32u, c->v.s[10]);
    c->v.f[0] = c->v.f[10] * c->v.f[1];
    ST32(c->r[1] + 36u, c->v.s[6]);
    ST32(c->r[1] + 40u, c->v.s[4]);
    c->v.f[2] = c->v.f[6] * c->v.f[1];
    c->v.f[4] = c->v.f[4] * c->v.f[1];
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[5]); }
    ST32(c->r[1] + 48u, c->v.s[0]);
    ST32(c->r[1] + 52u, c->v.s[2]);
    ST32(c->r[1] + 56u, c->v.s[4]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[5] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_ca3a78(Cpu *restrict c) {
    FN_ENTER(0xca3a78u);
L_ca3a78:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[14] = 0xca3a88u; f_c62db8(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ca3b94; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ca3b20; }
    c->r[6] = c->r[8] + 0xd0u;
L_ca3aa4:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca3acc; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
L_ca3acc:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xca3ad8u; f_ca3ba0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ca3ae8; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_ca3af8;
L_ca3ae8:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xca3af4u; f_c5b224(c);
    c->r[5] = c->r[0];
L_ca3af8:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); }
    c->r[14] = c->r[6] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[12] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->r[1] = c->r[0] + 0x10000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | (c->r[1] & 0xFFFF0000u);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); }
    c->r[0] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    if (COND_NE) { goto L_ca3aa4; }
L_ca3b20:;
    { uint32_t ea = c->r[8] + 0x43u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca3b74; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ca3b74; }
L_ca3b38:;
    { uint32_t ea = c->r[5] + 0xfu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[1] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + 0x50u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0xd0u;
    c->r[1] = c->r[8];
    c->r[3] = 0x1u;
    c->pc = c->r[7]; c->r[14] = 0xca3b68u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_ca3b38; }
L_ca3b74:;
    { uint32_t ea = c->r[8] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca3b94; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[8]; }
    if (COND_NE) { c->r[14] = 0xca3b94u; f_ca0bc4(c); }
L_ca3b94:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ca3ba0(Cpu *restrict c) {
    FN_ENTER(0xca3ba0u);
L_ca3ba0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0xc0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[5] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca3c0c; }
    c->v.s[0] = LD32(c->r[4] + 252u);
    c->r[2] = c->r[4] + 0xb0u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[14] = 0xca3be8u; f_c6a004(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_ca434c; }
    { uint32_t ea = c->r[10] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[1]); }
L_ca3c0c:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[14] = 0xca3c18u; f_c6a2cc(c);
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca3c68; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], (c->r[1] >> 16));
    c->r[6] = (c->r[1] >> 16);
    c->r[2] = c->r[4];
    if (COND_NE) { c->r[6] = c->r[0] + (c->r[1] >> 16); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0xca3c4cu; f_ced74c(c);
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[6];
    c->r[14] = 0xca3c60u; f_cf938c(c);
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
L_ca3c68:;
    { uint32_t r = c->r[5] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    if (COND_NE) { goto L_ca3c90; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[3] >> 24) & 0x1u;
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[1]); }
    goto L_ca3d7c;
L_ca3c90:;
    { uint32_t ea = c->r[7] + 0x40u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = (c->r[0] >> 12);
    c->r[1] = c->r[0] | (c->r[1] << 20);
    { uint32_t r = c->r[1] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca3d44; }
    c->r[2] = c->r[7];
    c->v.s[0] = 0x43800000u;
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xd8u; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[8]);
    { uint32_t r = c->r[5] * c->r[2] + c->r[0]; c->r[2] = r; }
    c->r[2] = c->r[7] + c->r[2];
    c->r[7] = c->r[1] & 0xfu;
    c->v.s[2] = LD32(c->r[2]);
    (void)f_subs(c, c->r[7], 0x8u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    if (COND_HI) { goto L_ca3d6c; }
    c->r[1] = c->v.s[0];
    c->r[0] = 0x1u;
    c->r[2] = 0xaau;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[0], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca3d50; }
    c->r[2] = 0x154u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[0], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca3d6c; }
    c->r[2] = (c->r[6] >> 8) & 0xffu;
    c->r[0] = c->r[6];
    c->r[5] = ~0xff0000u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[0] = c->r[0] & 0xffff0000u;
    c->r[2] = c->r[2] & 0xff00u;
    c->r[0] = c->r[2] | c->r[0];
    c->r[2] = (uint32_t)(uint8_t)(c->r[6]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = (c->r[6] >> 16) & 0xffu;
    c->r[2] = c->r[0] | c->r[2];
    c->r[0] = 0x10u;
    c->r[6] = c->r[2];
    goto L_ca3d5c;
L_ca3d44:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_ca3d70;
L_ca3d50:;
    c->r[7] = (c->r[6] >> 24);
    c->r[5] = ~0xff000000u;
    c->r[0] = 0x18u;
L_ca3d5c:;
    { uint32_t r = c->r[7] * c->r[1]; c->r[1] = r; }
    c->r[2] = c->r[5] & c->r[6];
    c->r[1] = (c->r[1] >> 8) & 0xffu;
    c->r[6] = c->r[2] | sh_lsl(c->r[1], c->r[0]);
L_ca3d6c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
L_ca3d70:;
    c->r[0] = (c->r[3] >> 24) & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[6]); }
L_ca3d7c:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca3dc8; }
    c->v.s[0] = 0x0u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[14] = 0xca3da0u; f_c6a434(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_ca434c; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ca3dc8:;
    c->r[1] = 0x400u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca3e08; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->v.s[0] = LD32(c->r[0] + 428u);
    { uint32_t ea = c->r[0] + 0x1d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0xca3df0u; f_c6b3c0(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ca3e08:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca3e40; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca3e98; }
    c->r[0] = (c->r[3] >> 25) & 0x1u;
    c->v.s[0] = LD32(c->r[4] + 244u);
    c->r[0] = c->r[4] + (c->r[0] << 2);
    c->v.s[2] = LD32(c->r[0] + 192u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_ca3e80; }
    goto L_ca434c;
L_ca3e40:;
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[0] + c->r[6]; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0xca3e60u; f_ced74c(c);
    c->v.s[0] = LD32(c->r[4] + 244u);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xca3e70u; f_cf7958(c);
    c->v.s[2] = 0x0u;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[0] = t0; c->v.f[1] = t1; }
L_ca3e80:;
    c->r[0] = (c->r[3] >> 24);
    c->r[9] = c->r[3] | 0x1000u;
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    ST32(c->r[0] + 192u, c->v.s[0]);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); ST32(ea + 4, c->r[9]); }
L_ca3e98:;
    { uint32_t ea = c->r[7] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0xdau; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[8]);
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[3] + c->r[1]; c->r[1] = r; }
    c->r[5] = c->r[0] + c->r[1];
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca3ee0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca3ee0u; f_15efddc(c);
L_ca3ee0:;
    c->v.s[16] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca3efc; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    goto L_ca3f28;
L_ca3efc:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[5] + 8u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ca3f28:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x10u;
    c->r[6] = c->r[7] + 0xd0u;
    c->r[5] = c->r[7];
    c->r[12] = 0x0u;
    c->r[7] = c->r[14] & (c->r[3] >> 20);
    c->r[7] = c->r[4] + c->r[7];
    { uint32_t ea = c->r[7] + 0x80u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[7] + 0x84u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x110u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[5] + 0x43u; uint32_t v = LD8(ea); c->r[7] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[7] & 0x20u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_ca3f9c; }
    c->r[7] = c->r[14] & (c->r[3] >> 21);
    c->r[7] = c->r[4] + c->r[7];
    { uint32_t ea = c->r[7] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7] + 0x84u;
    c->r[7] = c->r[3] | 0x1000u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
    c->r[0] = (c->r[3] >> 24);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[7]); }
    goto L_ca3fa4;
L_ca3f9c:;
    c->r[0] = (c->r[3] >> 24);
    c->r[7] = c->r[3];
L_ca3fa4:;
    c->r[0] = c->r[0] & 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[4] + (c->r[0] << 4);
    c->r[0] = c->r[4] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0] + 64u);
    c->r[0] = c->r[1] + 0x80u;
    c->r[3] = c->r[1] + 0x60u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[7];
    c->r[14] = 0xca3fd4u; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[9] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[9] + (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca4030; }
    c->r[0] = 0x274u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[5] + c->r[1]; }
    c->r[14] = 0xca4020u; f_ced74c(c);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[0] = (c->r[0] & 0xFFFFu) | (c->r[2] & 0xFFFF0000u);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
L_ca4030:;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_ca406c; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[4];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xca4054u; f_ced74c(c);
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[2] | (c->r[0] << 16);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
L_ca406c:;
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_ca40a0; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[4];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xca4090u; f_ced74c(c);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | (c->r[3] & 0xFFFF0000u);
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
L_ca40a0:;
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca40e4; }
    { uint32_t ea = c->r[5] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 16));
    if (COND_EQ) { goto L_ca40e4; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] >> 16);
    c->r[2] = c->r[4];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xca40d0u; f_ced74c(c);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[0] = c->r[1] | (c->r[0] << 16);
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
L_ca40e4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    c->r[6] = c->r[10];
    c->r[5] = c->r[13] + 0x40u;
    c->r[2] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[10] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->v.s[1] = LD32(c->r[10] + 156u);
    c->r[0] = c->r[4] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0] + 192u);
    c->r[0] = c->r[7];
    c->r[14] = 0xca412cu; f_ca36dc(c);
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + 0x20u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] & 0x1u;
    c->r[1] = c->r[1] + (c->r[0] << 4);
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (c->r[0] >> 16) & 0x1u;
    c->r[0] = c->r[10];
    c->r[14] = 0xca4158u; f_eab1fc(c);
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xau; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = c->r[0] & 0x1u;
    { uint32_t r = c->r[5] * c->r[1] + c->r[3]; c->r[1] = r; }
    c->r[5] = c->r[2] + c->r[1];
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca41ac; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca41acu; f_15efddc(c);
L_ca41ac:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    c->r[2] = c->r[0] + 0x1f0u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] + (c->r[7] << 4);
    if (COND_PL) { goto L_ca41e0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_ca420c;
L_ca41e0:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[5] + 8u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[1] = c->v.s[0];
    ST32(c->r[13] + 48u, c->v.s[2]);
    ST32(c->r[13] + 52u, c->v.s[4]);
L_ca420c:;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xca4230u; f_c736a8(c);
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = (c->r[0] >> 16);
    c->r[5] = c->r[0] | (c->r[1] << 16);
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = (uint32_t)(uint8_t)(c->r[5]); }
    if (COND_NE) { c->r[9] = c->r[9] + (c->r[0] << 4); }
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca4348; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ca4310; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = (c->r[1] << 5);
    c->r[6] = 0x0u;
    c->r[2] = (c->r[2] >> 16);
    c->r[2] = c->r[2] + c->r[3];
    c->r[14] = c->r[4] + c->r[2];
    c->r[4] = 0x0u;
    goto L_ca42a4;
L_ca4294:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[9] = c->r[9] + c->r[12];
    c->r[5] = c->r[3] | (c->r[2] << 16);
L_ca42a4:;
    c->r[0] = (c->r[0] >> 16);
    c->r[3] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[5] = 0x0u;
    { uint32_t r = c->r[6] * c->r[0]; c->r[0] = r; }
    c->r[0] = c->r[0] + (c->r[3] << 4);
    c->r[3] = 0x0u;
    c->r[0] = c->r[14] + c->r[0];
L_ca42c0:;
    c->r[2] = c->r[0] + c->r[5];
    c->r[10] = c->r[9];
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[2] + 0xe0u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[10] + c->r[5]; ST32(ea, c->r[7]); c->r[10] = ea; }
    c->r[5] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[2] + 0xe4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[4]); }
    if (COND_CC) { goto L_ca42c0; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_CC) { goto L_ca4294; }
    goto L_ca4348;
L_ca4310:;
    c->r[1] = ~0x0u;
    { uint32_t r = c->r[0] & 0x7u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    c->r[2] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_ca4330; }
L_ca4324:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_ca4324; }
L_ca4330:;
    (void)f_subs(c, c->r[2], 0x7u);
    if (COND_CC) { goto L_ca4348; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
L_ca433c:;
    c->r[1] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_ca433c; }
L_ca4348:;
    c->r[0] = 0x1u;
L_ca434c:;
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ca435c(Cpu *restrict c) {
    FN_ENTER(0xca435cu);
L_ca435c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x50u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[2];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = c->r[5] + 0xc0u;
    c->r[2] = (c->r[9] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + 0xd4u; uint32_t v = LD16(ea); c->r[7] = v; }
    c->v.s[16] = LD32(c->r[0] + 152u);
    c->r[2] = c->r[1] + (c->r[2] << 2);
    c->r[8] = c->r[5] + c->r[7];
    { uint32_t ea = c->r[5] + 0xeau; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[10] = c->r[8] + c->r[7];
    { uint32_t ea = c->r[10] + 0x1eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    c->v.s[0] = LD32(c->r[2]);
    c->r[2] = (c->r[9] >> 24) & 0x1u;
    c->v.s[1] = LD32(c->r[10] + 156u);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[3];
    c->v.s[2] = LD32(c->r[1]);
    c->r[1] = c->r[13] + 0x10u;
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    c->r[14] = 0xca43e0u; f_ca36dc(c);
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca45ec; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_ca45b4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = c->r[5] + 0x20u;
    c->v.f[2] = c->v.f[0] - c->v.f[16];
    c->r[3] = c->r[2] & (c->r[1] >> 21);
    c->r[1] = c->r[2] & (c->r[1] >> 20);
    c->r[2] = c->r[8];
    c->r[3] = c->r[0] + c->r[3];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[8] + (c->r[7] << 4);
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[6] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[10] = LD32(c->r[3]);
    c->v.s[12] = LD32(c->r[3] + 4u);
    c->v.s[14] = LD32(c->r[3] + 8u);
    c->r[3] = 0xd94e20u;
    { uint32_t sc = 0; uint32_t r = c->r[9] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = (c->r[7] << 4);
    c->r[9] = (c->r[7] << 5);
    if (COND_EQ) { c->r[2] = c->r[1]; }
    if (COND_EQ) { c->r[1] = c->r[8]; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = 0xca446cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[6] = c->v.f[16] * c->v.f[6];
    c->v.f[8] = c->v.f[16] * c->v.f[8];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[14]);
    c->v.s[10] = 0x4422f983u;
    c->v.s[12] = 0x4b400000u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
L_ca448c:;
    c->v.s[3] = c->r[8];
    c->v.s[14] = LD32(c->r[10] + 128u);
    c->v.s[1] = LD32(c->r[10] + 136u);
    c->v.s[5] = c->v.s[12];
    c->v.f[3] = (float)c->v.s[3];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[7] = LD32(c->r[13] + 16u);
    c->v.s[9] = LD32(c->r[13] + 32u);
    c->v.s[13] = LD32(c->r[13] + 40u);
    c->v.s[18] = LD32(c->r[13] + 36u);
    c->v.s[20] = LD32(c->r[13] + 72u);
    c->v.f[1] = c->v.f[3] * c->v.f[1];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[1] * c->v.f[10]);
    c->v.s[1] = LD32(c->r[13] + 24u);
    c->r[3] = c->v.s[5];
    c->v.f[5] = c->v.f[3] * c->v.f[14];
    c->v.s[14] = c->v.s[4];
    c->v.s[3] = LD32(c->r[13] + 20u);
    c->v.f[11] = c->v.f[0] - c->v.f[5];
    c->r[3] = c->r[3] & 0xfffu;
    c->r[3] = c->r[6] + (c->r[3] << 2);
    c->r[6] = 0x0u;
    c->v.s[15] = LD32(c->r[3]);
    c->r[3] = 0x0u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[1]);
    c->v.s[1] = c->v.s[6];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[3] * c->v.f[11]);
    c->v.s[3] = c->v.s[8];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[13]);
    c->v.f[13] = fabsf(c->v.f[15]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[7] * c->v.f[11]);
    c->v.s[7] = LD32(c->r[13] + 68u);
    c->v.s[11] = LD32(c->r[13] + 64u);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[5] * c->v.f[18]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[13] * c->v.f[20]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[13] * c->v.f[7]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[13] * c->v.f[11]);
L_ca4524:;
    c->r[12] = c->r[2] + c->r[6];
    c->r[14] = c->r[1] + c->r[6];
    c->r[3] = c->r[3] + 0x1u;
    c->r[5] = c->r[4] + c->r[6];
    c->r[6] = c->r[6] + 0x10u;
    c->v.s[5] = LD32(c->r[14]);
    c->v.s[7] = LD32(c->r[14] + 4u);
    c->v.s[9] = LD32(c->r[14] + 8u);
    c->v.s[11] = LD32(c->r[12]);
    c->v.s[13] = LD32(c->r[12] + 4u);
    c->v.s[15] = LD32(c->r[12] + 8u);
    (void)f_subs(c, c->r[3], c->r[7]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[5] = c->v.f[16] * c->v.f[5];
    c->v.f[7] = c->v.f[16] * c->v.f[7];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[2] * c->v.f[11]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[2] * c->v.f[13]);
    c->v.f[9] = c->v.f[16] * c->v.f[9];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[2] * c->v.f[15]);
    c->v.f[5] = c->v.f[3] + c->v.f[5];
    c->v.f[7] = c->v.f[1] + c->v.f[7];
    c->v.f[9] = c->v.f[14] + c->v.f[9];
    ST32(c->r[5], c->v.s[5]);
    ST32(c->r[5] + 4u, c->v.s[7]);
    ST32(c->r[5] + 8u, c->v.s[9]);
    if (COND_CC) { goto L_ca4524; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[2] = c->r[2] + c->r[9];
    c->r[1] = c->r[1] + c->r[9];
    c->r[4] = c->r[4] + c->r[3];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[8], c->r[3]);
    if (COND_CC) { goto L_ca448c; }
    goto L_ca45ec;
L_ca45b4:;
    c->r[1] = ~0x0u;
    { uint32_t r = c->r[0] & 0x7u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    c->r[2] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_ca45d4; }
L_ca45c8:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_ca45c8; }
L_ca45d4:;
    (void)f_subs(c, c->r[2], 0x7u);
    if (COND_CC) { goto L_ca45ec; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
L_ca45e0:;
    c->r[1] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_ca45e0; }
L_ca45ec:;
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ca4608(Cpu *restrict c) {
    FN_ENTER(0xca4608u);
L_ca4608:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xd9f43cu;
    { uint32_t ea = 0xca4618u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xca461cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1d0u;
    c->pc = c->r[4]; c->r[14] = 0xca4634u; rt_dispatch(c);
    c->r[14] = 0xca4638u; f_c58d7c(c);
    c->r[1] = 0xd9f414u;
    { uint32_t ea = 0xca4644u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_ca4654(Cpu *restrict c) {
    FN_ENTER(0xca4654u);
L_ca4654:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xd9f3e8u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xca466cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xca4670u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_ca4690(Cpu *restrict c) {
    FN_ENTER(0xca4690u);
L_ca4690:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0xca4698u; f_c58d7c(c);
    c->r[1] = 0xd9f3b4u;
    { uint32_t ea = 0xca46a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_ca46b0(Cpu *restrict c) {
    FN_ENTER(0xca46b0u);
L_ca46b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xca46bcu; f_c58e70(c);
    c->r[0] = 0xd9f38cu;
    { uint32_t ea = 0xca46c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca46c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_ca46e0(Cpu *restrict c) {
    FN_ENTER(0xca46e0u);
L_ca46e0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xca46ecu; f_c59268(c);
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[1] - 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 4u; c->r[9] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1a0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] >> 4) & 0xffffu;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[14]); }
    c->r[3] = (c->r[3] & 0xfff0ffffu) | ((c->r[5] << 16) & 0xf0000u);
    c->r[5] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[10]); }
    c->r[3] = c->r[3] & 0xff0fffffu;
    { uint32_t ea = c->r[0] + 0x1a0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[14]); }
    c->r[5] = c->r[5] & 0xfu;
    c->r[3] = c->r[3] | (c->r[5] << 20);
    c->r[5] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[10]); }
    c->r[3] = c->r[3] & 0xf0ffffffu;
    { uint32_t ea = c->r[0] + 0x1a0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] >> 8) & 0xfu;
    c->r[8] = c->r[3] | (c->r[5] << 24);
    (void)f_subs(c, c->r[5], 0x6u);
    if (COND_EQ) { goto L_ca478c; }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbfff0000u;
    c->r[3] = c->r[2] & c->r[3];
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[2] = c->r[2] | c->r[3];
    c->r[2] = c->r[2] | 0x40000000u;
L_ca478c:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[14]); }
    c->r[1] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[8]); ST32(ea + 16u, c->r[10]); }
    c->r[1] = 0x32u;
    { uint32_t ea = c->r[4] + 0x46u; ST8(ea, c->r[1]); }
    c->r[1] = 0xd9e324u;
    { uint32_t ea = 0xca47b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x340u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x194u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ca47dc(Cpu *restrict c) {
    FN_ENTER(0xca47dcu);
L_ca47dc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x138u;
    c->r[13] = c->r[13] - 0x400u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[9] = c->r[0];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[9] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[17] = LD32(c->r[9] + 152u);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xf0u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[2]); }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_ca484c; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
L_ca484c:;
    { uint32_t ea = c->r[9] + 0xb0u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_ca6614; }
    c->v.s[0] = LD32(c->r[0] + 56u);
    c->v.s[22] = 0x3f800000u;
    c->v.s[23] = 0x0u;
    c->v.s[30] = 0x34000000u;
    c->v.s[24] = 0xbf800000u;
    c->r[14] = c->r[13] + 0x400u;
    c->r[7] = 0x0u;
    c->r[10] = c->r[14] + 0x11cu;
    c->v.f[19] = c->v.f[22] - c->v.f[17];
    ST32(c->r[13] + 168u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 60u);
    ST32(c->r[13] + 164u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 64u);
    c->r[0] = c->r[13] + 0x270u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[0] + 0x70u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x100u;
    c->r[1] = c->r[0] + 0x20u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x180u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0xc0u;
    ST32(c->r[13] + 160u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0xa0u;
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd9b6a8u;
    { uint32_t ea = 0xca48e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd9e1e4u;
    { uint32_t ea = 0xca48f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd94250u;
    { uint32_t ea = 0xca48fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd94244u;
    { uint32_t ea = 0xca4908u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0xcec2ccu;
    c->r[0] = 0xca4914u + c->r[0];
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0xcec2a0u;
    c->r[0] = 0xca4920u + c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0xcec274u;
    c->r[0] = 0xca492cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd9f124u;
    { uint32_t ea = 0xca4938u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd9e18cu;
    { uint32_t ea = 0xca4948u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd9c230u;
    { uint32_t ea = 0xca4954u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd9e950u;
    { uint32_t ea = 0xca4960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd9e164u;
    { uint32_t ea = 0xca4970u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd94408u;
    { uint32_t ea = 0xca497cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd94998u;
    { uint32_t ea = 0xca4988u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd9498cu;
    { uint32_t ea = 0xca4994u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd9e134u;
    { uint32_t ea = 0xca49a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd95214u;
    { uint32_t ea = 0xca49acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd94964u;
    { uint32_t ea = 0xca49bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd94840u;
    { uint32_t ea = 0xca49c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd94830u;
    { uint32_t ea = 0xca49d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd94878u;
    { uint32_t ea = 0xca49e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd9481cu;
    { uint32_t ea = 0xca49ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd9480cu;
    { uint32_t ea = 0xca49f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd94854u;
    { uint32_t ea = 0xca4a04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    goto L_ca4a54;
L_ca4a08:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x1u;
    if (COND_NE) { c->r[2] = 0x2u; }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[7]); } }
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_EQ) { goto L_ca5d48; }
L_ca4a24:;
    c->r[0] = 0x0u - c->r[0];
L_ca4a28:;
    c->r[3] = f_adds(c, c->r[0], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[6] + (c->r[2] << 2); ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[2] = c->r[2] + 0x1u; }
    (void)f_adds(c, c->r[3], 0x1u);
    if (COND_NE) { c->r[3] = c->r[1] + 0x1u; }
    c->r[1] = c->r[1] + 0x2u;
    if (COND_NE) { { uint32_t ea = c->r[6] + (c->r[2] << 2); ST32(ea, c->r[3]); } }
    if (COND_NE) { c->r[2] = c->r[2] + 0x1u; }
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_NE) { goto L_ca4a28; }
    goto L_ca5d48;
L_ca4a54:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca4a74; }
    /* pld */
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
L_ca4a74:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xca4a80u; f_ca6628(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_ca4ad4; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca4af0; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[7] = 0x1u;
    c->r[12] = c->r[6] + 0x5cu;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = c->r[0] + (uint32_t)(uint16_t)(c->r[1]); }
    { uint32_t ea = c->r[2] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[6] + 0x58u; ST8(ea, c->r[7]); }
    c->r[2] = c->r[2] + 0x10u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[3] = c->r[6] + 0x68u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    goto L_ca4af4;
L_ca4ad4:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xca4ae0u; f_c5b224(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_ca4a54; }
    goto L_ca6614;
L_ca4af0:;
    { uint32_t ea = c->r[6] + 0x58u; ST8(ea, c->r[7]); }
L_ca4af4:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca4c20; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[4] + 0xd8u;
    c->r[2] = 0x2001u;
    c->r[7] = (c->r[0] >> 25) & 0x1u;
    c->r[2] = c->r[1] & c->r[2];
    c->r[5] = c->r[3] + (c->r[7] << 2);
    c->r[7] = (c->r[0] >> 24) & 0x1u;
    c->r[0] = (c->r[1] >> 16);
    (void)f_subs(c, c->r[2], 0x1u);
    c->v.s[0] = LD32(c->r[5]);
    if (COND_NE) { goto L_ca4b5c; }
    c->r[3] = c->r[3] + (c->r[7] << 2);
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->v.s[2] = LD32(c->r[3]);
    if (COND_NE) { goto L_ca4b70; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca4b68; }
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca4b70; }
    goto L_ca4b7c;
L_ca4b5c:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[2] = c->v.s[0];
    goto L_ca4bdc;
L_ca4b68:;
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ca4b7c; }
L_ca4b70:;
    c->v.f[2] = c->v.f[17] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[0]);
    goto L_ca4b8c;
L_ca4b7c:;
    c->v.s[4] = 0x3f000000u;
    vfp_cmp_f(c, c->v.f[4], c->v.f[17]);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[0] : c->v.s[2];
L_ca4b8c:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    c->r[7] = c->v.s[0];
    (void)f_subs(c, c->r[7], (c->r[2] >> 16));
    c->r[3] = c->r[7];
    if (COND_HI) { c->r[3] = (c->r[2] >> 16); }
    c->r[2] = (c->r[2] >> 16);
    c->v.s[0] = c->r[3];
    (void)f_subs(c, c->r[2], c->r[7]);
    c->r[5] = c->r[3] + 0x1u;
    c->r[7] = 0x0u;
    if (COND_HI) { c->r[7] = c->r[5]; }
    if (COND_HI) { c->r[2] = c->r[5]; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[2] = c->r[7]; }
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = 0x3f000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[3]; }
L_ca4bdc:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 5); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[0] + (c->r[1] << 3);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ca4c20; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x528u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x52cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_ca4d38;
L_ca4c20:;
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_CC) { goto L_ca4c9c; }
    { uint32_t ea = c->r[4] + 0xfu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + (c->r[0] >> 16);
    c->r[1] = c->r[1] & 0x1u;
    c->r[2] = c->r[1] ^ 0x1u;
    c->r[2] = c->r[0] + (c->r[2] << 3);
    c->r[0] = c->r[0] + (c->r[1] << 3);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[2] + 4u);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[4]);
    c->v.f[2] = c->v.f[17] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca4cb8; }
    c->v.s[4] = c->v.s[0] ^ 0x80000000u;
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[4]);
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[4] = c->v.f[4] + c->v.f[22];
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    goto L_ca4cd4;
L_ca4c9c:;
    c->r[0] = 0x0u;
    c->r[3] = 0x3f800000u;
    c->r[2] = 0x0u;
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x528u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x52cu; ST32(ea, c->r[0]); }
    goto L_ca4d38;
L_ca4cb8:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ca4cd4; }
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[0]);
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[4] = c->v.f[4] + c->v.f[22];
    c->v.f[0] = c->v.f[0] - c->v.f[4];
L_ca4cd4:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca4cf8; }
    c->v.s[4] = c->v.s[2] ^ 0x80000000u;
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[4]);
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[4] = c->v.f[4] + c->v.f[22];
    c->v.f[2] = c->v.f[2] + c->v.f[4];
    goto L_ca4d14;
L_ca4cf8:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ca4d14; }
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[4] = c->v.f[4] + c->v.f[22];
    c->v.f[2] = c->v.f[2] - c->v.f[4];
L_ca4d14:;
    c->v.f[4] = c->v.f[2] + c->v.f[22];
    c->v.f[6] = c->v.f[0] + c->v.f[22];
    c->r[0] = c->r[13] + 0x490u;
    c->r[2] = c->v.s[0];
    ST32(c->r[0] + 152u, c->v.s[0]);
    ST32(c->r[0] + 156u, c->v.s[2]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->v.s[4];
    c->r[3] = c->v.s[6];
L_ca4d38:;
    { uint32_t ea = c->r[13] + 0x520u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x524u; ST32(ea, c->r[1]); }
    c->r[14] = c->r[4];
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[6]); }
    c->r[8] = c->r[14];
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x528u; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x520u; ST32(ea, c->r[2]); } }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x52cu; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x524u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = c->r[8] + 0xc8u;
    c->r[1] = (c->r[12] >> 24) & 0x1u;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = (c->r[12] >> 25) & 0x1u;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[5] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[5] = c->r[4] - c->r[5];
    c->r[4] = (c->r[3] >> 8) & 0xffu;
    c->r[6] = (c->r[7] >> 8) & 0xffu;
    c->r[6] = c->r[6] - c->r[4];
    { uint32_t r = c->r[5] * c->r[0]; c->r[5] = r; }
    c->r[4] = (c->r[3] >> 8);
    { uint32_t r = c->r[6] * c->r[0]; c->r[6] = r; }
    c->r[5] = c->r[3] + (c->r[5] >> 8);
    c->r[6] = c->r[6] + (c->r[4] << 8);
    c->r[5] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[6] = c->r[6] & 0xff00u;
    c->r[6] = c->r[6] | c->r[5];
    c->r[5] = (c->r[7] >> 24);
    c->r[7] = (c->r[7] >> 16) & 0xffu;
    c->r[5] = c->r[5] - (c->r[3] >> 24);
    { uint32_t r = c->r[5] * c->r[0]; c->r[5] = r; }
    c->r[5] = (c->r[5] >> 8);
    c->r[5] = c->r[5] + (c->r[3] >> 24);
    c->r[6] = c->r[6] | (c->r[5] << 24);
    c->r[5] = (c->r[3] >> 16) & 0xffu;
    c->r[7] = c->r[7] - c->r[5];
    { uint32_t r = c->r[7] * c->r[0]; c->r[7] = r; }
    c->r[7] = (c->r[7] >> 8);
    c->r[3] = c->r[7] + (c->r[3] >> 16);
    c->r[3] = (c->r[3] << 16);
    c->r[3] = uxtb16(c->r[3]);
    c->r[3] = c->r[6] | c->r[3];
    { uint32_t ea = c->r[13] + 0x51cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[8] + 0x48u;
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] - c->r[7];
    { uint32_t r = c->r[3] * c->r[0]; c->r[3] = r; }
    c->r[0] = c->r[7] + (uint32_t)((int32_t)c->r[3] >> 8);
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[12] >> 16) & 0xffu;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[14]); }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca4fa4; }
    c->r[7] = c->r[8] + 0xb8u;
    c->r[3] = c->r[3] & 0xfffeffffu;
    c->r[10] = 0x0u;
    c->r[6] = c->r[7] + (c->r[2] << 2);
    c->r[7] = c->r[7] + (c->r[1] << 2);
    c->v.s[18] = LD32(c->r[7]);
    c->r[7] = c->r[8] + 0xc0u;
    c->v.s[28] = LD32(c->r[6]);
    c->r[6] = c->r[7] + (c->r[2] << 2);
    c->r[7] = c->r[7] + (c->r[1] << 2);
    c->v.s[16] = LD32(c->r[6]);
    c->v.s[20] = LD32(c->r[7]);
    { uint32_t ea = c->r[14] + 0xe8u; ST32(ea, c->r[3]); }
    c->r[6] = c->r[14];
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x1f0u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = 0x10u;
    c->v.s[21] = LD32(c->r[3] + 504u);
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[3]); }
    c->v.s[26] = LD32(c->r[3] + 508u);
    c->r[3] = c->r[14] + 0x60u;
    { uint32_t ea = c->r[13] + 0x3ccu; ST32(ea, c->r[10]); }
    c->r[2] = c->r[3] + (c->r[2] << 4);
    c->r[1] = c->r[3] + (c->r[1] << 4);
    c->r[3] = c->r[14] + 0x80u;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[2]);
    ST32(c->r[13] + 960u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[2]);
    ST32(c->r[13] + 964u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[2]);
    ST32(c->r[13] + 968u, c->v.s[0]);
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[10]); }
    c->r[2] = c->r[0] & (c->r[1] >> 21);
    c->r[1] = c->r[0] & (c->r[1] >> 20);
    c->r[0] = c->r[13] + 0x180u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->r[3] = c->r[13] + 0x3c0u;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[2]);
    ST32(c->r[13] + 384u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[2]);
    ST32(c->r[13] + 388u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[2] = (uint32_t)(uint16_t)(c->r[12]);
    c->r[0] = c->r[13] + 0x4d0u;
    c->r[1] = c->r[9];
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[2]);
    ST32(c->r[13] + 392u, c->v.s[0]);
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0xca4f4cu; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 20) & 0xfu;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_ca500c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xca4f6cu + 0x14u;
    c->v.s[0] = c->v.s[24];
    c->v.s[4] = c->v.s[23];
    c->v.s[2] = c->v.s[23];
    c->r[9] = 0x3f800000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xca4f9cu: goto L_ca4f9c; case 0xca5018u: goto L_ca5018; case 0xca5020u: goto L_ca5020; case 0xca5030u: goto L_ca5030; case 0xca551cu: goto L_ca551c; case 0xca552cu: goto L_ca552c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_ca4f9c:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ca5024;
L_ca4fa4:;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[14] = c->r[13] + 0x400u;
    c->r[7] = c->r[13] + 0x520u;
    c->r[6] = c->r[14] + 0x128u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_ca6490; }
    c->r[4] = 0x0u;
L_ca4fc8:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = c->r[10];
    c->r[14] = 0xca4fd8u; f_a8bbc0(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[7];
    c->r[14] = 0xca4fecu; f_a8bb38(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = c->r[9];
    c->r[14] = 0xca4ffcu; f_a8bc84(c);
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[4]);
    if (COND_NE) { goto L_ca4fc8; }
    goto L_ca6490;
L_ca500c:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x3f800000u;
    goto L_ca5024;
L_ca5018:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ca5024;
L_ca5020:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_ca5024:;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[0] + 8u);
L_ca5030:;
    c->r[0] = c->r[13] + 0x490u;
    c->v.s[10] = LD32(c->r[0] + 84u);
    c->v.s[6] = LD32(c->r[0] + 80u);
    c->v.s[12] = LD32(c->r[0] + 68u);
    c->v.s[1] = LD32(c->r[0] + 64u);
    c->v.s[8] = LD32(c->r[0] + 88u);
    c->v.s[14] = LD32(c->r[0] + 72u);
    c->v.s[3] = LD32(c->r[0] + 100u);
    c->v.s[5] = LD32(c->r[0] + 104u);
    c->v.f[27] = c->v.f[4] * c->v.f[10];
    c->v.s[10] = LD32(c->r[0] + 96u);
    c->v.f[29] = c->v.f[4] * c->v.f[6];
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[0] * c->v.f[1]);
    c->v.f[31] = c->v.f[4] * c->v.f[8];
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[2] * c->v.f[3]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[2] * c->v.f[5]);
    c->v.f[0] = c->v.f[27] * c->v.f[27];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[31] * c->v.f[31]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca50a0; }
    c->r[14] = 0xca509cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_ca50a0:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[30]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca50bc; }
    c->v.f[0] = c->v.f[22] / c->v.f[2];
    c->v.f[31] = c->v.f[0] * c->v.f[31];
    c->v.f[27] = c->v.f[27] * c->v.f[0];
    c->v.f[29] = c->v.f[29] * c->v.f[0];
L_ca50bc:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[0] = (c->r[0] >> 20);
    c->r[0] = c->r[0] | (c->r[1] << 12);
    c->r[1] = c->r[0] & 0xfu;
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_HI) { goto L_ca50f8; }
    c->r[1] = (uint32_t)(((int32_t)(c->r[0] << 28)) >> 28);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_ca5104;
L_ca50f8:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + 0x8u;
    c->r[2] = c->r[1] + 0x4u;
L_ca5104:;
    c->r[3] = c->r[13] + 0x490u;
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[5] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[3] + 84u);
    c->v.s[0] = LD32(c->r[3] + 80u);
    c->v.s[8] = LD32(c->r[3] + 68u);
    c->v.s[12] = LD32(c->r[3] + 64u);
    c->v.s[2] = LD32(c->r[3] + 88u);
    c->v.s[10] = LD32(c->r[3] + 72u);
    c->v.s[1] = LD32(c->r[3] + 100u);
    c->v.s[3] = LD32(c->r[3] + 104u);
    c->v.f[24] = c->v.f[6] * c->v.f[4];
    c->v.s[4] = LD32(c->r[3] + 96u);
    c->v.f[23] = c->v.f[6] * c->v.f[0];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[14] * c->v.f[12]);
    c->v.f[22] = c->v.f[6] * c->v.f[2];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[5] * c->v.f[1]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[5] * c->v.f[4]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[5] * c->v.f[3]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca5180; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca5180u; f_15efddc(c);
L_ca5180:;
    c->v.s[6] = 0x34000000u;
    c->v.f[4] = c->v.f[20] - c->v.f[16];
    c->v.f[2] = c->v.f[18] - c->v.f[28];
    c->v.f[30] = c->v.f[21] + c->v.f[26];
    c->v.s[18] = c->v.s[31] ^ 0x80000000u;
    c->v.s[20] = c->v.s[27] ^ 0x80000000u;
    c->v.s[25] = c->v.s[29] ^ 0x80000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca51bc; }
    c->v.s[6] = 0x3f800000u;
    c->v.f[0] = c->v.f[6] / c->v.f[0];
    c->v.f[22] = c->v.f[0] * c->v.f[22];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
    c->v.f[23] = c->v.f[23] * c->v.f[0];
L_ca51bc:;
    c->r[4] = c->r[13] + 0x490u;
    c->r[3] = 0x10u;
    c->r[5] = c->r[6];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[17] * c->v.f[2]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[17] * c->v.f[4]);
    c->v.s[10] = 0x3f000000u;
    c->v.f[8] = c->v.f[21] + c->v.f[30];
    c->r[6] = 0x1u;
    ST32(c->r[4] + 48u, c->v.s[23]);
    ST32(c->r[4] + 52u, c->v.s[24]);
    ST32(c->r[4] + 56u, c->v.s[22]);
    { uint32_t ea = c->r[13] + 0x4ccu; ST32(ea, c->r[10]); }
    c->r[2] = c->r[5] + 0x20u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4bcu; ST32(ea, c->r[10]); }
    c->v.f[8] = c->v.f[8] * c->v.f[10];
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[3] = 0x0u;
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->r[2] = ~0xc0000000u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[2]);
    ST32(c->r[4] + 32u, c->v.s[0]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[25]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[1] + 4u);
    c->v.f[2] = c->v.f[17] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[4]);
    ST32(c->r[4] + 36u, c->v.s[2]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[20]);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1] + 8u);
    c->r[0] = 0xau;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[10]); }
    c->r[1] = ~0x80000000u;
    ST32(c->r[4] + 112u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x3c0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->v.f[4] = c->v.f[17] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[19] * c->v.f[6]);
    ST32(c->r[4] + 116u, c->v.s[2]);
    ST32(c->r[4] + 40u, c->v.s[4]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[18]);
    ST32(c->r[4] + 120u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x50cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xca529cu; f_e178c0(c);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x3c0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48cu; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x490u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x494u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x498u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x49cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4a0u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xca52d0u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x3c4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xca52e4u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x3ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48cu; ST8(ea, c->r[6]); }
    ST32(c->r[4], c->v.s[25]);
    ST32(c->r[4] + 4u, c->v.s[20]);
    ST32(c->r[4] + 8u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x49cu; ST32(ea, c->r[10]); }
    c->r[0] = c->r[5] + 0x40u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 24) & 0x1u;
    c->r[1] = (c->r[1] >> 25) & 0x1u;
    c->r[2] = c->r[0] + (c->r[2] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->v.s[26] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[2]);
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[0] = c->v.f[0] - c->v.f[26];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[17] * c->v.f[0]);
    if (COND_EQ) { goto L_ca5340; }
    c->v.s[0] = 0x3f3504f3u;
    { uint32_t ea = c->r[13] + 0x4a0u; ST32(ea, c->r[10]); }
    c->v.f[0] = c->v.f[26] * c->v.f[0];
    goto L_ca5348;
L_ca5340:;
    { uint32_t ea = c->r[13] + 0x4a0u; ST32(ea, c->r[9]); }
    c->v.s[0] = c->v.s[26];
L_ca5348:;
    { uint32_t ea = c->r[13] + 0x500u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[30] - c->v.f[21];
    c->r[4] = 0x8u;
    c->v.s[6] = 0x3f000000u;
    c->v.f[4] = c->v.f[28] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4f8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x4fcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x4e0u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x4e4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x4e8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4ecu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x4d0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4d4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x4d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[23] = 0x0u;
    c->v.s[22] = 0x3f800000u;
    c->v.s[24] = 0xbf800000u;
    { uint32_t ea = c->r[13] + 0x364u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x504u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x508u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x368u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x360u; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 944u, c->v.s[4]);
    ST32(c->r[13] + 948u, c->v.s[2]);
    ST32(c->r[13] + 952u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x3bcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x37cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x378u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x374u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x370u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x388u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x384u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x380u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x39cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x398u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3a4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3a0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca545cu; f_da5770(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xca5468u; f_d91f28(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[13] + 0x3c0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0xec4fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4ec40000u;
    { uint64_t r = (uint64_t)c->r[4] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[13] + 0x360u;
    c->r[3] = (c->r[2] >> 4);
    c->r[2] = c->r[8];
    c->r[14] = 0xca54a0u; f_e39f24(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_HI) { c->r[9] = c->r[0]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_ca647c; }
    (void)f_subs(c, c->r[4], 0x34u);
    if (COND_CC) { goto L_ca647c; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_ca647c; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_ca5500; }
    c->r[2] = (c->r[9] << 2);
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_CS) { (void)f_subs(c, c->r[0], c->r[2]); }
    if (COND_CC) { goto L_ca553c; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_ca556c;
L_ca5500:;
    c->r[2] = (c->r[9] << 2);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ca5554; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { goto L_ca5554; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_ca556c;
L_ca551c:;
    c->v.s[0] = c->v.s[23];
    c->v.s[4] = c->v.s[24];
    c->v.s[2] = c->v.s[23];
    goto L_ca5030;
L_ca552c:;
    c->v.s[0] = c->v.s[23];
    c->v.s[4] = c->v.s[23];
    c->v.s[2] = c->v.s[24];
    goto L_ca5030;
L_ca553c:;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[9];
    goto L_ca555c;
L_ca5554:;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1u;
L_ca555c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xca5564u; f_a8a6a8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[9] = c->r[0]; }
L_ca556c:;
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xe8u; ST16(ea, c->r[9]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xca557cu; f_a8b7d4(c);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_ca647c; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[28] * c->v.f[26];
    c->v.f[2] = c->v.f[16] * c->v.f[26];
    c->v.s[3] = c->v.s[30];
    c->r[7] = c->r[13] + 0x310u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = LD32(c->r[1] + 500u);
    c->v.f[1] = c->v.f[2] + c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->v.s[2] = c->v.s[22];
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[1] + 0x1f0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x35cu; ST32(ea, c->r[6]); }
    c->r[14] = 0xca55c4u; f_9c6440(c);
    c->r[0] = (c->r[4] >> 24);
    c->v.s[0] = c->r[0];
    c->r[0] = (c->r[4] >> 16) & 0xffu;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->v.f[28] = (float)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca57c0; }
    c->r[5] = c->r[13] + 0x270u;
    c->r[0] = c->r[5];
    c->r[14] = 0xca55f0u; f_e1c3b8(c);
    c->r[0] = c->r[13] + 0x490u;
    c->v.s[26] = 0x34000000u;
    c->v.s[0] = LD32(c->r[0] + 32u);
    c->v.s[2] = LD32(c->r[0] + 36u);
    c->v.s[4] = LD32(c->r[0] + 40u);
    c->v.s[6] = c->v.s[0];
    c->v.s[8] = c->v.s[2];
    c->v.s[10] = c->v.s[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[25]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[30] * c->v.f[18]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[21] * c->v.f[25]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[21] * c->v.f[20]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[21] * c->v.f[18]);
    c->v.s[21] = 0x3c23d70au;
    ST32(c->r[13] + 592u, c->v.s[6]);
    ST32(c->r[13] + 596u, c->v.s[8]);
    ST32(c->r[13] + 600u, c->v.s[10]);
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 608u, c->v.s[0]);
    c->v.f[8] = c->v.f[2] - c->v.f[8];
    c->v.f[0] = c->v.f[0] - c->v.f[6];
    ST32(c->r[13] + 612u, c->v.s[2]);
    c->v.f[2] = c->v.f[4] - c->v.f[10];
    ST32(c->r[13] + 616u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[6]); }
    c->v.f[6] = c->v.f[8] * c->v.f[8];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[2]);
    vfp_cmp_f(c, c->v.f[6], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca6470; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x7cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x84u;
    c->r[14] = 0xca5698u; f_15efdd0(c);
    { uint32_t ea = c->r[5] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[5] + 0x120u;
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[13] + 0x180u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[7] = 0x0u;
    c->r[2] = c->r[5] + 0x140u;
    { uint32_t ea = c->r[5] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0x270u;
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[13] + 0x250u;
    c->r[2] = 0x0u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0xca5730u; f_e33cac(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xca573cu; f_e179e4(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_ca6470; }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca5af4; }
    c->r[0] = c->r[9] + (c->r[9] << 1);
    c->r[6] = c->r[8] + (c->r[0] << 4);
    goto L_ca5ce4;
L_ca57c0:;
    c->r[4] = c->r[13] + 0x490u;
    c->r[1] = c->r[13] + 0x4b0u;
    c->r[2] = c->r[13] + 0x350u;
    c->r[3] = c->r[13] + 0x4c0u;
    c->v.s[0] = LD32(c->r[4] + 32u);
    c->v.s[2] = LD32(c->r[4] + 36u);
    c->v.s[4] = LD32(c->r[4] + 40u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[25]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[30] * c->v.f[18]);
    ST32(c->r[13] + 848u, c->v.s[0]);
    ST32(c->r[13] + 852u, c->v.s[2]);
    ST32(c->r[13] + 856u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x35cu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[13] + 0x180u;
    c->r[0] = c->r[6];
    c->r[14] = 0xca5804u; f_9c5e4c(c);
    c->r[5] = c->r[13] + 0x270u;
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    c->r[0] = c->r[5];
    c->r[14] = 0xca5818u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4d0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4d4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x298u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x500u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x504u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x508u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca58a0u; f_a8aa2c(c);
    c->v.s[0] = LD32(c->r[4] + 32u);
    c->v.s[6] = LD32(c->r[13] + 848u);
    c->v.s[2] = LD32(c->r[4] + 36u);
    c->v.s[8] = LD32(c->r[13] + 852u);
    c->v.s[4] = LD32(c->r[4] + 40u);
    c->v.s[10] = LD32(c->r[13] + 856u);
    c->v.f[16] = c->v.f[8] - c->v.f[2];
    c->v.f[18] = c->v.f[6] - c->v.f[0];
    c->v.f[20] = c->v.f[10] - c->v.f[4];
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca58e8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca58e8u; f_15efddc(c);
L_ca58e8:;
    c->v.s[26] = 0x34000000u;
    c->v.s[30] = c->v.s[24];
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca590c; }
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_ca590c:;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
    ST32(c->r[13] + 624u, c->v.s[18]);
    ST32(c->r[13] + 628u, c->v.s[16]);
    ST32(c->r[13] + 632u, c->v.s[20]);
    c->r[1] = 0x0u;
    c->r[2] = c->r[13] + 0x4d0u;
    c->r[3] = c->r[5];
    c->v.s[24] = 0xbf800000u;
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xca593cu; f_a8b8bc(c);
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0xca595cu; f_a8bb60(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_ca5980; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = (c->r[0] >> 8) & 0xffu;
    c->r[0] = c->r[6];
    c->r[14] = 0xca5980u; f_a8bbd8(c);
L_ca5980:;
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca59b0; }
    c->v.s[2] = LD32(c->r[13] + 168u);
    c->v.s[3] = LD32(c->r[13] + 164u);
    c->v.s[4] = LD32(c->r[13] + 160u);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[30];
    c->v.s[1] = c->v.s[28];
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0xca59b0u; f_a8bc0c(c);
L_ca59b0:;
    c->r[7] = c->r[13] + 0x400u;
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = c->r[7] + 0x11cu;
    c->r[14] = 0xca59c4u; f_a8bbc0(c);
    c->r[7] = c->r[13] + 0x400u;
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[3] = c->r[13] + 0x520u;
    c->r[2] = c->r[7] + 0x128u;
    c->r[14] = 0xca59dcu; f_a8bb38(c);
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[0] = c->r[6];
    c->r[14] = 0xca59f0u; f_a8bc70(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = c->r[10];
    c->r[14] = 0xca5a00u; f_a8bc84(c);
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0xca5a10u; f_a8bc98(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0xca5a20u; f_a8bcac(c);
    c->r[4] = 0x0u;
L_ca5a24:;
    c->v.s[0] = LD32(c->r[8] + 4u);
    c->v.s[6] = LD32(c->r[8] + 20u);
    c->v.s[2] = LD32(c->r[8] + 8u);
    c->v.s[8] = LD32(c->r[8] + 24u);
    c->v.s[4] = LD32(c->r[8]);
    c->v.s[12] = LD32(c->r[8] + 32u);
    c->v.s[10] = LD32(c->r[8] + 16u);
    c->v.s[14] = LD32(c->r[8] + 36u);
    c->v.s[1] = LD32(c->r[8] + 40u);
    c->v.f[12] = c->v.f[12] - c->v.f[4];
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[1] - c->v.f[2];
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[14] - c->v.f[0];
    c->v.f[16] = c->v.f[8] * c->v.f[12];
    c->v.f[18] = c->v.f[6] * c->v.f[2];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[20] = c->v.f[4] * c->v.f[0];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca5a9c; }
    c->r[14] = 0xca5a98u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_ca5a9c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca5ab8; }
    c->v.f[0] = c->v.f[22] / c->v.f[2];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.f[16] = c->v.f[0] * c->v.f[16];
    c->v.f[18] = c->v.f[0] * c->v.f[18];
L_ca5ab8:;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[23];
    c->r[1] = 0x0u;
    c->r[2] = c->r[13] + 0x4d0u;
    c->r[3] = c->r[8];
    ST32(c->r[13] + 624u, c->v.s[18]);
    ST32(c->r[13] + 628u, c->v.s[16]);
    ST32(c->r[13] + 632u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xca5ae4u; f_a8ac84(c);
    c->r[9] = f_subs(c, c->r[9], 0x1u);
    c->r[8] = c->r[8] + 0x30u;
    if (COND_NE) { goto L_ca5a24; }
    goto L_ca647c;
L_ca5af4:;
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[7]); }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_ca5ba0; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca5b18u; f_e47f50(c);
    c->r[14] = 0xca5b1cu; f_e1703c(c);
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x294u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[0];
    c->r[14] = 0xca5b2cu; f_d798dc(c);
    { uint32_t ea = c->r[13] + 0x298u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[13] + 0x180u;
    c->r[1] = c->r[4];
    c->r[14] = 0xca5b40u; f_d799c4(c);
    { uint32_t ea = c->r[13] + 0x180u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x188u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[7]); }
    goto L_ca5be8;
L_ca5ba0:;
    { uint32_t ea = c->r[13] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca5bc4; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[13] + 0x100u;
    c->r[14] = 0xca5bc0u; f_383d3c(c);
    goto L_ca5be8;
L_ca5bc4:;
    c->r[0] = c->r[5];
    c->r[14] = 0xca5bccu; f_e1bf24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ca5be8; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[13] + 0x100u;
    c->r[14] = 0xca5be8u; f_e1c020(c);
L_ca5be8:;
    c->v.s[0] = LD32(c->r[13] + 296u);
    c->v.s[2] = LD32(c->r[13] + 292u);
    c->v.s[4] = LD32(c->r[13] + 288u);
    c->v.s[6] = LD32(c->r[13] + 280u);
    c->v.s[8] = LD32(c->r[13] + 276u);
    c->v.s[10] = LD32(c->r[13] + 256u);
    c->v.s[12] = LD32(c->r[13] + 260u);
    c->v.s[14] = LD32(c->r[13] + 264u);
    c->v.s[1] = LD32(c->r[13] + 272u);
    c->r[1] = c->r[8] + 0x14u;
    c->r[0] = 0x0u;
L_ca5c14:;
    c->v.s[3] = LD32(c->r[1] - 20u);
    vfp_cmp_f(c, c->v.f[3], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_ca5ca4; }
    c->v.s[3] = LD32(c->r[1] - 16u);
    vfp_cmp_f(c, c->v.f[3], c->v.f[12]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_ca5ca4; }
    c->v.s[3] = LD32(c->r[1] - 12u);
    vfp_cmp_f(c, c->v.f[3], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_ca5ca4; }
    c->v.s[3] = LD32(c->r[1] - 4u);
    vfp_cmp_f(c, c->v.f[3], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_ca5ca4; }
    c->v.s[3] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[3], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_ca5ca4; }
    c->v.s[3] = LD32(c->r[1] + 4u);
    vfp_cmp_f(c, c->v.f[3], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_ca5ca4; }
    c->v.s[3] = LD32(c->r[1] + 12u);
    vfp_cmp_f(c, c->v.f[3], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_ca5ca4; }
    c->v.s[3] = LD32(c->r[1] + 16u);
    vfp_cmp_f(c, c->v.f[3], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_ca5ca4; }
    c->v.s[3] = LD32(c->r[1] + 20u);
    vfp_cmp_f(c, c->v.f[3], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_ca5cb4; }
L_ca5ca4:;
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = c->r[1] + 0x30u;
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_CC) { goto L_ca5c14; }
L_ca5cb4:;
    c->r[1] = c->r[9] + (c->r[9] << 1);
    (void)f_subs(c, c->r[0], c->r[9]);
    c->r[6] = c->r[8] + (c->r[1] << 4);
    if (COND_CS) { goto L_ca5ce4; }
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_ca4a08; }
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_ca4a24; }
    goto L_ca5d48;
L_ca5ce4:;
    { uint32_t r = c->r[9] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    c->r[1] = c->r[9] - 0x1u;
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_ca5d04; }
L_ca5cf4:;
    { uint32_t ea = c->r[6] + (c->r[0] << 2); ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ca5cf4; }
L_ca5d04:;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CC) { goto L_ca5d48; }
    c->r[1] = 0xcu;
    c->r[1] = c->r[1] + (c->r[0] << 2);
L_ca5d14:;
    c->r[2] = c->r[6] + c->r[1];
    c->r[3] = c->r[0] + 0x1u;
    c->r[7] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[2] - 0xcu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[2] = c->r[0] + 0x3u;
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[6] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + 0x10u;
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_NE) { goto L_ca5d14; }
    c->r[7] = 0x0u;
L_ca5d48:;
    c->v.s[0] = 0x3f666666u;
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[13] + 0xb4u;
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x18u;
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
L_ca5d6c:;
    { uint32_t ea = c->r[6] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[5] = c->r[8] + (c->r[0] << 4);
    if (COND_EQ) { goto L_ca5f8c; }
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[12] = LD32(c->r[5] + 32u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[8] = LD32(c->r[5] + 24u);
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[5] + 20u);
    c->v.s[10] = LD32(c->r[5] + 16u);
    c->v.s[14] = LD32(c->r[5] + 36u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->r[9] = 0x0u;
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.f[12] = c->v.f[12] - c->v.f[0];
    c->v.f[6] = c->v.f[6] - c->v.f[4];
    c->v.f[2] = c->v.f[1] - c->v.f[2];
    c->v.f[0] = c->v.f[10] - c->v.f[0];
    c->v.f[4] = c->v.f[14] - c->v.f[4];
    c->v.f[16] = c->v.f[8] * c->v.f[12];
    c->v.f[20] = c->v.f[6] * c->v.f[2];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[0] * c->v.f[2]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[18] = c->v.f[0] * c->v.f[4];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca5e00; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca5e00u; f_15efddc(c);
L_ca5e00:;
    c->r[0] = c->r[5] + 0x28u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    c->r[6] = c->r[5] + 0x20u;
    c->r[4] = c->r[5] + 0x8u;
    c->r[7] = c->r[5] + 0x18u;
    c->r[10] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x24u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x14u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x10u;
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    if (COND_MI) { goto L_ca5e4c; }
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.f[18] = c->v.f[0] * c->v.f[18];
    c->v.f[16] = c->v.f[0] * c->v.f[16];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
L_ca5e4c:;
    c->v.s[0] = LD32(c->r[10]);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[4]);
    { uint32_t ea = c->r[13] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x150u;
    c->r[3] = c->r[13] + 0x140u;
    ST32(c->r[13] + 336u, c->v.s[20]);
    ST32(c->r[13] + 340u, c->v.s[16]);
    ST32(c->r[13] + 344u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[4]);
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x100u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 348u, c->v.s[0]);
    c->r[14] = 0xca5eb4u; f_a8bcc0(c);
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x350u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x354u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x358u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x35cu; ST32(ea, c->r[9]); }
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[4]);
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[10] = LD32(c->r[10]);
    c->v.s[8] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[6] = c->v.f[6] - c->v.f[4];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.s[12] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[20] = c->v.f[6] * c->v.f[2];
    c->v.s[14] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[12] - c->v.f[10];
    c->v.s[1] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[14] - c->v.f[0];
    c->v.f[16] = c->v.f[8] * c->v.f[4];
    c->v.f[10] = c->v.f[1] - c->v.f[10];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[18] = c->v.f[0] * c->v.f[10];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca5f58; }
    c->r[14] = 0xca5f54u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_ca5f58:;
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[10] = v; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca5f78; }
    c->v.f[0] = c->v.f[22] / c->v.f[2];
    c->v.f[18] = c->v.f[0] * c->v.f[18];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.f[16] = c->v.f[0] * c->v.f[16];
L_ca5f78:;
    c->v.s[0] = LD32(c->r[13] + 848u);
    c->v.s[2] = LD32(c->r[13] + 852u);
    c->v.s[4] = LD32(c->r[13] + 856u);
    c->r[7] = 0x0u;
    goto L_ca5fc0;
L_ca5f8c:;
    { uint32_t ea = c->r[13] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2e8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[16] = LD32(c->r[13] + 720u);
    c->v.s[20] = LD32(c->r[13] + 724u);
    c->v.s[18] = LD32(c->r[13] + 728u);
    { uint32_t ea = c->r[13] + 0x350u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x354u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x358u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x35cu; ST32(ea, c->r[7]); }
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[1];
    c->v.s[4] = c->r[2];
L_ca5fc0:;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[16]);
    c->r[0] = c->r[13] + 0x490u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[30] * c->v.f[18]);
    ST32(c->r[13] + 352u, c->v.s[16]);
    c->v.f[6] = c->v.f[27] * c->v.f[20];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[29] * c->v.f[16]);
    ST32(c->r[13] + 356u, c->v.s[20]);
    ST32(c->r[13] + 360u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[7]); }
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[31] * c->v.f[18]);
    ST32(c->r[0] + 32u, c->v.s[0]);
    c->v.s[0] = 0xbf7fbe77u;
    ST32(c->r[0] + 36u, c->v.s[2]);
    ST32(c->r[0] + 40u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x4bcu; ST32(ea, c->r[7]); }
    vfp_cmp_f(c, c->v.f[6], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca602c; }
    c->v.f[0] = fabsf(c->v.f[29]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[21]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca6098; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + 0x8u;
    c->r[2] = c->r[1] + 0x4u;
    goto L_ca60cc;
L_ca602c:;
    c->v.f[0] = c->v.f[6] + c->v.f[22];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca604c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca604cu; f_15efddc(c);
L_ca604c:;
    c->v.f[14] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 352u);
    c->v.s[4] = LD32(c->r[13] + 356u);
    c->v.s[6] = LD32(c->r[13] + 360u);
    c->v.f[8] = c->v.f[29] * c->v.f[4];
    c->v.f[10] = c->v.f[31] * c->v.f[2];
    c->v.f[12] = c->v.f[27] * c->v.f[6];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[27] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[29] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[31] * c->v.f[4]);
    c->v.s[2] = 0x3f000000u;
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[6] = c->v.f[14] * c->v.f[8];
    c->v.f[4] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[14] * c->v.f[12];
    goto L_ca6128;
L_ca6098:;
    c->v.f[0] = fabsf(c->v.f[27]);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[21]);
    c->r[1] = c->r[2];
    c->r[0] = c->r[2] + 0x8u;
    c->r[2] = c->r[2] + 0x4u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[21]);
    if (COND_MI) { c->r[1] = c->r[3]; }
    if (COND_MI) { c->r[0] = c->r[3] + 0x8u; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[3] + 0x4u; }
L_ca60cc:;
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[2]);
    c->v.f[18] = c->v.f[31] * c->v.f[2];
    c->v.f[16] = c->v.f[27] * c->v.f[0];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[29] * c->v.f[0]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[31] * c->v.f[4]);
    c->v.f[20] = c->v.f[29] * c->v.f[4];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[27] * c->v.f[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca6114; }
    c->r[14] = 0xca6110u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_ca6114:;
    c->v.f[0] = c->v.f[22] / c->v.f[2];
    c->v.s[2] = 0xb33bbd2eu;
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[18];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
L_ca6128:;
    c->v.f[8] = c->v.f[6] + c->v.f[6];
    c->v.f[12] = c->v.f[4] + c->v.f[4];
    c->v.f[10] = c->v.f[0] + c->v.f[0];
    c->r[0] = c->r[13] + 0x490u;
    c->v.s[5] = LD32(c->r[0] + 48u);
    c->v.s[7] = LD32(c->r[0] + 52u);
    c->v.s[9] = LD32(c->r[0] + 56u);
    c->v.f[14] = c->v.f[0] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.f[1] = c->v.f[4] * c->v.f[12];
    c->v.f[13] = c->v.f[0] * c->v.f[12];
    c->v.f[11] = c->v.f[8] * c->v.f[2];
    c->v.f[10] = c->v.f[10] * c->v.f[2];
    c->v.f[2] = c->v.f[12] * c->v.f[2];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->v.f[3] = c->v.f[14] + c->v.f[6];
    c->v.f[6] = c->v.f[1] + c->v.f[6];
    c->v.f[15] = c->v.f[13] + c->v.f[11];
    c->v.f[12] = c->v.f[13] - c->v.f[11];
    c->v.f[8] = c->v.f[4] + c->v.f[10];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[10] = c->v.f[0] - c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.f[6] = c->v.f[22] - c->v.f[6];
    c->v.f[3] = c->v.f[22] - c->v.f[3];
    c->v.f[20] = c->v.f[7] * c->v.f[8];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[5] * c->v.f[10]);
    c->v.f[18] = c->v.f[5] * c->v.f[6];
    c->v.f[6] = c->v.f[14] + c->v.f[1];
    c->v.f[16] = c->v.f[7] * c->v.f[3];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[5] * c->v.f[15]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[12] * c->v.f[7]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[4] * c->v.f[9]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[2] = c->v.f[22] - c->v.f[6];
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[2] * c->v.f[9]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca61e0; }
    c->r[14] = 0xca61dcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_ca61e0:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca61fc; }
    c->v.f[0] = c->v.f[22] / c->v.f[2];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.f[16] = c->v.f[0] * c->v.f[16];
    c->v.f[18] = c->v.f[0] * c->v.f[18];
L_ca61fc:;
    c->r[4] = c->r[13] + 0x180u;
    c->r[1] = c->r[13] + 0x4b0u;
    c->r[2] = c->r[13] + 0x350u;
    c->r[3] = c->r[13] + 0x170u;
    ST32(c->r[13] + 368u, c->v.s[18]);
    ST32(c->r[13] + 372u, c->v.s[16]);
    ST32(c->r[13] + 376u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xca6224u; f_9c5e4c(c);
    c->r[0] = c->r[13] + 0x100u;
    c->r[1] = c->r[4];
    c->r[2] = c->r[13] + 0x310u;
    c->r[14] = 0xca6234u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4d0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4d4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x500u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x504u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x508u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca62bcu; f_a8aa2c(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x490u;
    c->v.s[6] = LD32(c->r[13] + 848u);
    c->v.s[8] = LD32(c->r[13] + 852u);
    c->v.s[10] = LD32(c->r[13] + 856u);
    c->v.s[0] = LD32(c->r[0] + 32u);
    c->v.s[2] = LD32(c->r[0] + 36u);
    c->v.s[4] = LD32(c->r[0] + 40u);
    c->v.f[16] = c->v.f[8] - c->v.f[2];
    c->v.f[18] = c->v.f[6] - c->v.f[0];
    c->v.f[20] = c->v.f[10] - c->v.f[4];
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca630c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca630cu; f_15efddc(c);
L_ca630c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ca6328; }
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_ca6328:;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[13] + 0x4d0u;
    c->r[3] = c->r[13] + 0x100u;
    ST32(c->r[13] + 256u, c->v.s[18]);
    ST32(c->r[13] + 260u, c->v.s[16]);
    ST32(c->r[13] + 264u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[7]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xca6350u; f_a8b8bc(c);
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[3] = c->r[6];
    c->r[14] = 0xca6370u; f_a8bb60(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_ca6394; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = (c->r[0] >> 8) & 0xffu;
    c->r[0] = c->r[9];
    c->r[14] = 0xca6394u; f_a8bbd8(c);
L_ca6394:;
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca63c4; }
    c->v.s[2] = LD32(c->r[13] + 168u);
    c->v.s[3] = LD32(c->r[13] + 164u);
    c->v.s[4] = LD32(c->r[13] + 160u);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[24];
    c->v.s[1] = c->v.s[28];
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xca63c4u; f_a8bc0c(c);
L_ca63c4:;
    c->r[6] = c->r[13] + 0x400u;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6] + 0x11cu;
    c->r[14] = 0xca63d8u; f_a8bbc0(c);
    c->r[6] = c->r[13] + 0x400u;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[3] = c->r[13] + 0x520u;
    c->r[2] = c->r[6] + 0x128u;
    c->r[14] = 0xca63f0u; f_a8bb38(c);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[0] = c->r[9];
    c->r[14] = 0xca6404u; f_a8bc70(c);
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[2] = c->r[10];
    c->r[14] = 0xca6414u; f_a8bc84(c);
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xca6424u; f_a8bc98(c);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xca6434u; f_a8bcac(c);
    c->v.s[0] = c->v.s[23];
    c->r[0] = c->r[13] + 0x160u;
    c->r[1] = c->r[4];
    c->r[2] = c->r[13] + 0x4d0u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xca6454u; f_a8ac84(c);
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_ca5d6c; }
    c->r[5] = c->r[13] + 0x270u;
L_ca6470:;
    c->r[0] = c->r[5];
    c->r[14] = 0xca6478u; f_e1bb28(c);
    c->v.s[24] = 0xbf800000u;
L_ca647c:;
    c->r[0] = c->r[13] + 0x3c0u;
    c->r[14] = 0xca6484u; f_e179e4(c);
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = c->r[13] + 0x400u;
    c->r[10] = c->r[14] + 0x11cu;
L_ca6490:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xca64a0u; f_e6d2c0(c);
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x180u;
    c->r[0] = c->r[5];
    c->r[14] = 0xca64b0u; f_e6d2e8(c);
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 4) & 0xfu;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_EQ) { goto L_ca6500; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[5] + 0x8cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x23cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9cu; ST32(ea, c->r[7]); }
L_ca6500:;
    { uint32_t ea = c->r[5] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3ccu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3dcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3ecu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[13] + 0x3c0u;
    { uint32_t ea = c->r[13] + 0x3f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xff000000u;
    { uint32_t ea = c->r[13] + 0x3f8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xca6528u; f_c6785c(c);
    c->v.s[30] = 0x34000000u;
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ca65fc; }
    { uint32_t ea = c->r[13] + 0x3f8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] & 0xff000000u;
    { uint32_t r = c->r[1] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[5] + 0xd8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_ca6578; }
    { uint32_t ea = c->r[13] + 0x3c0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[5] + 0xa0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3c4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xa8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xacu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3f0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xd0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xd8u; ST32(ea, c->r[0]); }
L_ca6578:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca65c4; }
    { uint32_t ea = c->r[13] + 0x3d0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3d4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xb4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xb8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xbcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3e4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xc4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3e8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xc8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[5] + 0xccu; ST32(ea, c->r[7]); }
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[2] << 8) & 0xff00u);
    { uint32_t ea = c->r[5] + 0xd8u; ST32(ea, c->r[0]); }
L_ca65c4:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca6608; }
    { uint32_t ea = c->r[13] + 0x3c0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[0] = (c->r[0] & 0xff00ffffu) | ((c->r[2] << 16) & 0xff0000u);
    { uint32_t ea = c->r[5] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xacu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xd4u; ST32(ea, c->r[1]); }
    goto L_ca6604;
L_ca65fc:;
    { uint32_t ea = c->r[5] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xff000000u;
L_ca6604:;
    { uint32_t ea = c->r[5] + 0xd8u; ST32(ea, c->r[0]); }
L_ca6608:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_ca4a54; }
L_ca6614:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ca6628(Cpu *restrict c) {
    FN_ENTER(0xca6628u);
L_ca6628:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xca663cu; f_ead764(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ca6650; }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_ca6650:;
    { uint32_t ea = c->r[5] + 0x197u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca6674; }
    c->r[0] = 0xd9c46cu;
    { uint32_t ea = 0xca6668u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca666cu; f_d925b0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca66d4; }
L_ca6674:;
    c->r[0] = 0x110u;
    c->r[1] = 0x10u;
    c->r[14] = 0xca6680u; f_e6d0bc(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[5] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] >> 28) & 0x1u;
    c->r[0] = c->r[6];
    c->r[14] = 0xca6698u; f_e6d0f8(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_ca66d4; }
    c->r[0] = 0xd9267cu;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xca66b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xf0u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0xd9c410u;
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = 0xca66c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_ca66e0; }
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_ca66e4;
L_ca66d4:;
    c->r[6] = 0x0u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_ca66e0:;
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
L_ca66e4:;
    c->pc = c->r[1]; c->r[14] = 0xca66e8u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0xca66fcu; f_e08100(c);
    { uint32_t ea = c->r[5] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xca6708u; f_a8bfb0(c);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_ca6720(Cpu *restrict c) {
    FN_ENTER(0xca6720u);
L_ca6720:;
    return;
}
void f_ca6724(Cpu *restrict c) {
    FN_ENTER(0xca6724u);
L_ca6724:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0xca6734u; f_c9ff8c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0xff000000u;
    c->r[0] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1f1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = c->r[1] | 0x110000u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0x11u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca67a8; }
    c->v.s[0] = LD32(c->r[4] + 160u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { c->v.s[0] = LD32(c->r[4] + 164u); }
    if (COND_EQ) { vfp_cmp_f(c, c->v.f[0], 0.0f); }
    if (COND_EQ) { vfp_mrs_flags(c); }
    if (COND_NE) { goto L_ca67a0; }
    c->v.s[0] = LD32(c->r[4] + 168u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_ca67a8; }
L_ca67a0:;
    c->r[0] = c->r[0] | 0x100000u;
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
L_ca67a8:;
    { uint32_t ea = c->r[4] + 0xfu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 2) & 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_ca67b4(Cpu *restrict c) {
    FN_ENTER(0xca67b4u);
L_ca67b4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[14] = 0xca67c4u; f_c62db8(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ca68e0; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ca686c; }
    c->r[6] = c->r[8] + 0xd0u;
L_ca67e0:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca6800; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
L_ca6800:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xca680cu; f_ca0718(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ca6834; }
    { uint32_t ea = c->r[5] + 0xdu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca682c; }
    { uint32_t ea = c->r[5] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10000u;
    { uint32_t ea = c->r[5] + 0xe8u; ST32(ea, c->r[0]); }
L_ca682c:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_ca6844;
L_ca6834:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xca6840u; f_c5b224(c);
    c->r[5] = c->r[0];
L_ca6844:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); }
    c->r[14] = c->r[6] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[12] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->r[1] = c->r[0] + 0x10000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | (c->r[1] & 0xFFFF0000u);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); }
    c->r[0] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    if (COND_NE) { goto L_ca67e0; }
L_ca686c:;
    { uint32_t ea = c->r[8] + 0x43u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca68c0; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ca68c0; }
L_ca6884:;
    { uint32_t ea = c->r[5] + 0xfu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[1] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + 0x50u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0xd0u;
    c->r[1] = c->r[8];
    c->r[3] = 0x1u;
    c->pc = c->r[7]; c->r[14] = 0xca68b4u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_ca6884; }
L_ca68c0:;
    { uint32_t ea = c->r[8] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca68e0; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[8]; }
    if (COND_NE) { c->r[14] = 0xca68e0u; f_ca0bc4(c); }
L_ca68e0:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ca68ec(Cpu *restrict c) {
    FN_ENTER(0xca68ecu);
L_ca68ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xd9d164u;
    { uint32_t ea = 0xca68fcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xca6900u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1d0u;
    c->pc = c->r[4]; c->r[14] = 0xca6918u; rt_dispatch(c);
    c->r[14] = 0xca691cu; f_c58d7c(c);
    c->r[1] = 0xd9d13cu;
    { uint32_t ea = 0xca6928u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_ca6938(Cpu *restrict c) {
    FN_ENTER(0xca6938u);
L_ca6938:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xd9d110u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xca6950u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xca6954u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_ca6974(Cpu *restrict c) {
    FN_ENTER(0xca6974u);
L_ca6974:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0xca697cu; f_c58d7c(c);
    c->r[1] = 0xd9d0dcu;
    { uint32_t ea = 0xca6988u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_ca6994(Cpu *restrict c) {
    FN_ENTER(0xca6994u);
L_ca6994:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xca69a0u; f_c58e70(c);
    c->r[0] = 0xd9d0b4u;
    { uint32_t ea = 0xca69acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca69acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_ca69c4(Cpu *restrict c) {
    FN_ENTER(0xca69c4u);
L_ca69c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xca69d0u; f_c58fa8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x130u;
    { uint32_t ea = c->r[0] + 0x1a8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x20u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c5b658(c);
}
void f_ca69fc(Cpu *restrict c) {
    FN_ENTER(0xca69fcu);
L_ca69fc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xca6a08u; f_c59268(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[0] - 0x9cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x1a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 4) & 0xffffu;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[3] = (c->r[3] & 0xfff0ffffu) | ((c->r[2] << 16) & 0xf0000u);
    c->r[2] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[9]); }
    c->r[3] = c->r[3] & 0xff0fffffu;
    { uint32_t ea = c->r[7] + 0x1a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[2] = c->r[2] & 0xfu;
    c->r[2] = c->r[3] | (c->r[2] << 20);
    c->r[3] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[9]); }
    c->r[2] = c->r[2] & 0xf0ffffffu;
    { uint32_t ea = c->r[7] + 0x1a0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] >> 8) & 0xfu;
    c->r[7] = c->r[2] | (c->r[3] << 24);
    (void)f_subs(c, c->r[3], 0x6u);
    if (COND_EQ) { goto L_ca6aac; }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbfff0000u;
    c->r[2] = c->r[1] & c->r[2];
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = c->r[1] | c->r[2];
    c->r[1] = c->r[1] | 0x40000000u;
L_ca6aac:;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[9]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xca6ac4u; f_c5b880(c);
    c->r[1] = 0xb0000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x230000u; }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[4] + 0x46u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x194u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ca6afc(Cpu *restrict c) {
    FN_ENTER(0xca6afcu);
L_ca6afc:;
    { uint32_t ea = c->r[0] + 0x46u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x23u);
    if (COND_EQ) { goto L_ca6b14; }
    (void)f_subs(c, c->r[3], 0xbu);
    if (COND_NE) { return; }
    __attribute__((musttail)) return f_ca6b18(c);
L_ca6b14:;
    __attribute__((musttail)) return f_ca8530(c);
}
void f_ca6b18(Cpu *restrict c) {
    FN_ENTER(0xca6b18u);
L_ca6b18:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x368u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->r[0] = 0xd96064u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xca6b50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[8];
    c->r[14] = 0xca6b5cu; f_dae520(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[8];
    c->r[2] = c->r[4];
    c->r[14] = 0xca6b70u; f_cef1e4(c);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[8];
    c->r[14] = 0xca6b80u; f_c74880(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[4]); }
    c->r[14] = 0xca6b94u; f_c7491c(c);
    { uint32_t ea = c->r[6] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x10000u;
    c->r[5] = 0x20000u;
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[16] = LD32(c->r[6] + 152u);
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf0u;
    { uint32_t ea = c->r[3] + 0x1a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[0] & (c->r[2] >> 12);
    c->r[0] = 0xf00u;
    c->r[4] = c->r[4] & (c->r[2] >> 12);
    c->r[5] = c->r[5] & (c->r[2] >> 12);
    c->r[0] = c->r[0] & (c->r[2] >> 16);
    c->r[2] = (c->r[2] >> 20) & 0xfu;
    c->r[4] = c->r[4] | c->r[2];
    c->r[7] = c->r[0] | c->r[7];
    c->r[5] = c->r[4] | c->r[5];
    c->r[7] = c->r[7] | c->r[5];
    { uint32_t ea = c->r[13] + 0x250u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x1b8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x254u; ST32(ea, c->r[3]); }
    c->r[3] = 0xd9261cu;
    { uint32_t ea = 0xca6c38u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0xb0u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_ca6c74; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_ca6c70; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x3u;
L_ca6c58:;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[3] & c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca6c74; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca6c58; }
L_ca6c70:;
    c->r[10] = 0x0u;
L_ca6c74:;
    c->r[1] = c->r[1] & 0x80u;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ca6d14; }
    c->r[0] = c->r[13] + 0x70u;
    c->r[1] = c->r[8];
    c->r[14] = 0xca6cb8u; f_c57e4c(c);
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.s[6] = LD32(c->r[13] + 140u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca6cf0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca6cf0u; f_15efddc(c);
L_ca6cf0:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca7258; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_ca7290;
L_ca6d14:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca809c; }
    c->r[0] = c->r[13] + 0x70u;
    c->r[1] = c->r[8];
    c->r[14] = 0xca6d28u; f_c57ee0(c);
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_ca8520; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[9] = c->r[0] & 0x3u;
    c->r[0] = c->r[13] + 0x260u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    goto L_ca6e48;
L_ca6d7c:;
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_ca724c; }
    c->r[2] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[14] = c->r[13] + 0x260u;
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = c->r[8] + 0x18u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca6e44u; f_a8c0c8(c);
    goto L_ca724c;
L_ca6e48:;
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca6e9c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ca6e90; }
L_ca6e6c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca6e90; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ca6e6c; }
    c->r[10] = 0x0u;
    goto L_ca6e9c;
L_ca6e90:;
    c->r[10] = c->r[0];
    /* pld */
    /* pld */
L_ca6e9c:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[1] * c->r[5]; c->r[1] = r; }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[7] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[7] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca724c; }
    c->r[6] = c->r[8] + 0x8u;
    c->r[5] = 0x10u;
    c->r[4] = 0x0u;
    c->r[2] = c->r[8] + 0x60u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[4]); }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[3] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[8] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 208u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 212u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 216u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[4]); }
    c->r[2] = c->r[5] & (c->r[1] >> 21);
    c->r[1] = c->r[5] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 196u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[8] + 0x100u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[7] = c->r[1] + (c->r[3] << 4);
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[7] + 4u);
    c->v.s[4] = LD32(c->r[7] + 8u);
    c->r[7] = c->r[8] + 0x40u;
    c->r[3] = c->r[7] + (c->r[3] << 2);
    c->v.s[6] = LD32(c->r[3]);
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[1] = c->r[1] + (c->r[2] << 4);
    c->r[3] = c->r[7] + (c->r[2] << 2);
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x260u;
    c->v.s[14] = LD32(c->r[3]);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[13] + 0xc0u;
    c->r[3] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xb0u;
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[8]);
    ST32(c->r[13] + 176u, c->v.s[0]);
    ST32(c->r[13] + 180u, c->v.s[2]);
    ST32(c->r[13] + 184u, c->v.s[4]);
    c->r[14] = 0xca70b0u; f_c6cab8(c);
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8] + 0x20u;
    c->r[3] = c->r[13] + 0x1f0u;
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x298u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[0] = c->r[5] & (c->r[0] >> 20);
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->r[0] = c->r[2] + c->r[1];
    c->r[1] = c->r[8];
    c->r[2] = c->r[13] + 0xe0u;
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->r[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    ST32(c->r[13] + 544u, c->v.s[0]);
    ST32(c->r[13] + 548u, c->v.s[2]);
    ST32(c->r[13] + 552u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x238u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xca71a8u; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ca721c; }
    c->v.s[2] = LD32(c->r[13] + 548u);
    c->v.s[10] = LD32(c->r[13] + 116u);
    c->v.s[0] = LD32(c->r[13] + 544u);
    c->v.s[8] = LD32(c->r[13] + 112u);
    c->v.s[4] = LD32(c->r[13] + 552u);
    c->v.s[12] = LD32(c->r[13] + 120u);
    c->v.s[6] = LD32(c->r[13] + 556u);
    c->v.s[14] = LD32(c->r[13] + 124u);
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[8] = c->v.f[8] - c->v.f[0];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[12] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[8]);
    c->v.f[4] = c->v.f[14] - c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca720c; }
    c->r[14] = 0xca7208u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_ca720c:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LS) { goto L_ca6d7c; }
L_ca721c:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    c->r[3] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 8) & 0xfu;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca724cu; f_ca130c(c);
L_ca724c:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca6e48; }
    goto L_ca8520;
L_ca7258:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.s[8] = LD32(c->r[13] + 140u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_ca7290:;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[3]); }
    c->r[1] = c->r[0] & 0xfu;
    c->r[0] = c->r[13] + 0x70u;
    c->r[14] = 0xca72b0u; f_cfcce8(c);
    { uint32_t ea = c->r[13] + 0x251u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca7a10; }
    c->r[0] = c->r[13] + 0xc0u;
    c->r[1] = c->r[8];
    c->r[14] = 0xca72c8u; f_c57ee0(c);
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_ca8520; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x3f800000u;
    c->r[14] = c->r[13] + 0x260u;
    c->r[6] = 0x0u;
    c->r[4] = 0x10u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[8] = c->r[0] & 0x3u;
    c->r[0] = c->r[14] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] + 0x80u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] + 0x40u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
L_ca7320:;
    c->r[9] = c->r[10];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca736c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ca7360; }
L_ca7340:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[8] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca7360; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ca7340; }
    c->r[10] = 0x0u;
    goto L_ca736c;
L_ca7360:;
    c->r[10] = c->r[0];
    /* pld */
    /* pld */
L_ca736c:;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[1] * c->r[5]; c->r[1] = r; }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[7] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[7] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca791c; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    c->r[10] = c->r[9] + 0x8u;
    c->r[2] = c->r[9] + 0x60u;
    c->r[5] = c->r[9] + 0x100u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[3] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[9] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 176u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 180u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 184u, c->v.s[0]);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    c->r[2] = c->r[4] & (c->r[1] >> 21);
    c->r[1] = c->r[4] & (c->r[1] >> 20);
    c->r[4] = 0x10u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[9] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[7] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[2] << 4);
    c->r[5] = c->r[14];
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[14];
    c->r[3] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xca7588u; f_c6cab8(c);
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x298u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca7630; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca7748; }
    c->r[4] = c->r[13] + 0x1f0u;
    c->r[0] = c->r[13] + 0x260u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[1] = c->r[4];
    goto L_ca7758;
L_ca7630:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[9] + 0x20u;
    c->r[2] = c->r[4] & (c->r[1] >> 21);
    c->r[1] = c->r[4] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->r[3] = c->r[0] & 0xfu;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[2] + 4u);
    c->v.s[10] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x1e0u;
    c->r[2] = c->r[13] + 0xd0u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    ST32(c->r[13] + 480u, c->v.s[0]);
    ST32(c->r[13] + 484u, c->v.s[2]);
    ST32(c->r[13] + 488u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xca76a0u; f_cfd42c(c);
    c->r[4] = c->r[13] + 0x1f0u;
    c->r[0] = c->r[5];
    c->r[2] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0xca76b4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x298u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ca7838;
L_ca7748:;
    c->r[4] = c->r[13] + 0x1f0u;
    c->r[0] = c->r[13] + 0x260u;
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = c->r[4];
L_ca7758:;
    c->r[14] = 0xca775cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[10];
    c->r[3] = 0x10u;
    c->r[2] = c->r[9] + 0x20u;
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x298u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ca7838:;
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[9];
    c->r[2] = c->r[13] + 0xe0u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x238u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca7868u; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ca78e0; }
    c->v.s[2] = LD32(c->r[13] + 548u);
    c->v.s[10] = LD32(c->r[13] + 196u);
    c->v.s[0] = LD32(c->r[13] + 544u);
    c->v.s[8] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 552u);
    c->v.s[12] = LD32(c->r[13] + 200u);
    c->v.s[6] = LD32(c->r[13] + 556u);
    c->v.s[14] = LD32(c->r[13] + 204u);
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[8] = c->v.f[8] - c->v.f[0];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[12] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[8]);
    c->v.f[4] = c->v.f[14] - c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca78d0; }
    c->r[14] = 0xca78ccu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_ca78d0:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LS) { goto L_ca7928; }
L_ca78e0:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9];
    c->r[3] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 8) & 0xfu;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca7910u; f_ca130c(c);
    c->r[14] = c->r[13] + 0x260u;
    c->r[6] = 0x0u;
    c->r[4] = 0x10u;
L_ca791c:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca7320; }
    goto L_ca8520;
L_ca7928:;
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x260u;
    c->r[6] = 0x0u;
    c->r[4] = 0x10u;
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_ca791c; }
    c->r[2] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = c->r[9] + 0x18u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca79f8u; f_a8c0c8(c);
    c->r[4] = 0x10u;
    c->r[6] = 0x0u;
    c->r[14] = c->r[13] + 0x260u;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca7320; }
    goto L_ca8520;
L_ca7a10:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_ca8520; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x3f800000u;
    c->r[14] = c->r[13] + 0x260u;
    c->r[6] = 0x0u;
    c->r[4] = 0x10u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[0] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] + 0x80u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] + 0x40u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
L_ca7a6c:;
    c->r[8] = c->r[10];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca7ac4; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ca7ab8; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
L_ca7a90:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca7ab8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ca7a90; }
    c->r[10] = 0x0u;
    goto L_ca7ac4;
L_ca7ab8:;
    c->r[10] = c->r[0];
    /* pld */
    /* pld */
L_ca7ac4:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[1] * c->r[5]; c->r[1] = r; }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[7] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[7] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca8090; }
    c->r[9] = c->r[8] + 0x8u;
    c->r[2] = c->r[8] + 0x60u;
    c->r[5] = c->r[8] + 0x100u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[3] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[8] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 196u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[6]); }
    c->r[2] = c->r[4] & (c->r[1] >> 21);
    c->r[1] = c->r[4] & (c->r[1] >> 20);
    c->r[4] = 0x10u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 176u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 180u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[8] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 184u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[7] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[2] << 4);
    c->r[5] = c->r[14];
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[14];
    c->r[3] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[8]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[13] + 104u, c->v.s[4]);
    c->r[14] = 0xca7cdcu; f_c6cab8(c);
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x298u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca7d84; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca7e98; }
    c->r[4] = c->r[13] + 0x1f0u;
    c->r[0] = c->r[13] + 0x260u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[1] = c->r[4];
    goto L_ca7ea8;
L_ca7d84:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[8] + 0x20u;
    c->r[2] = c->r[4] & (c->r[1] >> 21);
    c->r[1] = c->r[4] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->r[3] = c->r[0] & 0xfu;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[2] + 4u);
    c->v.s[10] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x1e0u;
    c->r[2] = c->r[13] + 0xd0u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    ST32(c->r[13] + 480u, c->v.s[0]);
    ST32(c->r[13] + 484u, c->v.s[2]);
    ST32(c->r[13] + 488u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xca7df4u; f_cfd42c(c);
    c->r[4] = c->r[13] + 0x1f0u;
    c->r[0] = c->r[5];
    c->r[2] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0xca7e08u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x298u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ca7f84;
L_ca7e98:;
    c->r[4] = c->r[13] + 0x1f0u;
    c->r[0] = c->r[13] + 0x260u;
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = c->r[4];
L_ca7ea8:;
    c->r[14] = 0xca7eacu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[8] + 0x20u;
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x298u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ca7f84:;
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[8];
    c->r[2] = c->r[13] + 0xe0u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x238u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca7fb4u; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x260u;
    c->r[6] = 0x0u;
    c->r[4] = 0x10u;
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_ca8090; }
    c->r[2] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[9] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = c->r[8] + 0x18u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca8084u; f_a8c0c8(c);
    c->r[4] = 0x10u;
    c->r[6] = 0x0u;
    c->r[14] = c->r[13] + 0x260u;
L_ca8090:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca7a6c; }
    goto L_ca8520;
L_ca809c:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_ca8520; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[9] = c->r[0] & 0x3u;
    c->r[0] = c->r[13] + 0x260u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_ca80f0:;
    c->r[8] = c->r[10];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca813c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ca8130; }
L_ca8110:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca8130; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ca8110; }
    c->r[10] = 0x0u;
    goto L_ca813c;
L_ca8130:;
    c->r[10] = c->r[0];
    /* pld */
    /* pld */
L_ca813c:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[5] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[5] - c->r[3];
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    c->r[5] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[5] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[5] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[5] - c->r[3];
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca8518; }
    c->r[4] = c->r[8] + 0x8u;
    c->r[6] = 0x10u;
    c->r[7] = 0x0u;
    c->r[2] = c->r[8] + 0x60u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[3] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[8] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[6] & (c->r[1] >> 21);
    c->r[1] = c->r[6] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 208u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 212u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[8] + 0x100u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 216u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[5] = c->r[1] + (c->r[3] << 4);
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->r[5] = c->r[8] + 0x40u;
    c->r[3] = c->r[5] + (c->r[3] << 2);
    c->v.s[6] = LD32(c->r[3]);
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[1] = c->r[1] + (c->r[2] << 4);
    c->r[3] = c->r[5] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x260u;
    c->v.s[14] = LD32(c->r[3]);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[1] = c->r[13] + 0xd0u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xc0u;
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[8]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[2]);
    ST32(c->r[13] + 200u, c->v.s[4]);
    c->r[14] = 0xca8350u; f_c6cab8(c);
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8] + 0x20u;
    c->r[3] = c->r[13] + 0x1f0u;
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x298u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[0] = c->r[6] & (c->r[0] >> 20);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->r[0] = c->r[2] + c->r[1];
    c->r[1] = c->r[8];
    c->r[2] = c->r[13] + 0xe0u;
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->r[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    ST32(c->r[13] + 544u, c->v.s[0]);
    ST32(c->r[13] + 548u, c->v.s[2]);
    ST32(c->r[13] + 552u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x238u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xca844cu; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_ca8518; }
    c->r[2] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[14] = c->r[13] + 0x260u;
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = c->r[8] + 0x18u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca8518u; f_a8c0c8(c);
L_ca8518:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca80f0; }
L_ca8520:;
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
