#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_9c5814(Cpu *c);
void f_a82674(Cpu *c);
void f_c57e4c(Cpu *c);
void f_c57f14(Cpu *c);
void f_c5b224(Cpu *c);
void f_c5ca24(Cpu *c);
void f_c62db8(Cpu *c);
void f_c69d00(Cpu *c);
void f_c6a004(Cpu *c);
void f_c6a2a4(Cpu *c);
void f_c6a2cc(Cpu *c);
void f_c6a2d0(Cpu *c);
void f_c6a434(Cpu *c);
void f_c6adac(Cpu *c);
void f_c6b3c0(Cpu *c);
void f_c6b59c(Cpu *c);
void f_c6b824(Cpu *c);
void f_c6bc0c(Cpu *c);
void f_c6be40(Cpu *c);
void f_c6c054(Cpu *c);
void f_c6c268(Cpu *c);
void f_c6cab8(Cpu *c);
void f_c6d3b4(Cpu *c);
void f_c74838(Cpu *c);
void f_c74880(Cpu *c);
void f_c7491c(Cpu *c);
void f_cb0ad8(Cpu *c);
void f_ccf314(Cpu *c);
void f_ccfa2c(Cpu *c);
void f_ccfb70(Cpu *c);
void f_ccfd7c(Cpu *c);
void f_cd13e8(Cpu *c);
void f_cd2330(Cpu *c);
void f_cd3bf0(Cpu *c);
void f_cd4e90(Cpu *c);
void f_cd6cd4(Cpu *c);
void f_cd7f50(Cpu *c);
void f_cda090(Cpu *c);
void f_cdb7c8(Cpu *c);
void f_cdd748(Cpu *c);
void f_cdec54(Cpu *c);
void f_cdfb40(Cpu *c);
void f_ce0de8(Cpu *c);
void f_ce10bc(Cpu *c);
void f_cec454(Cpu *c);
void f_ced74c(Cpu *c);
void f_cef1e4(Cpu *c);
void f_cef728(Cpu *c);
void f_cf7958(Cpu *c);
void f_cf938c(Cpu *c);
void f_cfb2bc(Cpu *c);
void f_cfcce8(Cpu *c);
void f_cfd42c(Cpu *c);
void f_dae520(Cpu *c);
void f_ea99ec(Cpu *c);
void f_eafca4(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efe24(Cpu *c);
void f_cc30e0(Cpu *restrict c) {
    FN_ENTER(0xcc30e0u);
L_cc30e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x158u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[7] = c->r[0];
    c->r[0] = 0xd79a98u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->r[5] = c->r[1];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xcc311cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[5];
    c->r[14] = 0xcc3128u; f_dae520(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    c->r[14] = 0xcc313cu; f_cef1e4(c);
    c->r[8] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0xcc314cu; f_c74880(c);
    { uint32_t ea = c->r[7] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0xb0u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    c->v.s[16] = LD32(c->r[7] + 152u);
    { uint32_t ea = c->r[3] + 0x170u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x174u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = (c->r[1] >> 24) & 0xfu;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_cc31a8; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_cc31a4; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x3u;
L_cc318c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc31a8; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_cc318c; }
L_cc31a4:;
    c->r[4] = 0x0u;
L_cc31a8:;
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_cc3598; }
    c->r[8] = c->r[13] + 0x40u;
    c->r[1] = c->r[5];
    c->r[0] = c->r[8];
    c->r[14] = 0xcc31d0u; f_c57e4c(c);
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[14] = 0xcc31dcu; f_cfcce8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_cc388c; }
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0xa0u;
    c->r[10] = 0x10u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
    c->r[0] = c->r[9] & 0x100000u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
L_cc3204:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc3250; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc3240; }
L_cc3220:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc3240; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc3220; }
    c->r[8] = 0x0u;
    goto L_cc3250;
L_cc3240:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc3250:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[3] = c->r[6];
    c->r[14] = 0xcc3268u; f_ccfb70(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc3588; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x0u;
    c->r[2] = c->r[4] + 0x60u;
    c->r[5] = c->r[4] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[10] & (c->r[0] >> 21);
    c->r[3] = c->r[10] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[4] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 148u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 152u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[10] & (c->r[1] >> 21);
    c->r[1] = c->r[10] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 128u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[4] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 136u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[2] << 4);
    c->r[5] = c->r[13] + 0x110u;
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[5];
    c->r[3] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
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
    ST32(c->r[13] + 48u, c->v.s[0]);
    ST32(c->r[13] + 52u, c->v.s[2]);
    ST32(c->r[13] + 56u, c->v.s[4]);
    c->r[14] = 0xcc33d0u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc3474; }
    c->r[6] = c->r[13] + 0xd0u;
    c->r[0] = c->r[5];
    c->r[2] = c->r[13] + 0x40u;
    c->r[1] = c->r[6];
    goto L_cc3484;
L_cc3474:;
    c->r[6] = c->r[13] + 0xd0u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = c->r[6];
L_cc3484:;
    c->r[14] = 0xcc3488u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4] + 0x20u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10] & (c->r[0] >> 21);
    c->r[0] = c->r[10] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->r[2] = c->r[4];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    ST32(c->r[13] + 256u, c->v.s[0]);
    ST32(c->r[13] + 260u, c->v.s[2]);
    ST32(c->r[13] + 264u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcc3584u; f_cdec54(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
L_cc3588:;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[4] = c->r[8];
    if (COND_NE) { goto L_cc3204; }
    goto L_cc388c;
L_cc3598:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_cc388c; }
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[13] + 0xa0u;
    c->r[9] = 0x10u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
L_cc35b8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc3604; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc35f4; }
L_cc35d4:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc35f4; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc35d4; }
    c->r[8] = 0x0u;
    goto L_cc3604;
L_cc35f4:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc3604:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[3] = c->r[6];
    c->r[14] = 0xcc361cu; f_ccfb70(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc3880; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[2] = c->r[4] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[9] & (c->r[0] >> 21);
    c->r[3] = c->r[9] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[4] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 68u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[9] & (c->r[1] >> 21);
    c->r[1] = c->r[9] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 148u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[4] + 0xc0u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 152u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 4);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->r[6] = c->r[4] + 0x40u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[3] = c->r[6] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 4);
    c->v.s[6] = LD32(c->r[3]);
    c->r[3] = c->r[6] + (c->r[2] << 2);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x110u;
    c->v.s[14] = LD32(c->r[3]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    c->r[3] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
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
    ST32(c->r[13] + 128u, c->v.s[0]);
    ST32(c->r[13] + 132u, c->v.s[2]);
    ST32(c->r[13] + 136u, c->v.s[4]);
    c->r[14] = 0xcc3788u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4] + 0x20u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9] & (c->r[0] >> 21);
    c->r[0] = c->r[9] & (c->r[0] >> 20);
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->r[0] = c->r[2] + c->r[1];
    c->r[2] = c->r[4];
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
    ST32(c->r[13] + 256u, c->v.s[0]);
    ST32(c->r[13] + 260u, c->v.s[2]);
    ST32(c->r[13] + 264u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xcc3880u; f_cdec54(c);
L_cc3880:;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[4] = c->r[8];
    if (COND_NE) { goto L_cc35b8; }
L_cc388c:;
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_cc38a0(Cpu *restrict c) {
    FN_ENTER(0xcc38a0u);
L_cc38a0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x178u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[0] = 0xd792d8u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->r[10] = c->r[1];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xcc38dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[10];
    c->r[14] = 0xcc38e8u; f_dae520(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->r[2] = c->r[4];
    c->r[14] = 0xcc38fcu; f_cef1e4(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->r[14] = 0xcc390cu; f_c74880(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    c->r[14] = 0xcc3920u; f_c7491c(c);
    { uint32_t ea = c->r[5] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    c->v.s[16] = LD32(c->r[5] + 152u);
    { uint32_t ea = c->r[0] + 0x170u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x174u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = (c->r[1] >> 24) & 0xfu;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_cc3980; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_cc397c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x3u;
L_cc3964:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc3980; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_cc3964; }
L_cc397c:;
    c->r[4] = 0x0u;
L_cc3980:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc3a0c; }
    c->r[0] = c->r[13] + 0x50u;
    c->r[1] = c->r[10];
    c->r[14] = 0xcc39b0u; f_c57e4c(c);
    c->v.s[2] = LD32(c->r[13] + 100u);
    c->v.s[0] = LD32(c->r[13] + 96u);
    c->v.s[4] = LD32(c->r[13] + 104u);
    c->v.s[6] = LD32(c->r[13] + 108u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc39e8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc39e8u; f_15efddc(c);
L_cc39e8:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc3d0c; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cc3d44;
L_cc3a0c:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_cc4270; }
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0xb0u;
    c->r[10] = 0x10u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[5] = c->r[0] & 0x3u;
L_cc3a2c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc3a78; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc3a68; }
L_cc3a48:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[5] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc3a68; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc3a48; }
    c->r[9] = 0x0u;
    goto L_cc3a78;
L_cc3a68:;
    c->r[9] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc3a78:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[3] = c->r[8];
    c->r[14] = 0xcc3a90u; f_ccfb70(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc3cfc; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x0u;
    c->r[2] = c->r[4] + 0x60u;
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[10] & (c->r[0] >> 21);
    c->r[3] = c->r[10] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[4] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[10] & (c->r[1] >> 21);
    c->r[1] = c->r[10] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 160u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 164u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[4] + 0xc0u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 168u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 4);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->r[6] = c->r[4] + 0x40u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[3] = c->r[6] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 4);
    c->v.s[6] = LD32(c->r[3]);
    c->r[3] = c->r[6] + (c->r[2] << 2);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[13] + 0xa0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x130u;
    c->v.s[14] = LD32(c->r[3]);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[8]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[2]);
    ST32(c->r[13] + 152u, c->v.s[4]);
    c->r[14] = 0xcc3c04u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4] + 0x20u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10] & (c->r[0] >> 21);
    c->r[0] = c->r[10] & (c->r[0] >> 20);
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->r[0] = c->r[2] + c->r[1];
    c->r[2] = c->r[4];
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
    ST32(c->r[13] + 288u, c->v.s[0]);
    ST32(c->r[13] + 292u, c->v.s[2]);
    ST32(c->r[13] + 296u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xcc3cfcu; f_cdfb40(c);
L_cc3cfc:;
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[4] = c->r[9];
    if (COND_NE) { goto L_cc3a2c; }
    goto L_cc4270;
L_cc3d0c:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 96u);
    c->v.s[4] = LD32(c->r[13] + 100u);
    c->v.s[6] = LD32(c->r[13] + 104u);
    c->v.s[8] = LD32(c->r[13] + 108u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_cc3d44:;
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[3]); }
    c->r[14] = 0xcc3d60u; f_cfcce8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_cc4270; }
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[13] + 0xb0u;
    c->r[6] = 0x10u;
    c->r[10] = c->r[13] + 0x130u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[5] = c->r[0] & 0x3u;
    c->r[0] = c->r[9] & 0x100000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] & 0x200000u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
L_cc3d94:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc3de4; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc3dd4; }
L_cc3db0:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[5] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc3dd4; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc3db0; }
    c->r[9] = 0x0u;
    goto L_cc3de4;
L_cc3dd4:;
    c->r[9] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc3de4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[3] = c->r[8];
    c->r[14] = 0xcc3dfcu; f_ccfb70(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc4264; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    c->r[2] = c->r[4] + 0x60u;
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[3] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[4] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 148u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 152u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[6] & (c->r[1] >> 21);
    c->r[1] = c->r[6] & (c->r[1] >> 20);
    c->r[6] = c->r[4] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 68u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[4] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[7] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[6] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[6] + (c->r[2] << 4);
    c->r[6] = 0x10u;
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x40u;
    c->r[3] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
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
    ST32(c->r[13] + 48u, c->v.s[0]);
    ST32(c->r[13] + 52u, c->v.s[2]);
    ST32(c->r[13] + 56u, c->v.s[4]);
    c->r[14] = 0xcc3f6cu; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc401c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc413c; }
    c->r[6] = c->r[13] + 0xf0u;
    c->r[0] = c->r[10];
    c->r[2] = c->r[13] + 0x50u;
    c->r[1] = c->r[6];
    goto L_cc414c;
L_cc401c:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4] + 0x20u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[0] = c->r[6] & (c->r[0] >> 20);
    c->r[6] = c->r[13] + 0x50u;
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->r[2] = c->r[13] + 0xa0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0xe0u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    ST32(c->r[13] + 224u, c->v.s[0]);
    ST32(c->r[13] + 228u, c->v.s[2]);
    ST32(c->r[13] + 232u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xcc4090u; f_cfd42c(c);
    c->r[7] = c->r[13] + 0xf0u;
    c->r[0] = c->r[8];
    c->r[2] = c->r[6];
    c->r[1] = c->r[7];
    c->r[14] = 0xcc40a4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = 0x10u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_cc4230;
L_cc413c:;
    c->r[6] = c->r[13] + 0xf0u;
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = c->r[6];
L_cc414c:;
    c->r[14] = 0xcc4150u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4] + 0x20u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[6];
    c->r[6] = 0x10u;
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[0] = c->r[6] & (c->r[0] >> 20);
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
L_cc4230:;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[7] = c->r[13] + 0xb0u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0xcc4264u; f_cdfb40(c);
L_cc4264:;
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[4] = c->r[9];
    if (COND_NE) { goto L_cc3d94; }
L_cc4270:;
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_cc4284(Cpu *restrict c) {
    FN_ENTER(0xcc4284u);
L_cc4284:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x1d0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[1];
    c->r[1] = c->r[13] + 0x160u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[6] = c->r[0];
    c->r[14] = 0xcc42b8u; f_cef728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc5d50; }
    c->r[0] = 0xd788e0u;
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xcc42d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[4];
    c->r[14] = 0xcc42e0u; f_dae520(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[2] = c->r[9];
    c->r[14] = 0xcc42f4u; f_cef1e4(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0xcc4304u; f_c74880(c);
    { uint32_t ea = c->r[6] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xb0u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x173u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    c->v.s[16] = LD32(c->r[6] + 152u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_cc4358; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cc4354; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] & 0x3u;
L_cc433c:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc4358; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc433c; }
L_cc4354:;
    c->r[8] = 0x0u;
L_cc4358:;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[1] & 0xfu;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    c->r[14] = 0xcc4374u; f_c57e4c(c);
    c->r[0] = c->r[13] + 0xa0u;
    c->r[1] = c->r[4];
    c->r[14] = 0xcc4380u; f_c57f14(c);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cc4544; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 160u);
    c->v.s[2] = LD32(c->r[13] + 164u);
    c->v.s[4] = LD32(c->r[13] + 168u);
    c->r[4] = c->r[6];
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[2]);
    ST32(c->r[13] + 136u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc4400; }
    c->r[14] = 0xcc43fcu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc4400:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc4430; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc4430u; f_15efddc(c);
L_cc4430:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc4450; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc447c;
L_cc4450:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc447c:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc44fc; }
    { uint32_t ea = c->r[7] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->r[1] = (c->r[1] >> 8) & 0x1u;
    c->r[2] = c->r[0] + (c->r[1] << 4);
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    goto L_cc451c;
L_cc44fc:;
    c->r[0] = 0xd74d50u;
    { uint32_t ea = 0xcc4508u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
L_cc451c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->v.s[18];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x190u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x160u;
    c->r[14] = 0xcc453cu; f_ea99ec(c);
    c->r[3] = c->r[0];
    c->r[6] = c->r[4];
L_cc4544:;
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_cc45d4; }
    c->v.s[2] = LD32(c->r[13] + 196u);
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.s[6] = LD32(c->r[13] + 204u);
    { uint32_t ea = c->r[0] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[3];
    c->r[2] = (c->r[0] >> 21) & 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->r[0] = (c->r[0] >> 20) & 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc45b0; }
    c->v.s[0] = c->v.s[2];
    c->r[5] = c->r[1];
    c->r[14] = 0xcc45acu; f_15efddc(c);
    c->r[1] = c->r[5];
L_cc45b0:;
    c->v.s[20] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc4b20; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cc4b58;
L_cc45d4:;
    { uint32_t ea = c->r[0] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 1; uint32_t r = c->r[0] & 0xf0000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc5814; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cc5d50; }
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = 0x34000000u;
    c->r[9] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[16];
    c->r[6] = c->r[0] & 0x3u;
    c->r[0] = c->r[7] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_cc4608:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc4658; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc4648; }
L_cc4628:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc4648; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc4628; }
    c->r[8] = 0x0u;
    goto L_cc4658;
L_cc4648:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc4658:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x10u;
    c->r[2] = c->r[10] + 0x20u;
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[0] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_cc4840; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc4714; }
    c->r[14] = 0xcc4710u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc4714:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc4744; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc4744u; f_15efddc(c);
L_cc4744:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc4764; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc478c;
L_cc4764:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc478c:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc483cu; f_ea99ec(c);
    c->r[3] = c->r[0];
L_cc4840:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc4b14; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[5] = c->r[3];
    c->r[14] = 0xcc4860u; f_ccfb70(c);
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc4b14; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc4900; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc489c; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_cc48a0;
L_cc489c:;
    c->r[9] = 0x0u;
L_cc48a0:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc48c4; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc48c0u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc48c4:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_cc4900; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0xc4u; ST8(ea, c->r[0]); }
L_cc4900:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[7] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[4] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x190u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xcc4a6cu; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xcc4b10u; f_ccfd7c(c);
    c->r[3] = c->r[5];
L_cc4b14:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc4608; }
    goto L_cc5d50;
L_cc4b20:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[6] = LD32(c->r[13] + 200u);
    c->v.s[8] = LD32(c->r[13] + 204u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[6] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_cc4b58:;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[14] = 0xcc4b74u; f_cfcce8(c);
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x173u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xf0u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc51cc; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[3] = c->r[4];
    if (COND_EQ) { goto L_cc5d50; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[4] = 0x10u;
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_cc4bb0:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc4c00; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc4bf0; }
L_cc4bd0:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc4bf0; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc4bd0; }
    c->r[8] = 0x0u;
    goto L_cc4c00;
L_cc4bf0:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc4c00:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + 0x20u;
    c->r[9] = c->r[10] + 0x8u;
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc4dd8; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc4cbc; }
    c->r[14] = 0xcc4cb8u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc4cbc:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc4cec; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc4cecu; f_15efddc(c);
L_cc4cec:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc4d08; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc4d30;
L_cc4d08:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc4d30:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[6]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc4dd4u; f_ea99ec(c);
    c->r[3] = c->r[0];
L_cc4dd8:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc51c0; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xcc4dfcu; f_ccfb70(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc51c0; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc4ea0; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc4e38; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_cc4e3c;
L_cc4e38:;
    c->r[4] = 0x0u;
L_cc4e3c:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc4e60; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc4e5cu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc4e60:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[4] = 0x10u;
    if (COND_EQ) { goto L_cc4ea0; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_cc4ea0:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[3] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[4] & (c->r[1] >> 21);
    c->r[1] = c->r[4] & (c->r[1] >> 20);
    c->r[4] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[4] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[4] + (c->r[2] << 4);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0x190u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->r[14] = 0xcc5000u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc50b0; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    if (COND_NE) { goto L_cc50e8; }
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0xb0u;
    c->r[1] = c->r[5];
    goto L_cc50f4;
L_cc50b0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xcc50c8u; f_cfd42c(c);
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0xcc50dcu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_cc50fc;
L_cc50e8:;
    c->r[5] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[5];
L_cc50f4:;
    c->r[14] = 0xcc50f8u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc50fc:;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcc51b8u; f_ccfd7c(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = 0x10u;
L_cc51c0:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc4bb0; }
    goto L_cc5d50;
L_cc51cc:;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[3] = c->r[4];
    if (COND_EQ) { goto L_cc5d50; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[10] = 0x0u;
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_cc51f8:;
    c->r[4] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc524c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc523c; }
L_cc5218:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc523c; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc5218; }
    c->r[8] = 0x0u;
    goto L_cc524c;
L_cc523c:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc524c:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x10u;
    c->r[2] = c->r[4] + 0x20u;
    c->r[9] = c->r[4] + 0x8u;
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[0] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[10]); }
    if (COND_EQ) { goto L_cc5428; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[10]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc5304; }
    c->r[14] = 0xcc5300u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc5304:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc5334; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc5334u; f_15efddc(c);
L_cc5334:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc5350; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc5378;
L_cc5350:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc5378:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc5424u; f_ea99ec(c);
    c->r[3] = c->r[0];
L_cc5428:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc5808; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xcc544cu; f_ccfb70(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc5808; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc54f0; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc548c; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_cc5490;
L_cc548c:;
    c->r[10] = 0x0u;
L_cc5490:;
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc54b4; }
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc54b0u; f_a82674(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc54b4:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_cc54f0; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_cc54f0:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[4] + 0x60u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[3] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[4] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[5] & (c->r[1] >> 21);
    c->r[1] = c->r[5] & (c->r[1] >> 20);
    c->r[5] = c->r[4] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[4] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[2] << 4);
    c->r[5] = c->r[13] + 0x190u;
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[5];
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->r[14] = 0xcc5658u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc5704; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc5730; }
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0xb0u;
    c->r[1] = c->r[5];
    goto L_cc5740;
L_cc5704:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xcc571cu; f_cfd42c(c);
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    c->r[1] = c->r[5];
    goto L_cc5740;
L_cc5730:;
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[5];
L_cc5740:;
    c->r[14] = 0xcc5744u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcc5804u; f_cd13e8(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
L_cc5808:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc51f8; }
    goto L_cc5d50;
L_cc5814:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cc5d50; }
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = 0x34000000u;
    c->r[4] = 0x10u;
    c->r[9] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[16];
    c->r[6] = c->r[0] & 0x3u;
    c->r[0] = c->r[7] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_cc5840:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc5890; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc5880; }
L_cc5860:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc5880; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc5860; }
    c->r[8] = 0x0u;
    goto L_cc5890;
L_cc5880:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc5890:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + 0x20u;
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_cc5a74; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc5948; }
    c->r[14] = 0xcc5944u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc5948:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc5978; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc5978u; f_15efddc(c);
L_cc5978:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc5994; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc59bc;
L_cc5994:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc59bc:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc5a6cu; f_ea99ec(c);
    c->r[3] = c->r[0];
    c->r[4] = 0x10u;
L_cc5a74:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc5d48; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[5] = c->r[3];
    c->r[14] = 0xcc5a94u; f_ccfb70(c);
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc5d48; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc5b38; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc5ad4; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_cc5ad8;
L_cc5ad4:;
    c->r[9] = 0x0u;
L_cc5ad8:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc5afc; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc5af8u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc5afc:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_cc5b38; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0xc4u; ST8(ea, c->r[0]); }
L_cc5b38:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[7] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[4] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x190u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xcc5ca4u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    c->r[4] = 0x10u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xcc5d44u; f_cd13e8(c);
    c->r[3] = c->r[5];
L_cc5d48:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc5840; }
L_cc5d50:;
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_cc5d60(Cpu *restrict c) {
    FN_ENTER(0xcc5d60u);
L_cc5d60:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x1d0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[1];
    c->r[1] = c->r[13] + 0x160u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[6] = c->r[0];
    c->r[14] = 0xcc5d94u; f_cef728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc783c; }
    c->r[0] = 0xd76e04u;
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xcc5db0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[4];
    c->r[14] = 0xcc5dbcu; f_dae520(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[2] = c->r[9];
    c->r[14] = 0xcc5dd0u; f_cef1e4(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0xcc5de0u; f_c74880(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[14] = 0xcc5df0u; f_c7491c(c);
    { uint32_t ea = c->r[6] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xb0u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x173u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    c->v.s[16] = LD32(c->r[6] + 152u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_cc5e44; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cc5e40; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x3u;
L_cc5e28:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc5e44; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc5e28; }
L_cc5e40:;
    c->r[8] = 0x0u;
L_cc5e44:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[1] & 0xfu;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    c->r[14] = 0xcc5e60u; f_c57e4c(c);
    c->r[0] = c->r[13] + 0xa0u;
    c->r[1] = c->r[4];
    c->r[14] = 0xcc5e6cu; f_c57f14(c);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cc6030; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 160u);
    c->v.s[2] = LD32(c->r[13] + 164u);
    c->v.s[4] = LD32(c->r[13] + 168u);
    c->r[4] = c->r[6];
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[2]);
    ST32(c->r[13] + 136u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc5eec; }
    c->r[14] = 0xcc5ee8u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc5eec:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc5f1c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc5f1cu; f_15efddc(c);
L_cc5f1c:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc5f3c; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc5f68;
L_cc5f3c:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc5f68:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc5fe8; }
    { uint32_t ea = c->r[7] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->r[1] = (c->r[1] >> 8) & 0x1u;
    c->r[2] = c->r[0] + (c->r[1] << 4);
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    goto L_cc6008;
L_cc5fe8:;
    c->r[0] = 0xd73264u;
    { uint32_t ea = 0xcc5ff4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
L_cc6008:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->v.s[18];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x190u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x160u;
    c->r[14] = 0xcc6028u; f_ea99ec(c);
    c->r[3] = c->r[0];
    c->r[6] = c->r[4];
L_cc6030:;
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_cc60c0; }
    c->v.s[2] = LD32(c->r[13] + 196u);
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.s[6] = LD32(c->r[13] + 204u);
    { uint32_t ea = c->r[0] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[3];
    c->r[2] = (c->r[0] >> 21) & 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->r[0] = (c->r[0] >> 20) & 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc609c; }
    c->v.s[0] = c->v.s[2];
    c->r[5] = c->r[1];
    c->r[14] = 0xcc6098u; f_15efddc(c);
    c->r[1] = c->r[5];
L_cc609c:;
    c->v.s[20] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc660c; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cc6644;
L_cc60c0:;
    { uint32_t ea = c->r[0] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 1; uint32_t r = c->r[0] & 0xf0000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc7300; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cc783c; }
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = 0x34000000u;
    c->r[9] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[16];
    c->r[6] = c->r[0] & 0x3u;
    c->r[0] = c->r[7] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_cc60f4:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc6144; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc6134; }
L_cc6114:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc6134; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc6114; }
    c->r[8] = 0x0u;
    goto L_cc6144;
L_cc6134:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc6144:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x10u;
    c->r[2] = c->r[10] + 0x20u;
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[0] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_cc632c; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc6200; }
    c->r[14] = 0xcc61fcu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc6200:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc6230; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc6230u; f_15efddc(c);
L_cc6230:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc6250; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc6278;
L_cc6250:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc6278:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc6328u; f_ea99ec(c);
    c->r[3] = c->r[0];
L_cc632c:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc6600; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[5] = c->r[3];
    c->r[14] = 0xcc634cu; f_ccfb70(c);
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc6600; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc63ec; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc6388; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_cc638c;
L_cc6388:;
    c->r[9] = 0x0u;
L_cc638c:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc63b0; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc63acu; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc63b0:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_cc63ec; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0xc4u; ST8(ea, c->r[0]); }
L_cc63ec:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[7] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[4] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x190u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xcc6558u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xcc65fcu; f_cd2330(c);
    c->r[3] = c->r[5];
L_cc6600:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc60f4; }
    goto L_cc783c;
L_cc660c:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[6] = LD32(c->r[13] + 200u);
    c->v.s[8] = LD32(c->r[13] + 204u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[6] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_cc6644:;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[14] = 0xcc6660u; f_cfcce8(c);
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x173u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xf0u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc6cb8; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[3] = c->r[4];
    if (COND_EQ) { goto L_cc783c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[4] = 0x10u;
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_cc669c:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc66ec; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc66dc; }
L_cc66bc:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc66dc; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc66bc; }
    c->r[8] = 0x0u;
    goto L_cc66ec;
L_cc66dc:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc66ec:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + 0x20u;
    c->r[9] = c->r[10] + 0x8u;
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc68c4; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc67a8; }
    c->r[14] = 0xcc67a4u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc67a8:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc67d8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc67d8u; f_15efddc(c);
L_cc67d8:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc67f4; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc681c;
L_cc67f4:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc681c:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[6]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc68c0u; f_ea99ec(c);
    c->r[3] = c->r[0];
