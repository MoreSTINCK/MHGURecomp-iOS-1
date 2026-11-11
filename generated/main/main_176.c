#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_272ea8(Cpu *c);
void f_4332ac(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af55c(Cpu *c);
void f_9bb638(Cpu *c);
void f_9c5e4c(Cpu *c);
void f_9c6440(Cpu *c);
void f_9cc110(Cpu *c);
void f_a0328c(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7fbb4(Cpu *c);
void f_a7fc58(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a80108(Cpu *c);
void f_a814c0(Cpu *c);
void f_a81a68(Cpu *c);
void f_a82674(Cpu *c);
void f_a826fc(Cpu *c);
void f_a82760(Cpu *c);
void f_a83f74(Cpu *c);
void f_a8454c(Cpu *c);
void f_a84d5c(Cpu *c);
void f_a855c0(Cpu *c);
void f_a857a8(Cpu *c);
void f_a85804(Cpu *c);
void f_a85814(Cpu *c);
void f_a85824(Cpu *c);
void f_a85844(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_a87958(Cpu *c);
void f_a879b0(Cpu *c);
void f_a879b4(Cpu *c);
void f_a87a0c(Cpu *c);
void f_a87a24(Cpu *c);
void f_a93ca8(Cpu *c);
void f_aa4984(Cpu *c);
void f_aa4acc(Cpu *c);
void f_aa5c6c(Cpu *c);
void f_aa5c90(Cpu *c);
void f_aa5cb4(Cpu *c);
void f_aa5cd8(Cpu *c);
void f_aa7668(Cpu *c);
void f_aa770c(Cpu *c);
void f_aa7740(Cpu *c);
void f_aaf6d8(Cpu *c);
void f_aafc68(Cpu *c);
void f_b23288(Cpu *c);
void f_b232c8(Cpu *c);
void f_b28dd0(Cpu *c);
void f_b28e10(Cpu *c);
void f_b92e20(Cpu *c);
void f_b9313c(Cpu *c);
void f_b93368(Cpu *c);
void f_b959c4(Cpu *c);
void f_b96978(Cpu *c);
void f_b9a134(Cpu *c);
void f_b9aa08(Cpu *c);
void f_baa558(Cpu *c);
void f_baa948(Cpu *c);
void f_baefb0(Cpu *c);
void f_baf3fc(Cpu *c);
void f_baf928(Cpu *c);
void f_bafc00(Cpu *c);
void f_bb07b0(Cpu *c);
void f_bb0cb4(Cpu *c);
void f_bb19a4(Cpu *c);
void f_bb2090(Cpu *c);
void f_bb24d0(Cpu *c);
void f_bb2f1c(Cpu *c);
void f_bb3bcc(Cpu *c);
void f_bb3cac(Cpu *c);
void f_bb41f4(Cpu *c);
void f_bb47b0(Cpu *c);
void f_bb4ee4(Cpu *c);
void f_bb4f44(Cpu *c);
void f_bb5158(Cpu *c);
void f_bb575c(Cpu *c);
void f_bb598c(Cpu *c);
void f_bb59bc(Cpu *c);
void f_bb5df0(Cpu *c);
void f_bb62e0(Cpu *c);
void f_bb6660(Cpu *c);
void f_bb66cc(Cpu *c);
void f_bb6720(Cpu *c);
void f_bb70c4(Cpu *c);
void f_bb7154(Cpu *c);
void f_bb7450(Cpu *c);
void f_bb770c(Cpu *c);
void f_bb7df8(Cpu *c);
void f_bb8df8(Cpu *c);
void f_bb8ef8(Cpu *c);
void f_bb90f8(Cpu *c);
void f_bb9668(Cpu *c);
void f_bb975c(Cpu *c);
void f_bb9858(Cpu *c);
void f_bb9cfc(Cpu *c);
void f_bb9e0c(Cpu *c);
void f_bba5b0(Cpu *c);
void f_bba704(Cpu *c);
void f_bbc73c(Cpu *c);
void f_bbe75c(Cpu *c);
void f_bfcfe4(Cpu *c);
void f_c57f14(Cpu *c);
void f_c58bb4(Cpu *c);
void f_c58c5c(Cpu *c);
void f_ceba88(Cpu *c);
void f_cec308(Cpu *c);
void f_d8b6f0(Cpu *c);
void f_d8b84c(Cpu *c);
void f_d91f44(Cpu *c);
void f_d91f6c(Cpu *c);
void f_d92480(Cpu *c);
void f_dc56dc(Cpu *c);
void f_dd3c2c(Cpu *c);
void f_dd3f10(Cpu *c);
void f_e067ec(Cpu *c);
void f_e08100(Cpu *c);
void f_15efd70(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_15efe30(Cpu *c);
void f_15f0e98(Cpu *c);
void f_baa558(Cpu *restrict c) {
    FN_ENTER(0xbaa558u);
L_baa558:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[13] = c->r[13] - 0x58u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->v.s[24] = 0x3c8efa36u;
    c->r[4] = c->r[1];
    c->v.s[0] = LD32(c->r[5] + 288u);
    c->v.f[16] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa588u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa594u; f_15efde8(c);
    c->v.s[26] = 0x3fc90fdau;
    c->v.s[20] = c->v.s[0];
    c->v.f[16] = c->v.f[16] + c->v.f[26];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa5a8u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa5b4u; f_15efde8(c);
    ST32(c->r[13] + 16u, c->v.s[18]);
    ST32(c->r[13] + 20u, c->v.s[20]);
    ST32(c->r[13] + 24u, c->v.s[22]);
    ST32(c->r[13] + 28u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 292u);
    c->v.f[16] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa5d4u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa5e0u; f_15efde8(c);
    c->v.f[16] = c->v.f[16] + c->v.f[26];
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa5f0u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa5fcu; f_15efde8(c);
    ST32(c->r[13] + 32u, c->v.s[18]);
    ST32(c->r[13] + 36u, c->v.s[20]);
    ST32(c->r[13] + 40u, c->v.s[22]);
    ST32(c->r[13] + 44u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 296u);
    c->v.f[16] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa61cu; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa628u; f_15efde8(c);
    c->v.f[16] = c->v.f[16] + c->v.f[26];
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa638u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa644u; f_15efde8(c);
    ST32(c->r[13] + 48u, c->v.s[18]);
    ST32(c->r[13] + 52u, c->v.s[20]);
    ST32(c->r[13] + 56u, c->v.s[22]);
    ST32(c->r[13] + 60u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 300u);
    c->v.f[16] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa664u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa670u; f_15efde8(c);
    c->v.f[16] = c->v.f[16] + c->v.f[26];
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa680u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbaa68cu; f_15efde8(c);
    ST32(c->r[13] + 64u, c->v.s[18]);
    ST32(c->r[13] + 68u, c->v.s[20]);
    ST32(c->r[13] + 72u, c->v.s[22]);
    ST32(c->r[13] + 76u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_baa710; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x2cdu;
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
    c->r[1] = 0x186cu;
    c->r[2] = 0x1870u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_baa710:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbaa724u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_baa778; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xbaa774u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_baa778:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x186cu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_baa92c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[12] = c->r[0] + 0x10u;
    c->v.s[8] = 0x3f800000u;
    c->v.s[10] = 0x40490fdbu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); }
    c->r[12] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); }
    c->r[12] = c->r[0] + 0x30u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x134u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x13cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x150u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x15cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    c->v.s[0] = LD32(c->r[5] + 352u);
    c->v.s[2] = LD32(c->r[5] + 356u);
    c->v.s[4] = LD32(c->r[5] + 360u);
    c->v.s[6] = LD32(c->r[5] + 364u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[2] = c->v.f[8] / c->v.f[2];
    c->v.f[4] = c->v.f[8] / c->v.f[4];
    c->v.f[6] = c->v.f[8] / c->v.f[6];
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->v.f[2] = c->v.f[2] + c->v.f[2];
    c->v.f[4] = c->v.f[4] + c->v.f[4];
    c->v.f[6] = c->v.f[6] + c->v.f[6];
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[10];
    ST32(c->r[0] + 96u, c->v.s[0]);
    ST32(c->r[0] + 100u, c->v.s[2]);
    ST32(c->r[0] + 104u, c->v.s[4]);
    ST32(c->r[0] + 108u, c->v.s[6]);
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_baa8d4; }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    goto L_baa918;
L_baa8d4:;
    { uint32_t ea = c->r[5] + 0x358u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x35cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = 0x447a0000u;
    c->v.s[2] = LD32(c->r[5] + 240u);
    c->v.s[4] = LD32(c->r[5] + 248u);
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[1] + 0x1u;
    c->v.s[6] = c->r[1];
    c->v.s[8] = c->r[2];
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.f[6] = (float)c->v.s[6];
    c->v.f[4] = (float)c->v.s[8];
    c->v.f[2] = c->v.f[2] / c->v.f[6];
    c->v.f[0] = c->v.f[0] / c->v.f[4];
    ST32(c->r[0] + 112u, c->v.s[2]);
    ST32(c->r[0] + 116u, c->v.s[0]);
L_baa918:;
    { uint32_t ea = c->r[5] + 0x23cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_baa92c:;
    c->r[13] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_baa948(Cpu *restrict c) {
    FN_ENTER(0xbaa948u);
L_baa948:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x5cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_baae40; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_baa9d8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x173u;
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
    { uint32_t ea = c->r[4] + 0xda0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[4] + 0xd9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_baa9d8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbaa9ecu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_baaa40; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xbaaa3cu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_baaa40:;
    c->r[1] = c->r[0] + c->r[6];
    c->r[6] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xd9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_baab44; }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
L_baab44:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x2abcu;
    c->r[7] = 0x28c0u;
    c->r[0] = c->r[2];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[1] = 0xd554u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_baac04; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_baabdc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x517u;
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
L_baabdc:;
    c->r[2] = 0x28c0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7518u;
    c->r[0] = 0x2ac0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xd3d30000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_baac04:;
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_baac50; }
    c->r[1] = 0xe94384u;
    c->r[2] = 0xe94384u;
    { uint32_t ea = 0xbaac34u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbaac38u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[1]); }
L_baac50:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_baae38; }
    c->r[0] = 0xe94350u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0xbaac68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe94348u;
    { uint32_t ea = 0xbaac74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[14]); }
L_baac84:;
    c->r[1] = c->r[7] + (c->r[7] << 1);
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[8] + (c->r[1] << 4); uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 31);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_baae10; }
    c->r[9] = c->r[10] + (c->r[1] << 4);
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_baad20; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_baad0c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x80000000u;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_baad0c:;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_baad20:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x138u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (c->r[0] >> 16);
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[3], c->r[14]); }
    if (COND_EQ) { goto L_baae20; }
L_baad3c:;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_baad5c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[14] + 0x4u; ST32(ea, c->r[0]); }
L_baad5c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x134u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
L_baad74:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0x3fu;
    c->r[2] = (c->r[1] >> 21) & 0xffu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_baada4; }
    c->r[3] = 0xfffeu;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[0] = c->r[1] | (c->r[0] << 21);
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
L_baada4:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbaadacu; f_a826fc(c);
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_CC) { goto L_baaddc; }
    goto L_baadf8;
L_baadb8:;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbaadccu; f_a93ca8(c);
    c->r[9] = c->r[9] + 0x30u;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_CS) { goto L_baadf8; }
L_baaddc:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] ^ c->r[0];
    c->r[1] = 0xf000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xff0000u;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_baadb8; }
L_baadf8:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbaae00u; f_a82760(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_CC) { goto L_baac84; }
    goto L_baae38;
L_baae10:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_CC) { goto L_baac84; }
    goto L_baae38;
L_baae20:;
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[12], c->r[3]);
    if (COND_NE) { goto L_baad3c; }
    c->r[0] = (c->r[0] >> 24);
    goto L_baad74;
L_baae38:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_baae40:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_bb07b0(c);
}
void f_baae64(Cpu *restrict c) {
    FN_ENTER(0xbaae64u);
L_baae64:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x68u;
    c->r[13] = c->r[13] - 0x400u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[9] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[9] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_baca9c; }
    { uint32_t ea = c->r[9] + 0x230u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_baca9c; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1eu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = LD32(c->r[4] + 196u);
    c->v.s[2] = LD32(c->r[4] + 200u);
    c->v.s[4] = LD32(c->r[4] + 204u);
    c->v.s[6] = LD32(c->r[4] + 208u);
    c->r[0] = c->r[13] + 0x450u;
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[7] = (uint32_t)(uint16_t)(c->r[3]);
    c->v.s[8] = c->r[7];
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = (c->r[1] >> 16) & 0x3fffu;
    c->v.s[10] = c->r[2];
    c->r[2] = (c->r[3] >> 16);
    c->v.s[14] = c->r[1];
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.s[12] = c->r[2];
    c->v.f[10] = (float)c->v.s[10];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[8] = c->v.f[10] / c->v.f[8];
    c->v.f[10] = (float)(int32_t)c->v.s[12];
    c->v.f[12] = (float)c->v.s[14];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[10] = c->v.f[12] / c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    ST32(c->r[0], c->v.s[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.f[2] = c->v.f[8] * c->v.f[4];
    ST32(c->r[0] + 4u, c->v.s[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.f[2] = c->v.f[10] * c->v.f[6];
    ST32(c->r[0] + 8u, c->v.s[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    ST32(c->r[0] + 12u, c->v.s[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0xbaaf44u; f_a85804(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x410u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x414u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x418u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x41cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x420u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x424u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x428u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x42cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x430u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x434u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x438u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x43cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x440u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x444u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x448u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbaafccu; f_a85814(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3d0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3d4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3d8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3e0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3e4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3e8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3ecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3f0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3f4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3f8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3fcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x400u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x404u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x408u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbab05cu; f_a7ff38(c);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x164u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[1] << 5) & 0xffffffe0u);
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0xbcb39du;
    c->r[2] = 0xbab090u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xbab094u; f_a7fbb4(c);
    c->r[0] = 0xe8dcbcu;
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = 0xbab0a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbab0acu; f_dd3f10(c);
    c->r[0] = 0x1e9cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_baca94; }
    c->r[0] = 0x14e4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_CS) { goto L_baca94; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[2] = 0x0u;
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x151cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x310u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x314u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x318u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x31cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x320u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x324u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x328u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x32cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x330u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x334u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x338u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x33cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x340u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x344u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x350u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x354u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x358u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x35cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x360u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x364u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x368u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x36cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x370u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x374u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x378u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x37cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x380u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x384u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x388u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x398u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x39cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3a0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3a4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3a8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3b0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3b8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3bcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3c8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3ccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbab284u; f_a7ff38(c);
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[5] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[2]); }
    c->r[14] = 0xbab2a4u; f_baa558(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bab310; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x173u;
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
    { uint32_t ea = c->r[4] + 0xda0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[4] + 0xd9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bab310:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbab324u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_bab378; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xbab374u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bab378:;
    c->r[1] = c->r[0] + c->r[6];
    c->r[8] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xd9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_bab47c; }
    { uint32_t ea = c->r[9] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2d0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2d4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2d8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2dcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2e0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2e4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2e8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2ecu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2f0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2f4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2f8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2fcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x300u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x304u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x308u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2e8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2ecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2f0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2f8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
L_bab47c:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8e084u;
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = 0xbab490u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_bab4c4; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_bab4c4; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    goto L_bab4e4;
L_bab4c4:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[4];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[2] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_bab4e4:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bab508; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_bab508:;
    c->r[1] = 0x100cu;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] - 0xeecu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[2] = c->r[9];
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[6], 0x2u);
    { uint32_t ea = c->r[2] + 0x74u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[5] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | (c->r[1] << 16);
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x2c8u; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] >> 16) & 0x3fffu;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2ccu; ST32(ea, c->r[1]); }
    if (COND_CC) { goto L_bab570; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x3fffu;
L_bab570:;
    c->v.s[0] = c->r[0];
    c->v.s[4] = c->r[1];
    c->v.s[2] = 0xc0000000u;
    c->v.s[8] = 0xbf800000u;
    c->v.s[16] = 0x3f800000u;
    c->r[0] = 0x20e0u;
    c->r[1] = 0x2a5eu;
    c->r[2] = 0xb4c4u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3e1c0000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3e630000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3e800000u;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    { uint32_t ea = c->r[13] + 0x2b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2c4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->v.f[6] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[2] / c->v.f[4];
    c->v.f[10] = c->v.f[8] / c->v.f[0];
    ST32(c->r[13] + 652u, c->v.s[2]);
    c->v.f[2] = c->v.f[8] / c->v.f[4];
    ST32(c->r[13] + 672u, c->v.s[6]);
    c->v.s[6] = 0x0u;
    ST32(c->r[13] + 676u, c->v.s[10]);
    c->v.f[8] = c->v.f[6] / c->v.f[0];
    ST32(c->r[13] + 656u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] / c->v.f[4];
    c->v.f[6] = c->v.f[16] / c->v.f[0];
    ST32(c->r[13] + 680u, c->v.s[8]);
    c->v.f[8] = c->v.f[16] / c->v.f[4];
    ST32(c->r[13] + 660u, c->v.s[2]);
    c->v.s[2] = 0x40000000u;
    ST32(c->r[13] + 684u, c->v.s[6]);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[2] / c->v.f[4];
    ST32(c->r[13] + 664u, c->v.s[8]);
    ST32(c->r[13] + 688u, c->v.s[0]);
    ST32(c->r[13] + 668u, c->v.s[2]);
    c->r[14] = 0xbab61cu; f_aaf6d8(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LS) { c->r[5] = c->r[2]; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x280u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x284u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x3fffu;
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x270u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x274u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x288u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_bac434; }
    c->r[0] = 0x189cu;
    c->v.s[0] = c->r[6];
    c->v.s[18] = 0x42c80000u;
    c->r[1] = c->r[13] + 0x310u;
    c->r[5] = 0x3f800000u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1be8u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x116cu;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2724u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1174u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1be4u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0x203cu;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x2040u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe8e4d0u;
    c->v.f[20] = (float)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = 0xbab700u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[22] = c->v.f[16] / c->v.f[20];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe8e4c0u;
    { uint32_t ea = 0xbab710u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe9648cu;
    { uint32_t ea = 0xbab71cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xecu;
    c->r[10] = c->r[0] + 0x30c00u;
    c->r[0] = 0xe93888u;
    { uint32_t ea = 0xbab730u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe93880u;
    { uint32_t ea = 0xbab73cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe93870u;
    { uint32_t ea = 0xbab748u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe93868u;
    { uint32_t ea = 0xbab754u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe93858u;
    { uint32_t ea = 0xbab760u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe93850u;
    { uint32_t ea = 0xbab76cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
L_bab774:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], 0x2u);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x40000000u;
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xc0000000u;
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[5]); }
    if (COND_CC) { goto L_bab958; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[0]); }
    c->v.s[0] = c->r[2];
    c->r[2] = c->r[13] + 0x1a0u;
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 372u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    c->v.f[0] = c->v.f[0] / c->v.f[20];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 468u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0xe0u;
    c->r[0] = c->r[5];
    c->r[14] = 0xbab8acu; f_229d48(c);
    c->r[6] = c->r[13] + 0xa0u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[13] + 0x160u;
    c->r[0] = c->r[6];
    c->r[14] = 0xbab8c0u; f_229d48(c);
    c->r[0] = c->r[13] + 0x120u;
    c->r[1] = c->r[6];
    c->r[2] = c->r[13] + 0x1e0u;
    c->r[14] = 0xbab8d0u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x250u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x254u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bab9e0;
L_bab958:;
    c->r[0] = c->r[13] + 0x1a0u;
    c->r[2] = c->r[13] + 0x1e0u;
    c->r[14] = 0xbab964u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x250u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x254u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_bab9e0:;
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_baba4c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2d3u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[10] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_baba4c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbaba60u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[7] = c->r[1] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_babab4; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xbabab0u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_babab4:;
    c->r[1] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_babaf4; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = c->r[1];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] / c->v.f[20];
    ST32(c->r[0] + 12u, c->v.s[0]);
    ST32(c->r[0] + 16u, c->v.s[22]);
L_babaf4:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xbabb24u; f_a814c0(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = c->v.s[18];
    c->r[0] = c->r[4];
    c->r[2] = c->r[13] + 0x220u;
    c->r[3] = c->r[13] + 0x27cu;
    c->r[14] = 0xbabb3cu; f_a85844(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = 0xfu;
    c->r[3] = 0x0u;
    c->r[14] = 0xbabb54u; f_a80108(c);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_babc30; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_babbc4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x3c7u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[10] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_babbc4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3a000000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_babc0c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_babc24;
L_babc0c:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_babc24:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_babc30:;
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0xeb17u;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x2d870000u;
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { c->r[3] = c->r[2] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_babc60; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_babc98; }
L_babc60:;
    c->r[3] = 0xeb17u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x2d870000u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x2u;
    c->r[2] = (c->r[2] & 0xffff00ffu) | ((c->r[3] << 8) & 0xff00u);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0xb17u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x20000u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_babc98:;
    c->r[5] = c->r[9];
    c->r[1] = c->r[4];
    c->r[7] = 0x0u;
    c->r[0] = c->r[5];
    c->r[14] = 0xbabcacu; f_baa948(c);
    { uint32_t ea = c->r[5] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xbabcccu; f_a814c0(c);
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_babdcc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_babd3c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x33cu;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[10] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_babd3c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_babd78; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_babd84;
L_babd78:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_babd84:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_babda8; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_babdc0;
L_babda8:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_babdc0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_babdcc:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0xdaedu;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[0] + 0xbd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xbd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; } }
    if (COND_NE) { goto L_babe0c; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_babe40; }
L_babe0c:;
    c->r[7] = 0xdaedu;
    c->r[3] = c->r[3] & 0xffff00ffu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[1]); }
L_babe40:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x3dc0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_babee4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_babeb8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[10] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_babeb8:;
    c->r[1] = 0x3dc0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xf7b8u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf83f0000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_babee4:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_babf48; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1edu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[10] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_babf48:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7b4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0xbabf5cu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[9] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[9] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_babfb0; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xbabfacu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
L_babfb0:;
    c->r[0] = c->r[9] + c->r[7];
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_bac06c; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[9];
    c->r[14] = 0xbabff4u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x100u; ST32(ea, c->r[0]); }
L_bac06c:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x27cu;
    c->r[3] = c->r[13] + 0x2c8u;
    c->r[2] = c->r[1];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbac08cu; f_aafc68(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0xbac0acu; f_a814c0(c);
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_bac1ac; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bac124; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x33cu;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[10] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_bac124:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bac160; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_bac16c;
L_bac160:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_bac16c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_bac188; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bac1a0;
L_bac188:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_bac1a0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_bac1ac:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3dc8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bac254; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bac228; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[10] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bac228:;
    c->r[1] = 0x3dc8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xc7b9u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbe90000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bac254:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bac2b8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1edu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[10] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bac2b8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7b4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0xbac2ccu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[7] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[7] + c->r[5];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_bac320; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xbac31cu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
L_bac320:;
    c->r[0] = c->r[7] + c->r[5];
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[5] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_bac3d8; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xbac364u; f_15efe30(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x298u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x100u; ST32(ea, c->r[0]); }
L_bac3d8:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x26cu;
    c->r[2] = c->r[13] + 0x27cu;
    c->r[3] = c->r[13] + 0x2c8u;
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbac3f8u; f_aafc68(c);
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x270u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x40u;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_bab774; }
L_bac434:;
    { uint32_t ea = c->r[9] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbac460u; f_a814c0(c);
    c->v.s[0] = 0x42c80000u;
    c->r[1] = c->r[13] + 0x410u;
    c->r[2] = c->r[13] + 0x3d0u;
    c->r[3] = c->r[13] + 0x450u;
    c->r[0] = c->r[4];
    c->r[14] = 0xbac478u; f_a85844(c);
    c->r[0] = 0xe95718u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0x3fu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xbac490u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbac494u; f_a80108(c);
    c->r[1] = 0x1e9cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_bac598; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bac50c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x393u;
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
L_bac50c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bac54c; }
    c->r[1] = 0xe92a94u;
    c->r[2] = 0xe92a94u;
    { uint32_t ea = 0xbac524u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbac528u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[1] = 0xb000u;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xd8db0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_bac554;
L_bac54c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_bac554:;
    c->r[2] = 0x1ea0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bac574; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bac58c;
L_bac574:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_bac58c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_bac598:;
    c->r[1] = 0xe8cf68u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbac5acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_bac5f4; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_bac5f4; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bac60c;
L_bac5f4:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_bac60c:;
    { uint32_t ea = c->r[4] + 0xfccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bac630; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_bac630:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0xaafbu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x66f20000u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; } }
    if (COND_NE) { goto L_bac680; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_bac6ac; }
L_bac680:;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xafbu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bac6ac:;
    c->r[0] = 0x2abcu;
    c->r[1] = c->r[4];
    c->r[3] = 0x28c0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xd554u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bac760; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bac738; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x517u;
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
L_bac738:;
    c->r[2] = 0x28c0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x7518u;
    c->r[1] = 0x2ac0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd3d30000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_bac760:;
    c->r[3] = 0x4ab0u;
    c->r[2] = 0x3984u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bac808; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bac7e0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x6f0u;
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
L_bac7e0:;
    c->r[2] = 0x4ab0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xc956u;
    c->r[1] = 0x3988u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x67100000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_bac808:;
    c->r[3] = 0x3650u;
    c->r[2] = 0x3854u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bac8ac; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bac888; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x6cau;
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
L_bac888:;
    c->r[2] = 0x3650u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x3858u;
    c->r[2] = 0x6cau;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_bac8ac:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x399cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_CS) { goto L_bac95c; }
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_CC) { goto L_bac9ec; }
    c->r[3] = 0x4ab8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_baca88; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bac940; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x6f3u;
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
L_bac940:;
    c->r[2] = 0x4ab8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xb957u;
    c->r[0] = 0x39a0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x9a9f0000u;
    goto L_baca78;
L_bac95c:;
    c->r[3] = 0x4ac8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_baca88; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bac9d0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x6f3u;
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
L_bac9d0:;
    c->r[2] = 0x4ac8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xb959u;
    c->r[0] = 0x39a0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x2290000u;
    goto L_baca78;
L_bac9ec:;
    c->r[3] = 0x4ac0u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_baca88; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_baca60; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x6f3u;
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
L_baca60:;
    c->r[2] = 0x4ac0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1958u;
    c->r[0] = 0x39a0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x281f0000u;
L_baca78:;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_baca88:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xbaca94u; f_baa948(c);
L_baca94:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbaca9cu; f_a81a68(c);
L_baca9c:;
    c->r[13] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bacabc(Cpu *restrict c) {
    FN_ENTER(0xbacabcu);
L_bacabc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0xe8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0xcu;
    c->r[2] = 0x0u;
    c->r[0] = c->r[4];
    c->r[14] = 0xbacaecu; f_a7ff38(c);
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 196u);
    c->v.s[2] = LD32(c->r[4] + 200u);
    c->v.s[4] = LD32(c->r[4] + 204u);
    c->v.s[6] = LD32(c->r[4] + 208u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = (c->r[0] >> 16) & 0x3fffu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.s[8] = c->r[0];
    c->v.s[12] = c->r[1];
    c->r[1] = 0x0u;
    c->v.f[8] = (float)c->v.s[8];
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[0] = (c->r[2] >> 16);
    c->r[2] = 0x0u;
    c->v.s[10] = c->r[3];
    c->v.s[14] = c->r[0];
    c->r[0] = c->r[4];
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[12] = (float)c->v.s[12];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[14] = (float)(int32_t)c->v.s[14];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->v.f[2] = c->v.f[2] * c->v.f[12];
    c->v.f[0] = c->v.f[0] / c->v.f[10];
    c->v.f[2] = c->v.f[2] / c->v.f[14];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 216u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[8];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 220u, c->v.s[2]);
    c->v.f[0] = c->v.f[0] / c->v.f[10];
    c->v.f[2] = c->v.f[6] * c->v.f[12];
    c->v.f[2] = c->v.f[2] / c->v.f[14];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 224u, c->v.s[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 228u, c->v.s[0]);
    c->r[14] = 0xbacba0u; f_a7ff38(c);
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x164u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[1] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->v.s[16] = LD32(c->r[5] + 260u);
    c->v.s[18] = LD32(c->r[5] + 276u);
    c->r[14] = 0xbacbd4u; f_a85824(c);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[6] = LD32(c->r[0] + 36u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[8] = LD32(c->r[0] + 4u);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->v.s[2] = LD32(c->r[0] + 52u);
    c->v.s[4] = LD32(c->r[0] + 56u);
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[9] = c->v.f[16] + c->v.f[18];
    c->r[7] = c->r[13] + 0x10u;
    c->r[8] = c->r[13] + 0x90u;
    c->v.s[10] = c->r[0];
    c->v.s[12] = c->r[3];
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[2]); }
    c->v.s[1] = c->r[1];
    c->v.s[3] = c->r[2];
    c->r[2] = c->r[8];
    c->v.s[7] = c->v.s[8] ^ 0x80000000u;
    c->v.s[11] = c->v.s[6] ^ 0x80000000u;
    c->v.f[14] = c->v.f[10] * c->v.f[8];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[5] = c->v.f[3] * c->v.f[10];
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[12] * c->v.f[1]);
    ST32(c->r[13] + 148u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 160u, c->v.s[7]);
    c->v.s[7] = 0x3f000000u;
    c->v.f[7] = c->v.f[9] * c->v.f[7];
    c->v.f[9] = c->v.f[3] * c->v.f[6];
    c->v.f[9] = c->v.f[9] - (float)(c->v.f[1] * c->v.f[8]);
    ST32(c->r[13] + 164u, c->v.s[5]);
    c->v.f[3] = c->v.f[3] * c->v.f[0];
    ST32(c->r[13] + 168u, c->v.s[11]);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[3]); }
    c->v.f[7] = c->v.f[7] + c->v.f[7];
    ST32(c->r[13] + 180u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[1]); }
    c->r[0] = 0x3f800000u;
    c->v.f[2] = c->v.f[7] - c->v.f[2];
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[5] = c->v.f[5] * c->v.f[2];
    c->v.f[8] = c->v.f[1] * c->v.f[0];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[9] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.s[0] = c->v.s[3] ^ 0x80000000u;
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[2] = c->v.s[5] ^ 0x80000000u;
    c->v.s[0] = c->v.s[8] ^ 0x80000000u;
    ST32(c->r[13] + 196u, c->v.s[2]);
    ST32(c->r[13] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe8cf00u;
    { uint32_t ea = 0xbaccd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x50u;
    c->r[0] = c->r[7];
    c->v.s[0] = LD32(c->r[5] + 552u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 132u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0xbacd60u; f_229d48(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xbacd68u; f_a85814(c);
    c->r[9] = c->r[13] + 0xd8u;
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xbacd84u; f_baefb0(c);
    c->r[0] = 0xbc9667u;
    c->r[1] = 0x2u;
    c->r[2] = 0xbacd94u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xbacd98u; f_a7fbb4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0xbacda8u; f_a7ff38(c);
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[1] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbacdf4u; f_a814c0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xbacdfcu; f_a85814(c);
    c->v.s[0] = 0x42c80000u;
    c->r[2] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[3] = c->r[9];
    c->r[14] = 0xbace14u; f_a85844(c);
    { uint32_t ea = c->r[5] + 0x230u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xbace24u; f_baf3fc(c);
    c->r[0] = 0xe8bf2cu;
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = 0xbace38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbace3cu; f_dd3c2c(c);
    { uint32_t ea = c->r[5] + 0x230u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bace60; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x1u;
    c->r[14] = 0xbace58u; f_baf928(c);
    c->r[0] = c->r[5] + 0x258u;
    goto L_bace74;
L_bace60:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[14] = 0xbace70u; f_baf928(c);
    c->r[0] = c->r[5] + 0x264u;
L_bace74:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = 0x3b808081u;
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = 0x0u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->v.s[0] = c->r[1];
    c->r[1] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    c->v.s[4] = c->r[0];
    c->v.s[6] = c->r[1];
    c->r[0] = 0x0u;
    c->r[1] = 0x3fu;
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[6] = (float)c->v.s[6];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[4] * c->v.f[2];
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->v.f[0] = c->v.f[6] * c->v.f[2];
    ST32(c->r[13] + 20u, c->v.s[4]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbaced8u; f_a80108(c);
    c->r[1] = 0x3204u;
    c->r[0] = c->r[4];
    c->r[3] = 0x4a98u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xce0cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bacf94; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bacf64; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x600u;
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
L_bacf64:;
    c->r[2] = 0x4a98u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7953u;
    c->r[0] = 0x3208u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xdac70000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bacf94:;
    c->r[1] = 0x203cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bad098; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bad00c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x3c7u;
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
L_bad00c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bad044; }
    c->r[2] = 0xe91f94u;
    c->r[3] = 0xe91f94u;
    { uint32_t ea = 0xbad024u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbad028u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x3a000000u;
    goto L_bad04c;
L_bad044:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_bad04c:;
    c->r[2] = 0x2040u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bad070; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bad08c;
L_bad070:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bad08c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bad098:;
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bad0ac; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bad0b0;
L_bad0ac:;
    c->r[0] = 0x0u;
L_bad0b0:;
    c->r[2] = 0x200cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_bad1b8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bad124; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x3c1u;
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
L_bad124:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bad160; }
    c->r[2] = 0xe91e7cu;
    c->r[3] = 0xe91e7cu;
    { uint32_t ea = 0xbad13cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbad140u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x8a000u;
    c->r[0] = c->r[0] | 0xf500000u;
    goto L_bad168;
L_bad160:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_bad168:;
    c->r[2] = 0x2010u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_bad190; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bad1ac;
L_bad190:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bad1ac:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bad1b8:;
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6] ^ c->r[5];
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe8bb5cu;
    { uint32_t ea = 0xbad1d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbad1e0u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x16u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[6]); }
    c->r[14] = 0xbad1f4u; f_a7ff38(c);
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = 0x1u;
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[3] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x248u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bad220; }
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xbad220u; f_bafc00(c);
L_bad220:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbad228u; f_a81a68(c);
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bad25c(Cpu *restrict c) {
    FN_ENTER(0xbad25cu);
L_bad25c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xacu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0xcu;
    c->r[2] = 0x0u;
    c->r[0] = c->r[4];
    c->r[14] = 0xbad284u; f_a7ff38(c);
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 196u);
    c->v.s[2] = LD32(c->r[4] + 200u);
    c->v.s[4] = LD32(c->r[4] + 204u);
    c->v.s[6] = LD32(c->r[4] + 208u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = (c->r[0] >> 16) & 0x3fffu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.s[8] = c->r[0];
    c->v.s[12] = c->r[1];
    c->r[1] = 0x0u;
    c->v.f[8] = (float)c->v.s[8];
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[0] = (c->r[2] >> 16);
    c->r[2] = 0x0u;
    c->v.s[10] = c->r[3];
    c->v.s[14] = c->r[0];
    c->r[0] = c->r[4];
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[12] = (float)c->v.s[12];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[14] = (float)(int32_t)c->v.s[14];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->v.f[2] = c->v.f[2] * c->v.f[12];
    c->v.f[0] = c->v.f[0] / c->v.f[10];
    c->v.f[2] = c->v.f[2] / c->v.f[14];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 156u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[8];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 160u, c->v.s[2]);
    c->v.f[0] = c->v.f[0] / c->v.f[10];
    c->v.f[2] = c->v.f[6] * c->v.f[12];
    c->v.f[2] = c->v.f[2] / c->v.f[14];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 164u, c->v.s[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 168u, c->v.s[0]);
    c->r[14] = 0xbad338u; f_a7ff38(c);
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = 0x1u;
    { uint32_t ea = c->r[9] + 0x164u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[10] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe8c868u;
    { uint32_t ea = 0xbad368u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x22cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0xbad3f0u; f_a85804(c);
    c->r[6] = c->r[13] + 0x10u;
    c->r[2] = c->r[0];
    c->r[1] = c->r[13] + 0x50u;
    c->r[0] = c->r[6];
    c->r[14] = 0xbad404u; f_229d48(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xbad40cu; f_a85814(c);
    c->r[8] = c->r[13] + 0x9cu;
    c->r[1] = c->r[4];
    c->r[2] = c->r[7];
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xbad428u; f_baefb0(c);
    c->r[0] = 0xbc8fd3u;
    c->r[1] = 0x800u;
    c->r[2] = 0xbad438u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xbad43cu; f_a7fbb4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0xbad44cu; f_a7ff38(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[10] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbad494u; f_a814c0(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[14] = 0xbad4a0u; f_a7fc58(c);
    c->r[0] = 0xe8b8b0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = 0xbad4b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbad4b8u; f_dd3c2c(c);
    { uint32_t ea = c->r[5] + 0x230u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bad4e8; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[14] = 0xbad4d4u; f_baf928(c);
    { uint32_t ea = c->r[5] + 0x264u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    goto L_bad508;
L_bad4e8:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x1u;
    c->r[14] = 0xbad4f8u; f_baf928(c);
    { uint32_t ea = c->r[5] + 0x258u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x1u;
L_bad508:;
    c->r[14] = 0xbad50cu; f_baf3fc(c);
    c->r[0] = (uint32_t)(uint8_t)(c->r[6]);
    c->v.s[2] = 0x3b808081u;
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = 0x0u;
    c->v.s[0] = c->r[0];
    c->r[0] = (c->r[6] >> 16) & 0xffu;
    c->r[1] = (c->r[6] >> 8) & 0xffu;
    c->v.s[4] = c->r[1];
    c->v.s[6] = c->r[0];
    c->r[0] = 0x0u;
    c->r[1] = 0x3fu;
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[6] = (float)c->v.s[6];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[4] * c->v.f[2];
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->v.f[0] = c->v.f[6] * c->v.f[2];
    ST32(c->r[13] + 20u, c->v.s[4]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbad56cu; f_a80108(c);
    c->r[1] = 0x3204u;
    c->r[0] = c->r[4];
    c->r[3] = 0x4a98u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xce0cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bad628; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bad5f8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x600u;
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
L_bad5f8:;
    c->r[2] = 0x4a98u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7953u;
    c->r[0] = 0x3208u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xdac70000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bad628:;
    c->r[1] = 0x203cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bad72c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bad6a0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x3c7u;
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
L_bad6a0:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bad6d8; }
    c->r[2] = 0xe91900u;
    c->r[3] = 0xe91900u;
    { uint32_t ea = 0xbad6b8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbad6bcu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x3a000000u;
    goto L_bad6e0;
L_bad6d8:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_bad6e0:;
    c->r[2] = 0x2040u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bad704; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bad720;
L_bad704:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bad720:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bad72c:;
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bad740; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bad744;
L_bad740:;
    c->r[0] = 0x0u;
L_bad744:;
    c->r[2] = 0x200cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_bad848; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bad7b8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x3c1u;
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
L_bad7b8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bad7f4; }
    c->r[2] = 0xe917e8u;
    c->r[3] = 0xe917e8u;
    { uint32_t ea = 0xbad7d0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbad7d4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x8a000u;
    c->r[0] = c->r[0] | 0xf500000u;
    goto L_bad7fc;
L_bad7f4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_bad7fc:;
    c->r[2] = 0x2010u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_bad820; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bad83c;
L_bad820:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bad83c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bad848:;
    c->r[0] = 0xe8b4d0u;
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xbad85cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbad86cu; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x16u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[6]); }
    c->r[14] = 0xbad880u; f_a7ff38(c);
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = 0x1u;
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[3] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x248u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bad8ac; }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xbad8acu; f_bafc00(c);
L_bad8ac:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbad8b4u; f_a81a68(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bad8e0(Cpu *restrict c) {
    FN_ENTER(0xbad8e0u);
L_bad8e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x10cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[9] = c->r[1];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x33cu; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_bada94; }
    { uint32_t ea = c->r[5] + 0x348u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0xffe0u;
    c->r[1] = 0x0u;
    c->r[10] = 0x0u;
    c->r[3] = 0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x1f0000u;
L_bad928:;
    { uint32_t ea = c->r[5] + 0x344u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[6] + (c->r[3] << 6);
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_bada84; }
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[10] = c->r[10] + 0x4u;
    c->v.s[4] = LD32(c->r[6] + 16u);
    c->v.s[6] = LD32(c->r[6] + 32u);
    c->v.s[2] = LD32(c->r[6] + 20u);
    c->v.s[8] = LD32(c->r[6] + 40u);
    c->v.s[0] = LD32(c->r[6] + 8u);
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[12] & (c->r[2] >> 11);
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[10] = c->v.f[4] - c->v.f[6];
    c->v.f[12] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->r[2] = c->r[4] + c->r[2];
    ST32(c->r[0], c->v.s[10]);
    { uint32_t ea = c->r[5] + 0xd4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    ST32(c->r[0] + 8u, c->v.s[12]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    c->r[6] = c->v.s[0];
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[6] = (c->r[6] << 3);
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = ea; c->r[6] = v; }
    c->v.s[0] = c->r[6];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[0] + 16u, c->v.s[0]);
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->v.s[0] = c->r[6];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[0] + 20u, c->v.s[0]);
    ST32(c->r[0] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[5] + 0xd4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[6]); }
    ST32(c->r[0] + 32u, c->v.s[12]);
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[6] = c->r[4] + c->r[6];
    c->v.s[0] = c->r[6];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[0] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->v.s[0] = c->r[6];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[0] + 44u, c->v.s[0]);
    ST32(c->r[0] + 48u, c->v.s[10]);
    c->v.f[0] = c->v.f[2] + c->v.f[8];
    { uint32_t ea = c->r[5] + 0xd4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    ST32(c->r[0] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->v.s[2] = c->r[6];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    ST32(c->r[0] + 64u, c->v.s[2]);
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[6] = c->r[4] + c->r[6];
    c->v.s[2] = c->r[6];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    ST32(c->r[0] + 68u, c->v.s[2]);
    ST32(c->r[0] + 72u, c->v.s[4]);
    { uint32_t ea = c->r[5] + 0xd4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[6]); }
    ST32(c->r[0] + 80u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[7] = c->r[6] + c->r[7];
    c->v.s[0] = c->r[7];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[0] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[7];
    c->v.s[0] = c->r[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[0] + 92u, c->v.s[0]);
    c->r[0] = c->r[0] + 0x60u;
    { uint32_t ea = c->r[5] + 0x33cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_bada84:;
    c->r[3] = c->r[3] + 0x1u;
    c->r[1] = c->r[1] + 0x40u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_bad928; }
L_bada94:;
    c->r[0] = c->r[9];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0xbadaa8u; f_a7ff38(c);
    c->r[4] = c->r[9];
    { uint32_t ea = c->r[9] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[1] = 0x2u;
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[6] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xbc893fu;
    c->r[2] = 0xbadadcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xbadae0u; f_a7fbb4(c);
    c->r[0] = c->r[9];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0xbadaf0u; f_a7ff38(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[6] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[9] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x16cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_badce8; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_badb88; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x2d4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x18a4u;
    c->r[2] = 0x18a8u;
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_badb88:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbadb9cu; f_a6a438(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[8] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[8] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_badbf0; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[7];
    c->r[14] = 0xbadbecu; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
L_badbf0:;
    c->r[0] = c->r[8] + c->r[7];
    c->r[7] = c->r[9];
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x18a4u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x154u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_bade74; }
    { uint32_t ea = c->r[5] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = 0x3f800000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 220u);
    c->v.s[2] = LD32(c->r[0] + 224u);
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[4] / c->v.f[0];
    c->v.f[2] = c->v.f[4] / c->v.f[2];
    ST32(c->r[8] + 8u, c->v.s[0]);
    ST32(c->r[8] + 12u, c->v.s[2]);
    { uint32_t ea = c->r[5] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x340u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_badd60; }
    c->r[0] = c->r[9];
    c->r[14] = 0xbadc68u; f_a857a8(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bade64;
L_badce8:;
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xbadd08u; f_a814c0(c);
    { uint32_t ea = c->r[5] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xbadd28u; f_a7fc58(c);
    c->r[0] = 0x8081u;
    c->v.s[0] = 0x3f800000u;
    c->r[2] = c->r[13] + 0xc0u;
    c->r[1] = 0xfu;
    c->r[3] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3f000000u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xbadd5cu; f_a80108(c);
    goto L_bae50c;
L_badd60:;
    c->r[0] = 0xe8b480u;
    c->v.s[0] = 0x447a0000u;
    c->v.s[2] = LD32(c->r[5] + 416u);
    c->v.s[4] = LD32(c->r[5] + 420u);
    c->v.s[6] = LD32(c->r[5] + 424u);
    c->r[2] = c->r[5] + 0x1a0u;
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = 0xbadd84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.s[12] = LD32(c->r[0] + 8u);
    c->r[0] = 0x0u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    ST32(c->r[13] + 128u, c->v.s[2]);
    ST32(c->r[13] + 132u, c->v.s[4]);
    ST32(c->r[13] + 136u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe8b4a0u;
    { uint32_t ea = 0xbaddb8u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[13] + 0xc0u;
    c->r[14] = 0xbaddbcu; f_9c5e4c(c);
    c->v.s[0] = LD32(c->r[5] + 444u);
    c->v.s[3] = 0x44fa0000u;
    c->v.s[2] = 0x41800000u;
    c->r[6] = c->r[13] + 0x80u;
    c->r[0] = c->r[6];
    c->v.s[1] = c->v.s[0];
    c->r[14] = 0xbaddd8u; f_9c6440(c);
    c->r[0] = c->r[13] + 0x40u;
    c->r[1] = c->r[13] + 0xc0u;
    c->r[2] = c->r[6];
    c->r[14] = 0xbadde8u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_bade64:;
    { uint32_t ea = c->r[8] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[0]); }
L_bade74:;
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0xbade98u; f_a814c0(c);
    { uint32_t ea = c->r[5] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xbadeb8u; f_a7fc58(c);
    c->r[0] = 0xe93cd8u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0xfu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xbaded0u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0xbaded4u; f_a80108(c);
    { uint32_t ea = c->r[9] + 0x1d8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0xeb17u;
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x2d870000u;
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_EQ) { c->r[6] = c->r[2] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[6] ^ 0x300u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_badf04; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_badf30; }
L_badf04:;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x3u;
    c->r[2] = (c->r[2] & 0xffff00ffu) | ((c->r[3] << 8) & 0xff00u);
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[8]); }
    c->r[1] = 0xb17u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_badf30:;
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xc050u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xc4630000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_badf50; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_badfc4;
L_badf50:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_badfac; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
L_badfac:;
    { uint32_t ea = c->r[9] + 0x1c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_badfc4:;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x600000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_badff4; }
    c->r[2] = 0xfffeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[1] = c->r[1] | 0x1u;
    c->r[1] = c->r[1] | 0x600000u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_badff4:;
    c->r[0] = 0x1be4u;
    c->r[8] = c->r[9];
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_bae104; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bae070; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[6] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
L_bae070:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bae0b0; }
    c->r[1] = 0xe90f30u;
    c->r[2] = 0xe90f30u;
    { uint32_t ea = 0xbae088u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbae08cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_bae0b8;
L_bae0b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
L_bae0b8:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_bae0e0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bae0f8;
L_bae0e0:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_bae0f8:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_bae104:;
    c->r[0] = c->r[9];
    c->r[14] = 0xbae10cu; f_a826fc(c);
    c->r[1] = 0x18u;
    c->r[0] = c->r[13] + 0x3cu;
    c->r[2] = c->r[10];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[10] >> 1);
    c->r[1] = 0x0u;
    c->r[3] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[9];
    c->r[14] = 0xbae138u; f_a8454c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bae164; }
    { uint32_t ea = c->r[5] + 0x348u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[10] + (c->r[10] << 1);
    c->r[2] = (c->r[2] << 3);
    c->r[14] = 0xbae150u; f_15efe30(c);
    c->r[10] = c->r[10] & 0x7fffffffu;
    { uint32_t ea = c->r[5] + 0x34cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + (c->r[10] << 1);
    c->r[14] = 0xbae164u; f_15efe30(c);
L_bae164:;
    c->r[0] = c->r[9];
    c->r[14] = 0xbae16cu; f_a82760(c);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0xbae18cu; f_a814c0(c);
    { uint32_t ea = c->r[9] + 0x1d8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0xdaedu;
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x316a0000u;
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; } }
    if (COND_NE) { goto L_bae1b8; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_bae1e0; }
L_bae1b8:;
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bae1e0:;
    c->r[0] = 0x2714u;
    c->r[1] = c->r[9];
    c->r[3] = 0x2510u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xd8fcu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bae290; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bae26c; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[6] = 0x4a2u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bae26c:;
    c->r[2] = 0x2510u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x2718u;
    c->r[2] = 0x4a2u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_bae290:;
    c->r[3] = 0x4af0u;
    c->r[2] = 0x2724u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bae338; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bae310; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[6] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bae310:;
    c->r[2] = 0x4af0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xf95eu;
    c->r[0] = 0x2728u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x148d0000u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bae338:;
    c->r[0] = 0x100cu;
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_bae364; }
    { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[0]); }
    goto L_bae368;
L_bae364:;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_bae368:;
    { uint32_t ea = c->r[9] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bae38c; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[0]); }
L_bae38c:;
    c->r[2] = 0xe8b174u;
    { uint32_t ea = c->r[9] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xbae3a0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { goto L_bae3b4; }
    { uint32_t ea = c->r[9] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bae3c8; }
L_bae3b4:;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[0]); }
L_bae3c8:;
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_bae4c4; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bae438; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[6] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
L_bae438:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bae478; }
    c->r[1] = 0xe90b68u;
    c->r[2] = 0xe90b68u;
    { uint32_t ea = 0xbae450u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbae454u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_bae480;
L_bae478:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
L_bae480:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_bae4a0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bae4b8;
L_bae4a0:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_bae4b8:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_bae4c4:;
    { uint32_t ea = c->r[9] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[1] = c->r[13] + 0xc0u;
    c->r[2] = c->r[13] + 0x80u;
    c->r[3] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[5] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xbae50cu; f_aafc68(c);
L_bae50c:;
    { uint32_t ea = c->r[5] + 0x340u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bae6b4; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bae58c; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x1d7u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x10bcu;
    c->r[2] = 0x10c0u;
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_bae58c:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x75cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbae5a0u; f_a6a438(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[4] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_bae5f4; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[14] = 0xbae5f0u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bae5f4:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x10bcu;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x158u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_bae66c; }
    c->r[1] = 0x0u;
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xcccdu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3dcc0000u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[0]); }
L_bae66c:;
    c->r[1] = 0xe8ae7cu;
    c->r[0] = 0xe8a714u;
    c->r[7] = 0x4418u;
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xe8a10000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = 0xbae698u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbae69cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9];
    c->r[14] = 0xbae6b4u; f_dc56dc(c);
L_bae6b4:;
    c->r[0] = c->r[9];
    c->r[14] = 0xbae6bcu; f_a81a68(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bae6f0(Cpu *restrict c) {
    FN_ENTER(0xbae6f0u);
L_bae6f0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[8] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[8] + 0x230u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_bae724; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_bae730; }
    { uint32_t ea = c->r[8] + 0x2a0u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bae730; }
    goto L_baed48;
L_bae724:;
    { uint32_t ea = c->r[8] + 0x2e8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_baed48; }
L_bae730:;
    { uint32_t ea = c->r[8] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_baed48; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[4];
    c->r[14] = 0xbae748u; f_baf3fc(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bae7bc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x1edu;
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
    c->r[1] = 0x116cu;
    c->r[2] = 0x1170u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bae7bc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbae7d0u; f_a6a438(c);
    c->r[3] = 0xfffcu;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x30000u;
    c->r[3] = c->r[3] & (c->r[5] << 2);
    c->r[1] = c->r[1] + c->r[2];
    c->r[1] = c->r[1] & c->r[0];
    c->r[2] = c->r[2] + c->r[3];
    c->r[0] = c->r[2] & c->r[0];
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0] + 0xfu;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[1] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LS) { goto L_bae824; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xbae820u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bae824:;
    c->r[0] = c->r[1] + c->r[6];
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x116cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    if (COND_EQ) { goto L_bae88c; }
    c->r[2] = 0xe8a9c0u;
    { uint32_t ea = 0xbae85cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0xe925ecu;
    { uint32_t ea = 0xbae874u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
L_bae88c:;
    c->r[1] = c->r[4];
    c->r[5] = 0xdaedu;
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[6] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; } }
    if (COND_NE) { goto L_bae8c0; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_bae8e8; }
L_bae8c0:;
    c->r[6] = c->r[6] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[1] = 0x0u;
    c->r[2] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_bae8e8:;
    c->r[1] = 0x2724u;
    c->r[2] = c->r[4];
    c->r[7] = 0x49b8u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    c->r[1] = 0xd8ecu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_bae99c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bae974; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[6] = 0x4a4u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[1] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bae974:;
    c->r[3] = 0x49b8u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[3] = 0x8937u;
    c->r[2] = 0x2728u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xf4460000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
L_bae99c:;
    c->r[7] = 0x2510u;
    c->r[3] = 0x2714u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_baea40; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_baea1c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[6] = 0x4a2u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[1] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_baea1c:;
    c->r[3] = 0x2510u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2718u;
    c->r[2] = 0x4a2u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_baea40:;
    c->r[2] = 0x203cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[2] = 0xe1a4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x280u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_baeb50; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_baeacc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[4] + 0xecu;
    c->r[5] = 0x3c7u;
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
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[3] = c->r[3] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[3]); }
L_baeacc:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_baeb04; }
    c->r[3] = 0xe904d4u;
    c->r[7] = 0xe904d4u;
    { uint32_t ea = 0xbaeae4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xbaeae8u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] | 0x3a000000u;
    goto L_baeb0c;
L_baeb04:;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
L_baeb0c:;
    c->r[3] = 0x2040u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_baeb2c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_baeb44;
L_baeb2c:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_baeb44:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_baeb50:;
    { uint32_t ea = c->r[8] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_baeb64; }
    { uint32_t ea = c->r[1] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_baeb68;
L_baeb64:;
    c->r[1] = 0x0u;
L_baeb68:;
    c->r[3] = 0x200cu;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_EQ) { goto L_baec6c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_baebe4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[4] + 0xecu;
    c->r[5] = 0x3c1u;
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
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[3] = c->r[3] + (c->r[7] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[3]); }
L_baebe4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_baec20; }
    c->r[3] = 0xe903bcu;
    c->r[7] = 0xe903bcu;
    { uint32_t ea = 0xbaebfcu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xbaec00u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8a000u;
    c->r[1] = c->r[1] | 0xf500000u;
    goto L_baec28;
L_baec20:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_baec28:;
    c->r[3] = 0x2010u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_baec48; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_baec60;
L_baec48:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_baec60:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_baec6c:;
    c->r[1] = 0xe8a894u;
    { uint32_t ea = c->r[4] + 0xe74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbaec80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_baec9c; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_baec9c; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_baecb4;
L_baec9c:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_baecb4:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_baecd8; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_baecd8:;
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[2] = c->r[13] + 0x8u;
    c->r[3] = c->r[13];
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x18u;
    c->r[0] = c->r[4];
    c->r[14] = 0xbaed48u; f_aafc68(c);
L_baed48:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_baed6c(Cpu *restrict c) {
    FN_ENTER(0xbaed6cu);
L_baed6c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x18u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x230u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    if (COND_NE) { c->r[2] = 0x0u; }
    if (COND_EQ) { c->r[2] = 0x1u; }
    c->r[14] = 0xbaeda0u; f_baf3fc(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_baee14; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x2d0u;
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
    c->r[1] = 0x1884u;
    c->r[2] = 0x1888u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_baee14:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbaee28u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_baee7c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xbaee78u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_baee7c:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1884u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_baefa0; }
    { uint32_t ea = c->r[5] + 0x230u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_baeedc; }
    c->v.s[0] = LD32(c->r[5] + 616u);
    c->v.s[2] = LD32(c->r[5] + 620u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_baef00; }
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.s[4] = 0x3f800000u;
    c->r[1] = c->r[5] + 0x264u;
    c->v.f[2] = c->v.f[4] / c->v.f[2];
    goto L_baef1c;
L_baeedc:;
    c->v.s[0] = LD32(c->r[5] + 604u);
    c->v.s[2] = LD32(c->r[5] + 608u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_baef10; }
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.s[4] = 0x3f800000u;
    c->v.f[2] = c->v.f[4] / c->v.f[2];
    goto L_baef18;
L_baef00:;
    c->v.s[0] = 0x0u;
    c->r[1] = c->r[5] + 0x264u;
    c->v.s[2] = c->v.s[0];
    goto L_baef1c;
L_baef10:;
    c->v.s[0] = 0x0u;
    c->v.s[2] = c->v.s[0];
L_baef18:;
    c->r[1] = c->r[5] + 0x258u;
L_baef1c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[6] = 0x3b808081u;
    c->r[3] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->v.s[4] = c->r[3];
    c->v.s[8] = c->r[2];
    c->r[2] = (c->r[1] >> 24);
    c->v.s[12] = c->r[2];
    c->v.f[4] = (float)c->v.s[4];
    c->r[1] = (c->r[1] >> 16) & 0xffu;
    c->v.f[8] = (float)c->v.s[8];
    c->v.s[10] = c->r[1];
    c->v.f[10] = (float)c->v.s[10];
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    ST32(c->r[13], c->v.s[4]);
    c->v.f[12] = (float)c->v.s[12];
    ST32(c->r[13] + 4u, c->v.s[8]);
    ST32(c->r[13] + 8u, c->v.s[10]);
    c->v.f[6] = c->v.f[12] * c->v.f[6];
    ST32(c->r[13] + 12u, c->v.s[6]);
    ST32(c->r[0], c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 12u, c->v.s[6]);
    ST32(c->r[0] + 16u, c->v.s[0]);
    ST32(c->r[0] + 20u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_baefa0:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_baefb0(Cpu *restrict c) {
    FN_ENTER(0xbaefb0u);
L_baefb0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[9] = c->r[0];
    c->r[0] = 0xbc744au;
    c->r[4] = c->r[1];
    c->r[8] = c->r[2];
    c->r[1] = 0x2u;
    c->r[7] = c->r[3];
    c->r[2] = 0xbaefd8u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xbaefdcu; f_a7fbb4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[5] = 0x1u;
    c->r[14] = 0xbaeff0u; f_a7ff38(c);
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = 0x42c80000u;
    { uint32_t ea = c->r[10] + 0x164u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[7];
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[5] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xbaf028u; f_a85844(c);
    { uint32_t ea = c->r[9] + 0x360u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x378u; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], 0x0u); }
    if (COND_EQ) { goto L_baf0f4; }
    c->r[0] = c->r[9] + 0x364u;
    c->r[2] = c->r[9] + 0x100u;
    c->r[1] = c->r[4];
    c->r[14] = 0xbaf04cu; f_bfcfe4(c);
    c->r[1] = 0x4c5cu;
    c->r[0] = c->r[4];
    c->r[3] = 0x4a68u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xb3b4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_baf25c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_baf0d8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x94bu;
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
L_baf0d8:;
    c->r[2] = 0x4a68u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x594du;
    c->r[0] = 0x4c60u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xe8220000u;
    goto L_baf244;
L_baf0f4:;
    c->r[0] = 0x28ecu;
    c->r[1] = c->r[4];
    c->r[3] = 0x26f0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xd724u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_baf1b0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_baf180; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x4ddu;
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
L_baf180:;
    c->r[2] = 0x26f0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x64deu;
    c->r[1] = 0x28f0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xfd9f0000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_baf1b0:;
    c->r[3] = 0x4a58u;
    c->r[2] = 0x4c5cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_baf25c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_baf230; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x94bu;
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
L_baf230:;
    c->r[2] = 0x4a58u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4c60u;
    c->r[1] = 0x94bu;
L_baf244:;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_baf25c:;
    { uint32_t ea = c->r[8] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    c->r[1] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xbaf27cu; f_a814c0(c);
    c->r[0] = 0xe92910u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0x30u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xbaf294u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbaf298u; f_a80108(c);
    c->r[0] = c->r[4];
    c->r[2] = 0xfff8u;
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f0000u;
    c->r[3] = c->r[1] & c->r[2];
    c->r[2] = 0x38u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80000u;
    { uint32_t r = c->r[3] ^ c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_baf2e0; }
    c->r[5] = 0x6u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = f_adds(c, c->r[2], 0x1u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffe00000u;
    c->r[1] = c->r[1] & c->r[5];
    c->r[1] = c->r[1] | c->r[2];
    c->r[2] = c->r[7] + 0x0u + c->cf;
    c->r[2] = c->r[3] | c->r[2];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_baf2e0:;
    c->r[3] = 0xe8a220u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0xbaf2f4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[2]);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { goto L_baf308; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_baf320; }
L_baf308:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[3] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[2]); }
L_baf320:;
    c->r[2] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_baf34c; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[2]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[3] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[2]); }
    goto L_baf350;
L_baf34c:;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_baf350:;
    { uint32_t ea = c->r[4] + 0xfccu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_baf374; }
    c->r[2] = c->r[2] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[2]); }
L_baf374:;
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0xeb17u;
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x2d870000u;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { c->r[6] = c->r[7] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[6] ^ 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_baf3a4; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_baf3d0; }
L_baf3a4:;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] | 0x3u;
    c->r[7] = (c->r[7] & 0xffff00ffu) | ((c->r[6] << 8) & 0xff00u);
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[2]); }
    c->r[2] = 0xb17u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_baf3d0:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xbaf3dcu; f_baa948(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_a81a68(c);
}
void f_baf3fc(Cpu *restrict c) {
    FN_ENTER(0xbaf3fcu);
L_baf3fc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x68u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[0] = 0x936u;
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[2], 0x1u);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x1b300000u;
    if (COND_NE) { goto L_baf43c; }
    { uint32_t ea = c->r[5] + 0x2e8u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_baf450; }
    goto L_baf854;
L_baf43c:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_baf450; }
    { uint32_t ea = c->r[5] + 0x2a0u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_baf854; }
L_baf450:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_baf4ec; }
    { uint32_t ea = c->r[5] + 0x2f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = 0x3f800000u;
    c->v.s[16] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[16];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[5] + 792u);
    c->v.s[0] = LD32(c->r[5] + 796u);
    c->v.s[6] = LD32(c->r[5] + 800u);
    c->v.s[4] = LD32(c->r[5] + 804u);
    c->v.f[10] = c->v.f[0] - c->v.f[2];
    c->v.f[0] = c->v.f[6] - c->v.f[4];
    c->v.f[6] = c->v.f[8] / c->v.f[10];
    ST32(c->r[13] + 64u, c->v.s[6]);
    c->v.s[10] = LD32(c->r[5] + 784u);
    vfp_cmp_f(c, c->v.f[10], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_baf4c4; }
    c->v.f[18] = c->v.f[8] / c->v.f[10];
L_baf4c4:;
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.s[10] = LD32(c->r[5] + 788u);
    vfp_cmp_f(c, c->v.f[10], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_baf4dc; }
    c->v.f[16] = c->v.f[8] / c->v.f[10];
L_baf4dc:;
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->r[0] = c->r[5] + 0x300u;
    goto L_baf574;
L_baf4ec:;
    { uint32_t ea = c->r[5] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = 0x3f800000u;
    c->v.s[16] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[16];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[5] + 728u);
    c->v.s[0] = LD32(c->r[5] + 732u);
    c->v.s[6] = LD32(c->r[5] + 736u);
    c->v.s[4] = LD32(c->r[5] + 740u);
    c->v.f[10] = c->v.f[0] - c->v.f[2];
    c->v.f[0] = c->v.f[6] - c->v.f[4];
    c->v.f[6] = c->v.f[8] / c->v.f[10];
    ST32(c->r[13] + 64u, c->v.s[6]);
    c->v.s[10] = LD32(c->r[5] + 720u);
    vfp_cmp_f(c, c->v.f[10], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_baf550; }
    c->v.f[18] = c->v.f[8] / c->v.f[10];
L_baf550:;
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.s[10] = LD32(c->r[5] + 724u);
    vfp_cmp_f(c, c->v.f[10], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_baf568; }
    c->v.f[16] = c->v.f[8] / c->v.f[10];
L_baf568:;
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->r[0] = c->r[5] + 0x2c0u;
L_baf574:;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 68u, c->v.s[2]);
    c->v.s[2] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 72u, c->v.s[0]);
    ST32(c->r[13] + 76u, c->v.s[2]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_baf61c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x2d1u;
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
    c->r[1] = 0x188cu;
    c->r[2] = 0x1890u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_baf61c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbaf630u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[7] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_baf684; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xbaf680u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
L_baf684:;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x188cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_baf910; }
    c->v.s[0] = 0x0u;
    c->v.s[22] = c->r[8];
    c->v.s[26] = c->r[10];
    c->v.s[20] = c->r[9];
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[30] = c->v.f[26] * c->v.f[0];
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[20] * c->v.f[0]);
    c->v.f[24] = c->v.f[20] - c->v.f[2];
    c->v.f[28] = c->v.f[2] - c->v.f[26];
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_baf6f8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbaf6f8u; f_15efddc(c);
L_baf6f8:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_baf71c; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[30] = c->v.f[0] * c->v.f[30];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
L_baf71c:;
    c->v.f[0] = c->v.f[24] * c->v.f[22];
    c->v.f[2] = c->v.f[30] * c->v.f[20];
    c->v.f[4] = c->v.f[26] * c->v.f[28];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[30] * c->v.f[26]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[22] * c->v.f[28]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[24] * c->v.f[20]);
    c->r[0] = 0x0u;
    ST32(c->r[13] + 32u, c->v.s[28]);
    ST32(c->r[13] + 36u, c->v.s[24]);
    ST32(c->r[13] + 40u, c->v.s[30]);
    c->v.s[12] = 0x3f000000u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x40400000u;
    ST32(c->r[13] + 16u, c->v.s[0]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 260u);
    c->v.s[8] = LD32(c->r[5] + 276u);
    c->v.s[2] = LD32(c->r[5] + 264u);
    c->v.s[10] = LD32(c->r[5] + 280u);
    c->v.s[4] = LD32(c->r[5] + 256u);
    c->v.s[6] = LD32(c->r[5] + 272u);
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[12];
    c->v.f[0] = c->v.f[0] * c->v.f[12];
    c->v.f[2] = c->v.f[2] * c->v.f[12];
    ST32(c->r[7] + 16u, c->v.s[4]);
    ST32(c->r[7] + 20u, c->v.s[0]);
    ST32(c->r[7] + 24u, c->v.s[2]);
    ST32(c->r[7] + 28u, c->v.s[18]);
    ST32(c->r[7] + 32u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb717u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xb8d10000u;
    { uint32_t ea = c->r[7] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    goto L_baf910;
L_baf854:;
    c->r[2] = 0x4bacu;
    c->r[1] = c->r[4];
    c->r[7] = 0x49b0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[2] = 0xb464u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_baf910; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_baf8e8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x935u;
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
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_baf8e8:;
    c->r[3] = 0x49b0u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x4bb0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_baf910:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_baf928(Cpu *restrict c) {
    FN_ENTER(0xbaf928u);
L_baf928:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->v.s[16] = LD32(c->r[0] + 260u);
    c->v.s[18] = LD32(c->r[0] + 276u);
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_baf974; }
    c->v.s[20] = LD32(c->r[0] + 604u);
    c->v.s[0] = LD32(c->r[0] + 608u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_baf998; }
    c->v.f[0] = c->v.f[0] - c->v.f[20];
    c->v.s[2] = 0x3f800000u;
    c->v.f[22] = c->v.f[2] / c->v.f[0];
    goto L_baf9a0;
L_baf974:;
    c->v.s[20] = LD32(c->r[0] + 616u);
    c->v.s[0] = LD32(c->r[0] + 620u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bafa14; }
    c->v.f[0] = c->v.f[0] - c->v.f[20];
    c->v.s[2] = 0x3f800000u;
    c->v.f[22] = c->v.f[2] / c->v.f[0];
    goto L_bafa1c;
L_baf998:;
    c->v.s[22] = 0x0u;
    c->v.s[20] = c->v.s[22];
L_baf9a0:;
    { uint32_t ea = c->r[0] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = 0x437f0000u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    c->v.s[0] = c->r[2];
    c->v.s[4] = c->r[1];
    c->r[1] = (c->r[0] >> 24);
    c->v.s[8] = c->r[1];
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 24));
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->r[2] = (c->r[0] >> 16) & 0xffu;
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.s[6] = c->r[2];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[4] = c->v.f[4] / c->v.f[2];
    c->v.f[6] = c->v.f[6] / c->v.f[2];
    ST32(c->r[13], c->v.s[0]);
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->r[6] = c->v.s[0];
    ST32(c->r[13] + 4u, c->v.s[4]);
    ST32(c->r[13] + 8u, c->v.s[6]);
    c->v.f[2] = c->v.f[8] / c->v.f[2];
    ST32(c->r[13] + 12u, c->v.s[2]);
    if (COND_NE) { goto L_bafa9c; }
    c->r[0] = 0xe89350u;
    { uint32_t ea = 0xbafa14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bafa8c;
L_bafa14:;
    c->v.s[22] = 0x0u;
    c->v.s[20] = c->v.s[22];
L_bafa1c:;
    { uint32_t ea = c->r[0] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = 0x437f0000u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    c->v.s[0] = c->r[2];
    c->v.s[4] = c->r[1];
    c->r[1] = (c->r[0] >> 24);
    c->v.s[8] = c->r[1];
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 24));
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->r[2] = (c->r[0] >> 16) & 0xffu;
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.s[6] = c->r[2];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[4] = c->v.f[4] / c->v.f[2];
    c->v.f[6] = c->v.f[6] / c->v.f[2];
    ST32(c->r[13], c->v.s[0]);
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->r[6] = c->v.s[0];
    ST32(c->r[13] + 4u, c->v.s[4]);
    ST32(c->r[13] + 8u, c->v.s[6]);
    c->v.f[2] = c->v.f[8] / c->v.f[2];
    ST32(c->r[13] + 12u, c->v.s[2]);
    if (COND_NE) { goto L_bafa9c; }
    c->r[0] = 0xe892d4u;
    { uint32_t ea = 0xbafa90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bafa8c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[14] = 0xbafa9cu; f_dd3c2c(c);
L_bafa9c:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bafb10; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x215u;
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
    c->r[1] = 0x12acu;
    c->r[2] = 0x12b0u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bafb10:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x854u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbafb24u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_bafb78; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xbafb74u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bafb78:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x12acu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_bafbe4; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->v.f[2] = c->v.f[16] + c->v.f[18];
    c->v.s[0] = 0x3f000000u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 24u, c->v.s[20]);
    ST32(c->r[0] + 28u, c->v.s[22]);
    ST32(c->r[0] + 16u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_bafbe4:;
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bafc00(Cpu *restrict c) {
    FN_ENTER(0xbafc00u);
L_bafc00:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x68u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = c->r[0];
    c->v.s[24] = 0xc0800000u;
    c->v.s[0] = LD32(c->r[4] + 196u);
    c->v.s[2] = LD32(c->r[4] + 200u);
    c->v.s[4] = LD32(c->r[4] + 204u);
    c->v.s[6] = LD32(c->r[4] + 208u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0x1eu; uint32_t v = LD16(ea); c->r[6] = v; }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[13] + 20u, c->v.s[0]);
    c->v.f[0] = (float)(int32_t)c->v.s[2];
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->v.f[23] = (float)(int32_t)c->v.s[4];
    c->v.f[27] = (float)(int32_t)c->v.s[6];
    c->v.s[0] = LD32(c->r[7] + 588u);
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[24] / c->v.f[0];
    c->r[14] = 0xbafc6cu; f_15f0e98(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[7] + 588u);
    c->v.s[17] = 0xbf800000u;
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[17] / c->v.f[0];
    c->r[14] = 0xbafc88u; f_15f0e98(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[7] + 588u);
    c->v.s[2] = 0x80000000u;
    c->v.f[4] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->r[14] = 0xbafca4u; f_15f0e98(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[7] + 588u);
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[17] / c->v.f[0];
    c->r[14] = 0xbafcbcu; f_15f0e98(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[7] + 588u);
    c->v.s[2] = 0x0u;
    c->v.f[4] = c->v.f[0] + c->v.f[0];
    c->v.f[2] = c->v.f[16] + c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + c->v.f[18];
    c->v.f[0] = c->v.f[24] / c->v.f[0];
    c->v.f[2] = c->v.f[2] + c->v.f[20];
    c->v.f[24] = c->v.f[2] + c->v.f[22];
    c->r[14] = 0xbafce8u; f_15f0e98(c);
    c->v.f[2] = c->v.f[24] + c->v.f[0];
    c->v.s[4] = 0x3f800000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->v.f[2] = c->v.f[4] / c->v.f[2];
    c->v.f[29] = c->v.f[2] * c->v.f[16];
    c->v.f[31] = c->v.f[2] * c->v.f[18];
    c->v.f[26] = c->v.f[2] * c->v.f[20];
    c->v.f[28] = c->v.f[2] * c->v.f[22];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 84u, c->v.s[29]);
    ST32(c->r[13] + 88u, c->v.s[31]);
    ST32(c->r[13] + 92u, c->v.s[26]);
    ST32(c->r[13] + 96u, c->v.s[28]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->r[14] = 0xbafd28u; f_aaf6d8(c);
    c->r[0] = c->r[6] | (c->r[5] << 16);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16) & 0x3fffu;
    c->v.s[0] = c->r[0];
    c->r[0] = 0xd005u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x43da0000u;
    c->v.f[30] = (float)c->v.s[0];
    c->v.s[0] = c->r[1];
    c->v.f[22] = (float)c->v.s[0];
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_bafd68; }
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[9] + 0x154u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bafde0;
L_bafd68:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bafdc4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_bafdc4:;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[0]); }
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[9] + 0x154u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_bafde0:;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bafe10; }
    c->r[2] = 0xfffeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[1] = c->r[1] | 0x1u;
    c->r[1] = c->r[1] | 0x800000u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_bafe10:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    c->r[5] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[7] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xbafe38u; f_a814c0(c);
    c->r[0] = c->r[4];
    c->r[7] = 0xdaedu;
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; } }
    if (COND_NE) { goto L_bafe6c; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_bafe90; }
L_bafe6c:;
    c->r[3] = c->r[3] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[5]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bafe90:;
    c->r[0] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_bafec4; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    goto L_bafec8;
L_bafec4:;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_bafec8:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bafeec; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_bafeec:;
    c->r[2] = 0xe89614u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xbaff00u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { goto L_baff14; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_baff28; }
L_baff14:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_baff28:;
    c->v.s[0] = 0xc0000000u;
    c->v.s[2] = 0x40000000u;
    c->v.s[19] = c->v.s[17];
    c->v.f[25] = c->v.f[17] / c->v.f[22];
    c->v.f[21] = c->v.f[0] / c->v.f[22];
    c->v.s[0] = 0x0u;
    c->v.f[24] = c->v.f[0] / c->v.f[22];
    c->v.s[0] = 0x3f800000u;
    c->v.f[17] = c->v.f[0] / c->v.f[22];
    c->v.f[0] = c->v.f[2] / c->v.f[22];
    ST32(c->r[13] + 64u, c->v.s[21]);
    ST32(c->r[13] + 68u, c->v.s[25]);
    ST32(c->r[13] + 72u, c->v.s[24]);
    ST32(c->r[13] + 76u, c->v.s[17]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_baffd8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x1edu;
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
    c->r[1] = 0x116cu;
    c->r[2] = 0x1170u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_baffd8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7b4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0xbaffecu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[7] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_bb0040; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xbb003cu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
L_bb0040:;
    c->v.s[0] = LD32(c->r[13] + 16u);
    c->v.f[16] = c->v.f[27] / c->v.f[30];
    c->v.f[18] = c->v.f[23] / c->v.f[22];
    c->r[0] = c->r[7] + c->r[6];
    c->r[1] = c->r[4];
    (void)f_subs(c, c->r[7], 0x0u);
    c->v.f[20] = c->v.f[0] / c->v.f[30];
    c->v.s[0] = LD32(c->r[13] + 20u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x116cu;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[7]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->v.f[22] = c->v.f[0] / c->v.f[22];
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_bb0104; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xbb00a0u; f_15efe30(c);
    ST32(c->r[7] + 16u, c->v.s[21]);
    ST32(c->r[7] + 32u, c->v.s[25]);
    ST32(c->r[7] + 48u, c->v.s[24]);
    ST32(c->r[7] + 64u, c->v.s[17]);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x50u; ST32(ea, c->r[0]); }
    ST32(c->r[7] + 192u, c->v.s[29]);
    ST32(c->r[7] + 208u, c->v.s[31]);
    ST32(c->r[7] + 224u, c->v.s[26]);
    ST32(c->r[7] + 240u, c->v.s[28]);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x100u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    ST32(c->r[13] + 48u, c->v.s[22]);
    ST32(c->r[13] + 52u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    ST32(c->r[7], c->v.s[22]);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    ST32(c->r[7] + 8u, c->v.s[18]);
    ST32(c->r[7] + 12u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_bb0104:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1178u;
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[0] + 0xbd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xbd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0x1174u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2724u;
    c->r[2] = 0x3dc0u;
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_bb01cc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb01a4; }
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
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb01a4:;
    c->r[1] = 0x3dc0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xf7b8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf83f0000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bb01cc:;
    c->r[0] = 0x1be4u;
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_bb02cc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb0240; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x33cu;
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
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bb0240:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_bb0280; }
    c->r[0] = 0xe8ed60u;
    c->r[1] = 0xe8ed60u;
    { uint32_t ea = 0xbb0258u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xbb025cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[7]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_bb0288;
L_bb0280:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
L_bb0288:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_bb02a8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bb02c0;
L_bb02a8:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_bb02c0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_bb02cc:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb02d4u; f_a826fc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[2] = 0x14u;
    c->r[14] = 0xbb02e4u; f_a83f74(c);
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbf800000u;
    if (COND_EQ) { goto L_bb0354; }
    c->r[2] = 0xe89200u;
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 8u, c->v.s[22]);
    ST32(c->r[0] + 12u, c->v.s[20]);
    { uint32_t ea = 0xbb0314u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    ST32(c->r[0] + 28u, c->v.s[22]);
    ST32(c->r[0] + 32u, c->v.s[16]);
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 48u, c->v.s[18]);
    ST32(c->r[0] + 52u, c->v.s[20]);
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    ST32(c->r[0] + 68u, c->v.s[18]);
    ST32(c->r[0] + 72u, c->v.s[16]);
L_bb0354:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb035cu; f_a82760(c);
    c->v.s[0] = 0xc0000000u;
    c->v.f[26] = c->v.f[19] / c->v.f[30];
    c->v.f[24] = c->v.f[0] / c->v.f[30];
    c->v.s[0] = 0x0u;
    c->v.f[28] = c->v.f[0] / c->v.f[30];
    c->v.s[0] = 0x3f800000u;
    c->v.f[17] = c->v.f[0] / c->v.f[30];
    c->v.s[0] = 0x40000000u;
    c->v.f[0] = c->v.f[0] / c->v.f[30];
    ST32(c->r[13] + 64u, c->v.s[24]);
    ST32(c->r[13] + 68u, c->v.s[26]);
    ST32(c->r[13] + 72u, c->v.s[28]);
    ST32(c->r[13] + 76u, c->v.s[17]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bb0408; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x1edu;
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
    c->r[1] = 0x116cu;
    c->r[2] = 0x1170u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bb0408:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7b4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0xbb041cu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[7] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_bb0470; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xbb046cu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
L_bb0470:;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_bb0524; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xbb04b0u; f_15efe30(c);
    ST32(c->r[7] + 16u, c->v.s[24]);
    ST32(c->r[7] + 32u, c->v.s[26]);
    ST32(c->r[7] + 48u, c->v.s[28]);
    ST32(c->r[7] + 64u, c->v.s[17]);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x100u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    ST32(c->r[13] + 32u, c->v.s[22]);
    ST32(c->r[13] + 36u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[7], c->v.s[22]);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    ST32(c->r[7] + 8u, c->v.s[18]);
    ST32(c->r[7] + 12u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_bb0524:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb0548u; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3dc8u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bb05f0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb05c8; }
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
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb05c8:;
    c->r[1] = 0x3dc8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xc7b9u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbe90000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bb05f0:;
    { uint32_t ea = c->r[7] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_bb06f0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb0660; }
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
L_bb0660:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb06a0; }
    c->r[1] = 0xe8e940u;
    c->r[2] = 0xe8e940u;
    { uint32_t ea = 0xbb0678u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbb067cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_bb06a8;
L_bb06a0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
L_bb06a8:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_bb06cc; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bb06e4;
L_bb06cc:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_bb06e4:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_bb06f0:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb06f8u; f_a826fc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[2] = 0x14u;
    c->r[14] = 0xbb0708u; f_a83f74(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb077c; }
    c->r[2] = 0xe88de8u;
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbf800000u;
    c->r[3] = c->r[1];
    c->r[1] = 0x3f800000u;
    { uint32_t ea = 0xbb072cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 8u, c->v.s[22]);
    ST32(c->r[0] + 12u, c->v.s[20]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    ST32(c->r[0] + 28u, c->v.s[22]);
    ST32(c->r[0] + 32u, c->v.s[16]);
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 48u, c->v.s[18]);
    ST32(c->r[0] + 52u, c->v.s[20]);
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    ST32(c->r[0] + 68u, c->v.s[18]);
    ST32(c->r[0] + 72u, c->v.s[16]);
L_bb077c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb0784u; f_a82760(c);
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb07b0(Cpu *restrict c) {
    FN_ENTER(0xbb07b0u);
L_bb07b0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0x0u;
    c->r[12] = 0x104fu;
    c->r[0] = c->r[4];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1fe00000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x40520000u;
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[2] & c->r[1];
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb07fc; }
    c->r[1] = 0xfffeu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[2] & c->r[1];
    c->r[1] = c->r[1] | 0x1u;
    c->r[2] = c->r[1] | 0x800000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
L_bb07fc:;
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_EQ) { goto L_bb0874; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb0868; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
L_bb0868:;
    c->r[1] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
L_bb0874:;
    { uint32_t ea = c->r[4] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x350u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_bb089c; }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_bb089c; }
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_EQ) { goto L_bb08e0; }
L_bb089c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb08c4; }
    c->r[1] = 0xe8e704u;
    c->r[2] = 0xe8e704u;
    { uint32_t ea = 0xbb08b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbb08b8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bb08c4:;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[4] + 0x134u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
L_bb08e0:;
    { uint32_t ea = c->r[5] + 0x354u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_bb091c; }
    c->r[1] = 0xe8e6b8u;
    c->r[2] = 0xe8e6b8u;
    { uint32_t ea = 0xbb0900u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbb0904u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[1]); }
L_bb091c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb0924u; f_a826fc(c);
    { uint32_t ea = c->r[5] + 0x358u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x6u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[2] + (c->r[0] << 1);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = 0x0u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb094cu; f_a93ca8(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a82760(c);
}
void f_bb0968(Cpu *restrict c) {
    FN_ENTER(0xbb0968u);
L_bb0968:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->v.s[0] = LD32(c->r[4] + 208u);
    c->v.s[2] = LD32(c->r[6]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 208u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 212u);
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 212u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 216u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 216u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x33cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_bb0a08; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_bb09bc:;
    { uint32_t ea = c->r[4] + 0x344u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[3] + (c->r[1] << 6);
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb09f8; }
    c->r[2] = c->r[3] + c->r[0];
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[2] + 16u);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[2] + 16u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 20u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[2] + 20u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x33cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_bb09f8:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[0] = c->r[0] + 0x40u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_bb09bc; }
L_bb0a08:;
    c->v.s[22] = 0x3c8efa36u;
    c->v.s[0] = LD32(c->r[4] + 288u);
    c->v.s[26] = LD32(c->r[4] + 352u);
    c->v.s[28] = LD32(c->r[4] + 356u);
    c->v.s[30] = LD32(c->r[4] + 360u);
    c->v.s[20] = LD32(c->r[4] + 364u);
    c->v.f[16] = c->v.f[0] * c->v.f[22];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbb0a2cu; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbb0a38u; f_15efde8(c);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[24] = 0x3e22f983u;
    c->v.s[6] = LD32(c->r[4] + 336u);
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[4] = c->v.f[26] * c->v.f[24];
    c->v.f[0] = c->v.f[0] / c->v.f[4];
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    ST32(c->r[4] + 336u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 292u);
    c->v.f[16] = c->v.f[0] * c->v.f[22];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbb0a70u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbb0a7cu; f_15efde8(c);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[4] + 340u);
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[4] = c->v.f[28] * c->v.f[24];
    c->v.f[0] = c->v.f[0] / c->v.f[4];
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    ST32(c->r[4] + 340u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 296u);
    c->v.f[16] = c->v.f[0] * c->v.f[22];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbb0ab0u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbb0abcu; f_15efde8(c);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[4] + 344u);
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[4] = c->v.f[30] * c->v.f[24];
    c->v.f[0] = c->v.f[0] / c->v.f[4];
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    ST32(c->r[4] + 344u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 300u);
    c->v.f[16] = c->v.f[0] * c->v.f[22];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbb0af0u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbb0afcu; f_15efde8(c);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[4] + 348u);
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[4] = c->v.f[20] * c->v.f[24];
    c->v.f[0] = c->v.f[0] / c->v.f[4];
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    ST32(c->r[4] + 348u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb0b30(Cpu *restrict c) {
    FN_ENTER(0xbb0b30u);
L_bb0b30:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bb0b34(Cpu *restrict c) {
    FN_ENTER(0xbb0b34u);
L_bb0b34:;
    c->r[0] = 0xe91e88u;
    { uint32_t ea = 0xbb0b40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bb0b44(Cpu *restrict c) {
    FN_ENTER(0xbb0b44u);
L_bb0b44:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1771764u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0xbb0b70u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[1] = 0xe88744u;
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
    c->r[0] = 0xe91e00u;
    { uint32_t ea = 0xbb0bbcu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xbc50fau;
    c->r[3] = 0x390u;
    { uint32_t ea = 0xbb0bc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbb0bccu + c->r[1];
    c->r[14] = 0xbb0bccu; f_9aedcc(c);
    c->r[1] = 0xe91e7cu;
    { uint32_t ea = 0xbb0bd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb0bf8(Cpu *restrict c) {
    FN_ENTER(0xbb0bf8u);
L_bb0bf8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xe91e50u;
    { uint32_t ea = 0xbb0c08u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb0c0cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8a0u;
    c->pc = c->r[4]; c->r[14] = 0xbb0c24u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xbb0c2cu; f_a87958(c);
    c->r[0] = 0xe91e1cu;
    c->r[1] = 0x100u;
    c->r[2] = 0x100u;
    { uint32_t ea = 0xbb0c40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x30u;
    c->r[14] = 0xbb0c4cu; f_b92e20(c);
    c->r[0] = c->r[4] + 0x4c0u;
    c->r[14] = 0xbb0c54u; f_aa4984(c);
    c->r[0] = c->r[4] + 0x5b0u;
    c->r[14] = 0xbb0c5cu; f_aa4984(c);
    c->r[0] = c->r[4] + 0x6a0u;
    c->r[14] = 0xbb0c64u; f_aa4984(c);
    c->r[0] = c->r[4] + 0x790u;
    c->r[14] = 0xbb0c6cu; f_aa4984(c);
    c->r[1] = 0x0u;
    c->r[0] = 0x8u;
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x880u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x884u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x888u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x88cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x890u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x894u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x898u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x89cu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb0cb0(Cpu *restrict c) {
    FN_ENTER(0xbb0cb0u);
L_bb0cb0:;
    return;
}
void f_bb0cb4(Cpu *restrict c) {
    FN_ENTER(0xbb0cb4u);
L_bb0cb4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe91d94u;
    { uint32_t ea = 0xbb0cc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x880u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb0cf8; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_bb0cf8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbb0cf8u; rt_dispatch(c);
L_bb0cf8:;
    { uint32_t ea = c->r[4] + 0x884u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb0d24; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_bb0d24; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbb0d24u; rt_dispatch(c);
L_bb0d24:;
    c->r[0] = c->r[4] + 0x790u;
    c->r[14] = 0xbb0d2cu; f_aa4acc(c);
    c->r[0] = c->r[4] + 0x6a0u;
    c->r[14] = 0xbb0d34u; f_aa4acc(c);
    c->r[0] = c->r[4] + 0x5b0u;
    c->r[14] = 0xbb0d3cu; f_aa4acc(c);
    c->r[0] = c->r[4] + 0x4c0u;
    c->r[14] = 0xbb0d44u; f_aa4acc(c);
    c->r[0] = c->r[4] + 0x30u;
    c->r[14] = 0xbb0d4cu; f_b9313c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a879b4(c);
}
void f_bb0d5c(Cpu *restrict c) {
    FN_ENTER(0xbb0d5cu);
L_bb0d5c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbb0d68u; f_bb0cb4(c);
    c->r[0] = 0xe91ce4u;
    { uint32_t ea = 0xbb0d74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb0d74u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bb0d8c(Cpu *restrict c) {
    FN_ENTER(0xbb0d8cu);
L_bb0d8c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x880u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bb0e00; }
    c->r[0] = 0x3d0u;
    c->r[1] = 0x10u;
    c->r[14] = 0xbb0db0u; f_b23288(c);
    c->r[14] = 0xbb0db4u; f_b232c8(c);
    c->r[1] = 0xe87d84u;
    { uint32_t ea = c->r[4] + 0x880u; ST32(ea, c->r[0]); }
    c->r[3] = 0x0u;
    { uint32_t ea = 0xbb0dc8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[3]); }
    c->r[0] = 0xe87f30u;
    { uint32_t ea = c->r[4] + 0x880u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x898u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = 0xbb0dfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb0e00u; f_e067ec(c);
L_bb0e00:;
    { uint32_t ea = c->r[4] + 0x884u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bb0e7c; }
    c->r[0] = 0x3e0u;
    c->r[1] = 0x10u;
    c->r[14] = 0xbb0e18u; f_b28dd0(c);
    c->r[14] = 0xbb0e1cu; f_b28e10(c);
    c->r[1] = 0xe87d1cu;
    { uint32_t ea = c->r[4] + 0x884u; ST32(ea, c->r[0]); }
    c->r[12] = 0x0u;
    { uint32_t ea = 0xbb0e30u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x884u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3c0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3c4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x3c8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3ccu; ST32(ea, c->r[12]); }
    c->r[0] = 0xe87eb4u;
    { uint32_t ea = c->r[4] + 0x884u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x898u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    { uint32_t ea = 0xbb0e78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb0e7cu; f_e067ec(c);
L_bb0e7c:;
    c->r[0] = c->r[4] + 0x30u;
    c->r[14] = 0xbb0e84u; f_b93368(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x4c0u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbb0e94u; rt_dispatch(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x5b0u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbb0ea4u; rt_dispatch(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x6a0u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbb0eb4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x790u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb0ec4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10cu; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb0ee4(Cpu *restrict c) {
    FN_ENTER(0xbb0ee4u);
L_bb0ee4:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_bb0ee8(Cpu *restrict c) {
    FN_ENTER(0xbb0ee8u);
L_bb0ee8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xbb0efcu; f_a87a24(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbb0f24u; f_9bb638(c);
    c->r[1] = 0xbc551eu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xbb0f3cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x888u;
    c->r[1] = c->r[10] + c->r[1];
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
    c->r[14] = 0xbb0fa0u; f_9bb638(c);
    c->r[1] = 0xbc54bau;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb0fb4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x88cu;
    c->r[1] = c->r[10] + c->r[1];
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
    c->r[14] = 0xbb101cu; f_9bb638(c);
    c->r[1] = 0xbc5454u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb1030u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x890u;
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
    c->r[14] = 0xbb1090u; f_9bb638(c);
    c->r[1] = 0xbc53f4u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb10a4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x894u;
    c->r[1] = c->r[10] + c->r[1];
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
    c->r[14] = 0xbb10ecu; f_9bb638(c);
    c->r[1] = 0xbc53b4u;
    c->r[8] = 0x0u;
    c->r[1] = 0xbb10fcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0xe9194cu;
    { uint32_t ea = 0xbb1114u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe91938u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = 0xbb112cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
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
    c->r[14] = 0xbb1180u; f_9bb638(c);
    c->r[1] = 0xbc532bu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb1194u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x30u;
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
    c->r[14] = 0xbb11f8u; f_9bb638(c);
    c->r[1] = 0xbc52c4u;
    c->r[1] = 0xbb1204u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x4c0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
void f_bb1278(Cpu *restrict c) {
    FN_ENTER(0xbb1278u);
L_bb1278:;
    { uint32_t ea = c->r[0] + 0x898u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bb1280(Cpu *restrict c) {
    FN_ENTER(0xbb1280u);
L_bb1280:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x898u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x89cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bb13cc; }
    { uint32_t ea = c->r[4] + 0x880u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb12d0; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_bb12c8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbb12c8u; rt_dispatch(c);
L_bb12c8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x880u; ST32(ea, c->r[0]); }
L_bb12d0:;
    c->r[0] = 0x3d0u;
    c->r[1] = 0x10u;
    c->r[14] = 0xbb12dcu; f_b23288(c);
    c->r[14] = 0xbb12e0u; f_b232c8(c);
    c->r[1] = 0xe87858u;
    { uint32_t ea = c->r[4] + 0x880u; ST32(ea, c->r[0]); }
    c->r[5] = 0x0u;
    { uint32_t ea = 0xbb12f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[5]); }
    c->r[0] = 0xe87a04u;
    { uint32_t ea = c->r[4] + 0x880u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x898u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xbb1328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb132cu; f_e067ec(c);
    { uint32_t ea = c->r[4] + 0x884u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb1360; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_bb1358; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbb1358u; rt_dispatch(c);
L_bb1358:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x884u; ST32(ea, c->r[0]); }
L_bb1360:;
    c->r[0] = 0x3e0u;
    c->r[1] = 0x10u;
    c->r[14] = 0xbb136cu; f_b28dd0(c);
    c->r[14] = 0xbb1370u; f_b28e10(c);
    c->r[1] = 0xe877ccu;
    { uint32_t ea = c->r[4] + 0x884u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0xbb1380u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x884u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3c0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3c4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x3c8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3ccu; ST32(ea, c->r[5]); }
    c->r[0] = 0xe87964u;
    { uint32_t ea = c->r[4] + 0x884u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x898u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xbb13c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb13ccu; f_e067ec(c);
L_bb13cc:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb13e4(Cpu *restrict c) {
    FN_ENTER(0xbb13e4u);
L_bb13e4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x80u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x880u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb1428; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_bb1484; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x880u; ST32(ea, c->r[0]); }
L_bb1428:;
    c->r[0] = 0x3d0u;
    c->r[1] = 0x10u;
    c->r[14] = 0xbb1434u; f_b23288(c);
    c->r[14] = 0xbb1438u; f_b232c8(c);
    c->r[1] = 0xe87700u;
    { uint32_t ea = c->r[4] + 0x880u; ST32(ea, c->r[0]); }
    c->r[3] = 0x0u;
    { uint32_t ea = 0xbb144cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[3]); }
    c->r[0] = 0xe878acu;
    { uint32_t ea = c->r[4] + 0x880u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x898u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = 0xbb1480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb1484u; f_e067ec(c);
L_bb1484:;
    { uint32_t ea = c->r[4] + 0x884u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb14ac; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_bb151c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x884u; ST32(ea, c->r[0]); }
L_bb14ac:;
    c->r[0] = 0x3e0u;
    c->r[1] = 0x10u;
    c->r[14] = 0xbb14b8u; f_b28dd0(c);
    c->r[14] = 0xbb14bcu; f_b28e10(c);
    c->r[1] = 0xe8767cu;
    { uint32_t ea = c->r[4] + 0x884u; ST32(ea, c->r[0]); }
    c->r[7] = 0x0u;
    { uint32_t ea = 0xbb14d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x884u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3c0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3c4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x3c8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3ccu; ST32(ea, c->r[7]); }
    c->r[0] = 0xe87814u;
    { uint32_t ea = c->r[4] + 0x884u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x898u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xbb1518u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb151cu; f_e067ec(c);
L_bb151c:;
    { uint32_t ea = c->r[4] + 0x310u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[4] + 0x30u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x314u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xbb1548u; f_b959c4(c);
    c->v.s[16] = 0x437f0000u;
    c->r[0] = 0x894u;
    c->r[10] = c->r[4] + 0x4c0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    c->r[7] = c->r[13] + 0x50u;
    c->r[6] = c->r[13] + 0x60u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[4] = c->r[4] + 0x890u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_bb1570:;
    c->r[8] = c->r[10] + c->r[9];
    c->r[1] = c->r[13] + 0x70u;
    c->r[0] = c->r[8];
    c->r[14] = 0xbb1580u; f_aa5c90(c);
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    c->r[14] = 0xbb158cu; f_aa5c6c(c);
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->r[0] = c->r[13] + 0x40u;
    c->r[1] = c->r[5];
    c->r[14] = 0xbb159cu; f_b9a134(c);
    c->v.s[0] = LD32(c->r[4]);
    c->v.s[2] = LD32(c->r[13] + 64u);
    c->v.s[4] = LD32(c->r[13] + 68u);
    c->v.s[6] = LD32(c->r[13] + 72u);
    c->r[0] = 0x0u;
    c->r[1] = c->r[6];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    ST32(c->r[13] + 96u, c->v.s[2]);
    ST32(c->r[13] + 100u, c->v.s[4]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xbb15d8u; f_aa5cb4(c);
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    c->r[14] = 0xbb15e4u; f_aa5c6c(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->r[1] = c->r[5];
    c->v.s[1] = LD32(c->r[0]);
    c->r[0] = c->r[6];
    c->r[14] = 0xbb15fcu; f_b9aa08(c);
    c->v.s[0] = LD32(c->r[13] + 96u);
    c->v.s[2] = LD32(c->r[13] + 100u);
    c->v.s[4] = LD32(c->r[13] + 104u);
    c->v.f[2] = c->v.f[2] * c->v.f[16];
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[4] = c->v.f[4] * c->v.f[16];
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[2]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[4]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->v.s[0];
    c->r[0] = c->r[1] | (c->r[0] << 8);
    c->r[1] = c->v.s[4];
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = c->r[13] + 0x3cu;
    c->r[0] = c->r[0] | 0xff000000u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xbb1648u; f_aa5cd8(c);
    { uint32_t ea = c->r[10] + c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0xbb1658u; rt_dispatch(c);
    c->r[9] = c->r[9] + 0xf0u;
    (void)f_subs(c, c->r[9], 0x3c0u);
    if (COND_NE) { goto L_bb1570; }
    c->v.s[16] = 0x42c80000u;
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[5];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbb1678u; f_b9a134(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = c->r[7] + 0x880u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3c8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3ccu; ST32(ea, c->r[4]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[7] + 0x880u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0xbb16b4u; f_b9a134(c);
    c->r[0] = 0x888u;
    c->v.s[2] = LD32(c->r[13] + 16u);
    c->v.s[4] = LD32(c->r[13] + 20u);
    c->v.s[6] = LD32(c->r[13] + 24u);
    c->r[1] = c->r[5];
    c->r[0] = c->r[7] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x88cu;
    { uint32_t ea = c->r[6] + 0x5cu; ST32(ea, c->r[4]); }
    c->r[0] = c->r[7] + c->r[0];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    ST32(c->r[6] + 80u, c->v.s[2]);
    ST32(c->r[6] + 84u, c->v.s[4]);
    ST32(c->r[6] + 88u, c->v.s[0]);
    c->v.s[0] = c->v.s[16];
    c->v.s[1] = LD32(c->r[0]);
    { uint32_t ea = c->r[7] + 0x884u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[13] + 0x60u;
    c->r[14] = 0xbb1708u; f_b9aa08(c);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x5cu; ST32(ea, c->r[4]); }
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb174c(Cpu *restrict c) {
    FN_ENTER(0xbb174cu);
L_bb174c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = c->r[5] + 0x30u;
    c->r[14] = 0xbb1760u; f_b96978(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[0] + 0x4c0u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbb1774u; rt_dispatch(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[0] + 0x5b0u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbb1788u; rt_dispatch(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[0] + 0x6a0u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbb179cu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x790u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bb17b4(Cpu *restrict c) {
    FN_ENTER(0xbb17b4u);
L_bb17b4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bb17b8(Cpu *restrict c) {
    FN_ENTER(0xbb17b8u);
L_bb17b8:;
    c->r[0] = 0xe91294u;
    { uint32_t ea = 0xbb17c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bb17c8(Cpu *restrict c) {
    FN_ENTER(0xbb17c8u);
L_bb17c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1770b28u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0xbb17f4u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[1] = 0xe87ac0u;
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
    c->r[0] = 0xe9120cu;
    { uint32_t ea = 0xbb1840u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xbc4c01u;
    c->r[3] = 0x8a0u;
    { uint32_t ea = 0xbb184cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbb1850u + c->r[1];
    c->r[14] = 0xbb1850u; f_9aedcc(c);
    c->r[1] = 0xe9120cu;
    { uint32_t ea = 0xbb185cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb187c(Cpu *restrict c) {
    FN_ENTER(0xbb187cu);
L_bb187c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xe911e0u;
    { uint32_t ea = 0xbb188cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb1890u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x2c0u;
    c->pc = c->r[4]; c->r[14] = 0xbb18a8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_bb19a4(c);
}
void f_bb18b4(Cpu *restrict c) {
    FN_ENTER(0xbb18b4u);
L_bb18b4:;
    return;
}
void f_bb18b8(Cpu *restrict c) {
    FN_ENTER(0xbb18b8u);
L_bb18b8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0xe911a8u;
    { uint32_t ea = 0xbb18c8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb18ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->r[5] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x80u;
    c->pc = c->r[4]; c->r[14] = 0xbb18e8u; rt_dispatch(c);
    c->r[1] = 0xe9117cu;
    c->r[2] = 0x3f800000u;
    { uint32_t ea = 0xbb18f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3f000000u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x999au;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40790000u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0xd70au;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3c230000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    c->r[2] = 0xe87910u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xbb1948u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    c->r[2] = 0xe871e0u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xbb196cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42480000u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb19a4(Cpu *restrict c) {
    FN_ENTER(0xbb19a4u);
L_bb19a4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[14] = 0xbb19b0u; f_a87958(c);
    c->r[2] = 0xe8717cu;
    c->r[1] = 0xe910a0u;
    c->r[11] = 0x0u;
    c->r[10] = 0x3f800000u;
    c->r[4] = 0x3f000000u;
    c->r[11] = (c->r[11] & 0xFFFFu) | 0x42480000u;
    { uint32_t ea = 0xbb19d0u + c->r[2]; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = 0xe91098u;
    { uint32_t ea = 0xbb19d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbb19dcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14]; c->r[8] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); }
    c->r[12] = c->r[2] + 0x8u;
    c->r[2] = 0xe87854u;
    { uint32_t ea = 0xbb1a04u + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[5]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0xc8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3f000000u;
    { uint32_t ea = c->r[0] + 0xd4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x999au;
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40790000u;
    { uint32_t ea = c->r[0] + 0xdcu; ST32(ea, c->r[2]); }
    c->r[2] = 0xd70au;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3c230000u;
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[2]); }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0] + 0xe0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xf4u; ST32(ea, c->r[7]); }
    c->r[2] = c->r[0] + 0xfcu;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[14] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x108u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x140u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x148u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x150u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x154u; ST32(ea, c->r[4]); }
    c->r[4] = 0x999au;
    { uint32_t ea = c->r[0] + 0x158u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x194u; ST32(ea, c->r[1]); }
    c->r[10] = 0x3f800000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x40790000u;
    { uint32_t ea = c->r[0] + 0x15cu; ST32(ea, c->r[4]); }
    c->r[4] = 0xd70au;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x3c230000u;
    { uint32_t ea = c->r[0] + 0x190u; ST32(ea, c->r[4]); }
    c->r[4] = 0x10u;
    { uint32_t ea = c->r[0] + 0x160u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[0] + 0x17cu;
    { uint32_t ea = c->r[0] + 0x198u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x170u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x174u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x178u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); }
    c->r[4] = 0x3f000000u;
    { uint32_t ea = c->r[0] + 0x188u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x144u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1c0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x1c8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1ccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1d0u; ST32(ea, c->r[10]); }
    c->r[10] = 0x999au;
    { uint32_t ea = c->r[0] + 0x1d4u; ST32(ea, c->r[4]); }
    c->r[4] = 0xd70au;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x40790000u;
    { uint32_t ea = c->r[0] + 0x1d8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x214u; ST32(ea, c->r[1]); }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x3c230000u;
    { uint32_t ea = c->r[0] + 0x1dcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x210u; ST32(ea, c->r[4]); }
    c->r[4] = 0x10u;
    { uint32_t ea = c->r[0] + 0x1e0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x218u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1f0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x1f4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1f8u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[0] + 0x1fcu;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x208u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x20cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x1c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x240u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x248u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24cu; ST32(ea, c->r[1]); }
    c->r[3] = 0x28u;
    c->r[12] = 0x10u;
    { uint32_t ea = c->r[0] + 0x250u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3f000000u;
    { uint32_t ea = c->r[0] + 0x254u; ST32(ea, c->r[2]); }
    c->r[2] = 0xd70au;
    { uint32_t ea = c->r[0] + 0x258u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x294u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x25cu; ST32(ea, c->r[10]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3c230000u;
    { uint32_t ea = c->r[0] + 0x290u; ST32(ea, c->r[2]); }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0] + 0x260u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x298u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x270u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x274u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x278u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x27cu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[14] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41200000u;
    { uint32_t ea = c->r[0] + 0x288u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x244u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[2]); }
    c->r[2] = 0xe148u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3f7a0000u;
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[2]); }
    c->r[2] = 0x40000000u;
    { uint32_t ea = c->r[0] + 0x5cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[14] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[6]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[7]); }
    c->r[7] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x40400000u;
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[7]); }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0xc8u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[6]); }
    c->r[6] = 0xc89bu;
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[1]); }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x3ecb0000u;
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[6]); }
    c->r[6] = 0xc89bu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x3e4b0000u;
    { uint32_t ea = c->r[0] + 0xf4u; ST32(ea, c->r[6]); }
    c->r[6] = 0x41adu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x3f650000u;
    { uint32_t ea = c->r[0] + 0xf8u; ST32(ea, c->r[6]); }
    c->r[6] = 0x0u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x43480000u;
    { uint32_t ea = c->r[0] + 0xfcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xe0u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x148u; ST8(ea, c->r[7]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x41700000u;
    { uint32_t ea = c->r[0] + 0x150u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x158u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2f9au;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbf2e0000u;
    { uint32_t ea = c->r[0] + 0x170u; ST32(ea, c->r[1]); }
    c->r[1] = 0x5948u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3e8b0000u;
    { uint32_t ea = c->r[0] + 0x174u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2f9au;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3f2e0000u;
    { uint32_t ea = c->r[0] + 0x178u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x43160000u;
    { uint32_t ea = c->r[0] + 0x17cu; ST32(ea, c->r[1]); }
    c->r[1] = 0xcccdu;
    { uint32_t ea = c->r[0] + 0x160u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x1c8u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1ccu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1d0u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3dcc0000u;
    { uint32_t ea = c->r[0] + 0x1d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x43340000u;
    { uint32_t ea = c->r[0] + 0x200u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc1200000u;
    { uint32_t ea = c->r[0] + 0x204u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41f00000u;
    { uint32_t ea = c->r[0] + 0x20cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x1e0u; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb1d0c(Cpu *restrict c) {
    FN_ENTER(0xbb1d0cu);
L_bb1d0c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe90d58u;
    { uint32_t ea = 0xbb1d20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb1d54; }
    c->r[0] = 0xe90d30u;
    { uint32_t ea = 0xbb1d3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb1d3cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb1d4cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_bb1d54:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb1d84; }
    c->r[0] = 0xe90d00u;
    { uint32_t ea = 0xbb1d6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb1d6cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb1d7cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
L_bb1d84:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb1db4; }
    c->r[0] = 0xe90cd0u;
    { uint32_t ea = 0xbb1d9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb1d9cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb1dacu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
L_bb1db4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a879b4(c);
}
void f_bb1dd0(Cpu *restrict c) {
    FN_ENTER(0xbb1dd0u);
L_bb1dd0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe90c94u;
    { uint32_t ea = 0xbb1de4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb1e18; }
    c->r[0] = 0xe90c6cu;
    { uint32_t ea = 0xbb1e00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb1e00u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb1e10u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_bb1e18:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb1e48; }
    c->r[0] = 0xe90c3cu;
    { uint32_t ea = 0xbb1e30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb1e30u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb1e40u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
L_bb1e48:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb1e78; }
    c->r[0] = 0xe90c0cu;
    { uint32_t ea = 0xbb1e60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb1e60u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb1e70u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
L_bb1e78:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb1e80u; f_a879b4(c);
    c->r[0] = 0xe90be0u;
    { uint32_t ea = 0xbb1e8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb1e8cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bb1eb4(Cpu *restrict c) {
    FN_ENTER(0xbb1eb4u);
L_bb1eb4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb1eec; }
    c->r[0] = 0xe90b98u;
    { uint32_t ea = 0xbb1ed4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb1ed4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb1ee4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_bb1eec:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb1f1c; }
    c->r[0] = 0xe90b68u;
    { uint32_t ea = 0xbb1f04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb1f04u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb1f14u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
L_bb1f1c:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb1f4c; }
    c->r[0] = 0xe90b38u;
    { uint32_t ea = 0xbb1f34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb1f34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb1f44u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
L_bb1f4c:;
    c->r[0] = 0xe90b0cu;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0xbb1f60u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xbb1f64u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[5] * c->r[7]; c->r[1] = r; }
    c->r[5] = (c->r[1] << 4);
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xbb1f80u; rt_dispatch(c);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb1f8cu; f_15efdc4(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xbb1f94u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xbb1fa8u; rt_dispatch(c);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb1fb4u; f_15efdc4(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xbb1fbcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xbb1fd0u; rt_dispatch(c);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb1fdcu; f_15efdc4(c);
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x244u; ST32(ea, c->r[4]); }
    c->r[14] = 0xbb200cu; f_bb2090(c);
    c->v.s[0] = LD32(c->r[4] + 76u);
    c->v.s[2] = LD32(c->r[4] + 84u);
    c->v.s[6] = 0x3f000000u;
    c->v.s[4] = LD32(c->r[4] + 112u);
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[6] = c->v.f[4] - c->v.f[0];
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    ST32(c->r[4] + 144u, c->v.s[6]);
    c->v.s[6] = 0xc7c35000u;
    c->v.s[8] = LD32(c->r[4] + 116u);
    c->v.f[6] = c->v.f[8] + c->v.f[6];
    ST32(c->r[4] + 148u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[4] + 80u);
    c->v.s[10] = LD32(c->r[4] + 120u);
    c->v.f[6] = (float)c->v.s[6];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.s[6] = 0x47c35000u;
    c->v.f[12] = c->v.f[10] - c->v.f[2];
    c->v.f[4] = c->v.f[8] + c->v.f[6];
    c->v.f[2] = c->v.f[10] + c->v.f[2];
    ST32(c->r[4] + 152u, c->v.s[12]);
    ST32(c->r[4] + 160u, c->v.s[0]);
    ST32(c->r[4] + 164u, c->v.s[4]);
    ST32(c->r[4] + 168u, c->v.s[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bb2090(Cpu *restrict c) {
    FN_ENTER(0xbb2090u);
L_bb2090:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x0u;
L_bb2098:;
    c->r[2] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2] + 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bb2130; }
    { uint32_t ea = c->r[2] + 0xf4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[0] = LD32(c->r[3] + 112u);
    c->v.s[2] = LD32(c->r[3] + 116u);
    c->v.s[6] = LD32(c->r[2] + 240u);
    c->v.s[8] = LD32(c->r[2] + 252u);
    { uint32_t ea = c->r[2] + 0xf8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.s[4] = LD32(c->r[3] + 120u);
    c->v.s[10] = c->r[12];
    c->v.s[12] = c->r[14];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[6] * c->v.f[8]);
    ST32(c->r[2] + 288u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[2] = c->v.f[10] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.s[0] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[2] + 300u, c->v.s[0]);
    { uint32_t ea = c->r[2] + 0x124u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x128u; ST32(ea, c->r[14]); }
    c->v.s[0] = LD32(c->r[2] + 256u);
    c->v.s[6] = LD32(c->r[3] + 112u);
    c->v.s[2] = LD32(c->r[2] + 260u);
    c->v.s[8] = LD32(c->r[3] + 116u);
    c->v.s[4] = LD32(c->r[2] + 264u);
    c->v.s[10] = LD32(c->r[3] + 120u);
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    ST32(c->r[2] + 304u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] + c->v.f[10];
    ST32(c->r[2] + 308u, c->v.s[2]);
    ST32(c->r[2] + 312u, c->v.s[0]);
    { uint32_t ea = c->r[2] + 0x10cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x13cu; ST32(ea, c->r[3]); }
L_bb2130:;
    c->r[1] = c->r[1] + 0x80u;
    (void)f_subs(c, c->r[1], 0x200u);
    if (COND_NE) { goto L_bb2098; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb2140(Cpu *restrict c) {
    FN_ENTER(0xbb2140u);
L_bb2140:;
    c->v.s[0] = LD32(c->r[0] + 112u);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 116u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 120u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 120u, c->v.s[0]);
    return;
}
void f_bb2174(Cpu *restrict c) {
    FN_ENTER(0xbb2174u);
L_bb2174:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe86bf8u;
    { uint32_t ea = 0xbb218cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 104u);
    ST32(c->r[4] + 72u, c->v.s[0]);
    c->v.s[2] = LD32(c->r[4] + 100u);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[4] + 100u, c->v.s[0]);
    c->v.s[2] = LD32(c->r[4] + 96u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bb21fc; }
    c->v.s[16] = 0x0u;
L_bb21b4:;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[16] : c->v.s[0];
    ST32(c->r[4] + 100u, c->v.s[0]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb21d8u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb21e8u; rt_dispatch(c);
    c->v.s[2] = LD32(c->r[4] + 96u);
    c->v.s[0] = LD32(c->r[4] + 100u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bb21b4; }
L_bb21fc:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb220c(Cpu *restrict c) {
    FN_ENTER(0xbb220cu);
L_bb220c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bb24a8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[0] = 0x3f000000u;
    c->r[8] = c->r[0] + 0x40u;
    c->r[12] = c->r[0] + 0x44u;
    c->r[9] = c->r[0] + 0x3cu;
    c->r[14] = 0x0u;
    c->r[10] = 0x0u;
    c->r[7] = c->r[4];
L_bb223c:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_bb2384; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_bb238c; }
L_bb2250:;
    { uint32_t r = c->r[10] * c->r[7] + c->r[5]; c->r[11] = r; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb226c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[11] << 4);
    c->r[2] = c->r[2] - 0x10u;
    goto L_bb2274;
L_bb226c:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[11] << 4);
L_bb2274:;
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[2] = c->r[4] - 0x1u;
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_NE) { goto L_bb229c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + (c->r[11] << 4);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_bb22a8;
L_bb229c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + (c->r[11] << 4);
    c->r[3] = c->r[3] + 0x10u;
L_bb22a8:;
    c->r[1] = c->r[5] - c->r[4];
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[3] = LD32(c->r[3]);
    c->v.s[1] = LD32(c->r[3] + 4u);
    c->v.s[12] = LD32(c->r[3] + 8u);
    { uint32_t r = c->r[10] * c->r[7] + c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[2] + (c->r[1] << 4);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[8] = LD32(c->r[1] + 8u);
    c->r[1] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[10], c->r[1]);
    if (COND_NE) { goto L_bb22e8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + (c->r[11] << 4);
    goto L_bb22f8;
L_bb22e8:;
    { uint32_t r = c->r[10] * c->r[7] + c->r[4]; c->r[1] = r; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5] + c->r[1];
    c->r[2] = c->r[2] + (c->r[1] << 4);
L_bb22f8:;
    c->v.f[6] = c->v.f[6] + c->v.f[3];
    c->v.f[4] = c->v.f[4] + c->v.f[1];
    c->v.f[2] = c->v.f[2] + c->v.f[12];
    c->v.s[1] = LD32(c->r[2]);
    c->v.s[3] = LD32(c->r[2] + 4u);
    c->v.s[5] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[3] + (c->r[11] << 4);
    c->r[5] = c->r[5] + 0x1u;
    c->v.s[12] = LD32(c->r[1]);
    c->v.s[7] = LD32(c->r[1] + 8u);
    c->v.f[6] = c->v.f[6] + c->v.f[14];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    c->v.s[14] = LD32(c->r[1] + 4u);
    c->v.s[8] = LD32(c->r[0] + 88u);
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[11] << 4);
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[14]); }
    c->v.f[6] = c->v.f[6] + c->v.f[1];
    c->v.f[4] = c->v.f[4] + c->v.f[3];
    c->v.f[2] = c->v.f[2] + c->v.f[5];
    c->v.f[12] = -c->v.f[12] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[14] = -c->v.f[14] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.f[7] = -c->v.f[7] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.f[4] = c->v.f[12] * c->v.f[8];
    c->v.f[2] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[7] * c->v.f[8];
    ST32(c->r[1], c->v.s[4]);
    ST32(c->r[1] + 4u, c->v.s[2]);
    ST32(c->r[1] + 8u, c->v.s[6]);
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_CC) { goto L_bb2250; }
    goto L_bb2494;
L_bb2384:;
    c->r[7] = 0x0u;
    goto L_bb2494;
L_bb238c:;
    c->r[6] = ~0xfu;
L_bb2390:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb23a4; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[6];
    goto L_bb23a8;
L_bb23a4:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
L_bb23a8:;
    c->v.s[4] = LD32(c->r[2]);
    c->v.s[6] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[2] = c->r[4] - 0x1u;
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_NE) { goto L_bb23cc; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + (c->r[5] << 4);
    goto L_bb23dc;
L_bb23cc:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[6];
    c->r[2] = c->r[2] + 0x20u;
L_bb23dc:;
    c->r[3] = c->r[3] + c->r[6];
    c->v.s[1] = LD32(c->r[2]);
    c->v.s[3] = LD32(c->r[2] + 4u);
    c->v.s[14] = LD32(c->r[2] + 8u);
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[12] = LD32(c->r[3] + 16u);
    c->v.s[8] = LD32(c->r[3] + 20u);
    c->v.s[10] = LD32(c->r[3] + 24u);
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_bb240c; }
    c->r[2] = c->r[3] + 0x10u;
    goto L_bb2418;
L_bb240c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + c->r[5];
    c->r[2] = c->r[3] + (c->r[2] << 4);
L_bb2418:;
    c->v.f[4] = c->v.f[4] + c->v.f[1];
    c->v.f[6] = c->v.f[6] + c->v.f[3];
    c->v.f[2] = c->v.f[2] + c->v.f[14];
    c->v.s[1] = LD32(c->r[2]);
    c->v.s[3] = LD32(c->r[2] + 4u);
    c->v.s[5] = LD32(c->r[2] + 8u);
    c->v.s[14] = LD32(c->r[0] + 88u);
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[2] = c->r[2] + c->r[6];
    c->r[6] = c->r[6] + 0x10u;
    c->v.f[4] = c->v.f[4] + c->v.f[12];
    c->v.f[6] = c->v.f[6] + c->v.f[8];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[14]); }
    c->v.f[4] = c->v.f[4] + c->v.f[1];
    c->v.f[6] = c->v.f[6] + c->v.f[3];
    c->v.f[2] = c->v.f[2] + c->v.f[5];
    c->v.f[12] = -c->v.f[12] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.f[8] = -c->v.f[8] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[10] = -c->v.f[10] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.f[4] = c->v.f[12] * c->v.f[14];
    c->v.f[2] = c->v.f[8] * c->v.f[14];
    c->v.f[6] = c->v.f[10] * c->v.f[14];
    ST32(c->r[2] + 16u, c->v.s[4]);
    ST32(c->r[2] + 20u, c->v.s[2]);
    ST32(c->r[2] + 24u, c->v.s[6]);
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_CC) { goto L_bb2390; }
L_bb2494:;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], c->r[2]);
    if (COND_CC) { goto L_bb223c; }
    goto L_bb24b4;
L_bb24a8:;
    c->r[12] = c->r[0] + 0x44u;
    c->r[8] = c->r[0] + 0x40u;
    c->r[9] = c->r[0] + 0x3cu;
L_bb24b4:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb24d0(Cpu *restrict c) {
    FN_ENTER(0xbb24d0u);
L_bb24d0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0xe876acu;
    c->v.s[20] = 0xaf800000u;
    c->v.s[22] = 0x34000000u;
    c->v.s[16] = 0x3f800000u;
    c->v.s[18] = 0x3f000000u;
    { uint32_t ea = 0xbb2508u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe876a0u;
    { uint32_t ea = 0xbb2514u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_bb2518:;
    c->r[2] = c->r[4] + (c->r[0] << 7);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xc8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb2890; }
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LS) { goto L_bb2890; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[2] + 0x114u;
    c->v.s[2] = LD32(c->r[2] + 272u);
    c->v.s[0] = LD32(c->r[2] + 220u);
    c->v.f[4] = c->v.f[16] - c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    ST32(c->r[2] + 272u, c->v.s[0]);
    c->v.s[2] = LD32(c->r[2] + 208u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[2] + 276u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb2734; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bb2890; }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bb2890; }
    c->r[1] = c->r[2] + 0x138u;
    c->r[10] = c->r[2] + 0xd4u;
    c->r[6] = c->r[2] + 0x130u;
    c->r[8] = 0x0u;
    c->r[5] = 0x4u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] + 0x134u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
L_bb25c4:;
    c->v.s[0] = LD32(c->r[4] + 160u);
    c->v.s[8] = LD32(c->r[4] + 144u);
    c->r[1] = udiv32(c->r[8], c->r[0]);
    c->v.s[10] = LD32(c->r[4] + 168u);
    c->v.s[12] = LD32(c->r[4] + 152u);
    c->v.s[2] = LD32(c->r[4] + 84u);
    c->v.s[4] = LD32(c->r[4] + 112u);
    c->v.s[6] = LD32(c->r[4] + 120u);
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[8] = c->v.f[8] + c->v.f[0];
    c->v.f[14] = c->v.f[2] * c->v.f[18];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[8] * c->v.f[18]);
    c->v.f[8] = c->v.f[12] + c->v.f[10];
    c->r[0] = c->r[8] - c->r[1] * c->r[0];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[8] * c->v.f[18]);
    c->v.s[12] = c->r[0];
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->r[0] = 0x3f800000u;
    c->v.f[4] = (float)(int32_t)c->v.s[12];
    c->v.f[26] = c->v.f[0] + c->v.f[14];
    c->v.s[0] = c->r[1];
    c->r[1] = c->r[6];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[6] = c->v.f[6] - c->v.f[10];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.f[30] = c->v.f[6] + c->v.f[14];
    ST32(c->r[13] + 32u, c->v.s[26]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[2] * c->v.f[0]);
    ST32(c->r[13] + 40u, c->v.s[30]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[14] = 0xbb2648u; f_a0328c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bb2714; }
    c->v.s[17] = LD32(c->r[10]);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb265cu; f_9cc110(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = c->r[0];
    c->v.s[4] = c->r[7];
    c->v.f[17] = c->v.f[17] + c->v.f[16];
    c->v.s[0] = LD32(c->r[1]);
    c->v.f[2] = (float)c->v.s[2];
    c->v.s[6] = LD32(c->r[6]);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[10]);
    c->v.f[24] = c->v.f[4] - c->v.f[0];
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[28] = c->v.f[26] - c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[20];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[19] = LD32(c->r[0]);
    c->v.f[26] = c->v.f[30] - c->v.f[4];
    c->v.f[0] = c->v.f[24] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bb26c8; }
    c->r[14] = 0xbb26c4u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bb26c8:;
    c->v.f[0] = c->v.f[19] * c->v.f[17];
    vfp_cmp_f(c, c->v.f[2], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bb26e8; }
    c->v.f[2] = c->v.f[16] / c->v.f[2];
    c->v.f[26] = c->v.f[26] * c->v.f[2];
    c->v.f[24] = c->v.f[24] * c->v.f[2];
    c->v.f[28] = c->v.f[28] * c->v.f[2];
L_bb26e8:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
    c->v.s[2] = LD32(c->r[0] - 4u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[28]);
    ST32(c->r[0] - 4u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[24]);
    ST32(c->r[0], c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[26]);
    ST32(c->r[0] + 4u, c->v.s[2]);
L_bb2714:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[5] = c->r[5] + 0x10u;
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_CC) { goto L_bb25c4; }
    goto L_bb2890;
L_bb2734:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bb2890; }
    c->r[3] = c->r[2] + 0xd4u;
    c->r[12] = c->r[2] + 0x124u;
    c->r[7] = c->r[2] + 0x12cu;
    c->r[5] = c->r[2] + 0x128u;
    c->r[10] = c->r[2] + 0x120u;
    c->r[8] = 0x0u;
    c->r[6] = 0x4u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[12]); }
L_bb276c:;
    c->r[2] = udiv32(c->r[8], c->r[0]);
    c->v.s[0] = LD32(c->r[4] + 160u);
    c->v.s[8] = LD32(c->r[4] + 144u);
    c->v.s[10] = LD32(c->r[4] + 168u);
    c->v.s[12] = LD32(c->r[4] + 152u);
    c->v.s[14] = LD32(c->r[4] + 84u);
    c->v.s[2] = LD32(c->r[4] + 112u);
    c->v.s[6] = LD32(c->r[4] + 120u);
    c->v.s[4] = LD32(c->r[4] + 116u);
    c->v.f[8] = c->v.f[8] + c->v.f[0];
    c->v.f[1] = c->v.f[14] * c->v.f[18];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[8] * c->v.f[18]);
    c->v.f[8] = c->v.f[12] + c->v.f[10];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[8] * c->v.f[18]);
    c->r[3] = c->r[8] - c->r[2] * c->r[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[12] = c->r[3];
    c->v.f[0] = c->v.f[0] + c->v.f[1];
    c->v.f[2] = (float)(int32_t)c->v.s[12];
    c->v.s[12] = c->r[2];
    c->v.s[8] = LD32(c->r[10]);
    c->v.f[6] = c->v.f[6] - c->v.f[10];
    c->v.s[10] = LD32(c->r[12]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[5]);
    c->v.f[12] = (float)(int32_t)c->v.s[12];
    c->v.f[6] = c->v.f[6] + c->v.f[1];
    c->v.s[1] = LD32(c->r[7]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[12]);
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.f[0] = c->v.f[1] + c->v.f[0];
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_bb287c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = LD32(c->r[9]);
    c->r[14] = 0xbb2810u; f_9cc110(c);
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.f[4] = c->v.f[24] + c->v.f[16];
    c->v.f[0] = (float)c->v.s[0];
    c->v.s[2] = LD32(c->r[9]);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[12]);
    c->v.s[6] = LD32(c->r[1]);
    c->r[0] = c->r[0] + c->r[6];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.s[0] = LD32(c->r[10]);
    c->v.s[2] = LD32(c->r[0] - 4u);
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.s[6] = LD32(c->r[5]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[0] - 4u, c->v.s[2]);
    c->v.s[0] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[4]);
    ST32(c->r[0], c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[4]);
    ST32(c->r[0] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bb287c:;
    { uint32_t r = c->r[1] * c->r[0]; c->r[2] = r; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[6] = c->r[6] + 0x10u;
    (void)f_subs(c, c->r[8], c->r[2]);
    if (COND_CC) { goto L_bb276c; }
L_bb2890:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_bb2518; }
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb28c0(Cpu *restrict c) {
    FN_ENTER(0xbb28c0u);
L_bb28c0:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_bb28c4(Cpu *restrict c) {
    FN_ENTER(0xbb28c4u);
L_bb28c4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xbb28d8u; f_a87a24(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbb2900u; f_9bb638(c);
    c->r[1] = 0xbc3bd6u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xbb2918u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x5cu;
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
    c->r[14] = 0xbb295cu; f_9bb638(c);
    c->r[1] = 0xbc3b8cu;
    c->r[4] = 0x6u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x800000u;
    c->r[1] = 0xbb2970u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0xe900f8u;
    { uint32_t ea = 0xbb2984u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe900e4u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = 0xbb299cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
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
    c->r[14] = 0xbb29d4u; f_9bb638(c);
    c->r[1] = 0xbc3b23u;
    c->r[7] = 0x0u;
    c->r[1] = 0xbb29e4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = 0xe90094u;
    { uint32_t ea = 0xbb29f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe90080u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xbb2a08u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
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
    c->r[14] = 0xbb2a40u; f_9bb638(c);
    c->r[1] = 0xbc3ac6u;
    c->r[1] = 0xbb2a4cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = 0xe90034u;
    { uint32_t ea = 0xbb2a58u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe90020u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xbb2a70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
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
    c->r[14] = 0xbb2aa8u; f_9bb638(c);
    c->r[1] = 0xbb6121u;
    c->r[8] = 0x0u;
    c->r[1] = 0xbb2ab8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0xe8ffc8u;
    { uint32_t ea = 0xbb2accu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe8ffb4u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = 0xbb2ae4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
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
    c->r[14] = 0xbb2b38u; f_9bb638(c);
    c->r[1] = 0xbc39d1u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb2b4cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x80u;
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
    c->r[14] = 0xbb2bb0u; f_9bb638(c);
    c->r[1] = 0xbbf3a0u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb2bc4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x48u;
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
    c->r[14] = 0xbb2c28u; f_9bb638(c);
    c->r[1] = 0xbc38e8u;
    c->r[9] = 0xcu;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb2c40u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0x58u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[10]); }
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
    c->r[14] = 0xbb2ca0u; f_9bb638(c);
    c->r[1] = 0xbbfa7bu;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb2cb0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = c->r[10] + 0x60u;
    c->r[9] = c->r[13];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[2] = c->r[9];
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
    c->r[14] = 0xbb2d10u; f_9bb638(c);
    c->r[1] = 0xbc3819u;
    c->r[1] = 0xbb2d1cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xc0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
void f_bb2db4(Cpu *restrict c) {
    FN_ENTER(0xbb2db4u);
L_bb2db4:;
    c->v.s[0] = LD32(c->r[0] + 84u);
    return;
}
void f_bb2dbc(Cpu *restrict c) {
    FN_ENTER(0xbb2dbcu);
L_bb2dbc:;
    ST32(c->r[0] + 84u, c->v.s[0]);
    c->v.s[6] = 0x3f000000u;
    c->v.s[2] = LD32(c->r[0] + 76u);
    c->v.s[4] = LD32(c->r[0] + 112u);
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[6] = c->v.f[4] - c->v.f[2];
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    ST32(c->r[0] + 144u, c->v.s[6]);
    c->v.s[6] = 0xc7c35000u;
    c->v.s[8] = LD32(c->r[0] + 116u);
    c->v.f[6] = c->v.f[8] + c->v.f[6];
    ST32(c->r[0] + 148u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[0] + 80u);
    c->v.s[10] = LD32(c->r[0] + 120u);
    c->v.f[6] = (float)c->v.s[6];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->v.s[6] = 0x47c35000u;
    c->v.f[12] = c->v.f[10] - c->v.f[0];
    c->v.f[4] = c->v.f[8] + c->v.f[6];
    c->v.f[0] = c->v.f[10] + c->v.f[0];
    ST32(c->r[0] + 152u, c->v.s[12]);
    ST32(c->r[0] + 160u, c->v.s[2]);
    ST32(c->r[0] + 164u, c->v.s[4]);
    ST32(c->r[0] + 168u, c->v.s[0]);
    return;
}
void f_bb2e30(Cpu *restrict c) {
    FN_ENTER(0xbb2e30u);
L_bb2e30:;
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bb2e38(Cpu *restrict c) {
    FN_ENTER(0xbb2e38u);
L_bb2e38:;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bb2e48(Cpu *restrict c) {
    FN_ENTER(0xbb2e48u);
L_bb2e48:;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bb2e50(Cpu *restrict c) {
    FN_ENTER(0xbb2e50u);
L_bb2e50:;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bb2e60(Cpu *restrict c) {
    FN_ENTER(0xbb2e60u);
L_bb2e60:;
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    return;
}
void f_bb2e84(Cpu *restrict c) {
    FN_ENTER(0xbb2e84u);
L_bb2e84:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[4] = 0x3f000000u;
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[2]); }
    c->v.s[6] = c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[3]); }
    c->v.s[8] = c->r[3];
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    c->v.s[2] = LD32(c->r[0] + 84u);
    c->v.s[0] = LD32(c->r[0] + 76u);
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.f[0] = (float)c->v.s[0];
    c->v.s[4] = 0xc7c35000u;
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    c->v.f[10] = c->v.f[6] - c->v.f[0];
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    ST32(c->r[0] + 144u, c->v.s[10]);
    ST32(c->r[0] + 148u, c->v.s[4]);
    c->v.s[10] = c->r[12];
    c->v.s[4] = LD32(c->r[0] + 80u);
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.s[4] = 0x47c35000u;
    c->v.f[12] = c->v.f[10] - c->v.f[2];
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    c->v.f[2] = c->v.f[10] + c->v.f[2];
    ST32(c->r[0] + 152u, c->v.s[12]);
    ST32(c->r[0] + 160u, c->v.s[0]);
    ST32(c->r[0] + 164u, c->v.s[4]);
    ST32(c->r[0] + 168u, c->v.s[2]);
    __attribute__((musttail)) return f_bb2090(c);
}
void f_bb2f18(Cpu *restrict c) {
    FN_ENTER(0xbb2f18u);
L_bb2f18:;
    return;
}
void f_bb2f1c(Cpu *restrict c) {
    FN_ENTER(0xbb2f1cu);
L_bb2f1c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->v.s[16] = 0x0u;
    c->v.s[20] = 0x34000000u;
    c->v.s[18] = 0x3f000000u;
    c->v.s[22] = 0x3f800000u;
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    c->r[6] = c->r[0];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[7]); }
    c->v.s[24] = c->v.s[16];
    c->v.s[26] = c->v.s[16];
L_bb2f5c:;
    c->r[0] = c->r[5] + c->r[7];
    { uint32_t ea = c->r[0] + 0xc8u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bb3080; }
    c->v.s[0] = LD32(c->r[0] + 208u);
    c->v.s[2] = LD32(c->r[0] + 216u);
    { uint32_t ea = c->r[0] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->v.f[19] = c->v.f[2] * c->v.f[0];
    if (COND_EQ) { goto L_bb2f9c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_bb305c; }
    c->v.s[28] = LD32(c->r[0] + 288u);
    c->v.s[30] = LD32(c->r[0] + 292u);
    c->v.s[17] = LD32(c->r[0] + 296u);
    goto L_bb305c;
L_bb2f9c:;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[5] + 160u);
    c->v.s[8] = LD32(c->r[5] + 144u);
    c->v.s[10] = LD32(c->r[5] + 168u);
    c->v.s[12] = LD32(c->r[5] + 152u);
    c->v.s[2] = LD32(c->r[5] + 112u);
    c->v.s[14] = LD32(c->r[5] + 84u);
    c->v.s[6] = LD32(c->r[5] + 120u);
    c->v.s[4] = LD32(c->r[5] + 116u);
    c->r[2] = udiv32(c->r[4], c->r[1]);
    c->v.f[8] = c->v.f[8] + c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[8] * c->v.f[18]);
    c->v.f[8] = c->v.f[12] + c->v.f[10];
    c->v.f[12] = c->v.f[14] * c->v.f[18];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[8] * c->v.f[18]);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->r[1] = c->r[4] - c->r[2] * c->r[1];
    c->v.s[5] = c->r[2];
    c->v.s[2] = c->r[1];
    c->v.f[6] = c->v.f[6] - c->v.f[10];
    c->v.f[0] = c->v.f[0] + c->v.f[12];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[1] = LD32(c->r[0] + 308u);
    c->v.s[8] = LD32(c->r[0] + 304u);
    c->v.s[3] = LD32(c->r[0] + 312u);
    c->v.f[6] = c->v.f[6] + c->v.f[12];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.f[2] = (float)(int32_t)c->v.s[5];
    c->v.f[30] = c->v.f[4] - c->v.f[1];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.f[28] = c->v.f[0] - c->v.f[8];
    c->v.f[17] = c->v.f[6] - c->v.f[3];
    c->v.f[2] = c->v.f[28] * c->v.f[28];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bb3040; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbb3040u; f_15efddc(c);
L_bb3040:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bb305c; }
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
L_bb305c:;
    c->v.f[28] = c->v.f[19] * c->v.f[28];
    c->v.f[30] = c->v.f[19] * c->v.f[30];
    c->v.f[17] = c->v.f[19] * c->v.f[17];
    c->v.f[26] = c->v.f[28] + c->v.f[26];
    c->v.f[24] = c->v.f[30] + c->v.f[24];
    c->v.f[16] = c->v.f[17] + c->v.f[16];
    ST32(c->r[6], c->v.s[26]);
    ST32(c->r[6] + 4u, c->v.s[24]);
    ST32(c->r[6] + 8u, c->v.s[16]);
L_bb3080:;
    c->r[7] = c->r[7] + 0x80u;
    (void)f_subs(c, c->r[7], 0x200u);
    if (COND_NE) { goto L_bb2f5c; }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bb309c(Cpu *restrict c) {
    FN_ENTER(0xbb309cu);
L_bb309c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->v.s[6] = 0x3f800000u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[1] + 128u);
    c->v.s[2] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[1] + 144u);
    c->v.f[12] = c->v.f[6] / c->v.f[0];
    c->v.f[0] = c->v.f[2] * c->v.f[12];
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bb31ec; }
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->v.s[8] = LD32(c->r[1] + 152u);
    c->v.f[2] = c->v.f[12] * c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bb31ec; }
    c->v.s[6] = LD32(c->r[1] + 160u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_bb31ec; }
    c->v.s[10] = LD32(c->r[1] + 168u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_bb31ec; }
    c->v.s[14] = LD32(c->r[2] + 4u);
    c->v.f[12] = c->v.f[12] * c->v.f[14];
    c->v.s[14] = LD32(c->r[1] + 148u);
    vfp_cmp_f(c, c->v.f[12], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bb31ec; }
    c->v.s[14] = LD32(c->r[1] + 164u);
    vfp_cmp_f(c, c->v.f[12], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_bb31ec; }
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[8] = c->v.f[8] + c->v.f[10];
    c->v.s[12] = 0x3f000000u;
    c->v.s[1] = LD32(c->r[1] + 112u);
    c->v.s[3] = LD32(c->r[1] + 120u);
    c->v.s[14] = LD32(c->r[1] + 84u);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[4] = c->v.f[1] - c->v.f[6];
    c->v.f[6] = c->v.f[3] - c->v.f[10];
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.f[0] = c->v.f[0] / c->v.f[14];
    c->v.f[2] = c->v.f[2] / c->v.f[14];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[2]);
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->v.s[0];
    c->r[2] = c->v.s[2];
    { uint32_t r = c->r[2] * c->r[3] + c->r[0]; c->r[2] = r; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_bb31ec; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[2] << 4);
    c->v.s[16] = LD32(c->r[0]);
    c->v.s[18] = LD32(c->r[0] + 4u);
    c->v.s[20] = LD32(c->r[0] + 8u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13];
    c->r[14] = 0xbb31c8u; f_bb2f1c(c);
    c->v.s[0] = LD32(c->r[13]);
    c->v.f[0] = c->v.f[0] + c->v.f[16];
    ST32(c->r[4], c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 4u);
    c->v.f[0] = c->v.f[0] + c->v.f[18];
    ST32(c->r[4] + 4u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 8u);
    c->v.f[0] = c->v.f[0] + c->v.f[20];
    ST32(c->r[4] + 8u, c->v.s[0]);
L_bb31ec:;
    c->r[13] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb31f8(Cpu *restrict c) {
    FN_ENTER(0xbb31f8u);
L_bb31f8:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_bb31fc(Cpu *restrict c) {
    FN_ENTER(0xbb31fcu);
L_bb31fc:;
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
    c->r[14] = 0xbb3234u; f_9bb638(c);
    c->r[1] = 0xbbed05u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xbb324cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8u;
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
    c->r[14] = 0xbb32acu; f_9bb638(c);
    c->r[1] = 0xbc3284u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb32c0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xcu;
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
    c->r[14] = 0xbb3324u; f_9bb638(c);
    c->r[1] = 0xbc245du;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb3338u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
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
    c->r[14] = 0xbb3398u; f_9bb638(c);
    c->r[1] = 0xbc31a7u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb33acu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x14u;
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
    c->r[14] = 0xbb3410u; f_9bb638(c);
    c->r[1] = 0xbc3141u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb3424u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x18u;
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
    c->r[14] = 0xbb3484u; f_9bb638(c);
    c->r[1] = 0xbc30ddu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb3498u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1cu;
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
    c->r[14] = 0xbb3500u; f_9bb638(c);
    c->r[1] = 0xbc306fu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbb3514u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x20u;
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
    c->r[14] = 0xbb3574u; f_9bb638(c);
    c->r[1] = 0xbc3011u;
    c->r[1] = 0xbb3580u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x50u;
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
    c->r[0] = c->r[11];
    c->r[14] = 0xbb35ccu; f_9bb638(c);
    c->r[1] = 0xbc2fbau;
    c->r[9] = 0x14u;
    c->r[6] = 0x0u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x800000u;
    c->r[1] = 0xbb35e4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xe8f4a8u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = 0xbb35f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe8f494u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xbb360cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[14] = 0xbb3644u; f_9bb638(c);
    c->r[1] = 0xbc2f61u;
    c->r[1] = 0xbb3650u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[7] = c->r[1] + 0x7f0000u;
    c->r[1] = 0xe8f438u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = 0xbb366cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe8f424u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xbb3684u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[14] = 0xbb36bcu; f_9bb638(c);
    c->r[1] = 0xbc2ef6u;
    c->r[6] = 0x0u;
    c->r[1] = 0xbb36ccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = 0xe8f3d4u;
    { uint32_t ea = 0xbb36d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe8f3c0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xbb36f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[14] = 0xbb3728u; f_9bb638(c);
    c->r[1] = 0xbc2e9fu;
    c->r[1] = 0xbb3734u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = 0xe8f374u;
    { uint32_t ea = 0xbb3740u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe8f360u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xbb3758u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb37e0(Cpu *restrict c) {
    FN_ENTER(0xbb37e0u);
L_bb37e0:;
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    return;
}
void f_bb3804(Cpu *restrict c) {
    FN_ENTER(0xbb3804u);
L_bb3804:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 4u; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[4] = c->r[0];
    c->v.s[18] = c->r[5];
    c->v.s[20] = c->r[7];
    c->v.s[16] = c->r[6];
    c->v.f[2] = c->v.f[18] * c->v.f[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bb3848; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbb3848u; f_15efddc(c);
L_bb3848:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bb3878; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[4] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->r[5] = c->v.s[2];
    c->r[6] = c->v.s[4];
    c->r[7] = c->v.s[0];
L_bb3878:;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb3910; }
    c->v.s[2] = LD32(c->r[4] + 60u);
    c->v.s[4] = LD32(c->r[0] + 112u);
    c->v.s[6] = LD32(c->r[0] + 116u);
    c->v.s[0] = c->r[6];
    c->v.s[10] = c->r[5];
    c->v.s[8] = LD32(c->r[0] + 120u);
    c->v.s[12] = c->r[7];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[0] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[6] = c->v.f[10] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.s[0] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[4] + 108u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[7]); }
    c->v.s[0] = LD32(c->r[0] + 112u);
    c->v.s[6] = LD32(c->r[4] + 64u);
    c->v.s[2] = LD32(c->r[0] + 116u);
    c->v.s[8] = LD32(c->r[4] + 68u);
    c->v.s[4] = LD32(c->r[0] + 120u);
    c->v.s[10] = LD32(c->r[4] + 72u);
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    ST32(c->r[4] + 112u, c->v.s[0]);
    c->v.f[0] = c->v.f[10] + c->v.f[4];
    ST32(c->r[4] + 116u, c->v.s[2]);
    ST32(c->r[4] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
L_bb3910:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bb391c(Cpu *restrict c) {
    FN_ENTER(0xbb391cu);
L_bb391c:;
    c->v.s[0] = LD32(c->r[0] + 60u);
    return;
}
void f_bb3924(Cpu *restrict c) {
    FN_ENTER(0xbb3924u);
L_bb3924:;
    ST32(c->r[0] + 60u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[2] = LD32(c->r[1] + 112u);
    c->v.s[8] = LD32(c->r[0] + 48u);
    c->v.s[4] = LD32(c->r[1] + 116u);
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[6] = LD32(c->r[1] + 120u);
    c->v.s[10] = c->r[2];
    c->v.s[12] = c->r[3];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[8] * c->v.f[0]);
    ST32(c->r[0] + 96u, c->v.s[8]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[10] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[0] + 108u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[3]); }
    c->v.s[0] = LD32(c->r[1] + 112u);
    c->v.s[6] = LD32(c->r[0] + 64u);
    c->v.s[2] = LD32(c->r[1] + 116u);
    c->v.s[8] = LD32(c->r[0] + 68u);
    c->v.s[4] = LD32(c->r[1] + 120u);
    c->v.s[10] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    ST32(c->r[0] + 112u, c->v.s[0]);
    c->v.f[0] = c->v.f[10] + c->v.f[4];
    ST32(c->r[0] + 116u, c->v.s[2]);
    ST32(c->r[0] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    return;
}
void f_bb39bc(Cpu *restrict c) {
    FN_ENTER(0xbb39bcu);
L_bb39bc:;
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    return;
}
void f_bb39e0(Cpu *restrict c) {
    FN_ENTER(0xbb39e0u);
L_bb39e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 4u; c->r[3] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->v.s[2] = LD32(c->r[0] + 60u);
    c->v.s[4] = LD32(c->r[1] + 112u);
    c->v.s[6] = LD32(c->r[1] + 116u);
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[8] = LD32(c->r[1] + 120u);
    c->v.s[10] = c->r[2];
    c->v.s[12] = c->r[4];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[0] * c->v.f[2]);
    ST32(c->r[0] + 96u, c->v.s[0]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[6] = c->v.f[10] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.s[8] = c->r[3];
    c->v.s[0] = c->v.s[6] ^ 0x80000000u;
    c->v.s[6] = c->r[14];
    ST32(c->r[0] + 108u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[4]); }
    c->v.s[0] = LD32(c->r[1] + 112u);
    c->v.s[2] = LD32(c->r[1] + 116u);
    c->v.s[4] = LD32(c->r[1] + 120u);
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.s[6] = c->r[12];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    ST32(c->r[0] + 112u, c->v.s[0]);
    c->v.f[0] = c->v.f[6] + c->v.f[4];
    ST32(c->r[0] + 116u, c->v.s[2]);
    ST32(c->r[0] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb3a90(Cpu *restrict c) {
    FN_ENTER(0xbb3a90u);
L_bb3a90:;
    c->v.s[0] = LD32(c->r[0] + 76u);
    return;
}
void f_bb3a98(Cpu *restrict c) {
    FN_ENTER(0xbb3a98u);
L_bb3a98:;
    ST32(c->r[0] + 76u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[2] = LD32(c->r[0] + 48u);
    c->v.s[4] = LD32(c->r[0] + 60u);
    c->v.s[6] = LD32(c->r[1] + 112u);
    c->v.s[8] = LD32(c->r[1] + 116u);
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[10] = LD32(c->r[1] + 120u);
    c->v.s[12] = c->r[2];
    c->v.s[14] = c->r[3];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[0] + 96u, c->v.s[2]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[8] = c->v.f[12] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.s[2] = c->v.s[8] ^ 0x80000000u;
    ST32(c->r[0] + 108u, c->v.s[2]);
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[3]); }
    c->v.s[2] = LD32(c->r[1] + 112u);
    c->v.s[8] = LD32(c->r[0] + 64u);
    c->v.s[4] = LD32(c->r[1] + 116u);
    c->v.s[10] = LD32(c->r[0] + 68u);
    c->v.s[6] = LD32(c->r[1] + 120u);
    c->v.s[12] = LD32(c->r[0] + 72u);
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    c->v.f[6] = c->v.f[12] + c->v.f[6];
    ST32(c->r[0] + 112u, c->v.s[2]);
    ST32(c->r[0] + 116u, c->v.s[4]);
    ST32(c->r[0] + 120u, c->v.s[6]);
    ST32(c->r[0] + 124u, c->v.s[0]);
    return;
}
void f_bb3b30(Cpu *restrict c) {
    FN_ENTER(0xbb3b30u);
L_bb3b30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xe8ef7cu;
    { uint32_t ea = 0xbb3b40u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb3b44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x300u;
    c->pc = c->r[4]; c->r[14] = 0xbb3b5cu; rt_dispatch(c);
    c->r[14] = 0xbb3b60u; f_bb19a4(c);
    c->r[1] = 0xe8ef40u;
    c->r[2] = 0xcccdu;
    c->r[3] = 0x3f800000u;
    c->r[4] = 0x0u;
    c->r[12] = c->r[0] + 0x2e4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc11c0000u;
    { uint32_t ea = 0xbb3b80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x28u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    c->r[1] = 0x126fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3c830000u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2f4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2dcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2d8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2d4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2d0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2ccu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2c8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2c4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2c0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb3bcc(Cpu *restrict c) {
    FN_ENTER(0xbb3bccu);
L_bb3bcc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe8eee0u;
    { uint32_t ea = 0xbb3be0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb3becu; f_bb3cac(c);
    c->r[0] = 0xe8ee80u;
    { uint32_t ea = 0xbb3bf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb3c2c; }
    c->r[0] = 0xe8ee58u;
    { uint32_t ea = 0xbb3c14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3c14u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3c24u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_bb3c2c:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb3c5c; }
    c->r[0] = 0xe8ee28u;
    { uint32_t ea = 0xbb3c44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3c44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3c54u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
L_bb3c5c:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb3c8c; }
    c->r[0] = 0xe8edf8u;
    { uint32_t ea = 0xbb3c74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3c74u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3c84u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
L_bb3c8c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a879b4(c);
}
void f_bb3cac(Cpu *restrict c) {
    FN_ENTER(0xbb3cacu);
L_bb3cac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb3ce4; }
    c->r[0] = 0xe8edf0u;
    { uint32_t ea = 0xbb3cccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3cccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3cdcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
L_bb3ce4:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb3d14; }
    c->r[0] = 0xe8edc0u;
    { uint32_t ea = 0xbb3cfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3cfcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3d0cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
L_bb3d14:;
    { uint32_t ea = c->r[4] + 0x2c0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb3d44; }
    c->r[0] = 0xe8ed90u;
    { uint32_t ea = 0xbb3d2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3d2cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3d3cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2c0u; ST32(ea, c->r[0]); }
L_bb3d44:;
    { uint32_t ea = c->r[4] + 0x2c4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb3d74; }
    c->r[0] = 0xe8ed60u;
    { uint32_t ea = 0xbb3d5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3d5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3d6cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2c4u; ST32(ea, c->r[0]); }
L_bb3d74:;
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb3da4; }
    c->r[0] = 0xe8ed30u;
    { uint32_t ea = 0xbb3d8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3d8cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3d9cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2c8u; ST32(ea, c->r[0]); }
L_bb3da4:;
    { uint32_t ea = c->r[4] + 0x2d0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb3dd4; }
    c->r[0] = 0xe8ed00u;
    { uint32_t ea = 0xbb3dbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3dbcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3dccu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2d0u; ST32(ea, c->r[0]); }
L_bb3dd4:;
    { uint32_t ea = c->r[4] + 0x2ccu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb3e04; }
    c->r[0] = 0xe8ecd0u;
    { uint32_t ea = 0xbb3decu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3decu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3dfcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2ccu; ST32(ea, c->r[0]); }
L_bb3e04:;
    { uint32_t ea = c->r[4] + 0x2d4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb3e34; }
    c->r[0] = 0xe8eca0u;
    { uint32_t ea = 0xbb3e1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3e1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3e2cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2d4u; ST32(ea, c->r[0]); }
L_bb3e34:;
    { uint32_t ea = c->r[4] + 0x2dcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb3e64; }
    c->r[0] = 0xe8ec70u;
    { uint32_t ea = 0xbb3e4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3e4cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3e5cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2dcu; ST32(ea, c->r[0]); }
L_bb3e64:;
    { uint32_t ea = c->r[4] + 0x2d8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0xe8ec40u;
    { uint32_t ea = 0xbb3e7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3e7cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb3e8cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb3ec0(Cpu *restrict c) {
    FN_ENTER(0xbb3ec0u);
L_bb3ec0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbb3eccu; f_bb3bcc(c);
    c->r[0] = 0xe8ebe4u;
    { uint32_t ea = 0xbb3ed8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb3ed8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bb3ef0(Cpu *restrict c) {
    FN_ENTER(0xbb3ef0u);
L_bb3ef0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbb3efcu; f_bb3cac(c);
    c->r[0] = 0xe8ebacu;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0xbb3f10u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xbb3f14u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[6] * c->r[7]; c->r[1] = r; }
    c->r[6] = (c->r[1] << 4);
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbb3f30u; rt_dispatch(c);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb3f3cu; f_15efdc4(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xbb3f44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbb3f58u; rt_dispatch(c);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb3f64u; f_15efdc4(c);
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xbb3f74u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[6] * c->r[7]; c->r[1] = r; }
    c->r[6] = (c->r[1] << 2);
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbb3f90u; rt_dispatch(c);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + 0x2c0u; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb3f9cu; f_15efd7c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xbb3fa4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbb3fb8u; rt_dispatch(c);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + 0x2c4u; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb3fc4u; f_15efd7c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xbb3fccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbb3fe0u; rt_dispatch(c);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + 0x2c8u; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb3fecu; f_15efd7c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xbb3ff4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbb4008u; rt_dispatch(c);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + 0x2d0u; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb4014u; f_15efd7c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xbb401cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbb4030u; rt_dispatch(c);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + 0x2ccu; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb403cu; f_15efd7c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xbb4044u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbb4058u; rt_dispatch(c);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + 0x2d4u; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb4064u; f_15efd7c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xbb406cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbb4080u; rt_dispatch(c);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + 0x2dcu; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb408cu; f_15efd7c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xbb4094u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbb40a8u; rt_dispatch(c);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + 0x2d8u; ST32(ea, c->r[0]); }
    c->r[14] = 0xbb40b4u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_bb4158; }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = 0x0u;
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x42480000u;
L_bb40d4:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[5] = 0x0u;
    if (COND_EQ) { goto L_bb4148; }
    c->r[6] = 0x0u;
L_bb40e4:;
    { uint32_t ea = c->r[4] + 0x2c4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[2] * c->r[3] + c->r[6]; c->r[3] = r; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[7] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + (c->r[3] << 2); ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x2c4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2c0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[5] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[3] << 2);
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[5]);
    c->r[1] = c->r[7] + (c->r[3] << 2);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[1], c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x2ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_CC) { goto L_bb40e4; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[3];
L_bb4148:;
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_CC) { goto L_bb40d4; }
L_bb4158:;
    { uint32_t ea = c->r[4] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2e0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x244u; ST32(ea, c->r[4]); }
    c->r[14] = 0xbb417cu; f_bb2090(c);
    c->v.s[0] = LD32(c->r[4] + 76u);
    c->v.s[2] = LD32(c->r[4] + 84u);
    c->v.s[6] = 0x3f000000u;
    c->v.s[4] = LD32(c->r[4] + 112u);
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[6] = c->v.f[4] - c->v.f[0];
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    ST32(c->r[4] + 144u, c->v.s[6]);
    c->v.s[6] = 0xc7c35000u;
    c->v.s[8] = LD32(c->r[4] + 116u);
    c->v.f[6] = c->v.f[8] + c->v.f[6];
    ST32(c->r[4] + 148u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[4] + 80u);
    c->v.s[10] = LD32(c->r[4] + 120u);
    c->v.f[6] = (float)c->v.s[6];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.s[6] = 0x47c35000u;
    c->v.f[12] = c->v.f[10] - c->v.f[2];
    c->v.f[4] = c->v.f[8] + c->v.f[6];
    c->v.f[2] = c->v.f[10] + c->v.f[2];
    ST32(c->r[4] + 152u, c->v.s[12]);
    ST32(c->r[4] + 160u, c->v.s[0]);
    ST32(c->r[4] + 164u, c->v.s[4]);
    ST32(c->r[4] + 168u, c->v.s[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bb41f4(Cpu *restrict c) {
    FN_ENTER(0xbb41f4u);
L_bb41f4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[8] - 0x1u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_CC) { goto L_bb4384; }
    c->v.s[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = 0x3f000000u;
    c->v.s[4] = 0xbf800000u;
    c->v.s[6] = 0x3f800000u;
    c->r[14] = 0x1u;
    c->r[12] = 0x2u;
    goto L_bb4230;
L_bb4230:;
    c->r[2] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_CC) { goto L_bb4370; }
    c->v.s[8] = c->r[14];
    c->r[2] = 0x1u;
    c->v.f[8] = (float)c->v.s[8];
L_bb4248:;
    { uint32_t ea = c->r[0] + 0x2d0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[12] * c->r[3] + c->r[2]; c->r[1] = r; }
    { uint32_t r = c->r[14] * c->r[3] + c->r[2]; c->r[4] = r; }
    { uint32_t ea = c->r[0] + 0x2ccu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[7] = LD32(c->r[0] + 756u);
    c->v.s[5] = LD32(c->r[0] + 752u);
    c->v.s[14] = LD32(c->r[0] + 740u);
    c->v.s[1] = LD32(c->r[0] + 748u);
    c->r[7] = c->r[6] + (c->r[4] << 2);
    c->r[1] = c->r[6] + (c->r[1] << 2);
    c->r[5] = c->r[5] + (c->r[4] << 2);
    c->v.s[10] = LD32(c->r[1]);
    c->v.s[12] = LD32(c->r[7]);
    c->v.s[9] = LD32(c->r[5]);
    c->v.s[11] = LD32(c->r[5] + 4u);
    c->v.f[10] = c->v.f[12] + c->v.f[10];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[10] = c->v.f[9] + c->v.f[11];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.d[5] = c->v.d[4];
    c->v.f[12] = c->v.f[7] * c->v.f[14];
    c->v.s[7] = c->r[2];
    c->r[2] = c->r[2] + 0x1u;
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[12] * c->v.f[1]);
    c->v.f[12] = (float)c->v.s[7];
    c->v.f[14] = c->v.f[14] * c->v.f[5];
    c->v.s[5] = c->r[8];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[1] * c->v.f[14]);
    c->v.f[1] = (float)c->v.s[5];
    c->v.s[14] = c->r[3];
    { float t0 = nftz(vmax_f(nftz(c->v.f[10]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[11]), nftz(c->v.f[3]))); c->v.f[10] = t0; c->v.f[11] = t1; }
    c->v.f[14] = (float)c->v.s[14];
    c->v.f[1] = c->v.f[1] + c->v.f[4];
    c->v.f[14] = c->v.f[14] + c->v.f[4];
    { float t0 = nftz(vmax_f(nftz(c->v.f[12]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[13]), nftz(c->v.f[3]))); c->v.f[12] = t0; c->v.f[13] = t1; }
    vfp_cmp_f(c, c->v.f[10], c->v.f[1]);
    vfp_mrs_flags(c);
    c->v.s[10] = COND_GT ? c->v.s[1] : c->v.s[10];
    vfp_cmp_f(c, c->v.f[12], c->v.f[14]);
    vfp_mrs_flags(c);
    c->v.s[12] = COND_GT ? c->v.s[14] : c->v.s[12];
    c->v.s[14] = vcvt_s32_f64((double)c->v.f[10]);
    c->v.s[1] = vcvt_s32_f64((double)c->v.f[12]);
    c->r[1] = c->v.s[14];
    c->r[5] = c->v.s[1];
    { uint32_t r = c->r[1] * c->r[3] + c->r[5]; c->r[1] = r; }
    { uint32_t ea = c->r[0] + 0x2c8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.f[1] = (float)(int32_t)c->v.s[1];
    c->r[3] = c->r[1] + c->r[3];
    c->r[3] = c->r[5] + (c->r[3] << 2);
    c->r[1] = c->r[5] + (c->r[1] << 2);
    c->v.f[12] = c->v.f[12] - c->v.f[1];
    c->v.s[1] = LD32(c->r[3]);
    c->v.s[5] = LD32(c->r[3] + 4u);
    c->v.f[14] = (float)(int32_t)c->v.s[14];
    c->v.s[9] = LD32(c->r[1]);
    c->v.s[11] = LD32(c->r[1] + 4u);
    { uint32_t ea = c->r[0] + 0x2d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[7] = c->v.f[6] - c->v.f[12];
    c->r[1] = c->r[1] + (c->r[4] << 2);
    c->v.f[10] = c->v.f[10] - c->v.f[14];
    c->v.f[1] = c->v.f[1] * c->v.f[7];
    c->v.f[14] = c->v.f[9] * c->v.f[7];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[5] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[12]);
    c->v.f[5] = c->v.f[6] - c->v.f[10];
    c->v.f[10] = c->v.f[10] * c->v.f[1];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[14]);
    ST32(c->r[1], c->v.s[10]);
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_bb4248; }
L_bb4370:;
    c->r[14] = c->r[14] + 0x1u;
    c->r[2] = c->r[8] - 0x1u;
    c->r[12] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[14], c->r[2]);
    if (COND_CC) { goto L_bb4230; }
L_bb4384:;
    c->r[2] = c->r[8] - 0x1u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_CC) { goto L_bb43e4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
L_bb4398:;
    c->r[1] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_bb43d4; }
    c->r[1] = 0x1u;
L_bb43a8:;
    { uint32_t ea = c->r[0] + 0x2d4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[2] * c->r[3] + c->r[1]; c->r[3] = r; }
    { uint32_t ea = c->r[0] + 0x2c8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[6] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_bb43a8; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
L_bb43d4:;
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[8] - 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_bb4398; }
L_bb43e4:;
    c->r[1] = c->r[8] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_bb4564; }
    c->v.s[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = 0x3e800000u;
    c->v.s[4] = 0xbf800000u;
    c->v.s[6] = 0x3f800000u;
    c->r[14] = 0x1u;
    c->r[12] = 0x0u;
L_bb440c:;
    c->r[1] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_bb4550; }
    c->v.s[8] = c->r[14];
    c->r[2] = 0x1u;
    c->v.f[8] = (float)c->v.s[8];
L_bb4424:;
    { uint32_t ea = c->r[0] + 0x2ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[14] * c->r[3] + c->r[2]; c->r[4] = r; }
    { uint32_t r = c->r[12] * c->r[3] + c->r[2]; c->r[6] = r; }
    c->v.s[7] = LD32(c->r[0] + 752u);
    c->v.s[9] = LD32(c->r[0] + 756u);
    c->v.s[5] = LD32(c->r[0] + 748u);
    c->r[5] = c->r[1] + (c->r[4] << 2);
    c->r[1] = c->r[1] + (c->r[6] << 2);
    c->v.s[10] = LD32(c->r[1]);
    c->v.s[14] = LD32(c->r[5]);
    c->v.s[1] = LD32(c->r[5] + 4u);
    c->v.s[12] = LD32(c->r[1] + 4u);
    { uint32_t ea = c->r[0] + 0x2d0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[5] + (c->r[4] << 2);
    c->v.f[10] = c->v.f[14] + c->v.f[10];
    c->v.s[14] = LD32(c->r[0] + 740u);
    c->v.f[10] = c->v.f[10] + c->v.f[1];
    c->v.s[1] = LD32(c->r[1]);
    c->v.f[10] = c->v.f[10] + c->v.f[12];
    c->v.s[12] = c->r[2];
    c->r[2] = c->r[2] + 0x1u;
    c->v.f[12] = (float)c->v.s[12];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[10] = c->v.f[9] + c->v.f[1];
    c->v.f[1] = c->v.f[14] * c->v.f[7];
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.d[7] = c->v.d[4];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[5] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[5]);
    c->v.s[10] = c->r[3];
    c->v.s[1] = c->r[8];
    c->v.f[10] = (float)c->v.s[10];
    c->v.f[1] = (float)c->v.s[1];
    c->v.f[10] = c->v.f[10] + c->v.f[4];
    c->v.f[1] = c->v.f[1] + c->v.f[4];
    { float t0 = nftz(vmax_f(nftz(c->v.f[12]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[13]), nftz(c->v.f[3]))); c->v.f[12] = t0; c->v.f[13] = t1; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[14]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[15]), nftz(c->v.f[3]))); c->v.f[14] = t0; c->v.f[15] = t1; }
    vfp_cmp_f(c, c->v.f[12], c->v.f[10]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[14], c->v.f[1]);
    c->v.s[10] = COND_GT ? c->v.s[10] : c->v.s[12];
    vfp_mrs_flags(c);
    c->v.s[12] = COND_GT ? c->v.s[1] : c->v.s[14];
    c->v.s[14] = vcvt_s32_f64((double)c->v.f[10]);
    c->v.s[1] = vcvt_s32_f64((double)c->v.f[12]);
    c->r[1] = c->v.s[14];
    c->v.f[14] = (float)(int32_t)c->v.s[14];
    c->r[6] = c->v.s[1];
    c->v.f[10] = c->v.f[10] - c->v.f[14];
    { uint32_t r = c->r[6] * c->r[3] + c->r[1]; c->r[1] = r; }
    c->v.f[7] = c->v.f[6] - c->v.f[10];
    c->r[3] = c->r[1] + c->r[3];
    c->r[1] = c->r[5] + (c->r[1] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 2);
    c->v.s[14] = LD32(c->r[3]);
    c->v.s[5] = LD32(c->r[3] + 4u);
    c->v.f[1] = (float)(int32_t)c->v.s[1];
    c->v.s[9] = LD32(c->r[1]);
    c->v.s[11] = LD32(c->r[1] + 4u);
    { uint32_t ea = c->r[0] + 0x2dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[4] << 2);
    c->v.f[12] = c->v.f[12] - c->v.f[1];
    c->v.f[14] = c->v.f[14] * c->v.f[7];
    c->v.f[1] = c->v.f[9] * c->v.f[7];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[10]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[11] * c->v.f[10]);
    c->v.f[5] = c->v.f[6] - c->v.f[12];
    c->v.f[10] = c->v.f[12] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[1]);
    ST32(c->r[1], c->v.s[10]);
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_bb4424; }
L_bb4550:;
    c->r[14] = c->r[14] + 0x1u;
    c->r[1] = c->r[8] - 0x1u;
    c->r[12] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[14], c->r[1]);
    if (COND_CC) { goto L_bb440c; }
L_bb4564:;
    c->r[1] = c->r[8] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_bb45c4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
L_bb4578:;
    c->r[1] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_bb45b4; }
    c->r[1] = 0x1u;
L_bb4588:;
    { uint32_t ea = c->r[0] + 0x2dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[2] * c->r[3] + c->r[1]; c->r[3] = r; }
    { uint32_t ea = c->r[0] + 0x2d0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[6] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_bb4588; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
L_bb45b4:;
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[8] - 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_bb4578; }
L_bb45c4:;
    c->r[1] = c->r[8] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_bb4744; }
    c->v.s[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = 0x3e800000u;
    c->v.s[4] = 0xbf800000u;
    c->v.s[6] = 0x3f800000u;
    c->r[14] = 0x1u;
    c->r[12] = 0x2u;
L_bb45ec:;
    c->r[1] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_bb4730; }
    c->v.s[8] = c->r[14];
    c->r[2] = 0x1u;
    c->v.f[8] = (float)c->v.s[8];
L_bb4604:;
    { uint32_t ea = c->r[0] + 0x2d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[14] * c->r[3] + c->r[2]; c->r[4] = r; }
    { uint32_t r = c->r[12] * c->r[3] + c->r[2]; c->r[6] = r; }
    c->v.s[9] = LD32(c->r[0] + 756u);
    c->v.s[7] = LD32(c->r[0] + 752u);
    c->v.s[5] = LD32(c->r[0] + 748u);
    c->r[5] = c->r[1] + (c->r[4] << 2);
    c->r[1] = c->r[1] + (c->r[6] << 2);
    c->v.s[12] = LD32(c->r[1]);
    c->v.s[1] = LD32(c->r[5]);
    c->v.s[14] = LD32(c->r[5] - 4u);
    c->v.s[10] = LD32(c->r[1] - 4u);
    { uint32_t ea = c->r[0] + 0x2ccu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[5] + (c->r[4] << 2);
    c->v.f[12] = c->v.f[1] + c->v.f[12];
    c->v.s[1] = LD32(c->r[0] + 740u);
    c->v.f[12] = c->v.f[12] + c->v.f[14];
    c->v.s[14] = LD32(c->r[1]);
    c->v.f[10] = c->v.f[12] + c->v.f[10];
    c->v.f[12] = c->v.f[7] + c->v.f[14];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.s[10] = c->r[2];
    c->v.f[12] = c->v.f[12] * c->v.f[1];
    c->r[2] = c->r[2] + 0x1u;
    c->v.f[10] = (float)c->v.s[10];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[12] * c->v.f[5]);
    c->v.s[12] = c->r[8];
    c->v.f[14] = c->v.f[9] * c->v.f[1];
    c->v.d[8] = c->v.d[4];
    c->v.f[12] = (float)c->v.s[12];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[14] * c->v.f[5]);
    c->v.s[14] = c->r[3];
    c->v.f[12] = c->v.f[12] + c->v.f[4];
    c->v.f[14] = (float)c->v.s[14];
    { float t0 = nftz(vmax_f(nftz(c->v.f[10]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[11]), nftz(c->v.f[3]))); c->v.f[10] = t0; c->v.f[11] = t1; }
    c->v.f[14] = c->v.f[14] + c->v.f[4];
    { float t0 = nftz(vmax_f(nftz(c->v.f[16]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[17]), nftz(c->v.f[3]))); c->v.f[16] = t0; c->v.f[17] = t1; }
    vfp_cmp_f(c, c->v.f[16], c->v.f[12]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[10], c->v.f[14]);
    c->v.s[12] = COND_GT ? c->v.s[12] : c->v.s[16];
    vfp_mrs_flags(c);
    c->v.s[10] = COND_GT ? c->v.s[14] : c->v.s[10];
    c->v.s[14] = vcvt_s32_f64((double)c->v.f[12]);
    c->v.s[1] = vcvt_s32_f64((double)c->v.f[10]);
    c->r[1] = c->v.s[14];
    c->r[6] = c->v.s[1];
    c->v.f[1] = (float)(int32_t)c->v.s[1];
    { uint32_t r = c->r[1] * c->r[3] + c->r[6]; c->r[1] = r; }
    c->v.f[10] = c->v.f[10] - c->v.f[1];
    c->r[3] = c->r[1] + c->r[3];
    c->r[1] = c->r[5] + (c->r[1] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 2);
    c->v.f[7] = c->v.f[6] - c->v.f[10];
    c->v.s[1] = LD32(c->r[3]);
    c->v.s[5] = LD32(c->r[3] + 4u);
    c->v.f[14] = (float)(int32_t)c->v.s[14];
    c->v.s[9] = LD32(c->r[1]);
    c->v.s[11] = LD32(c->r[1] + 4u);
    { uint32_t ea = c->r[0] + 0x2d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[4] << 2);
    c->v.f[12] = c->v.f[12] - c->v.f[14];
    c->v.f[1] = c->v.f[1] * c->v.f[7];
    c->v.f[14] = c->v.f[9] * c->v.f[7];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[5] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[10]);
    c->v.f[5] = c->v.f[6] - c->v.f[12];
    c->v.f[10] = c->v.f[12] * c->v.f[1];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[14]);
    ST32(c->r[1], c->v.s[10]);
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_bb4604; }
L_bb4730:;
    c->r[14] = c->r[14] + 0x1u;
    c->r[1] = c->r[8] - 0x1u;
    c->r[12] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[14], c->r[1]);
    if (COND_CC) { goto L_bb45ec; }
L_bb4744:;
    c->r[1] = c->r[8] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_bb47a4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
L_bb4758:;
    c->r[1] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_bb4794; }
    c->r[1] = 0x1u;
L_bb4768:;
    { uint32_t ea = c->r[0] + 0x2d8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[2] * c->r[3] + c->r[1]; c->r[3] = r; }
    { uint32_t ea = c->r[0] + 0x2ccu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[6] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_bb4768; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
L_bb4794:;
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[8] - 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_bb4758; }
L_bb47a4:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bb47b0(Cpu *restrict c) {
    FN_ENTER(0xbb47b0u);
L_bb47b0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[0] = LD32(c->r[0] + 744u);
    c->r[1] = c->r[12] - 0x1u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CC) { goto L_bb4854; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x2u;
    c->r[14] = 0x1u;
L_bb47d4:;
    c->r[3] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_CC) { goto L_bb4840; }
    c->r[3] = 0x1u;
L_bb47e4:;
    { uint32_t ea = c->r[0] + 0x2d0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x2c0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[6] * c->r[1] + c->r[3]; c->r[2] = r; }
    { uint32_t r = c->r[14] * c->r[1] + c->r[3]; c->r[1] = r; }
    c->v.s[2] = LD32(c->r[0] + 740u);
    c->v.s[4] = LD32(c->r[0] + 748u);
    c->r[3] = c->r[3] + 0x1u;
    c->r[4] = c->r[4] + (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[2] << 2);
    c->r[1] = c->r[5] + (c->r[1] << 2);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[10] = LD32(c->r[4]);
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.f[4] = c->v.f[8] - c->v.f[6];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[4], c->v.s[10]);
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_bb47e4; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
L_bb4840:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[3] = c->r[12] - 0x1u;
    c->r[14] = c->r[14] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_CC) { goto L_bb47d4; }
L_bb4854:;
    c->r[1] = c->r[12] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
L_bb4868:;
    c->r[3] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_CC) { goto L_bb48cc; }
    c->r[3] = 0x2u;
L_bb4878:;
    { uint32_t ea = c->r[0] + 0x2ccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x2c0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[3]; c->r[1] = r; }
    c->v.s[2] = LD32(c->r[0] + 740u);
    c->v.s[4] = LD32(c->r[0] + 748u);
    c->r[3] = c->r[3] + 0x1u;
    c->r[6] = c->r[6] + (c->r[1] << 2);
    c->r[1] = c->r[5] + (c->r[1] << 2);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.s[6] = LD32(c->r[1] - 4u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[6]);
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.f[4] = c->v.f[8] - c->v.f[6];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[6], c->v.s[10]);
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_CC) { goto L_bb4878; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
L_bb48cc:;
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[12] - 0x1u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_bb4868; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb48e0(Cpu *restrict c) {
    FN_ENTER(0xbb48e0u);
L_bb48e0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbb48ecu; f_bb41f4(c);
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[12] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_bb49b0; }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = 0xbf000000u;
    c->r[7] = 0x1u;
    c->r[14] = 0x2u;
L_bb490c:;
    c->r[0] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_bb4994; }
    c->r[0] = 0x1u;
L_bb491c:;
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2ccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x2d0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[7] * c->r[3] + c->r[0]; c->r[2] = r; }
    { uint32_t r = c->r[14] * c->r[3] + c->r[0]; c->r[3] = r; }
    c->v.s[14] = LD32(c->r[4] + 748u);
    c->v.s[12] = LD32(c->r[4] + 740u);
    c->r[0] = c->r[0] + 0x1u;
    c->r[5] = c->r[5] + (c->r[2] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[3] = c->r[6] + (c->r[3] << 2);
    c->r[2] = c->r[6] + (c->r[2] << 2);
    c->v.s[2] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[5]);
    c->v.s[8] = LD32(c->r[5] + 4u);
    c->v.s[10] = LD32(c->r[1]);
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    c->v.f[4] = c->v.f[8] - c->v.f[6];
    c->v.f[6] = c->v.f[10] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + c->v.f[4];
    c->v.f[4] = c->v.f[6] * c->v.f[14];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[2]);
    ST32(c->r[1], c->v.s[10]);
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_bb491c; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
L_bb4994:;
    c->r[7] = c->r[7] + 0x1u;
    c->r[0] = c->r[12] - 0x1u;
    c->r[14] = c->r[14] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_bb490c; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_bb4a1c; }
L_bb49b0:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
L_bb49b8:;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_bb4a0c; }
    c->r[0] = 0x0u;
L_bb49c8:;
    { uint32_t ea = c->r[4] + 0x2c4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[2] = r; }
    { uint32_t ea = c->r[4] + 0x2c0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[6] = c->r[6] + (c->r[2] << 2);
    c->r[7] = c->r[7] + (c->r[2] << 2);
    c->r[2] = c->r[3] + (c->r[2] << 2);
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[6]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[2], c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { goto L_bb49c8; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = c->r[2];
L_bb4a0c:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = c->r[3];
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_CC) { goto L_bb49b8; }
L_bb4a1c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb4a24u; f_bb47b0(c);
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bb4aac; }
    c->r[1] = 0x0u;
    c->r[12] = 0x4u;
    c->r[2] = ~0x7u;
L_bb4a44:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x2c4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[0] = LD32(c->r[4] + 736u);
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[3] * c->r[1]; c->r[7] = r; }
    c->r[7] = c->r[12] + (c->r[7] << 2);
    c->r[5] = c->r[5] + c->r[7];
    c->r[7] = c->r[6] + c->r[7];
    c->v.s[2] = LD32(c->r[5]);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    ST32(c->r[7], c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x2c4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[0] = LD32(c->r[4] + 736u);
    { uint32_t r = c->r[3] * c->r[1] + c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] + (c->r[3] << 2);
    c->r[6] = c->r[6] + c->r[3];
    c->r[3] = c->r[7] + c->r[3];
    c->v.s[2] = LD32(c->r[6]);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    ST32(c->r[3], c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CC) { goto L_bb4a44; }
L_bb4aac:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_bb4b38; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_bb4ac0:;
    { uint32_t ea = c->r[4] + 0x2c4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + c->r[1];
    c->v.s[0] = LD32(c->r[4] + 736u);
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[7] = c->r[7] + (c->r[2] << 2);
    c->r[2] = c->r[3] + (c->r[2] << 2);
    c->v.s[2] = LD32(c->r[7]);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    ST32(c->r[2], c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x2c4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[0] = LD32(c->r[4] + 736u);
    c->r[3] = c->r[3] - 0x2u;
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[7] + (c->r[2] << 2);
    c->r[2] = c->r[3] + (c->r[2] << 2);
    c->r[7] = c->r[7] + c->r[0];
    c->v.s[2] = LD32(c->r[7]);
    c->r[2] = c->r[2] + c->r[0];
    c->r[0] = c->r[0] + 0x4u;
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    ST32(c->r[2], c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_bb4ac0; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[2];
L_bb4b38:;
    c->r[1] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
L_bb4b4c:;
    c->r[7] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_CC) { goto L_bb4bd8; }
    c->r[3] = 0x1u;
L_bb4b5c:;
    { uint32_t ea = c->r[4] + 0x2c4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[3]; c->r[0] = r; }
    c->r[7] = c->r[7] + (c->r[0] << 2);
    c->r[6] = c->r[6] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[7]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bb4bac; }
    { uint32_t ea = c->r[4] + 0x2ccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + (c->r[0] << 4); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2d0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[6] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    goto L_bb4bc0;
L_bb4bac:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[0] << 4);
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + (c->r[0] << 4); ST32(ea, c->r[2]); }
L_bb4bc0:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[7] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_CC) { goto L_bb4b5c; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
L_bb4bd8:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[7] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_bb4b4c; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bb4bec(Cpu *restrict c) {
    FN_ENTER(0xbb4becu);
L_bb4bec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb4c5c; }
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
L_bb4c10:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = LD32(c->r[4] + 88u);
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = c->r[2] + c->r[1];
    c->r[1] = c->r[1] + 0x10u;
    c->v.s[2] = LD32(c->r[2] - 4u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[2] - 4u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[2], c->v.s[2]);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[2] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { goto L_bb4c10; }
L_bb4c5c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb4c64u; f_bb24d0(c);
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->v.s[0] = 0x461c4000u;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = 0x4000u;
    c->r[0] = 0x1u;
    c->r[14] = 0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x461c0000u;
L_bb4c8c:;
    c->r[2] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_CC) { goto L_bb4d0c; }
    c->r[3] = 0x1u;
L_bb4c9c:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[0] * c->r[1] + c->r[3]; c->r[1] = r; }
    c->r[2] = c->r[2] + (c->r[1] << 4);
    c->r[5] = c->r[5] + (c->r[1] << 2);
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[2] + 4u);
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    ST32(c->r[5], c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[2] + (c->r[1] << 2);
    c->v.s[2] = LD32(c->r[5]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bb4ce8; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x2c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[2] + (c->r[1] << 2);
    c->v.s[2] = LD32(c->r[5]);
L_bb4ce8:;
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    c->r[3] = c->r[3] + 0x1u;
    vfp_mrs_flags(c);
    if (COND_MI) { { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[14]); } }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_bb4c9c; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
L_bb4d0c:;
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { goto L_bb4c8c; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb4d24(Cpu *restrict c) {
    FN_ENTER(0xbb4d24u);
L_bb4d24:;
    return;
}
void f_bb4d28(Cpu *restrict c) {
    FN_ENTER(0xbb4d28u);
L_bb4d28:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bb4d2c(Cpu *restrict c) {
    FN_ENTER(0xbb4d2cu);
L_bb4d2c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bb4d30(Cpu *restrict c) {
    FN_ENTER(0xbb4d30u);
L_bb4d30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe8dd2cu;
    { uint32_t ea = 0xbb4d44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb4d44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bb4d5c(Cpu *restrict c) {
    FN_ENTER(0xbb4d5cu);
L_bb4d5c:;
    c->r[0] = 0xe8dd08u;
    { uint32_t ea = 0xbb4d68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bb4d6c(Cpu *restrict c) {
    FN_ENTER(0xbb4d6cu);
L_bb4d6c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bb4d70(Cpu *restrict c) {
    FN_ENTER(0xbb4d70u);
L_bb4d70:;
    c->r[0] = 0xe8dcf0u;
    { uint32_t ea = 0xbb4d7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bb4d80(Cpu *restrict c) {
    FN_ENTER(0xbb4d80u);
L_bb4d80:;
    return;
}
void f_bb4d84(Cpu *restrict c) {
    FN_ENTER(0xbb4d84u);
L_bb4d84:;
    c->r[0] = 0xe8dd2cu;
    { uint32_t ea = 0xbb4d90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bb4d94(Cpu *restrict c) {
    FN_ENTER(0xbb4d94u);
L_bb4d94:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x176d5a0u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x6u;
    c->r[3] = 0x2c0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[0] = 0xbb4dc4u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[0] = 0xe8dc60u;
    { uint32_t ea = 0xbb4e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0xe844ecu;
    { uint32_t ea = 0xbb4e14u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xbc16b7u;
    c->r[1] = 0xbb4e1cu + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xbb4e20u; f_9aedcc(c);
    c->r[0] = 0xe8dc84u;
    c->r[1] = 0xe83d20u;
    c->r[3] = 0x80u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xbb4e40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xbb4e44u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xbc1689u;
    c->r[0] = c->r[0] + 0x8u;
    c->r[1] = 0xbb4e50u + c->r[1];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe8dc14u;
    { uint32_t ea = 0xbb4e5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb4e5cu; f_9aedcc(c);
    c->r[1] = 0xe8dc4cu;
    c->r[2] = c->r[4];
    c->r[3] = 0x300u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xbb4e7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xe8dc2cu;
    c->r[1] = 0xbc174eu;
    { uint32_t ea = 0xbb4e90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbb4e94u + c->r[1];
    c->r[14] = 0xbb4e94u; f_9aedcc(c);
    c->r[1] = 0xe8dc2cu;
    { uint32_t ea = 0xbb4ea0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb4edc(Cpu *restrict c) {
    FN_ENTER(0xbb4edcu);
L_bb4edc:;
    c->r[0] = 0x0u;
    return;
}
void f_bb4ee4(Cpu *restrict c) {
    FN_ENTER(0xbb4ee4u);
L_bb4ee4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbb4ef0u; f_aa7668(c);
    c->r[0] = 0xe8dbd0u;
    c->r[1] = 0x3f800000u;
    { uint32_t ea = 0xbb4f00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x188u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x194u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[1]); }
    c->r[14] = 0xbb4f38u; f_bb4f44(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb4f44(Cpu *restrict c) {
    FN_ENTER(0xbb4f44u);
L_bb4f44:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[7] = 0x0u;
    c->r[3] = 0x100u;
    c->r[4] = 0xff00u;
    c->r[14] = 0x10000u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[2]); }
    c->r[2] = 0xe83e00u;
    { uint32_t ea = c->r[0] + 0xf4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xfcff0000u;
    { uint32_t ea = 0xbb4f84u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xf8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x108u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x10cu; ST32(ea, c->r[7]); }
    c->r[1] = 0x6000000u;
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[1]); }
    c->r[3] = c->r[3] & c->r[4];
    c->r[3] = c->r[3] | 0x80u;
    { uint32_t ea = c->r[0] + 0x118u; ST32(ea, c->r[3]); }
    c->r[3] = 0xe8db0cu;
    { uint32_t ea = 0xbb4fc8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x15cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[14]); }
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_CS) { c->r[3] = 0x2u; }
    c->r[1] = c->r[3] & 0xfu;
    c->r[3] = 0x2080u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x40020000u;
    c->r[1] = c->r[3] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0xe84bd0u;
    { uint32_t ea = c->r[0] + 0x11cu; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xbb5000u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x120u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x124u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x128u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x12cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x130u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x134u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0x138u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x13cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x140u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x144u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x148u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x14cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x150u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x154u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x15cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0xb4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0xc4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xccu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xd4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xdcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0xe0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0xe4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xecu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe83a58u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0xbb50f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x160u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x164u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x16cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x170u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x174u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x178u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x17cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x180u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x184u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x188u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x194u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x198u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x19cu; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb5158(Cpu *restrict c) {
    FN_ENTER(0xbb5158u);
L_bb5158:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe8d964u;
    { uint32_t ea = 0xbb516cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb5188; }
    c->r[14] = 0xbb5180u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
L_bb5188:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_aa770c(c);
}
void f_bb5198(Cpu *restrict c) {
    FN_ENTER(0xbb5198u);
L_bb5198:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe8d924u;
    { uint32_t ea = 0xbb51acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb51c8; }
    c->r[14] = 0xbb51c0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
L_bb51c8:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb51d0u; f_aa770c(c);
    c->r[0] = 0xe8d8fcu;
    { uint32_t ea = 0xbb51dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb51dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bb51f8(Cpu *restrict c) {
    FN_ENTER(0xbb51f8u);
L_bb51f8:;
    __attribute__((musttail)) return f_aa7740(c);
}
void f_bb51fc(Cpu *restrict c) {
    FN_ENTER(0xbb51fcu);
L_bb51fc:;
    c->r[0] = 0x10u;
    c->r[1] = 0x0u;
    return;
}
void f_bb5208(Cpu *restrict c) {
    FN_ENTER(0xbb5208u);
L_bb5208:;
    { uint32_t ea = c->r[0] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bb5250; }
    c->r[0] = 0x0u;
    goto L_bb5220;
L_bb521c:;
    c->r[0] = c->r[2] - 0x7u;
L_bb5220:;
    c->r[2] = c->r[0] + 0x8u;
    goto L_bb522c;
L_bb5228:;
    c->r[2] = c->r[2] + 0x1u;
L_bb522c:;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bb5244; }
    (void)f_subs(c, c->r[3], 0x5cu);
    if (COND_NE) { goto L_bb5228; }
    goto L_bb521c;
L_bb5244:;
    c->r[0] = c->r[1] + c->r[0];
    c->r[0] = c->r[0] + 0x8u;
    return;
L_bb5250:;
    __attribute__((musttail)) return f_a87a0c(c);
}
void f_bb5254(Cpu *restrict c) {
    FN_ENTER(0xbb5254u);
L_bb5254:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x88u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb53a4; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_bb5468; }
    c->v.s[6] = LD32(c->r[4] + 80u);
    c->v.s[8] = LD32(c->r[4] + 84u);
    c->v.s[0] = LD32(c->r[4] + 88u);
    c->v.s[10] = LD32(c->r[4] + 92u);
    c->v.s[3] = 0x3f800000u;
    c->r[1] = 0x0u;
    c->r[6] = c->r[4] + 0x160u;
    c->r[12] = c->r[13] + 0x30u;
    c->r[5] = c->r[4] + 0x110u;
    c->v.f[12] = c->v.f[0] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[8];
    c->v.f[13] = c->v.f[6] + c->v.f[6];
    c->v.f[14] = c->v.f[0] * c->v.f[12];
    c->v.f[1] = c->v.f[8] * c->v.f[2];
    c->v.f[5] = c->v.f[12] * c->v.f[10];
    c->v.f[7] = c->v.f[6] * c->v.f[2];
    c->v.f[15] = c->v.f[6] * c->v.f[13];
    c->v.f[9] = c->v.f[2] * c->v.f[10];
    c->v.f[11] = c->v.f[6] * c->v.f[12];
    c->v.f[0] = c->v.f[1] + c->v.f[14];
    c->v.f[1] = c->v.f[15] + c->v.f[1];
    c->v.f[2] = c->v.f[7] + c->v.f[5];
    c->v.f[6] = c->v.f[7] - c->v.f[5];
    c->v.f[7] = c->v.f[8] * c->v.f[12];
    c->v.f[5] = c->v.f[13] * c->v.f[10];
    c->v.f[14] = c->v.f[15] + c->v.f[14];
    c->v.f[4] = c->v.f[11] - c->v.f[9];
    c->v.f[12] = c->v.f[11] + c->v.f[9];
    c->v.f[0] = c->v.f[3] - c->v.f[0];
    c->v.f[8] = c->v.f[3] - c->v.f[14];
    c->v.f[10] = c->v.f[7] + c->v.f[5];
    c->v.f[14] = c->v.f[7] - c->v.f[5];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    ST32(c->r[13], c->v.s[0]);
    ST32(c->r[13] + 4u, c->v.s[2]);
    ST32(c->r[13] + 8u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 16u, c->v.s[6]);
    ST32(c->r[13] + 20u, c->v.s[8]);
    ST32(c->r[13] + 24u, c->v.s[10]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 32u, c->v.s[12]);
    ST32(c->r[13] + 36u, c->v.s[14]);
    ST32(c->r[13] + 40u, c->v.s[1]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x114u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0xf0000000u;
    { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x30000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb54cc; }
    ST32(c->r[4] + 288u, c->v.s[0]);
    ST32(c->r[4] + 292u, c->v.s[2]);
    ST32(c->r[4] + 296u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 304u, c->v.s[6]);
    ST32(c->r[4] + 308u, c->v.s[8]);
    ST32(c->r[4] + 312u, c->v.s[10]);
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 320u, c->v.s[12]);
    ST32(c->r[4] + 324u, c->v.s[14]);
    ST32(c->r[4] + 328u, c->v.s[1]);
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[1]); }
    c->r[3] = c->r[4] + 0x40u;
    c->r[12] = c->r[4] + 0x150u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = 0x3u;
    goto L_bb562c;
L_bb53a4:;
    c->v.s[2] = LD32(c->r[4] + 84u);
    c->v.s[4] = LD32(c->r[4] + 88u);
    c->v.s[14] = 0x3f800000u;
    c->v.s[0] = LD32(c->r[4] + 80u);
    c->v.s[6] = LD32(c->r[4] + 92u);
    c->r[0] = 0x0u;
    c->r[2] = c->r[4] + 0x40u;
    c->r[3] = c->r[4] + 0x150u;
    c->v.f[8] = c->v.f[4] + c->v.f[4];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[5] = c->v.f[0] * c->v.f[10];
    c->v.f[7] = c->v.f[0] * c->v.f[8];
    c->v.f[3] = c->v.f[8] * c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[1] = c->v.f[12] + c->v.f[4];
    c->v.f[9] = c->v.f[5] + c->v.f[3];
    c->v.f[11] = c->v.f[7] - c->v.f[10];
    c->v.f[3] = c->v.f[5] - c->v.f[3];
    c->v.f[1] = c->v.f[14] - c->v.f[1];
    ST32(c->r[4] + 288u, c->v.s[1]);
    c->v.f[1] = c->v.f[0] + c->v.f[0];
    ST32(c->r[4] + 292u, c->v.s[9]);
    ST32(c->r[4] + 296u, c->v.s[11]);
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 304u, c->v.s[3]);
    c->v.f[0] = c->v.f[0] * c->v.f[1];
    c->v.f[6] = c->v.f[1] * c->v.f[6];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[12];
    c->v.f[8] = c->v.f[2] + c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.f[4] = c->v.f[14] - c->v.f[4];
    c->v.f[0] = c->v.f[14] - c->v.f[0];
    ST32(c->r[4] + 308u, c->v.s[4]);
    c->v.f[4] = c->v.f[7] + c->v.f[10];
    ST32(c->r[4] + 312u, c->v.s[8]);
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 320u, c->v.s[4]);
    ST32(c->r[4] + 324u, c->v.s[2]);
    ST32(c->r[4] + 328u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[0]); }
    goto L_bb5698;
L_bb5468:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbb5480u; rt_dispatch(c);
    c->r[0] = c->r[4] + 0x50u;
    c->r[1] = c->r[4] + 0x120u;
    c->r[14] = 0xbb548cu; f_272ea8(c);
    c->r[2] = c->r[4] + 0x150u;
    c->r[3] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[5]); }
    c->r[5] = c->r[4] + 0x110u;
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_bb54f0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_bb5504; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bb5510; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bb54f8;
L_bb54cc:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0xf0000000u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_bb5520; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xbb54e8u; rt_dispatch(c);
    c->r[2] = c->r[0];
    goto L_bb5524;
L_bb54f0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_bb54f8:;
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb5500u; rt_dispatch(c);
    goto L_bb5510;
L_bb5504:;
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x20u;
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
L_bb5510:;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[2] = c->r[2] | 0x2000000u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    goto L_bb5698;
L_bb5520:;
    c->r[2] = c->r[0] + 0xb0u;
L_bb5524:;
    c->r[0] = c->r[13] + 0x40u;
    c->r[1] = c->r[13];
    c->r[14] = 0xbb5530u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[6];
    { uint32_t sc = 0; uint32_t r = c->r[0] ^ 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb5634; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_bb562c:;
    c->r[0] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] + 0x12cu; ST32(ea, c->r[2]); }
L_bb5634:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb5644u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bb5698; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_bb5678; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_bb568c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bb5698; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bb5680;
L_bb5678:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_bb5680:;
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb5688u; rt_dispatch(c);
    goto L_bb5698;
L_bb568c:;
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x20u;
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
L_bb5698:;
    c->v.s[0] = LD32(c->r[4] + 96u);
    c->v.s[2] = LD32(c->r[4] + 288u);
    c->v.s[4] = LD32(c->r[4] + 292u);
    c->v.s[6] = LD32(c->r[4] + 296u);
    c->v.s[8] = LD32(c->r[4] + 300u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    ST32(c->r[4] + 176u, c->v.s[2]);
    c->v.f[2] = c->v.f[0] * c->v.f[6];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    ST32(c->r[4] + 180u, c->v.s[4]);
    ST32(c->r[4] + 184u, c->v.s[2]);
    ST32(c->r[4] + 188u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 100u);
    c->v.s[2] = LD32(c->r[4] + 304u);
    c->v.s[4] = LD32(c->r[4] + 308u);
    c->v.s[6] = LD32(c->r[4] + 312u);
    c->v.s[8] = LD32(c->r[4] + 316u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    ST32(c->r[4] + 192u, c->v.s[2]);
    c->v.f[2] = c->v.f[0] * c->v.f[6];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    ST32(c->r[4] + 196u, c->v.s[4]);
    ST32(c->r[4] + 200u, c->v.s[2]);
    ST32(c->r[4] + 204u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 104u);
    c->v.s[2] = LD32(c->r[4] + 320u);
    c->v.s[4] = LD32(c->r[4] + 324u);
    c->v.s[6] = LD32(c->r[4] + 328u);
    c->v.s[8] = LD32(c->r[4] + 332u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    ST32(c->r[4] + 208u, c->v.s[2]);
    c->v.f[2] = c->v.f[0] * c->v.f[6];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    ST32(c->r[4] + 212u, c->v.s[4]);
    ST32(c->r[4] + 216u, c->v.s[2]);
    ST32(c->r[4] + 220u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bb575c(Cpu *restrict c) {
    FN_ENTER(0xbb575cu);
L_bb575c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfu;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_bb578c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bb57a0; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_bb5798; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bb5794;
L_bb578c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_bb5794:;
    c->pc = c->r[1]; c->r[14] = 0xbb5798u; rt_dispatch(c);
L_bb5798:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_bb57a0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb57a8(Cpu *restrict c) {
    FN_ENTER(0xbb57a8u);
L_bb57a8:;
    c->v.s[0] = LD32(c->r[0] + 224u);
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[1] + 4u);
    c->v.s[6] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 224u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 228u);
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    ST32(c->r[0] + 228u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 232u);
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    ST32(c->r[0] + 232u, c->v.s[0]);
    c->v.s[0] = 0x0u;
    c->v.s[2] = LD32(c->r[0] + 236u);
    c->v.f[2] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 236u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 336u);
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[6] = LD32(c->r[1] + 4u);
    c->v.s[8] = LD32(c->r[1] + 8u);
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    ST32(c->r[0] + 336u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 340u);
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    ST32(c->r[0] + 340u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 344u);
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    ST32(c->r[0] + 344u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 348u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 348u, c->v.s[0]);
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
    return;
}
void f_bb585c(Cpu *restrict c) {
    FN_ENTER(0xbb585cu);
L_bb585c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb5878u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb5880(Cpu *restrict c) {
    FN_ENTER(0xbb5880u);
L_bb5880:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb58a4; }
    c->r[14] = 0xbb589cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
L_bb58a4:;
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[4];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    c->r[3] = c->r[1];
    c->r[3] = c->r[3] & 0xf7ffffffu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    if (COND_EQ) { goto L_bb5964; }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_NE) { c->r[6] = f_adds(c, c->r[6], c->r[7]); }
    if (COND_EQ) { goto L_bb5944; }
    c->r[14] = c->r[6];
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[14] = c->r[14] + 0x4u; c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb5908; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0xfc00ffffu) | ((c->r[8] << 16) & 0x3ff0000u);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
L_bb5908:;
    { uint32_t r = c->r[7] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb592c; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0xf00000u;
    c->r[1] = c->r[1] & ~0x8f00000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    c->r[3] = c->r[6] & (c->r[3] << 4);
    c->r[3] = c->r[3] | c->r[1];
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
L_bb592c:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0xf00000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = c->r[3] | 0x8000000u; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); } }
L_bb5944:;
    c->r[0] = c->r[5];
    c->r[14] = 0xbb594cu; f_a87648(c);
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_bb5964:;
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000000u;
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe83408u;
    { uint32_t ea = 0xbb597cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bb598c(Cpu *restrict c) {
    FN_ENTER(0xbb598cu);
L_bb598c:;
    c->r[12] = c->r[0] + 0x110u;
    c->r[1] = c->r[1] & 0xfu;
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    (void)f_subs(c, c->r[1], 0x6u);
    c->r[3] = c->r[3] & 0xf0ffffffu;
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] | (c->r[1] << 24);
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x118u; ST32(ea, c->r[12]); }
    if (COND_EQ) { return; }
    c->r[1] = c->r[0] + 0x170u;
    __attribute__((musttail)) return f_bb59bc(c);
}
void f_bb59bc(Cpu *restrict c) {
    FN_ENTER(0xbb59bcu);
L_bb59bc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[13] = c->r[13] - 0x88u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[2]); }
    c->v.s[16] = c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[3]); }
    c->v.s[18] = c->r[3];
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe83140u;
    c->v.s[20] = c->r[1];
    { uint32_t ea = 0xbb5a0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_EQ) { c->v.s[0] = LD32(c->r[0] + 4u); }
    if (COND_EQ) { vfp_cmp_f(c, c->v.f[18], c->v.f[0]); }
    if (COND_EQ) { vfp_mrs_flags(c); }
    if (COND_NE) { goto L_bb5a34; }
    c->v.s[0] = LD32(c->r[0] + 8u);
    vfp_cmp_f(c, c->v.f[20], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bb5c60; }
L_bb5a34:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb5a80; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_bb5a80; }
    { uint32_t ea = c->r[4] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[2], (c->r[1] >> 29));
    if (COND_NE) { goto L_bb5a80; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_bb5c8c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xbb5a7cu; rt_dispatch(c);
    goto L_bb5c90;
L_bb5a80:;
    c->r[0] = c->r[4] + 0x110u;
L_bb5a84:;
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_bb5ad8; }
    c->v.s[26] = 0x0u;
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xbb5aa4u + 0xcu;
    c->v.s[24] = 0xbf800000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = c->v.s[26];
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xbb5accu: goto L_bb5acc; case 0xbb5ae4u: goto L_bb5ae4; case 0xbb5af0u: goto L_bb5af0; case 0xbb5b04u: goto L_bb5b04; case 0xbb5c6cu: goto L_bb5c6c; case 0xbb5c7cu: goto L_bb5c7c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bb5acc:;
    c->r[0] = 0xe83780u;
    { uint32_t ea = 0xbb5ad8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bb5af8;
L_bb5ad8:;
    c->r[0] = 0xe83068u;
    { uint32_t ea = 0xbb5ae4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bb5af8;
L_bb5ae4:;
    c->r[0] = 0xe83718u;
    { uint32_t ea = 0xbb5af0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bb5af8;
L_bb5af0:;
    c->r[0] = 0xe83708u;
    { uint32_t ea = 0xbb5afcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb5af8:;
    c->v.s[24] = LD32(c->r[0]);
    c->v.s[22] = LD32(c->r[0] + 4u);
    c->v.s[26] = LD32(c->r[0] + 8u);
L_bb5b04:;
    c->v.f[0] = c->v.f[16] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[22]);
    c->v.s[2] = 0xbf7fbe77u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[26]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bb5b48; }
    c->v.s[0] = 0x3c23d70au;
    c->v.f[2] = fabsf(c->v.f[24]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bb5bb0; }
    c->r[0] = 0xe836c8u;
    { uint32_t ea = 0xbb5b40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[2] = c->r[0] + 0x4u;
    goto L_bb5bec;
L_bb5b48:;
    c->v.s[28] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] + c->v.f[28];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bb5b6c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbb5b6cu; f_15efddc(c);
L_bb5b6c:;
    c->v.f[6] = c->v.f[28] / c->v.f[0];
    c->v.f[2] = c->v.f[20] * c->v.f[22];
    c->v.f[4] = c->v.f[16] * c->v.f[26];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[18] * c->v.f[26]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[20] * c->v.f[24]);
    c->v.s[10] = 0x3f000000u;
    c->v.f[8] = c->v.f[18] * c->v.f[24];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[16] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    c->v.f[6] = c->v.f[8] * c->v.f[6];
    ST32(c->r[4] + 80u, c->v.s[2]);
    ST32(c->r[4] + 84u, c->v.s[4]);
    ST32(c->r[4] + 88u, c->v.s[6]);
    ST32(c->r[4] + 92u, c->v.s[0]);
    goto L_bb5c60;
L_bb5bb0:;
    c->r[0] = 0xe83640u;
    c->v.f[2] = fabsf(c->v.f[22]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = 0xbb5bc4u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xe83684u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = 0xbb5bd4u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + 0x8u;
    c->r[0] = c->r[2];
    c->r[2] = c->r[2] + 0x4u;
    if (COND_MI) { c->r[0] = c->r[3]; }
    if (COND_MI) { c->r[1] = c->r[3] + 0x8u; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[3] + 0x4u; }
L_bb5bec:;
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[2]);
    c->v.f[16] = c->v.f[26] * c->v.f[2];
    c->v.f[18] = c->v.f[22] * c->v.f[0];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[24] * c->v.f[0]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[26] * c->v.f[4]);
    c->v.f[20] = c->v.f[24] * c->v.f[4];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[22] * c->v.f[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bb5c34; }
    c->r[14] = 0xbb5c30u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bb5c34:;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = 0xbd2eu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xb33b0000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[16];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[4] + 80u, c->v.s[2]);
    ST32(c->r[4] + 84u, c->v.s[4]);
    ST32(c->r[4] + 88u, c->v.s[0]);
L_bb5c60:;
    c->r[13] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_bb5c6c:;
    c->v.s[26] = 0x0u;
    c->v.s[22] = 0xbf800000u;
    c->v.s[24] = c->v.s[26];
    goto L_bb5b04;
L_bb5c7c:;
    c->v.s[22] = 0x0u;
    c->v.s[26] = 0xbf800000u;
    c->v.s[24] = c->v.s[22];
    goto L_bb5b04;
L_bb5c8c:;
    c->r[0] = c->r[0] + 0xb0u;
L_bb5c90:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13];
    c->r[14] = 0xbb5d1cu; f_4332ac(c);
    c->v.s[2] = LD32(c->r[4] + 372u);
    c->v.s[6] = LD32(c->r[13] + 20u);
    c->v.s[14] = LD32(c->r[13] + 16u);
    c->v.s[0] = LD32(c->r[4] + 368u);
    c->v.s[8] = LD32(c->r[13]);
    c->v.s[10] = LD32(c->r[13] + 4u);
    c->v.s[1] = LD32(c->r[13] + 24u);
    c->v.s[4] = LD32(c->r[4] + 376u);
    c->v.s[12] = LD32(c->r[13] + 8u);
    c->v.f[18] = c->v.f[2] * c->v.f[6];
    c->v.f[16] = c->v.f[14] * c->v.f[2];
    c->v.s[6] = LD32(c->r[13] + 36u);
    c->v.s[14] = LD32(c->r[13] + 32u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.s[10] = LD32(c->r[13] + 40u);
    c->v.f[20] = c->v.f[2] * c->v.f[1];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[2] = c->v.f[18] * c->v.f[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bb5d94; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbb5d94u; f_15efddc(c);
L_bb5d94:;
    c->v.s[2] = 0x34000000u;
    c->r[0] = c->r[4] + 0x110u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bb5a84; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    goto L_bb5a84;
}
void f_bb5df0(Cpu *restrict c) {
    FN_ENTER(0xbb5df0u);
L_bb5df0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xacu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[3];
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xbb5e3cu; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[8]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb5f98; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7u;
    c->r[5] = c->r[5] - 0x1u;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_HI) { goto L_bb5f98; }
    c->v.s[6] = LD32(c->r[4] + 80u);
    c->v.s[8] = LD32(c->r[4] + 84u);
    c->v.s[0] = LD32(c->r[4] + 88u);
    c->v.s[10] = LD32(c->r[4] + 92u);
    c->v.s[3] = 0x3f800000u;
    c->r[6] = 0x0u;
    c->r[3] = c->r[13] + 0x50u;
    c->v.f[12] = c->v.f[0] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[8];
    c->v.f[13] = c->v.f[6] + c->v.f[6];
    c->v.f[14] = c->v.f[0] * c->v.f[12];
    c->v.f[1] = c->v.f[8] * c->v.f[2];
    c->v.f[5] = c->v.f[12] * c->v.f[10];
    c->v.f[7] = c->v.f[6] * c->v.f[2];
    c->v.f[15] = c->v.f[6] * c->v.f[13];
    c->v.f[9] = c->v.f[2] * c->v.f[10];
    c->v.f[11] = c->v.f[6] * c->v.f[12];
    c->v.f[0] = c->v.f[1] + c->v.f[14];
    c->v.f[1] = c->v.f[15] + c->v.f[1];
    c->v.f[2] = c->v.f[7] + c->v.f[5];
    c->v.f[6] = c->v.f[7] - c->v.f[5];
    c->v.f[5] = c->v.f[13] * c->v.f[10];
    c->v.f[7] = c->v.f[8] * c->v.f[12];
    c->v.f[14] = c->v.f[15] + c->v.f[14];
    c->v.f[4] = c->v.f[11] - c->v.f[9];
    c->v.f[10] = c->v.f[11] + c->v.f[9];
    c->v.f[0] = c->v.f[3] - c->v.f[0];
    c->v.f[8] = c->v.f[3] - c->v.f[14];
    c->v.f[12] = c->v.f[7] + c->v.f[5];
    c->v.f[14] = c->v.f[7] - c->v.f[5];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    ST32(c->r[13] + 32u, c->v.s[0]);
    ST32(c->r[13] + 36u, c->v.s[2]);
    ST32(c->r[13] + 40u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 48u, c->v.s[6]);
    ST32(c->r[13] + 52u, c->v.s[8]);
    ST32(c->r[13] + 56u, c->v.s[12]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 64u, c->v.s[10]);
    ST32(c->r[13] + 68u, c->v.s[14]);
    ST32(c->r[13] + 72u, c->v.s[1]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[7]); }
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xf0000000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x30000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb6078; }
    ST32(c->r[4] + 288u, c->v.s[0]);
    ST32(c->r[4] + 292u, c->v.s[2]);
    ST32(c->r[4] + 296u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[6]); }
    ST32(c->r[4] + 304u, c->v.s[6]);
    ST32(c->r[4] + 308u, c->v.s[8]);
    ST32(c->r[4] + 312u, c->v.s[12]);
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[6]); }
    ST32(c->r[4] + 320u, c->v.s[10]);
    ST32(c->r[4] + 324u, c->v.s[14]);
    ST32(c->r[4] + 328u, c->v.s[1]);
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[6]); }
    c->r[2] = c->r[4] + 0x40u;
    c->r[14] = c->r[4] + 0x150u;
    c->r[7] = 0x3u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    goto L_bb61f4;
L_bb5f98:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[3] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[3]); }
    c->v.s[6] = LD32(c->r[4] + 80u);
    c->v.s[8] = LD32(c->r[4] + 84u);
    c->v.s[0] = LD32(c->r[4] + 88u);
    c->v.s[10] = LD32(c->r[4] + 92u);
    c->v.f[12] = c->v.f[0] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[8];
    c->v.f[13] = c->v.f[6] + c->v.f[6];
    c->v.f[14] = c->v.f[0] * c->v.f[12];
    c->v.f[1] = c->v.f[8] * c->v.f[2];
    c->v.f[15] = c->v.f[6] * c->v.f[13];
    c->v.f[5] = c->v.f[12] * c->v.f[10];
    c->v.f[7] = c->v.f[6] * c->v.f[2];
    c->v.f[9] = c->v.f[2] * c->v.f[10];
    c->v.f[11] = c->v.f[6] * c->v.f[12];
    c->v.f[0] = c->v.f[1] + c->v.f[14];
    c->v.f[1] = c->v.f[15] + c->v.f[1];
    c->v.f[14] = c->v.f[15] + c->v.f[14];
    c->v.f[2] = c->v.f[7] + c->v.f[5];
    c->v.f[6] = c->v.f[7] - c->v.f[5];
    c->v.f[5] = c->v.f[13] * c->v.f[10];
    c->v.f[7] = c->v.f[8] * c->v.f[12];
    c->v.f[4] = c->v.f[11] - c->v.f[9];
    c->v.f[10] = c->v.f[11] + c->v.f[9];
    c->v.f[0] = c->v.f[3] - c->v.f[0];
    c->v.f[8] = c->v.f[3] - c->v.f[14];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.s[3] = 0x0u;
    c->v.f[12] = c->v.f[7] + c->v.f[5];
    c->v.f[14] = c->v.f[7] - c->v.f[5];
    c->v.s[5] = c->v.s[3];
    c->v.s[7] = c->v.s[3];
    ST32(c->r[4] + 288u, c->v.s[0]);
    ST32(c->r[4] + 292u, c->v.s[2]);
    ST32(c->r[4] + 296u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[3]); }
    ST32(c->r[4] + 304u, c->v.s[6]);
    ST32(c->r[4] + 308u, c->v.s[8]);
    ST32(c->r[4] + 312u, c->v.s[12]);
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[3]); }
    ST32(c->r[4] + 320u, c->v.s[10]);
    ST32(c->r[4] + 324u, c->v.s[14]);
    ST32(c->r[4] + 328u, c->v.s[1]);
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4] + 0x150u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[3]); }
    goto L_bb625c;
L_bb6078:;
    c->r[1] = c->r[4] + 0x110u;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_bb60a0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xbb6098u; rt_dispatch(c);
    c->r[2] = c->r[0];
    goto L_bb60a4;
L_bb60a0:;
    c->r[2] = c->r[0] + 0xb0u;
L_bb60a4:;
    c->r[0] = c->r[13] + 0x60u;
    c->r[1] = c->r[13] + 0x20u;
    c->r[14] = 0xbb60b0u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    c->r[8] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[7]); }
    c->r[8] = 0xf0000000u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & c->r[8];
    { uint32_t sc = 0; uint32_t r = c->r[7] ^ 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb6210; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[8]); }
    c->v.s[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[14]); }
    c->v.s[2] = c->r[14];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[12]); }
    c->v.s[4] = c->r[12];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[9]); }
    c->v.s[6] = c->r[9];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[10]); }
    c->v.s[8] = c->r[10];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[7]); }
    c->v.s[12] = c->r[7];
    c->r[7] = 0x2u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[3]); }
    c->v.s[10] = c->r[3];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[5]); }
    c->v.s[14] = c->r[5];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[6]); }
    c->v.s[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_bb61f4:;
    c->r[7] = c->r[4] + (c->r[7] << 4);
    { uint32_t ea = c->r[7] + 0x12cu; ST32(ea, c->r[3]); }
    c->v.s[7] = LD32(c->r[4] + 300u);
    c->v.s[5] = LD32(c->r[4] + 316u);
    c->v.s[3] = LD32(c->r[4] + 332u);
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bb625c;
L_bb6210:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[10] = c->r[12];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[5] = c->r[10];
    c->v.s[1] = c->r[6];
    c->v.s[14] = c->r[14];
    c->v.s[12] = c->r[9];
    c->v.s[8] = c->r[7];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[7] = c->r[5];
    c->v.s[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[4] = c->r[7];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[2] = c->r[7];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[0] = c->r[7];
L_bb625c:;
    c->v.s[9] = LD32(c->r[4] + 96u);
    c->r[5] = c->r[4] + 0xe0u;
    c->v.f[0] = c->v.f[9] * c->v.f[0];
    c->v.f[2] = c->v.f[9] * c->v.f[2];
    ST32(c->r[4] + 176u, c->v.s[0]);
    ST32(c->r[4] + 180u, c->v.s[2]);
    c->v.f[0] = c->v.f[9] * c->v.f[4];
    c->v.f[2] = c->v.f[9] * c->v.f[7];
    ST32(c->r[4] + 184u, c->v.s[0]);
    ST32(c->r[4] + 188u, c->v.s[2]);
    c->v.s[0] = LD32(c->r[4] + 100u);
    c->v.f[2] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[8];
    ST32(c->r[4] + 192u, c->v.s[2]);
    c->v.f[2] = c->v.f[0] * c->v.f[12];
    c->v.f[0] = c->v.f[0] * c->v.f[5];
    ST32(c->r[4] + 196u, c->v.s[4]);
    ST32(c->r[4] + 200u, c->v.s[2]);
    ST32(c->r[4] + 204u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 104u);
    c->v.f[2] = c->v.f[0] * c->v.f[10];
    c->v.f[4] = c->v.f[0] * c->v.f[14];
    ST32(c->r[4] + 208u, c->v.s[2]);
    c->v.f[2] = c->v.f[0] * c->v.f[1];
    c->v.f[0] = c->v.f[0] * c->v.f[3];
    ST32(c->r[4] + 212u, c->v.s[4]);
    ST32(c->r[4] + 216u, c->v.s[2]);
    ST32(c->r[4] + 220u, c->v.s[0]);
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x38u; ST16(ea, c->r[12]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb62e0(Cpu *restrict c) {
    FN_ENTER(0xbb62e0u);
L_bb62e0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[5] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbb6328u; rt_dispatch(c);
    c->r[0] = ~0x0u;
    c->v.s[14] = 0x3f800000u;
    c->r[3] = c->r[5] + 0x150u;
    c->r[12] = c->r[5] + 0xe0u;
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe82804u;
    { uint32_t ea = 0xbb6348u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x160u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x164u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[7]); }
    c->v.s[0] = LD32(c->r[5] + 80u);
    c->v.s[2] = LD32(c->r[5] + 84u);
    c->v.s[4] = LD32(c->r[5] + 88u);
    c->v.s[6] = LD32(c->r[5] + 92u);
    c->v.f[8] = c->v.f[4] + c->v.f[4];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[11] = c->v.f[0] + c->v.f[0];
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[5] = c->v.f[0] * c->v.f[10];
    c->v.f[7] = c->v.f[0] * c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[11];
    c->v.f[3] = c->v.f[8] * c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[6] = c->v.f[11] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[1] = c->v.f[12] + c->v.f[4];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[12];
    c->v.f[9] = c->v.f[5] + c->v.f[3];
    c->v.f[13] = c->v.f[7] - c->v.f[10];
    c->v.f[8] = c->v.f[2] + c->v.f[6];
    c->v.f[3] = c->v.f[5] - c->v.f[3];
    c->v.f[10] = c->v.f[7] + c->v.f[10];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.f[1] = c->v.f[14] - c->v.f[1];
    c->v.f[4] = c->v.f[14] - c->v.f[4];
    c->v.f[0] = c->v.f[14] - c->v.f[0];
    c->v.s[14] = 0x0u;
    ST32(c->r[5] + 288u, c->v.s[1]);
    ST32(c->r[5] + 292u, c->v.s[9]);
    ST32(c->r[5] + 296u, c->v.s[13]);
    { uint32_t ea = c->r[5] + 0x12cu; ST32(ea, c->r[7]); }
    ST32(c->r[5] + 304u, c->v.s[3]);
    ST32(c->r[5] + 308u, c->v.s[4]);
    ST32(c->r[5] + 312u, c->v.s[8]);
    { uint32_t ea = c->r[5] + 0x13cu; ST32(ea, c->r[7]); }
    ST32(c->r[5] + 320u, c->v.s[10]);
    ST32(c->r[5] + 324u, c->v.s[2]);
    ST32(c->r[5] + 328u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x14cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[5] + 0x15cu; ST32(ea, c->r[3]); }
    c->v.s[6] = LD32(c->r[5] + 96u);
    c->v.f[12] = c->v.f[6] * c->v.f[1];
    c->v.f[1] = c->v.f[6] * c->v.f[9];
    ST32(c->r[5] + 176u, c->v.s[12]);
    c->v.f[12] = c->v.f[6] * c->v.f[13];
    c->v.f[6] = c->v.f[6] * c->v.f[14];
    ST32(c->r[5] + 180u, c->v.s[1]);
    ST32(c->r[5] + 184u, c->v.s[12]);
    ST32(c->r[5] + 188u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[5] + 100u);
    c->v.f[12] = c->v.f[6] * c->v.f[3];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[8] = c->v.f[6] * c->v.f[8];
    ST32(c->r[5] + 192u, c->v.s[12]);
    ST32(c->r[5] + 196u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] * c->v.f[14];
    ST32(c->r[5] + 200u, c->v.s[8]);
    ST32(c->r[5] + 204u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[5] + 104u);
    c->v.f[6] = c->v.f[4] * c->v.f[10];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    ST32(c->r[5] + 208u, c->v.s[6]);
    ST32(c->r[5] + 212u, c->v.s[2]);
    c->v.f[2] = c->v.f[4] * c->v.f[14];
    ST32(c->r[5] + 216u, c->v.s[0]);
    ST32(c->r[5] + 220u, c->v.s[2]);
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x38u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bb64ac(Cpu *restrict c) {
    FN_ENTER(0xbb64acu);
L_bb64ac:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[5] + 0x134u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x138u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5] + 0x13cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x140u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x144u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[5] + 0x148u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x14cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x150u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x15cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0xb0u; ST32(ea, c->r[10]); c->r[5] = ea; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[5] + 0x20u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[5] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] - 0x60u;
    { uint32_t ea = c->r[5] + 0xbcu; ST32(ea, c->r[6]); }
    c->r[14] = 0xbb65d4u; f_272ea8(c);
    c->v.s[0] = LD32(c->r[5] + 176u);
    c->v.s[2] = LD32(c->r[5] + 180u);
    c->v.s[12] = LD32(c->r[5] + 20u);
    c->v.s[1] = LD32(c->r[5] + 16u);
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5]);
    c->v.s[14] = LD32(c->r[5] + 24u);
    c->v.s[4] = LD32(c->r[5] + 184u);
    c->v.s[3] = LD32(c->r[5] + 36u);
    c->v.s[5] = LD32(c->r[5] + 40u);
    c->v.s[7] = LD32(c->r[5] + 32u);
    c->v.f[1] = c->v.f[1] * c->v.f[2];
    c->v.f[12] = c->v.f[2] * c->v.f[12];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[5] + 48u);
    c->v.f[2] = c->v.f[2] * c->v.f[14];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.s[6] = LD32(c->r[5] + 52u);
    c->v.s[0] = LD32(c->r[5] + 56u);
    { uint32_t ea = c->r[5] - 0x64u; ST32(ea, c->r[6]); }
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[7] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[5]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[3]);
    c->v.f[8] = c->v.f[10] + c->v.f[1];
    c->v.f[4] = c->v.f[6] + c->v.f[12];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[5] - 112u, c->v.s[8]);
    ST32(c->r[5] - 108u, c->v.s[4]);
    ST32(c->r[5] - 104u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x78u; ST16(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb6660(Cpu *restrict c) {
    FN_ENTER(0xbb6660u);
L_bb6660:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe83520u;
    { uint32_t ea = 0xbb668cu + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xbb6690u; f_bb5df0(c);
    c->r[2] = c->r[5] + 0x110u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[5] + 0x110u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & 0xf0ffffffu;
    { uint32_t ea = c->r[5] + 0x118u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    c->r[0] = c->r[1] | (c->r[0] << 24);
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[5] + 0x114u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_bb59bc(c);
}
void f_bb66cc(Cpu *restrict c) {
    FN_ENTER(0xbb66ccu);
L_bb66cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xe834c8u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xbb66e4u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xbb66e8u; f_bb62e0(c);
    c->r[2] = c->r[5] + 0x110u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[5] + 0x110u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & 0xf0ffffffu;
    { uint32_t ea = c->r[5] + 0x118u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    c->r[0] = c->r[1] | (c->r[0] << 24);
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[5] + 0x114u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_bb59bc(c);
}
void f_bb6720(Cpu *restrict c) {
    FN_ENTER(0xbb6720u);
L_bb6720:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_bb6734; }
    c->r[12] = 0x300u;
    goto L_bb6754;
L_bb6734:;
    c->r[2] = 0xe8c394u;
    { uint32_t ea = 0xbb6740u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x15cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { c->r[1] = c->r[2]; }
    c->r[1] = c->r[1] & 0xfu;
    c->r[12] = (c->r[1] << 8);
L_bb6754:;
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x0u;
    c->r[2] = c->r[2] & 0xfffff0ffu;
    c->r[3] = c->r[3] | c->r[14];
    c->r[1] = c->r[1] | c->r[14];
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[2] | c->r[12];
    { uint32_t ea = c->r[0] + 0x118u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb6788(Cpu *restrict c) {
    FN_ENTER(0xbb6788u);
L_bb6788:;
    return;
}
void f_bb678c(Cpu *restrict c) {
    FN_ENTER(0xbb678cu);
L_bb678c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bb6798(Cpu *restrict c) {
    FN_ENTER(0xbb6798u);
L_bb6798:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb67b8; }
    c->r[14] = 0xbb67b0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
L_bb67b8:;
    c->r[0] = 0x0u;
    c->r[2] = c->r[4] + 0x110u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0xffff0000u;
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] & ~0xa000000u;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb67e0(Cpu *restrict c) {
    FN_ENTER(0xbb67e0u);
L_bb67e0:;
    return;
}
void f_bb67e4(Cpu *restrict c) {
    FN_ENTER(0xbb67e4u);
L_bb67e4:;
    { uint32_t ea = c->r[1] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD32(ea); c->r[12] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[12], 0x0u); }
    if (COND_EQ) { goto L_bb680c; }
    { uint32_t ea = c->r[1] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = f_adds(c, c->r[1], c->r[12]);
    if (COND_NE) { { uint32_t ea = c->r[12]; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_bb6818; }
L_bb680c:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
L_bb6818:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = (c->r[1] >> 8) & 0xffu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = (c->r[1] >> 8);
    c->r[3] = (c->r[4] >> 8) & 0xffu;
    c->r[14] = c->r[3] - c->r[14];
    { uint32_t ea = c->r[12] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[14]; c->r[12] = r; }
    c->r[14] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[2] = c->r[12] + (c->r[2] << 8);
    c->r[12] = c->r[2] & 0xff00u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[2] = c->r[2] - c->r[14];
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[1] + (c->r[2] >> 8);
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[12] = c->r[2] | c->r[12];
    c->r[2] = (c->r[4] >> 24);
    c->r[2] = c->r[2] - (c->r[1] >> 24);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[2] = (c->r[2] >> 8);
    c->r[2] = c->r[2] + (c->r[1] >> 24);
    c->r[12] = c->r[12] | (c->r[2] << 24);
    c->r[2] = (c->r[1] >> 16) & 0xffu;
    c->r[4] = (c->r[4] >> 16) & 0xffu;
    c->r[2] = c->r[4] - c->r[2];
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[2] = (c->r[2] >> 8);
    c->r[1] = c->r[2] + (c->r[1] >> 16);
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    c->r[1] = c->r[12] | c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb68a4(Cpu *restrict c) {
    FN_ENTER(0xbb68a4u);
L_bb68a4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->r[12] = c->r[2] & (c->r[3] >> 22);
    c->r[2] = 0x100u;
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0xc00000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    c->r[2] = c->r[2] & (c->r[3] << 6);
    if (COND_NE) { c->r[4] = 0x20000u; }
    c->r[5] = c->r[4];
    c->r[12] = c->r[2] | c->r[12];
    c->r[2] = 0x2u;
    c->r[2] = c->r[2] & (c->r[3] >> 4);
    c->r[12] = c->r[12] | c->r[2];
    c->r[2] = 0x8u;
    c->r[2] = c->r[2] & (c->r[3] >> 4);
    c->r[12] = c->r[12] | c->r[2];
    c->r[2] = 0x40000u;
    c->r[2] = c->r[2] & (c->r[3] << 5);
    c->r[12] = c->r[12] | c->r[2];
    c->r[2] = 0x4000000u;
    c->r[2] = c->r[2] & (c->r[3] >> 1);
    c->r[14] = c->r[12] | c->r[2];
    { uint32_t ea = c->r[0] + 0xf0u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = (c->r[3] >> 12);
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = (c->r[5] & 0xffffefffu) | ((c->r[2] << 12) & 0x1000u);
    { uint32_t sc = 0; uint32_t r = c->r[12] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[5] = c->r[4] | 0x1000u; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[2] = c->r[14] | c->r[5];
    if (COND_LT) { c->r[2] = c->r[2] | 0x4u; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb6950; }
    c->r[0] = 0x10u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x60000000u;
    { uint32_t r = c->r[3] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb6958; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb69c0; }
    c->r[0] = 0x2000000u;
    c->r[0] = c->r[0] & (c->r[3] >> 5);
    c->r[0] = c->r[0] | 0x1u;
    goto L_bb69c8;
L_bb6950:;
    c->r[0] = c->r[2] | 0x20u;
    goto L_bb69e4;
L_bb6958:;
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb6a18; }
    c->r[14] = 0x200u;
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x1000000u;
    if (COND_NE) { goto L_bb6a3c; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb6a5c; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb6a80; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[12] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[14] = (c->r[0] >> 16) & 0xffu;
    if (COND_NE) { goto L_bb6a8c; }
    c->r[5] = 0x0u;
    c->r[0] = c->r[5] - (c->r[0] >> 24);
    (void)f_subs(c, c->r[14], c->r[0]);
    if (COND_EQ) { goto L_bb6a8c; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb6a94; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb6a9c; }
    { uint32_t r = c->r[3] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = c->r[2] | 0x200u; }
    if (COND_NE) { c->r[0] = c->r[2] | 0x100000u; }
    goto L_bb69e4;
L_bb69c0:;
    c->r[0] = 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x1000000u;
L_bb69c8:;
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    (void)f_adds(c, c->r[3], (c->r[2] >> 24));
    if (COND_NE) { c->r[2] = 0x200u; }
    if (COND_NE) { c->r[2] = c->r[2] & ~(c->r[12] << 1); }
    if (COND_NE) { c->r[0] = c->r[2] | c->r[0]; }
L_bb69e4:;
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0xffffu;
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb6a14; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[3] = c->r[1] + (uint32_t)(uint16_t)(c->r[2]); }
    c->r[2] = 0x40000000u;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[2] = 0x20000000u; }
    c->r[0] = c->r[2] | c->r[0];
L_bb6a14:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_bb6a18:;
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[2] | 0x200000u;
    c->r[5] = (c->r[3] >> 16) & 0xffu;
    (void)f_adds(c, c->r[5], (c->r[3] >> 24));
    if (COND_EQ) { goto L_bb69e4; }
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t sc = 0; uint32_t r = c->r[12] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = c->r[2] | 0x200000u; }
    goto L_bb69e4;
L_bb6a3c:;
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[2] | 0x1000000u;
    c->r[4] = (c->r[3] >> 16) & 0xffu;
    (void)f_adds(c, c->r[4], (c->r[3] >> 24));
    if (COND_EQ) { goto L_bb69e4; }
    { uint32_t sc = 0; uint32_t r = c->r[12] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = c->r[2] | c->r[14]; }
    goto L_bb69e4;
L_bb6a5c:;
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[2] | 0x2000000u;
    c->r[4] = (c->r[3] >> 16) & 0xffu;
    (void)f_adds(c, c->r[4], (c->r[3] >> 24));
    if (COND_EQ) { goto L_bb69e4; }
    c->r[3] = c->r[14] + 0x1000000u;
    { uint32_t sc = 0; uint32_t r = c->r[12] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = c->r[2] | c->r[3]; }
    goto L_bb69e4;
L_bb6a80:;
    c->r[0] = c->r[2] | 0x1u;
    c->r[0] = c->r[0] | 0x200000u;
    goto L_bb69e4;
L_bb6a8c:;
    c->r[0] = c->r[2];
    goto L_bb69e4;
L_bb6a94:;
    c->r[0] = c->r[2] | 0x800u;
    goto L_bb69e4;
L_bb6a9c:;
    c->r[0] = c->r[2] | 0x400u;
    goto L_bb69e4;
}
void f_bb6aa4(Cpu *restrict c) {
    FN_ENTER(0xbb6aa4u);
L_bb6aa4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = 0x4u;
    c->r[1] = (c->r[1] << 5);
    c->r[3] = c->r[3] & (c->r[2] >> 10);
    c->r[2] = (c->r[2] >> 8) & 0x3u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[1] = (c->r[1] & 0xFFFFu) | ((c->r[2] << 26) & 0xFFFF0000u);
    c->r[2] = 0x1fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3ff0000u;
    c->r[2] = c->r[12] & c->r[2];
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_bb6adc(Cpu *restrict c) {
    FN_ENTER(0xbb6adcu);
L_bb6adc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[4] = v; c->r[5] = v2; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); ST32(ea + 4, c->r[5]); }
    if (COND_NE) { c->r[4] = c->r[4] | 0x8000000u; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[4] = c->r[4] | 0x4000000u; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = c->r[4] | 0x10000000u; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb6b10(Cpu *restrict c) {
    FN_ENTER(0xbb6b10u);
L_bb6b10:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[9]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x58u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->v.s[4] = 0x0u;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_bb6b78; }
    c->r[1] = (c->r[1] << 2);
    c->r[7] = 0xbb6b3cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[7]; switch (c->pc) { case 0xbb6b68u: goto L_bb6b68; case 0xbb6b88u: goto L_bb6b88; case 0xbb6b9cu: goto L_bb6b9c; case 0xbb6bb0u: goto L_bb6bb0; case 0xbb6bc0u: goto L_bb6bc0; case 0xbb6bd4u: goto L_bb6bd4; case 0xbb6becu: goto L_bb6bec; case 0xbb6c00u: goto L_bb6c00; case 0xbb6c10u: goto L_bb6c10; case 0xbb6c2cu: goto L_bb6c2c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bb6b68:;
    c->v.s[2] = c->v.s[1] ^ 0x80000000u;
    c->v.s[4] = c->v.s[0] ^ 0x80000000u;
    c->v.s[6] = c->v.s[1];
    goto L_bb6cc8;
L_bb6b78:;
    c->v.s[0] = c->v.s[4];
    c->v.s[6] = c->v.s[4];
    c->v.s[2] = c->v.s[4];
    goto L_bb6cc8;
L_bb6b88:;
    c->v.s[2] = 0xc0000000u;
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->v.s[6] = c->v.s[4];
    c->v.f[2] = c->v.f[1] * c->v.f[2];
    goto L_bb6cc8;
L_bb6b9c:;
    c->v.s[6] = 0xc0000000u;
    c->v.f[8] = c->v.f[0] * c->v.f[6];
    c->v.f[2] = c->v.f[1] * c->v.f[6];
    c->v.s[0] = c->v.s[4];
    goto L_bb6be0;
L_bb6bb0:;
    c->v.f[6] = c->v.f[1] + c->v.f[1];
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->v.s[2] = c->v.s[4];
    goto L_bb6cc8;
L_bb6bc0:;
    c->v.s[2] = 0xc0000000u;
    c->v.f[6] = c->v.f[1] + c->v.f[1];
    c->v.f[8] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = c->v.s[4];
    goto L_bb6bf4;
L_bb6bd4:;
    c->v.s[2] = 0xc0000000u;
    c->v.s[8] = c->v.s[0] ^ 0x80000000u;
    c->v.f[2] = c->v.f[1] * c->v.f[2];
L_bb6be0:;
    c->v.s[6] = c->v.s[4];
    c->v.s[4] = c->v.s[8];
    goto L_bb6cc8;
L_bb6bec:;
    c->v.f[6] = c->v.f[1] + c->v.f[1];
    c->v.s[8] = c->v.s[0] ^ 0x80000000u;
L_bb6bf4:;
    c->v.s[2] = c->v.s[4];
    c->v.s[4] = c->v.s[8];
    goto L_bb6cc8;
L_bb6c00:;
    c->v.s[2] = c->v.s[1] ^ 0x80000000u;
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->v.s[6] = c->v.s[1];
    goto L_bb6cc8;
L_bb6c10:;
    c->v.s[6] = 0xc0000000u;
    c->v.s[2] = c->v.s[1] ^ 0x80000000u;
    c->v.f[8] = c->v.f[0] * c->v.f[6];
    c->v.s[0] = c->v.s[4];
    c->v.s[6] = c->v.s[1];
    c->v.s[4] = c->v.s[8];
    goto L_bb6cc8;
L_bb6c2c:;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bb6c74; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->v.s[2] = LD32(c->r[3]);
    c->v.s[4] = LD32(c->r[3] + 4u);
    c->v.s[6] = c->r[1];
    c->v.s[8] = c->r[7];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[4] = c->v.f[4] / c->v.f[6];
    c->v.f[6] = c->v.f[2] / c->v.f[8];
    c->v.f[2] = c->v.f[4] + c->v.f[4];
    c->v.f[4] = c->v.f[6] + c->v.f[6];
    goto L_bb6c7c;
L_bb6c74:;
    c->v.s[4] = 0x3f800000u;
    c->v.s[2] = c->v.s[4];
L_bb6c7c:;
    c->v.s[6] = 0x40000000u;
    { uint32_t sc = 0; uint32_t r = c->r[12] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[12] & 0x1000u;
    c->v.f[8] = c->v.f[6] - c->v.f[4];
    c->v.f[10] = c->v.f[6] - c->v.f[2];
    c->v.s[4] = COND_EQ ? c->v.s[4] : c->v.s[8];
    { uint32_t sc = 0; uint32_t r = c->r[12] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->v.s[2] = COND_EQ ? c->v.s[2] : c->v.s[10];
    (void)f_subs(c, c->r[1], 0x0u);
    c->v.s[10] = 0xc0000000u;
    c->v.f[8] = c->v.f[6] - c->v.f[4];
    c->v.s[4] = COND_EQ ? c->v.s[4] : c->v.s[2];
    c->v.s[2] = COND_EQ ? c->v.s[2] : c->v.s[8];
    c->v.f[8] = c->v.f[6] - c->v.f[4];
    c->v.f[4] = -(float)(c->v.f[4] * c->v.f[0]);
    c->v.f[10] = c->v.f[2] + c->v.f[10];
    c->v.f[6] = c->v.f[2] * c->v.f[1];
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    c->v.f[2] = c->v.f[10] * c->v.f[1];
L_bb6cc8:;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x6u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    if (COND_HI) { goto L_bb6d60; }
    c->r[1] = (c->r[2] << 2);
    c->r[2] = 0xbb6cf0u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0xbb6d10u: goto L_bb6d10; case 0xbb6db8u: goto L_bb6db8; case 0xbb6e0cu: goto L_bb6e0c; case 0xbb6e58u: goto L_bb6e58; case 0xbb6eb0u: goto L_bb6eb0; case 0xbb6f08u: goto L_bb6f08; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bb6d10:;
    c->r[1] = c->r[13] + 0x10u;
    c->r[4] = 0x0u;
    ST32(c->r[13] + 16u, c->v.s[4]);
    ST32(c->r[13] + 20u, c->v.s[6]);
    c->v.s[10] = c->v.s[6];
    c->v.s[8] = c->v.s[4];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 32u, c->v.s[0]);
    ST32(c->r[13] + 36u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 48u, c->v.s[4]);
    ST32(c->r[13] + 52u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    c->r[3] = c->r[1] + 0x30u;
    goto L_bb6f58;
L_bb6d60:;
    c->r[2] = 0xe81de0u;
    { uint32_t ea = 0xbb6d6cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[13] + 0x2cu;
    c->v.s[8] = c->r[3];
    c->v.s[10] = c->r[7];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    goto L_bb6f58;
L_bb6db8:;
    c->v.s[8] = 0x0u;
    c->r[1] = 0x0u;
    c->r[4] = c->v.s[2];
    c->v.s[10] = c->v.s[4];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 20u, c->v.s[4]);
    ST32(c->r[13] + 24u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 36u, c->v.s[0]);
    ST32(c->r[13] + 40u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 52u, c->v.s[4]);
    ST32(c->r[13] + 56u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x10u;
    ST32(c->r[13] + 68u, c->v.s[0]);
    c->r[3] = c->r[1] + 0x30u;
    goto L_bb6f58;
L_bb6e0c:;
    c->v.s[8] = 0x0u;
    c->v.s[10] = c->v.s[4] ^ 0x80000000u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 20u, c->v.s[10]);
    ST32(c->r[13] + 24u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 36u, c->v.s[0]);
    ST32(c->r[13] + 40u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 52u, c->v.s[10]);
    ST32(c->r[13] + 56u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 68u, c->v.s[0]);
    goto L_bb6ea0;
L_bb6e58:;
    c->v.s[10] = 0x0u;
    c->v.s[8] = c->v.s[4] ^ 0x80000000u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[1] = 0x0u;
    ST32(c->r[13] + 16u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 24u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 40u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 48u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 56u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 64u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
L_bb6ea0:;
    c->r[1] = c->r[13] + 0x10u;
    c->r[4] = c->v.s[2];
    c->r[3] = c->r[1] + 0x30u;
    goto L_bb6f58;
L_bb6eb0:;
    c->v.s[10] = 0x0u;
    c->r[1] = 0x0u;
    ST32(c->r[13] + 16u, c->v.s[4]);
    c->r[4] = c->v.s[2];
    c->v.s[8] = c->v.s[4];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 24u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 40u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 48u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 56u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 64u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x10u;
    c->r[3] = c->r[1] + 0x30u;
    goto L_bb6f58;
L_bb6f08:;
    c->v.s[8] = c->v.s[4] ^ 0x80000000u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[1] = c->r[13] + 0x10u;
    c->r[4] = 0x0u;
    c->v.s[10] = c->v.s[6];
    c->r[3] = c->r[1] + 0x30u;
    ST32(c->r[13] + 16u, c->v.s[8]);
    ST32(c->r[13] + 20u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 32u, c->v.s[0]);
    ST32(c->r[13] + 36u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 48u, c->v.s[8]);
    ST32(c->r[13] + 52u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
L_bb6f58:;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[4]); }
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[9]); }
    c->r[3] = c->r[12] & 0x1000u;
    c->r[7] = (c->r[12] >> 12) & 0x1u;
    c->r[12] = c->r[13] + 0x10u;
    c->r[5] = c->r[5] | (c->r[3] >> 11);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[5] = 0x2u;
    c->r[5] = c->r[5] ^ (c->r[3] >> 11);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[5] = 0x3u;
    c->r[3] = c->r[5] ^ (c->r[3] >> 12);
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13];
    c->r[3] = c->r[3] + 0x4u;
    goto L_bb6fc4;
L_bb6fb0:;
    c->v.s[8] = LD32(c->r[4] + 16u);
    c->v.s[10] = LD32(c->r[4] + 20u);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[7] = v; }
    c->r[5] = c->r[5] + 0x10u;
    c->r[2] = c->r[2] + 0x4u;
L_bb6fc4:;
    c->v.s[0] = LD32(c->r[2]);
    c->r[4] = c->r[12] + c->r[5];
    c->r[7] = c->r[0] + (c->r[7] << 4);
    (void)f_subs(c, c->r[5], 0x30u);
    c->v.f[2] = c->v.f[0] * c->v.f[8];
    c->v.f[4] = c->v.f[0] * c->v.f[10];
    ST32(c->r[4], c->v.s[2]);
    ST32(c->r[4] + 4u, c->v.s[4]);
    c->v.s[6] = LD32(c->r[4] + 8u);
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    ST32(c->r[4] + 8u, c->v.s[0]);
    c->v.s[12] = LD32(c->r[1] + 20u);
    c->v.s[1] = LD32(c->r[1] + 16u);
    c->v.s[6] = LD32(c->r[1] + 4u);
    c->v.s[8] = LD32(c->r[1] + 8u);
    c->v.s[10] = LD32(c->r[1]);
    c->v.s[14] = LD32(c->r[1] + 24u);
    c->v.s[3] = LD32(c->r[1] + 36u);
    c->v.s[5] = LD32(c->r[1] + 40u);
    c->v.s[7] = LD32(c->r[1] + 32u);
    c->v.f[1] = c->v.f[1] * c->v.f[4];
    c->v.f[12] = c->v.f[4] * c->v.f[12];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.s[6] = LD32(c->r[1] + 48u);
    c->v.f[4] = c->v.f[4] * c->v.f[14];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[10] = LD32(c->r[1] + 52u);
    c->v.s[14] = LD32(c->r[1] + 56u);
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[9]); }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[5]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[7]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[3]);
    c->v.f[2] = c->v.f[6] + c->v.f[1];
    c->v.f[0] = c->v.f[10] + c->v.f[12];
    c->v.f[4] = c->v.f[14] + c->v.f[4];
    ST32(c->r[7], c->v.s[2]);
    ST32(c->r[7] + 4u, c->v.s[0]);
    ST32(c->r[7] + 8u, c->v.s[4]);
    if (COND_NE) { goto L_bb6fb0; }
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[9] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bb7074(Cpu *restrict c) {
    FN_ENTER(0xbb7074u);
L_bb7074:;
    { uint32_t ea = c->r[0] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xffccu;
    c->r[3] = c->r[0] + 0x110u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe0ff0000u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x104u; ST32(ea, c->r[1]); }
    c->r[1] = 0x100u;
    { uint32_t ea = c->r[0] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[1] = c->r[1] & 0xffff0000u;
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] & 0xfdffffffu;
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x118u; ST32(ea, c->r[3]); }
    return;
}
void f_bb70c4(Cpu *restrict c) {
    FN_ENTER(0xbb70c4u);
L_bb70c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[1] & 0xffffffdfu;
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_bb70f0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbb70e8u; rt_dispatch(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_bb70f0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1u;
    c->pc = c->r[2]; c->r[14] = 0xbb7100u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb7108(Cpu *restrict c) {
    FN_ENTER(0xbb7108u);
L_bb7108:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe8b9a8u;
    c->v.s[0] = LD32(c->r[4] + 28u);
    c->v.s[2] = LD32(c->r[4] + 256u);
    c->v.s[16] = LD32(c->r[4] + 248u);
    { uint32_t ea = 0xbb712cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[18] = c->v.f[2] * c->v.f[0];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb7134u; f_d91f6c(c);
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    ST32(c->r[4] + 252u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb714c(Cpu *restrict c) {
    FN_ENTER(0xbb714cu);
L_bb714c:;
    c->r[0] = 0x1u;
    return;
}
void f_bb7154(Cpu *restrict c) {
    FN_ENTER(0xbb7154u);
L_bb7154:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x4u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x110u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[5] + 4u; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[1] = c->r[7];
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = (c->r[1] & 0xfffffffu) | ((c->r[0] << 28) & 0xf0000000u);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    if (COND_NE) { { uint32_t sc = 0; uint32_t r = c->r[7] & 0xf00000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_EQ) { goto L_bb742c; }
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[1] = f_adds(c, c->r[1], c->r[2]); }
    if (COND_EQ) { goto L_bb742c; }
    c->r[0] = 0xe820acu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0xbb71b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[6] >> 16) & 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_bb71e8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0xbb71d4u; f_bb7450(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bb7354; }
    c->r[0] = 0xe82074u;
    { uint32_t ea = 0xbb71e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb71e8:;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = (c->r[6] >> 16);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[6] & 0x2u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_EQ) { goto L_bb7220; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0xbb7208u; f_bb7450(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bb7354; }
    c->r[0] = 0xe8203cu;
    { uint32_t ea = 0xbb7220u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb7220:;
    { uint32_t ea = c->r[0] + 0x3b4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[6] & 0x4u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_EQ) { goto L_bb7254; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0xbb723cu; f_bb7450(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bb7354; }
    c->r[0] = 0xe82008u;
    { uint32_t ea = 0xbb7254u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb7254:;
    { uint32_t ea = c->r[0] + 0x564u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[6] & 0x8u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_EQ) { goto L_bb7288; }
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0xbb7270u; f_bb7450(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bb7354; }
    c->r[0] = 0xe81fd4u;
    { uint32_t ea = 0xbb7288u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb7288:;
    { uint32_t ea = c->r[0] + 0x714u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[6] & 0x10u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_EQ) { goto L_bb72bc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0xbb72a4u; f_bb7450(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bb7354; }
    c->r[0] = 0xe81fa0u;
    { uint32_t ea = 0xbb72bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb72bc:;
    { uint32_t ea = c->r[0] + 0x8c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[6] & 0x20u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_EQ) { goto L_bb72f0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0xbb72d8u; f_bb7450(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bb7354; }
    c->r[0] = 0xe81f6cu;
    { uint32_t ea = 0xbb72f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb72f0:;
    { uint32_t ea = c->r[0] + 0xa74u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[6] & 0x40u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_EQ) { goto L_bb7324; }
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0xbb730cu; f_bb7450(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bb7354; }
    c->r[0] = 0xe81f38u;
    { uint32_t ea = 0xbb7324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb7324:;
    { uint32_t ea = c->r[0] + 0xc24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_bb7350; }
    c->r[0] = c->r[4];
    c->r[1] = 0x7u;
    c->r[14] = 0xbb7340u; f_bb7450(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[7] = 0x1u; }
    goto L_bb7354;
L_bb7350:;
    c->r[7] = 0x1u;
L_bb7354:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = ~0xf0000000u;
    c->r[2] = ~0x0u;
    c->r[4] = (c->r[1] >> 20) & 0xfu;
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_EQ) { goto L_bb73b0; }
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_EQ) { goto L_bb73dc; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_bb7410; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_bb7408; }
    c->r[0] = c->r[1] & c->r[0];
    c->r[7] = c->r[6] & c->r[2];
    c->r[2] = c->r[3] & c->r[2];
    c->r[0] = c->r[0] | 0x10000000u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_bb73b0:;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_bb7408; }
    c->r[0] = c->r[1] & c->r[0];
    c->r[7] = c->r[6] & c->r[2];
    c->r[2] = c->r[3] & c->r[2];
    c->r[0] = c->r[0] | 0x30000000u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_bb73dc:;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_bb7408; }
    c->r[0] = c->r[1] & c->r[0];
    c->r[7] = c->r[6] & c->r[2];
    c->r[2] = c->r[3] & c->r[2];
    c->r[0] = c->r[0] | 0x20000000u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_bb7408:;
    c->r[0] = (c->r[1] >> 28);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_bb7410:;
    c->r[7] = c->r[6] & c->r[2];
    c->r[2] = c->r[3] & c->r[2];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_bb742c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bb7450(Cpu *restrict c) {
    FN_ENTER(0xbb7450u);
L_bb7450:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->r[8] = c->r[1];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[6] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bb7490; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[2] = c->r[3];
    goto L_bb7498;
L_bb7490:;
    c->r[3] = 0x0u;
    c->r[2] = 0x0u;
L_bb7498:;
    c->r[5] = c->r[2];
    c->r[7] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & c->r[7]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[7] = c->r[3] + (uint32_t)(uint16_t)(c->r[1]); }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_bb76f0; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb755c; }
    c->v.s[0] = LD32(c->r[6] + 292u);
    c->v.s[8] = LD32(c->r[6] + 308u);
    c->v.s[6] = LD32(c->r[6] + 304u);
    c->v.s[14] = LD32(c->r[6] + 288u);
    c->v.s[2] = LD32(c->r[6] + 296u);
    c->v.s[10] = LD32(c->r[6] + 312u);
    c->v.s[3] = LD32(c->r[6] + 324u);
    c->v.s[1] = LD32(c->r[6] + 320u);
    c->v.s[4] = LD32(c->r[6] + 300u);
    c->v.s[12] = LD32(c->r[6] + 316u);
    c->v.s[5] = LD32(c->r[6] + 328u);
    c->v.s[7] = LD32(c->r[6] + 332u);
    c->v.f[8] = c->v.f[8] * c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[14]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[3] = c->v.f[3] * c->v.f[3];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[12]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[5] * c->v.f[5]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[8]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[7] * c->v.f[7]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[0] : c->v.s[8];
    vfp_cmp_f(c, c->v.f[3], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[3] : c->v.s[0];
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bb7554; }
    c->r[14] = 0xbb7550u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_bb7554:;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    goto L_bb7580;
L_bb755c:;
    c->v.s[0] = LD32(c->r[6] + 96u);
    c->v.s[2] = LD32(c->r[6] + 100u);
    c->v.s[4] = LD32(c->r[6] + 104u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[0] : c->v.s[2];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[16] = COND_GT ? c->v.s[4] : c->v.s[0];
L_bb7580:;
    c->r[0] = (c->r[0] >> 20);
    c->r[5] = c->r[0] | (c->r[1] << 12);
    { uint32_t r = c->r[5] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb75f4; }
    c->r[0] = 0xe81cbcu;
    c->r[1] = 0x1b0u;
    { uint32_t ea = 0xbb75a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[8] * c->r[1] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb75f4; }
    c->v.s[0] = LD32(c->r[0] + 112u);
    c->v.s[6] = LD32(c->r[6] + 64u);
    c->v.s[2] = LD32(c->r[0] + 116u);
    c->v.s[8] = LD32(c->r[6] + 68u);
    c->v.s[4] = LD32(c->r[0] + 120u);
    c->v.s[10] = LD32(c->r[6] + 72u);
    c->r[1] = 0x1u;
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    c->v.s[6] = LD32(c->r[7] + 36u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bb76dc; }
L_bb75f4:;
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb7644; }
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xe81c44u;
    c->v.s[0] = LD32(c->r[7] + 32u);
    c->r[2] = c->r[13];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xbb7618u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    ST32(c->r[13] + 12u, c->v.s[0]);
    c->r[14] = 0xbb7638u; f_d8b6f0(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bb76dc; }
L_bb7644:;
    { uint32_t r = c->r[5] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb76e4; }
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[7] + 16u);
    c->v.s[2] = LD32(c->r[7] + 20u);
    c->v.s[4] = LD32(c->r[7] + 24u);
    c->v.s[6] = LD32(c->r[7] + 4u);
    c->v.s[8] = LD32(c->r[7] + 8u);
    c->v.s[10] = LD32(c->r[7]);
    c->r[2] = c->r[13];
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe81bd4u;
    c->v.s[12] = LD32(c->r[6] + 64u);
    { uint32_t ea = 0xbb7688u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[14] = c->v.s[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[16] * c->v.f[0]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[16] * c->v.f[10]);
    ST32(c->r[13], c->v.s[14]);
    c->v.s[10] = LD32(c->r[6] + 68u);
    c->v.s[14] = c->v.s[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[16] * c->v.f[6]);
    ST32(c->r[13] + 4u, c->v.s[14]);
    c->v.s[6] = LD32(c->r[6] + 72u);
    c->v.s[14] = c->v.s[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[16] * c->v.f[8]);
    ST32(c->r[13] + 8u, c->v.s[14]);
    ST32(c->r[13] + 16u, c->v.s[12]);
    ST32(c->r[13] + 20u, c->v.s[10]);
    ST32(c->r[13] + 24u, c->v.s[6]);
    c->r[14] = 0xbb76d0u; f_d8b84c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb76e4; }
    c->r[1] = c->r[0] ^ 0x1u;
L_bb76dc:;
    c->r[4] = c->r[1];
    goto L_bb76f0;
L_bb76e4:;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[5] & 0x3u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[4] = c->r[1]; }
L_bb76f0:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bb770c(Cpu *restrict c) {
    FN_ENTER(0xbb770cu);
L_bb770c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[5] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = c->r[0] & 0xf00000u; }
    if (COND_NE) { { uint32_t sc = 0; uint32_t r = c->r[0] ^ 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bb797c; }
    { uint32_t ea = c->r[5] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[2] = f_adds(c, c->r[0], c->r[1]); }
    if (COND_EQ) { goto L_bb797c; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[7] = c->r[2] + (uint32_t)(uint16_t)(c->r[0]); }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_bb797c; }
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb7824; }
    c->v.s[0] = LD32(c->r[5] + 292u);
    c->v.s[8] = LD32(c->r[5] + 308u);
    c->v.s[6] = LD32(c->r[5] + 304u);
    c->v.s[14] = LD32(c->r[5] + 288u);
    c->v.s[2] = LD32(c->r[5] + 296u);
    c->v.s[10] = LD32(c->r[5] + 312u);
    c->v.s[3] = LD32(c->r[5] + 324u);
    c->v.s[1] = LD32(c->r[5] + 320u);
    c->v.s[4] = LD32(c->r[5] + 300u);
    c->v.s[12] = LD32(c->r[5] + 316u);
    c->v.s[5] = LD32(c->r[5] + 328u);
    c->v.s[7] = LD32(c->r[5] + 332u);
    c->v.f[8] = c->v.f[8] * c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[14]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[3] = c->v.f[3] * c->v.f[3];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[12]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[5] * c->v.f[5]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[8]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[7] * c->v.f[7]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[0] : c->v.s[8];
    vfp_cmp_f(c, c->v.f[3], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[3] : c->v.s[0];
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bb7818; }
    c->r[14] = 0xbb7814u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_bb7818:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bb7848;
L_bb7824:;
    c->v.s[0] = LD32(c->r[5] + 96u);
    c->v.s[2] = LD32(c->r[5] + 100u);
    c->v.s[4] = LD32(c->r[5] + 104u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[0] : c->v.s[2];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[16] = COND_GT ? c->v.s[4] : c->v.s[0];
L_bb7848:;
    c->r[1] = (c->r[1] >> 20);
    c->r[8] = c->r[1] | (c->r[0] << 12);
    { uint32_t r = c->r[8] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb78a8; }
    c->v.s[18] = LD32(c->r[7] + 36u);
    c->r[0] = c->r[13];
    c->r[1] = c->r[4];
    c->r[14] = 0xbb7868u; f_c57f14(c);
    c->v.s[0] = LD32(c->r[5] + 64u);
    c->v.s[6] = LD32(c->r[13]);
    c->v.s[2] = LD32(c->r[5] + 68u);
    c->v.s[8] = LD32(c->r[13] + 4u);
    c->v.s[4] = LD32(c->r[5] + 72u);
    c->v.s[10] = LD32(c->r[13] + 8u);
    c->r[6] = 0x1u;
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[0] = c->v.f[0] - c->v.f[6];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bb797c; }
L_bb78a8:;
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb78ec; }
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[7] + 32u);
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    ST32(c->r[13] + 12u, c->v.s[0]);
    c->r[14] = 0xbb78e0u; f_a84d5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0x0u;
    if (COND_GE) { goto L_bb797c; }
L_bb78ec:;
    { uint32_t r = c->r[8] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb7974; }
    c->r[6] = 0x0u;
    c->v.s[0] = LD32(c->r[7] + 16u);
    c->v.s[2] = LD32(c->r[7] + 20u);
    c->v.s[4] = LD32(c->r[7] + 24u);
    c->v.s[6] = LD32(c->r[7] + 4u);
    c->v.s[8] = LD32(c->r[7] + 8u);
    c->v.s[10] = LD32(c->r[7]);
    c->r[1] = c->r[13];
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->v.s[12] = LD32(c->r[5] + 64u);
    c->v.s[14] = c->v.s[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[16] * c->v.f[10]);
    ST32(c->r[13], c->v.s[14]);
    c->v.s[10] = LD32(c->r[5] + 68u);
    c->v.s[14] = c->v.s[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[16] * c->v.f[6]);
    ST32(c->r[13] + 4u, c->v.s[14]);
    c->v.s[6] = LD32(c->r[5] + 72u);
    c->v.s[14] = c->v.s[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[16] * c->v.f[8]);
    ST32(c->r[13] + 8u, c->v.s[14]);
    ST32(c->r[13] + 16u, c->v.s[12]);
    ST32(c->r[13] + 20u, c->v.s[10]);
    ST32(c->r[13] + 24u, c->v.s[6]);
    c->r[14] = 0xbb796cu; f_a855c0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_bb797c; }
L_bb7974:;
    { uint32_t r = c->r[8] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_NE) { c->r[6] = 0x1u; }
L_bb797c:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bb798c(Cpu *restrict c) {
    FN_ENTER(0xbb798cu);
L_bb798c:;
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb79bc; }
    c->r[3] = 0xe8b138u;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xbb79a4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x4u;
    c->r[0] = c->r[3] & (c->r[0] << 2);
    c->r[1] = c->r[0] | c->r[1];
L_bb79bc:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb79ec; }
    c->r[3] = 0xe8b108u;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xbb79d4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x200u;
    c->r[0] = c->r[3] & (c->r[0] << 9);
    c->r[1] = c->r[0] | c->r[1];
L_bb79ec:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0xe8b0c8u;
    c->r[0] = c->r[0] & 0xfffu;
    { uint32_t ea = 0xbb7a14u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x100u;
    c->r[0] = c->r[2] & (c->r[0] << 8);
    c->r[0] = c->r[0] | c->r[1];
    return;
}
void f_bb7a30(Cpu *restrict c) {
    FN_ENTER(0xbb7a30u);
L_bb7a30:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[3] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb7af8; }
    c->r[5] = 0xe8b088u;
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = 0xbb7a58u + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[4]); }
    c->r[4] = c->r[4] & 0xfffu;
    c->r[4] = c->r[5] + (c->r[4] << 2);
    c->v.s[0] = LD32(c->r[4]);
    if (COND_NE) { goto L_bb7b30; }
    c->v.s[2] = 0x43800000u;
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[3] = (c->r[14] >> 8) & 0xffu;
    c->r[5] = (c->r[1] >> 8);
    c->r[4] = (uint32_t)(uint8_t)(c->r[14]);
    c->r[2] = c->r[3] - c->r[2];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[3] = c->v.s[0];
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[2] + (c->r[5] << 8);
    c->r[5] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[5] = c->r[4] - c->r[5];
    { uint32_t r = c->r[3] * c->r[5]; c->r[5] = r; }
    c->r[2] = c->r[2] & 0xff00u;
    c->r[5] = c->r[1] + (c->r[5] >> 8);
    c->r[5] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[2] = c->r[5] | c->r[2];
    c->r[5] = (c->r[14] >> 24);
    c->r[5] = c->r[5] - (c->r[1] >> 24);
    { uint32_t r = c->r[3] * c->r[5]; c->r[5] = r; }
    c->r[5] = (c->r[5] >> 8);
    c->r[5] = c->r[5] + (c->r[1] >> 24);
    c->r[2] = c->r[2] | (c->r[5] << 24);
    c->r[5] = (c->r[1] >> 16) & 0xffu;
    c->r[4] = (c->r[14] >> 16) & 0xffu;
    c->r[5] = c->r[4] - c->r[5];
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[1] = c->r[3] + (c->r[1] >> 16);
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_bb7af8:;
    { uint32_t r = c->r[3] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb7c24; }
    c->r[3] = 0xe8afccu;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbb7b10u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] & 0xfffu;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb7c24; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_bb7b30:;
    c->r[4] = 0xe8af8cu;
    c->v.s[4] = 0x43800000u;
    c->r[3] = c->r[2] + 0x2u;
    c->r[5] = c->r[2] + 0x3u;
    c->r[2] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[3] & 0xfffu;
    { uint32_t ea = 0xbb7b54u + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->r[3] = c->r[4] + (c->r[3] << 2);
    c->v.s[2] = LD32(c->r[3]);
    { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); }
    c->r[5] = c->r[5] & 0xfffu;
    c->r[3] = c->r[4] + (c->r[5] << 2);
    c->r[5] = (uint32_t)(uint8_t)(c->r[14]);
    c->v.s[6] = LD32(c->r[3]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[3] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xfffu;
    c->r[3] = c->r[5] - c->r[3];
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->r[2] = c->r[4] + (c->r[2] << 2);
    c->r[5] = c->v.s[0];
    c->v.f[6] = c->v.f[6] * c->v.f[4];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = LD32(c->r[2]);
    { uint32_t r = c->r[5] * c->r[3]; c->r[3] = r; }
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->r[3] = c->r[1] + (c->r[3] >> 8);
    c->r[2] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[3] = (c->r[1] >> 8) & 0xffu;
    c->r[5] = (c->r[14] >> 8) & 0xffu;
    c->r[3] = c->r[5] - c->r[3];
    c->r[5] = c->v.s[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[6]);
    { uint32_t r = c->r[5] * c->r[3]; c->r[3] = r; }
    c->r[5] = (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[5] << 8);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[3] = (c->r[1] >> 16) & 0xffu;
    c->r[5] = (c->r[14] >> 16) & 0xffu;
    c->r[3] = c->r[5] - c->r[3];
    c->r[5] = c->v.s[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    { uint32_t r = c->r[5] * c->r[3]; c->r[3] = r; }
    c->r[5] = c->v.s[0];
    c->r[3] = (c->r[3] >> 8);
    c->r[3] = c->r[3] + (c->r[1] >> 16);
    c->r[3] = (c->r[3] << 16);
    c->r[3] = uxtb16(c->r[3]);
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = (c->r[14] >> 24);
    c->r[3] = c->r[3] - (c->r[1] >> 24);
    { uint32_t r = c->r[5] * c->r[3]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[1] = c->r[3] + (c->r[1] >> 24);
    c->r[1] = c->r[2] | (c->r[1] << 24);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_bb7c24:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb7c40(Cpu *restrict c) {
    FN_ENTER(0xbb7c40u);
L_bb7c40:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bb7c44(Cpu *restrict c) {
    FN_ENTER(0xbb7c44u);
L_bb7c44:;
    c->r[0] = 0xe8ae88u;
    { uint32_t ea = 0xbb7c50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bb7c54(Cpu *restrict c) {
    FN_ENTER(0xbb7c54u);
L_bb7c54:;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    c->r[3] = c->r[0] + 0x110u;
    c->r[0] = c->r[0] + 0x110u;
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[3] = c->r[3] & 0xfdffffffu;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    return;
}
void f_bb7c70(Cpu *restrict c) {
    FN_ENTER(0xbb7c70u);
L_bb7c70:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x176a758u;
    c->r[1] = 0x0u;
    c->r[12] = 0x1u;
    c->r[3] = 0x2u;
    c->r[2] = 0x6u;
    c->r[0] = 0xbb7c94u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    c->r[3] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[3] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xe8a050u;
    c->r[0] = 0xe8ade8u;
    c->r[3] = 0x1a0u;
    { uint32_t ea = 0xbb7ce8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xb9e531u;
    { uint32_t ea = 0xbb7cf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbb7cf4u + c->r[1];
    c->r[14] = 0xbb7cf4u; f_9aedcc(c);
    c->r[1] = 0xe8ade4u;
    { uint32_t ea = 0xbb7d00u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb7d20(Cpu *restrict c) {
    FN_ENTER(0xbb7d20u);
L_bb7d20:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xe8adb8u;
    { uint32_t ea = 0xbb7d30u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb7d34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x220u;
    c->pc = c->r[4]; c->r[14] = 0xbb7d4cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xbb7d54u; f_bb8df8(c);
    c->r[0] = 0xe8ad88u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xbb7d64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); c->r[1] = c->r[1] + 0x210u; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0xbb7d7cu; f_bbc73c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb7d8c(Cpu *restrict c) {
    FN_ENTER(0xbb7d8cu);
L_bb7d8c:;
    return;
}
void f_bb7d90(Cpu *restrict c) {
    FN_ENTER(0xbb7d90u);
L_bb7d90:;
    __attribute__((musttail)) return f_bb8ef8(c);
}
void f_bb7d94(Cpu *restrict c) {
    FN_ENTER(0xbb7d94u);
L_bb7d94:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbb7da0u; f_bb8ef8(c);
    c->r[0] = 0xe8ad3cu;
    { uint32_t ea = 0xbb7dacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb7dacu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bb7dc4(Cpu *restrict c) {
    FN_ENTER(0xbb7dc4u);
L_bb7dc4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbb7dd0u; f_bb90f8(c);
    { uint32_t ea = c->r[4] + 0x210u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0xf2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb7df4; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_bb7df8(c);
L_bb7df4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb7df8(Cpu *restrict c) {
    FN_ENTER(0xbb7df8u);
L_bb7df8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xa8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[0] + 0x1f0u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_bb8260; }
    c->r[0] = 0xe816e4u;
    c->r[10] = 0x0u;
    { uint32_t ea = 0xbb7e2cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0xe80d18u;
    { uint32_t ea = 0xbb7e34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe80d08u;
    { uint32_t ea = 0xbb7e44u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
L_bb7e40:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[1]; c->r[14] = 0xbb7e50u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bb7e70; }
    goto L_bb7e80;
L_bb7e64:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bb7e80; }
L_bb7e70:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bb7e64; }
    goto L_bb8254;
L_bb7e80:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb8254; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0] + 32u);
    c->v.s[2] = LD32(c->r[0] + 36u);
    c->v.s[4] = LD32(c->r[0] + 40u);
    c->v.s[6] = LD32(c->r[0] + 44u);
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.s[12] = LD32(c->r[0] + 8u);
    c->v.s[14] = LD32(c->r[0] + 12u);
    c->v.s[1] = LD32(c->r[0] + 16u);
    c->v.s[3] = LD32(c->r[0] + 20u);
    c->v.s[5] = LD32(c->r[0] + 24u);
    c->v.s[7] = LD32(c->r[0] + 28u);
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x60u;
    c->v.s[9] = LD32(c->r[0] + 224u);
    c->v.f[8] = c->v.f[8] * c->v.f[9];
    c->v.f[10] = c->v.f[10] * c->v.f[9];
    ST32(c->r[13] + 96u, c->v.s[8]);
    ST32(c->r[13] + 100u, c->v.s[10]);
    c->v.f[8] = c->v.f[12] * c->v.f[9];
    c->v.f[10] = c->v.f[14] * c->v.f[9];
    ST32(c->r[13] + 104u, c->v.s[8]);
    ST32(c->r[13] + 108u, c->v.s[10]);
    c->v.s[8] = LD32(c->r[0] + 228u);
    c->v.f[10] = c->v.f[1] * c->v.f[8];
    c->v.f[12] = c->v.f[3] * c->v.f[8];
    ST32(c->r[13] + 112u, c->v.s[10]);
    c->v.f[10] = c->v.f[5] * c->v.f[8];
    c->v.f[8] = c->v.f[7] * c->v.f[8];
    ST32(c->r[13] + 116u, c->v.s[12]);
    ST32(c->r[13] + 120u, c->v.s[10]);
    ST32(c->r[13] + 124u, c->v.s[8]);
    c->v.s[8] = LD32(c->r[0] + 232u);
    c->r[0] = c->r[13] + 0x20u;
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    ST32(c->r[13] + 128u, c->v.s[0]);
    ST32(c->r[13] + 132u, c->v.s[2]);
    c->v.f[0] = c->v.f[4] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[8];
    ST32(c->r[13] + 136u, c->v.s[0]);
    ST32(c->r[13] + 140u, c->v.s[2]);
    c->r[14] = 0xbb7f58u; f_4332ac(c);
    { uint32_t ea = c->r[9] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb8250; }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[12] = LD32(c->r[13] + 56u);
    c->v.s[1] = LD32(c->r[13] + 32u);
    c->v.s[3] = LD32(c->r[13] + 36u);
    c->v.s[5] = LD32(c->r[13] + 40u);
    c->v.s[7] = LD32(c->r[13] + 48u);
    c->v.s[9] = LD32(c->r[13] + 52u);
    c->v.s[11] = LD32(c->r[13] + 96u);
    c->v.s[4] = LD32(c->r[1] + 112u);
    c->v.s[2] = LD32(c->r[1] + 104u);
    c->v.s[0] = LD32(c->r[1] + 96u);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.f[6] = c->v.f[4] + c->v.f[4];
    c->v.s[13] = c->v.s[4] ^ 0x80000000u;
    c->v.s[15] = c->v.s[2] ^ 0x80000000u;
    c->v.s[16] = c->v.s[0] ^ 0x80000000u;
    c->v.s[14] = c->r[12];
    ST32(c->r[13] + 28u, c->v.s[6]);
    c->v.f[6] = c->v.f[2] + c->v.f[2];
    ST32(c->r[13] + 24u, c->v.s[6]);
    c->v.f[6] = c->v.f[0] + c->v.f[0];
    c->v.f[14] = c->v.f[6] + c->v.f[14];
    ST32(c->r[13] + 20u, c->v.s[6]);
L_bb7fc4:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[1] = c->r[12];
    c->r[5] = 0x0u;
    c->r[3] = (c->r[14] >> 24) & 0x1u;
    c->v.s[18] = LD32(c->r[13] + 64u);
    c->v.s[24] = LD32(c->r[13] + 80u);
    c->v.s[30] = LD32(c->r[13] + 68u);
    c->v.s[26] = LD32(c->r[13] + 72u);
    c->r[7] = c->r[0] + (c->r[3] << 4);
    c->v.s[28] = LD32(c->r[7] + 36u);
    c->v.s[20] = LD32(c->r[7] + 32u);
    c->v.s[22] = LD32(c->r[7] + 40u);
    { uint32_t ea = c->r[8] + 4u; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->v.s[19] = LD32(c->r[13] + 84u);
    c->v.f[17] = c->v.f[7] * c->v.f[28];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[1] * c->v.f[20]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[18] * c->v.f[22]);
    c->v.f[18] = c->v.f[24] + c->v.f[17];
    c->v.f[17] = c->v.f[28] * c->v.f[9];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[20] * c->v.f[3]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[22] * c->v.f[30]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[16]);
    c->v.f[24] = c->v.f[28] * c->v.f[12];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[20] * c->v.f[5]);
    c->v.s[28] = LD32(c->r[13] + 88u);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[1] = c->v.s[14]; }
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    if (COND_MI) { c->r[5] = 0x1u; }
    vfp_mrs_flags(c);
    c->v.f[20] = c->v.f[19] + c->v.f[17];
    if (COND_LE) { goto L_bb8058; }
    c->v.s[6] = LD32(c->r[13] + 20u);
    c->v.s[30] = c->r[1];
    c->r[5] = 0x1u;
    c->v.f[30] = c->v.f[30] - c->v.f[6];
    c->r[1] = c->v.s[30];
L_bb8058:;
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[22] * c->v.f[26]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[15]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bb807c; }
    c->v.s[6] = LD32(c->r[13] + 24u);
    c->v.s[22] = c->r[4];
    c->r[5] = 0x1u;
    c->v.f[22] = c->v.f[6] + c->v.f[22];
    c->r[4] = c->v.s[22];
L_bb807c:;
    c->v.f[30] = c->v.f[28] + c->v.f[24];
    vfp_cmp_f(c, c->v.f[20], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bb80a0; }
    c->v.s[6] = LD32(c->r[13] + 24u);
    c->v.s[22] = c->r[4];
    c->r[5] = 0x1u;
    c->v.f[22] = c->v.f[22] - c->v.f[6];
    c->r[4] = c->v.s[22];
L_bb80a0:;
    vfp_cmp_f(c, c->v.f[30], c->v.f[13]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bb80c0; }
    c->v.s[6] = LD32(c->r[13] + 28u);
    c->v.s[22] = c->r[6];
    c->r[5] = 0x1u;
    c->v.f[22] = c->v.f[6] + c->v.f[22];
    c->r[6] = c->v.s[22];
L_bb80c0:;
    vfp_cmp_f(c, c->v.f[30], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bb80e0; }
    c->v.s[6] = LD32(c->r[13] + 28u);
    c->v.s[22] = c->r[6];
    c->v.f[22] = c->v.f[22] - c->v.f[6];
    c->r[6] = c->v.s[22];
    goto L_bb80e8;
L_bb80e0:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_bb8244; }
L_bb80e8:;
    c->v.s[21] = c->r[1];
    c->v.s[17] = c->r[4];
    c->v.s[24] = LD32(c->r[13] + 100u);
    c->v.s[19] = LD32(c->r[13] + 112u);
    c->v.s[26] = LD32(c->r[13] + 116u);
    c->v.s[28] = c->r[6];
    c->v.s[22] = LD32(c->r[13] + 104u);
    c->v.s[29] = LD32(c->r[13] + 128u);
    c->v.s[31] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.s[10] = LD32(c->r[13] + 144u);
    c->v.s[8] = LD32(c->r[13] + 148u);
    c->r[5] = c->r[7] + 0x28u;
    c->r[2] = c->r[7] + 0x24u;
    c->r[7] = c->r[7] + 0x20u;
    c->r[1] = c->r[0] + 0x20u;
    c->v.f[23] = c->v.f[20] + c->v.f[17];
    c->v.f[18] = c->v.f[18] + c->v.f[21];
    c->v.s[20] = LD32(c->r[13] + 120u);
    c->v.f[30] = c->v.f[30] + c->v.f[28];
    c->v.f[25] = c->v.f[23] * c->v.f[19];
    c->v.f[27] = c->v.f[23] * c->v.f[26];
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[18] * c->v.f[11]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[18] * c->v.f[24]);
    c->v.f[23] = c->v.f[23] * c->v.f[20];
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[18] * c->v.f[22]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[30] * c->v.f[29]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[30] * c->v.f[31]);
    c->v.s[18] = LD32(c->r[13] + 152u);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[30] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + c->v.f[25];
    c->v.f[6] = c->v.f[8] + c->v.f[27];
    c->v.f[8] = c->v.f[18] + c->v.f[23];
    ST32(c->r[7], c->v.s[10]);
    ST32(c->r[2], c->v.s[6]);
    c->r[2] = c->r[1] + (c->r[3] << 4);
    ST32(c->r[5], c->v.s[8]);
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[10]); }
    c->r[2] = 0x10u;
    c->r[2] = c->r[2] & (c->r[14] >> 21);
    c->v.s[25] = LD32(c->r[13] + 68u);
    c->v.s[23] = LD32(c->r[13] + 64u);
    c->v.s[27] = LD32(c->r[13] + 72u);
    c->v.s[31] = LD32(c->r[13] + 84u);
    c->v.s[29] = LD32(c->r[13] + 80u);
    c->r[1] = c->r[1] + c->r[2];
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->v.f[18] = c->v.f[8] * c->v.f[9];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[6] * c->v.f[3]);
    c->v.f[30] = c->v.f[7] * c->v.f[8];
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[10] * c->v.f[25]);
    c->v.f[8] = c->v.f[8] * c->v.f[12];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[5]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[23] * c->v.f[10]);
    c->v.s[6] = LD32(c->r[13] + 88u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[27]);
    c->v.f[18] = c->v.f[31] + c->v.f[18];
    c->v.f[10] = c->v.f[29] + c->v.f[30];
    c->v.s[30] = LD32(c->r[13] + 128u);
    c->v.f[6] = c->v.f[6] + c->v.f[8];
    c->v.f[18] = c->v.f[17] + c->v.f[18];
    c->v.f[8] = c->v.f[21] + c->v.f[10];
    c->v.s[17] = LD32(c->r[13] + 132u);
    c->v.s[21] = LD32(c->r[13] + 144u);
    c->v.f[6] = c->v.f[28] + c->v.f[6];
    c->v.f[10] = c->v.f[18] * c->v.f[19];
    c->v.s[19] = LD32(c->r[13] + 136u);
    c->v.f[26] = c->v.f[18] * c->v.f[26];
    c->v.f[18] = c->v.f[18] * c->v.f[20];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[11]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[8] * c->v.f[24]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[8] * c->v.f[22]);
    c->v.s[20] = LD32(c->r[13] + 148u);
    c->v.s[8] = LD32(c->r[13] + 152u);
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[10]); }
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[30] * c->v.f[6]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[6] * c->v.f[17]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[6] * c->v.f[19]);
    c->v.f[10] = c->v.f[21] + c->v.f[10];
    c->v.f[6] = c->v.f[20] + c->v.f[26];
    c->v.f[8] = c->v.f[8] + c->v.f[18];
    ST32(c->r[1], c->v.s[10]);
    ST32(c->r[1] + 4u, c->v.s[6]);
    ST32(c->r[1] + 8u, c->v.s[8]);
L_bb8244:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bb7fc4; }
L_bb8250:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
L_bb8254:;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_bb7e40; }
L_bb8260:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb827c(Cpu *restrict c) {
    FN_ENTER(0xbb827cu);
L_bb827c:;
    __attribute__((musttail)) return f_bba5b0(c);
}
void f_bb8280(Cpu *restrict c) {
    FN_ENTER(0xbb8280u);
L_bb8280:;
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
    c->r[14] = 0xbb82b8u; f_9bb638(c);
    c->r[1] = 0xbbe32du;
    c->r[10] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0xbb82d0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x210u;
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
    c->r[14] = 0xbb8330u; f_9bb638(c);
    c->r[1] = 0xbbe2cdu;
    c->r[1] = 0xbb833cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = 0x211u;
    c->r[1] = c->r[9] + c->r[1];
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
    c->r[0] = c->r[9];
    c->r[1] = c->r[11];
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_bba704(c);
}
void f_bb839c(Cpu *restrict c) {
    FN_ENTER(0xbb839cu);
L_bb839c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xd8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[0];
    c->v.s[26] = 0x3f800000u;
    c->r[0] = 0x0u;
    c->r[3] = c->r[13] + 0x80u;
    c->v.s[2] = LD32(c->r[8] + 84u);
    c->v.s[4] = LD32(c->r[8] + 88u);
    c->v.s[0] = LD32(c->r[8] + 80u);
    c->v.s[6] = LD32(c->r[8] + 92u);
    c->r[2] = c->r[8] + 0x160u;
    c->v.f[8] = c->v.f[4] + c->v.f[4];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[3] = c->v.f[0] * c->v.f[10];
    c->v.f[5] = c->v.f[0] * c->v.f[8];
    c->v.f[1] = c->v.f[8] * c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[14] = c->v.f[12] + c->v.f[4];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[14] = c->v.f[26] - c->v.f[14];
    ST32(c->r[13] + 80u, c->v.s[14]);
    c->v.f[14] = c->v.f[0] + c->v.f[0];
    ST32(c->r[13] + 84u, c->v.s[7]);
    ST32(c->r[13] + 88u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 96u, c->v.s[1]);
    c->v.f[0] = c->v.f[0] * c->v.f[14];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[12];
    c->v.f[8] = c->v.f[2] + c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.f[4] = c->v.f[26] - c->v.f[4];
    c->v.f[0] = c->v.f[26] - c->v.f[0];
    ST32(c->r[13] + 100u, c->v.s[4]);
    c->v.f[4] = c->v.f[5] + c->v.f[10];
    ST32(c->r[13] + 104u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 112u, c->v.s[4]);
    ST32(c->r[13] + 116u, c->v.s[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe80dd0u;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbb848cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = ((c->r[1] >> 15) & 1); uint32_t r = c->r[2] & (c->r[1] >> 16); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_NE) { goto L_bb8598; }
    c->r[1] = (c->r[1] >> 16);
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_NE) { goto L_bb8598; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x3b4u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_NE) { goto L_bb8598; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x564u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_NE) { goto L_bb8598; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x714u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_NE) { goto L_bb8598; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8c4u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_NE) { goto L_bb8598; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xa74u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_NE) { goto L_bb8598; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xc24u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_NE) { goto L_bb8598; }
    c->r[0] = 0xe816b4u;
    { uint32_t ea = 0xbb851cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
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
    goto L_bb8a20;
L_bb8598:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x90u;
    c->pc = c->r[2]; c->r[14] = 0xbb85acu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[0] = LD32(c->r[13] + 144u);
    c->v.s[2] = LD32(c->r[13] + 152u);
    { uint32_t ea = c->r[8] + 0x211u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.s[4] = c->r[5];
    c->v.s[6] = c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[16] = c->v.f[2] - c->v.f[4];
    c->v.f[18] = c->v.f[0] - c->v.f[6];
    if (COND_EQ) { goto L_bb8790; }
    c->r[0] = 0xe80558u;
    c->v.s[0] = LD32(c->r[13] + 148u);
    c->v.s[2] = c->r[7];
    c->v.s[1] = c->v.s[16];
    { uint32_t ea = 0xbb85f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[19] = c->v.f[0] - c->v.f[2];
    c->v.s[0] = c->v.s[18];
    c->v.s[20] = LD32(c->r[0] + 8u);
    c->r[14] = 0xbb8600u; f_15efd70(c);
    c->v.s[28] = 0x40c90fdbu;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->v.s[30] = 0xc0c90fdbu;
    c->v.s[17] = 0x40490fdbu;
    vfp_mrs_flags(c);
    c->v.f[2] = c->v.f[0] / c->v.f[28];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[2] * c->v.f[28]);
    c->v.f[2] = c->v.f[0] + c->v.f[28];
    c->v.s[0] = COND_GE ? c->v.s[0] : c->v.s[2];
    c->v.f[2] = c->v.f[0] + c->v.f[30];
    vfp_cmp_f(c, c->v.f[0], c->v.f[17]);
    vfp_mrs_flags(c);
    c->v.s[22] = COND_GE ? c->v.s[2] : c->v.s[0];
    c->v.s[0] = c->v.s[22] ^ 0x80000000u;
    c->r[14] = 0xbb8644u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0xbb8650u; f_15efdf4(c);
    c->v.s[2] = 0x0u;
    c->v.f[4] = c->v.f[19] * c->v.f[2];
    c->v.f[8] = c->v.f[18] * c->v.f[2];
    c->v.f[6] = c->v.f[16] * c->v.f[2];
    c->v.f[10] = c->v.f[8] + c->v.f[4];
    c->v.f[10] = c->v.f[10] + c->v.f[6];
    c->v.f[12] = c->v.f[10] + c->v.f[26];
    c->v.s[10] = c->v.s[2];
    vfp_cmp_f(c, c->v.f[12], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bb8680; }
    c->v.f[10] = c->v.f[26] / c->v.f[12];
L_bb8680:;
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[18] * c->v.f[24]);
    c->v.f[8] = c->v.f[8] + c->v.f[19];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[0] = c->v.f[8] + c->v.f[6];
    c->v.f[4] = c->v.f[4] + c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.f[1] = c->v.f[10] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->r[14] = 0xbb86a4u; f_15efd70(c);
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    c->v.s[6] = 0x80000000u;
    c->v.f[4] = c->v.f[2] / c->v.f[28];
    vfp_cmp_f(c, c->v.f[6], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[4]);
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[28]);
    c->v.f[4] = c->v.f[2] + c->v.f[28];
    c->v.s[0] = COND_GE ? c->v.s[2] : c->v.s[4];
    c->v.f[2] = c->v.f[0] + c->v.f[30];
    vfp_cmp_f(c, c->v.f[0], c->v.f[17]);
    vfp_mrs_flags(c);
    c->v.s[16] = COND_GE ? c->v.s[2] : c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbb86e4u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0xbb86f0u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0xbb86fcu; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbb8708u; f_15efdf4(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0xbb8714u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->v.f[28] = c->v.f[18] * c->v.f[24];
    c->r[14] = 0xbb8724u; f_15efdf4(c);
    c->v.f[4] = c->v.f[18] * c->v.f[26];
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[26]);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[26] * c->v.f[16];
    c->v.f[4] = c->v.f[4] * c->v.f[22];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[24] * c->v.f[0]);
    ST32(c->r[13] + 16u, c->v.s[2]);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    ST32(c->r[13] + 20u, c->v.s[6]);
    ST32(c->r[13] + 24u, c->v.s[4]);
    c->v.f[4] = c->v.f[18] * c->v.f[22];
    c->v.f[2] = c->v.f[24] * c->v.f[2];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[26] * c->v.f[22]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[26]);
    ST32(c->r[13] + 32u, c->v.s[2]);
    c->v.s[2] = c->v.s[18] ^ 0x80000000u;
    ST32(c->r[13] + 36u, c->v.s[0]);
    c->v.f[0] = c->v.f[24] * c->v.f[16];
    ST32(c->r[13] + 40u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[22];
    goto L_bb8a04;
L_bb8790:;
    c->r[0] = 0xe803acu;
    c->v.s[20] = 0x0u;
    { uint32_t ea = 0xbb87a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_bb87dc; }
    c->v.s[0] = LD32(c->r[0] + 4u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { c->v.s[0] = LD32(c->r[0] + 8u); }
    if (COND_EQ) { vfp_cmp_f(c, c->v.f[16], c->v.f[0]); }
    if (COND_EQ) { vfp_mrs_flags(c); }
    if (COND_NE) { goto L_bb87dc; }
    c->r[0] = 0xe80a84u;
    { uint32_t ea = 0xbb87d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = LD32(c->r[0]);
    c->v.s[20] = LD32(c->r[0] + 4u);
    c->v.s[16] = LD32(c->r[0] + 8u);
L_bb87dc:;
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bb8800; }
    c->r[14] = 0xbb87fcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bb8800:;
    c->v.f[8] = c->v.f[26] / c->v.f[2];
    c->r[0] = 0xe80a48u;
    { uint32_t ea = 0xbb8810u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[20] = c->v.f[20] * c->v.f[8];
    c->v.f[18] = c->v.f[18] * c->v.f[8];
    c->v.f[16] = c->v.f[16] * c->v.f[8];
    c->v.s[8] = 0xbf7fbe77u;
    c->v.f[6] = c->v.f[20] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[18]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[6], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bb8868; }
    c->v.s[6] = 0x3c23d70au;
    c->v.f[8] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bb88e4; }
    c->r[0] = 0xe809a8u;
    { uint32_t ea = 0xbb8860u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[2] = c->r[0] + 0x4u;
    goto L_bb8920;
L_bb8868:;
    c->v.f[0] = c->v.f[6] + c->v.f[26];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bb8888; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbb8888u; f_15efddc(c);
L_bb8888:;
    c->r[0] = 0xe809b8u;
    c->v.f[1] = c->v.f[26] / c->v.f[0];
    c->v.s[14] = 0x3f000000u;
    c->v.f[0] = c->v.f[0] * c->v.f[14];
    { uint32_t ea = 0xbb88a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.f[8] = c->v.f[20] * c->v.f[2];
    c->v.f[10] = c->v.f[18] * c->v.f[6];
    c->v.f[12] = c->v.f[16] * c->v.f[4];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[20] * c->v.f[6]);
    c->v.f[6] = c->v.f[1] * c->v.f[8];
    c->v.f[2] = c->v.f[1] * c->v.f[10];
    c->v.f[4] = c->v.f[1] * c->v.f[12];
    goto L_bb897c;
L_bb88e4:;
    c->r[0] = 0xe8090cu;
    c->v.f[8] = fabsf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    { uint32_t ea = 0xbb88f8u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xe80950u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    { uint32_t ea = 0xbb8908u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + 0x8u;
    c->r[0] = c->r[2];
    c->r[2] = c->r[2] + 0x4u;
    if (COND_MI) { c->r[0] = c->r[3]; }
    if (COND_MI) { c->r[1] = c->r[3] + 0x8u; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[3] + 0x4u; }
L_bb8920:;
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[2]);
    c->v.f[18] = c->v.f[4] * c->v.f[6];
    c->v.f[16] = c->v.f[2] * c->v.f[8];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[20] = c->v.f[0] * c->v.f[10];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bb8968; }
    c->r[14] = 0xbb8964u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bb8968:;
    c->v.f[4] = c->v.f[26] / c->v.f[2];
    c->v.s[0] = 0xb33bbd2eu;
    c->v.f[6] = c->v.f[20] * c->v.f[4];
    c->v.f[2] = c->v.f[4] * c->v.f[18];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
L_bb897c:;
    c->v.f[8] = c->v.f[6] + c->v.f[6];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->r[0] = 0x0u;
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.f[3] = c->v.f[4] * c->v.f[10];
    c->v.f[5] = c->v.f[4] * c->v.f[8];
    c->v.f[1] = c->v.f[8] * c->v.f[0];
    c->v.f[10] = c->v.f[10] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[14] = c->v.f[12] + c->v.f[6];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[14] = c->v.f[26] - c->v.f[14];
    ST32(c->r[13] + 16u, c->v.s[14]);
    c->v.f[14] = c->v.f[4] + c->v.f[4];
    ST32(c->r[13] + 20u, c->v.s[7]);
    ST32(c->r[13] + 24u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 32u, c->v.s[1]);
    c->v.f[4] = c->v.f[4] * c->v.f[14];
    c->v.f[0] = c->v.f[14] * c->v.f[0];
    c->v.f[6] = c->v.f[4] + c->v.f[6];
    c->v.f[4] = c->v.f[4] + c->v.f[12];
    c->v.f[8] = c->v.f[2] + c->v.f[0];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[6] = c->v.f[26] - c->v.f[6];
    c->v.f[0] = c->v.f[26] - c->v.f[4];
    ST32(c->r[13] + 36u, c->v.s[6]);
    c->v.f[6] = c->v.f[5] + c->v.f[10];
    ST32(c->r[13] + 40u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 48u, c->v.s[6]);
L_bb8a04:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x3cu;
    ST32(c->r[13] + 52u, c->v.s[2]);
    ST32(c->r[13] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[5]); }
L_bb8a20:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x90u;
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = c->r[13] + 0x10u;
    c->r[14] = 0xbb8a34u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[8] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8] + 0x128u; ST32(ea, c->r[10]); }
    c->v.s[10] = c->r[10];
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x12cu; ST32(ea, c->r[7]); }
    c->v.s[8] = c->r[7];
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8] + 0x134u; ST32(ea, c->r[5]); }
    c->v.s[6] = c->r[5];
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x138u; ST32(ea, c->r[6]); }
    c->v.s[4] = c->r[6];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x13cu; ST32(ea, c->r[3]); }
    c->v.s[2] = c->r[3];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x140u; ST32(ea, c->r[0]); }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[8] + 0x144u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x148u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[8] + 0x150u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[8] + 0x15cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x40u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x4cu; ST32(ea, c->r[14]); }
    c->v.s[12] = LD32(c->r[8] + 96u);
    c->v.s[14] = LD32(c->r[8] + 288u);
    c->v.s[1] = LD32(c->r[8] + 292u);
    c->v.f[14] = c->v.f[12] * c->v.f[14];
    c->v.f[1] = c->v.f[12] * c->v.f[1];
    c->v.f[10] = c->v.f[12] * c->v.f[10];
    c->v.f[8] = c->v.f[12] * c->v.f[8];
    ST32(c->r[8] + 176u, c->v.s[14]);
    ST32(c->r[8] + 180u, c->v.s[1]);
    ST32(c->r[8] + 184u, c->v.s[10]);
    ST32(c->r[8] + 188u, c->v.s[8]);
    c->v.s[8] = LD32(c->r[8] + 100u);
    c->v.s[10] = LD32(c->r[8] + 304u);
    c->v.f[10] = c->v.f[8] * c->v.f[10];
    c->v.f[6] = c->v.f[8] * c->v.f[6];
    c->v.f[4] = c->v.f[8] * c->v.f[4];
    c->v.f[2] = c->v.f[8] * c->v.f[2];
    ST32(c->r[8] + 192u, c->v.s[10]);
    ST32(c->r[8] + 196u, c->v.s[6]);
    ST32(c->r[8] + 200u, c->v.s[4]);
    ST32(c->r[8] + 204u, c->v.s[2]);
    c->v.s[4] = c->r[9];
    c->v.s[2] = LD32(c->r[8] + 104u);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[0];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    ST32(c->r[8] + 208u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[8] + 212u, c->v.s[4]);
    ST32(c->r[8] + 216u, c->v.s[6]);
    c->v.s[0] = c->r[0];
    c->r[0] = c->r[8] + 0xe4u;
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[8] + 220u, c->v.s[0]);
    { uint32_t ea = c->r[8] + 0xe0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[4]); }
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb8bc4(Cpu *restrict c) {
    FN_ENTER(0xbb8bc4u);
L_bb8bc4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bb8bc8(Cpu *restrict c) {
    FN_ENTER(0xbb8bc8u);
L_bb8bc8:;
    c->r[0] = 0xe89f14u;
    { uint32_t ea = 0xbb8bd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bb8bd8(Cpu *restrict c) {
    FN_ENTER(0xbb8bd8u);
L_bb8bd8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1769864u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x5u;
    c->r[12] = 0x6u;
    c->r[0] = 0xbb8bfcu + c->r[0];
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
    c->r[1] = 0xe83a9cu;
    c->r[3] = 0x220u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0xe89e88u;
    { uint32_t ea = 0xbb8c58u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xbbd98bu;
    { uint32_t ea = 0xbb8c60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbb8c64u + c->r[1];
    c->r[14] = 0xbb8c64u; f_9aedcc(c);
    c->r[1] = 0xe89e80u;
    { uint32_t ea = 0xbb8c70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb8c90(Cpu *restrict c) {
    FN_ENTER(0xbb8c90u);
L_bb8c90:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0xe83a54u;
    { uint32_t ea = 0xbb8ca0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb8ca4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x210u;
    c->pc = c->r[5]; c->r[14] = 0xbb8cbcu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xbb8cc4u; f_bb4ee4(c);
    c->r[0] = 0xe89e20u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0xbb8cd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe80eecu;
    { uint32_t ea = 0xbb8cf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1a0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1a4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x7f0000u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1a8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1b8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1b4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1fcu; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x1c0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10000u;
    { uint32_t ea = c->r[4] + 0x1d0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1d4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1e4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1e0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1f8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1f4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1f0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1ecu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffff000u;
    { uint32_t ea = c->r[4] + 0x204u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe89d58u;
    { uint32_t ea = 0xbb8d7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb8d80u; f_d92480(c);
    { uint32_t ea = c->r[4] + 0x1e8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42480000u;
    { uint32_t ea = c->r[4] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffff0fffu;
    { uint32_t ea = c->r[4] + 0x204u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x208u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb8dbc(Cpu *restrict c) {
    FN_ENTER(0xbb8dbcu);
L_bb8dbc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xe83920u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xbb8dd4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xbb8dd8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bb8df8(Cpu *restrict c) {
    FN_ENTER(0xbb8df8u);
L_bb8df8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbb8e04u; f_bb4ee4(c);
    c->r[0] = 0xe89ce0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0xbb8e14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe80dacu;
    { uint32_t ea = 0xbb8e30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1a0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1a4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x7f0000u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1a8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1b8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1b4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1fcu; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x1c0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10000u;
    { uint32_t ea = c->r[4] + 0x1d0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1d4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1e4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1e0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1f8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1f4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1f0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1ecu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffff000u;
    { uint32_t ea = c->r[4] + 0x204u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe89c18u;
    { uint32_t ea = 0xbb8ebcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb8ec0u; f_d92480(c);
    { uint32_t ea = c->r[4] + 0x1e8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42480000u;
    { uint32_t ea = c->r[4] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffff0fffu;
    { uint32_t ea = c->r[4] + 0x204u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x208u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb8ef8(Cpu *restrict c) {
    FN_ENTER(0xbb8ef8u);
L_bb8ef8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe89be8u;
    { uint32_t ea = 0xbb8f0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb8f18u; f_bbe75c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_bb5158(c);
}
void f_bb8f28(Cpu *restrict c) {
    FN_ENTER(0xbb8f28u);
L_bb8f28:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe89bb8u;
    { uint32_t ea = 0xbb8f3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb8f48u; f_bbe75c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xbb8f50u; f_bb5158(c);
    c->r[0] = 0xe83798u;
    { uint32_t ea = 0xbb8f5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbb8f5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bb8f78(Cpu *restrict c) {
    FN_ENTER(0xbb8f78u);
L_bb8f78:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x110u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb8fd0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb8fa4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb900c; }
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb9014; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb8fc8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bb900c; }
L_bb8fd0:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0xe89ae4u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = 0xbb8ff0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1f0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 16);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_bb9014; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { goto L_bb9014; }
L_bb900c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb9014u; f_bb70c4(c);
L_bb9014:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bb901c(Cpu *restrict c) {
    FN_ENTER(0xbb901cu);
L_bb901c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb9048; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb9040u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb90ec; }
L_bb9048:;
    { uint32_t ea = c->r[4] + 0xf2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb90c0; }
    { uint32_t ea = c->r[4] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_bb90d8; }
    { uint32_t ea = c->r[4] + 0x1d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1d4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bb90d8; }
    c->r[1] = 0x1e0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bb90d8; }
    { uint32_t ea = c->r[0] + 0x1d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1dcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x1e0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x1e4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[1] = (c->r[2] & 0xFFFFu) | (c->r[1] & 0xFFFF0000u);
    { uint32_t ea = c->r[0] + 0x1d8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1dcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x1e0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1e4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_bb90c0:;
    c->r[3] = c->r[4] + 0x1d8u;
    c->r[12] = c->r[4] + 0x1d8u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    c->r[0] = c->r[0] & 0xffff0000u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_bb90d8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
L_bb90ec:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb90f4u; f_bb70c4(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bb90f8(Cpu *restrict c) {
    FN_ENTER(0xbb90f8u);
L_bb90f8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb9128; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb911cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb92d4; }
L_bb9124:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_bb9128:;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb9148; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { goto L_bb92cc; }
L_bb9148:;
    { uint32_t ea = c->r[4] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb9208; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0x7u;
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_HI) { goto L_bb92d4; }
    { uint32_t ea = c->r[4] + 0x1d4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1d4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_bb92d4; }
    c->r[2] = 0x1e0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_bb92d4; }
    c->r[2] = 0x4807u;
    c->r[3] = 0x3du;
    c->r[7] = 0x4802u;
    c->r[1] = c->r[1] & c->r[2];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[3] = c->r[3] & (c->r[2] >> 10);
    c->r[2] = c->r[2] & 0xffff03ffu;
    if (COND_EQ) { c->r[3] = c->r[3] | 0x2u; }
    c->r[1] = c->r[2] | (c->r[3] << 10);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbb91c8u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->pc = c->r[5]; c->r[14] = 0xbb91d4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[0]); }
L_bb9208:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb9218u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb92d4; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb922cu; f_bb7154(c);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_bb92d4; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_bb924c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb924cu; rt_dispatch(c);
L_bb924c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb925cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bb9274; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb9274u; rt_dispatch(c);
L_bb9274:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb9284u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bb9124; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[4] + 0x110u;
    { uint32_t ea = c->r[0] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb92a0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb92e0; }
    c->v.s[0] = LD32(c->r[4] + 252u);
    c->v.s[2] = LD32(c->r[4] + 260u);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[4] + 260u, c->v.s[0]);
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[7] = c->v.s[2];
    goto L_bb9300;
L_bb92cc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[0]); }
L_bb92d4:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb92dcu; f_bb70c4(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_bb92e0:;
    c->r[0] = c->r[0] & 0xfffffffeu;
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 260u);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[7] = c->v.s[2];
    c->r[7] = c->r[7] + (c->r[1] >> 16);
    c->r[7] = c->r[7] - 0x1u;
L_bb9300:;
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[0]);
    c->v.s[4] = 0x43800000u;
    c->r[1] = (c->r[7] & 0xFFFFu) | (c->r[1] & 0xFFFF0000u);
    c->r[7] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xffff0000u;
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[2] = c->r[4];
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    ST32(c->r[4] + 260u, c->v.s[0]);
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[4] + 264u, c->v.s[0]);
    { uint32_t ea = c->r[2] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & c->r[7]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb9380; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[5] = (uint32_t)(uint16_t)(c->r[3]);
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_LS) { goto L_bb9364; }
    c->r[1] = c->r[3] - c->r[1];
    c->r[1] = (c->r[1] & 0xFFFFu) | (c->r[3] & 0xFFFF0000u);
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    goto L_bb9380;
L_bb9364:;
    c->r[3] = c->r[3] & 0xffff0000u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[14] = 0xbb9374u; f_bb575c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bb92d4; }
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb9380:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = ~0x0u;
    c->r[9] = 0xffffu;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb9498; }
    { uint32_t ea = c->r[1] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb93a0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb93bc; }
    { uint32_t ea = c->r[4] + 0x1f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[4]; }
    if (COND_NE) { c->r[14] = 0xbb93bcu; f_bb9858(c); }
L_bb93bc:;
    { uint32_t ea = c->r[4] + 0x20cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffff0000u;
    { uint32_t ea = c->r[4] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb9520; }
    c->r[6] = c->r[4] + 0x1d8u;
L_bb93d8:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb93e0u; f_bb9668(c);
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    c->r[1] = c->r[1] & c->r[10];
    c->r[0] = c->r[0] & c->r[10];
    c->r[3] = c->r[3] & c->r[10];
    c->r[2] = c->r[2] & c->r[9];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x1f0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_bb9414; }
    goto L_bb9460;
L_bb9408:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb9460; }
L_bb9414:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb9408; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xbb9430u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bb9408; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    c->r[1] = c->r[1] & c->r[10];
    c->r[0] = c->r[0] & c->r[10];
    c->r[7] = c->r[2] & c->r[9];
    c->r[2] = c->r[2] & 0xffff0000u;
    c->r[3] = c->r[3] & c->r[10];
    c->r[2] = c->r[2] + 0x10000u;
    c->r[2] = c->r[2] | c->r[7];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    goto L_bb9408;
L_bb9460:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb9468u; f_bb975c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x20cu; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_bb93d8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb9520; }
    c->r[6] = c->r[4] + 0x1f0u;
    goto L_bb9580;
L_bb9498:;
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb94a4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffff0000u;
    { uint32_t ea = c->r[4] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bb95bc; }
    c->r[5] = c->r[4] + 0x1d8u;
L_bb94c0:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb94c8u; f_bb9668(c);
    { uint32_t ea = c->r[4] + 0x1f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbb94d8u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    c->r[2] = c->r[2] & c->r[10];
    c->r[1] = c->r[1] & c->r[10];
    c->r[3] = c->r[3] & c->r[9];
    c->r[6] = c->r[6] & c->r[10];
    c->r[3] = (c->r[3] & 0xfffeffffu) | ((c->r[0] << 16) & 0x10000u);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); }
    c->r[14] = 0xbb94fcu; f_bb975c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x20cu; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_bb94c0; }
    goto L_bb95bc;
L_bb9520:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbb9528u; f_bb9cfc(c);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x1f0u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_bb9548; }
    goto L_bb9580;
L_bb953c:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb9580; }
L_bb9548:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb953c; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[5] + 0x43u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bb953c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xbb957cu; rt_dispatch(c);
    goto L_bb953c;
L_bb9580:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_bb959c; }
    goto L_bb95bc;
L_bb9590:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bb95bc; }
L_bb959c:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb9590; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xbb95b8u; rt_dispatch(c);
    goto L_bb9590;
L_bb95bc:;
    c->r[0] = 0x1e2u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bb95d4; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbb95d4u; f_bb70c4(c);
L_bb95d4:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xffffu;
    { uint32_t r = c->r[0] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = c->r[1] & 0xfffe7fffu; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[1]); } }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb9600; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[1]); }
L_bb9600:;
    { uint32_t ea = c->r[4] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0xf000u;
    (void)f_subs(c, c->r[2], 0x3000u);
    if (COND_NE) { goto L_bb9124; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[3] = (c->r[1] >> 16);
    (void)f_subs(c, c->r[2], (c->r[1] >> 16));
    if (COND_CS) { goto L_bb9630; }
    c->r[0] = c->r[3] - c->r[0];
    c->r[0] = (c->r[1] & 0xFFFFu) | ((c->r[0] << 16) & 0xFFFF0000u);
    { uint32_t ea = c->r[4] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_bb9630:;
    c->r[0] = 0x1u - c->r[3];
    c->r[1] = c->r[0] + c->r[2];
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_bb9e0c(c);
}
void f_bb9648(Cpu *restrict c) {
    FN_ENTER(0xbb9648u);
L_bb9648:;
    ST32(c->r[0] + 256u, c->v.s[0]);
    return;
}
void f_bb9650(Cpu *restrict c) {
    FN_ENTER(0xbb9650u);
L_bb9650:;
    c->v.s[0] = LD32(c->r[0] + 256u);
    return;
}
void f_bb9658(Cpu *restrict c) {
    FN_ENTER(0xbb9658u);
L_bb9658:;
    ST32(c->r[0] + 432u, c->v.s[0]);
    return;
}
void f_bb9660(Cpu *restrict c) {
    FN_ENTER(0xbb9660u);
L_bb9660:;
    c->v.s[0] = LD32(c->r[0] + 432u);
    return;
}
void f_bb9668(Cpu *restrict c) {
    FN_ENTER(0xbb9668u);
L_bb9668:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[1] = 0xffffu;
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb9754; }
    c->r[9] = c->r[4] + 0x110u;
    c->r[8] = 0x0u;
    c->r[7] = 0x0u;
    c->r[6] = 0x0u;
L_bb969c:;
    { uint32_t ea = c->r[4] + 0x1f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[1] + c->r[7];
    { uint32_t ea = c->r[5] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb9740; }
    c->r[0] = c->r[5];
    c->r[14] = 0xbb96b8u; f_ceba88(c);
    c->v.s[16] = LD32(c->r[5] + 48u);
    c->v.s[18] = LD32(c->r[5] + 52u);
    c->v.s[20] = LD32(c->r[5] + 56u);
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->v.s[0] = c->v.s[20];
    c->v.s[2] = c->v.s[18];
    c->v.s[4] = c->v.s[16];
    if (COND_NE) { goto L_bb9718; }
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[20];
    c->v.s[2] = c->v.s[18];
    c->v.s[4] = c->v.s[16];
    c->r[0] = c->r[0] & 0xc000u;
    (void)f_subs(c, c->r[0], 0x4000u);
    if (COND_EQ) { goto L_bb9718; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbb970cu; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[5] + 56u);
    c->v.s[4] = LD32(c->r[5] + 48u);
    c->v.s[2] = LD32(c->r[5] + 52u);
L_bb9718:;
    c->v.f[4] = c->v.f[4] - c->v.f[16];
    c->v.f[2] = c->v.f[2] - c->v.f[18];
    c->v.f[0] = c->v.f[0] - c->v.f[20];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[5] + 0xdcu; ST32(ea, c->r[8]); }
    ST32(c->r[5] + 208u, c->v.s[4]);
    ST32(c->r[5] + 212u, c->v.s[2]);
    ST32(c->r[5] + 216u, c->v.s[0]);
    c->r[14] = 0xbb973cu; f_cec308(c);
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb9740:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[7] = c->r[7] + 0x130u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_bb969c; }
L_bb9754:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bb975c(Cpu *restrict c) {
    FN_ENTER(0xbb975cu);
L_bb975c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[0];
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[11] + 0x1d8u; uint32_t v = LD32(ea); c->r[11] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[11] + 4u; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    c->r[5] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_bb9854; }
    c->r[14] = ~0x0u;
    c->r[8] = 0x0u;
    c->r[9] = 0x130u;
    c->r[4] = 0x0u;
L_bb9798:;
    { uint32_t ea = c->r[0] + 0x1f4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[4] * c->r[9] + c->r[2]; c->r[3] = r; }
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[6] + 0x108u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb9844; }
    { uint32_t ea = c->r[3] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[3] + 0xc0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0xc8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0xccu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x1f0u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_bb97f0; }
    goto L_bb9834;
L_bb97e4:;
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bb9834; }
L_bb97f0:;
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x7u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb97e4; }
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_NE) { goto L_bb97e4; }
    { uint32_t ea = c->r[11]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[6] = 0xffffu;
    c->r[2] = c->r[2] & c->r[14];
    c->r[1] = c->r[1] & c->r[14];
    c->r[6] = c->r[7] & c->r[6];
    c->r[7] = c->r[7] & 0xffff0000u;
    c->r[3] = c->r[3] & c->r[14];
    c->r[7] = c->r[7] + 0x10000u;
    c->r[5] = c->r[7] | c->r[6];
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); }
    goto L_bb9844;
L_bb9834:;
    c->r[2] = c->r[2] & 0xfffffffeu;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
L_bb9844:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[5]);
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_bb9798; }
L_bb9854:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb9858(Cpu *restrict c) {
    FN_ENTER(0xbb9858u);
L_bb9858:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xf2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x1f0u; uint32_t v = LD32(ea); c->r[8] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[8], 0x0u); }
    if (COND_EQ) { goto L_bb9ce8; }
    { uint32_t ea = c->r[4] + 0x20cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1f8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[0] & 0xffff0000u;
    c->r[7] = c->r[6] + 0x60u;
    { uint32_t ea = c->r[4] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb9918; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x600u;
    c->r[3] = 0x0u;
    c->v.s[2] = 0x3b800000u;
    { uint32_t ea = c->r[6] + 0x4cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[2] = (c->r[2] & 0xf000ffffu) | ((c->r[5] << 16) & 0xfff0000u);
    c->r[1] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[4] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffu;
    c->v.s[0] = c->r[0];
    c->r[0] = c->r[8];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->r[14] = 0xbb9900u; f_c58bb4(c);
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[0] = (c->r[0] & 0xffcfffffu) | ((c->r[1] << 20) & 0x300000u);
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x20cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
L_bb9918:;
    c->r[1] = 0x110u;
    c->r[5] = c->r[4];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD16(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_bb9960; }
L_bb9930:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    c->r[14] = 0xbb9940u; f_c58c5c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x20cu; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_bb9930; }
L_bb9960:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[6] + 0x8u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bb99a4; }
    { uint32_t ea = c->r[4] + 0xf2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb99bc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb9994u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffdfffffu;
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    goto L_bb99bc;
L_bb99a4:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb99bc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb99bcu; rt_dispatch(c);
L_bb99bc:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 260u);
    c->r[1] = 0x10u;
    c->v.s[16] = 0x3f800000u;
    c->r[3] = c->r[6] + 0x20u;
    c->r[2] = c->r[1] & (c->r[0] >> 21);
    c->r[0] = c->r[1] & (c->r[0] >> 20);
    c->v.f[14] = c->v.f[16] - c->v.f[0];
    c->r[2] = c->r[3] + c->r[2];
    c->r[0] = c->r[3] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[12]);
    ST32(c->r[4] + 64u, c->v.s[2]);
    ST32(c->r[4] + 68u, c->v.s[4]);
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    ST32(c->r[4] + 72u, c->v.s[0]);
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0xf000000u;
    { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x6000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bb9a78; }
    c->v.s[0] = LD32(c->r[4] + 320u);
    c->v.s[2] = LD32(c->r[4] + 324u);
    c->v.s[6] = LD32(c->r[4] + 328u);
    c->v.s[14] = LD32(c->r[4] + 332u);
    c->v.s[4] = LD32(c->r[4] + 292u);
    c->v.s[8] = LD32(c->r[4] + 296u);
    c->v.s[7] = LD32(c->r[4] + 300u);
    c->v.s[10] = LD32(c->r[4] + 304u);
    c->v.s[1] = LD32(c->r[4] + 308u);
    c->v.s[3] = LD32(c->r[4] + 312u);
    c->v.s[5] = LD32(c->r[4] + 316u);
    c->v.s[12] = LD32(c->r[4] + 288u);
    goto L_bb9c58;
L_bb9a78:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb9b94; }
    c->v.s[2] = LD32(c->r[6] + 100u);
    c->v.s[0] = LD32(c->r[6] + 96u);
    c->v.s[4] = LD32(c->r[6] + 104u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bb9ab4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbb9ab4u; f_15efddc(c);
L_bb9ab4:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bb9ae8; }
    { uint32_t ea = c->r[6] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->v.s[4] = c->r[1];
    c->v.s[2] = LD32(c->r[6] + 104u);
    goto L_bb9b0c;
L_bb9ae8:;
    c->v.f[8] = c->v.f[16] / c->v.f[0];
    c->v.s[4] = LD32(c->r[6] + 100u);
    c->v.s[2] = LD32(c->r[6] + 96u);
    c->v.s[6] = LD32(c->r[6] + 104u);
    c->v.f[0] = c->v.f[8] * c->v.f[2];
    c->v.f[4] = c->v.f[8] * c->v.f[4];
    c->v.f[2] = c->v.f[8] * c->v.f[6];
    ST32(c->r[13], c->v.s[0]);
    ST32(c->r[13] + 4u, c->v.s[4]);
L_bb9b0c:;
    c->r[0] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[5] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    ST32(c->r[13] + 8u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_bb9b7c; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[12] = LD32(c->r[1] + 20u);
    c->v.s[1] = LD32(c->r[1] + 16u);
    c->v.s[6] = LD32(c->r[1] + 4u);
    c->v.s[8] = LD32(c->r[1] + 8u);
    c->v.s[10] = LD32(c->r[1]);
    c->v.s[14] = LD32(c->r[1] + 24u);
    c->v.s[3] = LD32(c->r[1] + 32u);
    c->v.s[5] = LD32(c->r[1] + 36u);
    c->v.s[7] = LD32(c->r[1] + 40u);
    c->v.f[1] = c->v.f[1] * c->v.f[4];
    c->v.f[12] = c->v.f[4] * c->v.f[12];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] * c->v.f[14];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[3] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[5]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[7]);
    ST32(c->r[13], c->v.s[1]);
    ST32(c->r[13] + 4u, c->v.s[12]);
    ST32(c->r[13] + 8u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_bb9b7c:;
    c->r[1] = c->r[13];
    c->r[0] = c->r[4];
    c->r[14] = 0xbb9b88u; f_bb59bc(c);
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb9b94:;
    c->v.s[0] = LD32(c->r[4] + 80u);
    c->v.s[2] = LD32(c->r[4] + 84u);
    c->v.s[4] = LD32(c->r[4] + 88u);
    c->v.s[6] = LD32(c->r[4] + 92u);
    c->r[3] = 0x0u;
    c->v.f[14] = c->v.f[4] + c->v.f[4];
    c->v.f[8] = c->v.f[2] + c->v.f[2];
    c->v.f[11] = c->v.f[0] + c->v.f[0];
    c->v.f[5] = c->v.f[2] * c->v.f[8];
    c->v.f[10] = c->v.f[4] * c->v.f[14];
    c->v.f[13] = c->v.f[0] * c->v.f[11];
    c->v.f[1] = c->v.f[14] * c->v.f[6];
    c->v.f[7] = c->v.f[8] * c->v.f[6];
    c->v.f[3] = c->v.f[0] * c->v.f[8];
    c->v.f[9] = c->v.f[0] * c->v.f[14];
    c->v.f[2] = c->v.f[2] * c->v.f[14];
    c->v.f[6] = c->v.f[11] * c->v.f[6];
    c->v.f[4] = c->v.f[5] + c->v.f[10];
    c->v.f[14] = c->v.f[13] + c->v.f[5];
    c->v.f[0] = c->v.f[13] + c->v.f[10];
    c->v.f[10] = c->v.f[3] - c->v.f[1];
    c->v.f[8] = c->v.f[9] - c->v.f[7];
    c->v.f[12] = c->v.f[16] - c->v.f[4];
    c->v.f[4] = c->v.f[3] + c->v.f[1];
    c->v.f[3] = c->v.f[2] + c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.f[6] = c->v.f[16] - c->v.f[14];
    c->v.s[14] = 0x0u;
    c->v.f[1] = c->v.f[16] - c->v.f[0];
    c->v.f[0] = c->v.f[9] + c->v.f[7];
    c->v.s[5] = c->v.s[14];
    c->v.s[7] = c->v.s[14];
    ST32(c->r[4] + 288u, c->v.s[12]);
    ST32(c->r[4] + 292u, c->v.s[4]);
    ST32(c->r[4] + 296u, c->v.s[8]);
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[3]); }
    ST32(c->r[4] + 304u, c->v.s[10]);
    ST32(c->r[4] + 308u, c->v.s[1]);
    ST32(c->r[4] + 312u, c->v.s[3]);
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[3]); }
    ST32(c->r[4] + 320u, c->v.s[0]);
    ST32(c->r[4] + 324u, c->v.s[2]);
    ST32(c->r[4] + 328u, c->v.s[6]);
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[3]); }
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[3]); }
L_bb9c58:;
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[3]); }
    c->v.s[9] = LD32(c->r[4] + 96u);
    c->v.f[12] = c->v.f[9] * c->v.f[12];
    c->v.f[4] = c->v.f[9] * c->v.f[4];
    c->v.f[8] = c->v.f[9] * c->v.f[8];
    ST32(c->r[4] + 176u, c->v.s[12]);
    ST32(c->r[4] + 180u, c->v.s[4]);
    c->v.f[4] = c->v.f[9] * c->v.f[7];
    ST32(c->r[4] + 184u, c->v.s[8]);
    ST32(c->r[4] + 188u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[4] + 100u);
    c->v.f[8] = c->v.f[4] * c->v.f[10];
    c->v.f[10] = c->v.f[4] * c->v.f[1];
    ST32(c->r[4] + 192u, c->v.s[8]);
    c->v.f[8] = c->v.f[4] * c->v.f[3];
    c->v.f[4] = c->v.f[4] * c->v.f[5];
    ST32(c->r[4] + 196u, c->v.s[10]);
    ST32(c->r[4] + 200u, c->v.s[8]);
    ST32(c->r[4] + 204u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[4] + 104u);
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    ST32(c->r[4] + 208u, c->v.s[0]);
    ST32(c->r[4] + 212u, c->v.s[2]);
    c->v.f[0] = c->v.f[4] * c->v.f[6];
    c->v.f[2] = c->v.f[4] * c->v.f[14];
    ST32(c->r[4] + 216u, c->v.s[0]);
    ST32(c->r[4] + 220u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[3]); }
L_bb9ce8:;
    c->r[13] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bb9cfc(Cpu *restrict c) {
    FN_ENTER(0xbb9cfcu);
L_bb9cfc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[1] = 0xffffu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x1d8u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bb9df4; }
    c->r[11] = c->r[4] + 0x110u;
    c->r[8] = 0x80u;
    c->r[10] = 0x1u;
    c->r[3] = 0x0u;
    c->r[7] = 0xd0u;
    c->r[6] = 0x0u;
L_bb9d3c:;
    { uint32_t ea = c->r[4] + 0x1f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[1] + c->r[7];
    { uint32_t ea = c->r[9] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] & ~c->r[1];
    c->r[2] = c->r[8] & ~c->r[2];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { goto L_bb9de0; }
    c->v.s[6] = LD32(c->r[9]);
    c->v.s[0] = LD32(c->r[9] - 160u);
    c->v.s[8] = LD32(c->r[9] + 4u);
    c->v.s[2] = LD32(c->r[9] - 156u);
    c->v.s[10] = LD32(c->r[9] + 8u);
    c->v.s[4] = LD32(c->r[9] - 152u);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[16] = c->v.f[4] - c->v.f[10];
    c->v.f[18] = c->v.f[2] - c->v.f[8];
    c->v.f[20] = c->v.f[0] - c->v.f[6];
    if (COND_NE) { goto L_bb9dc0; }
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xc000u;
    (void)f_subs(c, c->r[0], 0x4000u);
    if (COND_EQ) { goto L_bb9dc0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9] - 0xd0u;
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbb9db0u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[9] - 160u);
    c->v.s[2] = LD32(c->r[9] - 156u);
    c->v.s[4] = LD32(c->r[9] - 152u);
    c->r[3] = 0x0u;
L_bb9dc0:;
    c->v.f[0] = c->v.f[0] - c->v.f[20];
    c->v.f[2] = c->v.f[2] - c->v.f[18];
    c->v.f[4] = c->v.f[4] - c->v.f[16];
    ST32(c->r[9], c->v.s[0]);
    ST32(c->r[9] + 4u, c->v.s[2]);
    ST32(c->r[9] + 8u, c->v.s[4]);
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_bb9de0:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[7] = c->r[7] + 0x130u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_bb9d3c; }
L_bb9df4:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bb9e00(Cpu *restrict c) {
    FN_ENTER(0xbb9e00u);
L_bb9e00:;
    { uint32_t ea = c->r[0] + 0xf0u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 6) & 0x1u;
    return;
}
void f_bb9e0c(Cpu *restrict c) {
    FN_ENTER(0xbb9e0cu);
L_bb9e0c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffff0fffu;
    { uint32_t ea = c->r[4] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bba554; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { c->r[1] = f_adds(c, c->r[2], c->r[1]); }
    if (COND_EQ) { goto L_bba554; }
    { uint32_t ea = c->r[1] + 0xau; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { c->r[7] = c->r[1] + c->r[7]; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_bba554; }
    c->r[1] = 0xe88c54u;
    { uint32_t ea = c->r[4] + 0x1bbu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0xbb9e80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x234u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_bba554; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbb9e9cu; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bba554; }
    c->r[0] = 0xe7ee6cu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    c->r[3] = c->r[4];
    { uint32_t ea = 0xbb9ec0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] >> 3) & 0x7fu;
    c->r[1] = c->r[1] + 0x1u;
    c->r[14] = 0xbb9eccu; f_e08100(c);
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    c->r[2] = c->r[4] + 0x1a0u;
    c->r[3] = c->r[5] + 0x1a0u;
    c->r[8] = c->r[5] + 0x110u;
    { uint32_t ea = c->r[5] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[9]); }
    c->r[0] = c->r[6] - 0x1u;
    c->r[0] = (c->r[0] >> 3);
    (void)f_subs(c, c->r[0], 0x4au);
    if (COND_HI) { goto L_bb9f30; }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | (c->r[6] << 16);
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
L_bb9f30:;
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xfu;
    c->r[0] = c->r[5];
    c->r[14] = 0xbb9f40u; f_bb6720(c);
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[0] = (c->r[0] >> 12);
    c->r[3] = (c->r[3] & 0xffff0fffu) | ((c->r[0] << 12) & 0xf000u);
    c->r[0] = 0x11au;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = (c->r[3] & 0xfff0ffffu) | ((c->r[0] << 16) & 0xf0000u);
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1];
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[2] & 0xffffff7fu;
    if (COND_NE) { c->r[2] = c->r[1] | 0x80u; }
    { uint32_t ea = c->r[5] + 0xf0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_bb9fb8; }
    { uint32_t ea = c->r[4] + 0x1f0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bb9fb8; }
L_bb9f98:;
    { uint32_t ea = c->r[1] + 0x16u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_bb9fb4; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_bb9f98; }
    goto L_bb9fb8;
L_bb9fb4:;
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
L_bb9fb8:;
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[4] + 0x110u;
    c->r[0] = c->r[1] & 0xfu;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_bba030; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { goto L_bba030; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_bba068; }
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0xbb9fecu; f_bb598c(c);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_bba218; }
    { uint32_t ea = c->r[9] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9] + 0x90u;
    goto L_bba24c;
L_bba030:;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_bba140; }
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0xbba044u; f_bb598c(c);
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[2] = c->r[4] + 0x40u;
    if (COND_NE) { c->r[1] = c->r[9] + 0x90u; }
    if (COND_EQ) { c->r[1] = c->r[4] + 0x50u; }
    c->r[3] = (c->r[0] >> 4) & 0xfu;
    c->r[0] = c->r[5];
    c->r[14] = 0xbba064u; f_bb62e0(c);
    goto L_bba4c0;
L_bba068:;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[2] ^ c->r[1];
    { uint32_t r = c->r[1] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bba260; }
    c->v.s[0] = LD32(c->r[4] + 80u);
    c->v.s[2] = LD32(c->r[4] + 84u);
    c->v.s[4] = LD32(c->r[4] + 88u);
    c->v.s[6] = LD32(c->r[4] + 92u);
    c->v.s[16] = 0x3f800000u;
    (void)f_subs(c, c->r[0], 0x6u);
    c->v.f[12] = c->v.f[4] + c->v.f[4];
    c->v.f[8] = c->v.f[2] + c->v.f[2];
    c->v.f[10] = c->v.f[0] + c->v.f[0];
    c->v.f[1] = c->v.f[0] * c->v.f[10];
    c->v.f[14] = c->v.f[2] * c->v.f[8];
    c->v.f[4] = c->v.f[4] * c->v.f[12];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[3] = c->v.f[2] * c->v.f[12];
    c->v.f[7] = c->v.f[0] * c->v.f[12];
    c->v.f[5] = c->v.f[8] * c->v.f[6];
    c->v.f[9] = c->v.f[0] * c->v.f[8];
    c->v.f[12] = c->v.f[12] * c->v.f[6];
    c->v.f[11] = c->v.f[1] + c->v.f[14];
    c->v.f[1] = c->v.f[1] + c->v.f[4];
    c->v.f[13] = c->v.f[14] + c->v.f[4];
    c->v.f[14] = c->v.f[9] - c->v.f[12];
    c->v.f[2] = c->v.f[3] - c->v.f[10];
    c->v.f[8] = c->v.f[3] + c->v.f[10];
    c->v.f[0] = c->v.f[7] + c->v.f[5];
    c->v.f[6] = c->v.f[7] - c->v.f[5];
    c->v.f[12] = c->v.f[9] + c->v.f[12];
    c->v.f[4] = c->v.f[16] - c->v.f[11];
    c->v.f[1] = c->v.f[16] - c->v.f[1];
    c->v.f[10] = c->v.f[16] - c->v.f[13];
    if (COND_HI) { goto L_bba280; }
    c->v.s[5] = 0x0u;
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xbba10cu + 0xcu;
    c->v.s[3] = 0xbf800000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[7] = c->v.s[5];
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xbba134u: goto L_bba134; case 0xbba28cu: goto L_bba28c; case 0xbba298u: goto L_bba298; case 0xbba2acu: goto L_bba2ac; case 0xbba3b8u: goto L_bba3b8; case 0xbba3c8u: goto L_bba3c8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bba134:;
    c->r[0] = 0xe7f118u;
    { uint32_t ea = 0xbba140u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bba2a0;
L_bba140:;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[2] ^ c->r[1];
    { uint32_t r = c->r[1] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bba270; }
    c->v.s[0] = LD32(c->r[4] + 80u);
    c->v.s[2] = LD32(c->r[4] + 84u);
    c->v.s[4] = LD32(c->r[4] + 88u);
    c->v.s[6] = LD32(c->r[4] + 92u);
    c->v.s[16] = 0x3f800000u;
    (void)f_subs(c, c->r[0], 0x6u);
    c->v.f[8] = c->v.f[2] + c->v.f[2];
    c->v.f[12] = c->v.f[4] + c->v.f[4];
    c->v.f[10] = c->v.f[0] + c->v.f[0];
    c->v.f[14] = c->v.f[2] * c->v.f[8];
    c->v.f[1] = c->v.f[0] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[12];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[12];
    c->v.f[5] = c->v.f[0] * c->v.f[12];
    c->v.f[3] = c->v.f[8] * c->v.f[6];
    c->v.f[12] = c->v.f[12] * c->v.f[6];
    c->v.f[7] = c->v.f[0] * c->v.f[8];
    c->v.f[9] = c->v.f[1] + c->v.f[14];
    c->v.f[11] = c->v.f[14] + c->v.f[4];
    c->v.f[1] = c->v.f[1] + c->v.f[4];
    c->v.f[6] = c->v.f[2] - c->v.f[10];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    c->v.f[0] = c->v.f[5] + c->v.f[3];
    c->v.f[8] = c->v.f[7] - c->v.f[12];
    c->v.f[14] = c->v.f[7] + c->v.f[12];
    c->v.f[10] = c->v.f[5] - c->v.f[3];
    c->v.f[12] = c->v.f[16] - c->v.f[1];
    c->v.f[4] = c->v.f[16] - c->v.f[9];
    c->v.f[1] = c->v.f[16] - c->v.f[11];
    if (COND_HI) { goto L_bba3d8; }
    c->v.s[3] = 0x0u;
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xbba1e4u + 0xcu;
    c->v.s[7] = 0xbf800000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[5] = c->v.s[3];
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xbba20cu: goto L_bba20c; case 0xbba3e4u: goto L_bba3e4; case 0xbba3f0u: goto L_bba3f0; case 0xbba404u: goto L_bba404; case 0xbba560u: goto L_bba560; case 0xbba570u: goto L_bba570; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bba20c:;
    c->r[0] = 0xe7f040u;
    { uint32_t ea = 0xbba218u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bba3f8;
L_bba218:;
    { uint32_t ea = c->r[4] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[1] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x50u;
L_bba24c:;
    c->r[0] = (c->r[0] >> 4) & 0xfu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xbba25cu; f_bb5df0(c);
    goto L_bba4c0;
L_bba260:;
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bba330;
L_bba270:;
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bba48c;
L_bba280:;
    c->r[0] = 0xe7e8c0u;
    { uint32_t ea = 0xbba28cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bba2a0;
L_bba28c:;
    c->r[0] = 0xe7ef70u;
    { uint32_t ea = 0xbba298u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bba2a0;
L_bba298:;
    c->r[0] = 0xe7ef60u;
    { uint32_t ea = 0xbba2a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bba2a0:;
    c->v.s[3] = LD32(c->r[0]);
    c->v.s[5] = LD32(c->r[0] + 4u);
    c->v.s[7] = LD32(c->r[0] + 8u);
L_bba2ac:;
    c->v.f[20] = c->v.f[1] * c->v.f[5];
    c->v.f[18] = c->v.f[14] * c->v.f[5];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[12] * c->v.f[3]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.f[22] = c->v.f[8] * c->v.f[5];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[2] * c->v.f[7]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[6] * c->v.f[3]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[7]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[4] * c->v.f[7]);
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bba2f4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbba2f4u; f_15efddc(c);
L_bba2f4:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bba314; }
    c->r[1] = c->v.s[22];
    c->r[0] = c->v.s[20];
    c->r[2] = c->v.s[18];
    goto L_bba330;
L_bba314:;
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[20];
    c->v.f[4] = c->v.f[0] * c->v.f[18];
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    c->r[0] = c->v.s[2];
    c->r[2] = c->v.s[4];
    c->r[1] = c->v.s[0];
L_bba330:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_bba36c; }
    { uint32_t ea = c->r[9] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bba384;
L_bba36c:;
    { uint32_t ea = c->r[4] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bba384:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] & 0xfu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 4) & 0xfu;
    c->r[1] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xbba3b4u; f_bb6660(c);
    goto L_bba4c0;
L_bba3b8:;
    c->v.s[3] = 0x0u;
    c->v.s[5] = 0xbf800000u;
    c->v.s[7] = c->v.s[3];
    goto L_bba2ac;
L_bba3c8:;
    c->v.s[3] = 0x0u;
    c->v.s[7] = 0xbf800000u;
    c->v.s[5] = c->v.s[3];
    goto L_bba2ac;
L_bba3d8:;
    c->r[0] = 0xe7e768u;
    { uint32_t ea = 0xbba3e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bba3f8;
L_bba3e4:;
    c->r[0] = 0xe7ee18u;
    { uint32_t ea = 0xbba3f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bba3f8;
L_bba3f0:;
    c->r[0] = 0xe7ee08u;
    { uint32_t ea = 0xbba3fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bba3f8:;
    c->v.s[7] = LD32(c->r[0]);
    c->v.s[5] = LD32(c->r[0] + 4u);
    c->v.s[3] = LD32(c->r[0] + 8u);
L_bba404:;
    c->v.f[20] = c->v.f[14] * c->v.f[7];
    c->v.f[18] = c->v.f[1] * c->v.f[7];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[12] * c->v.f[5]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[22] = c->v.f[10] * c->v.f[7];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[2] * c->v.f[5]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[6] * c->v.f[3]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[3]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[4] * c->v.f[3]);
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bba44c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbba44cu; f_15efddc(c);
L_bba44c:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bba470; }
    c->r[1] = c->v.s[22];
    c->r[0] = c->v.s[20];
    c->r[2] = c->v.s[18];
    goto L_bba48c;
L_bba470:;
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[20];
    c->v.f[4] = c->v.f[0] * c->v.f[18];
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    c->r[0] = c->v.s[2];
    c->r[2] = c->v.s[4];
    c->r[1] = c->v.s[0];
L_bba48c:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[4] + 0x40u;
    c->r[1] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] & 0xfu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xbba4c0u; f_bb66cc(c);
L_bba4c0:;
    { uint32_t ea = c->r[7] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    c->r[12] = c->r[5] + 0x1c8u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[1] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[7] = c->r[4] + 0x1ccu; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = ~0x0u;
    { uint32_t ea = c->r[5] + 0x1c4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x1b8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] & 0xffffffu;
    { uint32_t ea = c->r[5] + 0x1b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1b8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbba51cu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xeu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0xfc00ffffu) | ((c->r[0] << 16) & 0x3ff0000u);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[2] = c->r[2] & 0xffff0000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[2] | c->r[0];
    { uint32_t ea = c->r[8] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
L_bba554:;
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_bba560:;
    c->v.s[3] = 0x0u;
    c->v.s[5] = 0xbf800000u;
    c->v.s[7] = c->v.s[3];
    goto L_bba404;
L_bba570:;
    c->v.s[5] = 0x0u;
    c->v.s[3] = 0xbf800000u;
    c->v.s[7] = c->v.s[5];
    goto L_bba404;
}
void f_bba5b0(Cpu *restrict c) {
    FN_ENTER(0xbba5b0u);
L_bba5b0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bba6f8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xbba5d8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[5] + 0xf2u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_bba6f8; }
    { uint32_t ea = c->r[5] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bba638; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] & 0x7u;
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_HI) { goto L_bba638; }
    { uint32_t ea = c->r[5] + 0x1d4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1d4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_bba638; }
    c->r[2] = 0x1e0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x4807u; }
    if (COND_NE) { c->r[0] = c->r[0] & c->r[1]; }
    if (COND_NE) { c->r[1] = 0x4802u; }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_NE) { goto L_bba6f8; }
L_bba638:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xbba644u; f_bb770c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    c->v.s[0] = 0x43800000u;
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_CS) { c->r[0] = c->r[7]; }
    c->r[0] = c->r[5] + (c->r[0] << 2);
    c->v.s[2] = LD32(c->r[0] + 384u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[8] = c->v.s[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_bba6f8; }
    { uint32_t ea = c->r[5] + 0x1c0u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_bba6a0; }
    c->r[0] = 0xe8843cu;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbba698u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbba69cu; f_d91f44(c);
    c->r[7] = c->r[0];
L_bba6a0:;
    { uint32_t ea = c->r[5] + 0x1f0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_bba6bc; }
    goto L_bba6f8;
L_bba6b0:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bba6f8; }
L_bba6bc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbba6d0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bba6b0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[8];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[6]; c->r[14] = 0xbba6f4u; rt_dispatch(c);
    goto L_bba6b0;
L_bba6f8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