L_cc68c4:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc6cac; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xcc68e8u; f_ccfb70(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc6cac; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc698c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc6924; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_cc6928;
L_cc6924:;
    c->r[4] = 0x0u;
L_cc6928:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc694c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc6948u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc694c:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[4] = 0x10u;
    if (COND_EQ) { goto L_cc698c; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_cc698c:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[3] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[4] & (c->r[1] >> 21);
    c->r[1] = c->r[4] & (c->r[1] >> 20);
    c->r[4] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[4] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[4] + (c->r[2] << 4);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0x190u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->r[14] = 0xcc6aecu; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc6b9c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    if (COND_NE) { goto L_cc6bd4; }
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0xb0u;
    c->r[1] = c->r[5];
    goto L_cc6be0;
L_cc6b9c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xcc6bb4u; f_cfd42c(c);
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0xcc6bc8u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_cc6be8;
L_cc6bd4:;
    c->r[5] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[5];
L_cc6be0:;
    c->r[14] = 0xcc6be4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc6be8:;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcc6ca4u; f_cd2330(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = 0x10u;
L_cc6cac:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc669c; }
    goto L_cc783c;
L_cc6cb8:;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[3] = c->r[4];
    if (COND_EQ) { goto L_cc783c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[10] = 0x0u;
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_cc6ce4:;
    c->r[4] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc6d38; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc6d28; }
L_cc6d04:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc6d28; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc6d04; }
    c->r[8] = 0x0u;
    goto L_cc6d38;
L_cc6d28:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc6d38:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x10u;
    c->r[2] = c->r[4] + 0x20u;
    c->r[9] = c->r[4] + 0x8u;
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[0] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[10]); }
    if (COND_EQ) { goto L_cc6f14; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[10]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc6df0; }
    c->r[14] = 0xcc6decu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc6df0:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc6e20; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc6e20u; f_15efddc(c);
L_cc6e20:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc6e3c; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc6e64;
L_cc6e3c:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc6e64:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc6f10u; f_ea99ec(c);
    c->r[3] = c->r[0];
L_cc6f14:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc72f4; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xcc6f38u; f_ccfb70(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc72f4; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc6fdc; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc6f78; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_cc6f7c;
L_cc6f78:;
    c->r[10] = 0x0u;
L_cc6f7c:;
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc6fa0; }
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc6f9cu; f_a82674(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc6fa0:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_cc6fdc; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_cc6fdc:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[4] + 0x60u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[3] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[4] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[5] & (c->r[1] >> 21);
    c->r[1] = c->r[5] & (c->r[1] >> 20);
    c->r[5] = c->r[4] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[4] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[2] << 4);
    c->r[5] = c->r[13] + 0x190u;
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[5];
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->r[14] = 0xcc7144u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc71f0; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc721c; }
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0xb0u;
    c->r[1] = c->r[5];
    goto L_cc722c;
L_cc71f0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xcc7208u; f_cfd42c(c);
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    c->r[1] = c->r[5];
    goto L_cc722c;
L_cc721c:;
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[5];
L_cc722c:;
    c->r[14] = 0xcc7230u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcc72f0u; f_cd3bf0(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
L_cc72f4:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc6ce4; }
    goto L_cc783c;
L_cc7300:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cc783c; }
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = 0x34000000u;
    c->r[4] = 0x10u;
    c->r[9] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[16];
    c->r[6] = c->r[0] & 0x3u;
    c->r[0] = c->r[7] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_cc732c:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc737c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc736c; }
L_cc734c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc736c; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc734c; }
    c->r[8] = 0x0u;
    goto L_cc737c;
L_cc736c:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc737c:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + 0x20u;
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_cc7560; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc7434; }
    c->r[14] = 0xcc7430u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc7434:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc7464; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc7464u; f_15efddc(c);
L_cc7464:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc7480; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc74a8;
L_cc7480:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc74a8:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc7558u; f_ea99ec(c);
    c->r[3] = c->r[0];
    c->r[4] = 0x10u;
L_cc7560:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc7834; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[5] = c->r[3];
    c->r[14] = 0xcc7580u; f_ccfb70(c);
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc7834; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc7624; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc75c0; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_cc75c4;
L_cc75c0:;
    c->r[9] = 0x0u;
L_cc75c4:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc75e8; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc75e4u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc75e8:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_cc7624; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0xc4u; ST8(ea, c->r[0]); }
L_cc7624:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[7] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[4] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x190u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xcc7790u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    c->r[4] = 0x10u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xcc7830u; f_cd3bf0(c);
    c->r[3] = c->r[5];
L_cc7834:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc732c; }
L_cc783c:;
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_cc784c(Cpu *restrict c) {
    FN_ENTER(0xcc784cu);
L_cc784c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x1d0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[1];
    c->r[1] = c->r[13] + 0x160u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[6] = c->r[0];
    c->r[14] = 0xcc7880u; f_cef728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc9318; }
    c->r[0] = 0xd75318u;
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xcc789cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[4];
    c->r[14] = 0xcc78a8u; f_dae520(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[2] = c->r[9];
    c->r[14] = 0xcc78bcu; f_cef1e4(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0xcc78ccu; f_c74880(c);
    { uint32_t ea = c->r[6] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xb0u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x173u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    c->v.s[16] = LD32(c->r[6] + 152u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_cc7920; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cc791c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] & 0x3u;
L_cc7904:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc7920; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc7904; }
L_cc791c:;
    c->r[8] = 0x0u;
L_cc7920:;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[1] & 0xfu;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    c->r[14] = 0xcc793cu; f_c57e4c(c);
    c->r[0] = c->r[13] + 0xa0u;
    c->r[1] = c->r[4];
    c->r[14] = 0xcc7948u; f_c57f14(c);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cc7b0c; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 160u);
    c->v.s[2] = LD32(c->r[13] + 164u);
    c->v.s[4] = LD32(c->r[13] + 168u);
    c->r[4] = c->r[6];
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[2]);
    ST32(c->r[13] + 136u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc79c8; }
    c->r[14] = 0xcc79c4u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc79c8:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc79f8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc79f8u; f_15efddc(c);
L_cc79f8:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc7a18; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc7a44;
L_cc7a18:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc7a44:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc7ac4; }
    { uint32_t ea = c->r[7] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->r[1] = (c->r[1] >> 8) & 0x1u;
    c->r[2] = c->r[0] + (c->r[1] << 4);
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    goto L_cc7ae4;
L_cc7ac4:;
    c->r[0] = 0xd71788u;
    { uint32_t ea = 0xcc7ad0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
L_cc7ae4:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->v.s[18];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x190u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x160u;
    c->r[14] = 0xcc7b04u; f_ea99ec(c);
    c->r[3] = c->r[0];
    c->r[6] = c->r[4];
L_cc7b0c:;
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_cc7b9c; }
    c->v.s[2] = LD32(c->r[13] + 196u);
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.s[6] = LD32(c->r[13] + 204u);
    { uint32_t ea = c->r[0] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[3];
    c->r[2] = (c->r[0] >> 21) & 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->r[0] = (c->r[0] >> 20) & 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc7b78; }
    c->v.s[0] = c->v.s[2];
    c->r[5] = c->r[1];
    c->r[14] = 0xcc7b74u; f_15efddc(c);
    c->r[1] = c->r[5];
L_cc7b78:;
    c->v.s[20] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc80e8; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cc8120;
L_cc7b9c:;
    { uint32_t ea = c->r[0] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 1; uint32_t r = c->r[0] & 0xf0000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc8ddc; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cc9318; }
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = 0x34000000u;
    c->r[9] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[16];
    c->r[6] = c->r[0] & 0x3u;
    c->r[0] = c->r[7] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_cc7bd0:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc7c20; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc7c10; }
L_cc7bf0:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc7c10; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc7bf0; }
    c->r[8] = 0x0u;
    goto L_cc7c20;
L_cc7c10:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc7c20:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x10u;
    c->r[2] = c->r[10] + 0x20u;
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[0] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_cc7e08; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc7cdc; }
    c->r[14] = 0xcc7cd8u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc7cdc:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc7d0c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc7d0cu; f_15efddc(c);
L_cc7d0c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc7d2c; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc7d54;
L_cc7d2c:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc7d54:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc7e04u; f_ea99ec(c);
    c->r[3] = c->r[0];
L_cc7e08:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc80dc; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[5] = c->r[3];
    c->r[14] = 0xcc7e28u; f_ccfb70(c);
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc80dc; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc7ec8; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc7e64; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_cc7e68;
L_cc7e64:;
    c->r[9] = 0x0u;
L_cc7e68:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc7e8c; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc7e88u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc7e8c:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_cc7ec8; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0xc4u; ST8(ea, c->r[0]); }
L_cc7ec8:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[7] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[4] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x190u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xcc8034u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xcc80d8u; f_cd4e90(c);
    c->r[3] = c->r[5];
L_cc80dc:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc7bd0; }
    goto L_cc9318;
L_cc80e8:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[6] = LD32(c->r[13] + 200u);
    c->v.s[8] = LD32(c->r[13] + 204u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[6] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_cc8120:;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[14] = 0xcc813cu; f_cfcce8(c);
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x173u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xf0u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc8794; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[3] = c->r[4];
    if (COND_EQ) { goto L_cc9318; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[4] = 0x10u;
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_cc8178:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc81c8; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc81b8; }
L_cc8198:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc81b8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc8198; }
    c->r[8] = 0x0u;
    goto L_cc81c8;
L_cc81b8:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc81c8:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + 0x20u;
    c->r[9] = c->r[10] + 0x8u;
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc83a0; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc8284; }
    c->r[14] = 0xcc8280u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc8284:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc82b4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc82b4u; f_15efddc(c);
L_cc82b4:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc82d0; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc82f8;
L_cc82d0:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc82f8:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[6]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc839cu; f_ea99ec(c);
    c->r[3] = c->r[0];
L_cc83a0:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc8788; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xcc83c4u; f_ccfb70(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc8788; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc8468; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc8400; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_cc8404;
L_cc8400:;
    c->r[4] = 0x0u;
L_cc8404:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc8428; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc8424u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc8428:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[4] = 0x10u;
    if (COND_EQ) { goto L_cc8468; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_cc8468:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[3] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[4] & (c->r[1] >> 21);
    c->r[1] = c->r[4] & (c->r[1] >> 20);
    c->r[4] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[4] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[4] + (c->r[2] << 4);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0x190u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->r[14] = 0xcc85c8u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc8678; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    if (COND_NE) { goto L_cc86b0; }
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0xb0u;
    c->r[1] = c->r[5];
    goto L_cc86bc;
L_cc8678:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xcc8690u; f_cfd42c(c);
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0xcc86a4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_cc86c4;
L_cc86b0:;
    c->r[5] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[5];
L_cc86bc:;
    c->r[14] = 0xcc86c0u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc86c4:;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcc8780u; f_cd4e90(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = 0x10u;
L_cc8788:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc8178; }
    goto L_cc9318;
L_cc8794:;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[3] = c->r[4];
    if (COND_EQ) { goto L_cc9318; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[10] = 0x0u;
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_cc87c0:;
    c->r[4] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc8814; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc8804; }
L_cc87e0:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc8804; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc87e0; }
    c->r[8] = 0x0u;
    goto L_cc8814;
L_cc8804:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc8814:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x10u;
    c->r[2] = c->r[4] + 0x20u;
    c->r[9] = c->r[4] + 0x8u;
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[0] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[10]); }
    if (COND_EQ) { goto L_cc89f0; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[10]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc88cc; }
    c->r[14] = 0xcc88c8u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc88cc:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc88fc; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc88fcu; f_15efddc(c);
L_cc88fc:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc8918; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc8940;
L_cc8918:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc8940:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc89ecu; f_ea99ec(c);
    c->r[3] = c->r[0];
L_cc89f0:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc8dd0; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xcc8a14u; f_ccfb70(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc8dd0; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc8ab8; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc8a54; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_cc8a58;
L_cc8a54:;
    c->r[10] = 0x0u;
L_cc8a58:;
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc8a7c; }
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc8a78u; f_a82674(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc8a7c:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_cc8ab8; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_cc8ab8:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[4] + 0x60u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[3] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[4] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[5] & (c->r[1] >> 21);
    c->r[1] = c->r[5] & (c->r[1] >> 20);
    c->r[5] = c->r[4] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[4] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[2] << 4);
    c->r[5] = c->r[13] + 0x190u;
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[5];
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->r[14] = 0xcc8c20u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc8ccc; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc8cf8; }
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0xb0u;
    c->r[1] = c->r[5];
    goto L_cc8d08;
L_cc8ccc:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xcc8ce4u; f_cfd42c(c);
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    c->r[1] = c->r[5];
    goto L_cc8d08;
L_cc8cf8:;
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[5];
L_cc8d08:;
    c->r[14] = 0xcc8d0cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcc8dccu; f_cd6cd4(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
L_cc8dd0:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc87c0; }
    goto L_cc9318;
L_cc8ddc:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cc9318; }
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = 0x34000000u;
    c->r[4] = 0x10u;
    c->r[9] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[16];
    c->r[6] = c->r[0] & 0x3u;
    c->r[0] = c->r[7] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_cc8e08:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc8e58; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc8e48; }
L_cc8e28:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc8e48; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc8e28; }
    c->r[8] = 0x0u;
    goto L_cc8e58;
L_cc8e48:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc8e58:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + 0x20u;
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_cc903c; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc8f10; }
    c->r[14] = 0xcc8f0cu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc8f10:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc8f40; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc8f40u; f_15efddc(c);
L_cc8f40:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc8f5c; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc8f84;
L_cc8f5c:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc8f84:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc9034u; f_ea99ec(c);
    c->r[3] = c->r[0];
    c->r[4] = 0x10u;
L_cc903c:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc9310; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[5] = c->r[3];
    c->r[14] = 0xcc905cu; f_ccfb70(c);
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc9310; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc9100; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc909c; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_cc90a0;
L_cc909c:;
    c->r[9] = 0x0u;
L_cc90a0:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc90c4; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc90c0u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc90c4:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_cc9100; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0xc4u; ST8(ea, c->r[0]); }
L_cc9100:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[7] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[4] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x190u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xcc926cu; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    c->r[4] = 0x10u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xcc930cu; f_cd6cd4(c);
    c->r[3] = c->r[5];
L_cc9310:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc8e08; }
L_cc9318:;
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_cc9328(Cpu *restrict c) {
    FN_ENTER(0xcc9328u);
L_cc9328:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x1d0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[1];
    c->r[1] = c->r[13] + 0x160u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[6] = c->r[0];
    c->r[14] = 0xcc935cu; f_cef728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ccae04; }
    c->r[0] = 0xd7383cu;
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xcc9378u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[4];
    c->r[14] = 0xcc9384u; f_dae520(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[2] = c->r[9];
    c->r[14] = 0xcc9398u; f_cef1e4(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0xcc93a8u; f_c74880(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[14] = 0xcc93b8u; f_c7491c(c);
    { uint32_t ea = c->r[6] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xb0u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x173u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    c->v.s[16] = LD32(c->r[6] + 152u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_cc940c; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cc9408; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x3u;
L_cc93f0:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc940c; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc93f0; }
L_cc9408:;
    c->r[8] = 0x0u;
L_cc940c:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[1] & 0xfu;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    c->r[14] = 0xcc9428u; f_c57e4c(c);
    c->r[0] = c->r[13] + 0xa0u;
    c->r[1] = c->r[4];
    c->r[14] = 0xcc9434u; f_c57f14(c);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cc95f8; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 160u);
    c->v.s[2] = LD32(c->r[13] + 164u);
    c->v.s[4] = LD32(c->r[13] + 168u);
    c->r[4] = c->r[6];
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[2]);
    ST32(c->r[13] + 136u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc94b4; }
    c->r[14] = 0xcc94b0u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc94b4:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc94e4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc94e4u; f_15efddc(c);
L_cc94e4:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc9504; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc9530;
L_cc9504:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc9530:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc95b0; }
    { uint32_t ea = c->r[7] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->r[1] = (c->r[1] >> 8) & 0x1u;
    c->r[2] = c->r[0] + (c->r[1] << 4);
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    goto L_cc95d0;
L_cc95b0:;
    c->r[0] = 0xd6fc9cu;
    { uint32_t ea = 0xcc95bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
L_cc95d0:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->v.s[18];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x190u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x160u;
    c->r[14] = 0xcc95f0u; f_ea99ec(c);
    c->r[3] = c->r[0];
    c->r[6] = c->r[4];
L_cc95f8:;
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_cc9688; }
    c->v.s[2] = LD32(c->r[13] + 196u);
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.s[6] = LD32(c->r[13] + 204u);
    { uint32_t ea = c->r[0] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[3];
    c->r[2] = (c->r[0] >> 21) & 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->r[0] = (c->r[0] >> 20) & 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc9664; }
    c->v.s[0] = c->v.s[2];
    c->r[5] = c->r[1];
    c->r[14] = 0xcc9660u; f_15efddc(c);
    c->r[1] = c->r[5];
L_cc9664:;
    c->v.s[20] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc9bd4; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cc9c0c;
L_cc9688:;
    { uint32_t ea = c->r[0] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 1; uint32_t r = c->r[0] & 0xf0000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cca8c8; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_ccae04; }
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = 0x34000000u;
    c->r[9] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[16];
    c->r[6] = c->r[0] & 0x3u;
    c->r[0] = c->r[7] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_cc96bc:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc970c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc96fc; }
L_cc96dc:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc96fc; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc96dc; }
    c->r[8] = 0x0u;
    goto L_cc970c;
L_cc96fc:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc970c:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x10u;
    c->r[2] = c->r[10] + 0x20u;
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[0] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_cc98f4; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc97c8; }
    c->r[14] = 0xcc97c4u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc97c8:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc97f8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc97f8u; f_15efddc(c);
L_cc97f8:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc9818; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc9840;
L_cc9818:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc9840:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc98f0u; f_ea99ec(c);
    c->r[3] = c->r[0];
L_cc98f4:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cc9bc8; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[5] = c->r[3];
    c->r[14] = 0xcc9914u; f_ccfb70(c);
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cc9bc8; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc99b4; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc9950; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_cc9954;
L_cc9950:;
    c->r[9] = 0x0u;
L_cc9954:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc9978; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc9974u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc9978:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_cc99b4; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0xc4u; ST8(ea, c->r[0]); }
L_cc99b4:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[7] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[4] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x190u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xcc9b20u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xcc9bc4u; f_cd7f50(c);
    c->r[3] = c->r[5];
L_cc9bc8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc96bc; }
    goto L_ccae04;
L_cc9bd4:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[6] = LD32(c->r[13] + 200u);
    c->v.s[8] = LD32(c->r[13] + 204u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[6] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_cc9c0c:;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[14] = 0xcc9c28u; f_cfcce8(c);
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x173u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xf0u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cca280; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[3] = c->r[4];
    if (COND_EQ) { goto L_ccae04; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[4] = 0x10u;
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_cc9c64:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc9cb4; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cc9ca4; }
L_cc9c84:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc9ca4; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cc9c84; }
    c->r[8] = 0x0u;
    goto L_cc9cb4;
L_cc9ca4:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cc9cb4:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + 0x20u;
    c->r[9] = c->r[10] + 0x8u;
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc9e8c; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc9d70; }
    c->r[14] = 0xcc9d6cu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cc9d70:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cc9da0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcc9da0u; f_15efddc(c);
L_cc9da0:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cc9dbc; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cc9de4;
L_cc9dbc:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cc9de4:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[6]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcc9e88u; f_ea99ec(c);
    c->r[3] = c->r[0];
L_cc9e8c:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cca274; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xcc9eb0u; f_ccfb70(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cca274; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cc9f54; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cc9eec; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_cc9ef0;
L_cc9eec:;
    c->r[4] = 0x0u;
L_cc9ef0:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cc9f14; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[14] = 0xcc9f10u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cc9f14:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[4] = 0x10u;
    if (COND_EQ) { goto L_cc9f54; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_cc9f54:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[3] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[4] & (c->r[1] >> 21);
    c->r[1] = c->r[4] & (c->r[1] >> 20);
    c->r[4] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[4] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[4] + (c->r[2] << 4);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0x190u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->r[14] = 0xcca0b4u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cca164; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    if (COND_NE) { goto L_cca19c; }
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0xb0u;
    c->r[1] = c->r[5];
    goto L_cca1a8;
L_cca164:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xcca17cu; f_cfd42c(c);
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0xcca190u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_cca1b0;
L_cca19c:;
    c->r[5] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[5];
L_cca1a8:;
    c->r[14] = 0xcca1acu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cca1b0:;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcca26cu; f_cd7f50(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = 0x10u;
L_cca274:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cc9c64; }
    goto L_ccae04;
L_cca280:;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[3] = c->r[4];
    if (COND_EQ) { goto L_ccae04; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[10] = 0x0u;
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_cca2ac:;
    c->r[4] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cca300; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cca2f0; }
L_cca2cc:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cca2f0; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cca2cc; }
    c->r[8] = 0x0u;
    goto L_cca300;
L_cca2f0:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cca300:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x10u;
    c->r[2] = c->r[4] + 0x20u;
    c->r[9] = c->r[4] + 0x8u;
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[0] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[10]); }
    if (COND_EQ) { goto L_cca4dc; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[10]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cca3b8; }
    c->r[14] = 0xcca3b4u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cca3b8:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cca3e8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcca3e8u; f_15efddc(c);
L_cca3e8:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cca404; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cca42c;
L_cca404:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cca42c:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcca4d8u; f_ea99ec(c);
    c->r[3] = c->r[0];
L_cca4dc:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cca8bc; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xcca500u; f_ccfb70(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cca8bc; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cca5a4; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cca540; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_cca544;
L_cca540:;
    c->r[10] = 0x0u;
L_cca544:;
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cca568; }
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[14] = 0xcca564u; f_a82674(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cca568:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_cca5a4; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_cca5a4:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[4] + 0x60u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[3] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[4] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[5] & (c->r[1] >> 21);
    c->r[1] = c->r[5] & (c->r[1] >> 20);
    c->r[5] = c->r[4] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[4] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[2] << 4);
    c->r[5] = c->r[13] + 0x190u;
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[5];
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->r[14] = 0xcca70cu; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cca7b8; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cca7e4; }
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0xb0u;
    c->r[1] = c->r[5];
    goto L_cca7f4;
L_cca7b8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xcca7d0u; f_cfd42c(c);
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    c->r[1] = c->r[5];
    goto L_cca7f4;
L_cca7e4:;
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[5];
L_cca7f4:;
    c->r[14] = 0xcca7f8u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcca8b8u; f_cda090(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
L_cca8bc:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cca2ac; }
    goto L_ccae04;
L_cca8c8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_ccae04; }
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = 0x34000000u;
    c->r[4] = 0x10u;
    c->r[9] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[16];
    c->r[6] = c->r[0] & 0x3u;
    c->r[0] = c->r[7] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_cca8f4:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cca944; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cca934; }
L_cca914:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cca934; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cca914; }
    c->r[8] = 0x0u;
    goto L_cca944;
L_cca934:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cca944:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + 0x20u;
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_ccab28; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cca9fc; }
    c->r[14] = 0xcca9f8u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cca9fc:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccaa2c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xccaa2cu; f_15efddc(c);
L_ccaa2c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccaa48; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ccaa70;
L_ccaa48:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ccaa70:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xccab20u; f_ea99ec(c);
    c->r[3] = c->r[0];
    c->r[4] = 0x10u;
L_ccab28:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_ccadfc; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[5] = c->r[3];
    c->r[14] = 0xccab48u; f_ccfb70(c);
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ccadfc; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccabec; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccab88; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_ccab8c;
L_ccab88:;
    c->r[9] = 0x0u;
L_ccab8c:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_ccabb0; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xccabacu; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccabb0:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_ccabec; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0xc4u; ST8(ea, c->r[0]); }
L_ccabec:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[7] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[4] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x190u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xccad58u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    c->r[4] = 0x10u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xccadf8u; f_cda090(c);
    c->r[3] = c->r[5];
L_ccadfc:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cca8f4; }
L_ccae04:;
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ccae14(Cpu *restrict c) {
    FN_ENTER(0xccae14u);
L_ccae14:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x1d0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[1];
    c->r[1] = c->r[13] + 0x160u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[6] = c->r[0];
    c->r[14] = 0xccae48u; f_cef728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ccc8f0; }
    c->r[0] = 0xd71d50u;
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xccae64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[4];
    c->r[14] = 0xccae70u; f_dae520(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[2] = c->r[9];
    c->r[14] = 0xccae84u; f_cef1e4(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0xccae94u; f_c74880(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[14] = 0xccaea4u; f_c7491c(c);
    { uint32_t ea = c->r[6] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xb0u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x173u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    c->v.s[16] = LD32(c->r[6] + 152u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_ccaef8; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_ccaef4; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x3u;
L_ccaedc:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccaef8; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_ccaedc; }
L_ccaef4:;
    c->r[8] = 0x0u;
L_ccaef8:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[1] & 0xfu;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    c->r[14] = 0xccaf14u; f_c57e4c(c);
    c->r[0] = c->r[13] + 0xa0u;
    c->r[1] = c->r[4];
    c->r[14] = 0xccaf20u; f_c57f14(c);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ccb0e4; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 160u);
    c->v.s[2] = LD32(c->r[13] + 164u);
    c->v.s[4] = LD32(c->r[13] + 168u);
    c->r[4] = c->r[6];
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[2]);
    ST32(c->r[13] + 136u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccafa0; }
    c->r[14] = 0xccaf9cu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_ccafa0:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccafd0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xccafd0u; f_15efddc(c);
L_ccafd0:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccaff0; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ccb01c;
L_ccaff0:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ccb01c:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccb09c; }
    { uint32_t ea = c->r[7] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->r[1] = (c->r[1] >> 8) & 0x1u;
    c->r[2] = c->r[0] + (c->r[1] << 4);
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    goto L_ccb0bc;
L_ccb09c:;
    c->r[0] = 0xd6e1b0u;
    { uint32_t ea = 0xccb0a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
L_ccb0bc:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->v.s[18];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x190u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x160u;
    c->r[14] = 0xccb0dcu; f_ea99ec(c);
    c->r[3] = c->r[0];
    c->r[6] = c->r[4];
L_ccb0e4:;
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_ccb174; }
    c->v.s[2] = LD32(c->r[13] + 196u);
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.s[6] = LD32(c->r[13] + 204u);
    { uint32_t ea = c->r[0] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[3];
    c->r[2] = (c->r[0] >> 21) & 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->r[0] = (c->r[0] >> 20) & 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccb150; }
    c->v.s[0] = c->v.s[2];
    c->r[5] = c->r[1];
    c->r[14] = 0xccb14cu; f_15efddc(c);
    c->r[1] = c->r[5];
L_ccb150:;
    c->v.s[20] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccb6c0; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_ccb6f8;
L_ccb174:;
    { uint32_t ea = c->r[0] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 1; uint32_t r = c->r[0] & 0xf0000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccc3b4; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_ccc8f0; }
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = 0x34000000u;
    c->r[9] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[16];
    c->r[6] = c->r[0] & 0x3u;
    c->r[0] = c->r[7] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_ccb1a8:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccb1f8; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ccb1e8; }
L_ccb1c8:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccb1e8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ccb1c8; }
    c->r[8] = 0x0u;
    goto L_ccb1f8;
L_ccb1e8:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_ccb1f8:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x10u;
    c->r[2] = c->r[10] + 0x20u;
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[0] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_ccb3e0; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccb2b4; }
    c->r[14] = 0xccb2b0u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_ccb2b4:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccb2e4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xccb2e4u; f_15efddc(c);
L_ccb2e4:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccb304; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ccb32c;
L_ccb304:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ccb32c:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xccb3dcu; f_ea99ec(c);
    c->r[3] = c->r[0];
L_ccb3e0:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_ccb6b4; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[5] = c->r[3];
    c->r[14] = 0xccb400u; f_ccfb70(c);
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ccb6b4; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccb4a0; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccb43c; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_ccb440;
L_ccb43c:;
    c->r[9] = 0x0u;
L_ccb440:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_ccb464; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xccb460u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccb464:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_ccb4a0; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0xc4u; ST8(ea, c->r[0]); }
L_ccb4a0:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[7] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[4] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x190u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xccb60cu; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xccb6b0u; f_cdb7c8(c);
    c->r[3] = c->r[5];
L_ccb6b4:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_ccb1a8; }
    goto L_ccc8f0;
L_ccb6c0:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[6] = LD32(c->r[13] + 200u);
    c->v.s[8] = LD32(c->r[13] + 204u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[6] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_ccb6f8:;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[14] = 0xccb714u; f_cfcce8(c);
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x173u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xf0u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccbd6c; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[3] = c->r[4];
    if (COND_EQ) { goto L_ccc8f0; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[4] = 0x10u;
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_ccb750:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccb7a0; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ccb790; }
L_ccb770:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccb790; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ccb770; }
    c->r[8] = 0x0u;
    goto L_ccb7a0;
L_ccb790:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_ccb7a0:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + 0x20u;
    c->r[9] = c->r[10] + 0x8u;
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccb978; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccb85c; }
    c->r[14] = 0xccb858u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_ccb85c:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccb88c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xccb88cu; f_15efddc(c);
L_ccb88c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccb8a8; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ccb8d0;
L_ccb8a8:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ccb8d0:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[6]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xccb974u; f_ea99ec(c);
    c->r[3] = c->r[0];
L_ccb978:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_ccbd60; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xccb99cu; f_ccfb70(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ccbd60; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccba40; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccb9d8; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_ccb9dc;
L_ccb9d8:;
    c->r[4] = 0x0u;
L_ccb9dc:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_ccba00; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[14] = 0xccb9fcu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccba00:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[4] = 0x10u;
    if (COND_EQ) { goto L_ccba40; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_ccba40:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[3] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[4] & (c->r[1] >> 21);
    c->r[1] = c->r[4] & (c->r[1] >> 20);
    c->r[4] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[4] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[4] + (c->r[2] << 4);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0x190u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->r[14] = 0xccbba0u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ccbc50; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    if (COND_NE) { goto L_ccbc88; }
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0xb0u;
    c->r[1] = c->r[5];
    goto L_ccbc94;
L_ccbc50:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xccbc68u; f_cfd42c(c);
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0xccbc7cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_ccbc9c;
L_ccbc88:;
    c->r[5] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[5];
L_ccbc94:;
    c->r[14] = 0xccbc98u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccbc9c:;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xccbd58u; f_cdb7c8(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = 0x10u;
L_ccbd60:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_ccb750; }
    goto L_ccc8f0;
L_ccbd6c:;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[3] = c->r[4];
    if (COND_EQ) { goto L_ccc8f0; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[10] = 0x0u;
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_ccbd98:;
    c->r[4] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccbdec; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ccbddc; }
L_ccbdb8:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccbddc; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ccbdb8; }
    c->r[8] = 0x0u;
    goto L_ccbdec;
L_ccbddc:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_ccbdec:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x10u;
    c->r[2] = c->r[4] + 0x20u;
    c->r[9] = c->r[4] + 0x8u;
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[0] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[10]); }
    if (COND_EQ) { goto L_ccbfc8; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[10]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccbea4; }
    c->r[14] = 0xccbea0u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_ccbea4:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccbed4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xccbed4u; f_15efddc(c);
L_ccbed4:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccbef0; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ccbf18;
L_ccbef0:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ccbf18:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xccbfc4u; f_ea99ec(c);
    c->r[3] = c->r[0];
L_ccbfc8:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_ccc3a8; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xccbfecu; f_ccfb70(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ccc3a8; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccc090; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccc02c; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_ccc030;
L_ccc02c:;
    c->r[10] = 0x0u;
L_ccc030:;
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_ccc054; }
    c->r[0] = c->r[10];
    c->r[1] = 0x10u;
    c->r[14] = 0xccc050u; f_a82674(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccc054:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ccc090; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_ccc090:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[4] + 0x60u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[3] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[4] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[5] & (c->r[1] >> 21);
    c->r[1] = c->r[5] & (c->r[1] >> 20);
    c->r[5] = c->r[4] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[4] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[2] << 4);
    c->r[5] = c->r[13] + 0x190u;
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[5];
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->r[14] = 0xccc1f8u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ccc2a4; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ccc2d0; }
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0xb0u;
    c->r[1] = c->r[5];
    goto L_ccc2e0;
L_ccc2a4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xccc2bcu; f_cfd42c(c);
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    c->r[1] = c->r[5];
    goto L_ccc2e0;
L_ccc2d0:;
    c->r[0] = c->r[5];
    c->r[5] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[5];
L_ccc2e0:;
    c->r[14] = 0xccc2e4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xccc3a4u; f_cdd748(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
L_ccc3a8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_ccbd98; }
    goto L_ccc8f0;
L_ccc3b4:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_ccc8f0; }
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = 0x34000000u;
    c->r[4] = 0x10u;
    c->r[9] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[16];
    c->r[6] = c->r[0] & 0x3u;
    c->r[0] = c->r[7] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_ccc3e0:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccc430; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ccc420; }
L_ccc400:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccc420; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ccc400; }
    c->r[8] = 0x0u;
    goto L_ccc430;
L_ccc420:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_ccc430:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + 0x20u;
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_ccc614; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccc4e8; }
    c->r[14] = 0xccc4e4u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_ccc4e8:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccc518; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xccc518u; f_15efddc(c);
L_ccc518:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccc534; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ccc55c;
L_ccc534:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ccc55c:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xccc60cu; f_ea99ec(c);
    c->r[3] = c->r[0];
    c->r[4] = 0x10u;
L_ccc614:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_ccc8e8; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[5] = c->r[3];
    c->r[14] = 0xccc634u; f_ccfb70(c);
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ccc8e8; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccc6d8; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccc674; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_ccc678;
L_ccc674:;
    c->r[9] = 0x0u;
L_ccc678:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_ccc69c; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xccc698u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccc69c:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_ccc6d8; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0xc4u; ST8(ea, c->r[0]); }
L_ccc6d8:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[7] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[4] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x190u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xccc844u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    c->r[4] = 0x10u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xccc8e4u; f_cdd748(c);
    c->r[3] = c->r[5];
L_ccc8e8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_ccc3e0; }
L_ccc8f0:;
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ccc900(Cpu *restrict c) {
    FN_ENTER(0xccc900u);
L_ccc900:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x1d0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[10] = c->r[2];
    c->r[5] = c->r[1];
    c->r[1] = c->r[13] + 0x160u;
    c->r[2] = 0x0u;
    c->r[9] = c->r[3];
    c->r[7] = c->r[0];
    c->r[14] = 0xccc934u; f_cef728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ccd7fc; }
    c->r[0] = 0xd70264u;
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xccc950u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[5];
    c->r[14] = 0xccc95cu; f_dae520(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    c->r[14] = 0xccc970u; f_cef1e4(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0xccc980u; f_c74880(c);
    { uint32_t ea = c->r[7] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0xb0u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x173u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    c->v.s[16] = LD32(c->r[7] + 152u);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_ccc9d4; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_ccc9d0; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] & 0x3u;
L_ccc9b8:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccc9d4; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_ccc9b8; }
L_ccc9d0:;
    c->r[8] = 0x0u;
L_ccc9d4:;
    c->r[0] = c->r[1] & 0xfu;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    c->r[14] = 0xccc9f4u; f_c57e4c(c);
    c->r[0] = c->r[13] + 0xa0u;
    c->r[1] = c->r[5];
    c->r[14] = 0xccca00u; f_c57f14(c);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cccbc0; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 160u);
    c->v.s[2] = LD32(c->r[13] + 164u);
    c->v.s[4] = LD32(c->r[13] + 168u);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[2]);
    ST32(c->r[13] + 136u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccca7c; }
    c->r[14] = 0xccca78u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_ccca7c:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cccaac; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcccaacu; f_15efddc(c);
L_cccaac:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cccacc; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cccaf8;
L_cccacc:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cccaf8:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cccb7c; }
    { uint32_t ea = c->r[1] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->r[1] = (c->r[1] >> 8) & 0x1u;
    c->r[2] = c->r[0] + (c->r[1] << 4);
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    goto L_cccb9c;
L_cccb7c:;
    c->r[0] = 0xd6c6d0u;
    { uint32_t ea = 0xcccb88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
L_cccb9c:;
    c->v.s[0] = c->v.s[18];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x190u;
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x160u;
    c->r[14] = 0xcccbbcu; f_ea99ec(c);
    c->r[5] = c->r[0];
L_cccbc0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cccc3c; }
    c->v.s[2] = LD32(c->r[13] + 196u);
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.s[6] = LD32(c->r[13] + 204u);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    { uint32_t ea = c->r[0] + 0x174u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cccc14; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcccc14u; f_15efddc(c);
L_cccc14:;
    c->v.s[20] = 0x34000000u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccd16c; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_ccd1a4;
L_cccc3c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_ccd7fc; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = 0x3f800000u;
    c->v.s[24] = 0x34000000u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    c->v.f[22] = c->v.f[20] - c->v.f[16];
    c->r[6] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_cccc6c:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccccbc; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ccccac; }
L_cccc8c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccccac; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cccc8c; }
    c->r[8] = 0x0u;
    goto L_ccccbc;
L_ccccac:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_ccccbc:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[10] + 0x20u;
    c->r[4] = c->r[10] + 0x8u;
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_ccce90; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[7]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cccd74; }
    c->r[14] = 0xcccd70u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cccd74:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cccda4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcccda4u; f_15efddc(c);
L_cccda4:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cccdc4; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cccdec;
L_cccdc4:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cccdec:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x84u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[7]); }
    { uint32_t r = c->r[2] * c->r[1] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xccce8cu; f_ea99ec(c);
    c->r[5] = c->r[0];
L_ccce90:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ccd160; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[3] = c->r[5];
    c->r[14] = 0xccceb0u; f_ccfb70(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ccd160; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cccf5c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cccee8; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_ccceec;
L_cccee8:;
    c->r[9] = 0x0u;
L_ccceec:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cccf18; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[7] = c->r[3];
    c->r[14] = 0xcccf10u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[7];
L_cccf18:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_EQ) { goto L_cccf5c; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_cccf5c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[7]); }
    c->r[7] = 0x10u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[12] = 0x0u;
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[7] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[4] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 4);
    c->r[7] = 0x0u;
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x190u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xccd0c4u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[10];
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xccd160u; f_cdec54(c);
L_ccd160:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cccc6c; }
    goto L_ccd7fc;
L_ccd16c:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[6] = LD32(c->r[13] + 200u);
    c->v.s[8] = LD32(c->r[13] + 204u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_ccd1a4:;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[3]); }
    c->r[14] = 0xccd1c0u; f_cfcce8(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_ccd7fc; }
    c->v.s[22] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] & 0x100000u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] & 0x200000u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[9] = c->r[0] & 0x3u;
    c->r[0] = c->r[6] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
L_ccd1f8:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccd248; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ccd238; }
L_ccd218:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccd238; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ccd218; }
    c->r[8] = 0x0u;
    goto L_ccd248;
L_ccd238:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_ccd248:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[10] + 0x20u;
    c->r[7] = c->r[10] + 0x8u;
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_ccd424; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccd300; }
    c->r[14] = 0xccd2fcu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_ccd300:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccd330; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xccd330u; f_15efddc(c);
L_ccd330:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccd34c; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ccd374;
L_ccd34c:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ccd374:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[2] * c->r[1] + c->r[6]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xccd420u; f_ea99ec(c);
    c->r[5] = c->r[0];
L_ccd424:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ccd7f4; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[3] = c->r[5];
    c->r[14] = 0xccd444u; f_ccfb70(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ccd7f4; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccd4e0; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccd47c; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_ccd480;
L_ccd47c:;
    c->r[4] = 0x0u;
L_ccd480:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_ccd4a4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[14] = 0xccd4a0u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccd4a4:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ccd4e0; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_ccd4e0:;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    c->r[6] = 0x10u;
    c->r[5] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[3] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[6] & (c->r[1] >> 21);
    c->r[1] = c->r[6] & (c->r[1] >> 20);
    c->r[6] = c->r[10] + 0xc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[7] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[6] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[6] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x50u;
    c->r[7] = c->r[13] + 0x190u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->r[14] = 0xccd650u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ccd704; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[7] = c->r[13] + 0x120u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[1];
    if (COND_EQ) { c->r[1] = c->r[7]; }
    if (COND_EQ) { c->r[2] = c->r[13] + 0xb0u; }
    if (COND_NE) { c->r[1] = c->r[13] + 0xb0u; }
    if (COND_NE) { c->r[2] = c->r[7]; }
    goto L_ccd734;
L_ccd704:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[6];
    c->r[6] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[6];
    c->r[14] = 0xccd720u; f_cfd42c(c);
    c->r[0] = c->r[7];
    c->r[7] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    c->r[6] = c->r[5];
    c->r[1] = c->r[7];
L_ccd734:;
    c->r[14] = 0xccd738u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xccd7f4u; f_cdec54(c);
L_ccd7f4:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_ccd1f8; }
L_ccd7fc:;
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ccd814(Cpu *restrict c) {
    FN_ENTER(0xccd814u);
L_ccd814:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x1d0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[2];
    c->r[5] = c->r[1];
    c->r[1] = c->r[13] + 0x160u;
    c->r[2] = 0x0u;
    c->r[10] = c->r[3];
    c->r[7] = c->r[0];
    c->r[14] = 0xccd848u; f_cef728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cce710; }
    c->r[0] = 0xd6f34cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xccd868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[5];
    c->r[14] = 0xccd874u; f_dae520(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0xccd888u; f_cef1e4(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0xccd898u; f_c74880(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    c->r[14] = 0xccd8acu; f_c7491c(c);
    { uint32_t ea = c->r[7] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xb0u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = LD32(c->r[7] + 152u);
    { uint32_t ea = c->r[0] + 0x173u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[10]); }
    if (COND_EQ) { goto L_ccd908; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_ccd900; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x3u;
L_ccd8e8:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccd90c; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_ccd8e8; }
L_ccd900:;
    c->r[8] = 0x0u;
    goto L_ccd90c;
L_ccd908:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
L_ccd90c:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[1] & 0xfu;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[4]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    c->r[14] = 0xccd928u; f_c57e4c(c);
    c->r[0] = c->r[13] + 0xa0u;
    c->r[1] = c->r[5];
    c->r[14] = 0xccd934u; f_c57f14(c);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ccdaec; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
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
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[2]);
    ST32(c->r[13] + 136u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccd9ac; }
    c->r[14] = 0xccd9a8u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_ccd9ac:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccd9dc; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xccd9dcu; f_15efddc(c);
L_ccd9dc:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccd9fc; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ccda28;
L_ccd9fc:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ccda28:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccdaa8; }
    { uint32_t ea = c->r[7] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->r[1] = (c->r[1] >> 8) & 0x1u;
    c->r[2] = c->r[0] + (c->r[1] << 4);
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    goto L_ccdac8;
L_ccdaa8:;
    c->r[0] = 0xd6b7a4u;
    { uint32_t ea = 0xccdab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
L_ccdac8:;
    c->v.s[0] = c->v.s[18];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x190u;
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x160u;
    c->r[14] = 0xccdae8u; f_ea99ec(c);
    c->r[5] = c->r[0];
L_ccdaec:;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_ccdb5c; }
    c->v.s[2] = LD32(c->r[13] + 196u);
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.s[6] = LD32(c->r[13] + 204u);
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x174u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccdb38; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xccdb38u; f_15efddc(c);
L_ccdb38:;
    c->v.s[20] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cce080; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cce0b8;
L_ccdb5c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cce710; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = 0x3f800000u;
    c->v.s[24] = 0x34000000u;
    c->r[9] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[16];
    c->r[7] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_ccdb88:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccdbd8; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ccdbc8; }
L_ccdba8:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccdbc8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ccdba8; }
    c->r[8] = 0x0u;
    goto L_ccdbd8;
L_ccdbc8:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_ccdbd8:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[10] + 0x20u;
    c->r[4] = c->r[10] + 0x8u;
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_ccddb4; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccdc90; }
    c->r[14] = 0xccdc8cu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_ccdc90:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ccdcc0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xccdcc0u; f_15efddc(c);
L_ccdcc0:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccdce0; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ccdd08;
L_ccdce0:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ccdd08:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[6]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xccddb0u; f_ea99ec(c);
    c->r[5] = c->r[0];
L_ccddb4:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_cce074; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[3] = c->r[5];
    c->r[14] = 0xccddd4u; f_ccfb70(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cce074; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccde70; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccde0c; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_ccde10;
L_ccde0c:;
    c->r[9] = 0x0u;
L_ccde10:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_ccde34; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xccde30u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccde34:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ccde70; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_ccde70:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[3] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[6] & (c->r[1] >> 21);
    c->r[1] = c->r[6] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[10] + 0xc0u;
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[4] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[4] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x190u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->r[14] = 0xccdfd8u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xcce074u; f_cdfb40(c);
L_cce074:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_ccdb88; }
    goto L_cce710;
L_cce080:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[6] = LD32(c->r[13] + 200u);
    c->v.s[8] = LD32(c->r[13] + 204u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_cce0b8:;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[14] = 0xcce0d8u; f_cfcce8(c);
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cce710; }
    c->v.s[22] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] & 0x100000u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] & 0x200000u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[9] = c->r[0] & 0x3u;
    c->r[0] = c->r[7] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_cce10c:;
    c->r[10] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cce15c; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cce14c; }
L_cce12c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cce14c; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cce12c; }
    c->r[8] = 0x0u;
    goto L_cce15c;
L_cce14c:;
    c->r[8] = c->r[0];
    /* pld */
    /* pld */
    /* pld */
L_cce15c:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[10] + 0x20u;
    c->r[6] = c->r[10] + 0x8u;
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_cce338; }
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 128u, c->v.s[6]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cce214; }
    c->r[14] = 0xcce210u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cce214:;
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cce244; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcce244u; f_15efddc(c);
L_cce244:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cce260; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cce288;
L_cce260:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_cce288:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[2] * c->r[1] + c->r[7]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x80u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xcce334u; f_ea99ec(c);
    c->r[5] = c->r[0];
L_cce338:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_cce708; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xf0u;
    c->r[3] = c->r[5];
    c->r[14] = 0xcce358u; f_ccfb70(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cce708; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cce3f4; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cce390; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_cce394;
L_cce390:;
    c->r[4] = 0x0u;
L_cce394:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_cce3b8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[14] = 0xcce3b4u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cce3b8:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_cce3f4; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_cce3f4:;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    c->r[7] = 0x10u;
    c->r[5] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[10] + 0xc0u;
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[7] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[6] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[6] + (c->r[2] << 4);
    c->r[6] = c->r[13] + 0x190u;
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[6];
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->r[14] = 0xcce564u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cce618; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[6] = c->r[13] + 0x120u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[1];
    if (COND_EQ) { c->r[1] = c->r[6]; }
    if (COND_EQ) { c->r[2] = c->r[13] + 0xb0u; }
    if (COND_NE) { c->r[1] = c->r[13] + 0xb0u; }
    if (COND_NE) { c->r[2] = c->r[6]; }
    goto L_cce648;
L_cce618:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[7];
    c->r[7] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[7];
    c->r[14] = 0xcce634u; f_cfd42c(c);
    c->r[0] = c->r[6];
    c->r[6] = c->r[13] + 0x120u;
    c->r[2] = c->r[7];
    c->r[7] = c->r[5];
    c->r[1] = c->r[6];
L_cce648:;
    c->r[14] = 0xcce64cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0xcce708u; f_cdfb40(c);
L_cce708:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_cce10c; }
L_cce710:;
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_cce728(Cpu *restrict c) {
    FN_ENTER(0xcce728u);
L_cce728:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0xa0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[7] = c->r[2];
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0xcce750u; f_c5ca24(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_ccf19c; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x118u;
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[13] + 0x8cu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[10] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x174u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x172u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 4);
    c->r[2] = c->r[6];
    c->r[1] = (c->r[1] & 0xfu) | ((c->r[0] << 4) & 0xfffffff0u);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->r[14] = 0xcce7b0u; f_c69d00(c);
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xcce7c4u; f_eafca4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cce808; }
    { uint32_t ea = c->r[9] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cce808; }
    c->r[2] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[5] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xd6u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[6] = c->r[1] | (c->r[0] << 16);
    c->r[0] = ~0x1fu;
    c->r[1] = c->r[4];
    c->r[3] = c->r[0] + (uint32_t)(uint16_t)(c->r[6]);
    c->r[0] = c->r[5];
    c->r[14] = 0xcce7fcu; f_c6b824(c);
    c->r[0] = 0xffe0u;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[10]; ST16(ea, c->r[0]); }
L_cce808:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
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
    c->r[14] = 0xcce854u; f_c6a2a4(c);
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 16));
    if (COND_NE) { c->r[7] = c->r[9] + (c->r[0] >> 16); }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_cce8e4; }
    c->r[1] = 0xd7425cu;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = 0xcce880u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xcce898u; f_ced74c(c);
    c->r[6] = (uint32_t)(uint8_t)(c->r[8]);
    c->r[2] = c->r[0];
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[7];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[8] & 0x100u; }
    c->r[3] = c->r[6];
    c->r[14] = 0xcce8b8u; f_cf938c(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_GE) { c->r[1] = c->r[1] | 0x20000u; }
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffff0000u;
    c->r[1] = c->r[1] | c->r[6];
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[1]); }
    goto L_cce8f4;
L_cce8e4:;
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[5];
    c->r[14] = 0xcce8f0u; f_c6be40(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cce8f4:;
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    c->r[8] = c->r[5];
    { uint32_t ea = c->r[8] + 0x40u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 12);
    c->r[1] = c->r[1] | (c->r[2] << 20);
    c->r[2] = c->r[0];
    { uint32_t r = c->r[1] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cce9b8; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = 0x43800000u;
    c->r[3] = c->r[1] & 0xfu;
    (void)f_subs(c, c->r[3], 0x8u);
    c->v.s[2] = LD32(c->r[2] + 32u);
    c->r[2] = c->r[0];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    if (COND_HI) { goto L_cce9b8; }
    c->r[1] = c->v.s[0];
    c->r[2] = 0x1u;
    c->r[7] = 0xaau;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[2], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cce998; }
    c->r[7] = 0x154u;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[2], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[0];
    if (COND_EQ) { goto L_cce9b8; }
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
    c->r[7] = c->r[2] | c->r[3];
    c->r[2] = (c->r[0] >> 16) & 0xffu;
    c->r[3] = 0x10u;
    goto L_cce9a8;
L_cce998:;
    c->r[2] = (c->r[0] >> 24);
    c->r[6] = ~0xff000000u;
    c->r[3] = 0x18u;
    c->r[7] = c->r[0];
L_cce9a8:;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[7] = c->r[6] & c->r[7];
    c->r[1] = (c->r[1] >> 8) & 0xffu;
    c->r[2] = c->r[7] | sh_lsl(c->r[1], c->r[3]);
L_cce9b8:;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccea50; }
    { uint32_t ea = c->r[9] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[8];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[8] = f_adds(c, c->r[9], c->r[0]); }
    if (COND_EQ) { goto L_ccea68; }
    c->r[1] = 0xd740e8u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = 0xcce9f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[14] = 0xccea0cu; f_ced74c(c);
    c->r[6] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[2] = c->r[0];
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[8];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[7] & 0x100u; }
    c->r[3] = c->r[6];
    c->r[14] = 0xccea2cu; f_cf938c(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_GE) { c->r[1] = c->r[1] | 0x40000u; }
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); } }
    c->r[1] = 0x12au;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[6]); }
    goto L_ccea78;
L_ccea50:;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_cceb2c;
L_ccea68:;
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[5];
    c->r[14] = 0xccea74u; f_c6c054(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccea78:;
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[1] = (c->r[2] >> 12);
    c->r[1] = c->r[1] | (c->r[3] << 20);
    { uint32_t r = c->r[1] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cceb2c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = 0x43800000u;
    c->v.s[2] = LD32(c->r[2] + 32u);
    c->r[2] = c->r[1] & 0xfu;
    (void)f_subs(c, c->r[2], 0x8u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    if (COND_HI) { goto L_cceb2c; }
    c->r[1] = c->v.s[0];
    c->r[3] = 0x1u;
    c->r[7] = 0xaau;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cceb10; }
    c->r[7] = 0x154u;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_cceb2c; }
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
    goto L_cceb1c;
L_cceb10:;
    c->r[2] = (c->r[0] >> 24);
    c->r[7] = ~0xff000000u;
    c->r[3] = 0x18u;
L_cceb1c:;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[7] & c->r[0];
    c->r[1] = (c->r[1] >> 8) & 0xffu;
    c->r[0] = c->r[0] | sh_lsl(c->r[1], c->r[3]);
L_cceb2c:;
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xcceb44u; f_c6a2d0(c);
    c->r[6] = 0x0u;
    c->r[1] = c->r[9] + 0x1a8u;
    c->r[2] = c->r[9] + 0x190u;
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x24cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[13] + 0x70u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xcceb7cu; f_c6b59c(c);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[4] + 0xc0u;
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccebe8; }
    c->r[0] = c->r[0] ^ 0x80000000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_ccebe8; }
    c->v.s[0] = c->r[1];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 304u, c->v.s[0]);
L_ccebe8:;
    { uint32_t ea = c->r[9] + 0x248u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9] + 0x1c0u;
    c->r[3] = c->r[9] + 0x1d8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xccec04u; f_c6adac(c);
    c->r[3] = 0xd73ec0u;
    c->r[0] = 0x250u;
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD16(ea); c->r[7] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xccec20u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xfffu;
    if (COND_NE) { c->r[6] = f_adds(c, c->r[9], c->r[1]); }
    c->r[2] = c->r[3] + (c->r[2] << 2);
    c->v.s[16] = LD32(c->r[2]);
    if (COND_EQ) { goto L_ccec7c; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0xccec4cu; f_ced74c(c);
    c->v.s[0] = c->v.s[16];
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xccec5cu; f_cf7958(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_ccecb8; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->v.s[16];
    c->r[0] = c->r[0] | 0x1000000u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    goto L_ccece4;
L_ccec7c:;
    c->r[1] = 0xd73e3cu;
    c->r[0] = c->r[0] + 0x2u;
    c->v.s[0] = LD32(c->r[9] + 496u);
    c->v.s[4] = LD32(c->r[9] + 500u);
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[2] = LD32(c->r[9] + 512u);
    c->v.s[6] = LD32(c->r[9] + 516u);
    { uint32_t ea = 0xcceca4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[4]);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[8] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[6]);
    goto L_ccece4;
L_ccecb8:;
    c->r[1] = 0xd73e18u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xccecc8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[2] = LD32(c->r[9] + 512u);
    c->v.s[4] = LD32(c->r[9] + 516u);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[6] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[4]);
L_ccece4:;
    ST32(c->r[4] + 240u, c->v.s[0]);
    ST32(c->r[4] + 224u, c->v.s[0]);
    ST32(c->r[4] + 320u, c->v.s[2]);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], (c->r[0] >> 16));
    if (COND_NE) { c->r[6] = c->r[9] + (c->r[0] >> 16); }
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_cced64; }
    c->r[1] = 0xd73dc4u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = 0xcced1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = c->r[6];
    c->v.s[16] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    c->r[14] = 0xcced38u; f_ced74c(c);
    c->v.s[0] = c->v.s[16];
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xcced48u; f_cf7958(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_ccedb4; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2000000u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    goto L_ccede0;
L_cced64:;
    c->r[2] = 0xd73d6cu;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xcced74u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] & 0xfffu;
    c->v.s[0] = LD32(c->r[9] + 504u);
    c->v.s[2] = LD32(c->r[9] + 508u);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->v.s[4] = LD32(c->r[1]);
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[16] = LD32(c->r[9] + 520u);
    c->v.s[8] = LD32(c->r[9] + 524u);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->v.s[6] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[6] * c->v.f[8]);
    goto L_ccede0;
L_ccedb4:;
    c->r[1] = 0xd73d1cu;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xccedc4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[16] = LD32(c->r[9] + 520u);
    c->v.s[2] = LD32(c->r[9] + 524u);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[4] * c->v.f[2]);
L_ccede0:;
    ST32(c->r[4] + 244u, c->v.s[0]);
    ST32(c->r[4] + 228u, c->v.s[0]);
    ST32(c->r[4] + 324u, c->v.s[16]);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[6] = f_adds(c, c->r[9], c->r[0]); }
    if (COND_EQ) { goto L_ccee58; }
    c->r[1] = 0xd73cd0u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = 0xccee10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = c->r[6];
    c->v.s[16] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    c->r[14] = 0xccee2cu; f_ced74c(c);
    c->v.s[0] = c->v.s[16];
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xccee3cu; f_cf7958(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_cceeac; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000000u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    goto L_cceed8;
L_ccee58:;
    c->r[2] = 0xd73c78u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xccee68u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] & 0xfffu;
    c->v.s[0] = LD32(c->r[9] + 528u);
    c->v.s[2] = LD32(c->r[9] + 532u);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->v.s[4] = LD32(c->r[1]);
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[16] = LD32(c->r[9] + 544u);
    c->v.s[8] = LD32(c->r[9] + 548u);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->v.s[6] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[6] * c->v.f[8]);
    goto L_cceed8;
L_cceeac:;
    c->r[1] = 0xd73c24u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xcceebcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[16] = LD32(c->r[9] + 544u);
    c->v.s[2] = LD32(c->r[9] + 548u);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[4] * c->v.f[2]);
L_cceed8:;
    ST32(c->r[4] + 248u, c->v.s[0]);
    ST32(c->r[4] + 232u, c->v.s[0]);
    ST32(c->r[4] + 328u, c->v.s[16]);
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[6] = f_adds(c, c->r[9], c->r[0]); }
    if (COND_EQ) { goto L_ccef50; }
    c->r[1] = 0xd73bd8u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = 0xccef08u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = c->r[6];
    c->v.s[16] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    c->r[14] = 0xccef24u; f_ced74c(c);
    c->v.s[0] = c->v.s[16];
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xccef34u; f_cf7958(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_ccefa0; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x8000000u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    goto L_ccefcc;
L_ccef50:;
    c->r[2] = 0xd73b80u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xccef60u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] & 0xfffu;
    c->v.s[0] = LD32(c->r[9] + 536u);
    c->v.s[2] = LD32(c->r[9] + 540u);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->v.s[4] = LD32(c->r[1]);
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[16] = LD32(c->r[9] + 552u);
    c->v.s[8] = LD32(c->r[9] + 556u);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->v.s[6] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[6] * c->v.f[8]);
    goto L_ccefcc;
L_ccefa0:;
    c->r[1] = 0xd73b30u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xccefb0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[16] = LD32(c->r[9] + 552u);
    c->v.s[2] = LD32(c->r[9] + 556u);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[4] * c->v.f[2]);
L_ccefcc:;
    ST32(c->r[4] + 252u, c->v.s[0]);
    ST32(c->r[4] + 236u, c->v.s[0]);
    ST32(c->r[4] + 332u, c->v.s[16]);
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[5] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD16(ea); c->r[10] = ea; c->r[2] = v; }
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
    if (COND_VC) { goto L_ccf024; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xccf024u; f_15efddc(c);
L_ccf024:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccf040; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    goto L_ccf06c;
L_ccf040:;
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
L_ccf06c:;
    c->r[3] = 0x0u;
    c->r[12] = c->r[4] + 0x84u;
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x94u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_ccf10c; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + 0xd0u;
    c->r[2] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[3] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + (c->r[2] << 4);
    { uint32_t ea = c->r[9] + 0x3eu; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->v.s[0] = LD32(c->r[3] + 64u);
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[0] + 0x80u;
    c->r[3] = c->r[0] + 0x60u;
    c->r[0] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = c->r[5];
    c->r[14] = 0xccf0e4u; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = c->r[13] + 0x20u;
    if (COND_NE) { c->r[6] = c->r[9] + c->r[6]; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[7]; c->r[0] = r; }
    c->r[1] = c->r[6];
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = 0xccf10cu; f_cec454(c);
L_ccf10c:;
    { uint32_t ea = c->r[8] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccf188; }
    { uint32_t ea = c->r[10] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x100u;
    c->r[3] = 0x2u;
    c->r[1] = c->r[1] & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x50u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->pc = c->r[7]; c->r[14] = 0xccf164u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
L_ccf188:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xccf194u; f_c74838(c);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 26) & 0x1u;
L_ccf19c:;
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ccf1e8(Cpu *restrict c) {
    FN_ENTER(0xccf1e8u);
L_ccf1e8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[14] = 0xccf1f8u; f_c62db8(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ccf308; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ccf290; }
    c->r[6] = c->r[8] + 0xd0u;
L_ccf214:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccf23c; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
L_ccf23c:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xccf248u; f_ccf314(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_ccf258; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_ccf268;
L_ccf258:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xccf264u; f_c5b224(c);
    c->r[5] = c->r[0];
L_ccf268:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); }
    c->r[14] = c->r[6] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[12] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->r[1] = c->r[0] + 0x10000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | (c->r[1] & 0xFFFF0000u);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); }
    c->r[0] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    if (COND_NE) { goto L_ccf214; }
L_ccf290:;
    { uint32_t ea = c->r[8] + 0x43u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccf2e8; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ccf2e8; }
L_ccf2a8:;
    { uint32_t ea = c->r[5] + 0xfu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x1u;
    c->r[0] = c->r[5] + (c->r[1] << 2);
    c->r[1] = c->r[5] + (c->r[1] << 3);
    c->r[2] = c->r[0] + 0x50u;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0x100u;
    c->r[1] = c->r[8];
    c->r[3] = 0x2u;
    c->pc = c->r[7]; c->r[14] = 0xccf2dcu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_ccf2a8; }
L_ccf2e8:;
    { uint32_t ea = c->r[8] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccf308; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[8]; }
    if (COND_NE) { c->r[14] = 0xccf308u; f_ccfa2c(c); }
L_ccf308:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ccf314(Cpu *restrict c) {
    FN_ENTER(0xccf314u);
L_ccf314:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    c->r[9] = c->r[0];
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ccf374; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccf3ac; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[1] + 0x240u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = c->r[1] + c->r[2]; }
    c->r[1] = c->r[4];
    c->r[14] = 0xccf370u; f_c6bc0c(c);
    goto L_ccf3ac;
L_ccf374:;
    c->v.s[0] = LD32(c->r[4] + 300u);
    c->r[2] = c->r[4] + 0xb0u;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xccf388u; f_c6a004(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_ccfa1c; }
    { uint32_t ea = c->r[8] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); }
L_ccf3ac:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xccf3b8u; f_c6a2cc(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccf410; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], (c->r[1] >> 16));
    c->r[6] = (c->r[1] >> 16);
    c->r[2] = c->r[4];
    if (COND_NE) { c->r[6] = c->r[0] + (c->r[1] >> 16); }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[14] = 0xccf3ecu; f_ced74c(c);
    c->r[2] = c->r[0];
    c->r[0] = 0x128u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0xccf404u; f_cf938c(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccf410:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccf458; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + 0x244u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[0] + c->r[6]; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[14] = 0xccf438u; f_ced74c(c);
    c->r[2] = c->r[0];
    c->r[0] = 0x12au;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0xccf450u; f_cf938c(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
L_ccf458:;
    { uint32_t r = c->r[7] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ccf480; }
    { uint32_t ea = c->r[8] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x104u; ST32(ea, c->r[1]); }
    goto L_ccf61c;
L_ccf480:;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1] - 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x84u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x98u; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = (c->r[2] >> 12);
    { uint32_t r = c->r[5] * c->r[0] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[3] + c->r[0];
    c->r[3] = c->r[2] | (c->r[7] << 20);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t r = c->r[3] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccf550; }
    c->v.s[2] = 0x43800000u;
    c->r[7] = c->r[3] & 0xfu;
    (void)f_subs(c, c->r[7], 0x8u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[2]);
    if (COND_HI) { goto L_ccf550; }
    c->r[3] = c->v.s[2];
    c->r[2] = 0x1u;
    c->r[0] = 0xaau;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[2], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ccf534; }
    c->r[0] = 0x154u;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[2], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccf550; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[2] = c->r[6];
    c->r[5] = ~0xff0000u;
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[2] = c->r[2] & 0xffff0000u;
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = (c->r[6] >> 8) & 0xffu;
    c->r[7] = (c->r[6] >> 16) & 0xffu;
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    c->r[2] = c->r[2] & 0xff00u;
    c->r[2] = c->r[0] | c->r[2];
    c->r[0] = 0x10u;
    c->r[6] = c->r[2];
    goto L_ccf540;
L_ccf534:;
    c->r[7] = (c->r[6] >> 24);
    c->r[5] = ~0xff000000u;
    c->r[0] = 0x18u;
L_ccf540:;
    { uint32_t r = c->r[7] * c->r[3]; c->r[3] = r; }
    c->r[2] = c->r[5] & c->r[6];
    c->r[3] = (c->r[3] >> 8) & 0xffu;
    c->r[6] = c->r[2] | sh_lsl(c->r[3], c->r[0]);
L_ccf550:;
    c->r[0] = (c->r[12] >> 24) & 0x1u;
    c->r[5] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[5] + 0x100u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccf5f4; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[0] = (c->r[0] >> 12);
    c->r[2] = c->r[0] | (c->r[1] << 20);
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccf618; }
    c->v.s[2] = 0x43800000u;
    c->r[3] = c->r[2] & 0xfu;
    (void)f_subs(c, c->r[3], 0x8u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    if (COND_HI) { goto L_ccf618; }
    c->r[2] = c->v.s[0];
    c->r[7] = 0x1u;
    c->r[1] = 0xaau;
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[7], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ccf5fc; }
    c->r[1] = 0x154u;
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[7], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccf618; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = c->r[0];
    c->r[6] = ~0xff0000u;
    c->r[7] = 0x10u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[3] = c->r[3] & 0xffff0000u;
    c->r[1] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[1] | c->r[3];
    c->r[3] = (c->r[0] >> 8) & 0xffu;
    { uint32_t r = c->r[3] * c->r[2]; c->r[3] = r; }
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[1] | c->r[3];
    c->r[3] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = c->r[1];
    goto L_ccf608;
L_ccf5f4:;
    { uint32_t ea = c->r[5] + 0x104u; ST32(ea, c->r[6]); }
    goto L_ccf61c;
L_ccf5fc:;
    c->r[3] = (c->r[0] >> 24);
    c->r[6] = ~0xff000000u;
    c->r[7] = 0x18u;
L_ccf608:;
    { uint32_t r = c->r[3] * c->r[2]; c->r[1] = r; }
    c->r[0] = c->r[6] & c->r[0];
    c->r[1] = (c->r[1] >> 8) & 0xffu;
    c->r[0] = c->r[0] | sh_lsl(c->r[1], c->r[7]);
L_ccf618:;
    { uint32_t ea = c->r[5] + 0x104u; ST32(ea, c->r[0]); }
L_ccf61c:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccf654; }
    c->v.s[0] = 0x0u;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xccf640u; f_c6a434(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_ccfa1c; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccf654:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ccf6b4; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[7] = c->r[4] + 0xc0u;
    c->v.s[0] = LD32(c->r[4] + 304u);
    c->v.s[2] = LD32(c->r[4] + 308u);
    c->v.s[4] = LD32(c->r[4] + 312u);
    c->r[3] = c->r[2] & (c->r[1] >> 21);
    c->r[1] = c->r[2] & (c->r[1] >> 20);
    c->r[2] = 0x0u;
    c->r[3] = c->r[7] + c->r[3];
    c->r[1] = c->r[7] + c->r[1];
    c->v.s[6] = LD32(c->r[3]);
    c->v.s[8] = LD32(c->r[3] + 4u);
    c->v.s[10] = LD32(c->r[3] + 8u);
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    ST32(c->r[1], c->v.s[0]);
    ST32(c->r[1] + 4u, c->v.s[2]);
    ST32(c->r[1] + 8u, c->v.s[4]);
    goto L_ccf728;
L_ccf6b4:;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + 0x24cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[0] + c->r[6]; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[14] = 0xccf6d4u; f_ced74c(c);
    c->r[3] = c->r[4] + 0x130u;
    c->r[2] = c->r[0];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[3] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xccf6fcu; f_cfb2bc(c);
    { uint32_t ea = c->r[8] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccf728:;
    c->r[1] = 0x400u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccf754; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->v.s[0] = LD32(c->r[0] + 600u);
    { uint32_t ea = c->r[0] + 0x248u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0xccf750u; f_c6b3c0(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ccf754:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ccf784; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x10u;
    c->v.s[0] = LD32(c->r[4] + 320u);
    c->r[3] = c->r[3] & (c->r[1] >> 21);
    c->r[3] = c->r[4] + c->r[3];
    c->v.s[2] = LD32(c->r[3] + 224u);
    c->r[3] = (c->r[1] >> 24);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    goto L_ccf7c8;
L_ccf784:;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x250u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[0] + c->r[6]; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[14] = 0xccf7a8u; f_ced74c(c);
    c->v.s[0] = LD32(c->r[4] + 320u);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xccf7b8u; f_cf7958(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[1] >> 24);
L_ccf7c8:;
    c->r[3] = c->r[3] & 0x1u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[4] + (c->r[3] << 4);
    ST32(c->r[3] + 224u, c->v.s[0]);
    if (COND_NE) { goto L_ccf7fc; }
    c->r[3] = (c->r[1] >> 25);
    c->v.s[0] = LD32(c->r[4] + 324u);
    c->r[1] = (c->r[1] >> 24);
    c->r[7] = c->r[3] & 0x1u;
    c->r[7] = c->r[4] + (c->r[7] << 4);
    c->v.s[2] = LD32(c->r[7] + 228u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    goto L_ccf848;
L_ccf7fc:;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x250u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], (c->r[1] >> 16));
    c->r[6] = (c->r[1] >> 16);
    c->r[2] = c->r[4];
    if (COND_NE) { c->r[6] = c->r[0] + (c->r[1] >> 16); }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[14] = 0xccf824u; f_ced74c(c);
    c->v.s[0] = LD32(c->r[4] + 324u);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xccf834u; f_cf7958(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[1] >> 25);
    c->r[1] = (c->r[1] >> 24);
L_ccf848:;
    c->r[7] = c->r[1] & 0x1u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = c->r[4] + (c->r[7] << 4);
    ST32(c->r[7] + 228u, c->v.s[0]);
    if (COND_NE) { goto L_ccf878; }
    c->r[7] = c->r[3] & 0x1u;
    c->v.s[0] = LD32(c->r[4] + 328u);
    c->r[7] = c->r[4] + (c->r[7] << 4);
    c->v.s[2] = LD32(c->r[7] + 232u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    goto L_ccf8c0;
L_ccf878:;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x254u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[0] + c->r[6]; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[14] = 0xccf89cu; f_ced74c(c);
    c->v.s[0] = LD32(c->r[4] + 328u);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xccf8acu; f_cf7958(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[1] >> 25);
    c->r[1] = (c->r[1] >> 24);
L_ccf8c0:;
    c->r[7] = c->r[1] & 0x1u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = c->r[4] + (c->r[7] << 4);
    ST32(c->r[7] + 232u, c->v.s[0]);
    if (COND_NE) { goto L_ccf8ec; }
    c->r[0] = c->r[3] & 0x1u;
    c->v.s[0] = LD32(c->r[4] + 332u);
    c->r[0] = c->r[4] + (c->r[0] << 4);
    c->v.s[2] = LD32(c->r[0] + 236u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    goto L_ccf928;
L_ccf8ec:;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x256u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[0] + c->r[6]; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[14] = 0xccf910u; f_ced74c(c);
    c->v.s[0] = LD32(c->r[4] + 332u);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xccf920u; f_cf7958(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
L_ccf928:;
    c->r[0] = c->r[1] & 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[0] = c->r[4] + (c->r[0] << 4);
    ST32(c->r[0] + 236u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xdau; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
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
    if (COND_VC) { goto L_ccf97c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xccf97cu; f_15efddc(c);
L_ccf97c:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccf998; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 4u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    goto L_ccf9c4;
L_ccf998:;
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
L_ccf9c4:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x10u;
    c->r[12] = 0x0u;
    c->r[0] = c->r[5] & (c->r[6] >> 20);
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x84u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ccfa04; }
    { uint32_t ea = c->r[9] + 0x43u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = 0x1u;
    { uint32_t r = c->r[7] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ccfa1c; }
L_ccfa04:;
    c->r[0] = c->r[5] & (c->r[6] >> 21);
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x84u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    c->r[0] = 0x1u;
L_ccfa1c:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ccfa2c(Cpu *restrict c) {
    FN_ENTER(0xccfa2cu);
L_ccfa2c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x60u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_ccfb68; }
    c->r[7] = c->r[4] + 0xd0u;
    c->r[5] = 0x0u;
    c->r[9] = c->r[13] + 0x10u;
    c->r[8] = c->r[13] + 0x20u;
L_ccfa5c:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ccfa7c; }
    /* pld */
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
L_ccfa7c:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 24) & 0x1u;
    c->r[2] = c->r[6] + (c->r[1] << 2);
    c->r[1] = c->r[6] + (c->r[1] << 4);
    c->v.s[6] = LD32(c->r[2] + 64u);
    c->v.s[0] = LD32(c->r[1] + 192u);
    c->v.s[2] = LD32(c->r[1] + 196u);
    c->v.s[4] = LD32(c->r[1] + 200u);
    c->r[2] = c->r[1] + 0x80u;
    c->r[3] = c->r[1] + 0x60u;
    c->r[1] = c->r[4];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->v.f[0] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[9]); }
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[8];
    c->r[14] = 0xccfad4u; f_c6cab8(c);
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[13] + 36u);
    c->v.s[14] = LD32(c->r[13] + 52u);
    c->v.s[0] = LD32(c->r[13] + 32u);
    c->v.s[4] = LD32(c->r[13] + 40u);
    c->v.s[6] = LD32(c->r[13] + 48u);
    c->v.s[1] = LD32(c->r[13] + 56u);
    c->v.s[3] = LD32(c->r[13] + 64u);
    c->v.s[5] = LD32(c->r[13] + 68u);
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
    c->v.s[2] = LD32(c->r[13] + 72u);
    c->v.f[6] = c->v.f[6] * c->v.f[10];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[8]);
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[5]); }
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
    if (COND_NE) { goto L_ccfa5c; }
L_ccfb68:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ccfb70(Cpu *restrict c) {
    FN_ENTER(0xccfb70u);
L_ccfb70:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x8u;
    c->r[12] = c->r[0] + 0x100u;
    c->r[5] = c->r[14] & (c->r[4] >> 22);
    c->r[4] = c->r[14] & (c->r[4] >> 21);
    { uint32_t ea = c->r[12] + c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[4] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[4] = c->r[4] - c->r[6];
    c->r[6] = (c->r[5] >> 8) & 0xffu;
    { uint32_t r = c->r[4] * c->r[2]; c->r[4] = r; }
    c->r[4] = c->r[5] + (c->r[4] >> 8);
    c->r[8] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[4] = (c->r[7] >> 8) & 0xffu;
    c->r[4] = c->r[4] - c->r[6];
    c->r[6] = (c->r[5] >> 8);
    { uint32_t r = c->r[4] * c->r[2]; c->r[4] = r; }
    c->r[4] = c->r[4] + (c->r[6] << 8);
    c->r[4] = c->r[4] & 0xff00u;
    c->r[6] = c->r[4] | c->r[8];
    c->r[4] = (c->r[7] >> 24);
    c->r[7] = (c->r[7] >> 16) & 0xffu;
    c->r[4] = c->r[4] - (c->r[5] >> 24);
    { uint32_t r = c->r[4] * c->r[2]; c->r[4] = r; }
    c->r[4] = (c->r[4] >> 8);
    c->r[8] = c->r[4] + (c->r[5] >> 24);
    c->r[4] = (c->r[5] >> 16) & 0xffu;
    c->r[4] = c->r[7] - c->r[4];
    { uint32_t r = c->r[4] * c->r[2]; c->r[4] = r; }
    c->r[6] = c->r[6] | (c->r[8] << 24);
    c->r[4] = (c->r[4] >> 8);
    c->r[4] = c->r[4] + (c->r[5] >> 16);
    c->r[4] = (c->r[4] << 16);
    c->r[4] = uxtb16(c->r[4]);
    c->r[9] = c->r[6] | c->r[4];
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[14] & (c->r[5] >> 22);
    c->r[6] = c->r[14] & (c->r[5] >> 21);
    c->r[7] = c->r[12] + c->r[7];
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[7] = c->r[12] + c->r[6];
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = (uint32_t)(uint8_t)(c->r[14]);
    c->r[6] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[6] = c->r[6] - c->r[5];
    c->r[5] = (c->r[14] >> 8) & 0xffu;
    c->r[4] = (c->r[7] >> 8) & 0xffu;
    c->r[5] = c->r[4] - c->r[5];
    { uint32_t r = c->r[6] * c->r[2]; c->r[6] = r; }
    c->r[4] = (c->r[14] >> 8);
    { uint32_t r = c->r[5] * c->r[2]; c->r[5] = r; }
    c->r[6] = c->r[14] + (c->r[6] >> 8);
    c->r[5] = c->r[5] + (c->r[4] << 8);
    c->r[4] = (c->r[14] >> 16) & 0xffu;
    c->r[6] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[5] = c->r[5] & 0xff00u;
    c->r[12] = c->r[5] | c->r[6];
    c->r[6] = (c->r[7] >> 16) & 0xffu;
    c->r[7] = (c->r[7] >> 24);
    c->r[5] = (uint32_t)(uint8_t)(c->r[8]);
    c->r[7] = c->r[7] - (c->r[14] >> 24);
    c->r[4] = c->r[6] - c->r[4];
    { uint32_t r = c->r[5] * c->r[3]; c->r[5] = r; }
    { uint32_t r = c->r[4] * c->r[2]; c->r[4] = r; }
    { uint32_t r = c->r[7] * c->r[2]; c->r[7] = r; }
    c->r[5] = (c->r[5] << 16);
    c->r[4] = (c->r[4] >> 8);
    c->r[5] = (c->r[5] & 0xff000000u) | ((c->r[9] << 0) & 0xffffffu);
    c->r[7] = (c->r[7] >> 8);
    c->r[4] = c->r[4] + (c->r[14] >> 16);
    c->r[7] = c->r[7] + (c->r[14] >> 24);
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[5]); }
    c->r[4] = (c->r[4] << 16);
    c->r[7] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[4] = uxtb16(c->r[4]);
    { uint32_t r = c->r[7] * c->r[3]; c->r[3] = r; }
    c->r[6] = c->r[12] | c->r[4];
    c->r[4] = (uint32_t)((int32_t)c->r[3] >> 8);
    c->r[3] = c->r[6] | (c->r[4] << 24);
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[3], (c->r[5] >> 24));
    if (COND_EQ) { c->r[7] = (uint32_t)(uint8_t)(c->r[4]); }
    if (COND_EQ) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_ccfd74; }
    c->r[3] = c->r[0] + 0x8u;
    c->r[7] = c->r[0] + 0x50u;
    c->v.s[10] = 0x3f800000u;
    c->r[0] = c->r[0] + 0xe0u;
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.f[10] = c->v.f[10] - c->v.f[0];
    c->r[5] = (c->r[6] >> 25) & 0x1u;
    { uint32_t ea = c->r[7] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = (c->r[6] >> 24) & 0x1u;
    { uint32_t ea = c->r[7] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] - c->r[5];
    { uint32_t r = c->r[7] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[5] + (uint32_t)((int32_t)c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x10u;
    c->r[7] = c->r[3] & (c->r[2] >> 21);
    c->r[2] = c->r[3] & (c->r[2] >> 20);
    c->r[3] = 0x1u;
    c->r[7] = c->r[0] + c->r[7];
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[0] + 12u);
    c->v.s[12] = LD32(c->r[7]);
    c->v.s[14] = LD32(c->r[7] + 4u);
    c->v.s[1] = LD32(c->r[7] + 8u);
    c->v.s[3] = LD32(c->r[7] + 12u);
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[6] = c->v.f[6] * c->v.f[0];
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[1]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[10] * c->v.f[3]);
    ST32(c->r[1], c->v.s[2]);
    ST32(c->r[1] + 4u, c->v.s[4]);
    ST32(c->r[1] + 8u, c->v.s[6]);
    ST32(c->r[1] + 12u, c->v.s[0]);
L_ccfd74:;
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ccfd7c(Cpu *restrict c) {
    FN_ENTER(0xccfd7cu);
L_ccfd7c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x328u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x184u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x174u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7] + 0x170u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7] + 0x18cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[3]); }
    c->r[3] = 0x180u;
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x188u;
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[3] = (c->r[14] >> 4) & 0xfu;
    c->v.s[0] = LD32(c->r[4]);
    (void)f_subs(c, c->r[3], 0x0u);
    ST32(c->r[13] + 180u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 4u);
    ST32(c->r[13] + 176u, c->v.s[0]);
    c->v.s[0] = c->r[6];
    c->v.s[20] = LD32(c->r[4] + 8u);
    c->v.s[14] = LD32(c->r[4] + 12u);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    c->v.f[6] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_ccfe20; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_ccfe30; }
    c->r[3] = 0x0u;
    c->r[6] = 0x2u;
    c->r[0] = 0x1u;
    goto L_ccfe3c;
L_ccfe20:;
    c->r[3] = 0x2u;
    c->r[6] = 0x1u;
    c->r[0] = 0x0u;
    goto L_ccfe3c;
L_ccfe30:;
    c->r[3] = 0x1u;
    c->r[6] = 0x0u;
    c->r[0] = 0x2u;
L_ccfe3c:;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->v.s[2] = LD32(c->r[13] + 176u);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[8] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[4]); }
    c->v.s[0] = LD32(c->r[7] + 564u);
    c->v.s[17] = c->v.s[8];
    c->r[5] = (c->r[1] >> 16) - c->r[5];
    ST32(c->r[13] + 188u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 180u);
    c->v.s[30] = LD32(c->r[7] + 560u);
    { uint32_t ea = c->r[7] + 0x238u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + 0x23cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = 0x3c23d70au;
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1d0u; ST32(ea, c->r[4]); }
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ccff14; }
    c->v.f[4] = c->v.f[14] - c->v.f[20];
    c->v.f[4] = fabsf(c->v.f[4]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccfec0; }
    c->v.s[17] = 0x0u;
    c->r[0] = 0x3f800000u;
    goto L_ccff10;
L_ccfec0:;
    c->v.f[2] = c->v.f[0] * c->v.f[0];
    c->v.s[10] = LD32(c->r[13] + 180u);
    c->v.s[12] = LD32(c->r[13] + 176u);
    c->v.f[2] = c->v.f[2] / c->v.f[4];
    vfp_cmp_f(c, c->v.f[10], c->v.f[12]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[20], c->v.f[14]);
    c->v.s[4] = c->v.s[2] ^ 0x80000000u;
    c->v.s[2] = COND_GT ? c->v.s[4] : c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ccff08; }
    c->r[7] = c->v.s[2];
    c->r[0] = c->r[7] ^ 0x80000000u;
    goto L_ccff0c;
L_ccff08:;
    c->r[0] = c->v.s[2];
L_ccff0c:;
    c->v.s[17] = c->v.s[0];
L_ccff10:;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
L_ccff14:;
    c->r[0] = c->r[5] + 0x2u;
    c->r[4] = (c->r[1] >> 16);
    (void)f_adds(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[4]); }
    if (COND_LT) { goto L_cd04b0; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = (c->r[14] >> 28);
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    c->v.s[0] = LD32(c->r[13] + 188u);
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[23] = 0xbf800000u;
    c->v.s[25] = 0x3f800000u;
    c->r[10] = 0x0u;
    ST32(c->r[13] + 124u, c->v.s[6]);
    ST32(c->r[13] + 160u, c->v.s[14]);
    c->r[2] = (c->r[0] >> 1);
    c->r[0] = c->r[1] | (c->r[12] << 4);
    c->r[1] = c->r[13] + 0x220u;
    c->r[5] = c->r[1] + (c->r[5] << 2);
    c->v.f[0] = c->v.f[0] - c->v.f[30];
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[5]); }
    c->r[5] = c->r[1] + (c->r[6] << 2);
    c->r[1] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[0] & 0x2u;
    c->r[6] = c->r[1] + (c->r[6] << 2);
    c->r[1] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    ST32(c->r[13] + 128u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[1];
    c->r[1] = c->r[6] - c->r[2];
    c->r[2] = 0x48u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[4] << 4);
    c->r[1] = c->r[1] - (c->r[6] << 4);
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x40u;
    c->r[1] = c->r[1] + (c->r[4] << 5);
    c->r[1] = c->r[1] - (c->r[6] << 5);
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + (c->r[4] << 3);
    c->r[4] = 0x0u;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = c->r[6] + (c->r[6] << 3);
    c->r[6] = 0x0u;
    c->r[1] = c->r[1] - (c->r[2] << 2);
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] & 0x4u;
    c->r[0] = 0xd6927cu;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xcd0010u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
L_cd000c:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0xd0u;
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_NE) { c->r[0] = c->r[0] + c->r[10]; }
    c->r[0] = (c->r[0] << 12);
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[8] + (c->r[0] << 2);
    c->v.s[27] = LD32(c->r[0]);
    c->r[0] = c->r[8] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[19] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[17] * c->v.f[27];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[17] * c->v.f[19];
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    c->v.s[4] = LD32(c->r[7] + 20u);
    c->v.s[8] = LD32(c->r[13] + 212u);
    c->v.s[0] = LD32(c->r[7] + 16u);
    c->v.s[6] = LD32(c->r[13] + 208u);
    c->v.s[12] = LD32(c->r[7] + 4u);
    c->v.s[1] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[7] + 24u);
    c->v.s[10] = LD32(c->r[13] + 216u);
    c->v.s[14] = LD32(c->r[7] + 8u);
    c->v.s[3] = LD32(c->r[7] + 36u);
    c->v.s[5] = LD32(c->r[7] + 40u);
    c->v.f[31] = c->v.f[8] * c->v.f[4];
    c->v.s[4] = LD32(c->r[7] + 32u);
    c->v.f[18] = c->v.f[0] * c->v.f[8];
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[16] = c->v.f[8] * c->v.f[2];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[6] * c->v.f[14]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.f[0] = c->v.f[31] * c->v.f[31];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd00e0; }
    c->r[14] = 0xcd00dcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cd00e0:;
    c->v.s[0] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd0100; }
    c->v.f[0] = c->v.f[25] / c->v.f[2];
    c->v.f[16] = c->v.f[0] * c->v.f[16];
    c->v.f[31] = c->v.f[31] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_cd0100:;
    c->v.s[2] = LD32(c->r[13] + 180u);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 208u, c->v.s[18]);
    ST32(c->r[13] + 212u, c->v.s[31]);
    ST32(c->r[13] + 216u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[6]); }
    c->v.s[22] = c->v.s[20];
    c->v.f[0] = c->v.f[2] * c->v.f[27];
    c->v.f[2] = c->v.f[2] * c->v.f[19];
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[20]);
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[2] = LD32(c->r[7] + 8u);
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[6] = LD32(c->r[7] + 20u);
    c->v.s[14] = LD32(c->r[13] + 548u);
    c->v.s[10] = LD32(c->r[7] + 16u);
    c->v.s[8] = LD32(c->r[7] + 24u);
    c->v.s[12] = LD32(c->r[13] + 544u);
    c->v.s[1] = LD32(c->r[13] + 552u);
    c->v.s[3] = LD32(c->r[7] + 36u);
    c->v.s[5] = LD32(c->r[7] + 40u);
    c->v.s[7] = LD32(c->r[7] + 32u);
    c->v.s[9] = LD32(c->r[7] + 56u);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[8] = LD32(c->r[7] + 48u);
    c->v.s[14] = LD32(c->r[7] + 52u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[24] = c->v.f[8] + c->v.f[10];
    c->v.f[26] = c->v.f[14] + c->v.f[6];
    c->v.f[29] = c->v.f[9] + c->v.f[4];
    ST32(c->r[13] + 544u, c->v.s[24]);
    ST32(c->r[13] + 548u, c->v.s[26]);
    ST32(c->r[13] + 552u, c->v.s[29]);
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[6]); }
    c->v.s[0] = LD32(c->r[9]);
    c->v.s[2] = LD32(c->r[9] + 4u);
    c->v.s[4] = LD32(c->r[9] + 8u);
    c->v.f[20] = c->v.f[2] - c->v.f[26];
    c->v.f[28] = c->v.f[0] - c->v.f[24];
    c->v.f[21] = c->v.f[4] - c->v.f[29];
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd01f0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcd01f0u; f_15efddc(c);
L_cd01f0:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd0210; }
    c->v.f[0] = c->v.f[25] / c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
L_cd0210:;
    c->v.f[2] = c->v.f[20] * c->v.f[31];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[18]);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[23];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[16]);
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    ST32(c->r[0], c->v.s[24]);
    ST32(c->r[0] + 4u, c->v.s[26]);
    ST32(c->r[0] + 8u, c->v.s[29]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd0254; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[25]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[25]; }
L_cd0254:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->v.s[20] = LD32(c->r[13] + 160u);
    c->v.s[29] = 0x43800000u;
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcd0268u; f_15efe24(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[30]);
    c->v.s[2] = c->v.s[25];
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cd02a8; }
    c->v.s[2] = LD32(c->r[13] + 188u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->v.s[2] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cd02a8; }
    c->v.s[2] = LD32(c->r[13] + 188u);
    c->r[0] = c->r[13] + 0x1d0u;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcd02a4u; f_9c5814(c);
    c->v.s[2] = c->v.s[0];
L_cd02a8:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[25] - c->v.f[2];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[29];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->v.s[2] = LD32(c->r[13] + 176u);
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->v.f[0] = c->v.f[2] * c->v.f[27];
    c->v.f[2] = c->v.f[2] * c->v.f[19];
    { uint32_t ea = c->r[1] + (c->r[10] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[20]);
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[2] = LD32(c->r[7] + 8u);
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[6] = LD32(c->r[7] + 20u);
    c->v.s[14] = LD32(c->r[13] + 548u);
    c->v.s[10] = LD32(c->r[7] + 16u);
    c->v.s[8] = LD32(c->r[7] + 24u);
    c->v.s[12] = LD32(c->r[13] + 544u);
    c->v.s[1] = LD32(c->r[13] + 552u);
    c->v.s[3] = LD32(c->r[7] + 36u);
    c->v.s[5] = LD32(c->r[7] + 40u);
    c->v.s[7] = LD32(c->r[7] + 32u);
    c->v.s[9] = LD32(c->r[7] + 56u);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[8] = LD32(c->r[7] + 48u);
    c->v.s[14] = LD32(c->r[7] + 52u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[24] = c->v.f[8] + c->v.f[10];
    c->v.f[26] = c->v.f[14] + c->v.f[6];
    c->v.f[19] = c->v.f[9] + c->v.f[4];
    ST32(c->r[13] + 544u, c->v.s[24]);
    ST32(c->r[13] + 548u, c->v.s[26]);
    ST32(c->r[13] + 552u, c->v.s[19]);
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[6]); }
    c->v.s[0] = LD32(c->r[9]);
    c->v.s[2] = LD32(c->r[9] + 4u);
    c->v.s[4] = LD32(c->r[9] + 8u);
    c->v.f[20] = c->v.f[2] - c->v.f[26];
    c->v.f[28] = c->v.f[0] - c->v.f[24];
    c->v.f[21] = c->v.f[4] - c->v.f[19];
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd03a8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcd03a8u; f_15efddc(c);
L_cd03a8:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd03d4; }
    goto L_cd03c4;
L_cd03c4:;
    c->v.f[0] = c->v.f[25] / c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
L_cd03d4:;
    c->v.f[2] = c->v.f[20] * c->v.f[31];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[18]);
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[23];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[16]);
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    ST32(c->r[0] + 32u, c->v.s[24]);
    ST32(c->r[0] + 36u, c->v.s[26]);
    ST32(c->r[0] + 40u, c->v.s[19]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd0418; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[25]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[25]; }
L_cd0418:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->v.s[20] = c->v.s[22];
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcd0428u; f_15efe24(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[30]);
    c->v.s[2] = c->v.s[25];
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cd0468; }
    c->v.s[2] = LD32(c->r[13] + 188u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->v.s[2] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cd0468; }
    c->v.s[2] = LD32(c->r[13] + 188u);
    c->r[0] = c->r[13] + 0x1d0u;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcd0464u; f_9c5814(c);
    c->v.s[2] = c->v.s[0];
L_cd0468:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[25] - c->v.f[2];
    c->r[4] = c->r[4] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[29];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[1] + (c->r[10] << 2); ST32(ea, c->r[0]); }
    c->r[10] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_LT) { goto L_cd000c; }
    c->v.s[6] = LD32(c->r[13] + 124u);
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[8] = 0x3f800000u;
L_cd04b0:;
    c->r[0] = 0x11au;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[4] = v; c->r[5] = v2; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[8]); }
    c->r[14] = c->r[0] + 0xc0u;
    c->r[3] = c->r[0] + 0x80u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[3]); }
    c->r[7] = c->r[14];
    { uint32_t ea = c->r[7]; c->r[7] = c->r[7] + 16u; c->r[0] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); c->r[3] = c->r[3] + 16u; }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[9]); }
    c->r[4] = c->r[1] + 0x40u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[8]); }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[12]); c->r[4] = c->r[4] + 16u; }
    c->r[12] = c->r[5];
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[1] = c->r[13] + 0x1a4u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[14]); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[14]; c->r[14] = c->r[14] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[14] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); }
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] - 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0x24u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = c->r[0];
    if (COND_NE) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cd13d8; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[16] = c->v.f[8] / c->v.f[6];
    c->v.s[18] = 0x43800000u;
    c->r[0] = c->r[0] + (c->r[4] << 4);
    c->r[6] = (c->r[1] >> 16);
    c->r[5] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[4] << 4);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & 0x80000u;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] - (c->r[1] << 8);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x100u;
    c->r[0] = c->r[0] + (c->r[5] << 8);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] - c->r[6];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] - c->r[0];
    c->r[0] = (c->r[0] << 8);
    c->r[0] = c->r[0] - (c->r[5] << 8);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 16) & 0xffu;
    c->r[1] = (c->r[3] >> 16) & 0xffu;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 8) & 0xffu;
    c->r[1] = (c->r[3] >> 8) & 0xffu;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] - 0x1u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x220u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 16);
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 8);
    c->r[0] = (c->r[0] << 8);
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cd07ac:;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[7] + 0x1u;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[0] + (c->r[7] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1d0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[0] + (c->r[14] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + (c->r[7] << 4); uint32_t v = LD32(ea); c->r[2] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + (c->r[14] << 4); uint32_t v = LD32(ea); c->r[3] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cd0f88; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { goto L_cd13c4; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[10] = 0x0u;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
L_cd08c4:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[12] = c->r[0] + c->r[10];
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = f_adds(c, c->r[0], c->r[10]);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_cd0990; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x100u;
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_HI) { goto L_cd0990; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0xcd0900u + 0x4u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0xcd0914u: goto L_cd0914; case 0xcd0934u: goto L_cd0934; case 0xcd095cu: goto L_cd095c; case 0xcd0980u: goto L_cd0980; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd0914:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[0] = 0x100u;
    if (COND_LE) { goto L_cd0990; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9] - 0x100u;
    c->r[0] = sdiv32(c->r[0], c->r[2]);
    goto L_cd0990;
L_cd0934:;
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_cd0990; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_LT) { goto L_cd0988; }
    c->r[0] = 0x100u;
    if (COND_LE) { goto L_cd0990; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = sdiv32(c->r[8], c->r[0]);
    goto L_cd0990;
L_cd095c:;
    (void)f_subs(c, c->r[1], c->r[5]);
    c->r[0] = 0x0u;
    if (COND_LE) { goto L_cd0990; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[9];
    c->r[0] = c->r[0] - 0x100u;
    c->r[0] = sdiv32(c->r[0], c->r[2]);
    goto L_cd0990;
L_cd0980:;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_GE) { goto L_cd0990; }
L_cd0988:;
    c->r[0] = c->r[9] - 0x100u;
    c->r[0] = sdiv32(c->r[0], c->r[5]);
L_cd0990:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x100u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[3]; c->r[2] = r; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] & 0xff00u;
    { uint32_t r = c->r[0] * c->r[3]; c->r[3] = r; }
    c->r[3] = c->r[7] + (c->r[3] >> 8);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[2] = c->r[3] | c->r[2];
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[3] = r; }
    c->r[3] = c->r[7] + (c->r[3] >> 8);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] | (c->r[3] << 24);
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7] + (c->r[0] >> 8);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = (c->r[0] << 16);
    c->r[0] = uxtb16(c->r[0]);
    c->r[4] = c->r[7] - 0x1u;
    c->r[14] = c->r[2] | c->r[0];
    c->r[2] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[4], 0x3u);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[14]); }
    if (COND_HI) { goto L_cd0a98; }
    c->r[4] = (c->r[4] << 2);
    c->r[7] = 0xcd0a14u + 0x4u;
    { uint32_t ea = c->r[4] + c->r[7]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->pc = c->r[4] + c->r[7]; switch (c->pc) { case 0xcd0a28u: goto L_cd0a28; case 0xcd0a40u: goto L_cd0a40; case 0xcd0a60u: goto L_cd0a60; case 0xcd0a84u: goto L_cd0a84; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd0a28:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_LE) { goto L_cd0a98; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = sdiv32(c->r[9], c->r[7]);
    goto L_cd0a98;
L_cd0a40:;
    (void)f_adds(c, c->r[12], 0x1u);
    if (COND_EQ) { goto L_cd0a94; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_LT) { goto L_cd0a8c; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_LT) { goto L_cd0a98; }
    c->r[7] = c->r[8] - 0x100u;
    goto L_cd0a74;
L_cd0a60:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_LT) { goto L_cd0a98; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + c->r[9];
L_cd0a74:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = sdiv32(c->r[7], c->r[6]);
    goto L_cd0a98;
L_cd0a84:;
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_GE) { goto L_cd0a98; }
L_cd0a8c:;
    c->r[6] = sdiv32(c->r[9], c->r[5]);
    goto L_cd0a98;
L_cd0a94:;
    c->r[6] = 0x0u;
L_cd0a98:;
    c->v.s[8] = c->r[1];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[8]); }
    c->v.s[4] = LD32(c->r[13] + 464u);
    c->v.s[6] = LD32(c->r[13] + 496u);
    c->v.s[2] = LD32(c->r[13] + 468u);
    c->v.s[10] = LD32(c->r[13] + 500u);
    c->v.s[0] = LD32(c->r[13] + 472u);
    c->r[4] = (uint32_t)(uint8_t)(c->r[3]);
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.s[12] = LD32(c->r[13] + 504u);
    c->v.s[14] = LD32(c->r[13] + 480u);
    c->v.s[5] = LD32(c->r[13] + 512u);
    c->v.s[7] = LD32(c->r[13] + 516u);
    c->v.s[9] = LD32(c->r[13] + 520u);
    c->v.f[1] = c->v.f[6] - c->v.f[4];
    c->v.s[6] = c->v.s[4];
    c->v.f[10] = c->v.f[10] - c->v.f[2];
    c->v.f[3] = c->v.f[16] * c->v.f[8];
    c->v.f[12] = c->v.f[12] - c->v.f[0];
    c->v.s[8] = c->v.s[2];
    c->v.f[5] = c->v.f[5] - c->v.f[14];
    c->v.s[11] = c->v.s[14];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[10]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[3] * c->v.f[5]);
    ST32(c->r[13] + 208u, c->v.s[6]);
    c->v.s[6] = c->v.s[0];
    ST32(c->r[13] + 212u, c->v.s[8]);
    c->v.s[8] = LD32(c->r[13] + 488u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[12]);
    c->v.s[15] = c->v.s[8];
    c->v.f[9] = c->v.f[9] - c->v.f[8];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[3] * c->v.f[9]);
    ST32(c->r[13] + 216u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 484u);
    ST32(c->r[13] + 272u, c->v.s[11]);
    c->v.f[11] = c->v.f[3] * c->v.f[18];
    c->v.f[7] = c->v.f[7] - c->v.f[6];
    c->v.s[13] = c->v.s[6];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[3] * c->v.f[7]);
    ST32(c->r[13] + 276u, c->v.s[13]);
    c->v.s[3] = vcvt_s32_f64((double)c->v.f[11]);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 280u, c->v.s[15]);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->v.s[3];
    c->v.s[3] = c->r[2];
    { uint32_t r = c->r[1] * c->r[8]; c->r[7] = r; }
    c->r[7] = c->r[0] + (c->r[7] >> 8);
    { uint32_t r = c->r[4] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = (c->r[3] << 16);
    c->r[3] = (c->r[3] & 0xff000000u) | ((c->r[14] << 0) & 0xffffffu);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[6] * c->r[3] + c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] & 0xff00u;
    { uint32_t r = c->r[6] * c->r[7]; c->r[7] = r; }
    c->r[7] = c->r[5] + (c->r[7] >> 8);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[7] = c->r[7] | c->r[3];
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[6] * c->r[3]; c->r[3] = r; }
    c->r[3] = c->r[5] + (c->r[3] >> 8);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[7] | (c->r[3] << 24);
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
    { uint32_t r = c->r[6] * c->r[5]; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.f[3] = (float)(int32_t)c->v.s[3];
    c->r[6] = c->r[5] + (c->r[6] >> 8);
    c->v.f[3] = c->v.f[16] * c->v.f[3];
    c->r[6] = (c->r[6] << 16);
    c->r[6] = uxtb16(c->r[6]);
    c->r[12] = c->r[7] | c->r[6];
    c->v.f[11] = c->v.f[3] * c->v.f[18];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[3] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[3] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[5]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[7]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[9]);
    c->v.s[11] = vcvt_s32_f64((double)c->v.f[11]);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[7] = c->v.s[11];
    c->r[1] = c->r[5] + (c->r[1] >> 8);
    { uint32_t r = c->r[4] * c->r[1]; c->r[1] = r; }
    { uint32_t r = c->r[7] * c->r[8]; c->r[6] = r; }
    { uint32_t r = c->r[7] * c->r[2]; c->r[7] = r; }
    c->r[1] = (c->r[1] << 16);
    c->r[6] = c->r[0] + (c->r[6] >> 8);
    c->r[7] = c->r[5] + (c->r[7] >> 8);
    c->r[1] = (c->r[1] & 0xff000000u) | ((c->r[14] << 0) & 0xffffffu);
    { uint32_t r = c->r[3] * c->r[6]; c->r[6] = r; }
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 336u, c->v.s[4]);
    ST32(c->r[13] + 340u, c->v.s[2]);
    ST32(c->r[13] + 344u, c->v.s[0]);
    ST32(c->r[13] + 400u, c->v.s[14]);
    ST32(c->r[13] + 404u, c->v.s[6]);
    ST32(c->r[13] + 408u, c->v.s[8]);
    c->r[6] = (c->r[6] << 16);
    c->r[3] = (c->r[3] << 16);
    c->r[6] = (c->r[6] & 0xff000000u) | ((c->r[12] << 0) & 0xffffffu);
    c->r[3] = (c->r[3] & 0xff000000u) | ((c->r[12] << 0) & 0xffffffu);
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_cd0c9c; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_cd0d54; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_cd0d60; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[12] = c->r[12] & 0xffffffu;
    c->r[14] = c->r[14] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[14]); }
    goto L_cd0d88;
L_cd0c9c:;
    c->r[1] = c->r[13] + 0xd0u;
    c->r[12] = c->r[13] + 0x220u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x218u;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd0d4cu; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_cd0f64;
L_cd0d54:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_cd0d88;
L_cd0d60:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_cd0d88; }
    c->r[12] = c->r[12] & 0xffffffu;
    c->r[14] = c->r[14] & 0xffffffu;
    c->r[3] = c->r[12];
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[14]); }
L_cd0d88:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[0] = c->r[0] + c->r[10];
    if (COND_EQ) { goto L_cd0db0; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cd0e28; }
    c->r[2] = 0x2u;
    c->r[7] = 0x3u;
    c->r[1] = c->r[3];
    goto L_cd0db8;
L_cd0db0:;
    c->r[2] = 0x0u;
    c->r[7] = 0x1u;
L_cd0db8:;
    c->r[3] = c->r[13] + 0xd0u;
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[6] = c->r[3];
    c->r[3] = c->r[6] + (c->r[7] << 6);
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] + (c->r[2] << 6);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffffffu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[5], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t r = c->r[3] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cd0eb4; }
    c->r[0] = c->r[1] & c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_cd0eb4; }
L_cd0e28:;
    c->r[1] = c->r[13] + 0xd0u;
    c->r[12] = c->r[13] + 0x220u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    goto L_cd0f3c;
L_cd0eb4:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[13] + 0x220u;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
L_cd0f3c:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x218u;
    c->r[14] = 0xcd0f64u; f_ce10bc(c);
L_cd0f64:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[8] = c->r[8] - 0x100u;
    c->r[9] = c->r[9] + 0x100u;
    c->r[0] = c->r[0] + c->r[10];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd08c4; }
    goto L_cd13c4;
L_cd0f88:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_HI) { goto L_cd13c4; }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[5] = c->r[9];
    c->v.s[2] = c->r[8];
    c->v.s[10] = c->r[6];
    c->v.s[8] = c->r[14];
    c->v.s[6] = c->r[2];
    c->v.s[7] = c->r[4];
    c->v.s[1] = c->r[5];
    c->v.s[14] = c->r[10];
    c->v.s[12] = c->r[12];
    c->r[8] = 0x0u;
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    goto L_cd1038;
L_cd1004:;
    c->v.s[0] = LD32(c->r[13] + 488u);
    c->v.s[12] = LD32(c->r[13] + 520u);
    c->v.s[2] = LD32(c->r[13] + 484u);
    c->v.s[14] = LD32(c->r[13] + 516u);
    c->v.s[10] = LD32(c->r[13] + 464u);
    c->v.s[8] = LD32(c->r[13] + 468u);
    c->v.s[6] = LD32(c->r[13] + 472u);
    c->v.s[4] = LD32(c->r[13] + 480u);
    c->v.s[1] = LD32(c->r[13] + 512u);
    c->v.s[3] = LD32(c->r[13] + 504u);
    c->v.s[5] = LD32(c->r[13] + 500u);
    c->v.s[7] = LD32(c->r[13] + 496u);
    c->r[8] = c->r[8] + 0x1u;
L_cd1038:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[7] = c->v.f[7] - c->v.f[10];
    c->v.f[5] = c->v.f[5] - c->v.f[8];
    c->v.s[13] = c->v.s[8];
    c->v.f[3] = c->v.f[3] - c->v.f[6];
    c->v.f[1] = c->v.f[1] - c->v.f[4];
    c->v.f[14] = c->v.f[14] - c->v.f[2];
    c->v.f[12] = c->v.f[12] - c->v.f[0];
    c->r[6] = 0xff000000u;
    c->r[10] = c->r[0] + c->r[8];
    c->v.s[9] = c->r[10];
    c->v.f[9] = (float)(int32_t)c->v.s[9];
    c->v.f[9] = c->v.f[16] * c->v.f[9];
    c->v.f[11] = c->v.f[9] * c->v.f[18];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[9] * c->v.f[5]);
    c->v.s[11] = vcvt_s32_f64((double)c->v.f[11]);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->v.s[11];
    c->v.s[11] = c->v.s[10];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[9] * c->v.f[7]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[1] = r; }
    { uint32_t r = c->r[0] * c->r[9]; c->r[0] = r; }
    c->r[1] = c->r[5] + (c->r[1] >> 8);
    { uint32_t r = c->r[7] * c->r[1]; c->r[1] = r; }
    ST32(c->r[13] + 208u, c->v.s[11]);
    c->v.s[11] = c->v.s[6];
    ST32(c->r[13] + 212u, c->v.s[13]);
    c->v.s[13] = c->v.s[4];
    c->r[1] = c->r[6] & (c->r[1] << 16);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[9] * c->v.f[3]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[9] * c->v.f[1]);
    c->r[1] = c->r[1] | c->r[3];
    ST32(c->r[13] + 216u, c->v.s[11]);
    c->v.s[11] = c->v.s[2];
    ST32(c->r[13] + 272u, c->v.s[13]);
    c->v.s[13] = c->v.s[0];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[9] * c->v.f[14]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[9] * c->v.f[12]);
    ST32(c->r[13] + 276u, c->v.s[11]);
    ST32(c->r[13] + 280u, c->v.s[13]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0x1u;
    c->v.s[9] = c->r[1];
    c->v.f[9] = (float)(int32_t)c->v.s[9];
    c->v.f[9] = c->v.f[16] * c->v.f[9];
    c->v.f[11] = c->v.f[9] * c->v.f[18];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[9] * c->v.f[7]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[9] * c->v.f[5]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[9] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[9] * c->v.f[1]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[9] * c->v.f[14]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[9] * c->v.f[12]);
    c->v.s[11] = vcvt_s32_f64((double)c->v.f[11]);
    c->r[1] = c->v.s[11];
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    { uint32_t r = c->r[1] * c->r[9]; c->r[1] = r; }
    c->r[2] = c->r[5] + (c->r[2] >> 8);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[7] * c->r[2]; c->r[2] = r; }
    c->r[0] = c->r[5] + (c->r[0] >> 8);
    c->r[1] = c->r[5] + (c->r[1] >> 8);
    c->r[2] = c->r[6] & (c->r[2] << 16);
    { uint32_t r = c->r[7] * c->r[0]; c->r[0] = r; }
    { uint32_t r = c->r[7] * c->r[1]; c->r[1] = r; }
    c->r[2] = c->r[2] | c->r[3];
    c->r[0] = c->r[6] & (c->r[0] << 16);
    c->r[1] = c->r[6] & (c->r[1] << 16);
    c->r[0] = c->r[0] | c->r[3];
    c->r[1] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 336u, c->v.s[10]);
    ST32(c->r[13] + 340u, c->v.s[8]);
    ST32(c->r[13] + 344u, c->v.s[6]);
    ST32(c->r[13] + 400u, c->v.s[4]);
    ST32(c->r[13] + 404u, c->v.s[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_cd1258; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_cd11b4; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_NE) { goto L_cd13a4; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[2]); }
    goto L_cd11b8;
L_cd11b4:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
L_cd11b8:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[2] = c->r[2] + c->r[8];
    if (COND_EQ) { goto L_cd11e0; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_cd1258; }
    c->r[3] = 0x2u;
    c->r[6] = 0x3u;
    c->r[0] = c->r[1];
    goto L_cd11e8;
L_cd11e0:;
    c->r[3] = 0x0u;
    c->r[6] = 0x1u;
L_cd11e8:;
    c->r[1] = c->r[13] + 0xd0u;
    c->r[0] = c->r[0] & 0xffffffu;
    c->r[7] = c->r[1];
    c->r[1] = c->r[7] + (c->r[6] << 6);
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[3] << 6);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[0]);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[5], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cd1318; }
    c->r[0] = c->r[0] & c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_cd1318; }
L_cd1258:;
    c->r[1] = c->r[13] + 0xd0u;
    c->r[12] = c->r[13] + 0x220u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
L_cd12e0:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x218u;
    c->r[14] = 0xcd1308u; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_LT) { goto L_cd1004; }
    goto L_cd13c4;
L_cd1318:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[13] + 0x220u;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    goto L_cd12e0;
L_cd13a4:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_NE) { goto L_cd11b8; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    goto L_cd11b8;
L_cd13c4:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { goto L_cd07ac; }
L_cd13d8:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_cd13e8(Cpu *restrict c) {
    FN_ENTER(0xcd13e8u);
L_cd13e8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x310u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[6] = 0x188u;
    c->r[3] = 0x180u;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x170u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[0] >> 16) - c->r[1];
    { uint32_t ea = c->r[5] + c->r[6]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + c->r[3]; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = (c->r[7] >> 4) & 0xfu;
    (void)f_subs(c, c->r[4], 0x0u);
    c->v.s[0] = c->r[6];
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5]);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    if (COND_EQ) { goto L_cd1484; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_cd1494; }
    c->r[8] = 0x0u;
    c->r[5] = 0x2u;
    c->r[10] = 0x1u;
    goto L_cd14a0;
L_cd1484:;
    c->r[8] = 0x2u;
    c->r[5] = 0x1u;
    c->r[10] = 0x0u;
    goto L_cd14a0;
L_cd1494:;
    c->r[8] = 0x1u;
    c->r[5] = 0x0u;
    c->r[10] = 0x2u;
L_cd14a0:;
    c->r[6] = c->r[1] + 0x2u;
    c->r[4] = (c->r[0] >> 16);
    (void)f_adds(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[4]); }
    if (COND_LT) { goto L_cd167c; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x210u;
    c->r[0] = (c->r[9] >> 1);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[2] + (c->r[8] << 2);
    c->r[6] = c->r[2] + (c->r[5] << 2);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = 0x0u;
    c->r[0] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[4] << 4);
    c->r[0] = c->r[0] - (c->r[2] << 4);
    c->r[2] = 0xd67d90u;
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0xcd14fcu + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_cd14fc:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[9], c->r[8]);
    if (COND_NE) { c->r[14] = c->r[14] + c->r[8]; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[4] = (c->r[14] << 12);
    c->r[4] = sdiv32(c->r[4], c->r[9]);
    c->r[0] = c->r[4] + 0x400u;
    c->r[4] = c->r[4] & 0xfffu;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[4] = c->r[5] + (c->r[4] << 2);
    c->r[0] = c->r[5] + (c->r[0] << 2);
    c->v.s[6] = LD32(c->r[4]);
    c->r[4] = 0x0u;
    c->v.s[8] = LD32(c->r[0]);
    c->r[0] = c->r[13] + 0x210u;
    c->v.f[10] = c->v.f[4] * c->v.f[6];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    ST32(c->r[12], c->v.s[10]);
    c->v.f[10] = c->v.f[4] * c->v.f[8];
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    ST32(c->r[6], c->v.s[10]);
    { uint32_t ea = c->r[0] + (c->r[10] << 2); ST32(ea, c->r[3]); }
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[1] = LD32(c->r[1] + 20u);
    c->v.s[9] = LD32(c->r[13] + 532u);
    c->v.s[5] = LD32(c->r[1] + 16u);
    c->v.s[3] = LD32(c->r[1] + 24u);
    c->v.s[7] = LD32(c->r[13] + 528u);
    c->v.s[11] = LD32(c->r[13] + 536u);
    c->v.s[13] = LD32(c->r[1] + 36u);
    c->v.s[15] = LD32(c->r[1] + 40u);
    c->v.s[16] = LD32(c->r[1] + 32u);
    c->v.f[5] = c->v.f[5] * c->v.f[9];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[14] * c->v.f[7]);
    c->v.f[14] = c->v.f[9] * c->v.f[3];
    c->v.f[1] = c->v.f[9] * c->v.f[1];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[7] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[7] * c->v.f[12]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[16] * c->v.f[11]);
    c->v.s[10] = LD32(c->r[1] + 48u);
    c->v.s[3] = LD32(c->r[1] + 52u);
    c->v.s[9] = LD32(c->r[1] + 56u);
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[15]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[11] * c->v.f[13]);
    c->v.f[10] = c->v.f[10] + c->v.f[5];
    c->v.f[12] = c->v.f[3] + c->v.f[1];
    c->v.f[14] = c->v.f[9] + c->v.f[14];
    ST32(c->r[2], c->v.s[10]);
    ST32(c->r[2] + 4u, c->v.s[12]);
    ST32(c->r[2] + 8u, c->v.s[14]);
    ST32(c->r[12], c->v.s[6]);
    ST32(c->r[6], c->v.s[8]);
    { uint32_t ea = c->r[0] + (c->r[10] << 2); ST32(ea, c->r[7]); }
    c->v.s[6] = LD32(c->r[1] + 4u);
    c->v.s[8] = LD32(c->r[1] + 8u);
    c->v.s[10] = LD32(c->r[1]);
    c->v.s[12] = LD32(c->r[1] + 20u);
    c->v.s[5] = LD32(c->r[13] + 532u);
    c->v.s[1] = LD32(c->r[1] + 16u);
    c->v.s[14] = LD32(c->r[1] + 24u);
    c->v.s[3] = LD32(c->r[13] + 528u);
    c->v.s[7] = LD32(c->r[13] + 536u);
    c->v.s[9] = LD32(c->r[1] + 36u);
    c->v.s[11] = LD32(c->r[1] + 40u);
    c->v.s[13] = LD32(c->r[1] + 32u);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] + c->r[0];
    c->r[2] = c->r[2] + 0x10u;
    c->v.f[1] = c->v.f[1] * c->v.f[5];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.f[10] = c->v.f[5] * c->v.f[14];
    c->v.f[12] = c->v.f[5] * c->v.f[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[3] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[13] * c->v.f[7]);
    c->v.s[6] = LD32(c->r[1] + 48u);
    c->v.s[14] = LD32(c->r[1] + 52u);
    c->v.s[5] = LD32(c->r[1] + 56u);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[11]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[7] * c->v.f[9]);
    c->v.f[6] = c->v.f[6] + c->v.f[1];
    c->v.f[8] = c->v.f[14] + c->v.f[12];
    c->v.f[10] = c->v.f[5] + c->v.f[10];
    ST32(c->r[0] + 32u, c->v.s[6]);
    ST32(c->r[0] + 36u, c->v.s[8]);
    ST32(c->r[0] + 40u, c->v.s[10]);
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_LT) { goto L_cd14fc; }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
L_cd167c:;
    c->r[0] = 0x11au;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[8]); }
    c->r[10] = c->r[0] + 0xc0u;
    c->r[5] = c->r[0] + 0x80u;
    c->r[3] = c->r[0];
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; c->r[7] = c->r[7] + 16u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[4] = LD32(ea + 12u); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[4]); c->r[5] = c->r[5] + 16u; }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[4] = LD32(ea + 12u); }
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[12]); }
    c->r[4] = c->r[3] + 0x40u;
    c->r[3] = c->r[12];
    c->r[2] = c->r[14];
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7]; c->r[7] = c->r[7] + 16u; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[12]); ST32(ea + 12u, c->r[14]); c->r[4] = c->r[4] + 16u; }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10]; c->r[10] = c->r[10] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[1] = c->r[13] + 0x194u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[8]); }
    c->r[14] = c->r[13] + 0x100u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] - 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[9] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = c->r[0];
    if (COND_NE) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cd231c; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[16] = c->v.f[2] / c->v.f[0];
    c->r[0] = c->r[0] + (c->r[1] << 4);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (c->r[0] >> 16);
    c->r[5] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & 0x80000u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] - (c->r[1] << 8);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x100u;
    c->r[0] = c->r[0] + (c->r[5] << 8);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] - c->r[6];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] - c->r[0];
    c->r[0] = (c->r[0] << 8);
    c->r[0] = c->r[0] - (c->r[5] << 8);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 16) & 0xffu;
    c->r[1] = (c->r[3] >> 16) & 0xffu;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 8) & 0xffu;
    c->r[1] = (c->r[3] >> 8) & 0xffu;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] - 0x1u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x210u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 16);
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 8);
    c->r[0] = (c->r[0] << 8);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cd1974:;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[1] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x10u;
    c->r[2] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x1d0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_cd1f90; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { goto L_cd2308; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[9] = 0x0u;
    goto L_cd1ab4;
L_cd1a48:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[13] + 0x210u;
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_cd1f24;
L_cd1ab4:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[12] = c->r[0] + c->r[9];
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = f_adds(c, c->r[0], c->r[9]);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_cd1b80; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] - 0x1u;
    c->r[0] = 0x100u;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_HI) { goto L_cd1b80; }
    c->r[3] = (c->r[3] << 2);
    c->r[7] = 0xcd1af0u + 0x4u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3] + c->r[7]; switch (c->pc) { case 0xcd1b04u: goto L_cd1b04; case 0xcd1b24u: goto L_cd1b24; case 0xcd1b4cu: goto L_cd1b4c; case 0xcd1b70u: goto L_cd1b70; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd1b04:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[0] = 0x100u;
    if (COND_LE) { goto L_cd1b80; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] - 0x100u;
    c->r[0] = sdiv32(c->r[0], c->r[2]);
    goto L_cd1b80;
L_cd1b24:;
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_cd1b80; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_LT) { goto L_cd1b78; }
    c->r[0] = 0x100u;
    if (COND_LE) { goto L_cd1b80; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = sdiv32(c->r[8], c->r[0]);
    goto L_cd1b80;
L_cd1b4c:;
    (void)f_subs(c, c->r[1], c->r[6]);
    c->r[0] = 0x0u;
    if (COND_LE) { goto L_cd1b80; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[10];
    c->r[0] = c->r[0] - 0x100u;
    c->r[0] = sdiv32(c->r[0], c->r[2]);
    goto L_cd1b80;
L_cd1b70:;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_GE) { goto L_cd1b80; }
L_cd1b78:;
    c->r[0] = c->r[10] - 0x100u;
    c->r[0] = sdiv32(c->r[0], c->r[6]);
L_cd1b80:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = 0x100u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[3]; c->r[3] = r; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] & 0xff00u;
    { uint32_t r = c->r[0] * c->r[2]; c->r[7] = r; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[2] + (c->r[7] >> 8);
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[3] = c->r[7] | c->r[3];
    { uint32_t r = c->r[0] * c->r[2]; c->r[7] = r; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[2] + (c->r[7] >> 8);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 24);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + (c->r[0] >> 8);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[0] << 16);
    c->r[0] = uxtb16(c->r[0]);
    c->r[7] = c->r[2] - 0x1u;
    c->r[0] = c->r[3] | c->r[0];
    c->r[3] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[7], 0x3u);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    if (COND_HI) { goto L_cd1c84; }
    c->r[7] = (c->r[7] << 2);
    c->r[2] = 0xcd1c04u + 0x4u;
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->pc = c->r[7] + c->r[2]; switch (c->pc) { case 0xcd1c18u: goto L_cd1c18; case 0xcd1c30u: goto L_cd1c30; case 0xcd1c50u: goto L_cd1c50; case 0xcd1c70u: goto L_cd1c70; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd1c18:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_LE) { goto L_cd1c84; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = sdiv32(c->r[10], c->r[2]);
    goto L_cd1c84;
L_cd1c30:;
    (void)f_adds(c, c->r[12], 0x1u);
    if (COND_EQ) { goto L_cd1c80; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_LT) { goto L_cd1c78; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_LT) { goto L_cd1c84; }
    c->r[2] = c->r[8] - 0x100u;
    goto L_cd1c64;
L_cd1c50:;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_LT) { goto L_cd1c84; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[10];
L_cd1c64:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = sdiv32(c->r[2], c->r[7]);
    goto L_cd1c84;
L_cd1c70:;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_GE) { goto L_cd1c84; }
L_cd1c78:;
    c->r[4] = sdiv32(c->r[10], c->r[6]);
    goto L_cd1c84;
L_cd1c80:;
    c->r[4] = 0x0u;
L_cd1c84:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[0] = c->r[1];
    c->v.s[2] = LD32(c->r[13] + 448u);
    c->v.s[8] = LD32(c->r[13] + 480u);
    c->v.s[4] = LD32(c->r[13] + 452u);
    c->v.s[6] = LD32(c->r[13] + 456u);
    c->v.s[11] = c->r[3];
    { uint32_t r = c->r[4] * c->r[2] + c->r[7]; c->r[2] = r; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.s[14] = c->v.s[2];
    c->v.s[1] = c->v.s[4];
    c->r[2] = c->r[2] & 0xff00u;
    { uint32_t r = c->r[4] * c->r[7]; c->r[7] = r; }
    c->r[7] = c->r[6] + (c->r[7] >> 8);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[2] = c->r[7] | c->r[2];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[4] * c->r[7]; c->r[7] = r; }
    c->r[7] = c->r[6] + (c->r[7] >> 8);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[2] | (c->r[7] << 24);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[4] * c->r[7]; c->r[7] = r; }
    c->r[7] = c->r[6] + (c->r[7] >> 8);
    c->r[7] = (c->r[7] << 16);
    c->r[7] = uxtb16(c->r[7]);
    c->r[2] = c->r[2] | c->r[7];
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[2]); }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.s[10] = LD32(c->r[13] + 484u);
    c->v.s[12] = LD32(c->r[13] + 488u);
    c->v.s[5] = LD32(c->r[13] + 496u);
    c->v.s[3] = LD32(c->r[13] + 472u);
    c->v.s[9] = LD32(c->r[13] + 504u);
    c->v.s[7] = LD32(c->r[13] + 500u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[10] = c->v.f[10] - c->v.f[4];
    c->v.f[12] = c->v.f[12] - c->v.f[6];
    c->v.f[9] = c->v.f[9] - c->v.f[3];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[10]);
    ST32(c->r[13] + 192u, c->v.s[14]);
    c->v.s[14] = c->v.s[6];
    ST32(c->r[13] + 196u, c->v.s[1]);
    c->v.s[1] = LD32(c->r[13] + 468u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.s[15] = c->v.s[1];
    c->v.f[7] = c->v.f[7] - c->v.f[1];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[0] * c->v.f[7]);
    ST32(c->r[13] + 200u, c->v.s[14]);
    c->v.s[14] = LD32(c->r[13] + 464u);
    c->v.f[11] = (float)(int32_t)c->v.s[11];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->v.f[5] = c->v.f[5] - c->v.f[14];
    c->v.s[13] = c->v.s[14];
    c->v.f[11] = c->v.f[16] * c->v.f[11];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[0] * c->v.f[5]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[11] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[11] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[11] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[5]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[11] * c->v.f[7]);
    ST32(c->r[13] + 256u, c->v.s[13]);
    c->v.s[13] = c->v.s[3];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[11] * c->v.f[9]);
    ST32(c->r[13] + 260u, c->v.s[15]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[0] * c->v.f[9]);
    ST32(c->r[13] + 264u, c->v.s[13]);
    ST32(c->r[13] + 320u, c->v.s[2]);
    ST32(c->r[13] + 324u, c->v.s[4]);
    ST32(c->r[13] + 328u, c->v.s[6]);
    ST32(c->r[13] + 384u, c->v.s[14]);
    ST32(c->r[13] + 388u, c->v.s[1]);
    ST32(c->r[13] + 392u, c->v.s[3]);
    if (COND_EQ) { goto L_cd1ebc; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_cd1e1c; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_cd1e00; }
    c->r[1] = c->r[2];
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[1]); }
    goto L_cd1e1c;
L_cd1e00:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_cd1e1c; }
    c->r[2] = c->r[2] & 0xffffffu;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
L_cd1e1c:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[1] = c->r[1] + c->r[9];
    if (COND_EQ) { goto L_cd1e44; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_cd1ebc; }
    c->r[3] = 0x2u;
    c->r[4] = 0x3u;
    c->r[0] = c->r[2];
    goto L_cd1e4c;
L_cd1e44:;
    c->r[3] = 0x0u;
    c->r[4] = 0x1u;
L_cd1e4c:;
    c->r[2] = c->r[13] + 0xc0u;
    c->r[0] = c->r[0] & 0xffffffu;
    c->r[7] = c->r[2];
    c->r[2] = c->r[7] + (c->r[4] << 6);
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[3] << 6);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffffffu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[0]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[6], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t r = c->r[3] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cd1a48; }
    c->r[0] = c->r[0] & c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_cd1a48; }
L_cd1ebc:;
    c->r[1] = c->r[13] + 0xc0u;
    c->r[12] = c->r[13] + 0x210u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cd1f24:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[1] = c->r[12];
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x208u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd1f6cu; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[8] = c->r[8] - 0x100u;
    c->r[10] = c->r[10] + 0x100u;
    c->r[0] = c->r[0] + c->r[9];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd1ab4; }
    goto L_cd2308;
L_cd1f90:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_HI) { goto L_cd2308; }
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[14] = c->r[8];
    c->v.s[10] = c->r[12];
    c->v.s[6] = c->r[6];
    c->v.s[4] = c->r[5];
    c->v.s[2] = c->r[4];
    c->v.s[0] = c->r[10];
    c->v.s[5] = c->r[14];
    c->v.s[3] = c->r[1];
    c->v.s[1] = c->r[2];
    c->v.s[12] = c->r[9];
    c->r[8] = 0x0u;
    c->v.s[7] = c->r[0];
    goto L_cd201c;
L_cd1fe8:;
    c->v.s[0] = LD32(c->r[13] + 472u);
    c->v.s[12] = LD32(c->r[13] + 504u);
    c->v.s[2] = LD32(c->r[13] + 468u);
    c->v.s[14] = LD32(c->r[13] + 500u);
    c->v.s[10] = LD32(c->r[13] + 448u);
    c->v.s[8] = LD32(c->r[13] + 452u);
    c->v.s[6] = LD32(c->r[13] + 456u);
    c->v.s[4] = LD32(c->r[13] + 464u);
    c->v.s[1] = LD32(c->r[13] + 496u);
    c->v.s[3] = LD32(c->r[13] + 488u);
    c->v.s[5] = LD32(c->r[13] + 484u);
    c->v.s[7] = LD32(c->r[13] + 480u);
    c->r[8] = c->r[8] + 0x1u;
L_cd201c:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[7] = c->v.f[7] - c->v.f[10];
    c->v.s[11] = c->v.s[10];
    c->v.f[5] = c->v.f[5] - c->v.f[8];
    c->v.s[13] = c->v.s[8];
    c->v.f[3] = c->v.f[3] - c->v.f[6];
    c->v.f[1] = c->v.f[1] - c->v.f[4];
    c->v.s[15] = c->v.s[4];
    c->v.f[14] = c->v.f[14] - c->v.f[2];
    c->v.f[12] = c->v.f[12] - c->v.f[0];
    c->r[9] = c->r[0] + c->r[8];
    c->v.s[9] = c->r[9];
    c->r[0] = c->r[9] + 0x1u;
    c->v.f[9] = (float)(int32_t)c->v.s[9];
    c->v.f[9] = c->v.f[16] * c->v.f[9];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[9] * c->v.f[7]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[9] * c->v.f[5]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[9] * c->v.f[1]);
    ST32(c->r[13] + 192u, c->v.s[11]);
    c->v.s[11] = c->v.s[6];
    ST32(c->r[13] + 196u, c->v.s[13]);
    c->v.s[13] = c->r[0];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[9] * c->v.f[3]);
    ST32(c->r[13] + 200u, c->v.s[11]);
    c->v.f[11] = (float)(int32_t)c->v.s[13];
    c->v.s[13] = c->v.s[2];
    ST32(c->r[13] + 256u, c->v.s[15]);
    c->v.s[15] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[9] * c->v.f[14]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[9] * c->v.f[12]);
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[11] = c->v.f[16] * c->v.f[11];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[11] * c->v.f[7]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[11] * c->v.f[5]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[11] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[11] * c->v.f[1]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[11] * c->v.f[14]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[11] * c->v.f[12]);
    ST32(c->r[13] + 260u, c->v.s[13]);
    ST32(c->r[13] + 264u, c->v.s[15]);
    ST32(c->r[13] + 320u, c->v.s[10]);
    ST32(c->r[13] + 324u, c->v.s[8]);
    ST32(c->r[13] + 328u, c->v.s[6]);
    ST32(c->r[13] + 384u, c->v.s[4]);
    ST32(c->r[13] + 388u, c->v.s[2]);
    ST32(c->r[13] + 392u, c->v.s[0]);
    if (COND_EQ) { goto L_cd21dc; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_cd2144; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_cd2124; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    goto L_cd2144;
L_cd2124:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_cd2144; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
L_cd2144:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[0] = c->r[0] + c->r[8];
    if (COND_EQ) { goto L_cd2168; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cd21dc; }
    c->r[2] = 0x2u;
    c->r[3] = 0x3u;
    goto L_cd2170;
L_cd2168:;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
L_cd2170:;
    c->r[7] = c->r[13] + 0xc0u;
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[3] = c->r[7] + (c->r[3] << 6);
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7] + (c->r[2] << 6);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffffffu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[1]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[6], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t r = c->r[3] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cd229c; }
    c->r[0] = c->r[1] & c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_cd229c; }
L_cd21dc:;
    c->r[1] = c->r[13] + 0xc0u;
    c->r[12] = c->r[13] + 0x210u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cd2244:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[1] = c->r[12];
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x208u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd228cu; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_LT) { goto L_cd1fe8; }
    goto L_cd2308;
L_cd229c:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[13] + 0x210u;
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_cd2244;
L_cd2308:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { goto L_cd1974; }
L_cd231c:;
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_cd2330(Cpu *restrict c) {
    FN_ENTER(0xcd2330u);
L_cd2330:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x368u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x184u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x188u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[6] = (uint32_t)(uint16_t)(c->r[14]);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[7]);
    ST32(c->r[13] + 216u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[7] + 4u);
    ST32(c->r[13] + 212u, c->v.s[0]);
    c->v.s[0] = c->r[6];
    c->v.s[16] = LD32(c->r[7] + 8u);
    c->v.s[10] = LD32(c->r[7] + 12u);
    { uint32_t ea = c->r[3] + 0x180u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[9] = v; }
    c->r[0] = (c->r[10] >> 4) & 0xfu;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[20] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_cd23d8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cd23e8; }
    c->r[5] = 0x0u;
    c->r[12] = 0x2u;
    c->r[0] = 0x1u;
    goto L_cd23f4;
L_cd23d8:;
    c->r[5] = 0x2u;
    c->r[12] = 0x1u;
    c->r[0] = 0x0u;
    goto L_cd23f4;
L_cd23e8:;
    c->r[5] = 0x1u;
    c->r[12] = 0x0u;
    c->r[0] = 0x2u;
L_cd23f4:;
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[13] + 212u);
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[6]); }
    c->v.s[0] = LD32(c->r[4] + 564u);
    c->v.s[17] = c->v.s[22];
    c->r[0] = (c->r[1] >> 16) - c->r[0];
    ST32(c->r[13] + 220u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->v.s[30] = LD32(c->r[4] + 560u);
    { uint32_t ea = c->r[4] + 0x238u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x23cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = 0x3c23d70au;
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[6]); }
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd24c4; }
    c->v.f[4] = c->v.f[10] - c->v.f[16];
    c->v.f[4] = fabsf(c->v.f[4]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cd2478; }
    c->v.s[17] = 0x0u;
    c->r[2] = 0x3f800000u;
    goto L_cd24c0;
L_cd2478:;
    c->v.f[2] = c->v.f[0] * c->v.f[0];
    c->v.s[6] = LD32(c->r[13] + 216u);
    c->v.s[8] = LD32(c->r[13] + 212u);
    c->v.f[2] = c->v.f[2] / c->v.f[4];
    vfp_cmp_f(c, c->v.f[6], c->v.f[8]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[16], c->v.f[10]);
    c->v.s[4] = c->v.s[2] ^ 0x80000000u;
    c->v.s[2] = COND_GT ? c->v.s[4] : c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cd24b8; }
    c->r[4] = c->v.s[2];
    c->r[2] = c->r[4] ^ 0x80000000u;
    goto L_cd24bc;
L_cd24b8:;
    c->r[2] = c->v.s[2];
L_cd24bc:;
    c->v.s[17] = c->v.s[0];
L_cd24c0:;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[2]); }
L_cd24c4:;
    c->r[2] = c->r[0] + 0x2u;
    c->r[4] = (c->r[1] >> 16);
    (void)f_adds(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[2]); }
    c->r[2] = (uint32_t)(uint16_t)(c->r[9]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_cd2a90; }
    c->r[1] = (c->r[2] >> 1);
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[10] >> 28);
    c->v.s[0] = LD32(c->r[13] + 220u);
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->v.s[23] = 0xbf800000u;
    c->v.s[25] = 0x3f800000u;
    c->r[8] = 0x0u;
    ST32(c->r[13] + 144u, c->v.s[20]);
    ST32(c->r[13] + 192u, c->v.s[10]);
    c->r[0] = c->r[0] | (c->r[2] << 4);
    c->r[2] = c->r[13] + 0x260u;
    c->r[3] = c->r[2] + (c->r[3] << 2);
    c->v.f[0] = c->v.f[0] - c->v.f[30];
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] + (c->r[12] << 2);
    c->r[2] = c->r[2] + (c->r[5] << 2);
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] + (c->r[12] << 2);
    c->r[2] = c->r[2] + (c->r[5] << 2);
    c->r[5] = 0x0u;
    ST32(c->r[13] + 160u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[2];
    c->r[2] = 0x48u;
    c->r[1] = c->r[7] - c->r[1];
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[4] << 4);
    c->r[1] = c->r[1] - (c->r[7] << 4);
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    c->r[1] = 0x40u;
    c->r[1] = c->r[1] + (c->r[4] << 5);
    c->r[1] = c->r[1] - (c->r[7] << 5);
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + (c->r[4] << 3);
    c->r[4] = c->r[0] & 0x2u;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = c->r[7] + (c->r[7] << 3);
    c->r[7] = 0x0u;
    c->r[1] = c->r[1] - (c->r[2] << 2);
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] & 0x4u;
    c->r[0] = 0xd66cc0u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xcd25ccu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_cd25c8:;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0xf0u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_NE) { c->r[0] = c->r[0] + c->r[5]; }
    c->r[0] = (c->r[0] << 12);
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    c->v.s[27] = LD32(c->r[0]);
    c->r[0] = c->r[6] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[19] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[17] * c->v.f[27];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[17] * c->v.f[19];
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    c->v.s[4] = LD32(c->r[10] + 20u);
    c->v.s[8] = LD32(c->r[13] + 244u);
    c->v.s[0] = LD32(c->r[10] + 16u);
    c->v.s[6] = LD32(c->r[13] + 240u);
    c->v.s[12] = LD32(c->r[10] + 4u);
    c->v.s[1] = LD32(c->r[10]);
    c->v.s[2] = LD32(c->r[10] + 24u);
    c->v.s[10] = LD32(c->r[13] + 248u);
    c->v.s[14] = LD32(c->r[10] + 8u);
    c->v.s[3] = LD32(c->r[10] + 36u);
    c->v.s[5] = LD32(c->r[10] + 40u);
    c->v.f[31] = c->v.f[8] * c->v.f[4];
    c->v.s[4] = LD32(c->r[10] + 32u);
    c->v.f[22] = c->v.f[0] * c->v.f[8];
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[20] = c->v.f[8] * c->v.f[2];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[6] * c->v.f[14]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.f[0] = c->v.f[31] * c->v.f[31];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd269c; }
    c->r[14] = 0xcd2698u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cd269c:;
    c->v.s[0] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd26bc; }
    c->v.f[0] = c->v.f[25] / c->v.f[2];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.f[31] = c->v.f[31] * c->v.f[0];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
L_cd26bc:;
    c->v.s[2] = LD32(c->r[13] + 216u);
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 240u, c->v.s[22]);
    ST32(c->r[13] + 244u, c->v.s[31]);
    ST32(c->r[13] + 248u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[7]); }
    c->v.s[18] = c->v.s[16];
    c->v.f[0] = c->v.f[2] * c->v.f[27];
    c->v.f[2] = c->v.f[2] * c->v.f[19];
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[16]);
    c->v.s[0] = LD32(c->r[10] + 4u);
    c->v.s[2] = LD32(c->r[10] + 8u);
    c->v.s[4] = LD32(c->r[10]);
    c->v.s[6] = LD32(c->r[10] + 20u);
    c->v.s[14] = LD32(c->r[13] + 612u);
    c->v.s[10] = LD32(c->r[10] + 16u);
    c->v.s[8] = LD32(c->r[10] + 24u);
    c->v.s[12] = LD32(c->r[13] + 608u);
    c->v.s[1] = LD32(c->r[13] + 616u);
    c->v.s[3] = LD32(c->r[10] + 36u);
    c->v.s[5] = LD32(c->r[10] + 40u);
    c->v.s[7] = LD32(c->r[10] + 32u);
    c->v.s[9] = LD32(c->r[10] + 56u);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[8] = LD32(c->r[10] + 48u);
    c->v.s[14] = LD32(c->r[10] + 52u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[24] = c->v.f[8] + c->v.f[10];
    c->v.f[26] = c->v.f[14] + c->v.f[6];
    c->v.f[29] = c->v.f[9] + c->v.f[4];
    ST32(c->r[13] + 608u, c->v.s[24]);
    ST32(c->r[13] + 612u, c->v.s[26]);
    ST32(c->r[13] + 616u, c->v.s[29]);
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[7]); }
    c->v.s[0] = LD32(c->r[9]);
    c->v.s[2] = LD32(c->r[9] + 4u);
    c->v.s[4] = LD32(c->r[9] + 8u);
    c->v.f[16] = c->v.f[2] - c->v.f[26];
    c->v.f[28] = c->v.f[0] - c->v.f[24];
    c->v.f[21] = c->v.f[4] - c->v.f[29];
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd27ac; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcd27acu; f_15efddc(c);
L_cd27ac:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd27cc; }
    c->v.f[0] = c->v.f[25] / c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
L_cd27cc:;
    c->v.f[2] = c->v.f[16] * c->v.f[31];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[22]);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[23];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[20]);
    c->r[0] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    ST32(c->r[0], c->v.s[24]);
    ST32(c->r[0] + 4u, c->v.s[26]);
    ST32(c->r[0] + 8u, c->v.s[29]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd2810; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[25]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[25]; }
L_cd2810:;
    (void)f_subs(c, c->r[4], 0x0u);
    c->v.s[16] = LD32(c->r[13] + 192u);
    c->v.s[29] = 0x43800000u;
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcd2824u; f_15efe24(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[30]);
    c->v.s[2] = c->v.s[25];
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cd2864; }
    c->v.s[2] = LD32(c->r[13] + 220u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->v.s[2] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cd2864; }
    c->v.s[2] = LD32(c->r[13] + 220u);
    c->r[0] = c->r[13] + 0x210u;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 160u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcd2860u; f_9c5814(c);
    c->v.s[2] = c->v.s[0];
L_cd2864:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[25] - c->v.f[2];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[29];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->v.s[2] = LD32(c->r[13] + 212u);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->v.f[0] = c->v.f[2] * c->v.f[27];
    c->v.f[2] = c->v.f[2] * c->v.f[19];
    { uint32_t ea = c->r[1] + (c->r[5] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[16]);
    c->v.s[0] = LD32(c->r[10] + 4u);
    c->v.s[2] = LD32(c->r[10] + 8u);
    c->v.s[4] = LD32(c->r[10]);
    c->v.s[6] = LD32(c->r[10] + 20u);
    c->v.s[14] = LD32(c->r[13] + 612u);
    c->v.s[10] = LD32(c->r[10] + 16u);
    c->v.s[8] = LD32(c->r[10] + 24u);
    c->v.s[12] = LD32(c->r[13] + 608u);
    c->v.s[1] = LD32(c->r[13] + 616u);
    c->v.s[3] = LD32(c->r[10] + 36u);
    c->v.s[5] = LD32(c->r[10] + 40u);
    c->v.s[7] = LD32(c->r[10] + 32u);
    c->v.s[9] = LD32(c->r[10] + 56u);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[8] = LD32(c->r[10] + 48u);
    c->v.s[14] = LD32(c->r[10] + 52u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[24] = c->v.f[8] + c->v.f[10];
    c->v.f[26] = c->v.f[14] + c->v.f[6];
    c->v.f[19] = c->v.f[9] + c->v.f[4];
    ST32(c->r[13] + 608u, c->v.s[24]);
    ST32(c->r[13] + 612u, c->v.s[26]);
    ST32(c->r[13] + 616u, c->v.s[19]);
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[7]); }
    c->v.s[0] = LD32(c->r[9]);
    c->v.s[2] = LD32(c->r[9] + 4u);
    c->v.s[4] = LD32(c->r[9] + 8u);
    c->v.f[16] = c->v.f[2] - c->v.f[26];
    c->v.f[28] = c->v.f[0] - c->v.f[24];
    c->v.f[21] = c->v.f[4] - c->v.f[19];
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd2964; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcd2964u; f_15efddc(c);
L_cd2964:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd2984; }
    c->v.f[0] = c->v.f[25] / c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
L_cd2984:;
    c->v.f[2] = c->v.f[16] * c->v.f[31];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[22]);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[23];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[20]);
    c->r[0] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    ST32(c->r[0] + 32u, c->v.s[24]);
    ST32(c->r[0] + 36u, c->v.s[26]);
    ST32(c->r[0] + 40u, c->v.s[19]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd29c8; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[25]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[25]; }
L_cd29c8:;
    (void)f_subs(c, c->r[4], 0x0u);
    c->v.s[16] = c->v.s[18];
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcd29d8u; f_15efe24(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[30]);
    c->v.s[2] = c->v.s[25];
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cd2a18; }
    c->v.s[2] = LD32(c->r[13] + 220u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->v.s[2] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cd2a18; }
    c->v.s[2] = LD32(c->r[13] + 220u);
    c->r[0] = c->r[13] + 0x210u;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 160u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcd2a14u; f_9c5814(c);
    c->v.s[2] = c->v.s[0];
L_cd2a18:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[25] - c->v.f[2];
    c->r[8] = c->r[8] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[29];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[1] + (c->r[5] << 2); ST32(ea, c->r[0]); }
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LT) { goto L_cd25c8; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->v.s[20] = LD32(c->r[13] + 144u);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->v.s[22] = 0x3f800000u;
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0xau; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[9];
    c->r[0] = c->r[2] | (c->r[0] << 16);
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 16);
    goto L_cd2aa4;
L_cd2a90:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[9] >> 16);
    c->r[1] = c->r[0] | (c->r[1] << 16);
    c->r[0] = (c->r[14] >> 16);
    c->r[0] = c->r[0] | (c->r[2] << 16);
L_cd2aa4:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[16] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[18] = c->v.s[16];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { goto L_cd2ae0; }
    c->r[3] = c->r[2] + 0x1u;
    c->v.s[0] = 0x3f800000u;
    c->v.s[2] = c->r[3];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[18] = c->v.f[0] / c->v.f[2];
L_cd2ae0:;
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cd2b04; }
    c->r[0] = c->r[3] + 0x1u;
    c->v.s[0] = 0x3f800000u;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[16] = c->v.f[0] / c->v.f[2];
L_cd2b04:;
    c->r[0] = 0x11au;
    c->r[10] = 0x0u;
    c->r[2] = c->r[13] + 0x1f0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xcd2b60u; f_ce0de8(c);
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    c->r[14] = c->r[0] + 0xc0u;
    c->r[2] = c->r[0] + 0x80u;
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[14];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); c->r[2] = c->r[2] + 16u; }
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1d0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[10]); }
    c->r[5] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; c->r[6] = c->r[6] + 16u; c->r[1] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); c->r[9] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[12]); c->r[5] = c->r[5] + 16u; }
    c->r[12] = c->r[4];
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[14]); }
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[13] + 0x1c4u;
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[14]; c->r[14] = c->r[14] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    c->r[14] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); }
    c->r[0] = c->r[13] + 0x114u;
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[10]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] - 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0x44u; ST16(ea, c->r[0]); }
    c->r[14] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13] + 0x1f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[3], c->r[0]);
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = c->r[0];
    if (COND_NE) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_CC) { goto L_cd3be0; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.f[20] = c->v.f[22] / c->v.f[20];
    c->v.s[29] = 0x43800000u;
    c->r[0] = c->r[0] + (c->r[5] << 4);
    c->r[3] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[6] = (c->r[6] >> 16);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[5] << 2);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x80u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & 0x80000u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] - (c->r[1] << 8);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x100u;
    c->r[0] = c->r[0] + (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] - c->r[6];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] - c->r[0];
    c->r[0] = (c->r[0] << 8);
    c->r[0] = c->r[0] - (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[7] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 16) & 0xffu;
    c->r[1] = (c->r[7] >> 16) & 0xffu;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 8) & 0xffu;
    c->r[1] = (c->r[7] >> 8) & 0xffu;
    c->v.s[26] = LD32(c->r[13] + 504u);
    c->v.s[2] = LD32(c->r[13] + 520u);
    c->v.s[17] = LD32(c->r[13] + 512u);
    c->v.s[22] = LD32(c->r[13] + 496u);
    c->v.s[24] = LD32(c->r[13] + 500u);
    c->v.s[28] = LD32(c->r[13] + 508u);
    c->v.s[0] = LD32(c->r[13] + 524u);
    c->v.s[30] = LD32(c->r[13] + 516u);
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] - 0x1u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x260u;
    c->v.f[23] = c->v.f[2] - c->v.f[26];
    c->v.f[2] = c->v.f[2] - c->v.f[17];
    c->v.f[19] = c->v.f[0] - c->v.f[28];
    c->v.f[0] = c->v.f[0] - c->v.f[30];
    c->v.f[21] = c->v.f[30] - c->v.f[24];
    c->v.f[25] = c->v.f[17] - c->v.f[22];
    c->v.f[27] = c->v.f[28] - c->v.f[24];
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 32u, c->v.s[2]);
    c->v.f[2] = c->v.f[26] - c->v.f[22];
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2];
    c->r[0] = c->r[0] & 0xffffffu;
    ST32(c->r[13] + 28u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 16);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 8);
    c->r[0] = (c->r[0] << 8);
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cd2ec4:;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x0u;
    c->r[2] = c->r[5] - c->r[0];
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[0] + (c->r[2] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[3] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + (c->r[3] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[0] + (c->r[2] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + (c->r[3] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_cd3038; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = sdiv32(c->r[5], c->r[3]);
    c->r[2] = c->r[5] - c->r[2] * c->r[3];
    c->v.s[0] = c->r[2];
    c->r[2] = c->r[2] + 0x1u;
    c->v.s[2] = c->r[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    if (COND_NE) { goto L_cd2ff8; }
    c->v.s[4] = c->v.s[24];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[8] = LD32(c->r[13] + 24u);
    c->v.s[6] = c->v.s[30];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[27]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[0] = c->v.f[18] * c->v.f[2];
    c->v.s[2] = c->v.s[24];
    ST32(c->r[13] + 268u, c->v.s[4]);
    c->v.s[4] = c->v.s[30];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[27]);
    ST32(c->r[13] + 396u, c->v.s[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[8]);
    ST32(c->r[13] + 332u, c->v.s[2]);
    ST32(c->r[13] + 460u, c->v.s[4]);
    goto L_cd3038;
L_cd2ff8:;
    c->v.s[10] = LD32(c->r[13] + 28u);
    c->v.s[4] = c->v.s[22];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[8] = LD32(c->r[13] + 32u);
    c->v.s[6] = c->v.s[17];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[0] = c->v.f[18] * c->v.f[2];
    c->v.s[2] = c->v.s[22];
    ST32(c->r[13] + 264u, c->v.s[4]);
    c->v.s[4] = c->v.s[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[10]);
    ST32(c->r[13] + 392u, c->v.s[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[8]);
    ST32(c->r[13] + 328u, c->v.s[2]);
    ST32(c->r[13] + 456u, c->v.s[4]);
L_cd3038:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_cd3738; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_HI) { goto L_cd3bcc; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[8] = 0x0u;
    c->r[1] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    goto L_cd30ec;
L_cd3080:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[13] + 0x260u;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_cd36b4;
L_cd30ec:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[4];
    c->r[12] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = f_adds(c, c->r[0], c->r[8]);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_cd31bc; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x100u;
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_HI) { goto L_cd31bc; }
    c->r[2] = (c->r[2] << 2);
    c->r[7] = 0xcd3128u + 0x4u;
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[7]; switch (c->pc) { case 0xcd313cu: goto L_cd313c; case 0xcd3154u: goto L_cd3154; case 0xcd3180u: goto L_cd3180; case 0xcd31a4u: goto L_cd31a4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd313c:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[0] = 0x100u;
    if (COND_LE) { goto L_cd31bc; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cd31b4;
L_cd3154:;
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_cd31bc; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_cd31b4; }
    c->r[0] = 0x100u;
    if (COND_LE) { goto L_cd31bc; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = sdiv32(c->r[3], c->r[0]);
    goto L_cd31bc;
L_cd3180:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_LE) { goto L_cd31bc; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[10];
    c->r[0] = c->r[0] - 0x100u;
    goto L_cd31b8;
L_cd31a4:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GE) { goto L_cd31bc; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_cd31b4:;
    c->r[0] = c->r[10] - 0x100u;
L_cd31b8:;
    c->r[0] = sdiv32(c->r[0], c->r[2]);
L_cd31bc:;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x100u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[3]; c->r[2] = r; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] & 0xff00u;
    { uint32_t r = c->r[0] * c->r[3]; c->r[7] = r; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] + (c->r[7] >> 8);
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[7] = c->r[7] | c->r[2];
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[3] + (c->r[2] >> 8);
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[7] | (c->r[2] << 24);
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] + (c->r[0] >> 8);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[0] << 16);
    c->r[0] = uxtb16(c->r[0]);
    c->r[6] = c->r[3] - 0x1u;
    c->r[14] = c->r[7] | c->r[0];
    c->r[7] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[6], 0x3u);
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[14]); }
    if (COND_HI) { goto L_cd32d4; }
    c->r[6] = (c->r[6] << 2);
    c->r[3] = 0xcd3244u + 0x4u;
    { uint32_t ea = c->r[6] + c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->pc = c->r[6] + c->r[3]; switch (c->pc) { case 0xcd3258u: goto L_cd3258; case 0xcd326cu: goto L_cd326c; case 0xcd3294u: goto L_cd3294; case 0xcd32b8u: goto L_cd32b8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd3258:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_LE) { goto L_cd32d4; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cd32c8;
L_cd326c:;
    (void)f_adds(c, c->r[12], 0x1u);
    if (COND_EQ) { goto L_cd32d0; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_LT) { goto L_cd32c8; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { goto L_cd32d4; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] - 0x100u;
    goto L_cd32ac;
L_cd3294:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { goto L_cd32d4; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[10];
L_cd32ac:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = sdiv32(c->r[3], c->r[6]);
    goto L_cd32d4;
L_cd32b8:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_GE) { goto L_cd32d4; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_cd32c8:;
    c->r[5] = sdiv32(c->r[10], c->r[3]);
    goto L_cd32d4;
L_cd32d0:;
    c->r[5] = 0x0u;
L_cd32d4:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t r = c->r[5] * c->r[3] + c->r[6]; c->r[3] = r; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[3] & 0xff00u;
    { uint32_t r = c->r[5] * c->r[6]; c->r[6] = r; }
    c->r[6] = c->r[4] + (c->r[6] >> 8);
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[3] = c->r[6] | c->r[3];
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[5] * c->r[6]; c->r[6] = r; }
    c->r[12] = c->r[4] + (c->r[6] >> 8);
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[3] | (c->r[12] << 24);
    { uint32_t r = c->r[5] * c->r[4]; c->r[5] = r; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[4] + (c->r[5] >> 8);
    c->r[5] = (c->r[5] << 16);
    c->r[5] = uxtb16(c->r[5]);
    c->r[3] = c->r[3] | c->r[5];
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_cd33dc; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = sdiv32(c->r[1], c->r[4]);
    c->r[5] = c->r[1] - c->r[5] * c->r[4];
    c->v.s[0] = c->r[5];
    c->r[5] = c->r[5] + 0x1u;
    c->v.s[2] = c->r[5];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x1u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    if (COND_NE) { goto L_cd33a4; }
    c->v.s[4] = c->v.s[22];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[6] = c->v.s[26];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[25]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[23]);
    c->v.f[0] = c->v.f[16] * c->v.f[2];
    c->v.s[2] = c->v.s[22];
    ST32(c->r[13] + 264u, c->v.s[4]);
    c->v.s[4] = c->v.s[26];
    ST32(c->r[13] + 328u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[25]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[23]);
    ST32(c->r[13] + 392u, c->v.s[2]);
    ST32(c->r[13] + 456u, c->v.s[4]);
    goto L_cd33dc;
L_cd33a4:;
    c->v.s[4] = c->v.s[24];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[6] = c->v.s[28];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[21]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[19]);
    c->v.f[0] = c->v.f[16] * c->v.f[2];
    c->v.s[2] = c->v.s[24];
    ST32(c->r[13] + 268u, c->v.s[4]);
    c->v.s[4] = c->v.s[28];
    ST32(c->r[13] + 332u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[21]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[19]);
    ST32(c->r[13] + 396u, c->v.s[2]);
    ST32(c->r[13] + 460u, c->v.s[4]);
L_cd33dc:;
    c->v.s[8] = c->r[1];
    c->v.s[4] = LD32(c->r[13] + 528u);
    c->v.s[6] = LD32(c->r[13] + 560u);
    c->v.s[2] = LD32(c->r[13] + 532u);
    c->v.s[10] = LD32(c->r[13] + 564u);
    c->v.s[0] = LD32(c->r[13] + 536u);
    c->v.s[15] = c->r[7];
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.s[12] = LD32(c->r[13] + 568u);
    c->v.s[5] = LD32(c->r[13] + 576u);
    c->v.s[7] = LD32(c->r[13] + 580u);
    c->v.s[31] = LD32(c->r[13] + 552u);
    c->v.s[9] = LD32(c->r[13] + 584u);
    c->v.f[6] = c->v.f[6] - c->v.f[4];
    c->v.s[14] = c->v.s[4];
    c->v.f[10] = c->v.f[10] - c->v.f[2];
    c->v.s[1] = c->v.s[2];
    c->v.f[8] = c->v.f[20] * c->v.f[8];
    c->v.f[12] = c->v.f[12] - c->v.f[0];
    c->v.f[9] = c->v.f[9] - c->v.f[31];
    c->v.s[3] = c->v.s[31];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[6]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[10]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[9]);
    ST32(c->r[13] + 240u, c->v.s[14]);
    c->v.s[14] = c->v.s[0];
    ST32(c->r[13] + 244u, c->v.s[1]);
    c->v.s[1] = LD32(c->r[13] + 548u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.s[13] = c->v.s[1];
    c->v.f[7] = c->v.f[7] - c->v.f[1];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[8] * c->v.f[7]);
    ST32(c->r[13] + 248u, c->v.s[14]);
    c->v.s[14] = LD32(c->r[13] + 544u);
    c->v.f[5] = c->v.f[5] - c->v.f[14];
    c->v.s[11] = c->v.s[14];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[8] * c->v.f[5]);
    ST32(c->r[13] + 304u, c->v.s[11]);
    c->v.f[11] = c->v.f[8] * c->v.f[29];
    ST32(c->r[13] + 308u, c->v.s[13]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[11]);
    c->v.f[11] = (float)(int32_t)c->v.s[15];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[5] = v; }
    ST32(c->r[13] + 312u, c->v.s[3]);
    c->r[1] = c->v.s[8];
    c->v.f[8] = c->v.f[20] * c->v.f[11];
    { uint32_t r = c->r[1] * c->r[6]; c->r[7] = r; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[7]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[8] * c->v.f[9]);
    c->r[7] = c->r[4] + (c->r[7] >> 8);
    c->r[1] = c->r[5] + (c->r[1] >> 8);
    { uint32_t r = c->r[2] * c->r[7]; c->r[7] = r; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[7] = (c->r[7] << 16);
    c->r[1] = (c->r[1] << 16);
    c->r[7] = (c->r[7] & 0xff000000u) | ((c->r[14] << 0) & 0xffffffu);
    c->r[1] = (c->r[1] & 0xff000000u) | ((c->r[14] << 0) & 0xffffffu);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 368u, c->v.s[4]);
    ST32(c->r[13] + 372u, c->v.s[2]);
    ST32(c->r[13] + 376u, c->v.s[0]);
    c->v.f[0] = c->v.f[8] * c->v.f[29];
    ST32(c->r[13] + 432u, c->v.s[14]);
    ST32(c->r[13] + 436u, c->v.s[1]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 440u, c->v.s[31]);
    c->r[2] = c->v.s[0];
    { uint32_t r = c->r[2] * c->r[6]; c->r[7] = r; }
    c->r[6] = (uint32_t)(uint8_t)(c->r[12]);
    { uint32_t r = c->r[2] * c->r[0]; c->r[2] = r; }
    c->r[7] = c->r[4] + (c->r[7] >> 8);
    c->r[2] = c->r[5] + (c->r[2] >> 8);
    { uint32_t r = c->r[6] * c->r[7]; c->r[7] = r; }
    { uint32_t r = c->r[6] * c->r[2]; c->r[2] = r; }
    c->r[7] = (c->r[7] << 16);
    c->r[2] = (c->r[2] << 16);
    c->r[7] = (c->r[7] & 0xff000000u) | ((c->r[3] << 0) & 0xffffffu);
    c->r[2] = (c->r[2] & 0xff000000u) | ((c->r[3] << 0) & 0xffffffu);
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_cd364c; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_cd35a8; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_cd3584; }
    c->r[3] = c->r[3] & 0xffffffu;
    c->r[14] = c->r[14] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[14]); }
    goto L_cd35a8;
L_cd3584:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_cd35a8; }
    c->r[3] = c->r[3] & 0xffffffu;
    c->r[14] = c->r[14] & 0xffffffu;
    c->r[2] = c->r[3];
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[14]); }
L_cd35a8:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[0] = c->r[0] + c->r[8];
    if (COND_EQ) { goto L_cd35d0; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_cd364c; }
    c->r[3] = 0x2u;
    c->r[7] = 0x3u;
    c->r[1] = c->r[2];
    goto L_cd35d8;
L_cd35d0:;
    c->r[3] = 0x0u;
    c->r[7] = 0x1u;
L_cd35d8:;
    c->r[2] = c->r[13] + 0xf0u;
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[6] = c->r[2];
    c->r[2] = c->r[6] + (c->r[7] << 6);
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] + (c->r[3] << 6);
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffffffu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[3], c->r[1]);
    c->r[1] = 0x0u;
    c->r[3] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t r = c->r[3] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cd3080; }
    c->r[0] = c->r[1] & c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_cd3080; }
L_cd364c:;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[12] = c->r[13] + 0x260u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cd36b4:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x258u;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcd370cu; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[10] = c->r[10] + 0x100u;
    c->r[0] = c->r[0] + c->r[8];
    c->r[3] = c->r[3] - 0x100u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd30ec; }
    goto L_cd3bcc;
L_cd3738:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_HI) { goto L_cd3bcc; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[10] = 0x0u;
    c->r[8] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    goto L_cd37d4;
L_cd3768:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[13] + 0x260u;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[0] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_cd3b5c;
L_cd37d4:;
    c->r[0] = c->r[9];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_cd3880; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = sdiv32(c->r[0], c->r[2]);
    c->r[1] = c->r[0] - c->r[1] * c->r[2];
    c->v.s[0] = c->r[1];
    c->r[1] = c->r[1] + 0x1u;
    c->v.s[2] = c->r[1];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    if (COND_NE) { goto L_cd3848; }
    c->v.s[4] = c->v.s[22];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[6] = c->v.s[26];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[25]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[23]);
    c->v.f[0] = c->v.f[16] * c->v.f[2];
    c->v.s[2] = c->v.s[22];
    ST32(c->r[13] + 264u, c->v.s[4]);
    c->v.s[4] = c->v.s[26];
    ST32(c->r[13] + 328u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[25]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[23]);
    ST32(c->r[13] + 392u, c->v.s[2]);
    ST32(c->r[13] + 456u, c->v.s[4]);
    goto L_cd3880;
L_cd3848:;
    c->v.s[4] = c->v.s[24];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[6] = c->v.s[28];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[21]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[19]);
    c->v.f[0] = c->v.f[16] * c->v.f[2];
    c->v.s[2] = c->v.s[24];
    ST32(c->r[13] + 268u, c->v.s[4]);
    c->v.s[4] = c->v.s[28];
    ST32(c->r[13] + 332u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[21]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[19]);
    ST32(c->r[13] + 396u, c->v.s[2]);
    ST32(c->r[13] + 460u, c->v.s[4]);
L_cd3880:;
    c->v.s[0] = c->r[0];
    c->r[9] = c->r[0] + 0x1u;
    c->r[5] = 0xff000000u;
    c->v.s[11] = c->r[9];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[29];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[8] = LD32(c->r[13] + 560u);
    c->v.s[4] = LD32(c->r[13] + 532u);
    c->v.s[10] = LD32(c->r[13] + 564u);
    c->v.s[6] = LD32(c->r[13] + 536u);
    c->v.s[12] = LD32(c->r[13] + 568u);
    c->v.s[5] = LD32(c->r[13] + 576u);
    c->v.s[3] = LD32(c->r[13] + 552u);
    c->v.s[9] = LD32(c->r[13] + 584u);
    c->v.s[7] = LD32(c->r[13] + 580u);
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->v.s[2];
    c->v.s[2] = LD32(c->r[13] + 528u);
    c->v.f[10] = c->v.f[10] - c->v.f[4];
    c->v.f[12] = c->v.f[12] - c->v.f[6];
    c->v.s[1] = c->v.s[4];
    c->v.f[9] = c->v.f[9] - c->v.f[3];
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.s[14] = c->v.s[2];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[10]);
    { uint32_t r = c->r[1] * c->r[3]; c->r[2] = r; }
    { uint32_t r = c->r[1] * c->r[8]; c->r[1] = r; }
    c->r[2] = c->r[4] + (c->r[2] >> 8);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[8]);
    { uint32_t r = c->r[6] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[5] & (c->r[2] << 16);
    c->r[2] = c->r[2] | c->r[7];
    ST32(c->r[13] + 240u, c->v.s[14]);
    c->v.s[14] = c->v.s[6];
    ST32(c->r[13] + 244u, c->v.s[1]);
    c->v.s[1] = LD32(c->r[13] + 548u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.s[15] = c->v.s[1];
    c->v.f[7] = c->v.f[7] - c->v.f[1];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[0] * c->v.f[7]);
    ST32(c->r[13] + 248u, c->v.s[14]);
    c->v.s[14] = LD32(c->r[13] + 544u);
    c->v.f[11] = (float)(int32_t)c->v.s[11];
    c->v.f[5] = c->v.f[5] - c->v.f[14];
    c->v.s[13] = c->v.s[14];
    c->v.f[11] = c->v.f[20] * c->v.f[11];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[0] * c->v.f[5]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[11] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[11] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[11] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[5]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[11] * c->v.f[7]);
    ST32(c->r[13] + 304u, c->v.s[13]);
    c->v.s[13] = c->v.s[3];
    ST32(c->r[13] + 308u, c->v.s[15]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[11] * c->v.f[9]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[0] = c->v.f[11] * c->v.f[29];
    ST32(c->r[13] + 312u, c->v.s[13]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[2]); }
    c->r[2] = c->v.s[0];
    { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; }
    { uint32_t r = c->r[2] * c->r[8]; c->r[2] = r; }
    c->r[3] = c->r[4] + (c->r[3] >> 8);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[6] * c->r[3]; c->r[3] = r; }
    c->r[1] = c->r[4] + (c->r[1] >> 8);
    c->r[2] = c->r[4] + (c->r[2] >> 8);
    c->r[3] = c->r[5] & (c->r[3] << 16);
    { uint32_t r = c->r[6] * c->r[1]; c->r[1] = r; }
    { uint32_t r = c->r[6] * c->r[2]; c->r[2] = r; }
    c->r[3] = c->r[3] | c->r[7];
    c->r[1] = c->r[5] & (c->r[1] << 16);
    c->r[2] = c->r[5] & (c->r[2] << 16);
    c->r[1] = c->r[1] | c->r[7];
    c->r[2] = c->r[2] | c->r[7];
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 368u, c->v.s[2]);
    ST32(c->r[13] + 372u, c->v.s[4]);
    ST32(c->r[13] + 376u, c->v.s[6]);
    ST32(c->r[13] + 432u, c->v.s[14]);
    ST32(c->r[13] + 436u, c->v.s[1]);
    ST32(c->r[13] + 440u, c->v.s[3]);
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cd3af4; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_cd3a2c; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_NE) { goto L_cd3a54; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_cd3a38; }
    goto L_cd3a78;
L_cd3a2c:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_cd3a30:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_cd3a78; }
L_cd3a38:;
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_cd3af4; }
    c->r[3] = 0x2u;
    c->r[7] = 0x3u;
    c->r[1] = c->r[2];
    goto L_cd3a80;
L_cd3a54:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_NE) { goto L_cd3a30; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_cd3a38; }
L_cd3a78:;
    c->r[3] = 0x0u;
    c->r[7] = 0x1u;
L_cd3a80:;
    c->r[2] = c->r[13] + 0xf0u;
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[6] = c->r[2];
    c->r[2] = c->r[6] + (c->r[7] << 6);
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] + (c->r[3] << 6);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffffffu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[5], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[5], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t r = c->r[3] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cd3768; }
    c->r[0] = c->r[1] & c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_cd3768; }
L_cd3af4:;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[12] = c->r[13] + 0x260u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cd3b5c:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x258u;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcd3bb4u; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[9] - 0x1u;
    c->r[10] = c->r[10] - 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd37d4; }
L_cd3bcc:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { goto L_cd2ec4; }
L_cd3be0:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_cd3bf0(Cpu *restrict c) {
    FN_ENTER(0xcd3bf0u);
L_cd3bf0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x348u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x180u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[7] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[7]); }
    c->r[5] = (c->r[1] >> 16) - c->r[7];
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[3] = (c->r[3] >> 4) & 0xfu;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[4] = c->r[7];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[3], 0x0u);
    c->v.f[20] = (float)(int32_t)c->v.s[4];
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_cd3c90; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_cd3ca0; }
    c->r[14] = 0x0u;
    c->r[10] = 0x2u;
    c->r[3] = 0x1u;
    goto L_cd3cac;
L_cd3c90:;
    c->r[14] = 0x2u;
    c->r[10] = 0x1u;
    c->r[3] = 0x0u;
    goto L_cd3cac;
L_cd3ca0:;
    c->r[14] = 0x1u;
    c->r[10] = 0x0u;
    c->r[3] = 0x2u;
L_cd3cac:;
    c->r[9] = c->r[5] + 0x2u;
    c->r[4] = (c->r[1] >> 16);
    c->r[0] = 0x0u;
    c->r[7] = (uint32_t)(uint16_t)(c->r[12]);
    (void)f_adds(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[9]); }
    if (COND_LT) { goto L_cd3eb8; }
    c->r[0] = c->r[13] + 0x240u;
    c->r[2] = (c->r[7] >> 1);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[12] = c->r[7];
    c->r[1] = c->r[0] + (c->r[14] << 2);
    c->r[5] = c->r[0] + (c->r[10] << 2);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x0u;
    c->r[2] = c->r[0] - c->r[2];
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[2]); }
    c->r[2] = (c->r[4] << 4);
    c->r[10] = c->r[2] - (c->r[0] << 4);
    c->r[2] = 0xd65570u;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xcd3d1cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_cd3d18:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_NE) { c->r[4] = c->r[4] + c->r[14]; }
    c->r[14] = c->r[14] + 0x1u;
    c->r[4] = (c->r[4] << 12);
    c->r[4] = sdiv32(c->r[4], c->r[12]);
    c->r[7] = c->r[4] + 0x400u;
    c->r[4] = c->r[4] & 0xfffu;
    c->r[7] = c->r[7] & 0xfffu;
    c->r[4] = c->r[2] + (c->r[4] << 2);
    c->v.s[4] = LD32(c->r[4]);
    c->r[4] = c->r[2] + (c->r[7] << 2);
    c->r[7] = 0x0u;
    c->v.s[6] = LD32(c->r[4]);
    c->r[4] = c->r[13] + 0x240u;
    c->v.f[8] = c->v.f[2] * c->v.f[4];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    ST32(c->r[1], c->v.s[8]);
    c->v.f[8] = c->v.f[2] * c->v.f[6];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    ST32(c->r[5], c->v.s[8]);
    { uint32_t ea = c->r[4] + (c->r[3] << 2); ST32(ea, c->r[8]); }
    c->v.s[8] = LD32(c->r[6] + 4u);
    c->v.s[10] = LD32(c->r[6] + 8u);
    c->v.s[12] = LD32(c->r[6]);
    c->v.s[14] = LD32(c->r[6] + 20u);
    c->v.s[7] = LD32(c->r[13] + 580u);
    c->v.s[3] = LD32(c->r[6] + 16u);
    c->v.s[1] = LD32(c->r[6] + 24u);
    c->v.s[5] = LD32(c->r[13] + 576u);
    c->v.s[9] = LD32(c->r[13] + 584u);
    c->v.s[11] = LD32(c->r[6] + 36u);
    c->v.s[13] = LD32(c->r[6] + 40u);
    c->v.s[15] = LD32(c->r[6] + 32u);
    c->v.f[3] = c->v.f[3] * c->v.f[7];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[12] * c->v.f[5]);
    c->v.f[12] = c->v.f[7] * c->v.f[1];
    c->v.f[14] = c->v.f[7] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[8]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[5] * c->v.f[10]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[15] * c->v.f[9]);
    c->v.s[8] = LD32(c->r[6] + 48u);
    c->v.s[1] = LD32(c->r[6] + 52u);
    c->v.s[7] = LD32(c->r[6] + 56u);
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[7]); }
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[9] * c->v.f[13]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[9] * c->v.f[11]);
    c->v.f[8] = c->v.f[8] + c->v.f[3];
    c->v.f[10] = c->v.f[1] + c->v.f[14];
    c->v.f[12] = c->v.f[7] + c->v.f[12];
    ST32(c->r[9], c->v.s[8]);
    ST32(c->r[9] + 4u, c->v.s[10]);
    ST32(c->r[9] + 8u, c->v.s[12]);
    ST32(c->r[1], c->v.s[4]);
    ST32(c->r[5], c->v.s[6]);
    { uint32_t ea = c->r[4] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    c->r[4] = c->r[9] + c->r[10];
    c->r[9] = c->r[9] + 0x10u;
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.s[8] = LD32(c->r[6]);
    c->v.s[10] = LD32(c->r[6] + 20u);
    c->v.s[3] = LD32(c->r[13] + 580u);
    c->v.s[14] = LD32(c->r[6] + 16u);
    c->v.s[12] = LD32(c->r[6] + 24u);
    c->v.s[1] = LD32(c->r[13] + 576u);
    c->v.s[5] = LD32(c->r[13] + 584u);
    c->v.s[7] = LD32(c->r[6] + 36u);
    c->v.s[9] = LD32(c->r[6] + 40u);
    c->v.s[11] = LD32(c->r[6] + 32u);
    c->v.f[14] = c->v.f[14] * c->v.f[3];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[1]);
    c->v.f[8] = c->v.f[3] * c->v.f[12];
    c->v.f[10] = c->v.f[3] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[5]);
    c->v.s[4] = LD32(c->r[6] + 48u);
    c->v.s[12] = LD32(c->r[6] + 52u);
    c->v.s[3] = LD32(c->r[6] + 56u);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[7]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.f[4] = c->v.f[4] + c->v.f[14];
    c->v.f[6] = c->v.f[12] + c->v.f[10];
    c->v.f[8] = c->v.f[3] + c->v.f[8];
    ST32(c->r[4] + 32u, c->v.s[4]);
    ST32(c->r[4] + 36u, c->v.s[6]);
    ST32(c->r[4] + 40u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[14], c->r[4]);
    if (COND_LT) { goto L_cd3d18; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0xau; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[2] | (c->r[3] << 16);
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[7] = c->r[12];
    c->r[1] = c->r[2] | (c->r[1] << 16);
    goto L_cd3ecc;
L_cd3eb8:;
    c->r[0] = (c->r[12] >> 16);
    c->r[1] = c->r[0] | (c->r[1] << 16);
    c->r[0] = (c->r[2] >> 16);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] | (c->r[2] << 16);
L_cd3ecc:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[16] = 0x0u;
    c->v.s[22] = 0x3f800000u;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[18] = c->v.s[16];
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_cd3f04; }
    c->r[1] = c->r[2] + 0x1u;
    c->v.s[0] = c->r[1];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[18] = c->v.f[22] / c->v.f[0];
L_cd3f04:;
    c->r[1] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cd3f28; }
    c->r[0] = c->r[1] + 0x1u;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[16] = c->v.f[22] / c->v.f[0];
L_cd3f28:;
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x11au;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    c->r[3] = c->r[13] + 0x1d0u;
    { uint32_t ea = c->r[1] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xcd3f8cu; f_ce0de8(c);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    c->r[14] = c->r[0] + 0xc0u;
    c->r[2] = c->r[0] + 0x80u;
    c->r[5] = c->r[0];
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[2] = c->r[2] + 16u; }
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[1] = c->r[5] + 0x40u;
    c->r[5] = c->r[14];
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[0]); }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5]; c->r[5] = c->r[5] + 16u; c->r[2] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); c->r[9] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[12]); c->r[1] = c->r[1] + 16u; }
    c->r[12] = c->r[10];
    c->r[8] = c->r[6];
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[14]); }
    c->r[1] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[4]); }
    c->r[0] = c->r[13] + 0xfcu;
    { uint32_t ea = c->r[14]; c->r[14] = c->r[14] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[14] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = c->r[13] + 0x1a4u;
    c->r[7] = 0x0u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1d0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x1d8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] - 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0x24u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = c->r[0];
    if (COND_NE) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_cd4e80; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[26] = c->r[3];
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.f[20] = c->v.f[22] / c->v.f[20];
    c->v.s[22] = c->r[8];
    c->v.s[24] = c->r[9];
    c->v.s[0] = c->r[5];
    c->v.f[19] = c->v.f[0] - c->v.f[24];
    c->v.f[21] = c->v.f[26] - c->v.f[22];
    c->v.f[0] = c->v.f[0] - c->v.f[26];
    c->v.f[25] = c->v.f[24] - c->v.f[22];
    c->r[0] = c->r[0] + (c->r[2] << 4);
    c->r[4] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[14] = (c->r[1] >> 16);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] | c->r[6];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x80u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[14]); }
    c->r[0] = c->r[0] & 0x80000u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12] - (c->r[1] << 8);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x100u;
    c->r[0] = c->r[0] + (c->r[4] << 8);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] - c->r[14];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] - c->r[0];
    c->r[0] = (c->r[0] << 8);
    c->r[0] = c->r[0] - (c->r[4] << 8);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 16) & 0xffu;
    c->r[1] = (c->r[3] >> 16) & 0xffu;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 8) & 0xffu;
    c->r[1] = (c->r[3] >> 8) & 0xffu;
    c->v.s[28] = LD32(c->r[13] + 468u);
    c->v.s[30] = LD32(c->r[13] + 476u);
    c->v.s[17] = LD32(c->r[13] + 484u);
    c->v.s[2] = LD32(c->r[13] + 492u);
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 28u, c->v.s[0]);
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] - 0x1u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x240u;
    c->v.f[27] = c->v.f[2] - c->v.f[30];
    c->v.f[29] = c->v.f[17] - c->v.f[28];
    c->v.f[31] = c->v.f[2] - c->v.f[17];
    c->v.f[23] = c->v.f[30] - c->v.f[28];
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2];
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 16);
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 8);
    c->r[0] = (c->r[0] << 8);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cd42d8:;
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x0u;
    c->r[0] = c->r[6] - c->r[0];
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[1] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] + (c->r[0] << 4);
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[7]); }
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd4428; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = sdiv32(c->r[6], c->r[1]);
    c->r[0] = c->r[6] - c->r[0] * c->r[1];
    c->v.s[0] = c->r[0];
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[2] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    if (COND_NE) { goto L_cd43ec; }
    c->v.s[4] = c->v.s[28];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[6] = c->v.s[17];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[23]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[31]);
    c->v.f[0] = c->v.f[18] * c->v.f[2];
    c->v.s[2] = c->v.s[28];
    ST32(c->r[13] + 236u, c->v.s[4]);
    c->v.s[4] = c->v.s[17];
    ST32(c->r[13] + 364u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[23]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[31]);
    ST32(c->r[13] + 300u, c->v.s[2]);
    ST32(c->r[13] + 428u, c->v.s[4]);
    goto L_cd4428;
L_cd43ec:;
    c->v.s[4] = c->v.s[22];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[8] = LD32(c->r[13] + 28u);
    c->v.s[6] = c->v.s[26];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[25]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[0] = c->v.f[18] * c->v.f[2];
    c->v.s[2] = c->v.s[22];
    ST32(c->r[13] + 232u, c->v.s[4]);
    c->v.s[4] = c->v.s[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[25]);
    ST32(c->r[13] + 360u, c->v.s[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[8]);
    ST32(c->r[13] + 296u, c->v.s[2]);
    ST32(c->r[13] + 424u, c->v.s[4]);
L_cd4428:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd4a70; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_HI) { goto L_cd4e6c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = 0x0u;
    goto L_cd44c8;
L_cd4458:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[13] + 0x240u;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_cd49f8;
L_cd44c8:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = f_adds(c, c->r[0], c->r[8]);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_cd4594; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] - 0x1u;
    c->r[0] = 0x100u;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_HI) { goto L_cd4594; }
    c->r[3] = (c->r[3] << 2);
    c->r[6] = 0xcd4500u + 0x4u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3] + c->r[6]; switch (c->pc) { case 0xcd4514u: goto L_cd4514; case 0xcd452cu: goto L_cd452c; case 0xcd4558u: goto L_cd4558; case 0xcd457cu: goto L_cd457c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd4514:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[0] = 0x100u;
    if (COND_LE) { goto L_cd4594; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cd458c;
L_cd452c:;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_cd4594; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { goto L_cd458c; }
    c->r[0] = 0x100u;
    if (COND_LE) { goto L_cd4594; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = sdiv32(c->r[10], c->r[0]);
    goto L_cd4594;
L_cd4558:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_LE) { goto L_cd4594; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + c->r[9];
    c->r[0] = c->r[0] - 0x100u;
    goto L_cd4590;
L_cd457c:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_GE) { goto L_cd4594; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
L_cd458c:;
    c->r[0] = c->r[9] - 0x100u;
L_cd4590:;
    c->r[0] = sdiv32(c->r[0], c->r[3]);
L_cd4594:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x100u;
    { uint32_t r = c->r[0] * c->r[3] + c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] & 0xff00u;
    { uint32_t r = c->r[0] * c->r[7]; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] + (c->r[6] >> 8);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[3] = c->r[6] | c->r[3];
    { uint32_t r = c->r[0] * c->r[7]; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] + (c->r[6] >> 8);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] | (c->r[6] << 24);
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7] + (c->r[0] >> 8);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = (c->r[0] << 16);
    c->r[0] = uxtb16(c->r[0]);
    c->r[6] = c->r[7] - 0x1u;
    c->r[0] = c->r[3] | c->r[0];
    c->r[3] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[6], 0x3u);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    if (COND_HI) { goto L_cd46a4; }
    c->r[6] = (c->r[6] << 2);
    c->r[4] = 0xcd4618u + 0x4u;
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->pc = c->r[6] + c->r[4]; switch (c->pc) { case 0xcd462cu: goto L_cd462c; case 0xcd4640u: goto L_cd4640; case 0xcd4664u: goto L_cd4664; case 0xcd4688u: goto L_cd4688; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd462c:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_LE) { goto L_cd46a4; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_cd4698;
L_cd4640:;
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_cd46a0; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_cd4698; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_cd46a4; }
    c->r[2] = c->r[10] - 0x100u;
    goto L_cd467c;
L_cd4664:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_cd46a4; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[9];
L_cd467c:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = sdiv32(c->r[2], c->r[7]);
    goto L_cd46a4;
L_cd4688:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_GE) { goto L_cd46a4; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
L_cd4698:;
    c->r[5] = sdiv32(c->r[9], c->r[2]);
    goto L_cd46a4;
L_cd46a0:;
    c->r[5] = 0x0u;
L_cd46a4:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[5] * c->r[2] + c->r[7]; c->r[2] = r; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] & 0xff00u;
    { uint32_t r = c->r[5] * c->r[7]; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] + (c->r[6] >> 8);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[2] = c->r[6] | c->r[2];
    { uint32_t r = c->r[5] * c->r[7]; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] + (c->r[6] >> 8);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] | (c->r[6] << 24);
    { uint32_t r = c->r[5] * c->r[7]; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] + (c->r[6] >> 8);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = (c->r[6] << 16);
    c->r[6] = uxtb16(c->r[6]);
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[2] = c->r[2] | c->r[6];
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_cd47b0; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = sdiv32(c->r[1], c->r[7]);
    c->r[5] = c->r[1] - c->r[6] * c->r[7];
    c->v.s[0] = c->r[5];
    c->r[6] = c->r[5] + 0x1u;
    c->v.s[2] = c->r[6];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    if (COND_NE) { goto L_cd4778; }
    c->v.s[4] = c->v.s[22];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[6] = c->v.s[24];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[21]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[19]);
    c->v.f[0] = c->v.f[16] * c->v.f[2];
    c->v.s[2] = c->v.s[22];
    ST32(c->r[13] + 232u, c->v.s[4]);
    c->v.s[4] = c->v.s[24];
    ST32(c->r[13] + 296u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[21]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[19]);
    ST32(c->r[13] + 360u, c->v.s[2]);
    ST32(c->r[13] + 424u, c->v.s[4]);
    goto L_cd47b0;
L_cd4778:;
    c->v.s[4] = c->v.s[28];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[6] = c->v.s[30];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[29]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[27]);
    c->v.f[0] = c->v.f[16] * c->v.f[2];
    c->v.s[2] = c->v.s[28];
    ST32(c->r[13] + 236u, c->v.s[4]);
    c->v.s[4] = c->v.s[30];
    ST32(c->r[13] + 300u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[29]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[27]);
    ST32(c->r[13] + 364u, c->v.s[2]);
    ST32(c->r[13] + 428u, c->v.s[4]);
L_cd47b0:;
    c->v.s[8] = c->r[1];
    c->v.s[0] = LD32(c->r[13] + 496u);
    c->v.s[6] = LD32(c->r[13] + 528u);
    c->v.s[2] = LD32(c->r[13] + 500u);
    c->v.s[10] = LD32(c->r[13] + 532u);
    c->v.s[4] = LD32(c->r[13] + 504u);
    c->v.s[11] = c->r[3];
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.s[12] = LD32(c->r[13] + 536u);
    c->v.s[5] = LD32(c->r[13] + 544u);
    c->v.s[3] = LD32(c->r[13] + 520u);
    c->v.s[9] = LD32(c->r[13] + 552u);
    c->v.s[7] = LD32(c->r[13] + 548u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.s[14] = c->v.s[0];
    c->v.f[10] = c->v.f[10] - c->v.f[2];
    c->v.s[1] = c->v.s[2];
    c->v.f[8] = c->v.f[20] * c->v.f[8];
    c->v.f[12] = c->v.f[12] - c->v.f[4];
    c->v.f[9] = c->v.f[9] - c->v.f[3];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[6]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[10]);
    ST32(c->r[13] + 208u, c->v.s[14]);
    c->v.s[14] = c->v.s[4];
    ST32(c->r[13] + 212u, c->v.s[1]);
    c->v.s[1] = LD32(c->r[13] + 516u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.s[15] = c->v.s[1];
    c->v.f[7] = c->v.f[7] - c->v.f[1];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[8] * c->v.f[7]);
    ST32(c->r[13] + 216u, c->v.s[14]);
    c->v.s[14] = LD32(c->r[13] + 512u);
    c->v.f[11] = (float)(int32_t)c->v.s[11];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->v.f[5] = c->v.f[5] - c->v.f[14];
    c->v.s[13] = c->v.s[14];
    c->v.f[11] = c->v.f[20] * c->v.f[11];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[11] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[11] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[11] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[5]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[11] * c->v.f[7]);
    ST32(c->r[13] + 272u, c->v.s[13]);
    c->v.s[13] = c->v.s[3];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[11] * c->v.f[9]);
    ST32(c->r[13] + 276u, c->v.s[15]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[8] * c->v.f[9]);
    ST32(c->r[13] + 280u, c->v.s[13]);
    ST32(c->r[13] + 336u, c->v.s[0]);
    ST32(c->r[13] + 340u, c->v.s[2]);
    ST32(c->r[13] + 344u, c->v.s[4]);
    ST32(c->r[13] + 400u, c->v.s[14]);
    ST32(c->r[13] + 404u, c->v.s[1]);
    ST32(c->r[13] + 408u, c->v.s[3]);
    if (COND_EQ) { goto L_cd498c; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_cd48e8; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_cd48cc; }
    c->r[1] = c->r[2];
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[1]); }
    goto L_cd48e8;
L_cd48cc:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_cd48e8; }
    c->r[2] = c->r[2] & 0xffffffu;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
L_cd48e8:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[1] = c->r[1] + c->r[8];
    if (COND_EQ) { goto L_cd4910; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_cd498c; }
    c->r[3] = 0x2u;
    c->r[5] = 0x3u;
    c->r[0] = c->r[2];
    goto L_cd4918;
L_cd4910:;
    c->r[3] = 0x0u;
    c->r[5] = 0x1u;
L_cd4918:;
    c->r[2] = c->r[13] + 0xd0u;
    c->r[0] = c->r[0] & 0xffffffu;
    c->r[7] = c->r[2];
    c->r[2] = c->r[7] + (c->r[5] << 6);
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[3] << 6);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffffffu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[0]);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[3], c->r[0]);
    c->r[0] = 0x0u;
    c->r[3] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t r = c->r[3] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cd4458; }
    c->r[0] = c->r[0] & c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_cd4458; }
L_cd498c:;
    c->r[1] = c->r[13] + 0xd0u;
    c->r[12] = c->r[13] + 0x240u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
L_cd49f8:;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x238u;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcd4a4cu; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[10] = c->r[10] - 0x100u;
    c->r[9] = c->r[9] + 0x100u;
    c->r[0] = c->r[0] + c->r[8];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd44c8; }
    goto L_cd4e6c;
L_cd4a70:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_HI) { goto L_cd4e6c; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[10] = 0x0u;
    goto L_cd4afc;
L_cd4a8c:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[13] + 0x240u;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_cd4e04;
L_cd4afc:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cd4bac; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = sdiv32(c->r[0], c->r[2]);
    c->r[1] = c->r[0] - c->r[1] * c->r[2];
    c->v.s[0] = c->r[1];
    c->r[1] = c->r[1] + 0x1u;
    c->v.s[2] = c->r[1];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    if (COND_NE) { goto L_cd4b74; }
    c->v.s[4] = c->v.s[22];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[6] = c->v.s[24];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[21]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[19]);
    c->v.f[0] = c->v.f[16] * c->v.f[2];
    c->v.s[2] = c->v.s[22];
    ST32(c->r[13] + 232u, c->v.s[4]);
    c->v.s[4] = c->v.s[24];
    ST32(c->r[13] + 296u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[21]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[19]);
    ST32(c->r[13] + 360u, c->v.s[2]);
    ST32(c->r[13] + 424u, c->v.s[4]);
    goto L_cd4bac;
L_cd4b74:;
    c->v.s[4] = c->v.s[28];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[6] = c->v.s[30];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[29]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[27]);
    c->v.f[0] = c->v.f[16] * c->v.f[2];
    c->v.s[2] = c->v.s[28];
    ST32(c->r[13] + 236u, c->v.s[4]);
    c->v.s[4] = c->v.s[30];
    ST32(c->r[13] + 300u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[29]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[27]);
    ST32(c->r[13] + 364u, c->v.s[2]);
    ST32(c->r[13] + 428u, c->v.s[4]);
L_cd4bac:;
    c->v.s[8] = c->r[0];
    c->v.s[0] = LD32(c->r[13] + 496u);
    c->v.s[6] = LD32(c->r[13] + 528u);
    c->v.s[2] = LD32(c->r[13] + 500u);
    c->v.s[10] = LD32(c->r[13] + 532u);
    c->v.s[4] = LD32(c->r[13] + 504u);
    c->r[8] = c->r[0] + 0x1u;
    c->v.s[11] = c->r[8];
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.s[12] = LD32(c->r[13] + 536u);
    c->v.s[5] = LD32(c->r[13] + 544u);
    c->v.s[3] = LD32(c->r[13] + 520u);
    c->v.s[9] = LD32(c->r[13] + 552u);
    c->v.s[7] = LD32(c->r[13] + 548u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.s[14] = c->v.s[0];
    c->v.f[10] = c->v.f[10] - c->v.f[2];
    c->v.s[1] = c->v.s[2];
    c->v.f[8] = c->v.f[20] * c->v.f[8];
    c->v.f[12] = c->v.f[12] - c->v.f[4];
    c->v.f[9] = c->v.f[9] - c->v.f[3];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[6]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[10]);
    ST32(c->r[13] + 208u, c->v.s[14]);
    c->v.s[14] = c->v.s[4];
    ST32(c->r[13] + 212u, c->v.s[1]);
    c->v.s[1] = LD32(c->r[13] + 516u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.s[15] = c->v.s[1];
    c->v.f[7] = c->v.f[7] - c->v.f[1];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[8] * c->v.f[7]);
    ST32(c->r[13] + 216u, c->v.s[14]);
    c->v.s[14] = LD32(c->r[13] + 512u);
    c->v.f[11] = (float)(int32_t)c->v.s[11];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->v.f[5] = c->v.f[5] - c->v.f[14];
    c->v.s[13] = c->v.s[14];
    c->v.f[11] = c->v.f[20] * c->v.f[11];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[11] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[11] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[11] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[5]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[11] * c->v.f[7]);
    ST32(c->r[13] + 272u, c->v.s[13]);
    c->v.s[13] = c->v.s[3];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[11] * c->v.f[9]);
    ST32(c->r[13] + 276u, c->v.s[15]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[8] * c->v.f[9]);
    ST32(c->r[13] + 280u, c->v.s[13]);
    ST32(c->r[13] + 336u, c->v.s[0]);
    ST32(c->r[13] + 340u, c->v.s[2]);
    ST32(c->r[13] + 344u, c->v.s[4]);
    ST32(c->r[13] + 400u, c->v.s[14]);
    ST32(c->r[13] + 404u, c->v.s[1]);
    ST32(c->r[13] + 408u, c->v.s[3]);
    if (COND_EQ) { goto L_cd4d98; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_cd4d00; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_cd4ce4; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_cd4d08; }
    goto L_cd4d20;
L_cd4ce4:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_cd4d00; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
L_cd4d00:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_cd4d20; }
L_cd4d08:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_cd4d98; }
    c->r[2] = 0x2u;
    c->r[3] = 0x3u;
    goto L_cd4d28;
L_cd4d20:;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
L_cd4d28:;
    c->r[7] = c->r[13] + 0xd0u;
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[3] = c->r[7] + (c->r[3] << 6);
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7] + (c->r[2] << 6);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffffffu;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[6], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[6], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t r = c->r[3] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_cd4a8c; }
    c->r[0] = c->r[1] & c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_cd4a8c; }
L_cd4d98:;
    c->r[1] = c->r[13] + 0xd0u;
    c->r[12] = c->r[13] + 0x240u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
L_cd4e04:;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x238u;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcd4e58u; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] - 0x1u;
    c->r[10] = c->r[10] - 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd4afc; }
L_cd4e6c:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { goto L_cd42d8; }
L_cd4e80:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
